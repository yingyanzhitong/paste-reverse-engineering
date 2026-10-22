/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100016654 | FUN_100016654 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100016890 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100016654(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  LocalizedStringResource LVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  undefined *puVar13;
  undefined *puVar14;
  ButtonRole BVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_b0 [12];
  undefined4 local_a4;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  MainActor *local_88;
  long local_80;
  long local_78;
  String local_70;
  
  puVar7 = &DAT_100fa6e90;
  local_a4 = param_4;
  local_98 = param_3;
  uStack_90 = param_5;
  local_78 = param_1;
  FUN_1000037f0(&DAT_100fa6e90,&DAT_100c239b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_b0 + -extraout_x8;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown = puVar18 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_80 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar16 = (long)LVar8.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar16 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar19 - extraout_x12_01;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar10 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar13,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_88 = pMVar9;
  UVar11 = Swift::Actor::get_unownedExecutor();
  UVar12 = UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar12.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x60,UVar11.unknown,puVar10);
  }
  FUN_1001c3008(LVar8.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar8);
  puVar13 = &DAT_100eb04b8;
  _swift_allocObject(&DAT_100eb04b8,0x30,7);
  uVar4 = uStack_90;
  uVar3 = local_98;
  *(undefined8 *)(puVar13 + 0x10) = param_2;
  *(undefined8 *)(puVar13 + 0x18) = local_98;
  puVar13[0x20] = (byte)local_a4 & 1;
  *(undefined8 *)(puVar13 + 0x28) = uStack_90;
  puVar14 = puVar13;
  FUN_100008378();
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar20,puVar14,FUN_100016c94,puVar13,PTR___type_metadata_for_Swift_String_100eac208,
             puVar14);
  FUN_1001c0788(LVar8.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar8);
  SwiftUI::ButtonRole::get_cancel((ButtonRole)local_70.str);
  BVar15 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar15.unknown + -8) + 0x38))(puVar18,0,1,BVar15.unknown);
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar19,BVar15.unknown,puVar18,FUN_100016a6c,0,puVar1,puVar14);
  lVar5 = local_80;
  pcVar17 = *(code **)(local_80 + 0x10);
  (*pcVar17)(lVar16,lVar20,puVar7);
  lVar2 = local_a0;
  (*pcVar17)(local_a0,lVar19,puVar7);
  lVar6 = local_78;
  (*pcVar17)(local_78,lVar16,puVar7);
  puVar13 = &DAT_100fa6e98;
  FUN_1000037f0(&DAT_100fa6e98,&DAT_100c26360);
  (*pcVar17)(lVar6 + *(int *)(puVar13 + 0x30),lVar2,puVar7);
  pcVar17 = *(code **)(lVar5 + 8);
  (*pcVar17)(lVar19,puVar7);
  (*pcVar17)(lVar20,puVar7);
  (*pcVar17)(lVar2,puVar7);
  (*pcVar17)(lVar16,puVar7);
  _swift_release(local_88);
  return;
}



/* Address: 0x1000169bc | FUN_1000169bc */

void FUN_1000169bc(void)

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
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x61,UVar4.unknown,puVar3);
  }
  FUN_100063e0c();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100016a6c | FUN_100016a6c */

void FUN_100016a6c(void)

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
              ("Paste/ShortcutsSettingsView.swift",0x21,1,0x62,UVar4.unknown,puVar3);
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100016b04 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::View::_makeView */

_ViewOutputs
(extension_SwiftUI)::SwiftUI::View::_makeView(_GraphValue<undefined> view,_ViewInputs inputs)

{
  _ViewOutputs _Var1;
  
  _Var1 = _makeView(view,inputs);
  return (_ViewOutputs)_Var1.unknown;
}



/* Address: 0x100016b08 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::View::_makeViewList */

_ViewListOutputs
(extension_SwiftUI)::SwiftUI::View::_makeViewList
          (_GraphValue<undefined> view,_ViewListInputs inputs)

{
  _ViewListOutputs _Var1;
  
  _Var1 = _makeViewList(view,inputs);
  return (_ViewListOutputs)_Var1.unknown;
}



/* Address: 0x100016b0c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::View::$_viewListCount */

void (extension_SwiftUI)::SwiftUI::View::__viewListCount(_ViewListCountInputs inputs)

{
  __viewListCount(inputs);
  return;
}



/* Address: 0x100016b10 | FUN_100016b10 */

void FUN_100016b10(undefined8 *param_1,HorizontalAlignment param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  uVar6 = unaff_x20[3];
  HVar4 = SwiftUI::HorizontalAlignment::get_leading(param_2);
  *param_1 = HVar4.unknown;
  param_1[1] = 0x4034000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar5 = &DAT_100fa6e28;
  FUN_1000037f0(&DAT_100fa6e28,&DAT_100c23958);
  FUN_100014a78((long)param_1 + (long)*(int *)(puVar5 + 0x2c),uVar1,uVar2,uVar3,uVar6);
  return;
}



/* Address: 0x100016b88 | FUN_100016b88 */

undefined8 FUN_100016b88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6e38;
  FUN_1000037f0(&DAT_100fa6e38,&DAT_100c23968);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100016bd8 | FUN_100016bd8 */

undefined8 FUN_100016bd8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6e38;
  FUN_1000037f0(&DAT_100fa6e38,&DAT_100c23968);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100016c20 | FUN_100016c20 */

undefined8 FUN_100016c20(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6e40;
  FUN_1000037f0(&DAT_100fa6e40,&DAT_100c23970);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100016c70 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016c74 | FUN_100016c74 */

void FUN_100016c74(void)

{
  long unaff_x20;
  
  FUN_100016534(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100016c84 | FUN_100016c84 */

void FUN_100016c84(void)

{
  long unaff_x20;
  
  FUN_100016654(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100016c94 | FUN_100016c94 */

void FUN_100016c94(void)

{
  long unaff_x20;
  
  FUN_1000169bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100016ca4 | FUN_100016ca4 */

void FUN_100016ca4(void)

{
  long unaff_x20;
  
  FUN_100015424(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100016cb4 | FUN_100016cb4 */

void FUN_100016cb4(void)

{
  long unaff_x20;
  
  FUN_100015b48(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100016cc4 | thunk_FUN_100063ca0 */

void thunk_FUN_100063ca0(void)

{
  FUN_100063ca0();
  return;
}



/* Address: 0x100016cc8 | thunk_FUN_100063d8c */

void thunk_FUN_100063d8c(void)

{
  FUN_100063da0();
  return;
}



/* Address: 0x100016ccc | FUN_100016ccc */

void FUN_100016ccc(void)

{
  long unaff_x20;
  
  FUN_100015ebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100016cdc | FUN_100016cdc */

void FUN_100016cdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_100fa6ec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa6eb0;
  FUN_100005c24(&DAT_100fa6eb0,&DAT_100c239f0);
  local_18 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puVar2 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08,
             puVar1,&local_18);
  DAT_100fa6ec0 = puVar2;
  return;
}



/* Address: 0x100016d44 | thunk_FUN_100063ac4 */

void thunk_FUN_100063ac4(void)

{
  FUN_100063ac4();
  return;
}



/* Address: 0x100016d48 | thunk_FUN_100063bac */

void thunk_FUN_100063bac(void)

{
  FUN_100063da0();
  return;
}



/* Address: 0x100016d4c | FUN_100016d4c */

void FUN_100016d4c(void)

{
  long unaff_x20;
  
  FUN_1000159d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100016d5c | FUN_100016d5c */

void FUN_100016d5c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_retain();
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100016d74 | FUN_100016d74 */

void FUN_100016d74(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_release();
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100016d8c | FUN_100016d8c */

void FUN_100016d8c(void)

{
  long unaff_x20;
  
  FUN_10001507c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100c23a88);
  return;
}



/* Address: 0x100016db4 | FUN_100016db4 */

void FUN_100016db4(void)

{
  long unaff_x20;
  
  FUN_10001507c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100c23a60);
  return;
}



/* Address: 0x100016ddc | thunk_FUN_10006386c */

void thunk_FUN_10006386c(void)

{
  FUN_10006386c();
  return;
}



/* Address: 0x100016de0 | thunk_FUN_100063958 */

void thunk_FUN_100063958(void)

{
  FUN_100063958();
  return;
}



/* Address: 0x100016de4 | thunk_FUN_10006368c */

void thunk_FUN_10006368c(void)

{
  FUN_10006368c();
  return;
}



/* Address: 0x100016de8 | thunk_FUN_100063774 */

void thunk_FUN_100063774(void)

{
  FUN_100063774();
  return;
}



/* Address: 0x100016dec | FUN_100016dec */

void FUN_100016dec(void)

{
  long unaff_x20;
  
  FUN_10001507c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100c23ad8);
  return;
}



/* Address: 0x100016e14 | FUN_100016e14 */

void FUN_100016e14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100016e40 | FUN_100016e40 */

void FUN_100016e40(void)

{
  long unaff_x20;
  
  FUN_10001507c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100c23ab0);
  return;
}



/* Address: 0x100016e68 | thunk_FUN_1000634ac */

void thunk_FUN_1000634ac(void)

{
  FUN_1000634ac();
  return;
}



/* Address: 0x100016e6c | thunk_FUN_100063598 */

void thunk_FUN_100063598(void)

{
  FUN_100063598();
  return;
}



/* Address: 0x100016e70 | thunk_FUN_1000632cc */

void thunk_FUN_1000632cc(void)

{
  FUN_1000632cc();
  return;
}



/* Address: 0x100016e74 | thunk_FUN_1000633b4 */

void thunk_FUN_1000633b4(void)

{
  FUN_1000633b4();
  return;
}



/* Address: 0x100016e78 | FUN_100016e78 */

void FUN_100016e78(void)

{
  FUN_100016eac(&DAT_100fa6f00,&DAT_100fa6f08,&DAT_100c23b00,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x100016eac | FUN_100016eac */

void FUN_100016eac(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x100016ef0 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016ef4 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016ef8 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016efc | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016f00 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016f04 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016f08 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100016f0c | _TtC5Paste14TabBarCellIcon::intrinsicContentSize */

/* Function Stack Size: 0x10 bytes */

CGSize _TtC5Paste14TabBarCellIcon::intrinsicContentSize(ID param_1,SEL param_2)

{
  char cVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  double dVar6;
  CGSize CVar7;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellIcon.swift",0x1a,1,0x14,UVar4.unknown,pMVar2);
  }
  cVar1 = *(char *)(param_1 + type + 1);
  _swift_release(pMVar3);
  dVar6 = 18.0;
  if (cVar1 != '\x02') {
    dVar6 = 16.0;
  }
  CVar7.field1_0x8 = dVar6;
  CVar7.field0_0x0 = dVar6;
  return CVar7;
}



/* Address: 0x100016fb8 | _TtC5Paste14TabBarCellIcon::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste14TabBarCellIcon::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
              ("Paste/TabBarCellIcon.swift",0x1a,1,0x23,UVar3.unknown,pMVar2);
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8def0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001706c);
  (*pcVar1)();
}



/* Address: 0x10001706c | FUN_10001706c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001706c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  ulong uVar2;
  ID unaff_x20;
  ID self;
  double extraout_d0;
  double extraout_d0_00;
  double dVar3;
  double dVar4;
  double dVar5;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"drawRect:",param_1,param_2,param_3,
                      param_4);
  uVar1 = *(ushort *)(unaff_x20 + _TtC5Paste14TabBarCellIcon::type);
  uVar2 = (ulong)uVar1;
  if ((uVar1 & 0xff00) == 0x200) {
    FUN_1000171dc();
  }
  else {
    self = (ID)(uVar1 >> 8 & 1);
    FUN_1003de9a0();
    thunk_FUN_1003ed158(0x4028000000000000,self,uVar2);
    objc_stub::bounds(unaff_x20);
    dVar5 = param_2;
    objc_stub::size(self);
    dVar3 = extraout_d0;
    _CGRectGetWidth(extraout_d0,param_2,param_3,param_4);
    dVar4 = extraout_d0;
    _CGRectGetHeight(extraout_d0,param_2,param_3,param_4);
    objc_stub::drawInRect_fromRect_operation_fraction_
              (self,(dVar3 - extraout_d0_00) * 0.5,(dVar4 - dVar5) * 0.5,extraout_d0_00,dVar5,0,0,0,
               0,2);
  }
  return;
}



/* Address: 0x1000171dc | FUN_1000171dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_1000171dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  byte bVar2;
  ID *pIVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID *pIVar7;
  ID unaff_x20;
  double extraout_d0;
  double extraout_d0_00;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double dVar12;
  
  pIVar3 = (ID *)0x0;
  FUN_100017740();
  FUN_10020cccc();
  IVar6 = *pIVar3;
  IVar5 = pIVar3[1];
  _swift_bridgeObjectRetain_n(IVar5,2);
  IVar4 = IVar6;
  FUN_1000f653c(IVar6,IVar5);
  if (IVar4 == 0) {
    _swift_bridgeObjectRelease(IVar5);
    IVar6 = 0xd000000000000013;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (IVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100017410);
      (*pcVar1)();
    }
  }
  else {
    FUN_1000f653c(IVar6,IVar5);
    if (IVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100017250);
      (*pcVar1)();
    }
  }
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar11 = 0x402a000000000000;
  if ((bVar2 & 1) == 0) {
    uVar11 = 0x402e000000000000;
  }
  dVar12 = *(double *)PTR__NSFontWeightRegular_100ea90b8;
  IVar5 = NSImageSymbolConfiguration::configurationWithPointSize_weight_
                    ((ID)&_OBJC_CLASS___NSImageSymbolConfiguration,uVar11,dVar12);
  IVar6 = objc_stub::imageWithSymbolConfiguration_(IVar6,IVar5);
  if (IVar6 != 0) {
    objc_stub::bounds(unaff_x20);
    dVar10 = dVar12;
    objc_stub::size(IVar6);
    dVar8 = extraout_d0;
    _CGRectGetWidth(extraout_d0,dVar12,param_3,param_4);
    dVar9 = extraout_d0;
    _CGRectGetHeight(extraout_d0,dVar12,param_3,param_4);
    objc_stub::drawInRect_fromRect_operation_fraction_
              (IVar6,(dVar8 - extraout_d0_00) * 0.5,(dVar9 - dVar10) * 0.5,extraout_d0_00,dVar10,0,0
               ,0,0,2);
  }
  pIVar3 = (ID *)0x0;
  FUN_1001fe15c();
  pIVar3 = (ID *)*pIVar3;
  pIVar7 = pIVar3;
  FUN_1001fe19c();
  if ((bVar2 & 1) == 0) {
    pIVar3 = (ID *)*pIVar7;
  }
  objc_stub::set((ID)pIVar3);
  objc_stub::bounds(unaff_x20);
  (extension_AppKit)::__C::CGRect::fill((NSCompositingOperation)0x3);
  return 0;
}



/* Address: 0x100017410 | _TtC5Paste14TabBarCellIcon::drawRect: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

void _TtC5Paste14TabBarCellIcon::drawRect_(ID param_1,SEL param_2,CGRect param_3)

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
              ("Paste/TabBarCellIcon.swift",0x1a,1,0x27,UVar3.unknown,pMVar1);
  }
  FUN_10001706c(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000174dc | _TtC5Paste14TabBarCellIcon::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste14TabBarCellIcon::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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
              ("Paste/TabBarCellIcon.swift",0x1a,1,0xc,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TabBarCellIcon",0x14,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100017564);
  (*pcVar1)();
}



/* Address: 0x100017564 | FUN_100017564 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100017564(void)

{
  return ZEXT816(0x100f8f698);
}



/* Address: 0x100017584 | FUN_100017584 */

void FUN_100017584(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100017590 | FUN_100017590 */

uint FUN_100017590(ushort *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    param_2 = param_2 + 0xff02;
    uVar2 = 4;
    if (param_2 < 0xffff0000) {
      uVar2 = 2;
    }
    if (param_2 < 0xff0000) {
      uVar2 = 1;
    }
    uVar1 = 0;
    if (0xffff < param_2) {
      uVar1 = uVar2;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar2 = (uint)(byte)param_1[1], (byte)param_1[1] != 0))
      goto LAB_1000175f4;
    }
    else if (uVar1 == 2) {
      uVar2 = (uint)param_1[1];
      if (param_1[1] != 0) {
LAB_1000175f4:
        return ((uint)*param_1 | uVar2 << 0x10) - 0xff02;
      }
    }
    else {
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 != 0) goto LAB_1000175f4;
    }
  }
  uVar2 = 0xffffffff;
  if (1 < *(byte *)((long)param_1 + 1)) {
    uVar2 = *(byte *)((long)param_1 + 1) + 0x7ffffffe & 0x7fffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x10001763c | FUN_10001763c */

void FUN_10001763c(undefined2 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = param_3 + 0xff02;
  uVar4 = 4;
  if (uVar2 < 0xffff0000) {
    uVar4 = 2;
  }
  if (uVar2 < 0xff0000) {
    uVar4 = 1;
  }
  uVar3 = 0;
  if (0xffff < uVar2) {
    uVar3 = uVar4;
  }
  uVar2 = 0;
  if (0xfd < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfe) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)(param_1 + 1) = 0;
        if (param_2 == 0) {
          return;
        }
        goto LAB_1000176c0;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
LAB_1000176c0:
      *(char *)((long)param_1 + 1) = (char)param_2 + '\x02';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfe >> 0x10) + 1;
    *param_1 = (short)(param_2 - 0xfe);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      param_1[1] = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      *(char *)(param_1 + 1) = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1000176f0 | FUN_1000176f0 */

int FUN_1000176f0(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 1)) {
    iVar1 = (*(byte *)(param_1 + 1) + 0x7ffffffe & 0x7fffffff) + 1;
  }
  return iVar1;
}



/* Address: 0x10001770c | FUN_10001770c */

void FUN_10001770c(short *param_1,uint param_2)

{
  if (param_2 < 0xff) {
    if (param_2 != 0) {
      *(char *)((long)param_1 + 1) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    *param_1 = (short)param_2 + -0xff;
  }
  return;
}



/* Address: 0x100017730 | FUN_100017730 */

undefined1  [16] FUN_100017730(void)

{
  return ZEXT816(0x100eb0678);
}



/* Address: 0x100017740 | FUN_100017740 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100017740(void)

{
  undefined *puVar1;
  
  if (DAT_100fa8680 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSImage;
  _swift_getObjCClassMetadata();
  DAT_100fa8680 = puVar1;
  return;
}



/* Address: 0x100017784 | FUN_100017784 */

void FUN_100017784(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 8))(4,0,0,param_1,param_2);
  return;
}



/* Address: 0x1000177a0 | FUN_1000177a0 */

void FUN_1000177a0(undefined8 param_1)

{
  FUN_100017784(param_1,&PTR_PTR_100eb06b0);
  return;
}



/* Address: 0x1000177ac | FUN_1000177ac */

void FUN_1000177ac(void)

{
  _swift_unknownObjectWeakInit(&DAT_100fa6f48,0);
  return;
}


