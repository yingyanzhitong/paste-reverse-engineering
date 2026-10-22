/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10027bcf4 | FUN_10027bcf4 */

void FUN_10027bcf4(long param_1)

{
  undefined8 uVar1;
  ModifiedContent MVar2;
  undefined *puVar3;
  undefined *puVar4;
  Button BVar5;
  PlainButtonStyle PVar6;
  undefined *puVar7;
  _ConditionalContent _Var8;
  ModifiedContent MVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  FUN_100005c24(&DAT_100fb9a40,&DAT_100c3b100);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar3 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = uVar1;
  puStack_68 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_70);
  local_90 = MVar2.unknown;
  puStack_88 = puVar4;
  _swift_getOpaqueTypeMetadata2(0xff,&local_90,&DAT_100ca7bfc,0);
  BVar5 = SwiftUI::Button::typeMetadataAccessor();
  PVar6 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaa9d0;
  puVar7 = PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888,BVar5.unknown);
  puVar3 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,puVar10,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  puVar13 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
  ;
  local_90 = BVar5.unknown;
  puStack_88 = PVar6.unknown;
  local_80 = puVar7;
  puStack_78 = puVar3;
  _swift_getOpaqueTypeMetadata2
            (0xff,&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,0);
  _Var8 = SwiftUI::_ConditionalContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fb9090,&DAT_100c39b40);
  MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  puVar10 = &DAT_100fb9b08;
  FUN_100005c24(&DAT_100fb9b08,&DAT_100c39d80);
  ppuVar11 = &local_90;
  local_90 = MVar2.unknown;
  puStack_88 = puVar4;
  _swift_getOpaqueTypeConformance2(ppuVar11,&DAT_100ca7bfc,1);
  ppuVar12 = &local_90;
  local_90 = BVar5.unknown;
  puStack_88 = PVar6.unknown;
  local_80 = puVar7;
  puStack_78 = puVar3;
  _swift_getOpaqueTypeConformance2(ppuVar12,puVar13,1);
  puVar13 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
  ;
  local_a0 = ppuVar11;
  ppuStack_98 = ppuVar12;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,_Var8.unknown,&local_a0);
  puVar3 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_b0 = puVar13;
  puStack_a8 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar9.unknown,&local_b0);
  puVar3 = puVar4;
  FUN_10027b4a4();
  local_90 = MVar9.unknown;
  puStack_88 = puVar10;
  local_80 = puVar4;
  puStack_78 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_90,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  return;
}



/* Address: 0x10027bf40 | FUN_10027bf40 */

void FUN_10027bf40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined8 *puStack_48;
  
  puVar1 = &DAT_100fb9b18;
  FUN_100005c24(&DAT_100fb9b18,&DAT_100c39d88);
  puVar2 = &DAT_100fb9c28;
  FUN_100005c24(&DAT_100fb9c28,&DAT_100c39e20);
  puVar3 = puVar2;
  FUN_10027b714();
  puVar4 = &DAT_100fb9c30;
  FUN_1001eff10(&DAT_100fb9c30,&DAT_100fb9c28,&DAT_100c39e20,FUN_10027b7cc);
  local_60 = puVar1;
  puStack_58 = puVar2;
  local_50 = puVar3;
  puStack_48 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_60,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  return;
}



/* Address: 0x10027bfe8 | FUN_10027bfe8 */

void FUN_10027bfe8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  ppuVar6 = &local_60;
  puVar1 = &DAT_100fb9b70;
  FUN_100005c24(&DAT_100fb9b70,&DAT_100c39de8);
  puVar2 = &DAT_100fb9b68;
  FUN_100005c24(&DAT_100fb9b68,&DAT_100c39de0);
  puVar3 = &DAT_100fb9b88;
  FUN_100005c24(&DAT_100fb9b88,&DAT_100c39df8);
  puVar4 = puVar3;
  FUN_10027b898();
  puVar5 = &DAT_100fb9b90;
  FUN_1001eff10(&DAT_100fb9b90,&DAT_100fb9b88,&DAT_100c39df8,FUN_10027b950);
  local_60 = puVar2;
  puStack_58 = puVar3;
  local_50 = puVar4;
  puStack_48 = puVar5;
  _swift_getOpaqueTypeConformance2
            (&local_60,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  local_60 = puVar1;
  puStack_58 = (undefined *)ppuVar6;
  _swift_getOpaqueTypeConformance2
            (&local_60,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_interactiveDismissDisabled(Swift_Bool)__>_some>>_100eab520
             ,1);
  return;
}



/* Address: 0x10027c0c0 | FUN_10027c0c0 */

void FUN_10027c0c0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c39e68,param_1);
  return;
}



/* Address: 0x10027c0d0 | thunk_FUN_10027b814 */

void thunk_FUN_10027b814(void)

{
  FUN_10027b814();
  return;
}



/* Address: 0x10027c0d4 | thunk_FUN_10027b814 */

void thunk_FUN_10027b814(void)

{
  FUN_10027b814();
  return;
}



/* Address: 0x10027c0d8 | thunk_FUN_10027b814 */

void thunk_FUN_10027b814(void)

{
  FUN_10027b814();
  return;
}



/* Address: 0x10027c0dc | thunk_FUN_10002443c */

void thunk_FUN_10002443c(void)

{
  FUN_10002443c();
  return;
}



/* Address: 0x10027c0e0 | thunk_FUN_100062b00 */

void thunk_FUN_100062b00(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Address: 0x10027c0e4 | thunk_FUN_10027b188 */

void thunk_FUN_10027b188(void)

{
  thunk_FUN_10027b188();
  return;
}



/* Address: 0x10027c0e8 | thunk_FUN_10027b188 */

void thunk_FUN_10027b188(void)

{
  thunk_FUN_10027b188();
  return;
}



/* Address: 0x10027c0ec | thunk_FUN_10027b5e4 */

void thunk_FUN_10027b5e4(void)

{
  thunk_FUN_10027b5e4();
  return;
}



/* Address: 0x10027c0f0 | thunk_FUN_10027b5e4 */

void thunk_FUN_10027b5e4(void)

{
  thunk_FUN_10027b5e4();
  return;
}



/* Address: 0x10027c0f4 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  thunk_FUN_100016e14();
  return;
}



/* Address: 0x10027c0f8 | thunk_FUN_10027b170 */

void thunk_FUN_10027b170(void)

{
  FUN_10027b170();
  return;
}



/* Address: 0x10027c0fc | FUN_10027c0fc */

undefined1  [16] FUN_10027c0fc(void)

{
  return ZEXT816(0x100ec51d0);
}



/* Address: 0x10027c10c | FUN_10027c10c */

void FUN_10027c10c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa1c0,1);
  return;
}



/* Address: 0x10027c11c | FUN_10027c11c */

void FUN_10027c11c(void *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  LocalizedStringResource LVar5;
  HorizontalAlignment HVar6;
  undefined **ppuVar7;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar8;
  undefined8 local_fc0;
  undefined8 uStack_fb8;
  undefined8 local_fb0;
  undefined8 uStack_fa8;
  undefined8 local_fa0;
  undefined8 uStack_f98;
  undefined8 local_f90;
  undefined8 uStack_f88;
  void *local_f78;
  undefined1 auStack_f70 [176];
  undefined *local_ec0;
  undefined8 uStack_eb8;
  undefined8 uStack_eb0;
  undefined8 uStack_ea8;
  undefined8 local_ea0;
  undefined8 uStack_e98;
  undefined8 uStack_e90;
  undefined8 uStack_e88;
  undefined8 local_e80;
  undefined8 uStack_e78;
  undefined8 uStack_e70;
  undefined8 uStack_e68;
  undefined8 local_e60;
  undefined8 uStack_e58;
  undefined8 uStack_e50;
  undefined8 uStack_e48;
  undefined8 local_e40;
  undefined8 uStack_e38;
  undefined8 uStack_e30;
  undefined8 uStack_e28;
  undefined8 local_e20;
  undefined8 uStack_e18;
  undefined *puStack_e10;
  undefined8 uStack_e08;
  undefined8 local_e00;
  undefined8 uStack_df8;
  undefined8 uStack_df0;
  undefined8 uStack_de8;
  undefined8 local_de0;
  undefined8 uStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 uStack_da8;
  undefined8 local_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 uStack_d88;
  undefined8 local_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 uStack_d68;
  undefined *local_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 uStack_d48;
  undefined8 local_d40;
  undefined8 uStack_d38;
  undefined8 uStack_d30;
  undefined8 uStack_d28;
  undefined8 local_d20;
  undefined8 uStack_d18;
  undefined8 uStack_d10;
  undefined8 uStack_d08;
  undefined8 local_d00;
  undefined8 uStack_cf8;
  undefined8 uStack_cf0;
  undefined8 uStack_ce8;
  undefined8 local_ce0;
  undefined8 uStack_cd8;
  undefined8 uStack_cd0;
  undefined8 uStack_cc8;
  undefined8 local_cc0;
  undefined8 uStack_cb8;
  undefined *local_cb0;
  undefined8 uStack_ca8;
  undefined8 uStack_ca0;
  undefined8 uStack_c98;
  undefined8 local_c90;
  undefined8 uStack_c88;
  undefined8 uStack_c80;
  undefined8 uStack_c78;
  undefined8 local_c70;
  undefined8 uStack_c68;
  undefined8 uStack_c60;
  undefined8 uStack_c58;
  undefined8 local_c50;
  undefined8 uStack_c48;
  undefined8 uStack_c40;
  undefined8 uStack_c38;
  undefined8 local_c30;
  undefined8 uStack_c28;
  undefined8 uStack_c20;
  undefined8 uStack_c18;
  undefined8 local_c10;
  undefined8 uStack_c08;
  undefined *local_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined8 uStack_be8;
  undefined8 local_be0;
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  undefined8 uStack_bc8;
  undefined8 local_bc0;
  undefined8 uStack_bb8;
  undefined8 local_bb0;
  undefined8 uStack_ba8;
  undefined8 local_ba0;
  undefined8 uStack_b98;
  undefined8 local_b90;
  undefined8 uStack_b88;
  undefined8 local_b80;
  undefined8 uStack_b78;
  undefined8 local_b70;
  undefined8 uStack_b68;
  undefined8 local_b60;
  undefined8 uStack_b58;
  undefined *local_b50;
  undefined8 uStack_b48;
  undefined8 local_b40;
  undefined8 uStack_b38;
  undefined8 local_b30;
  undefined8 uStack_b28;
  undefined8 local_b20;
  undefined8 uStack_b18;
  undefined8 local_b10;
  undefined8 uStack_b08;
  undefined8 local_b00;
  undefined8 uStack_af8;
  undefined8 local_af0;
  undefined8 uStack_ae8;
  undefined8 local_ae0;
  undefined8 uStack_ad8;
  undefined8 local_ad0;
  undefined8 uStack_ac8;
  undefined8 local_ac0;
  undefined *local_ab0;
  undefined8 uStack_aa8;
  undefined8 local_aa0;
  undefined8 uStack_a98;
  undefined8 local_a90;
  undefined8 uStack_a88;
  undefined8 local_a80;
  undefined8 uStack_a78;
  undefined8 local_a70;
  undefined8 uStack_a68;
  undefined8 local_a60;
  undefined8 uStack_a58;
  undefined8 local_a50;
  undefined8 uStack_a48;
  undefined8 local_a40;
  undefined8 uStack_a38;
  undefined8 local_a30;
  undefined8 uStack_a28;
  undefined8 local_a20;
  undefined *local_a10;
  undefined8 uStack_a08;
  undefined1 local_a00;
  undefined7 uStack_9ff;
  undefined1 uStack_9f8;
  undefined7 uStack_9f7;
  undefined1 uStack_9f0;
  undefined7 uStack_9ef;
  undefined1 uStack_9e8;
  undefined7 uStack_9e7;
  undefined1 uStack_9e0;
  undefined7 local_9df;
  undefined1 uStack_9d8;
  undefined7 uStack_9d7;
  undefined1 uStack_9d0;
  undefined7 local_9cf;
  undefined1 uStack_9c8;
  undefined7 uStack_9c7;
  undefined1 uStack_9c0;
  undefined7 local_9bf;
  undefined1 uStack_9b8;
  undefined7 uStack_9b7;
  undefined1 uStack_9b0;
  undefined7 local_9af;
  undefined1 uStack_9a8;
  undefined7 uStack_9a7;
  undefined1 uStack_9a0;
  undefined7 local_99f;
  undefined1 uStack_998;
  undefined7 uStack_997;
  undefined1 uStack_990;
  undefined7 local_98f;
  undefined1 uStack_988;
  undefined7 uStack_987;
  undefined1 uStack_980;
  undefined7 local_97f;
  undefined1 uStack_978;
  undefined7 uStack_977;
  undefined1 uStack_970;
  undefined7 uStack_96f;
  undefined8 uStack_968;
  undefined *local_960;
  undefined8 local_958;
  undefined1 local_950;
  undefined8 local_94f;
  undefined8 uStack_947;
  undefined8 local_93f;
  undefined8 uStack_937;
  undefined8 local_92f;
  undefined8 uStack_927;
  undefined8 local_91f;
  undefined8 uStack_917;
  undefined8 local_90f;
  undefined8 uStack_907;
  undefined8 local_8ff;
  undefined8 uStack_8f7;
  undefined8 local_8ef;
  undefined8 uStack_8e7;
  undefined8 local_8df;
  undefined8 uStack_8d7;
  undefined8 local_8cf;
  undefined7 uStack_8c7;
  undefined1 uStack_8c0;
  undefined7 uStack_8bf;
  undefined8 uStack_8b8;
  undefined *local_8b0;
  undefined8 uStack_8a8;
  undefined8 local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined8 uStack_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 local_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined *local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined8 local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined *local_770;
  undefined8 uStack_768;
  undefined1 local_760;
  undefined7 uStack_75f;
  undefined1 uStack_758;
  undefined7 uStack_757;
  undefined1 uStack_750;
  undefined7 uStack_74f;
  undefined1 uStack_748;
  undefined7 uStack_747;
  undefined1 uStack_740;
  undefined7 local_73f;
  undefined1 uStack_738;
  undefined7 uStack_737;
  undefined1 uStack_730;
  undefined7 local_72f;
  undefined1 uStack_728;
  undefined7 uStack_727;
  undefined1 uStack_720;
  undefined7 local_71f;
  undefined1 uStack_718;
  undefined7 uStack_717;
  undefined1 uStack_710;
  undefined7 local_70f;
  undefined1 uStack_708;
  undefined7 uStack_707;
  undefined1 uStack_700;
  undefined7 local_6ff;
  undefined1 uStack_6f8;
  undefined7 uStack_6f7;
  undefined1 uStack_6f0;
  undefined7 local_6ef;
  undefined1 uStack_6e8;
  undefined7 uStack_6e7;
  undefined1 uStack_6e0;
  undefined7 local_6df;
  undefined1 uStack_6d8;
  undefined7 uStack_6d7;
  undefined1 uStack_6d0;
  undefined7 uStack_6cf;
  undefined8 uStack_6c8;
  undefined *local_6c0;
  undefined8 local_6b8;
  undefined1 local_6b0;
  undefined8 local_6af;
  undefined8 uStack_6a7;
  undefined8 local_69f;
  undefined8 uStack_697;
  undefined8 local_68f;
  undefined8 uStack_687;
  undefined8 local_67f;
  undefined8 uStack_677;
  undefined8 local_66f;
  undefined8 uStack_667;
  undefined8 local_65f;
  undefined8 uStack_657;
  undefined8 local_64f;
  undefined8 uStack_647;
  undefined8 local_63f;
  undefined8 uStack_637;
  undefined8 local_62f;
  undefined7 uStack_627;
  undefined1 uStack_620;
  undefined7 uStack_61f;
  undefined8 uStack_618;
  undefined *local_610;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined8 local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined *local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined *local_4d0;
  undefined8 uStack_4c8;
  undefined1 local_4c0;
  undefined7 uStack_4bf;
  undefined1 uStack_4b8;
  undefined7 uStack_4b7;
  undefined1 uStack_4b0;
  undefined7 uStack_4af;
  undefined1 uStack_4a8;
  undefined7 uStack_4a7;
  undefined1 uStack_4a0;
  undefined7 local_49f;
  undefined1 uStack_498;
  undefined7 uStack_497;
  undefined1 uStack_490;
  undefined7 local_48f;
  undefined1 uStack_488;
  undefined7 uStack_487;
  undefined1 uStack_480;
  undefined7 local_47f;
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined7 local_46f;
  undefined1 uStack_468;
  undefined7 uStack_467;
  undefined1 uStack_460;
  undefined7 local_45f;
  undefined1 uStack_458;
  undefined7 uStack_457;
  undefined1 uStack_450;
  undefined7 local_44f;
  undefined1 uStack_448;
  undefined7 uStack_447;
  undefined1 uStack_440;
  undefined7 local_43f;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined7 uStack_42f;
  undefined8 uStack_428;
  undefined *local_420;
  undefined8 local_418;
  undefined1 local_410;
  undefined8 local_40f;
  undefined8 uStack_407;
  undefined8 local_3ff;
  undefined8 uStack_3f7;
  undefined8 local_3ef;
  undefined8 uStack_3e7;
  undefined8 local_3df;
  undefined8 uStack_3d7;
  undefined8 local_3cf;
  undefined8 uStack_3c7;
  undefined8 local_3bf;
  undefined8 uStack_3b7;
  undefined8 local_3af;
  undefined8 uStack_3a7;
  undefined8 local_39f;
  undefined8 uStack_397;
  undefined8 local_38f;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 uStack_37f;
  undefined8 uStack_378;
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
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined *local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
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
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined7 uStack_210;
  undefined1 local_209;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 local_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  undefined1 local_1e9;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined1 local_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  undefined1 local_1c9;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  undefined1 local_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 local_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 local_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 local_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 local_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
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
  
  local_f78 = param_1;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_fc0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020d1d8();
  uVar1 = *(undefined8 *)LVar5.unknown;
  uVar3 = *(undefined8 *)((long)LVar5.unknown + 8);
  _swift_bridgeObjectRetain(uVar3);
  FUN_1001ca754(localized.unknown);
  SVar8 = (extension_Foundation)::Swift::String::init(localized);
  HVar6 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)SVar8.str);
  FUN_10027cd90(&local_160,uVar1,uVar3,SVar8.str,SVar8.bridgeObject);
  uStack_ae8 = uStack_f8;
  local_af0 = local_100;
  uStack_ad8 = uStack_e8;
  local_ae0 = local_f0;
  uStack_ac8 = uStack_d8;
  local_ad0 = local_e0;
  uStack_b28 = uStack_138;
  local_b30 = local_140;
  uStack_b18 = uStack_128;
  local_b20 = local_130;
  uStack_b08 = uStack_118;
  local_b10 = local_120;
  uStack_af8 = uStack_108;
  local_b00 = local_110;
  uStack_b48 = uStack_158;
  local_b50 = local_160;
  uStack_b38 = uStack_148;
  local_b40 = local_150;
  uStack_a48 = uStack_f8;
  local_a50 = local_100;
  uStack_a38 = uStack_e8;
  local_a40 = local_f0;
  uStack_a28 = uStack_d8;
  local_a30 = local_e0;
  uStack_a88 = uStack_138;
  local_a90 = local_140;
  uStack_a78 = uStack_128;
  local_a80 = local_130;
  uStack_a68 = uStack_118;
  local_a70 = local_120;
  uStack_a58 = uStack_108;
  local_a60 = local_110;
  local_ac0 = local_d0;
  local_a20 = local_d0;
  uStack_aa8 = uStack_158;
  local_ab0 = local_160;
  uStack_a98 = uStack_148;
  local_aa0 = local_150;
  FUN_100011090(&local_b50,&uStack_210,&DAT_100fb9c48,&DAT_100c39f00);
  FUN_100005808(&local_ab0,&DAT_100fb9c48,&DAT_100c39f00);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  uStack_191 = (undefined1)uStack_ad8;
  uStack_190 = (undefined7)((ulong)uStack_ad8 >> 8);
  local_199 = (undefined1)local_ae0;
  uStack_198 = (undefined7)((ulong)local_ae0 >> 8);
  uStack_1a1 = (undefined1)uStack_ae8;
  uStack_1a0 = (undefined7)((ulong)uStack_ae8 >> 8);
  local_1a9 = (undefined1)local_af0;
  uStack_1a8 = (undefined7)((ulong)local_af0 >> 8);
  uStack_1d1 = (undefined1)uStack_b18;
  uStack_1d0 = (undefined7)((ulong)uStack_b18 >> 8);
  local_1d9 = (undefined1)local_b20;
  uStack_1d8 = (undefined7)((ulong)local_b20 >> 8);
  uStack_1e1 = (undefined1)uStack_b28;
  uStack_1e0 = (undefined7)((ulong)uStack_b28 >> 8);
  local_1e9 = (undefined1)local_b30;
  uStack_1e8 = (undefined7)((ulong)local_b30 >> 8);
  uStack_181 = (undefined1)uStack_ac8;
  uStack_180 = (undefined7)((ulong)uStack_ac8 >> 8);
  local_189 = (undefined1)local_ad0;
  uStack_188 = (undefined7)((ulong)local_ad0 >> 8);
  local_179 = (undefined1)local_ac0;
  uStack_178 = (undefined7)((ulong)local_ac0 >> 8);
  uStack_1c1 = (undefined1)uStack_b08;
  uStack_1c0 = (undefined7)((ulong)uStack_b08 >> 8);
  local_1c9 = (undefined1)local_b10;
  uStack_1c8 = (undefined7)((ulong)local_b10 >> 8);
  uStack_1b1 = (undefined1)uStack_af8;
  uStack_1b0 = (undefined7)((ulong)uStack_af8 >> 8);
  local_1b9 = (undefined1)local_b00;
  uStack_1b8 = (undefined7)((ulong)local_b00 >> 8);
  uStack_201 = (undefined1)uStack_b48;
  uStack_200 = (undefined7)((ulong)uStack_b48 >> 8);
  local_209 = SUB81(local_b50,0);
  uStack_208 = (undefined7)((ulong)local_b50 >> 8);
  uStack_1f1 = (undefined1)uStack_b38;
  uStack_1f0 = (undefined7)((ulong)uStack_b38 >> 8);
  local_1f9 = (undefined1)local_b40;
  uStack_1f8 = (undefined7)((ulong)local_b40 >> 8);
  uStack_8e7 = CONCAT17(uStack_1a1,uStack_1a8);
  local_8ef = CONCAT17(local_1a9,uStack_1b0);
  uStack_997 = uStack_1a8;
  uStack_990 = uStack_1a1;
  local_99f = uStack_1b0;
  uStack_998 = local_1a9;
  uStack_8d7 = CONCAT17(uStack_191,uStack_198);
  local_8df = CONCAT17(local_199,uStack_1a0);
  uStack_987 = uStack_198;
  uStack_980 = uStack_191;
  local_98f = uStack_1a0;
  uStack_988 = local_199;
  local_8cf = CONCAT17(local_189,uStack_190);
  uStack_977 = uStack_188;
  local_97f = uStack_190;
  uStack_978 = local_189;
  uStack_968 = local_ac0;
  uStack_927 = CONCAT17(uStack_1e1,uStack_1e8);
  local_92f = CONCAT17(local_1e9,uStack_1f0);
  uStack_9d7 = uStack_1e8;
  uStack_9d0 = uStack_1e1;
  local_9df = uStack_1f0;
  uStack_9d8 = local_1e9;
  uStack_917 = CONCAT17(uStack_1d1,uStack_1d8);
  local_91f = CONCAT17(local_1d9,uStack_1e0);
  uStack_9c7 = uStack_1d8;
  uStack_9c0 = uStack_1d1;
  local_9cf = uStack_1e0;
  uStack_9c8 = local_1d9;
  uStack_907 = CONCAT17(uStack_1c1,uStack_1c8);
  local_90f = CONCAT17(local_1c9,uStack_1d0);
  uStack_9b7 = uStack_1c8;
  uStack_9b0 = uStack_1c1;
  local_9bf = uStack_1d0;
  uStack_9b8 = local_1c9;
  uStack_8f7 = CONCAT17(uStack_1b1,uStack_1b8);
  local_8ff = CONCAT17(local_1b9,uStack_1c0);
  uStack_9a7 = uStack_1b8;
  uStack_9a0 = uStack_1b1;
  local_9af = uStack_1c0;
  uStack_9a8 = local_1b9;
  uStack_947 = CONCAT17(uStack_201,uStack_208);
  local_94f = CONCAT17(local_209,uStack_210);
  uStack_9f7 = uStack_208;
  uStack_9f0 = uStack_201;
  uStack_9ff = uStack_210;
  uStack_9f8 = local_209;
  uStack_937 = CONCAT17(uStack_1f1,uStack_1f8);
  local_93f = CONCAT17(local_1f9,uStack_200);
  uStack_9e7 = uStack_1f8;
  uStack_9e0 = uStack_1f1;
  uStack_9ef = uStack_200;
  uStack_9e8 = local_1f9;
  uStack_8c7 = uStack_188;
  uStack_8b8 = local_ac0;
  uStack_a08 = 0x4010000000000000;
  local_a00 = 0;
  local_958 = 0x4010000000000000;
  local_950 = 0;
  local_a10 = HVar6.unknown;
  uStack_970 = uStack_181;
  uStack_96f = uStack_180;
  local_960 = HVar6.unknown;
  uStack_8c0 = uStack_181;
  uStack_8bf = uStack_180;
  FUN_100011090(&local_a10,&local_160,&DAT_100fb9c50,&DAT_100c39f08);
  ppuVar7 = &local_960;
  FUN_100005808(ppuVar7,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_10020c9f8();
  puVar2 = *ppuVar7;
  puVar4 = ppuVar7[1];
  _swift_bridgeObjectRetain(puVar4);
  FUN_1001ca5d4(localized.unknown);
  SVar8 = (extension_Foundation)::Swift::String::init(localized);
  HVar6 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)SVar8.str);
  FUN_10027cd90(&local_160,puVar2,puVar4,SVar8.str,SVar8.bridgeObject);
  uStack_848 = uStack_f8;
  local_850 = local_100;
  uStack_838 = uStack_e8;
  local_840 = local_f0;
  uStack_828 = uStack_d8;
  local_830 = local_e0;
  uStack_888 = uStack_138;
  local_890 = local_140;
  uStack_878 = uStack_128;
  local_880 = local_130;
  uStack_868 = uStack_118;
  local_870 = local_120;
  uStack_858 = uStack_108;
  local_860 = local_110;
  uStack_8a8 = uStack_158;
  local_8b0 = local_160;
  uStack_898 = uStack_148;
  local_8a0 = local_150;
  uStack_7a8 = uStack_f8;
  local_7b0 = local_100;
  uStack_798 = uStack_e8;
  local_7a0 = local_f0;
  uStack_788 = uStack_d8;
  local_790 = local_e0;
  uStack_7e8 = uStack_138;
  local_7f0 = local_140;
  uStack_7d8 = uStack_128;
  local_7e0 = local_130;
  uStack_7c8 = uStack_118;
  local_7d0 = local_120;
  uStack_7b8 = uStack_108;
  local_7c0 = local_110;
  local_820 = local_d0;
  local_780 = local_d0;
  uStack_808 = uStack_158;
  local_810 = local_160;
  uStack_7f8 = uStack_148;
  local_800 = local_150;
  FUN_100011090(&local_8b0,&uStack_210,&DAT_100fb9c48,&DAT_100c39f00);
  FUN_100005808(&local_810,&DAT_100fb9c48,&DAT_100c39f00);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  uStack_191 = (undefined1)uStack_838;
  uStack_190 = (undefined7)((ulong)uStack_838 >> 8);
  local_199 = (undefined1)local_840;
  uStack_198 = (undefined7)((ulong)local_840 >> 8);
  uStack_1a1 = (undefined1)uStack_848;
  uStack_1a0 = (undefined7)((ulong)uStack_848 >> 8);
  local_1a9 = (undefined1)local_850;
  uStack_1a8 = (undefined7)((ulong)local_850 >> 8);
  uStack_1d1 = (undefined1)uStack_878;
  uStack_1d0 = (undefined7)((ulong)uStack_878 >> 8);
  local_1d9 = (undefined1)local_880;
  uStack_1d8 = (undefined7)((ulong)local_880 >> 8);
  uStack_1e1 = (undefined1)uStack_888;
  uStack_1e0 = (undefined7)((ulong)uStack_888 >> 8);
  local_1e9 = (undefined1)local_890;
  uStack_1e8 = (undefined7)((ulong)local_890 >> 8);
  uStack_181 = (undefined1)uStack_828;
  uStack_180 = (undefined7)((ulong)uStack_828 >> 8);
  local_189 = (undefined1)local_830;
  uStack_188 = (undefined7)((ulong)local_830 >> 8);
  local_179 = (undefined1)local_820;
  uStack_178 = (undefined7)((ulong)local_820 >> 8);
  uStack_1c1 = (undefined1)uStack_868;
  uStack_1c0 = (undefined7)((ulong)uStack_868 >> 8);
  local_1c9 = (undefined1)local_870;
  uStack_1c8 = (undefined7)((ulong)local_870 >> 8);
  uStack_1b1 = (undefined1)uStack_858;
  uStack_1b0 = (undefined7)((ulong)uStack_858 >> 8);
  local_1b9 = (undefined1)local_860;
  uStack_1b8 = (undefined7)((ulong)local_860 >> 8);
  uStack_201 = (undefined1)uStack_8a8;
  uStack_200 = (undefined7)((ulong)uStack_8a8 >> 8);
  local_209 = SUB81(local_8b0,0);
  uStack_208 = (undefined7)((ulong)local_8b0 >> 8);
  uStack_1f1 = (undefined1)uStack_898;
  uStack_1f0 = (undefined7)((ulong)uStack_898 >> 8);
  local_1f9 = (undefined1)local_8a0;
  uStack_1f8 = (undefined7)((ulong)local_8a0 >> 8);
  uStack_647 = CONCAT17(uStack_1a1,uStack_1a8);
  local_64f = CONCAT17(local_1a9,uStack_1b0);
  uStack_6f7 = uStack_1a8;
  uStack_6f0 = uStack_1a1;
  local_6ff = uStack_1b0;
  uStack_6f8 = local_1a9;
  uStack_637 = CONCAT17(uStack_191,uStack_198);
  local_63f = CONCAT17(local_199,uStack_1a0);
  uStack_6e7 = uStack_198;
  uStack_6e0 = uStack_191;
  local_6ef = uStack_1a0;
  uStack_6e8 = local_199;
  local_62f = CONCAT17(local_189,uStack_190);
  uStack_6d7 = uStack_188;
  local_6df = uStack_190;
  uStack_6d8 = local_189;
  uStack_6c8 = local_820;
  uStack_687 = CONCAT17(uStack_1e1,uStack_1e8);
  local_68f = CONCAT17(local_1e9,uStack_1f0);
  uStack_737 = uStack_1e8;
  uStack_730 = uStack_1e1;
  local_73f = uStack_1f0;
  uStack_738 = local_1e9;
  uStack_677 = CONCAT17(uStack_1d1,uStack_1d8);
  local_67f = CONCAT17(local_1d9,uStack_1e0);
  uStack_727 = uStack_1d8;
  uStack_720 = uStack_1d1;
  local_72f = uStack_1e0;
  uStack_728 = local_1d9;
  uStack_667 = CONCAT17(uStack_1c1,uStack_1c8);
  local_66f = CONCAT17(local_1c9,uStack_1d0);
  uStack_717 = uStack_1c8;
  uStack_710 = uStack_1c1;
  local_71f = uStack_1d0;
  uStack_718 = local_1c9;
  uStack_657 = CONCAT17(uStack_1b1,uStack_1b8);
  local_65f = CONCAT17(local_1b9,uStack_1c0);
  uStack_707 = uStack_1b8;
  uStack_700 = uStack_1b1;
  local_70f = uStack_1c0;
  uStack_708 = local_1b9;
  uStack_6a7 = CONCAT17(uStack_201,uStack_208);
  local_6af = CONCAT17(local_209,uStack_210);
  uStack_757 = uStack_208;
  uStack_750 = uStack_201;
  uStack_75f = uStack_210;
  uStack_758 = local_209;
  uStack_697 = CONCAT17(uStack_1f1,uStack_1f8);
  local_69f = CONCAT17(local_1f9,uStack_200);
  uStack_747 = uStack_1f8;
  uStack_740 = uStack_1f1;
  uStack_74f = uStack_200;
  uStack_748 = local_1f9;
  uStack_627 = uStack_188;
  uStack_618 = local_820;
  uStack_768 = 0x4010000000000000;
  local_760 = 0;
  local_6b8 = 0x4010000000000000;
  local_6b0 = 0;
  local_770 = HVar6.unknown;
  uStack_6d0 = uStack_181;
  uStack_6cf = uStack_180;
  local_6c0 = HVar6.unknown;
  uStack_620 = uStack_181;
  uStack_61f = uStack_180;
  FUN_100011090(&local_770,&local_160,&DAT_100fb9c50,&DAT_100c39f08);
  ppuVar7 = &local_6c0;
  FUN_100005808(ppuVar7,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_10020c6c4();
  puVar2 = *ppuVar7;
  puVar4 = ppuVar7[1];
  _swift_bridgeObjectRetain(puVar4);
  FUN_1001ca8d4(localized.unknown);
  SVar8 = (extension_Foundation)::Swift::String::init(localized);
  HVar6 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)SVar8.str);
  FUN_10027cd90(&local_160,puVar2,puVar4,SVar8.str,SVar8.bridgeObject);
  uStack_5a8 = uStack_f8;
  local_5b0 = local_100;
  uStack_598 = uStack_e8;
  local_5a0 = local_f0;
  uStack_588 = uStack_d8;
  local_590 = local_e0;
  uStack_5e8 = uStack_138;
  local_5f0 = local_140;
  uStack_5d8 = uStack_128;
  local_5e0 = local_130;
  uStack_5c8 = uStack_118;
  local_5d0 = local_120;
  uStack_5b8 = uStack_108;
  local_5c0 = local_110;
  uStack_608 = uStack_158;
  local_610 = local_160;
  uStack_5f8 = uStack_148;
  local_600 = local_150;
  uStack_508 = uStack_f8;
  local_510 = local_100;
  uStack_4f8 = uStack_e8;
  local_500 = local_f0;
  uStack_4e8 = uStack_d8;
  local_4f0 = local_e0;
  uStack_548 = uStack_138;
  local_550 = local_140;
  uStack_538 = uStack_128;
  local_540 = local_130;
  uStack_528 = uStack_118;
  local_530 = local_120;
  uStack_518 = uStack_108;
  local_520 = local_110;
  local_580 = local_d0;
  local_4e0 = local_d0;
  uStack_568 = uStack_158;
  local_570 = local_160;
  uStack_558 = uStack_148;
  local_560 = local_150;
  FUN_100011090(&local_610,&uStack_210,&DAT_100fb9c48,&DAT_100c39f00);
  FUN_100005808(&local_570,&DAT_100fb9c48,&DAT_100c39f00);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  uStack_191 = (undefined1)uStack_598;
  uStack_190 = (undefined7)((ulong)uStack_598 >> 8);
  local_199 = (undefined1)local_5a0;
  uStack_198 = (undefined7)((ulong)local_5a0 >> 8);
  uStack_1a1 = (undefined1)uStack_5a8;
  uStack_1a0 = (undefined7)((ulong)uStack_5a8 >> 8);
  local_1a9 = (undefined1)local_5b0;
  uStack_1a8 = (undefined7)((ulong)local_5b0 >> 8);
  uStack_1d1 = (undefined1)uStack_5d8;
  uStack_1d0 = (undefined7)((ulong)uStack_5d8 >> 8);
  local_1d9 = (undefined1)local_5e0;
  uStack_1d8 = (undefined7)((ulong)local_5e0 >> 8);
  uStack_1e1 = (undefined1)uStack_5e8;
  uStack_1e0 = (undefined7)((ulong)uStack_5e8 >> 8);
  local_1e9 = (undefined1)local_5f0;
  uStack_1e8 = (undefined7)((ulong)local_5f0 >> 8);
  uStack_181 = (undefined1)uStack_588;
  uStack_180 = (undefined7)((ulong)uStack_588 >> 8);
  local_189 = (undefined1)local_590;
  uStack_188 = (undefined7)((ulong)local_590 >> 8);
  local_179 = (undefined1)local_580;
  uStack_178 = (undefined7)((ulong)local_580 >> 8);
  uStack_1c1 = (undefined1)uStack_5c8;
  uStack_1c0 = (undefined7)((ulong)uStack_5c8 >> 8);
  local_1c9 = (undefined1)local_5d0;
  uStack_1c8 = (undefined7)((ulong)local_5d0 >> 8);
  uStack_1b1 = (undefined1)uStack_5b8;
  uStack_1b0 = (undefined7)((ulong)uStack_5b8 >> 8);
  local_1b9 = (undefined1)local_5c0;
  uStack_1b8 = (undefined7)((ulong)local_5c0 >> 8);
  uStack_201 = (undefined1)uStack_608;
  uStack_200 = (undefined7)((ulong)uStack_608 >> 8);
  local_209 = SUB81(local_610,0);
  uStack_208 = (undefined7)((ulong)local_610 >> 8);
  uStack_1f1 = (undefined1)uStack_5f8;
  uStack_1f0 = (undefined7)((ulong)uStack_5f8 >> 8);
  local_1f9 = (undefined1)local_600;
  uStack_1f8 = (undefined7)((ulong)local_600 >> 8);
  uStack_3a7 = CONCAT17(uStack_1a1,uStack_1a8);
  local_3af = CONCAT17(local_1a9,uStack_1b0);
  uStack_457 = uStack_1a8;
  uStack_450 = uStack_1a1;
  local_45f = uStack_1b0;
  uStack_458 = local_1a9;
  uStack_397 = CONCAT17(uStack_191,uStack_198);
  local_39f = CONCAT17(local_199,uStack_1a0);
  uStack_447 = uStack_198;
  uStack_440 = uStack_191;
  local_44f = uStack_1a0;
  uStack_448 = local_199;
  local_38f = CONCAT17(local_189,uStack_190);
  uStack_437 = uStack_188;
  local_43f = uStack_190;
  uStack_438 = local_189;
  uStack_428 = local_580;
  uStack_3e7 = CONCAT17(uStack_1e1,uStack_1e8);
  local_3ef = CONCAT17(local_1e9,uStack_1f0);
  uStack_497 = uStack_1e8;
  uStack_490 = uStack_1e1;
  local_49f = uStack_1f0;
  uStack_498 = local_1e9;
  uStack_3d7 = CONCAT17(uStack_1d1,uStack_1d8);
  local_3df = CONCAT17(local_1d9,uStack_1e0);
  uStack_487 = uStack_1d8;
  uStack_480 = uStack_1d1;
  local_48f = uStack_1e0;
  uStack_488 = local_1d9;
  uStack_3c7 = CONCAT17(uStack_1c1,uStack_1c8);
  local_3cf = CONCAT17(local_1c9,uStack_1d0);
  uStack_477 = uStack_1c8;
  uStack_470 = uStack_1c1;
  local_47f = uStack_1d0;
  uStack_478 = local_1c9;
  uStack_3b7 = CONCAT17(uStack_1b1,uStack_1b8);
  local_3bf = CONCAT17(local_1b9,uStack_1c0);
  uStack_467 = uStack_1b8;
  uStack_460 = uStack_1b1;
  local_46f = uStack_1c0;
  uStack_468 = local_1b9;
  uStack_407 = CONCAT17(uStack_201,uStack_208);
  local_40f = CONCAT17(local_209,uStack_210);
  uStack_4b7 = uStack_208;
  uStack_4b0 = uStack_201;
  uStack_4bf = uStack_210;
  uStack_4b8 = local_209;
  uStack_3f7 = CONCAT17(uStack_1f1,uStack_1f8);
  local_3ff = CONCAT17(local_1f9,uStack_200);
  uStack_4a7 = uStack_1f8;
  uStack_4a0 = uStack_1f1;
  uStack_4af = uStack_200;
  uStack_4a8 = local_1f9;
  uStack_387 = uStack_188;
  uStack_378 = local_580;
  uStack_4c8 = 0x4010000000000000;
  local_4c0 = 0;
  local_418 = 0x4010000000000000;
  local_410 = 0;
  local_4d0 = HVar6.unknown;
  uStack_430 = uStack_181;
  uStack_42f = uStack_180;
  local_420 = HVar6.unknown;
  uStack_380 = uStack_181;
  uStack_37f = uStack_180;
  FUN_100011090(&local_4d0,&local_160,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_100005808(&local_420,&DAT_100fb9c50,&DAT_100c39f08);
  uStack_b78 = CONCAT71(uStack_987,uStack_988);
  local_b80 = CONCAT71(local_98f,uStack_990);
  uStack_f88 = CONCAT71(uStack_987,uStack_988);
  local_f90 = CONCAT71(local_98f,uStack_990);
  uStack_b68 = CONCAT71(uStack_977,uStack_978);
  local_b70 = CONCAT71(local_97f,uStack_980);
  uStack_f98 = CONCAT71(uStack_987,uStack_988);
  local_fa0 = CONCAT71(local_98f,uStack_990);
  local_b60 = CONCAT71(uStack_96f,uStack_970);
  local_2d0 = CONCAT71(uStack_96f,uStack_970);
  uStack_b58 = uStack_968;
  uStack_bb8 = CONCAT71(uStack_9c7,uStack_9c8);
  local_bc0 = CONCAT71(local_9cf,uStack_9d0);
  uStack_328 = CONCAT71(uStack_9c7,uStack_9c8);
  local_330 = CONCAT71(local_9cf,uStack_9d0);
  uStack_ba8 = CONCAT71(uStack_9b7,uStack_9b8);
  local_bb0 = CONCAT71(local_9bf,uStack_9c0);
  uStack_fa8 = CONCAT71(uStack_9c7,uStack_9c8);
  local_fb0 = CONCAT71(local_9cf,uStack_9d0);
  uStack_b98 = CONCAT71(uStack_9a7,uStack_9a8);
  local_ba0 = CONCAT71(local_9af,uStack_9b0);
  uStack_308 = CONCAT71(uStack_9a7,uStack_9a8);
  local_310 = CONCAT71(local_9af,uStack_9b0);
  uStack_b88 = CONCAT71(uStack_997,uStack_998);
  local_b90 = CONCAT71(local_99f,uStack_9a0);
  uStack_fb8 = CONCAT71(uStack_9a7,uStack_9a8);
  local_fc0 = CONCAT71(local_9af,uStack_9b0);
  uStack_be8 = CONCAT71(uStack_9f7,uStack_9f8);
  uStack_bf0 = CONCAT71(uStack_9ff,local_a00);
  uStack_bf8 = uStack_a08;
  local_c00 = local_a10;
  uStack_bd8 = CONCAT71(uStack_9e7,uStack_9e8);
  local_be0 = CONCAT71(uStack_9ef,uStack_9f0);
  uStack_348 = CONCAT71(uStack_9e7,uStack_9e8);
  local_350 = CONCAT71(uStack_9ef,uStack_9f0);
  uStack_bc8 = CONCAT71(uStack_9d7,uStack_9d8);
  uStack_bd0 = CONCAT71(local_9df,uStack_9e0);
  uStack_e98 = CONCAT71(uStack_9e7,uStack_9e8);
  local_ea0 = CONCAT71(uStack_9ef,uStack_9f0);
  uStack_c28 = CONCAT71(uStack_6e7,uStack_6e8);
  local_c30 = CONCAT71(local_6ef,uStack_6f0);
  uStack_238 = CONCAT71(uStack_6e7,uStack_6e8);
  local_240 = CONCAT71(local_6ef,uStack_6f0);
  uStack_c18 = CONCAT71(uStack_6d7,uStack_6d8);
  uStack_c20 = CONCAT71(local_6df,uStack_6e0);
  uStack_d88 = CONCAT71(uStack_6e7,uStack_6e8);
  uStack_d90 = CONCAT71(local_6ef,uStack_6f0);
  local_c10 = CONCAT71(uStack_6cf,uStack_6d0);
  local_220 = CONCAT71(uStack_6cf,uStack_6d0);
  uStack_c08 = uStack_6c8;
  uStack_c68 = CONCAT71(uStack_727,uStack_728);
  local_c70 = CONCAT71(local_72f,uStack_730);
  uStack_278 = CONCAT71(uStack_727,uStack_728);
  local_280 = CONCAT71(local_72f,uStack_730);
  uStack_c58 = CONCAT71(uStack_717,uStack_718);
  uStack_c60 = CONCAT71(local_71f,uStack_720);
  uStack_dc8 = CONCAT71(uStack_727,uStack_728);
  uStack_dd0 = CONCAT71(local_72f,uStack_730);
  uStack_c48 = CONCAT71(uStack_707,uStack_708);
  local_c50 = CONCAT71(local_70f,uStack_710);
  uStack_258 = CONCAT71(uStack_707,uStack_708);
  local_260 = CONCAT71(local_70f,uStack_710);
  uStack_c38 = CONCAT71(uStack_6f7,uStack_6f8);
  uStack_c40 = CONCAT71(local_6ff,uStack_700);
  uStack_da8 = CONCAT71(uStack_707,uStack_708);
  uStack_db0 = CONCAT71(local_70f,uStack_710);
  uStack_c98 = CONCAT71(uStack_757,uStack_758);
  uStack_ca0 = CONCAT71(uStack_75f,local_760);
  uStack_ca8 = uStack_768;
  local_cb0 = local_770;
  uStack_c88 = CONCAT71(uStack_747,uStack_748);
  local_c90 = CONCAT71(uStack_74f,uStack_750);
  local_2a0 = CONCAT71(uStack_74f,uStack_750);
  uStack_298 = CONCAT71(uStack_747,uStack_748);
  uStack_c78 = CONCAT71(uStack_737,uStack_738);
  uStack_c80 = CONCAT71(local_73f,uStack_740);
  uStack_de8 = CONCAT71(uStack_747,uStack_748);
  uStack_df0 = CONCAT71(uStack_74f,uStack_750);
  uStack_d8 = CONCAT71(uStack_447,uStack_448);
  local_e0 = CONCAT71(local_44f,uStack_450);
  uStack_c8 = CONCAT71(uStack_437,uStack_438);
  local_d0 = CONCAT71(local_43f,uStack_440);
  uStack_cd8 = CONCAT71(uStack_447,uStack_448);
  local_ce0 = CONCAT71(local_44f,uStack_450);
  local_c0 = CONCAT71(uStack_42f,uStack_430);
  local_170 = CONCAT71(uStack_42f,uStack_430);
  uStack_b8 = uStack_428;
  uStack_118 = CONCAT71(uStack_487,uStack_488);
  local_120 = CONCAT71(local_48f,uStack_490);
  uStack_108 = CONCAT71(uStack_477,uStack_478);
  local_110 = CONCAT71(local_47f,uStack_480);
  uStack_d18 = CONCAT71(uStack_487,uStack_488);
  local_d20 = CONCAT71(local_48f,uStack_490);
  uStack_f8 = CONCAT71(uStack_467,uStack_468);
  local_100 = CONCAT71(local_46f,uStack_470);
  uStack_e8 = CONCAT71(uStack_457,uStack_458);
  local_f0 = CONCAT71(local_45f,uStack_460);
  uStack_cf8 = CONCAT71(uStack_467,uStack_468);
  local_d00 = CONCAT71(local_46f,uStack_470);
  uStack_148 = CONCAT71(uStack_4b7,uStack_4b8);
  local_150 = CONCAT71(uStack_4bf,local_4c0);
  uStack_158 = uStack_4c8;
  local_160 = local_4d0;
  uStack_138 = CONCAT71(uStack_4a7,uStack_4a8);
  local_140 = CONCAT71(uStack_4af,uStack_4b0);
  uStack_128 = CONCAT71(uStack_497,uStack_498);
  local_130 = CONCAT71(local_49f,uStack_4a0);
  uStack_d38 = CONCAT71(uStack_4a7,uStack_4a8);
  local_d40 = CONCAT71(uStack_4af,uStack_4b0);
  uStack_2d8 = CONCAT71(uStack_977,uStack_978);
  local_2e0 = CONCAT71(local_97f,uStack_980);
  uStack_e28 = CONCAT71(uStack_977,uStack_978);
  uStack_e30 = CONCAT71(local_97f,uStack_980);
  uStack_2c8 = uStack_968;
  uStack_318 = CONCAT71(uStack_9b7,uStack_9b8);
  local_320 = CONCAT71(local_9bf,uStack_9c0);
  uStack_e68 = CONCAT71(uStack_9b7,uStack_9b8);
  uStack_e70 = CONCAT71(local_9bf,uStack_9c0);
  uStack_2f8 = CONCAT71(uStack_997,uStack_998);
  local_300 = CONCAT71(local_99f,uStack_9a0);
  uStack_e48 = CONCAT71(uStack_997,uStack_998);
  uStack_e50 = CONCAT71(local_99f,uStack_9a0);
  uStack_358 = CONCAT71(uStack_9f7,uStack_9f8);
  local_360 = CONCAT71(uStack_9ff,local_a00);
  uStack_ea8 = CONCAT71(uStack_9f7,uStack_9f8);
  uStack_eb0 = CONCAT71(uStack_9ff,local_a00);
  uStack_368 = uStack_a08;
  local_370 = local_a10;
  uStack_338 = CONCAT71(uStack_9d7,uStack_9d8);
  local_340 = CONCAT71(local_9df,uStack_9e0);
  uStack_e88 = CONCAT71(uStack_9d7,uStack_9d8);
  uStack_e90 = CONCAT71(local_9df,uStack_9e0);
  uStack_eb8 = uStack_a08;
  local_ec0 = local_a10;
  uStack_228 = CONCAT71(uStack_6d7,uStack_6d8);
  local_230 = CONCAT71(local_6df,uStack_6e0);
  uStack_d78 = CONCAT71(uStack_6d7,uStack_6d8);
  local_d80 = CONCAT71(local_6df,uStack_6e0);
  uStack_218 = uStack_6c8;
  uStack_268 = CONCAT71(uStack_717,uStack_718);
  local_270 = CONCAT71(local_71f,uStack_720);
  uStack_db8 = CONCAT71(uStack_717,uStack_718);
  local_dc0 = CONCAT71(local_71f,uStack_720);
  uStack_248 = CONCAT71(uStack_6f7,uStack_6f8);
  local_250 = CONCAT71(local_6ff,uStack_700);
  uStack_d98 = CONCAT71(uStack_6f7,uStack_6f8);
  local_da0 = CONCAT71(local_6ff,uStack_700);
  uStack_2a8 = CONCAT71(uStack_757,uStack_758);
  local_2b0 = CONCAT71(uStack_75f,local_760);
  uStack_df8 = CONCAT71(uStack_757,uStack_758);
  local_e00 = CONCAT71(uStack_75f,local_760);
  uStack_2b8 = uStack_768;
  local_2c0 = local_770;
  uStack_288 = CONCAT71(uStack_737,uStack_738);
  local_290 = CONCAT71(local_73f,uStack_740);
  uStack_dd8 = CONCAT71(uStack_737,uStack_738);
  local_de0 = CONCAT71(local_73f,uStack_740);
  uStack_d70 = CONCAT71(uStack_6cf,uStack_6d0);
  uStack_d68 = uStack_6c8;
  local_e20 = CONCAT71(uStack_96f,uStack_970);
  uStack_e18 = uStack_968;
  uStack_e08 = uStack_768;
  puStack_e10 = local_770;
  uStack_cc8 = CONCAT71(uStack_437,uStack_438);
  uStack_cd0 = CONCAT71(local_43f,uStack_440);
  uStack_188 = (undefined7)CONCAT71(uStack_447,uStack_448);
  uStack_181 = (undefined1)((uint7)uStack_447 >> 0x30);
  uStack_190 = (undefined7)CONCAT71(local_44f,uStack_450);
  local_189 = (undefined1)((uint7)local_44f >> 0x30);
  uStack_178 = (undefined7)CONCAT71(uStack_437,uStack_438);
  uStack_171 = (undefined1)((uint7)uStack_437 >> 0x30);
  uStack_180 = (undefined7)CONCAT71(local_43f,uStack_440);
  local_179 = (undefined1)((uint7)local_43f >> 0x30);
  uStack_168 = uStack_428;
  uStack_d08 = CONCAT71(uStack_477,uStack_478);
  uStack_d10 = CONCAT71(local_47f,uStack_480);
  uStack_1c8 = (undefined7)CONCAT71(uStack_487,uStack_488);
  uStack_1c1 = (undefined1)((uint7)uStack_487 >> 0x30);
  uStack_1d0 = (undefined7)CONCAT71(local_48f,uStack_490);
  local_1c9 = (undefined1)((uint7)local_48f >> 0x30);
  uStack_1b8 = (undefined7)CONCAT71(uStack_477,uStack_478);
  uStack_1b1 = (undefined1)((uint7)uStack_477 >> 0x30);
  uStack_1c0 = (undefined7)CONCAT71(local_47f,uStack_480);
  local_1b9 = (undefined1)((uint7)local_47f >> 0x30);
  uStack_ce8 = CONCAT71(uStack_457,uStack_458);
  uStack_cf0 = CONCAT71(local_45f,uStack_460);
  uStack_198 = (undefined7)CONCAT71(uStack_457,uStack_458);
  uStack_191 = (undefined1)((uint7)uStack_457 >> 0x30);
  uStack_1a0 = (undefined7)CONCAT71(local_45f,uStack_460);
  local_199 = (undefined1)((uint7)local_45f >> 0x30);
  uStack_1a8 = (undefined7)CONCAT71(uStack_467,uStack_468);
  uStack_1a1 = (undefined1)((uint7)uStack_467 >> 0x30);
  uStack_1b0 = (undefined7)CONCAT71(local_46f,uStack_470);
  local_1a9 = (undefined1)((uint7)local_46f >> 0x30);
  uStack_d48 = CONCAT71(uStack_4b7,uStack_4b8);
  uStack_d50 = CONCAT71(uStack_4bf,local_4c0);
  uStack_208 = (undefined7)uStack_4c8;
  uStack_201 = (undefined1)((ulong)uStack_4c8 >> 0x38);
  uStack_210 = SUB87(local_4d0,0);
  local_209 = (undefined1)((ulong)local_4d0 >> 0x38);
  uStack_1f8 = (undefined7)CONCAT71(uStack_4b7,uStack_4b8);
  uStack_1f1 = (undefined1)((uint7)uStack_4b7 >> 0x30);
  uStack_200 = (undefined7)CONCAT71(uStack_4bf,local_4c0);
  local_1f9 = (undefined1)((uint7)uStack_4bf >> 0x30);
  uStack_d28 = CONCAT71(uStack_497,uStack_498);
  uStack_d30 = CONCAT71(local_49f,uStack_4a0);
  uStack_1d8 = (undefined7)CONCAT71(uStack_497,uStack_498);
  uStack_1d1 = (undefined1)((uint7)uStack_497 >> 0x30);
  uStack_1e0 = (undefined7)CONCAT71(local_49f,uStack_4a0);
  local_1d9 = (undefined1)((uint7)local_49f >> 0x30);
  uStack_1e8 = (undefined7)CONCAT71(uStack_4a7,uStack_4a8);
  uStack_1e1 = (undefined1)((uint7)uStack_4a7 >> 0x30);
  uStack_1f0 = (undefined7)CONCAT71(uStack_4af,uStack_4b0);
  local_1e9 = (undefined1)((uint7)uStack_4af >> 0x30);
  local_cc0 = CONCAT71(uStack_42f,uStack_430);
  uStack_cb8 = uStack_428;
  uStack_d58 = uStack_4c8;
  local_d60 = local_4d0;
  local_e80 = local_fb0;
  uStack_e78 = uStack_fa8;
  local_e60 = local_fc0;
  uStack_e58 = uStack_fb8;
  local_e40 = local_fa0;
  uStack_e38 = uStack_f98;
  local_2f0 = local_f90;
  uStack_2e8 = uStack_f88;
  _memcpy(local_f78,&local_ec0,0x210);
  FUN_100011090(&local_370,auStack_f70,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_100011090(&local_2c0,auStack_f70,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_100011090(&uStack_210,auStack_f70,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_100005808(&local_160,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_100005808(&local_cb0,&DAT_100fb9c50,&DAT_100c39f08);
  FUN_100005808(&local_c00,&DAT_100fb9c50,&DAT_100c39f08);
  return;
}



/* Address: 0x10027cc54 | FUN_10027cc54 */

void FUN_10027cc54(void *param_1,VerticalAlignment param_2)

{
  VerticalAlignment VVar1;
  undefined1 auStack_d00 [552];
  undefined1 auStack_ad8 [536];
  undefined1 auStack_8c0 [528];
  undefined1 auStack_6b0 [528];
  undefined *local_4a0;
  undefined8 local_498;
  undefined1 local_490;
  undefined1 auStack_48f [535];
  undefined *local_278;
  undefined8 local_270;
  undefined1 local_268;
  undefined1 auStack_267 [535];
  
  VVar1 = SwiftUI::VerticalAlignment::get_top(param_2);
  FUN_10027c11c(&local_278);
  _memcpy(auStack_8c0,&local_278,0x210);
  _memcpy(auStack_6b0,&local_278,0x210);
  FUN_100011090(auStack_8c0,&local_4a0,&DAT_100fb9c38,&DAT_100c39ef0);
  FUN_100005808(auStack_6b0,&DAT_100fb9c38,&DAT_100c39ef0);
  _memcpy((void *)((ulong)auStack_ad8 | 7),auStack_8c0,0x210);
  local_498 = 0x4030000000000000;
  local_490 = 0;
  local_4a0 = VVar1.unknown;
  _memcpy(auStack_48f,auStack_ad8,0x217);
  local_270 = 0x4030000000000000;
  local_268 = 0;
  local_278 = VVar1.unknown;
  _memcpy(auStack_267,auStack_ad8,0x217);
  FUN_100011090(&local_4a0,auStack_d00,&DAT_100fb9c40,&DAT_100c39ef8);
  FUN_100005808(&local_278,&DAT_100fb9c40,&DAT_100c39ef8);
  _memcpy(param_1,&local_4a0,0x228);
  return;
}



/* Address: 0x10027cd90 | FUN_10027cd90 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010027cf24 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10027cd90(undefined8 *param_1,char *param_2,void *param_3,undefined *param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  Image IVar5;
  Font FVar6;
  Color CVar7;
  Color CVar8;
  Alignment AVar9;
  undefined **ppuVar10;
  Text TVar11;
  Font FVar12;
  Text TVar13;
  undefined *puVar14;
  Text TVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  String systemName;
  undefined1 auStack_458 [88];
  undefined *local_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined *local_3e0;
  undefined *puStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined *puStack_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined *local_360;
  undefined *puStack_358;
  undefined *puStack_350;
  undefined *puStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined *local_300;
  undefined *puStack_2f8;
  undefined *local_2f0;
  undefined *puStack_2e8;
  undefined *local_2e0;
  undefined *puStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined *local_2a8;
  undefined *puStack_2a0;
  undefined *local_298;
  undefined *puStack_290;
  undefined *local_288;
  undefined *local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined *local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 local_1e0;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100270a58();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Features.swift",0x25,1,0x16,UVar3.unknown,pMVar1);
  }
  _swift_bridgeObjectRetain(param_3);
  systemName.bridgeObject = param_3;
  systemName.str = param_2;
  IVar5 = SwiftUI::Image::init(systemName);
  FVar6 = SwiftUI::Font::get_largeTitle(IVar5.unknown);
  CVar7.unknown = &DAT_100c39f10;
  _swift_getKeyPath();
  CVar8 = SwiftUI::Color::get_accentColor(CVar7);
  AVar9.unknown = &DAT_100c39f40;
  _swift_getKeyPath();
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x4042000000000000);
  uStack_2d0 = puStack_358;
  puStack_2d8 = local_360;
  uStack_2c0 = puStack_348;
  uStack_2c8 = puStack_350;
  uStack_2b0 = puStack_338;
  local_2b8 = local_340;
  uStack_268 = puStack_348;
  local_270 = puStack_350;
  uStack_258 = puStack_338;
  uStack_260 = local_340;
  uStack_278 = puStack_358;
  local_280 = local_360;
  puVar17 = &DAT_100c39f70;
  local_300 = IVar5.unknown;
  puStack_2f8 = CVar7.unknown;
  local_2f0 = FVar6.unknown;
  puStack_2e8 = AVar9.unknown;
  local_2e0 = CVar8.unknown;
  local_2a8 = IVar5.unknown;
  puStack_2a0 = CVar7.unknown;
  local_298 = FVar6.unknown;
  puStack_290 = AVar9.unknown;
  local_288 = CVar8.unknown;
  FUN_100011090(&local_300,&local_150,&DAT_100fb9c58,&DAT_100c39f70);
  ppuVar10 = &local_2a8;
  FUN_100005808(ppuVar10,&DAT_100fb9c58,&DAT_100c39f70);
  local_150 = param_4;
  puStack_148 = (undefined *)param_5;
  FUN_1002538a0();
  _swift_bridgeObjectRetain(param_5);
  puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar11 = SwiftUI::Text::_init(ppuVar10,PTR___type_metadata_for_Swift_String_100eac208,ppuVar10);
  FVar6.unknown = puVar14;
  FVar12 = SwiftUI::Font::get_body(TVar11.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar12.unknown);
  FVar6 = SwiftUI::Font::weight(FVar12.unknown,FVar6);
  _swift_release(FVar12.unknown);
  TVar15 = TVar11;
  puVar16 = puVar14;
  ppuVar18 = ppuVar10;
  TVar13 = SwiftUI::Text::_font(FVar6.unknown);
  _swift_release(FVar6.unknown);
  FUN_100016d74(TVar11.unknown,puVar14,ppuVar10);
  _swift_bridgeObjectRelease(puVar17);
  FUN_100205044(&local_150,1,TVar13.unknown,TVar15.unknown,puVar16,ppuVar18);
  FUN_100016d74(TVar13.unknown,TVar15.unknown,puVar16);
  _swift_bridgeObjectRelease(ppuVar18);
  uStack_248 = puStack_148;
  local_250 = local_150;
  uStack_238 = puStack_138;
  uStack_240 = puStack_140;
  uStack_228 = puStack_128;
  local_230 = local_130;
  local_220 = (undefined1)local_120;
  puStack_358 = puStack_148;
  local_360 = local_150;
  puStack_348 = puStack_138;
  puStack_350 = puStack_140;
  puStack_338 = puStack_128;
  local_340 = local_130;
  local_330 = CONCAT71(local_330._1_7_,(undefined1)local_120);
  local_1e0 = (undefined1)local_120;
  uStack_1f8 = puStack_138;
  local_200 = puStack_140;
  uStack_1e8 = puStack_128;
  uStack_1f0 = local_130;
  uStack_208 = puStack_148;
  local_210 = local_150;
  FUN_100011090(&local_250,auStack_458,&DAT_100fb9418,&DAT_100c391d0);
  FUN_100005808(&local_210,&DAT_100fb9418,&DAT_100c391d0);
  uStack_1c8 = puStack_358;
  local_1d0 = local_360;
  uStack_1b8 = puStack_348;
  local_1c0 = puStack_350;
  uStack_1a8 = puStack_338;
  local_1b0 = local_340;
  local_1a0 = local_330;
  uStack_198 = 0x3feb333333333333;
  uStack_188 = puStack_358;
  local_190 = local_360;
  uStack_178 = puStack_348;
  uStack_180 = puStack_350;
  uStack_168 = puStack_338;
  local_170 = local_340;
  local_160 = local_330;
  local_158 = 0x3feb333333333333;
  FUN_100011090(&local_1d0,&local_150,&DAT_100fb9c60,&DAT_100c39f80);
  FUN_100005808(&local_190,&DAT_100fb9c60,&DAT_100c39f80);
  puStack_338 = puStack_2d8;
  local_340 = local_2e0;
  uStack_328 = uStack_2c8;
  local_330 = uStack_2d0;
  uStack_318 = local_2b8;
  local_320 = uStack_2c0;
  puStack_358 = puStack_2f8;
  local_360 = local_300;
  puStack_348 = puStack_2e8;
  puStack_350 = local_2f0;
  uStack_88 = uStack_1a8;
  local_90 = local_1b0;
  uStack_78 = uStack_198;
  uStack_80 = local_1a0;
  uStack_a8 = uStack_1c8;
  local_b0 = local_1d0;
  uStack_98 = uStack_1b8;
  uStack_a0 = local_1c0;
  puStack_148 = puStack_2f8;
  local_150 = local_300;
  puStack_138 = puStack_2e8;
  puStack_140 = local_2f0;
  uStack_108 = local_2b8;
  local_110 = uStack_2c0;
  puStack_128 = puStack_2d8;
  local_130 = local_2e0;
  uStack_118 = uStack_2c8;
  local_120 = uStack_2d0;
  local_310 = uStack_2b0;
  local_100 = uStack_2b0;
  puStack_3f8 = puStack_2f8;
  local_400 = local_300;
  puStack_3e8 = puStack_2e8;
  puStack_3f0 = local_2f0;
  local_3b0 = uStack_2b0;
  uStack_3c8 = uStack_2c8;
  local_3d0 = uStack_2d0;
  uStack_3b8 = local_2b8;
  uStack_3c0 = uStack_2c0;
  puStack_3d8 = puStack_2d8;
  local_3e0 = local_2e0;
  uStack_c8 = uStack_1a8;
  local_d0 = local_1b0;
  uStack_b8 = uStack_198;
  uStack_c0 = local_1a0;
  uStack_e8 = uStack_1c8;
  local_f0 = local_1d0;
  uStack_d8 = uStack_1b8;
  uStack_e0 = local_1c0;
  uStack_370 = uStack_198;
  local_378 = local_1a0;
  uStack_380 = uStack_1a8;
  local_388 = local_1b0;
  uStack_390 = uStack_1b8;
  local_398 = local_1c0;
  uStack_3a0 = uStack_1c8;
  puStack_3a8 = local_1d0;
  param_1[1] = puStack_2f8;
  *param_1 = local_300;
  param_1[3] = puStack_2e8;
  param_1[2] = local_2f0;
  param_1[9] = local_2b8;
  param_1[8] = uStack_2c0;
  param_1[0xb] = local_1d0;
  param_1[10] = uStack_2b0;
  param_1[5] = puStack_2d8;
  param_1[4] = local_2e0;
  param_1[7] = uStack_2c8;
  param_1[6] = uStack_2d0;
  param_1[0x12] = uStack_198;
  param_1[0xf] = local_1b0;
  param_1[0xe] = uStack_1b8;
  param_1[0x11] = local_1a0;
  param_1[0x10] = uStack_1a8;
  param_1[0xd] = local_1c0;
  param_1[0xc] = uStack_1c8;
  FUN_100011090(&local_150,auStack_458,&DAT_100fb9c58,&DAT_100c39f70);
  FUN_100011090(&local_f0,auStack_458,&DAT_100fb9c60,&DAT_100c39f80);
  FUN_100005808(&local_b0,&DAT_100fb9c60,&DAT_100c39f80);
  FUN_100005808(&local_360,&DAT_100fb9c58,&DAT_100c39f70);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10027d200 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x10027d204 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x10027d208 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x10027d20c | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x10027d210 | thunk_FUN_10027d214 */

void thunk_FUN_10027d214(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb9c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9c40;
  FUN_100005c24(&DAT_100fb9c40,&DAT_100c39ef8);
  puVar2 = PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0,puVar1);
  DAT_100fb9c68 = puVar2;
  return;
}



/* Address: 0x10027d214 | FUN_10027d214 */

void FUN_10027d214(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb9c68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9c40;
  FUN_100005c24(&DAT_100fb9c40,&DAT_100c39ef8);
  puVar2 = PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0;
  _swift_getWitnessTable(PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0,puVar1);
  DAT_100fb9c68 = puVar2;
  return;
}



/* Address: 0x10027d264 | FUN_10027d264 */

undefined1  [16] FUN_10027d264(void)

{
  return ZEXT816(0x100ec5290);
}



/* Address: 0x10027d274 | thunk_FUN_100172344 */

undefined8 * thunk_FUN_100172344(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10027d278 | thunk_FUN_1000559f0 */

int thunk_FUN_1000559f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10027d27c | thunk_FUN_100055a38 */

void thunk_FUN_100055a38(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10027d280 | FUN_10027d280 */

undefined1  [16] FUN_10027d280(void)

{
  return ZEXT816(0x100ec5310);
}



/* Address: 0x10027d290 | FUN_10027d290 */

undefined1  [16] FUN_10027d290(void)

{
  return ZEXT816(0x100ec5338);
}



/* Address: 0x10027d2a0 | FUN_10027d2a0 */

void FUN_10027d2a0(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa2c4,1);
  return;
}



/* Address: 0x10027d2b0 | FUN_10027d2b0 */

void FUN_10027d2b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Set SVar6;
  Set SVar7;
  long extraout_x8;
  undefined8 uVar8;
  String SVar9;
  undefined1 auStack_460 [64];
  char *local_420;
  void *pvStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined1 uStack_3f8;
  undefined7 local_3f7;
  undefined1 uStack_3f0;
  undefined7 uStack_3ef;
  undefined1 uStack_3e8;
  undefined7 uStack_3e7;
  char *local_3e0;
  void *pvStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined1 uStack_3b8;
  undefined7 local_3b7;
  undefined1 uStack_3b0;
  undefined7 uStack_3af;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined1 uStack_378;
  undefined7 local_377;
  undefined1 uStack_370;
  undefined7 uStack_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  char *local_360;
  void *pvStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined8 uStack_32f;
  char *local_320;
  void *pvStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined8 uStack_2ef;
  String local_2e0;
  undefined1 local_2d0;
  undefined7 uStack_2cf;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 uStack_2af;
  undefined1 local_2a8;
  String local_2a0;
  undefined1 local_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268;
  String local_260;
  undefined1 local_250;
  undefined7 uStack_24f;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 local_230;
  undefined7 uStack_22f;
  undefined1 local_228;
  String local_220;
  undefined1 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168;
  char *local_160;
  void *pvStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 local_137;
  undefined1 uStack_130;
  undefined8 uStack_12f;
  char *local_120;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_460 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Header.swift",0x23,1,8,UVar4.unknown,pMVar2);
  }
  FUN_1001cbdd4(LVar1.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar1);
  SVar6 = SwiftUI::Edge::Set::get_top((Set)SVar9.str);
  SVar7 = SVar6;
  if (DAT_100fb9c90 != -1) {
    SVar7.unknown = (undefined *)&DAT_100fb9c90;
    _swift_once(&DAT_100fb9c90,FUN_10027e990);
  }
  uVar8 = DAT_100fb9c98;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  local_2d0 = SUB81(SVar6.unknown,0);
  uStack_2b8 = (undefined1)param_4;
  uStack_2b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_2b0 = (undefined1)param_5;
  uStack_2af = (undefined7)((ulong)param_5 >> 8);
  local_2a8 = 0;
  local_268 = 0;
  local_2e0 = SVar9;
  uStack_2c8 = uVar8;
  local_2c0 = param_3;
  local_2a0 = SVar9;
  local_290 = local_2d0;
  local_288 = uVar8;
  uStack_280 = param_3;
  local_278 = param_4;
  uStack_270 = param_5;
  FUN_100011090(&local_2e0,&local_a0,&DAT_100fb9ca0,&DAT_100c3a0e0);
  FUN_100005808(&local_2a0,&DAT_100fb9ca0,&DAT_100c3a0e0);
  FUN_1001cbad4(LVar1.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar1);
  SVar6 = SwiftUI::Edge::Set::get_top((Set)SVar9.str);
  SVar7 = SVar6;
  if (DAT_100fb9ca8 != -1) {
    SVar7.unknown = (undefined *)&DAT_100fb9ca8;
    _swift_once(&DAT_100fb9ca8,FUN_10027e9d0);
  }
  uVar8 = DAT_100fb9cb0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  local_250 = SUB81(SVar6.unknown,0);
  uStack_238 = (undefined1)param_4;
  uStack_237 = (undefined7)((ulong)param_4 >> 8);
  local_230 = (undefined1)param_5;
  uStack_22f = (undefined7)((ulong)param_5 >> 8);
  local_228 = 0;
  local_1e8 = 0;
  local_260 = SVar9;
  uStack_248 = uVar8;
  local_240 = param_3;
  local_220 = SVar9;
  local_210 = local_250;
  local_208 = uVar8;
  local_200 = param_3;
  local_1f8 = param_4;
  local_1f0 = param_5;
  FUN_100011090(&local_260,&local_a0,&DAT_100fb9cb8,&DAT_100c3a0e8);
  SVar7.unknown = (undefined *)&local_220;
  FUN_100005808(SVar7.unknown,&DAT_100fb9cb8,&DAT_100c3a0e8);
  SVar6 = SwiftUI::Edge::Set::get_top(SVar7);
  SVar7 = SVar6;
  if (DAT_100fb9cc0 != -1) {
    SVar7.unknown = (undefined *)&DAT_100fb9cc0;
    _swift_once(&DAT_100fb9cc0,FUN_10027e9f0);
  }
  uVar8 = DAT_100fb9cc8;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  local_1e0 = 0xd000000000000010;
  uStack_1d8 = 0x8000000100d9f730;
  local_1d0 = SUB81(SVar6.unknown,0);
  uStack_1b8 = (undefined1)param_4;
  uStack_1b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_1b0 = (undefined1)param_5;
  uStack_1af = (undefined7)((ulong)param_5 >> 8);
  uStack_1a8 = 0;
  local_1a0 = 0xd000000000000010;
  local_198 = 0x8000000100d9f730;
  local_168 = 0;
  uStack_1c8 = uVar8;
  local_1c0 = param_3;
  local_190 = local_1d0;
  local_188 = uVar8;
  local_180 = param_3;
  local_178 = param_4;
  local_170 = param_5;
  FUN_100011090(&local_1e0,&local_a0,&DAT_100fb9cd0,&DAT_100c3a0f0);
  SVar7.unknown = (undefined *)&local_1a0;
  FUN_100005808(SVar7.unknown,&DAT_100fb9cd0,&DAT_100c3a0f0);
  SVar6 = SwiftUI::Edge::Set::get_top(SVar7);
  SVar7 = SVar6;
  if (DAT_100fb9cd8 != -1) {
    SVar7.unknown = (undefined *)&DAT_100fb9cd8;
    _swift_once(&DAT_100fb9cd8,FUN_10027ea50);
  }
  uVar8 = DAT_100fb9ce0;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  uStack_310 = CONCAT71(uStack_2cf,local_2d0);
  pvStack_318 = local_2e0.bridgeObject;
  local_320 = local_2e0.str;
  uStack_308 = uStack_2c8;
  uStack_2f8 = uStack_2b8;
  local_300 = local_2c0;
  uStack_2ef = CONCAT17(local_2a8,uStack_2af);
  uStack_2f7 = uStack_2b7;
  uStack_2f0 = uStack_2b0;
  uStack_350 = CONCAT71(uStack_24f,local_250);
  pvStack_358 = local_260.bridgeObject;
  local_360 = local_260.str;
  uStack_348 = uStack_248;
  uStack_338 = uStack_238;
  local_340 = local_240;
  uStack_32f = CONCAT17(local_228,uStack_22f);
  uStack_337 = uStack_237;
  uStack_330 = local_230;
  uStack_6f = CONCAT17(uStack_1a8,uStack_1af);
  uStack_70 = uStack_1b0;
  local_90 = CONCAT71(uStack_1cf,local_1d0);
  uStack_88 = uStack_1c8;
  uStack_78 = uStack_1b8;
  local_77 = uStack_1b7;
  uStack_80 = local_1c0;
  uStack_98 = uStack_1d8;
  local_a0 = local_1e0;
  uStack_12f = CONCAT17(local_2a8,uStack_2af);
  uStack_130 = uStack_2b0;
  uStack_138 = uStack_2b8;
  local_137 = uStack_2b7;
  uStack_140 = local_2c0;
  uStack_150 = CONCAT71(uStack_2cf,local_2d0);
  uStack_410 = CONCAT71(uStack_2cf,local_2d0);
  pvStack_158 = local_2e0.bridgeObject;
  local_160 = local_2e0.str;
  uStack_148 = uStack_2c8;
  uStack_3ef = uStack_2af;
  uStack_3e8 = local_2a8;
  uStack_3f0 = uStack_2b0;
  pvStack_418 = local_2e0.bridgeObject;
  local_420 = local_2e0.str;
  uStack_408 = uStack_2c8;
  uStack_ef = CONCAT17(local_228,uStack_22f);
  uStack_f0 = local_230;
  local_110 = CONCAT71(uStack_24f,local_250);
  uStack_108 = uStack_248;
  uStack_f8 = uStack_238;
  local_f7 = uStack_237;
  uStack_100 = local_240;
  pvStack_118 = local_260.bridgeObject;
  local_120 = local_260.str;
  uStack_3af = uStack_22f;
  uStack_3a8 = local_228;
  uStack_3b0 = local_230;
  local_3d0 = CONCAT71(uStack_24f,local_250);
  uStack_3c8 = uStack_248;
  uStack_3b8 = uStack_238;
  local_3b7 = uStack_237;
  uStack_3c0 = local_240;
  uStack_3f8 = uStack_2b8;
  local_3f7 = uStack_2b7;
  uStack_400 = local_2c0;
  pvStack_3d8 = local_260.bridgeObject;
  local_3e0 = local_260.str;
  uStack_af = CONCAT17(uStack_1a8,uStack_1af);
  uStack_b0 = uStack_1b0;
  local_d0 = CONCAT71(uStack_1cf,local_1d0);
  local_390 = CONCAT71(uStack_1cf,local_1d0);
  uStack_c8 = uStack_1c8;
  uStack_b8 = uStack_1b8;
  local_b7 = uStack_1b7;
  uStack_c0 = local_1c0;
  uStack_d8 = uStack_1d8;
  local_e0 = local_1e0;
  uStack_36f = uStack_1af;
  uStack_368 = uStack_1a8;
  uStack_370 = uStack_1b0;
  uStack_388 = uStack_1c8;
  uStack_378 = uStack_1b8;
  local_377 = uStack_1b7;
  uStack_380 = local_1c0;
  uStack_398 = uStack_1d8;
  local_3a0 = local_1e0;
  param_1[5] = CONCAT71(uStack_2b7,uStack_2b8);
  param_1[4] = local_2c0;
  param_1[7] = CONCAT71(uStack_3e7,local_2a8);
  param_1[6] = CONCAT71(uStack_2af,uStack_2b0);
  param_1[1] = local_2e0.bridgeObject;
  *param_1 = local_2e0.str;
  param_1[3] = uStack_2c8;
  param_1[2] = uStack_410;
  param_1[0xd] = CONCAT71(uStack_237,uStack_238);
  param_1[0xc] = local_240;
  param_1[0xf] = CONCAT71(uStack_3a7,local_228);
  param_1[0xe] = CONCAT71(uStack_22f,local_230);
  param_1[9] = local_260.bridgeObject;
  param_1[8] = local_260.str;
  param_1[0xb] = uStack_248;
  param_1[10] = local_3d0;
  param_1[0x15] = CONCAT71(uStack_1b7,uStack_1b8);
  param_1[0x14] = local_1c0;
  param_1[0x17] = CONCAT71(uStack_367,uStack_1a8);
  param_1[0x16] = CONCAT71(uStack_1af,uStack_1b0);
  param_1[0x11] = uStack_1d8;
  param_1[0x10] = local_1e0;
  param_1[0x13] = uStack_1c8;
  param_1[0x12] = local_390;
  *(char *)(param_1 + 0x18) = (char)SVar6.unknown;
  param_1[0x19] = uVar8;
  param_1[0x1a] = param_3;
  param_1[0x1b] = param_4;
  param_1[0x1c] = param_5;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_100011090(&local_160,auStack_460,&DAT_100fb9ca0,&DAT_100c3a0e0);
  FUN_100011090(&local_120,auStack_460,&DAT_100fb9cb8,&DAT_100c3a0e8);
  FUN_100011090(&local_e0,auStack_460,&DAT_100fb9cd0,&DAT_100c3a0f0);
  FUN_100005808(&local_a0,&DAT_100fb9cd0,&DAT_100c3a0f0);
  FUN_100005808(&local_360,&DAT_100fb9cb8,&DAT_100c3a0e8);
  FUN_100005808(&local_320,&DAT_100fb9ca0,&DAT_100c3a0e0);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10027d7dc | FUN_10027d7dc */

void FUN_10027d7dc(void *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined1 auStack_648 [264];
  undefined7 uStack_540;
  undefined1 local_539;
  undefined7 uStack_538;
  undefined1 uStack_531;
  undefined7 uStack_530;
  undefined8 uStack_458;
  undefined *local_450;
  undefined8 uStack_448;
  undefined1 uStack_440;
  undefined8 uStack_36f;
  undefined *local_360;
  undefined8 uStack_358;
  undefined8 uStack_27f;
  undefined *local_270;
  undefined8 local_268;
  undefined1 local_260;
  undefined8 local_25f;
  undefined8 uStack_257;
  undefined8 local_24f;
  undefined8 uStack_177;
  undefined *local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined1 uStack_150;
  undefined7 uStack_14f;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined8 local_87;
  undefined8 uStack_6f;
  
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  FUN_10027d2b0(&local_168);
  uStack_36f = local_87;
  uStack_440 = local_158;
  uStack_448 = uStack_160;
  local_450 = local_168;
  uStack_27f = local_87;
  uStack_358 = uStack_160;
  local_360 = local_168;
  FUN_100011090(&local_450,&local_270,&DAT_100fb9c80,&DAT_100c3a0d0);
  FUN_100005808(&local_360,&DAT_100fb9c80,&DAT_100c3a0d0);
  uStack_458 = uStack_36f;
  uStack_531 = (undefined1)uStack_448;
  uStack_530 = (undefined7)((ulong)uStack_448 >> 8);
  local_539 = SUB81(local_450,0);
  uStack_538 = (undefined7)((ulong)local_450 >> 8);
  uStack_177 = uStack_36f;
  uStack_257 = CONCAT17(uStack_531,uStack_538);
  local_25f = CONCAT17(local_539,uStack_540);
  local_24f = CONCAT17(uStack_440,uStack_530);
  uStack_6f = uStack_36f;
  uStack_14f = uStack_538;
  local_148 = uStack_531;
  uStack_150 = local_539;
  uStack_147 = uStack_530;
  local_268 = 0;
  local_260 = 0;
  uStack_160 = 0;
  local_158 = 0;
  local_270 = HVar1.unknown;
  local_168 = HVar1.unknown;
  FUN_100011090(&local_270,auStack_648,&DAT_100fb9c88,&DAT_100c3a0d8);
  FUN_100005808(&local_168,&DAT_100fb9c88,&DAT_100c3a0d8);
  _memcpy(param_1,&local_270,0x101);
  return;
}



/* Address: 0x10027db18 | FUN_10027db18 */

void FUN_10027db18(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa29c,1);
  return;
}



/* Address: 0x10027db28 | FUN_10027db28 */

void FUN_10027db28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Text TVar1;
  Font FVar2;
  Font FVar3;
  Text TVar4;
  undefined *puVar5;
  Text TVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 8);
  FUN_1002538a0();
  _swift_bridgeObjectRetain(uVar8);
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar1 = SwiftUI::Text::_init();
  FVar2 = SwiftUI::Font::get_title(TVar1.unknown);
  FVar3 = SwiftUI::Font::bold(FVar2);
  _swift_release(FVar2.unknown);
  TVar6 = TVar1;
  puVar7 = puVar5;
  uVar8 = param_2;
  TVar4 = SwiftUI::Text::_font(FVar3.unknown);
  _swift_release(FVar3.unknown);
  FUN_100016d74(TVar1.unknown,puVar5,param_2);
  _swift_bridgeObjectRelease(param_5);
  puVar5 = &DAT_100c3a0a0;
  _swift_getKeyPath();
  *param_1 = TVar4.unknown;
  param_1[1] = TVar6.unknown;
  *(char *)(param_1 + 2) = (char)puVar7;
  param_1[3] = uVar8;
  param_1[4] = puVar5;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Address: 0x10027dc28 | FUN_10027dc28 */

void FUN_10027dc28(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa274,1);
  return;
}



/* Address: 0x10027dc38 | FUN_10027dc38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010027dc84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10027dc38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  Text TVar1;
  Text TVar2;
  Color CVar3;
  Text TVar4;
  undefined *puVar5;
  Text TVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  
  FUN_1002538a0();
  _swift_bridgeObjectRetain(param_3);
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar1 = SwiftUI::Text::_init(param_2,PTR___type_metadata_for_Swift_String_100eac208,param_2);
  if (DAT_100fb9c70 != -1) {
    _swift_once(&DAT_100fb9c70,FUN_10027e9b0);
  }
  TVar6 = TVar1;
  puVar7 = puVar5;
  uVar9 = param_2;
  TVar2 = SwiftUI::Text::_font(DAT_100fb9c78);
  FUN_100016d74(TVar1.unknown,puVar5,param_2);
  _swift_bridgeObjectRelease();
  FUN_1002199e8();
  CVar3 = SwiftUI::Color::init((NSColor *)*param_5);
  FUN_10026e1d0();
  TVar1 = TVar2;
  puVar8 = TVar6.unknown;
  puVar10 = puVar7;
  TVar4 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar2.unknown,TVar6.unknown,puVar7);
  _swift_release(CVar3.unknown);
  _swift_bridgeObjectRelease(uVar9);
  puVar5 = &DAT_100c3a0a0;
  _swift_getKeyPath();
  *param_1 = TVar4.unknown;
  param_1[1] = TVar1.unknown;
  *(char *)(param_1 + 2) = (char)puVar8;
  param_1[3] = puVar10;
  param_1[4] = puVar5;
  *(undefined1 *)(param_1 + 5) = 1;
  return;
}



/* Address: 0x10027ddb4 | FUN_10027ddb4 */

void FUN_10027ddb4(void)

{
  undefined8 *unaff_x20;
  
  FUN_10027dc38(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10027ddbc | FUN_10027ddbc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10027ddbc(undefined8 *param_1,char *param_2,void *param_3)

{
  long lVar1;
  long lVar2;
  ResizingMode RVar3;
  undefined7 extraout_var;
  Image IVar5;
  Image IVar6;
  Alignment AVar7;
  _FlexFrameLayout _Var8;
  Set SVar9;
  Set _all;
  long extraout_x8;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  String SVar15;
  undefined8 uStack_580;
  undefined1 auStack_578 [8];
  undefined8 uStack_570;
  undefined1 auStack_568 [8];
  long alStack_560 [2];
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [184];
  undefined *local_490;
  undefined8 uStack_488;
  undefined2 local_480;
  undefined6 local_47e;
  undefined2 uStack_478;
  undefined6 uStack_476;
  undefined2 uStack_470;
  undefined6 local_46e;
  undefined2 uStack_468;
  undefined6 uStack_466;
  undefined2 uStack_460;
  undefined6 local_45e;
  undefined2 uStack_458;
  undefined6 uStack_456;
  undefined2 uStack_450;
  undefined6 local_44e;
  undefined2 uStack_448;
  undefined6 uStack_446;
  undefined2 uStack_440;
  undefined6 local_43e;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 local_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
  undefined2 uStack_420;
  undefined6 local_41e;
  undefined2 uStack_418;
  undefined6 uStack_416;
  undefined2 uStack_410;
  undefined6 uStack_40e;
  undefined *local_408;
  undefined8 uStack_400;
  undefined2 local_3f8;
  undefined8 local_3f6;
  undefined8 uStack_3ee;
  undefined8 local_3e6;
  undefined8 uStack_3de;
  undefined8 local_3d6;
  undefined8 uStack_3ce;
  undefined8 local_3c6;
  undefined8 uStack_3be;
  undefined8 local_3b6;
  undefined8 uStack_3ae;
  undefined8 local_3a6;
  undefined8 uStack_39e;
  undefined8 local_396;
  undefined6 uStack_38e;
  undefined2 uStack_388;
  undefined6 uStack_386;
  undefined *local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined1 local_2d0;
  undefined *local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_218;
  undefined1 local_210;
  undefined6 uStack_206;
  undefined2 local_200;
  undefined6 uStack_1fe;
  undefined2 uStack_1f8;
  undefined6 uStack_1f6;
  undefined2 local_1f0;
  undefined6 uStack_1ee;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined2 local_1e0;
  undefined6 uStack_1de;
  undefined2 uStack_1d8;
  undefined6 uStack_1d6;
  undefined2 local_1d0;
  undefined6 uStack_1ce;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  undefined2 local_1c0;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined2 local_1b0;
  undefined6 uStack_1ae;
  undefined2 uStack_1a8;
  undefined6 uStack_1a6;
  undefined2 local_1a0;
  undefined6 uStack_19e;
  undefined2 uStack_198;
  undefined6 uStack_196;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
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
  undefined *puVar4;
  
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  lVar10 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar2 = DAT_100fb7de8;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar7.unknown = auStack_550 + lVar1;
  _swift_bridgeObjectRetain(param_3);
  if (lVar2 != -1) {
    _swift_once(&DAT_100fb7de8,FUN_100241de8);
  }
  SVar15.bridgeObject = param_3;
  SVar15.str = param_2;
  IVar5 = SwiftUI::Image::_init(SVar15);
  IVar6.unknown = puVar4;
  (**(code **)(lVar10 + 0x68))
            (AVar7.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  uVar14 = 0;
  IVar6 = SwiftUI::Image::resizable(AVar7.unknown,(ResizingMode)(__int8)IVar5.unknown,IVar6);
  _swift_release(IVar5.unknown);
  (**(code **)(lVar10 + 8))();
  AVar7 = SwiftUI::Alignment::get_center(AVar7);
  *(undefined **)((long)alStack_560 + lVar1) = AVar7.unknown;
  *(undefined **)((long)alStack_560 + lVar1 + 8) = puVar4;
  auStack_568[lVar1] = 1;
  *(undefined8 *)((long)&uStack_570 + lVar1) = 0;
  auStack_578[lVar1] = 1;
  *(undefined8 *)((long)&uStack_580 + lVar1) = 0;
  _Var8 = SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_1c8 = (undefined2)uStack_c8;
  uStack_1c6 = (undefined6)((ulong)uStack_c8 >> 0x10);
  local_1d0 = (undefined2)uStack_d0;
  uStack_1ce = (undefined6)((ulong)uStack_d0 >> 0x10);
  uStack_1b8 = (undefined2)uStack_b8;
  uStack_1b6 = (undefined6)((ulong)uStack_b8 >> 0x10);
  local_1c0 = (undefined2)local_c0;
  uStack_1be = (undefined6)((ulong)local_c0 >> 0x10);
  uStack_1a8 = (undefined2)uStack_a8;
  uStack_1a6 = (undefined6)((ulong)uStack_a8 >> 0x10);
  local_1b0 = (undefined2)uStack_b0;
  uStack_1ae = (undefined6)((ulong)uStack_b0 >> 0x10);
  uStack_198 = (undefined2)uStack_98;
  uStack_196 = (undefined6)((ulong)uStack_98 >> 0x10);
  local_1a0 = (undefined2)local_a0;
  uStack_19e = (undefined6)((ulong)local_a0 >> 0x10);
  uStack_1f8 = (undefined2)uStack_f8;
  uStack_1f6 = (undefined6)((ulong)uStack_f8 >> 0x10);
  local_200 = (undefined2)local_100;
  uStack_1fe = (undefined6)((ulong)local_100 >> 0x10);
  uStack_1e8 = (undefined2)uStack_e8;
  uStack_1e6 = (undefined6)((ulong)uStack_e8 >> 0x10);
  local_1f0 = (undefined2)uStack_f0;
  uStack_1ee = (undefined6)((ulong)uStack_f0 >> 0x10);
  uStack_1d8 = (undefined2)uStack_d8;
  uStack_1d6 = (undefined6)((ulong)uStack_d8 >> 0x10);
  local_1e0 = (undefined2)local_e0;
  uStack_1de = (undefined6)((ulong)local_e0 >> 0x10);
  SVar9 = SwiftUI::Edge::Set::get_horizontal(_Var8.unknown);
  _all = SVar9;
  uVar13 = uStack_f0;
  if (DAT_100fb9d78 != -1) {
    _all.unknown = (undefined *)&DAT_100fb9d78;
    _swift_once(&DAT_100fb9d78,FUN_10027ea10);
    uVar13 = uStack_f0;
  }
  uStack_436 = uStack_1be;
  uStack_430 = uStack_1b8;
  local_43e = uStack_1c6;
  uStack_438 = local_1c0;
  uStack_426 = uStack_1ae;
  uStack_420 = uStack_1a8;
  local_42e = uStack_1b6;
  uStack_428 = local_1b0;
  uStack_416 = uStack_19e;
  local_41e = uStack_1a6;
  uStack_418 = local_1a0;
  uStack_476 = uStack_1fe;
  uStack_470 = uStack_1f8;
  local_47e = uStack_206;
  uStack_478 = local_200;
  uStack_466 = uStack_1ee;
  uStack_460 = uStack_1e8;
  local_46e = uStack_1f6;
  uStack_468 = local_1f0;
  uVar12 = CONCAT26(local_1d0,uStack_1d6);
  uStack_456 = uStack_1de;
  uStack_450 = uStack_1d8;
  local_45e = uStack_1e6;
  uStack_458 = local_1e0;
  uStack_488 = 0;
  local_480 = 1;
  uStack_410 = uStack_198;
  uStack_40e = uStack_196;
  uStack_446 = uStack_1ce;
  uStack_440 = uStack_1c8;
  local_44e = uStack_1d6;
  uStack_448 = local_1d0;
  uVar11 = DAT_100fb9d80;
  local_490 = IVar6.unknown;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_148 = CONCAT62(uStack_446,uStack_448);
  local_150 = CONCAT62(local_44e,uStack_450);
  uStack_138 = CONCAT62(uStack_436,uStack_438);
  local_140 = CONCAT62(local_43e,uStack_440);
  uStack_128 = CONCAT62(uStack_426,uStack_428);
  local_130 = CONCAT62(local_42e,uStack_430);
  uStack_118 = CONCAT62(uStack_416,uStack_418);
  local_120 = CONCAT62(local_41e,uStack_420);
  uStack_178 = CONCAT62(uStack_476,uStack_478);
  local_180 = CONCAT62(local_47e,local_480);
  uStack_168 = CONCAT62(uStack_466,uStack_468);
  local_170 = CONCAT62(local_46e,uStack_470);
  uStack_158 = CONCAT62(uStack_456,uStack_458);
  local_160 = CONCAT62(local_45e,uStack_460);
  uStack_188 = uStack_488;
  local_190 = local_490;
  uStack_3ae = CONCAT26(uStack_1b8,uStack_1be);
  local_3b6 = CONCAT26(local_1c0,uStack_1c6);
  uStack_39e = CONCAT26(uStack_1a8,uStack_1ae);
  local_3a6 = CONCAT26(local_1b0,uStack_1b6);
  local_396 = CONCAT26(local_1a0,uStack_1a6);
  uStack_38e = uStack_19e;
  uStack_3ee = CONCAT26(uStack_1f8,uStack_1fe);
  local_3f6 = CONCAT26(local_200,uStack_206);
  uStack_3de = CONCAT26(uStack_1e8,uStack_1ee);
  local_3e6 = CONCAT26(local_1f0,uStack_1f6);
  uStack_3ce = CONCAT26(uStack_1d8,uStack_1de);
  local_3d6 = CONCAT26(local_1e0,uStack_1e6);
  uStack_3be = CONCAT26(uStack_1c8,uStack_1ce);
  local_3c6 = CONCAT26(local_1d0,uStack_1d6);
  local_110 = CONCAT62(uStack_40e,uStack_410);
  uStack_400 = 0;
  local_3f8 = 1;
  uStack_388 = uStack_198;
  uStack_386 = uStack_196;
  local_408 = IVar6.unknown;
  FUN_100011090(&local_490,&local_2c0,&DAT_100fb9d88,&DAT_100c3a1d0);
  FUN_100005808(&local_408,&DAT_100fb9d88,&DAT_100c3a1d0);
  local_300 = local_110;
  uStack_318 = uStack_128;
  local_320 = local_130;
  uStack_308 = uStack_118;
  uStack_310 = local_120;
  uStack_358 = uStack_168;
  local_360 = local_170;
  uStack_348 = uStack_158;
  uStack_350 = local_160;
  uStack_338 = uStack_148;
  local_340 = local_150;
  uStack_328 = uStack_138;
  uStack_330 = local_140;
  uStack_378 = uStack_188;
  local_380 = local_190;
  uStack_368 = uStack_178;
  uStack_370 = local_180;
  uStack_2f8 = SUB81(SVar9.unknown,0);
  local_2d0 = 0;
  uStack_258 = uStack_128;
  local_260 = local_130;
  uStack_248 = uStack_118;
  uStack_250 = local_120;
  local_240 = local_110;
  uStack_298 = uStack_168;
  local_2a0 = local_170;
  uStack_288 = uStack_158;
  uStack_290 = local_160;
  uStack_278 = uStack_148;
  local_280 = local_150;
  uStack_268 = uStack_138;
  uStack_270 = local_140;
  uStack_2b8 = uStack_188;
  local_2c0 = local_190;
  uStack_2a8 = uStack_178;
  uStack_2b0 = local_180;
  local_210 = 0;
  local_2f0 = uVar11;
  local_2e8 = uVar12;
  local_2e0 = uVar13;
  uStack_2d8 = uVar14;
  local_238 = uStack_2f8;
  local_230 = uVar11;
  local_228 = uVar12;
  local_218 = uVar14;
  FUN_100011090(&local_380,auStack_548,&DAT_100fb9d90,&DAT_100c3a1d8);
  FUN_100005808(&local_2c0,&DAT_100fb9d90,&DAT_100c3a1d8);
  param_1[0x11] = CONCAT71(uStack_2f7,uStack_2f8);
  param_1[0x10] = local_300;
  param_1[0x13] = local_2e8;
  param_1[0x12] = local_2f0;
  param_1[0x15] = uStack_2d8;
  param_1[0x14] = local_2e0;
  *(undefined1 *)(param_1 + 0x16) = local_2d0;
  param_1[9] = uStack_338;
  param_1[8] = local_340;
  param_1[0xb] = uStack_328;
  param_1[10] = uStack_330;
  param_1[0xd] = uStack_318;
  param_1[0xc] = local_320;
  param_1[0xf] = uStack_308;
  param_1[0xe] = uStack_310;
  param_1[1] = uStack_378;
  *param_1 = local_380;
  param_1[3] = uStack_368;
  param_1[2] = uStack_370;
  param_1[5] = uStack_358;
  param_1[4] = local_360;
  param_1[7] = uStack_348;
  param_1[6] = uStack_350;
  return;
}



/* Address: 0x10027e1bc | FUN_10027e1bc */

void FUN_10027e1bc(void)

{
  undefined8 *unaff_x20;
  
  FUN_10027ddbc(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10027e1c4 | FUN_10027e1c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10027e1c4(undefined8 *param_1)

{
  undefined8 uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Image IVar6;
  HorizontalAlignment HVar7;
  Image IVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_278 [88];
  undefined7 uStack_220;
  undefined1 local_219;
  undefined7 uStack_218;
  undefined1 uStack_211;
  undefined7 uStack_210;
  undefined1 local_209;
  undefined7 uStack_208;
  undefined1 uStack_201;
  undefined7 uStack_200;
  undefined1 local_1f9;
  undefined7 uStack_1f8;
  undefined1 uStack_1f1;
  undefined7 uStack_1f0;
  undefined1 local_1e9;
  undefined7 uStack_1e8;
  undefined1 uStack_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 local_1c0 [64];
  undefined *local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 local_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined *puStack_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined8 local_117;
  undefined8 uStack_10f;
  undefined8 local_107;
  undefined8 uStack_ff;
  undefined8 local_f7;
  undefined8 uStack_ef;
  undefined8 local_e7;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Header.swift",0x23,1,0x3c,UVar4.unknown,pMVar2);
  }
  if (DAT_100fb7de8 != -1) {
    _swift_once(&DAT_100fb7de8,FUN_100241de8);
  }
  SVar9.bridgeObject = (void *)0xeb00000000746665;
  SVar9.str = (char *)0x6c2d68636e617262;
  IVar6 = SwiftUI::Image::_init(SVar9);
  IVar8 = IVar6;
  if (DAT_100fb9d30 != -1) {
    IVar8.unknown = (undefined *)&DAT_100fb9d30;
    _swift_once(&DAT_100fb9d30,FUN_10027eb14);
  }
  uVar1 = DAT_100fb9d38;
  HVar7 = SwiftUI::HorizontalAlignment::get_center(IVar8.unknown);
  FUN_10027e480(local_1c0);
  uStack_201 = (undefined1)local_1c0._24_8_;
  uStack_200 = SUB87(local_1c0._24_8_,1);
  local_209 = (undefined1)local_1c0._16_8_;
  uStack_208 = SUB87(local_1c0._16_8_,1);
  uStack_211 = (undefined1)local_1c0._8_8_;
  uStack_210 = SUB87(local_1c0._8_8_,1);
  local_219 = (undefined1)local_1c0._0_8_;
  uStack_218 = SUB87(local_1c0._0_8_,1);
  uStack_1f1 = (undefined1)local_1c0._40_8_;
  uStack_1f0 = SUB87(local_1c0._40_8_,1);
  local_1f9 = (undefined1)local_1c0._32_8_;
  uStack_1f8 = SUB87(local_1c0._32_8_,1);
  uStack_1e1 = (undefined1)local_1c0._56_8_;
  uStack_1e0 = SUB87(local_1c0._56_8_,1);
  local_1e9 = (undefined1)local_1c0._48_8_;
  uStack_1e8 = SUB87(local_1c0._48_8_,1);
  uStack_157 = uStack_208;
  uStack_150 = uStack_201;
  uStack_15f = uStack_210;
  uStack_158 = local_209;
  uStack_ff = CONCAT17(uStack_201,uStack_208);
  local_107 = CONCAT17(local_209,uStack_210);
  uStack_ef = CONCAT17(uStack_1f1,uStack_1f8);
  local_f7 = CONCAT17(local_1f9,uStack_200);
  uStack_147 = uStack_1f8;
  uStack_140 = uStack_1f1;
  local_14f = uStack_200;
  uStack_148 = local_1f9;
  uStack_137 = uStack_1e8;
  local_13f = uStack_1f0;
  uStack_138 = local_1e9;
  uStack_10f = CONCAT17(uStack_211,uStack_218);
  local_117 = CONCAT17(local_219,uStack_220);
  uStack_167 = uStack_218;
  uStack_160 = uStack_211;
  uStack_16f = uStack_220;
  uStack_168 = local_219;
  local_e7 = CONCAT17(local_1e9,uStack_1f0);
  uStack_df = uStack_1e8;
  uStack_178 = 0x4000000000000000;
  local_170 = 0;
  local_120 = 0x4000000000000000;
  local_118 = 0;
  local_180 = HVar7.unknown;
  uStack_130 = uStack_1e1;
  uStack_12f = uStack_1e0;
  puStack_128 = HVar7.unknown;
  uStack_d8 = uStack_1e1;
  uStack_d7 = uStack_1e0;
  FUN_100011090(&local_180,&local_d0,&DAT_100fb9d40,&DAT_100c3a1c8);
  FUN_100005808(&puStack_128,&DAT_100fb9d40,&DAT_100c3a1c8);
  SVar10.bridgeObject = (void *)0xec00000074686769;
  SVar10.str = (char *)0x722d68636e617262;
  IVar8 = SwiftUI::Image::_init(SVar10);
  uStack_a8 = CONCAT71(uStack_157,uStack_158);
  local_b0 = CONCAT71(uStack_15f,uStack_160);
  uStack_1f8 = (undefined7)uStack_a8;
  uStack_1f1 = (undefined1)((uint7)uStack_157 >> 0x30);
  uStack_200 = (undefined7)local_b0;
  local_1f9 = (undefined1)((uint7)uStack_15f >> 0x30);
  uStack_98 = CONCAT71(uStack_147,uStack_148);
  local_a0 = CONCAT71(local_14f,uStack_150);
  uStack_1d8 = CONCAT71(uStack_137,uStack_138);
  local_90 = CONCAT71(local_13f,uStack_140);
  uStack_1e8 = (undefined7)uStack_98;
  uStack_1e1 = (undefined1)((uint7)uStack_147 >> 0x30);
  uStack_1f0 = (undefined7)local_a0;
  local_1e9 = (undefined1)((uint7)local_14f >> 0x30);
  uStack_1e0 = (undefined7)local_90;
  uStack_1d9 = (undefined1)((uint7)local_13f >> 0x30);
  uStack_b8 = CONCAT71(uStack_167,uStack_168);
  local_c0 = CONCAT71(uStack_16f,local_170);
  uStack_c8 = uStack_178;
  local_d0 = local_180;
  local_1d0 = CONCAT71(uStack_12f,uStack_130);
  uStack_218 = (undefined7)uStack_178;
  uStack_211 = (undefined1)((ulong)uStack_178 >> 0x38);
  uStack_220 = SUB87(local_180,0);
  local_219 = (undefined1)((ulong)local_180 >> 0x38);
  uStack_208 = (undefined7)uStack_b8;
  uStack_201 = (undefined1)((uint7)uStack_167 >> 0x30);
  uStack_210 = (undefined7)local_c0;
  local_209 = (undefined1)((uint7)uStack_16f >> 0x30);
  *param_1 = IVar6.unknown;
  param_1[1] = uVar1;
  param_1[7] = CONCAT71(uStack_157,uStack_158);
  param_1[6] = CONCAT71(uStack_15f,uStack_160);
  param_1[9] = CONCAT71(uStack_147,uStack_148);
  param_1[8] = CONCAT71(local_14f,uStack_150);
  param_1[3] = uStack_178;
  param_1[2] = local_180;
  param_1[5] = CONCAT71(uStack_167,uStack_168);
  param_1[4] = CONCAT71(uStack_16f,local_170);
  param_1[0xb] = CONCAT71(uStack_137,uStack_138);
  param_1[10] = CONCAT71(local_13f,uStack_140);
  param_1[0xc] = CONCAT71(uStack_12f,uStack_130);
  param_1[0xd] = IVar8.unknown;
  param_1[0xe] = uVar1;
  uStack_88 = uStack_1d8;
  local_80 = local_1d0;
  _swift_retain(IVar6.unknown);
  FUN_100011090(&local_d0,auStack_278,&DAT_100fb9d40,&DAT_100c3a1c8);
  FUN_100005808(&uStack_220,&DAT_100fb9d40,&DAT_100c3a1c8);
  _swift_release(pMVar3);
  _swift_release(IVar6.unknown);
  return;
}



/* Address: 0x10027e480 | FUN_10027e480 */

void FUN_10027e480(undefined8 *param_1,undefined8 param_2,undefined8 param_3,uint param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  Text TVar7;
  Text TVar8;
  Text TVar9;
  undefined8 uVar10;
  Text TVar11;
  Text TVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  String stringLiteral;
  String stringLiteral_00;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_100270a58();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    param_4 = 1;
    param_5 = 0x40;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Header.swift",0x23,1,0x40,UVar3.unknown,pMVar1);
  }
  uVar10 = 0x8000000100d9f750;
  stringLiteral.bridgeObject = (void *)0x8000000100d9f750;
  stringLiteral.str = (char *)0xd000000000000012;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  uVar14 = (ulong)(param_4 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  if (DAT_100fb9d48 != -1) {
    _swift_once(&DAT_100fb9d48,FUN_10027ea70);
  }
  TVar11 = TVar6;
  uVar15 = uVar10;
  uVar18 = uVar14;
  TVar7 = SwiftUI::Text::_font(DAT_100fb9d50);
  uVar19 = uVar18;
  FUN_100016d74(TVar6.unknown,uVar10,uVar14);
  uVar13 = (uint)uVar14;
  _swift_bridgeObjectRelease(param_5);
  uVar10 = 0x8000000100d9f770;
  stringLiteral_00.bridgeObject = (void *)0x8000000100d9f770;
  stringLiteral_00.str = (char *)0xd000000000000011;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral_00);
  uVar14 = (ulong)(uVar13 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  if (DAT_100fb9d58 != -1) {
    _swift_once(&DAT_100fb9d58,FUN_10027eab4);
  }
  TVar12 = TVar6;
  uVar16 = uVar10;
  uVar20 = uVar14;
  TVar8 = SwiftUI::Text::_font(DAT_100fb9d60);
  FUN_100016d74(TVar6.unknown,uVar10,uVar14);
  _swift_bridgeObjectRelease(uVar19);
  if (DAT_100fb9d68 != -1) {
    _swift_once(&DAT_100fb9d68,FUN_10027ead4);
  }
  TVar6 = TVar8;
  puVar17 = TVar12.unknown;
  uVar10 = uVar16;
  TVar9 = SwiftUI::Text::_foregroundColor(DAT_100fb9d70);
  FUN_100016d74(TVar8.unknown,TVar12.unknown,uVar16);
  _swift_bridgeObjectRelease(uVar20);
  *param_1 = TVar7.unknown;
  param_1[1] = TVar11.unknown;
  *(char *)(param_1 + 2) = (char)uVar15;
  param_1[3] = uVar18;
  param_1[4] = TVar9.unknown;
  param_1[5] = TVar6.unknown;
  *(char *)(param_1 + 6) = (char)puVar17;
  param_1[7] = uVar10;
  FUN_100016d5c(TVar7.unknown,TVar11.unknown,uVar15);
  _swift_bridgeObjectRetain(uVar18);
  FUN_100016d5c(TVar9.unknown,TVar6.unknown,puVar17);
  _swift_bridgeObjectRetain(uVar10);
  FUN_100016d74(TVar9.unknown,TVar6.unknown,puVar17);
  _swift_bridgeObjectRelease(uVar10);
  FUN_100016d74(TVar7.unknown,TVar11.unknown,uVar15);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(uVar18);
  return;
}



/* Address: 0x10027e784 | FUN_10027e784 */

void FUN_10027e784(undefined8 *param_1,VerticalAlignment param_2)

{
  undefined8 uVar1;
  VerticalAlignment VVar2;
  undefined1 auStack_390 [144];
  undefined7 uStack_300;
  undefined1 local_2f9;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined8 local_289;
  undefined *local_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 local_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 local_240;
  undefined7 uStack_23f;
  undefined1 uStack_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 local_220;
  undefined7 uStack_21f;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined8 local_210;
  undefined *local_200;
  undefined8 uStack_1f8;
  undefined *local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  undefined7 local_16f;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 local_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 uStack_150;
  undefined7 local_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 local_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 local_11f;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 local_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined8 uStack_68;
  
  if (DAT_100fb9d10 != -1) {
    param_2.unknown = (undefined *)&DAT_100fb9d10;
    _swift_once(&DAT_100fb9d10,FUN_10027ea30);
  }
  uVar1 = DAT_100fb9d18;
  VVar2 = SwiftUI::VerticalAlignment::get_center(param_2);
  FUN_10027e1c4(&local_f0);
  uStack_238 = uStack_a8;
  uStack_237 = uStack_a7;
  local_240 = local_b0;
  uStack_23f = uStack_af;
  uStack_228 = uStack_98;
  uStack_227 = uStack_97;
  uStack_230 = uStack_a0;
  uStack_22f = uStack_9f;
  uStack_218 = uStack_88;
  uStack_217 = uStack_87;
  local_220 = local_90;
  uStack_21f = uStack_8f;
  local_210 = CONCAT71(uStack_7f,local_80);
  uStack_268 = uStack_d8;
  uStack_267 = uStack_d7;
  uStack_270 = local_e0;
  uStack_26f = uStack_df;
  uStack_278 = uStack_e8;
  local_280 = local_f0;
  uStack_258 = uStack_c8;
  uStack_257 = uStack_c7;
  local_260 = local_d0;
  uStack_25f = uStack_cf;
  uStack_248 = uStack_b8;
  uStack_247 = uStack_b7;
  uStack_250 = uStack_c0;
  uStack_24f = uStack_bf;
  uStack_1f8 = uStack_e8;
  local_200 = local_f0;
  FUN_100011090(&local_280,&local_180,&DAT_100fb9d20,&DAT_100c3a1b8);
  FUN_100005808(&local_200,&DAT_100fb9d20,&DAT_100c3a1b8);
  local_289 = local_210;
  uStack_2f1 = (undefined1)uStack_278;
  uStack_2f0 = (undefined7)((ulong)uStack_278 >> 8);
  local_2f9 = SUB81(local_280,0);
  uStack_2f8 = (undefined7)((ulong)local_280 >> 8);
  uStack_127 = uStack_23f;
  uStack_120 = uStack_238;
  local_12f = uStack_247;
  uStack_128 = local_240;
  uStack_117 = uStack_22f;
  uStack_110 = uStack_228;
  local_11f = uStack_237;
  uStack_118 = uStack_230;
  uStack_107 = uStack_21f;
  local_10f = uStack_227;
  uStack_108 = local_220;
  uStack_f8 = local_210;
  uStack_100 = uStack_218;
  uStack_ff = uStack_217;
  uStack_167 = uStack_2f8;
  uStack_160 = uStack_2f1;
  local_16f = uStack_300;
  uStack_168 = local_2f9;
  uStack_157 = uStack_26f;
  uStack_150 = uStack_268;
  local_15f = uStack_2f0;
  uStack_158 = uStack_270;
  uStack_147 = uStack_25f;
  uStack_140 = uStack_258;
  local_14f = uStack_267;
  uStack_148 = local_260;
  uStack_137 = uStack_24f;
  uStack_130 = uStack_248;
  local_13f = uStack_257;
  uStack_138 = uStack_250;
  uStack_68 = local_210;
  uStack_cf = uStack_2f0;
  uStack_178 = uVar1;
  local_170 = 0;
  uStack_e8 = uVar1;
  local_e0 = 0;
  uStack_d7 = uStack_2f8;
  local_d0 = uStack_2f1;
  uStack_d8 = local_2f9;
  local_180 = VVar2.unknown;
  local_f0 = VVar2.unknown;
  FUN_100011090(&local_180,auStack_390,&DAT_100fb9d28,&DAT_100c3a1c0);
  FUN_100005808(&local_f0,&DAT_100fb9d28,&DAT_100c3a1c0);
  param_1[0xd] = CONCAT71(uStack_117,uStack_118);
  param_1[0xc] = CONCAT71(local_11f,uStack_120);
  param_1[0xf] = CONCAT71(uStack_107,uStack_108);
  param_1[0xe] = CONCAT71(local_10f,uStack_110);
  param_1[0x11] = uStack_f8;
  param_1[0x10] = CONCAT71(uStack_ff,uStack_100);
  param_1[5] = CONCAT71(uStack_157,uStack_158);
  param_1[4] = CONCAT71(local_15f,uStack_160);
  param_1[7] = CONCAT71(uStack_147,uStack_148);
  param_1[6] = CONCAT71(local_14f,uStack_150);
  param_1[9] = CONCAT71(uStack_137,uStack_138);
  param_1[8] = CONCAT71(local_13f,uStack_140);
  param_1[0xb] = CONCAT71(uStack_127,uStack_128);
  param_1[10] = CONCAT71(local_12f,uStack_130);
  param_1[1] = uStack_178;
  *param_1 = local_180;
  param_1[3] = CONCAT71(uStack_167,uStack_168);
  param_1[2] = CONCAT71(local_16f,local_170);
  return;
}



/* Address: 0x10027e990 | FUN_10027e990 */

void FUN_10027e990(void)

{
  FUN_1000f3588();
  DAT_100fb9c98 = 0x4034000000000000;
  return;
}



/* Address: 0x10027e9b0 | FUN_10027e9b0 */

void FUN_10027e9b0(Font param_1)

{
  FUN_1000f3588();
  DAT_100fb9c78 = SwiftUI::Font::get_body(param_1);
  return;
}



/* Address: 0x10027e9d0 | FUN_10027e9d0 */

void FUN_10027e9d0(void)

{
  FUN_1000f3588();
  DAT_100fb9cb0 = 0x4010000000000000;
  return;
}



/* Address: 0x10027e9f0 | FUN_10027e9f0 */

void FUN_10027e9f0(void)

{
  FUN_1000f3588();
  DAT_100fb9cc8 = 0x403c000000000000;
  return;
}



/* Address: 0x10027ea10 | FUN_10027ea10 */

void FUN_10027ea10(void)

{
  FUN_1000f3588();
  DAT_100fb9d80 = 0xc044000000000000;
  return;
}



/* Address: 0x10027ea30 | FUN_10027ea30 */

void FUN_10027ea30(void)

{
  FUN_1000f3588();
  DAT_100fb9d18 = 0x4020000000000000;
  return;
}



/* Address: 0x10027ea50 | FUN_10027ea50 */

void FUN_10027ea50(void)

{
  FUN_1000f3588();
  DAT_100fb9ce0 = 0x403c000000000000;
  return;
}



/* Address: 0x10027ea70 | FUN_10027ea70 */

void FUN_10027ea70(Font param_1,Font param_2)

{
  Font FVar1;
  Font FVar2;
  
  FUN_1000f3588();
  FVar1 = SwiftUI::Font::get_body(param_1);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar1.unknown);
  FVar2 = SwiftUI::Font::weight(FVar1.unknown,param_2);
  _swift_release(FVar1.unknown);
  DAT_100fb9d50 = FVar2.unknown;
  return;
}



/* Address: 0x10027eab4 | FUN_10027eab4 */

void FUN_10027eab4(Font param_1)

{
  FUN_1000f3588();
  DAT_100fb9d60 = SwiftUI::Font::get_callout(param_1);
  return;
}



/* Address: 0x10027ead4 | FUN_10027ead4 */

void FUN_10027ead4(Color param_1)

{
  Color CVar1;
  Color CVar2;
  
  FUN_1000f3588();
  CVar1 = SwiftUI::Color::get_primary(param_1);
  CVar2 = SwiftUI::Color::opacity(0.5,CVar1);
  _swift_release(CVar1.unknown);
  DAT_100fb9d70 = CVar2.unknown;
  return;
}



/* Address: 0x10027eb14 | FUN_10027eb14 */

void FUN_10027eb14(void)

{
  FUN_1000f3588();
  DAT_100fb9d38 = 0x3ff0000000000000;
  return;
}



/* Address: 0x10027eb34 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x10027eb38 | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x10027eb3c | FUN_10027eb3c */

undefined1  [16] FUN_10027eb3c(void)

{
  return ZEXT816(0x100ec5358);
}



/* Address: 0x10027eb4c | FUN_10027eb4c */

undefined1  [16] FUN_10027eb4c(void)

{
  return ZEXT816(0x100ec53d0);
}



/* Address: 0x10027eb5c | thunk_FUN_10027eb60 */

void thunk_FUN_10027eb60(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined8 *puStack_28;
  
  if (DAT_100fb9ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9cf0;
  FUN_100005c24(&DAT_100fb9cf0,&DAT_100c3a108);
  puVar2 = &DAT_100fb9cf8;
  FUN_100016eac(&DAT_100fb9cf8,&DAT_100fb9d00,&DAT_100c3a110,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puStack_30 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb9ce8 = puVar3;
  return;
}



/* Address: 0x10027eb60 | FUN_10027eb60 */

void FUN_10027eb60(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined8 *puStack_28;
  
  if (DAT_100fb9ce8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9cf0;
  FUN_100005c24(&DAT_100fb9cf0,&DAT_100c3a108);
  puVar2 = &DAT_100fb9cf8;
  FUN_100016eac(&DAT_100fb9cf8,&DAT_100fb9d00,&DAT_100c3a110,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9ce8 = puVar3;
  return;
}



/* Address: 0x10027ebf8 | FUN_10027ebf8 */

void FUN_10027ebf8(void)

{
  FUN_100016eac(&DAT_100fb9d08,&DAT_100fb9c88,&DAT_100c3a0d8,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x10027ec2c | FUN_10027ec2c */

void FUN_10027ec2c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa314,1);
  return;
}


