/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10027a944 | FUN_10027a944 */

void FUN_10027a944(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa0f8,1);
  return;
}



/* Address: 0x10027a954 | FUN_10027a954 */

void FUN_10027a954(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  undefined *puVar6;
  undefined *in_x3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  char *pcVar8;
  long lVar9;
  char acStack_b0 [8];
  undefined *local_a8;
  undefined *puStack_a0;
  ulong local_98;
  undefined *puStack_90;
  undefined1 local_88;
  String local_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = acStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fb8db8;
  puVar6 = &DAT_100c38680;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = LVar1.unknown + -extraout_x8_00;
  lVar3 = 0;
  FUN_1002abbf0();
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)pcVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pcVar4 = (char *)0x0;
  FUN_100272db4();
  if (*(char *)(unaff_x20 + *(int *)(pcVar4 + 0x14)) == '\x01') {
    lVar5 = 0;
    FUN_1002abb94();
    in_x3 = &DAT_100c38680;
    FUN_100011090(unaff_x20 + *(int *)(lVar5 + 0x18),pcVar8,&DAT_100fb8db8);
    pcVar4 = pcVar8;
    (**(code **)(lVar9 + 0x30))(pcVar8,1,lVar3);
    if ((int)pcVar4 != 1) {
      lVar3 = lVar7;
      FUN_1000523d8(pcVar8,lVar7,FUN_1002abbf0);
      FUN_1002aaef8();
      pcVar4 = pcVar8;
      lVar9 = lVar3;
      FUN_1002aa6e0();
      lVar5 = lVar9;
      thunk_FUN_1001e6c48(LVar1.unknown,pcVar8,lVar3,pcVar4);
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(lVar9);
      local_80 = (extension_Foundation)::Swift::String::init(LVar1);
      pcVar4 = local_80.str;
      FUN_1002538a0();
      puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
      local_a8 = (undefined *)SwiftUI::Text::_init();
      local_98 = (ulong)pcVar4 & 0xff;
      local_88 = 0;
      puStack_a0 = puVar2;
      puStack_90 = (undefined *)lVar5;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
                ((Storage)((char)&stack0xfffffffffffffff0 + 0x68));
      FUN_10005241c(lVar7,FUN_1002abbf0);
      goto LAB_10027abb0;
    }
    puVar6 = &DAT_100fb8db8;
    FUN_100005808(pcVar8,&DAT_100fb8db8,&DAT_100c38680);
    pcVar4 = pcVar8;
  }
  FUN_1002aa6e0();
  local_80.bridgeObject = puVar6;
  local_80.str = pcVar4;
  FUN_1002538a0();
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  local_a8 = (undefined *)SwiftUI::Text::_init();
  local_98 = (ulong)pcVar4 & 0xff;
  local_88 = 1;
  puStack_a0 = puVar2;
  puStack_90 = in_x3;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init
            ((Storage)((char)&stack0xfffffffffffffff0 + 0x68));
LAB_10027abb0:
  param_1[1] = local_80.bridgeObject;
  *param_1 = local_80.str;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  *(undefined1 *)(param_1 + 4) = local_60;
  return;
}



/* Address: 0x10027abdc | thunk_FUN_10027a954 */

void thunk_FUN_10027a954(void)

{
  FUN_10027a954();
  return;
}



/* Address: 0x10027abe0 | FUN_10027abe0 */

void FUN_10027abe0(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa0d0,1);
  return;
}



/* Address: 0x10027abf0 | FUN_10027abf0 */

void FUN_10027abf0(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100caa09c,1);
  return;
}



/* Address: 0x10027ac24 | FUN_10027ac24 */

void FUN_10027ac24(void)

{
  long unaff_x20;
  
  FUN_100276824(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10027ac30 | thunk_FUN_10029fe38 */

void thunk_FUN_10029fe38(void)

{
  FUN_10029fe38();
  return;
}



/* Address: 0x10027ac34 | thunk_FUN_10029fea0 */

void thunk_FUN_10029fea0(void)

{
  FUN_10029fea0();
  return;
}



/* Address: 0x10027ac38 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x10027ac3c | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x10027ac40 | FUN_10027ac40 */

void FUN_10027ac40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9a50;
  FUN_100005c24(&DAT_100fb9a50,&DAT_100c39b48);
  puVar2 = puVar1;
  FUN_10027acb8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa8b0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9a58 = puVar3;
  return;
}



/* Address: 0x10027acb8 | FUN_10027acb8 */

void FUN_10027acb8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9a60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb96a8;
  FUN_100005c24(&DAT_100fb96a8,&DAT_100c39ba0);
  puVar2 = &DAT_100fb9a68;
  FUN_100016eac(&DAT_100fb9a68,&DAT_100fb96e8,&DAT_100c39be0,
                PTR_SwiftUI__SwiftUI__ProgressView<undefined,undefined>_>SwiftUI__View_100eaa6a0);
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
  DAT_100fb9a60 = puVar4;
  return;
}



/* Address: 0x10027ad70 | FUN_10027ad70 */

void FUN_10027ad70(void)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  DateComponents DVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  Product PVar12;
  long unaff_x20;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = 0;
  FUN_1002762f0(0,lVar3,*(undefined8 *)(unaff_x20 + 0x18));
  uVar13 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff));
  lVar6 = 0;
  FUN_1002abb94();
  iVar4 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  lVar8 = lVar1 + iVar4;
  (**(code **)(lVar14 + 0x30))(lVar8,1,DVar7.unknown);
  if ((int)lVar8 == 0) {
    (**(code **)(lVar14 + 8))(lVar1 + iVar4,DVar7.unknown);
  }
  lVar8 = lVar1 + *(int *)(lVar6 + 0x18);
  lVar9 = 0;
  FUN_1002abbf0();
  lVar10 = lVar8;
  (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar8,1,lVar9);
  if ((int)lVar10 == 0) {
    lVar10 = lVar8;
    _swift_getEnumCaseMultiPayload(lVar8,lVar9);
    iVar4 = (int)lVar10;
    if ((iVar4 == 2) || (iVar4 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar8 + 8));
      puVar11 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(lVar8 + *(int *)(puVar11 + 0x30),DVar7.unknown);
      (*pcVar15)(lVar8 + *(int *)(puVar11 + 0x40),DVar7.unknown);
    }
    else if (iVar4 == 0) {
      (**(code **)(lVar14 + 8))(lVar8,DVar7.unknown);
    }
  }
  iVar4 = *(int *)(lVar6 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 8))(lVar1 + iVar4,PVar12.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x24) + 8));
  plVar2 = (long *)(lVar1 + *(int *)(lVar5 + 0x28));
  if (*plVar2 != 0) {
    _swift_release(plVar2[1]);
  }
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + *(int *)(lVar5 + 0x2c),lVar3);
  _swift_deallocObject();
  return;
}



/* Address: 0x10027af48 | FUN_10027af48 */

void FUN_10027af48(void)

{
  FUN_10027b680(FUN_1002762f0,FUN_100277248);
  return;
}



/* Address: 0x10027af5c | FUN_10027af5c */

void FUN_10027af5c(void)

{
  long unaff_x20;
  
  FUN_100277370(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10027af68 | thunk_FUN_10027b188 */

void thunk_FUN_10027b188(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  DateComponents DVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  Product PVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  
  lVar3 = 0;
  FUN_10027446c();
  uVar14 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff));
  uVar4 = 0;
  FUN_1002716e8(0);
  lVar5 = lVar1;
  _swift_getEnumCaseMultiPayload(lVar1,uVar4);
  if ((int)lVar5 == 1) {
    lVar6 = 0;
    FUN_1002abb94();
    iVar2 = *(int *)(lVar6 + 0x14);
    DVar7 = Foundation::DateComponents::typeMetadataAccessor();
    lVar12 = *(long *)(DVar7.unknown + -8);
    lVar5 = lVar1 + iVar2;
    (**(code **)(lVar12 + 0x30))(lVar5,1,DVar7.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar12 + 8))(lVar1 + iVar2,DVar7.unknown);
    }
    lVar5 = lVar1 + *(int *)(lVar6 + 0x18);
    lVar8 = 0;
    FUN_1002abbf0();
    lVar9 = lVar5;
    (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar5,1,lVar8);
    if ((int)lVar9 == 0) {
      lVar9 = lVar5;
      _swift_getEnumCaseMultiPayload(lVar5,lVar8);
      iVar2 = (int)lVar9;
      if ((iVar2 == 2) || (iVar2 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
        puVar10 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar13 = *(code **)(lVar12 + 8);
        (*pcVar13)(lVar5 + *(int *)(puVar10 + 0x30),DVar7.unknown);
        (*pcVar13)(lVar5 + *(int *)(puVar10 + 0x40),DVar7.unknown);
      }
      else if (iVar2 == 0) {
        (**(code **)(lVar12 + 8))(lVar5,DVar7.unknown);
      }
    }
    iVar2 = *(int *)(lVar6 + 0x1c);
    PVar11 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar11.unknown + -8) + 8))(lVar1 + iVar2,PVar11.unknown);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x10027af6c | FUN_10027af6c */

void FUN_10027af6c(void)

{
  FUN_10027b398(FUN_100278f74);
  return;
}



/* Address: 0x10027af78 | FUN_10027af78 */

void FUN_10027af78(void)

{
  long unaff_x20;
  
  FUN_100279074(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10027af80 | FUN_10027af80 */

void FUN_10027af80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9a78;
  FUN_100005c24(&DAT_100fb9a78,&DAT_100c39bf0);
  puVar2 = puVar1;
  FUN_10027aff8();
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb9a80 = puVar3;
  return;
}



/* Address: 0x10027aff8 | FUN_10027aff8 */

void FUN_10027aff8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9a88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9a90;
  FUN_100005c24(&DAT_100fb9a90,&DAT_100c39bf8);
  puVar2 = puVar1;
  FUN_10027b090();
  puVar3 = &DAT_100fb9ab0;
  FUN_100016eac(&DAT_100fb9ab0,&DAT_100fb9ab8,&DAT_100c39c08,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9a88 = puVar4;
  return;
}



/* Address: 0x10027b090 | FUN_10027b090 */

void FUN_10027b090(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9a98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9aa0;
  FUN_100005c24(&DAT_100fb9aa0,&DAT_100c39c00);
  puVar2 = &DAT_100fb9aa8;
  FUN_100003a00(&DAT_100fb9aa8,FUN_100272db4,&TargetProtocolConformanceDescriptor_100c39a48);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9a98 = puVar3;
  return;
}



/* Address: 0x10027b120 | FUN_10027b120 */

void FUN_10027b120(undefined8 param_1,EnvironmentValues param_2)

{
  bool bVar1;
  
  bVar1 = SwiftUI::EnvironmentValues::get_isEnabled(param_2);
  *(bool *)param_1 = bVar1;
  return;
}



/* Address: 0x10027b14c | FUN_10027b14c */

void FUN_10027b14c(undefined8 param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_isEnabled(param_2,*(bool *)param_1);
  return;
}



/* Address: 0x10027b170 | FUN_10027b170 */

void FUN_10027b170(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10027b180 | thunk_FUN_10025e0dc */

void thunk_FUN_10025e0dc(void)

{
  FUN_10025e0dc();
  return;
}



/* Address: 0x10027b184 | thunk_FUN_10025e0f0 */

void thunk_FUN_10025e0f0(void)

{
  FUN_10025e0f0();
  return;
}



/* Address: 0x10027b188 | FUN_10027b188 */

void FUN_10027b188(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  DateComponents DVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  Product PVar11;
  long unaff_x20;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  
  lVar3 = 0;
  FUN_10027446c();
  uVar14 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff));
  uVar4 = 0;
  FUN_1002716e8(0);
  lVar5 = lVar1;
  _swift_getEnumCaseMultiPayload(lVar1,uVar4);
  if ((int)lVar5 == 1) {
    lVar6 = 0;
    FUN_1002abb94();
    iVar2 = *(int *)(lVar6 + 0x14);
    DVar7 = Foundation::DateComponents::typeMetadataAccessor();
    lVar12 = *(long *)(DVar7.unknown + -8);
    lVar5 = lVar1 + iVar2;
    (**(code **)(lVar12 + 0x30))(lVar5,1,DVar7.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar12 + 8))(lVar1 + iVar2,DVar7.unknown);
    }
    lVar5 = lVar1 + *(int *)(lVar6 + 0x18);
    lVar8 = 0;
    FUN_1002abbf0();
    lVar9 = lVar5;
    (**(code **)(*(long *)(lVar8 + -8) + 0x30))(lVar5,1,lVar8);
    if ((int)lVar9 == 0) {
      lVar9 = lVar5;
      _swift_getEnumCaseMultiPayload(lVar5,lVar8);
      iVar2 = (int)lVar9;
      if ((iVar2 == 2) || (iVar2 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar5 + 8));
        puVar10 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar13 = *(code **)(lVar12 + 8);
        (*pcVar13)(lVar5 + *(int *)(puVar10 + 0x30),DVar7.unknown);
        (*pcVar13)(lVar5 + *(int *)(puVar10 + 0x40),DVar7.unknown);
      }
      else if (iVar2 == 0) {
        (**(code **)(lVar12 + 8))(lVar5,DVar7.unknown);
      }
    }
    iVar2 = *(int *)(lVar6 + 0x1c);
    PVar11 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar11.unknown + -8) + 8))(lVar1 + iVar2,PVar11.unknown);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  }
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x10027b350 | FUN_10027b350 */

void FUN_10027b350(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10027446c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100279890(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10027b38c | FUN_10027b38c */

void FUN_10027b38c(void)

{
  FUN_10027b398(FUN_100279c18);
  return;
}



/* Address: 0x10027b398 | FUN_10027b398 */

void FUN_10027b398(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10027446c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010027b3d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10027b3d4 | FUN_10027b3d4 */

void FUN_10027b3d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9ac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9a70;
  FUN_100005c24(&DAT_100fb9a70,&DAT_100c39be8);
  puVar2 = &DAT_100fb9ad0;
  FUN_100016eac(&DAT_100fb9ad0,&DAT_100fb9ad8,&DAT_100c39c70,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9ac8 = puVar4;
  return;
}



/* Address: 0x10027b48c | thunk_FUN_10025e0b4 */

void thunk_FUN_10025e0b4(void)

{
  FUN_10025e0b4();
  return;
}



/* Address: 0x10027b490 | thunk_FUN_10025e0c8 */

void thunk_FUN_10025e0c8(void)

{
  FUN_10025e0c8();
  return;
}



/* Address: 0x10027b494 | thunk_FUN_1002a737c */

void thunk_FUN_1002a737c(void)

{
  FUN_1002a737c();
  return;
}



/* Address: 0x10027b498 | thunk_FUN_1002a73e4 */

void thunk_FUN_1002a73e4(void)

{
  FUN_1002a73e4();
  return;
}



/* Address: 0x10027b49c | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x10027b4a0 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x10027b4a4 | FUN_10027b4a4 */

void FUN_10027b4a4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  if (DAT_100fb9b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9b08;
  FUN_100005c24(&DAT_100fb9b08,&DAT_100c39d80);
  uVar2 = 0xff;
  FUN_10026516c();
  puVar3 = &DAT_100fb9ae0;
  FUN_100003a00(&DAT_100fb9ae0,FUN_10026516c,&TargetProtocolConformanceDescriptor_100c38c08);
  puVar4 = puVar3;
  FUN_10026fe84();
  puStack_48 = &DAT_100ec4128;
  puVar5 = &local_50;
  local_50 = uVar2;
  local_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2
            (puVar5,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A_where_A1:_Swift_Identifiable>(item:_SwiftUI_Binding<A1_>,content:_(A1)__>_SwiftUI_Alert)__>_some>>_100eab550
             ,1);
  puStack_58 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_60 = puVar5;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_60);
  DAT_100fb9b10 = puVar3;
  return;
}



/* Address: 0x10027b574 | thunk_FUN_10027b5e4 */

void thunk_FUN_10027b5e4(void)

{
  FUN_10027b5e4();
  return;
}



/* Address: 0x10027b578 | FUN_10027b578 */

void FUN_10027b578(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  FUN_100273444(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  FUN_10027833c(param_1,unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2);
  return;
}



/* Address: 0x10027b5d0 | FUN_10027b5d0 */

void FUN_10027b5d0(void)

{
  FUN_10027b680(FUN_100273444,FUN_1002785dc);
  return;
}



/* Address: 0x10027b5e4 | FUN_10027b5e4 */

void FUN_10027b5e4(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar3 = 0;
  FUN_100273444(0,lVar2,*(undefined8 *)(unaff_x20 + 0x18));
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(lVar1 + *(int *)(lVar3 + 0x28),lVar2);
  _swift_deallocObject();
  return;
}



/* Address: 0x10027b66c | FUN_10027b66c */

void FUN_10027b66c(void)

{
  FUN_10027b680(FUN_100273444,FUN_1002787dc);
  return;
}



/* Address: 0x10027b680 | FUN_10027b680 */

void FUN_10027b680(code *param_1,code *UNRECOVERED_JUMPTABLE)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  (*param_1)(0,uVar1,uVar2);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010027b6e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)),uVar1,uVar2);
  return;
}



/* Address: 0x10027b6e4 | FUN_10027b6e4 */

void FUN_10027b6e4(void)

{
  long unaff_x20;
  
  FUN_1002788cc(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10027b6f0 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x10027b6f4 | FUN_10027b6f4 */

void FUN_10027b6f4(void)

{
  long unaff_x20;
  
  FUN_100279ef0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10027b704 | FUN_10027b704 */

void FUN_10027b704(void)

{
  long unaff_x20;
  
  FUN_10027a160(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10027b714 | FUN_10027b714 */

void FUN_10027b714(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9b38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9b18;
  FUN_100005c24(&DAT_100fb9b18,&DAT_100c39d88);
  puVar2 = &DAT_100fb9b40;
  FUN_100016eac(&DAT_100fb9b40,&DAT_100fb9b48,&DAT_100c39da0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = &DAT_100fb9b50;
  FUN_100016eac(&DAT_100fb9b50,&DAT_100fb9b58,&DAT_100c3a6a0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9b38 = puVar4;
  return;
}



/* Address: 0x10027b7cc | FUN_10027b7cc */

void FUN_10027b7cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb9b60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c390b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c390b8,&DAT_100ec4750);
  DAT_100fb9b60 = pTVar1;
  return;
}



/* Address: 0x10027b80c | thunk_FUN_10029ff60 */

void thunk_FUN_10029ff60(void)

{
  FUN_10029ff60();
  return;
}



/* Address: 0x10027b810 | thunk_FUN_10029ff88 */

void thunk_FUN_10029ff88(void)

{
  FUN_10029ff88();
  return;
}



/* Address: 0x10027b814 | FUN_10027b814 */

void FUN_10027b814(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10027b838 | FUN_10027b838 */

void FUN_10027b838(void)

{
  long unaff_x20;
  
  FUN_10027a698(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10027b840 | FUN_10027b840 */

void FUN_10027b840(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &DAT_100ec5088;
  _swift_allocObject(&DAT_100ec5088,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *param_1 = FUN_10027b990;
  param_1[1] = puVar3;
  _swift_retain(uVar2);
  return;
}



/* Address: 0x10027b890 | FUN_10027b890 */

void FUN_10027b890(void)

{
  long unaff_x20;
  
  FUN_10027a748(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10027b898 | FUN_10027b898 */

void FUN_10027b898(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9b78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9b68;
  FUN_100005c24(&DAT_100fb9b68,&DAT_100c39de0);
  puVar2 = &DAT_100fb96f8;
  FUN_100016eac(&DAT_100fb96f8,&DAT_100fb90b8,&DAT_100c38dd0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9b78 = puVar4;
  return;
}



/* Address: 0x10027b950 | FUN_10027b950 */

void FUN_10027b950(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb9b80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c39738;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c39738,&DAT_100ec4bf8);
  DAT_100fb9b80 = pTVar1;
  return;
}



/* Address: 0x10027b990 | FUN_10027b990 */

void FUN_10027b990(void)

{
  FUN_100259200();
  return;
}



/* Address: 0x10027b9b0 | FUN_10027b9b0 */

void FUN_10027b9b0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10027b9bc | FUN_10027b9bc */

void FUN_10027b9bc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  ModifiedContent MVar3;
  undefined *puVar4;
  undefined *puVar5;
  ModifiedContent MVar6;
  undefined **ppuVar7;
  TupleView TVar8;
  ZStack ZVar9;
  undefined *local_90;
  undefined *puStack_88;
  undefined **local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined8 local_60;
  undefined *puStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar4 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_60 = uVar1;
  puStack_58 = puVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar3.unknown,&local_60);
  local_70 = MVar3.unknown;
  puStack_68 = puVar5;
  _swift_getOpaqueTypeMetadata2(0xff,&local_70,&DAT_100ca7bfc,0);
  FUN_100005c24(&DAT_100fb9090,&DAT_100c39b40);
  MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  ppuVar7 = &local_70;
  local_70 = MVar3.unknown;
  puStack_68 = puVar5;
  _swift_getOpaqueTypeConformance2(ppuVar7,&DAT_100ca7bfc,1);
  puVar4 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  puVar5 = puVar2;
  local_80 = ppuVar7;
  puStack_78 = puVar4;
  _swift_getWitnessTable(puVar2,MVar6.unknown,&local_80);
  local_70 = MVar6.unknown;
  puStack_68 = puVar5;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_70,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_keyboardShortcut(SwiftUI_KeyboardShortcut)__>_some>>_100eab490
             ,0);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar4 = &DAT_100fb9a50;
  FUN_100005c24(&DAT_100fb9a50,&DAT_100c39b48);
  _swift_getTupleTypeMetadata2(0xff,MVar3.unknown,puVar4,0,0);
  TVar8 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar8.unknown);
  ZVar9 = SwiftUI::ZStack::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fb9340,&DAT_100c39b50);
  MVar3 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar5 = PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958,ZVar9.unknown);
  puVar4 = &DAT_100fb9338;
  FUN_100016eac(&DAT_100fb9338,&DAT_100fb9340,&DAT_100c39b50,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  local_90 = puVar5;
  puStack_88 = puVar4;
  _swift_getWitnessTable(puVar2,MVar3.unknown,&local_90);
  return;
}



/* Address: 0x10027bc08 | FUN_10027bc08 */

void FUN_10027bc08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100fb9a70;
  FUN_100005c24(&DAT_100fb9a70,&DAT_100c39be8);
  puVar2 = &DAT_100fb9b08;
  FUN_100005c24(&DAT_100fb9b08,&DAT_100c39d80);
  puVar3 = puVar2;
  FUN_10027b3d4();
  puVar4 = puVar3;
  FUN_10027b4a4();
  local_50 = puVar1;
  puStack_48 = puVar2;
  local_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  return;
}



/* Address: 0x10027bc88 | thunk_FUN_10027bc8c */

void thunk_FUN_10027bc8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (DAT_100fb9c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9c20;
  FUN_100005c24(&DAT_100fb9c20,&DAT_100c39e18);
  puStack_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&puStack_20);
  DAT_100fb9c18 = puVar2;
  return;
}



/* Address: 0x10027bc8c | FUN_10027bc8c */

void FUN_10027bc8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fb9c18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9c20;
  FUN_100005c24(&DAT_100fb9c20,&DAT_100c39e18);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_20);
  DAT_100fb9c18 = puVar2;
  return;
}


