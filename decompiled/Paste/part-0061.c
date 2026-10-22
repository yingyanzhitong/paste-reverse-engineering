/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000c3230 | FUN_1000c3230 */

void FUN_1000c3230(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabb98;
  FUN_100005c24(&DAT_100fabb98,&DAT_100c29de8);
  puVar2 = &DAT_100fabba0;
  FUN_100016eac(&DAT_100fabba0,&DAT_100fabba8,&DAT_100c29df0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabb90 = puVar3;
  return;
}



/* Address: 0x1000c32c8 | FUN_1000c32c8 */

void FUN_1000c32c8(void)

{
  FUN_1000c5efc(FUN_1000b5c78);
  return;
}



/* Address: 0x1000c32d4 | FUN_1000c32d4 */

void FUN_1000c32d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabbc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabbb8;
  FUN_100005c24(&DAT_100fabbb8,&DAT_100c29e00);
  puVar2 = puVar1;
  FUN_1000c334c();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabbc0 = puVar3;
  return;
}



/* Address: 0x1000c334c | FUN_1000c334c */

void FUN_1000c334c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabbd0;
  FUN_100005c24(&DAT_100fabbd0,&DAT_100c29e08);
  puVar2 = &DAT_100fabbd8;
  FUN_100016eac(&DAT_100fabbd8,&DAT_100fabbe0,&DAT_100c29e10,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabbc8 = puVar3;
  return;
}



/* Address: 0x1000c33e4 | thunk_FUN_1000c348c */

void thunk_FUN_1000c348c(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  UUID UVar7;
  Date DVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  
  lVar4 = 0;
  FUN_1000b292c();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  FUN_10045ba0c();
  lVar6 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar6 == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(lVar2,UVar7.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14) + 8));
    iVar3 = *(int *)(lVar5 + 0x1c);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar8.unknown + -8);
    pcVar10 = *(code **)(lVar12 + 8);
    (*pcVar10)(lVar2 + iVar3,DVar8.unknown);
    iVar3 = *(int *)(lVar5 + 0x20);
    lVar6 = lVar2 + iVar3;
    (**(code **)(lVar12 + 0x30))(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (*pcVar10)(lVar2 + iVar3,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
    lVar6 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar12 = 0;
    FUN_10045bd80();
    lVar5 = lVar6;
    (**(code **)(*(long *)(lVar12 + -8) + 0x30))(lVar6,1,lVar12);
    if ((int)lVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x10));
      (*pcVar10)(lVar6 + *(int *)(lVar12 + 0x18),DVar8.unknown);
    }
  }
  puVar9 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar9 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000c33e8 | FUN_1000c33e8 */

void FUN_1000c33e8(void)

{
  FUN_1000c343c(FUN_1000b6314);
  return;
}



/* Address: 0x1000c33f4 | FUN_1000c33f4 */

void FUN_1000c33f4(undefined8 param_1)

{
  FUN_1000c36a4(param_1,FUN_1000b66f0);
  return;
}



/* Address: 0x1000c3400 | FUN_1000c3400 */

void FUN_1000c3400(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000b68b8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c3408 | FUN_1000c3408 */

void FUN_1000c3408(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000b719c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c3410 | FUN_1000c3410 */

void FUN_1000c3410(void)

{
  FUN_1000c5e7c(FUN_10045ba0c,FUN_1000b6d18);
  return;
}



/* Address: 0x1000c3424 | FUN_1000c3424 */

void FUN_1000c3424(void)

{
  FUN_1000c6168(FUN_1000b6ed4);
  return;
}



/* Address: 0x1000c3430 | FUN_1000c3430 */

void FUN_1000c3430(void)

{
  FUN_1000c343c(FUN_1000ba528);
  return;
}



/* Address: 0x1000c343c | FUN_1000c343c */

void FUN_1000c343c(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000b292c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001000c3488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000c348c | FUN_1000c348c */

void FUN_1000c348c(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  UUID UVar7;
  Date DVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  
  lVar4 = 0;
  FUN_1000b292c();
  uVar11 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  FUN_10045ba0c();
  lVar6 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar6 == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(lVar2,UVar7.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14) + 8));
    iVar3 = *(int *)(lVar5 + 0x1c);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar8.unknown + -8);
    pcVar10 = *(code **)(lVar12 + 8);
    (*pcVar10)(lVar2 + iVar3,DVar8.unknown);
    iVar3 = *(int *)(lVar5 + 0x20);
    lVar6 = lVar2 + iVar3;
    (**(code **)(lVar12 + 0x30))(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (*pcVar10)(lVar2 + iVar3,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
    lVar6 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar12 = 0;
    FUN_10045bd80();
    lVar5 = lVar6;
    (**(code **)(*(long *)(lVar12 + -8) + 0x30))(lVar6,1,lVar12);
    if ((int)lVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x10));
      (*pcVar10)(lVar6 + *(int *)(lVar12 + 0x18),DVar8.unknown);
    }
  }
  puVar9 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar9 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000c3698 | FUN_1000c3698 */

void FUN_1000c3698(undefined8 param_1)

{
  FUN_1000c36a4(param_1,FUN_1000ba63c);
  return;
}



/* Address: 0x1000c36a4 | FUN_1000c36a4 */

void FUN_1000c36a4(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000b292c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001000c36f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000c36f4 | FUN_1000c36f4 */

void FUN_1000c36f4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000ba748(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c36fc | FUN_1000c36fc */

void FUN_1000c36fc(void)

{
  FUN_1000c6168(FUN_1000ba8b0);
  return;
}



/* Address: 0x1000c3708 | FUN_1000c3708 */

undefined8
FUN_1000c3708(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5
             )

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
              ("Paste/MCPSettingsView.swift",0x1b,1,0x16f,UVar4.unknown,puVar3);
  }
  objc_stub::drawInRect_(param_5,param_1,param_2,param_3,param_4);
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x1000c37e4 | FUN_1000c37e4 */

uint FUN_1000c37e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_5 + 0x20);
  uVar2 = *(undefined8 *)(param_5 + 0x28);
  uVar4 = uVar2;
  _swift_retain(uVar2);
  uVar3 = (uint)uVar4;
  (*pcVar1)(param_1,param_2,param_3,param_4);
  _swift_release(uVar2);
  return uVar3 & 1;
}



/* Address: 0x1000c384c | FUN_1000c384c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000c384c(void)

{
  ID self;
  NSString *pNVar1;
  
  self = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
  NSPasteboard::clearContents(self);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSPasteboard::setString_forType_(self,pNVar1,*(undefined8 *)PTR__NSPasteboardTypeString_100ea9100)
  ;
  return 0;
}



/* Address: 0x1000c38c8 | FUN_1000c38c8 */

void FUN_1000c38c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  TextStyle TVar5;
  Design DVar6;
  LocalizedStringResource LVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  char *pcVar12;
  Text TVar13;
  undefined7 extraout_var_00;
  Font FVar15;
  Text TVar16;
  Alignment AVar17;
  undefined *puVar18;
  Text TVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  long lVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long lVar24;
  long extraout_x12;
  long extraout_x12_00;
  long lVar25;
  long lVar26;
  Font design;
  long lVar27;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 auStack_1c0 [2];
  undefined8 local_1b0;
  undefined *local_1a8;
  long local_1a0;
  long local_198;
  undefined *local_190;
  MainActor *local_188;
  long local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  long local_150;
  undefined *local_148;
  long local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined *local_120;
  LocalizedStringResource local_118;
  long local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined1 local_c8;
  undefined7 uStack_c7;
  char *pcStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long lVar14;
  
  local_168 = param_4;
  local_160 = param_5;
  local_108 = param_1;
  LVar7 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar7.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_118.unknown = puVar8;
  local_120 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_150 = *(long *)(local_120 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_150 + 0x40));
  lVar23 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fabd98;
  local_158 = lVar23;
  FUN_1000037f0(&DAT_100fabd98,&DAT_100c29ff8);
  local_170 = *(long *)(puVar8 + -8);
  local_148 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar23 = lVar23 - extraout_x8_01;
  puVar8 = &DAT_100fabda0;
  local_178 = lVar23;
  FUN_1000037f0(&DAT_100fabda0,&DAT_100c2a000);
  local_138 = *(long *)(puVar8 + -8);
  local_130 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar23 = lVar23 - extraout_x8_02;
  puVar8 = &DAT_100fabda8;
  local_140 = lVar23;
  FUN_1000037f0(&DAT_100fabda8,&DAT_100c2a008);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar23 = lVar23 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_110 = lVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar23 - extraout_x12;
  local_128 = lVar23;
  local_190 = (undefined *)SwiftUI::EnabledTextSelectability::typeMetadataAccessor();
  local_198 = *(long *)(local_190 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_198 + 0x40));
  lVar23 = lVar23 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fa73a0;
  local_1a0 = lVar23;
  FUN_1000037f0(&DAT_100fa73a0,&DAT_100c241c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  design.unknown = (undefined *)(lVar23 - extraout_x8_05);
  TVar5 = SwiftUI::Font::TextStyle::typeMetadataAccessor();
  lVar23 = CONCAT71(extraout_var,TVar5.value);
  lVar26 = *(long *)(lVar23 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  lVar25 = (long)design.unknown - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fabdb0;
  FUN_1000037f0(&DAT_100fabdb0,&DAT_100c2a010);
  local_1a8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar24 = lVar25 - (extraout_x8_07 + 0xfU & 0xfffffffffffffff0);
  local_180 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar24 - extraout_x12_00;
  local_100 = lVar24;
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar10 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_188 = pMVar9;
  UVar11 = Swift::Actor::get_unownedExecutor();
  pcVar12 = (char *)UVar11;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar12 & 1) == 0) {
    pcVar12 = "Paste/MCPSettingsView.swift";
    param_5 = 0x1a4;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x1a4,UVar11.unknown,puVar10);
  }
  local_d8 = (undefined *)param_2;
  puStack_d0 = (undefined *)param_3;
  FUN_100008378();
  _swift_bridgeObjectRetain(param_3);
  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar13 = SwiftUI::Text::_init();
  local_1b0 = param_5;
  (**(code **)(lVar26 + 0x68))
            (lVar25,*(undefined4 *)
                     PTR___enum_case_for_SwiftUI_Font_TextStyle_body_SwiftUI_Font_TextStyle_Type___>_SwiftUI_Font_TextStyle_100eab290
             ,lVar23);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_Font_Design_monospaced_SwiftUI_Font_Design_Type___>_SwiftUI_Font_Design_100eab1f8
  ;
  DVar6 = SwiftUI::Font::Design::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var_00,DVar6.value);
  lVar27 = *(long *)(lVar14 + -8);
  (**(code **)(lVar27 + 0x68))(design.unknown,uVar1,lVar14);
  (**(code **)(lVar27 + 0x38))(design.unknown,0,1,lVar14);
  FVar15 = SwiftUI::Font::_system((TextStyle)(__int8)lVar25,design);
  FUN_100005808(design.unknown,&DAT_100fa73a0,&DAT_100c241c8);
  (**(code **)(lVar26 + 8))(lVar25,lVar23);
  uVar2 = local_1b0;
  TVar19 = TVar13;
  puVar18 = puVar8;
  AVar17.unknown = pcVar12;
  TVar16 = SwiftUI::Text::_font(FVar15.unknown);
  _swift_release(FVar15.unknown);
  FUN_100016d74(TVar13.unknown,puVar8,pcVar12);
  _swift_bridgeObjectRelease(uVar2);
  lVar23 = local_1a0;
  local_c8 = SUB81(puVar18,0);
  local_d8 = TVar16.unknown;
  puStack_d0 = TVar19.unknown;
  pcStack_c0 = AVar17.unknown;
  SwiftUI::EnabledTextSelectability::init();
  lVar25 = local_100;
  puVar8 = local_190;
  (extension_SwiftUI)::SwiftUI::View::_textSelection
            (lVar23,PTR___type_metadata_for_SwiftUI_Text_100eab358,local_190,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348,
             PTR___protocol_witness_table_for_SwiftUI_EnabledTextSelectability___SwiftUI_TextSelectability_in_SwiftUI_100eaafb8
            );
  (**(code **)(local_198 + 8))(lVar23,puVar8);
  FUN_100016d74(TVar16.unknown,TVar19.unknown,puVar18);
  _swift_bridgeObjectRelease();
  AVar17 = SwiftUI::Alignment::get_leading(AVar17);
  *(undefined **)(lVar24 + -0x10) = AVar17.unknown;
  *(undefined **)(lVar24 + -8) = TVar19.unknown;
  *(undefined1 *)(lVar24 + -0x18) = 1;
  *(undefined8 *)(lVar24 + -0x20) = 0;
  *(undefined1 *)(lVar24 + -0x28) = 1;
  *(undefined8 *)(lVar24 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar10 = (undefined8 *)(lVar25 + *(int *)(local_1a8 + 0x24));
  puVar10[9] = uStack_90;
  puVar10[8] = local_98;
  puVar10[0xb] = uStack_80;
  puVar10[10] = local_88;
  puVar10[0xd] = uStack_70;
  puVar10[0xc] = local_78;
  puVar10[1] = puStack_d0;
  *puVar10 = local_d8;
  puVar10[3] = pcStack_c0;
  puVar10[2] = CONCAT71(uStack_c7,local_c8);
  puVar10[5] = uStack_b0;
  puVar10[4] = local_b8;
  puVar10[7] = uStack_a0;
  puVar10[6] = local_a8;
  _swift_retain(local_160);
  FUN_1000037f0(&DAT_100fabdb8,&DAT_100c2a018);
  FUN_1000c52a0();
  lVar23 = local_178;
  SwiftUI::Button::_init();
  lVar24 = local_158;
  SwiftUI::PlainButtonStyle::init();
  puVar8 = &DAT_100fabdd8;
  FUN_100016eac(&DAT_100fabdd8,&DAT_100fabd98,&DAT_100c29ff8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar18 = &DAT_100fa7200;
  FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  puVar4 = local_120;
  lVar25 = local_140;
  puVar3 = local_148;
  puVar21 = local_120;
  puVar22 = puVar8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_140,lVar24,local_148,local_120,puVar8,puVar18);
  (**(code **)(local_150 + 8))(lVar24,puVar4);
  puVar20 = puVar3;
  (**(code **)(local_170 + 8))(lVar23,puVar3);
  LVar7.unknown = local_118.unknown;
  FUN_1001de0d4(local_118.unknown);
  TVar19 = SwiftUI::Text::init(LVar7);
  local_f8 = puVar3;
  puStack_f0 = puVar4;
  local_e8 = puVar8;
  puStack_e0 = puVar18;
  _swift_getOpaqueTypeConformance2
            (&local_f8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,1);
  lVar24 = local_128;
  puVar8 = local_130;
  (extension_SwiftUI)::SwiftUI::View::accessibilityLabel(TVar19);
  FUN_100016d74(TVar19.unknown,puVar20,puVar21);
  _swift_bridgeObjectRelease(puVar22);
  (**(code **)(local_138 + 8))(lVar25,puVar8);
  lVar14 = local_100;
  lVar23 = local_180;
  FUN_100011090(local_100,local_180,&DAT_100fabdb0,&DAT_100c2a010);
  lVar25 = local_110;
  FUN_100011090(lVar24,local_110,&DAT_100fabda8,&DAT_100c2a008);
  lVar26 = local_108;
  FUN_100011090(lVar23,local_108,&DAT_100fabdb0,&DAT_100c2a010);
  puVar8 = &DAT_100fabde0;
  FUN_1000037f0(&DAT_100fabde0,&DAT_100c2a028);
  FUN_100011090(lVar25,lVar26 + *(int *)(puVar8 + 0x30),&DAT_100fabda8,&DAT_100c2a008);
  FUN_100005808(lVar24,&DAT_100fabda8,&DAT_100c2a008);
  FUN_100005808(lVar14,&DAT_100fabdb0,&DAT_100c2a010);
  FUN_100005808(lVar25,&DAT_100fabda8,&DAT_100c2a008);
  FUN_100005808(lVar23,&DAT_100fabdb0,&DAT_100c2a010);
  _swift_release(local_188);
  return;
}



/* Address: 0x1000c4154 | FUN_1000c4154 */

void FUN_1000c4154(undefined8 *param_1)

{
  String systemName;
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Image IVar6;
  Font FVar7;
  HierarchicalShapeStyle HVar8;
  HierarchicalShapeStyle HVar9;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x1aa,UVar4.unknown,puVar3);
  }
  FUN_10020ce14();
  systemName = *(String *)pcVar5;
  _swift_bridgeObjectRetain(((String *)pcVar5)->bridgeObject);
  IVar6 = SwiftUI::Image::init(systemName);
  FVar7 = SwiftUI::Font::get_body(IVar6.unknown);
  HVar8.unknown = &DAT_100c2a030;
  _swift_getKeyPath();
  HVar9 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar8);
  _swift_release(pMVar2);
  *param_1 = IVar6.unknown;
  param_1[1] = HVar8.unknown;
  param_1[2] = FVar7.unknown;
  *(int *)(param_1 + 3) = (int)HVar9.unknown;
  return;
}



/* Address: 0x1000c4248 | FUN_1000c4248 */

void FUN_1000c4248(void)

{
  undefined *puVar1;
  
  if (DAT_100fabc30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0,
             PTR___type_metadata_for_SwiftUI_HierarchicalShapeStyle_100eaaef0);
  DAT_100fabc30 = puVar1;
  return;
}



/* Address: 0x1000c4288 | FUN_1000c4288 */

void FUN_1000c4288(void)

{
  FUN_1000c6168(FUN_1000b9ca8);
  return;
}



/* Address: 0x1000c4294 | FUN_1000c4294 */

void FUN_1000c4294(void)

{
  FUN_1000c6168(FUN_1000b9da0);
  return;
}



/* Address: 0x1000c42a0 | FUN_1000c42a0 */

/* WARNING: Removing unreachable block (ram,0x0001000c4394) */

undefined1  [16] FUN_1000c42a0(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_100074120();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1000c43a0 | thunk_FUN_100062024 */

void thunk_FUN_100062024(void)

{
  FUN_100062024();
  return;
}



/* Address: 0x1000c43a4 | thunk_FUN_100062050 */

void thunk_FUN_100062050(void)

{
  FUN_100062050();
  return;
}



/* Address: 0x1000c43a8 | FUN_1000c43a8 */

undefined1  [16] FUN_1000c43a8(byte *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  code *pcVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  char cVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  iVar8 = (int)param_3;
  uVar7 = param_2;
  if (*param_1 == 0x2b) {
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c4624);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) goto LAB_1000c4614;
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1000c4614;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 + (ulong)(byte)(bVar3 + cVar12),
         SCARRY8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_1000c45f8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  else {
    if (*param_1 != 0x2d) {
      if (param_2 != 0) {
        uVar1 = iVar8 + 0x30;
        uVar2 = 0x61;
        if (10 < param_3) {
          uVar2 = iVar8 + 0x57;
        }
        uVar5 = 0x41;
        if (10 < param_3) {
          uVar1 = 0x3a;
          uVar5 = iVar8 + 0x37;
        }
        if (param_1 == (byte *)0x0) {
          return ZEXT816(0);
        }
        uVar9 = 0;
        do {
          bVar3 = *param_1;
          if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
            uVar10 = (uint)bVar3;
            if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
              uVar7 = 1;
              if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1000c4614;
              cVar12 = -0x57;
            }
            else {
              cVar12 = -0x37;
            }
          }
          else {
            cVar12 = -0x30;
          }
          lVar11 = uVar9 * param_3;
          if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar11 >> 0x3f) ||
             (uVar9 = lVar11 + (ulong)(byte)(bVar3 + cVar12),
             SCARRY8(lVar11,(ulong)(byte)(bVar3 + cVar12)))) break;
          param_1 = param_1 + 1;
          param_2 = param_2 - 1;
          if (param_2 == 0) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar9;
            return auVar15;
          }
        } while( true );
      }
LAB_1000c45f8:
      return ZEXT816(1) << 0x40;
    }
    if ((long)param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000c4620);
      (*pcVar6)();
    }
    lVar11 = param_2 - 1;
    if (lVar11 == 0) {
LAB_1000c4614:
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar7;
      return auVar4 << 0x40;
    }
    uVar9 = 0;
    uVar1 = iVar8 + 0x30;
    uVar2 = 0x61;
    if (10 < param_3) {
      uVar2 = iVar8 + 0x57;
    }
    uVar5 = 0x41;
    if (10 < param_3) {
      uVar1 = 0x3a;
      uVar5 = iVar8 + 0x37;
    }
    do {
      param_1 = param_1 + 1;
      bVar3 = *param_1;
      if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
        uVar10 = (uint)bVar3;
        if ((uVar10 < 0x41) || ((uVar5 & 0xff) <= uVar10)) {
          uVar7 = 1;
          if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_1000c4614;
          cVar12 = -0x57;
        }
        else {
          cVar12 = -0x37;
        }
      }
      else {
        cVar12 = -0x30;
      }
      lVar13 = uVar9 * param_3;
      if ((SUB168(SEXT816((long)uVar9) * SEXT816(param_3),8) != lVar13 >> 0x3f) ||
         (uVar9 = lVar13 - (ulong)(byte)(bVar3 + cVar12),
         SBORROW8(lVar13,(ulong)(byte)(bVar3 + cVar12)))) goto LAB_1000c45f8;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar9;
  return auVar14;
}



/* Address: 0x1000c4624 | FUN_1000c4624 */

void FUN_1000c4624(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  UUID UVar6;
  Date DVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar4 = 0;
  FUN_1000b292c();
  lVar13 = *(long *)(lVar4 + -8);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + uVar14;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  FUN_10045ba0c();
  lVar10 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar10 == 0) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(lVar2,UVar6.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14) + 8));
    iVar3 = *(int *)(lVar5 + 0x1c);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar11 = *(long *)(DVar7.unknown + -8);
    pcVar9 = *(code **)(lVar11 + 8);
    (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    iVar3 = *(int *)(lVar5 + 0x20);
    lVar10 = lVar2 + iVar3;
    (**(code **)(lVar11 + 0x30))(lVar10,1,DVar7.unknown);
    if ((int)lVar10 == 0) {
      (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
    lVar10 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar11 = 0;
    FUN_10045bd80();
    lVar5 = lVar10;
    (**(code **)(*(long *)(lVar11 + -8) + 0x30))(lVar10,1,lVar11);
    if ((int)lVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 0x10));
      (*pcVar9)(lVar10 + *(int *)(lVar11 + 0x18),DVar7.unknown);
    }
  }
  lVar10 = *(long *)(lVar13 + 0x40);
  puVar8 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar8 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject(unaff_x20,(uVar14 + lVar10 + 7 & 0xfffffffffffffff8) + 8,uVar12 | 7);
  return;
}



/* Address: 0x1000c4838 | FUN_1000c4838 */

void FUN_1000c4838(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  lVar3 = 0;
  FUN_1000b292c();
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8));
  plVar4 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100008284;
  FUN_1000ba2b8(plVar4,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar6);
  return;
}



/* Address: 0x1000c48d8 | FUN_1000c48d8 */

void FUN_1000c48d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabc88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabc80;
  FUN_100005c24(&DAT_100fabc80,&DAT_100c29ed8);
  puVar2 = puVar1;
  FUN_10002e538();
  puVar3 = puVar2;
  FUN_1000822d8();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fabc88 = puVar4;
  return;
}



/* Address: 0x1000c4950 | FUN_1000c4950 */

void FUN_1000c4950(void)

{
  FUN_1000c6168(FUN_1000c2bb8);
  return;
}



/* Address: 0x1000c495c | FUN_1000c495c */

undefined8 FUN_1000c495c(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1000c49a0 | FUN_1000c49a0 */

void FUN_1000c49a0(void)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  UUID UVar8;
  Date DVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  URL UVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  lVar4 = 0;
  FUN_1000b292c();
  bVar1 = *(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar18 = (ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  lVar19 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar5 = 0;
  FUN_1000c99d0();
  lVar14 = *(long *)(lVar5 + -8);
  bVar2 = *(byte *)(lVar14 + 0x50);
  uVar15 = uVar18 + lVar19 + (ulong)bVar2 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  lVar12 = unaff_x20 + uVar18;
  _swift_release(*(undefined8 *)(lVar12 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 0x18));
  _swift_release(*(undefined8 *)(lVar12 + 0x20));
  lVar19 = lVar12 + *(int *)(lVar4 + 0x18);
  lVar6 = 0;
  FUN_10045ba0c();
  lVar7 = lVar19;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar19,1,lVar6);
  if ((int)lVar7 == 0) {
    UVar8 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar8.unknown + -8) + 8))(lVar19,UVar8.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar19 + *(int *)(lVar6 + 0x14) + 8));
    iVar3 = *(int *)(lVar6 + 0x1c);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    lVar17 = *(long *)(DVar9.unknown + -8);
    pcVar16 = *(code **)(lVar17 + 8);
    (*pcVar16)(lVar19 + iVar3,DVar9.unknown);
    iVar3 = *(int *)(lVar6 + 0x20);
    lVar7 = lVar19 + iVar3;
    (**(code **)(lVar17 + 0x30))(lVar7,1,DVar9.unknown);
    if ((int)lVar7 == 0) {
      (*pcVar16)(lVar19 + iVar3,DVar9.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar19 + *(int *)(lVar6 + 0x24) + 8));
    lVar7 = lVar19 + *(int *)(lVar6 + 0x28);
    lVar17 = 0;
    FUN_10045bd80();
    lVar6 = lVar7;
    (**(code **)(*(long *)(lVar17 + -8) + 0x30))(lVar7,1,lVar17);
    if ((int)lVar6 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar7 + 0x10));
      (*pcVar16)(lVar7 + *(int *)(lVar17 + 0x18),DVar9.unknown);
    }
  }
  puVar10 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar19 + *(int *)(puVar10 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar12 + *(int *)(lVar4 + 0x1c) + 8));
  lVar19 = lVar12 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar19 + 8));
  _swift_release(*(undefined8 *)(lVar19 + 0x10));
  lVar12 = lVar12 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 8));
  _swift_release(*(undefined8 *)(lVar12 + 0x10));
  lVar19 = unaff_x20 + uVar15;
  UVar8 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 8))(lVar19,UVar8.unknown);
  lVar19 = lVar19 + *(int *)(lVar5 + 0x18);
  uVar11 = 0;
  FUN_1000c932c(0);
  lVar12 = lVar19;
  _swift_getEnumCaseMultiPayload(lVar19,uVar11);
  iVar3 = (int)lVar12;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      UVar13 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar13.unknown + -8) + 8))(lVar19,UVar13.unknown);
    }
    else if (iVar3 == 1) {
      UVar13 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar13.unknown + -8) + 8))(lVar19,UVar13.unknown);
    }
  }
  else if (iVar3 == 2) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar19 + 8));
  }
  else {
    if (iVar3 == 3) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar19 + 8));
      uVar11 = *(undefined8 *)(lVar19 + 0x18);
    }
    else {
      if (iVar3 != 4) goto LAB_1000c4c74;
      uVar11 = *(undefined8 *)(lVar19 + 8);
    }
    _swift_bridgeObjectRelease(uVar11);
  }
LAB_1000c4c74:
  _swift_deallocObject(unaff_x20,*(long *)(lVar14 + 0x40) + uVar15,bVar1 | bVar2 | 7);
  return;
}



/* Address: 0x1000c4ca8 | FUN_1000c4ca8 */

void FUN_1000c4ca8(void)

{
  FUN_1000c5e7c(FUN_1000c99d0,FUN_1000c2e0c);
  return;
}



/* Address: 0x1000c4cbc | FUN_1000c4cbc */

void FUN_1000c4cbc(void)

{
  long unaff_x20;
  
  FUN_1000c2eb0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c4cc4 | FUN_1000c4cc4 */

undefined8 FUN_1000c4cc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fabcc8;
  FUN_1000037f0(&DAT_100fabcc8,&DAT_100c2a4d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000c4d14 | FUN_1000c4d14 */

void FUN_1000c4d14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabd20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabd00;
  FUN_100005c24(&DAT_100fabd00,&DAT_100c29f60);
  puVar2 = &DAT_100fabd28;
  FUN_100016eac(&DAT_100fabd28,&DAT_100fabd08,&DAT_100c29f68,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puVar3 = puVar2;
  FUN_1000c4dac();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fabd20 = puVar4;
  return;
}



/* Address: 0x1000c4dac | FUN_1000c4dac */

void FUN_1000c4dac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabd30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabd10;
  FUN_100005c24(&DAT_100fabd10,&DAT_100c29f70);
  puVar2 = puVar1;
  FUN_1000c4e44();
  puVar3 = &DAT_100fabd68;
  FUN_100016eac(&DAT_100fabd68,&DAT_100fabd70,&DAT_100c29f90,
                PTR_SwiftUI__SwiftUI___InsettableBackgroundShapeModifier<undefined,undefined>_>SwiftUI__ViewModifier_100eab158
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabd30 = puVar4;
  return;
}



/* Address: 0x1000c4e44 | FUN_1000c4e44 */

void FUN_1000c4e44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabd38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabd40;
  FUN_100005c24(&DAT_100fabd40,&DAT_100c29f78);
  puVar2 = puVar1;
  FUN_1000c4ebc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabd38 = puVar3;
  return;
}



/* Address: 0x1000c4ebc | FUN_1000c4ebc */

void FUN_1000c4ebc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabd48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabd50;
  FUN_100005c24(&DAT_100fabd50,&DAT_100c29f80);
  puVar2 = &DAT_100fabd58;
  FUN_100016eac(&DAT_100fabd58,&DAT_100fabd60,&DAT_100c29f88,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabd48 = puVar3;
  return;
}



/* Address: 0x1000c4f54 | FUN_1000c4f54 */

void FUN_1000c4f54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabce0;
  FUN_100005c24(&DAT_100fabce0,&DAT_100c29f40);
  puVar2 = &DAT_100fabd18;
  FUN_100016eac(&DAT_100fabd18,&DAT_100fabce8,&DAT_100c29f48,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI_EmptyView___SwiftUI_View_in_SwiftUI_100eabad0;
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fabd78 = puVar3;
  return;
}



/* Address: 0x1000c4fec | thunk_FUN_1000c7ea0 */

void thunk_FUN_1000c7ea0(void)

{
  FUN_1000c7ea0();
  return;
}



/* Address: 0x1000c4ff0 | thunk_FUN_1000c7eb4 */

void thunk_FUN_1000c7eb4(void)

{
  FUN_1000c7eb4();
  return;
}



/* Address: 0x1000c4ff4 | thunk_FUN_1000c5084 */

void thunk_FUN_1000c5084(void)

{
  FUN_1000c5084();
  return;
}



/* Address: 0x1000c4ff8 | FUN_1000c4ff8 */

void FUN_1000c4ff8(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1000b292c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)
           (unaff_x20 +
           (*(long *)(*(long *)(lVar2 + -8) + 0x40) + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff))
            + 7 & 0xfffffffffffffff8));
  FUN_1000cd2cc(*puVar1,puVar1[1]);
  return;
}



/* Address: 0x1000c5038 | thunk_FUN_1000c503c */

void thunk_FUN_1000c503c(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1000b292c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_1000c384c(unaff_x20 + uVar3,*puVar1,puVar1[1]);
  return;
}



/* Address: 0x1000c503c | FUN_1000c503c */

void FUN_1000c503c(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1000b292c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_1000c384c(unaff_x20 + uVar3,*puVar1,puVar1[1]);
  return;
}



/* Address: 0x1000c5084 | FUN_1000c5084 */

void FUN_1000c5084(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  UUID UVar7;
  Date DVar8;
  undefined *puVar9;
  code *pcVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar4 = 0;
  FUN_1000b292c();
  lVar13 = *(long *)(lVar4 + -8);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar14;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  FUN_10045ba0c();
  lVar6 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar6 == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(lVar2,UVar7.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14) + 8));
    iVar3 = *(int *)(lVar5 + 0x1c);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar11 = *(long *)(DVar8.unknown + -8);
    pcVar10 = *(code **)(lVar11 + 8);
    (*pcVar10)(lVar2 + iVar3,DVar8.unknown);
    iVar3 = *(int *)(lVar5 + 0x20);
    lVar6 = lVar2 + iVar3;
    (**(code **)(lVar11 + 0x30))(lVar6,1,DVar8.unknown);
    if ((int)lVar6 == 0) {
      (*pcVar10)(lVar2 + iVar3,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
    lVar6 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar11 = 0;
    FUN_10045bd80();
    lVar5 = lVar6;
    (**(code **)(*(long *)(lVar11 + -8) + 0x30))(lVar6,1,lVar11);
    if ((int)lVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar6 + 0x10));
      (*pcVar10)(lVar6 + *(int *)(lVar11 + 0x18),DVar8.unknown);
    }
  }
  uVar14 = uVar14 + *(long *)(lVar13 + 0x40) + 7 & 0xfffffffffffffff8;
  puVar9 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar9 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + uVar14 + 8));
  _swift_deallocObject(unaff_x20,uVar14 + 0x10,uVar12 | 7);
  return;
}



/* Address: 0x1000c52a0 | FUN_1000c52a0 */

void FUN_1000c52a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabdc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabdb8;
  FUN_100005c24(&DAT_100fabdb8,&DAT_100c2a018);
  puVar2 = puVar1;
  FUN_1000202f0();
  puVar3 = &DAT_100fabdc8;
  FUN_100016eac(&DAT_100fabdc8,&DAT_100fabdd0,&DAT_100c2a020,
                PTR_SwiftUI__SwiftUI___ForegroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eab000
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabdc0 = puVar4;
  return;
}



/* Address: 0x1000c5338 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x1000c533c | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x1000c5340 | FUN_1000c5340 */

void FUN_1000c5340(void)

{
  undefined8 in_x3;
  char in_w5;
  
  if (in_w5 == '\x01') {
    FUN_100016d5c();
    _swift_bridgeObjectRetain(in_x3);
    return;
  }
  FUN_1000c5378();
  return;
}



/* Address: 0x1000c5378 | FUN_1000c5378 */

void FUN_1000c5378(void)

{
  FUN_1000c5380();
  return;
}



/* Address: 0x1000c5380 | FUN_1000c5380 */

void FUN_1000c5380(void)

{
  undefined8 in_x3;
  
  FUN_100016d5c();
  _swift_bridgeObjectRetain(in_x3);
  return;
}



/* Address: 0x1000c53a4 | FUN_1000c53a4 */

void FUN_1000c53a4(void)

{
  undefined8 in_x3;
  char in_w5;
  
  if (in_w5 == '\x01') {
    FUN_100016d74();
    _swift_bridgeObjectRelease(in_x3);
    return;
  }
  FUN_1000c53dc();
  return;
}



/* Address: 0x1000c53dc | FUN_1000c53dc */

void FUN_1000c53dc(void)

{
  FUN_1000c53e4();
  return;
}



/* Address: 0x1000c53e4 | FUN_1000c53e4 */

void FUN_1000c53e4(void)

{
  undefined8 in_x3;
  
  FUN_100016d74();
  _swift_bridgeObjectRelease(in_x3);
  return;
}



/* Address: 0x1000c5408 | FUN_1000c5408 */

void FUN_1000c5408(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabdf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabde8;
  FUN_100005c24(&DAT_100fabde8,&DAT_100c2a060);
  puVar2 = puVar1;
  FUN_1000c5478();
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fabdf8 = puVar3;
  return;
}



/* Address: 0x1000c5478 | FUN_1000c5478 */

void FUN_1000c5478(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabe00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabe08;
  FUN_100005c24(&DAT_100fabe08,&DAT_100c2a070);
  puVar2 = &DAT_100fabe10;
  FUN_10001ff90(&DAT_100fabe10,&DAT_100fabdf0,&DAT_100c2a068,
                PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
               );
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fabe00 = puVar3;
  return;
}



/* Address: 0x1000c5508 | FUN_1000c5508 */

void FUN_1000c5508(void)

{
  FUN_1000c6168(FUN_1000b59f8);
  return;
}



/* Address: 0x1000c5514 | FUN_1000c5514 */

void FUN_1000c5514(void)

{
  FUN_1000c6168(FUN_1000bf044);
  return;
}


