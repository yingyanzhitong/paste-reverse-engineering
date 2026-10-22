/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10001a758 | FUN_10001a758 */

void FUN_10001a758(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10001a77c | FUN_10001a77c */

void FUN_10001a77c(void)

{
  FUN_100018c84();
  return;
}



/* Address: 0x10001a784 | FUN_10001a784 */

void FUN_10001a784(void)

{
  FUN_100018da8();
  return;
}



/* Address: 0x10001a78c | FUN_10001a78c */

void FUN_10001a78c(void)

{
  FUN_100018f70();
  return;
}



/* Address: 0x10001a794 | thunk_FUN_10001a3a0 */

void thunk_FUN_10001a3a0(void)

{
  FUN_10001a3a0();
  return;
}



/* Address: 0x10001a798 | thunk_FUN_1000148ac */

void thunk_FUN_1000148ac(void)

{
  FUN_1000148ac();
  return;
}



/* Address: 0x10001a79c | FUN_10001a79c */

undefined8 * FUN_10001a79c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[3];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  param_1[3] = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10001a7e4 | FUN_10001a7e4 */

undefined8 * FUN_10001a7e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10001a84c | FUN_10001a84c */

undefined8 * FUN_10001a84c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_release(param_1[1]);
  uVar2 = param_2[3];
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_1[3];
  param_1[3] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10001a898 | FUN_10001a898 */

undefined1  [16] FUN_10001a898(void)

{
  return ZEXT816(0x100eb07c8);
}



/* Address: 0x10001a8a8 | FUN_10001a8a8 */

void FUN_10001a8a8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0550,1);
  return;
}



/* Address: 0x10001a8b8 | FUN_10001a8b8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001a9c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001a8b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  PushTransition PVar1;
  undefined *puVar2;
  AnyTransition AVar3;
  Animation AVar4;
  undefined *puVar5;
  Alignment AVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 uStack_4f0;
  undefined1 auStack_4e8 [8];
  undefined8 uStack_4e0;
  undefined1 auStack_4d8 [8];
  undefined8 auStack_4d0 [2];
  undefined1 auStack_4c0 [8];
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined1 auStack_4a8 [200];
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined *local_3a0;
  undefined *puStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
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
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined *local_290;
  undefined *puStack_288;
  undefined8 local_280;
  undefined *local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined *local_230;
  undefined *local_228;
  undefined8 local_220;
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
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
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined1 uStack_118;
  undefined7 uStack_117;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined *local_100;
  undefined *puStack_f8;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  local_4b8 = param_5;
  local_4b0 = param_3;
  PVar1 = SwiftUI::PushTransition::typeMetadataAccessor();
  lVar8 = *(long *)(PVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar10 = auStack_4c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  FUN_10001ac3c(&local_140,param_2,param_3,param_4,local_4b8);
  SwiftUI::PushTransition::init((Edge)0x3);
  uStack_308 = uStack_138;
  local_310 = local_140;
  uStack_2f8 = uStack_128;
  uStack_300 = local_130;
  uStack_2e8 = uStack_118;
  local_2f0 = local_120;
  uStack_2df = uStack_10f;
  uStack_2d8 = uStack_108;
  uStack_2e7 = uStack_117;
  uStack_2e0 = uStack_110;
  (**(code **)(lVar8 + 0x10))
            (auStack_4c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar10,PVar1.unknown);
  puVar2 = &DAT_100fa7100;
  FUN_100003a00(&DAT_100fa7100,PTR_typeMetadataAccessor_100eaa8a8,
                PTR_SwiftUI__SwiftUI__PushTransition_>SwiftUI__Transition_100eaa8a0);
  AVar3 = SwiftUI::AnyTransition::_init(puVar2,PVar1.unknown,puVar2);
  AVar4.unknown = puVar10;
  (**(code **)(lVar8 + 8))(puVar10,PVar1.unknown);
  AVar4 = SwiftUI::Animation::spring(0.25,1.0,0.0,AVar4);
  puVar2 = &DAT_100c23de8;
  _swift_getKeyPath(&DAT_100c23de8);
  puVar5 = &DAT_100c23e10;
  _swift_getKeyPath(&DAT_100c23e10);
  Combine::Published::_get_subscript(&local_140,local_4b0,puVar2,puVar5);
  _swift_release(puVar2);
  _swift_release(puVar5);
  uVar9 = *(undefined8 *)(&DAT_100c24238 + (ulong)((byte)local_130 >> 6) * 8);
  FUN_10001f5c8();
  uStack_268 = uStack_308;
  local_270 = local_310;
  uStack_258 = uStack_2f8;
  uStack_260 = uStack_300;
  local_250 = local_2f0;
  uVar7 = uStack_138;
  AVar6 = SwiftUI::Alignment::get_center(local_140);
  uStack_2c8 = uStack_308;
  local_2d0 = local_310;
  uStack_2b8 = uStack_2f8;
  uStack_2c0 = uStack_300;
  uStack_2a8 = CONCAT71(uStack_2e7,uStack_2e8);
  uStack_298 = CONCAT71(uStack_2d7,uStack_2d8);
  uStack_2a0 = CONCAT71(uStack_2df,uStack_2e0);
  local_2b0 = local_2f0;
  local_290 = AVar3.unknown;
  puStack_288 = AVar4.unknown;
  local_280 = uVar9;
  *(undefined **)(puVar10 + -0x10) = AVar6.unknown;
  *(undefined8 *)(puVar10 + -8) = uVar7;
  puVar10[-0x18] = 1;
  *(undefined8 *)(puVar10 + -0x20) = 0;
  puVar10[-0x28] = 1;
  *(undefined8 *)(puVar10 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x4080e00000000000);
  uStack_3b8 = uStack_2a8;
  local_3c0 = local_2b0;
  uStack_3a8 = uStack_298;
  local_3b0 = uStack_2a0;
  puStack_398 = puStack_288;
  local_3a0 = local_290;
  local_390 = local_280;
  uStack_3d8 = uStack_2c8;
  local_3e0 = local_2d0;
  uStack_3c8 = uStack_2b8;
  local_3d0 = uStack_2c0;
  local_230 = AVar3.unknown;
  local_228 = AVar4.unknown;
  local_220 = uVar9;
  FUN_100011090(&local_2d0,&local_140,&DAT_100fa7108,&DAT_100c23e30);
  FUN_100005808(&local_270,&DAT_100fa7108,&DAT_100c23e30);
  uStack_168 = uStack_338;
  local_170 = local_340;
  uStack_158 = uStack_328;
  uStack_160 = local_330;
  uStack_1a8 = uStack_378;
  local_1b0 = local_380;
  uStack_198 = uStack_368;
  uStack_1a0 = local_370;
  uStack_188 = uStack_358;
  local_190 = local_360;
  uStack_178 = uStack_348;
  uStack_180 = local_350;
  uStack_1e8 = uStack_3b8;
  local_1f0 = local_3c0;
  uStack_1d8 = uStack_3a8;
  uStack_1e0 = local_3b0;
  puStack_1c8 = puStack_398;
  local_1d0 = local_3a0;
  uStack_1b8 = uStack_388;
  uStack_1c0 = local_390;
  uStack_208 = uStack_3d8;
  local_210 = local_3e0;
  uStack_1f8 = uStack_3c8;
  uStack_200 = local_3d0;
  uStack_98 = uStack_338;
  local_a0 = local_340;
  uStack_88 = uStack_328;
  uStack_90 = local_330;
  uStack_d8 = uStack_378;
  local_e0 = local_380;
  uStack_c8 = uStack_368;
  uStack_d0 = local_370;
  uStack_b8 = uStack_358;
  local_c0 = local_360;
  uStack_a8 = uStack_348;
  uStack_b0 = local_350;
  uStack_118 = (undefined1)uStack_3b8;
  uStack_117 = (undefined7)((ulong)uStack_3b8 >> 8);
  local_120 = local_3c0;
  uStack_108 = (undefined1)uStack_3a8;
  uStack_107 = (undefined7)((ulong)uStack_3a8 >> 8);
  uStack_110 = (undefined1)local_3b0;
  uStack_10f = (undefined7)((ulong)local_3b0 >> 8);
  puStack_f8 = puStack_398;
  local_100 = local_3a0;
  uStack_e8 = uStack_388;
  uStack_f0 = local_390;
  local_150 = local_320;
  local_80 = local_320;
  uStack_138 = uStack_3d8;
  local_140 = local_3e0;
  uStack_128 = uStack_3c8;
  local_130 = local_3d0;
  FUN_100011090(&local_210,auStack_4a8,&DAT_100fa7110,&DAT_100c23e38);
  FUN_100005808(&local_140,&DAT_100fa7110,&DAT_100c23e38);
  param_1[0x15] = uStack_168;
  param_1[0x14] = local_170;
  param_1[0x17] = uStack_158;
  param_1[0x16] = uStack_160;
  param_1[0x18] = local_150;
  param_1[0xd] = uStack_1a8;
  param_1[0xc] = local_1b0;
  param_1[0xf] = uStack_198;
  param_1[0xe] = uStack_1a0;
  param_1[0x11] = uStack_188;
  param_1[0x10] = local_190;
  param_1[0x13] = uStack_178;
  param_1[0x12] = uStack_180;
  param_1[5] = uStack_1e8;
  param_1[4] = local_1f0;
  param_1[7] = uStack_1d8;
  param_1[6] = uStack_1e0;
  param_1[9] = puStack_1c8;
  param_1[8] = local_1d0;
  param_1[0xb] = uStack_1b8;
  param_1[10] = uStack_1c0;
  param_1[1] = uStack_208;
  *param_1 = local_210;
  param_1[3] = uStack_1f8;
  param_1[2] = uStack_200;
  return;
}



/* Address: 0x10001ac3c | FUN_10001ac3c */

void FUN_10001ac3c(ID *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  code *local_f0;
  ID IStack_e8;
  byte local_e0;
  undefined7 uStack_df;
  code *local_d8;
  undefined *local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  code *local_b0;
  undefined *puStack_a8;
  code *local_a0;
  undefined *puStack_98;
  ulong local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  ulong uStack_7f;
  
  puVar3 = &DAT_100c23de8;
  _swift_getKeyPath(&DAT_100c23de8);
  puVar4 = &DAT_100c23e10;
  _swift_getKeyPath(&DAT_100c23e10);
  Combine::Published::_get_subscript(&local_b0,param_3,puVar3,puVar4);
  _swift_release(puVar3);
  _swift_release(puVar4);
  puVar3 = puStack_a8;
  pcVar2 = local_b0;
  uVar6 = (ulong)local_a0 & 0xff;
  if ((byte)local_a0 >> 6 == 0) {
    objc_stub::fractionCompleted((ID)local_b0);
    local_a0 = (code *)0x0;
    puStack_98 = (undefined *)0x0;
    puStack_a8 = (undefined *)0x0;
    local_90._0_1_ = 1;
    FUN_10001f704();
    FUN_10001f744();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_b0);
    local_90 = CONCAT71(local_90._1_7_,local_f8);
    uStack_7f = uStack_7f & 0xffffffffffffff;
    FUN_10001f7c4(local_118,uStack_110,local_108,uStack_100,local_f8);
    FUN_1000037f0(&DAT_100fa7118,&DAT_100c23e40);
    FUN_10001f68c();
    FUN_10001f784();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_b0);
    FUN_10001f5c8(local_b0,puVar3,uVar6);
  }
  else {
    if ((byte)local_a0 >> 6 == 1) {
      bVar1 = (byte)local_a0 & 0x3f;
      puVar4 = &DAT_100eb07f0;
      _swift_allocObject(&DAT_100eb07f0,0x30,7);
      *(undefined8 *)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = param_3;
      *(undefined8 *)(puVar4 + 0x20) = param_4;
      *(undefined8 *)(puVar4 + 0x28) = param_5;
      puVar5 = &DAT_100eb0818;
      _swift_allocObject(&DAT_100eb0818,0x48,7);
      *(code **)(puVar5 + 0x10) = pcVar2;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      puVar5[0x20] = bVar1;
      *(undefined8 *)(puVar5 + 0x28) = param_2;
      *(undefined8 *)(puVar5 + 0x30) = param_3;
      *(undefined8 *)(puVar5 + 0x38) = param_4;
      *(undefined8 *)(puVar5 + 0x40) = param_5;
      local_f0 = pcVar2;
      IStack_e8 = (ID)puVar3;
      local_d8 = FUN_10001f654;
      uStack_c8 = 0x78;
      uStack_c7 = 0x10001f6;
      uStack_c0 = SUB81(puVar5,0);
      uStack_bf = (undefined7)((ulong)puVar5 >> 8);
      local_b8 = 1;
      local_e0 = bVar1;
      local_d0 = puVar4;
      _swift_retain_n(param_3,2);
      _swift_retain_n(param_5,2);
      FUN_10001f60c(pcVar2,puVar3,uVar6);
      FUN_1000037f0(&DAT_100fa7118,&DAT_100c23e40);
      FUN_10001f68c();
      FUN_10001f784();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_f0);
      goto LAB_10001b01c;
    }
    puVar3 = &DAT_100eb0840;
    _swift_allocObject(&DAT_100eb0840,0x30,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    *(undefined8 *)(puVar3 + 0x28) = param_5;
    puVar4 = &DAT_100eb0868;
    _swift_allocObject(&DAT_100eb0868,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    *(undefined8 *)(puVar4 + 0x28) = param_5;
    local_b0 = FUN_10001f82c;
    local_a0 = FUN_10001f84c;
    local_90 = local_90 & 0xffffffffffffff00;
    puStack_a8 = puVar3;
    puStack_98 = puVar4;
    FUN_10001f704();
    FUN_10001f744();
    _swift_retain_n(param_3,2);
    _swift_retain_n(param_5,2);
    _swift_retain(puVar3);
    _swift_retain(puVar4);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_b0);
    local_90 = CONCAT71(local_90._1_7_,local_f8);
    uStack_7f = uStack_7f & 0xffffffffffffff;
    FUN_10001f7c4(local_118,uStack_110,local_108,uStack_100,local_f8);
    FUN_1000037f0(&DAT_100fa7118,&DAT_100c23e40);
    FUN_10001f68c();
    FUN_10001f784();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)&local_b0);
    _swift_release(puVar4);
    _swift_release(puVar3);
  }
  FUN_10001f7f8(local_118,uStack_110,local_108,uStack_100,local_f8);
  local_a0 = (code *)CONCAT71(uStack_df,local_e0);
  puStack_a8 = (undefined *)IStack_e8;
  local_b0 = local_f0;
  puStack_98 = local_d8;
  uStack_88 = uStack_c8;
  local_90 = (ulong)local_d0;
  uStack_7f = CONCAT17(local_b8,uStack_bf);
  uStack_87 = uStack_c7;
  uStack_80 = uStack_c0;
LAB_10001b01c:
  param_1[1] = (ID)puStack_a8;
  *param_1 = (ID)local_b0;
  param_1[3] = (ID)puStack_98;
  param_1[2] = (ID)local_a0;
  param_1[5] = CONCAT71(uStack_87,uStack_88);
  param_1[4] = local_90;
  *(ulong *)((long)param_1 + 0x31) = uStack_7f;
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_80,uStack_87);
  return;
}



/* Address: 0x10001b054 | FUN_10001b054 */

void FUN_10001b054(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  long lVar2;
  URL UVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  param_2 = param_2 + _TtC5Paste19V5WhatsNewViewModel::router;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  lVar2 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar1);
  (*param_5)();
  (**(code **)(lVar5 + 0x10))(puVar4,param_2,UVar3.unknown);
  (**(code **)(lVar2 + 8))(puVar4,uVar1,lVar2);
  (**(code **)(lVar5 + 8))(puVar4,UVar3.unknown);
  return;
}



/* Address: 0x10001b120 | FUN_10001b120 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10001b120(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined *self;
  NSViewController *in;
  AppStore extraout_w1;
  
  if (param_3 == '\0') {
    self = &_OBJC_CLASS___NSViewController;
    _objc_allocWithZone();
    in = (NSViewController *)objc_stub::init((ID)self);
    StoreKit::AppStore::requestReview(in,extraout_w1);
    param_1 = 0;
  }
  (*param_6)(param_1);
  return;
}



/* Address: 0x10001b174 | FUN_10001b174 */

void FUN_10001b174(void)

{
  undefined8 *unaff_x20;
  
  FUN_10001a8b8(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10001b180 | FUN_10001b180 */

void FUN_10001b180(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  ResizingMode RVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  HorizontalAlignment HVar8;
  Image IVar9;
  Image IVar10;
  _FrameLayout _Var11;
  VerticalAlignment VVar12;
  Set SVar13;
  long extraout_x8;
  undefined8 *puVar14;
  long extraout_x8_00;
  long lVar15;
  long extraout_x12;
  Alignment capInsets;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  undefined8 local_660 [2];
  uint local_64c;
  long local_648;
  undefined *local_640;
  undefined *local_638;
  undefined8 uStack_630;
  undefined *local_628;
  undefined8 local_620;
  undefined8 uStack_618;
  MainActor *local_610;
  undefined8 *local_608;
  long local_600;
  undefined1 auStack_5f8 [200];
  undefined7 uStack_530;
  undefined1 local_529;
  undefined7 uStack_528;
  undefined1 uStack_521;
  undefined7 uStack_520;
  undefined1 local_519;
  undefined7 uStack_518;
  undefined1 uStack_511;
  undefined7 uStack_510;
  undefined1 local_509;
  undefined7 uStack_508;
  undefined1 uStack_501;
  undefined7 uStack_500;
  undefined1 local_4f9;
  undefined7 uStack_4f8;
  undefined1 uStack_4f1;
  undefined7 uStack_4f0;
  undefined1 local_4e9;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  undefined7 uStack_4e0;
  undefined1 local_4d9;
  undefined7 uStack_4d8;
  undefined1 uStack_4d1;
  undefined7 uStack_4d0;
  undefined1 local_4c9;
  undefined7 uStack_4c8;
  undefined1 uStack_4c1;
  undefined7 uStack_4c0;
  undefined1 local_4b9;
  undefined7 uStack_4b8;
  undefined1 uStack_4b1;
  undefined7 uStack_4b0;
  undefined1 local_4a9;
  undefined7 uStack_4a8;
  undefined1 uStack_4a1;
  undefined7 uStack_4a0;
  undefined1 local_499;
  undefined7 uStack_498;
  undefined1 uStack_491;
  undefined7 uStack_490;
  undefined1 local_489;
  undefined7 uStack_488;
  undefined1 uStack_481;
  undefined7 uStack_480;
  undefined1 uStack_479;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
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
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0;
  undefined7 local_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 local_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 local_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined7 local_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 local_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 local_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 local_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 local_27f;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 local_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 local_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined *local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined8 local_227;
  undefined8 uStack_21f;
  undefined8 local_217;
  undefined8 uStack_20f;
  undefined8 local_207;
  undefined8 uStack_1ff;
  undefined8 local_1f7;
  undefined8 uStack_1ef;
  undefined8 local_1e7;
  undefined8 uStack_1df;
  undefined8 local_1d7;
  undefined8 uStack_1cf;
  undefined8 local_1c7;
  undefined8 uStack_1bf;
  undefined8 local_1b7;
  undefined8 uStack_1af;
  undefined8 local_1a7;
  undefined8 uStack_19f;
  undefined8 local_197;
  undefined8 uStack_18f;
  undefined8 local_187;
  undefined7 uStack_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  byte local_98;
  undefined8 local_90;
  byte local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar4 = &DAT_100fa71a0;
  local_638 = param_2;
  uStack_630 = param_3;
  local_620 = param_4;
  uStack_618 = param_5;
  FUN_1000037f0(&DAT_100fa71a0,&DAT_100c23fc8);
  local_628 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = (long)local_660 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_600 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined8 *)(lVar15 - extraout_x12);
  local_608 = puVar14;
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_640 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  local_648 = *(long *)(local_640 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_648 + 0x40));
  capInsets.unknown = (undefined *)((long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar14 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_610 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "Paste/V5WhatsNewView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x2d,UVar6.unknown,puVar14);
  }
  HVar8 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar7);
  FUN_10001b7ac(&local_170);
  uStack_3d8 = uStack_e8;
  local_3e0 = local_f0;
  uStack_3c8 = uStack_d8;
  uStack_3d0 = local_e0;
  uStack_418 = uStack_128;
  local_420 = local_130;
  uStack_408 = uStack_118;
  uStack_410 = local_120;
  uStack_3f8 = uStack_108;
  local_400 = local_110;
  uStack_3e8 = uStack_f8;
  uStack_3f0 = local_100;
  uStack_458 = uStack_168;
  local_460 = local_170;
  uStack_448 = uStack_158;
  uStack_450 = uStack_160;
  uStack_438 = uStack_148;
  local_440 = local_150;
  uStack_428 = uStack_138;
  uStack_430 = local_140;
  uStack_338 = uStack_f8;
  local_340 = local_100;
  uStack_328 = uStack_e8;
  uStack_330 = local_f0;
  uStack_318 = uStack_d8;
  local_320 = local_e0;
  uStack_308 = uStack_c8;
  uStack_310 = local_d0;
  uStack_378 = uStack_138;
  local_380 = local_140;
  uStack_368 = uStack_128;
  uStack_370 = local_130;
  uStack_358 = uStack_118;
  local_360 = local_120;
  uStack_348 = uStack_108;
  uStack_350 = local_110;
  uStack_3b8 = uStack_c8;
  local_3c0 = local_d0;
  uStack_3a8 = uStack_168;
  uStack_3b0 = local_170;
  uStack_398 = uStack_158;
  local_3a0 = uStack_160;
  uStack_388 = uStack_148;
  uStack_390 = local_150;
  FUN_100011090(&local_460,&local_238,&DAT_100fa71a8,&DAT_100c23fd0);
  FUN_100005808(&uStack_3b0,&DAT_100fa71a8,&DAT_100c23fd0);
  uStack_4b1 = (undefined1)uStack_3e8;
  uStack_4b0 = (undefined7)((ulong)uStack_3e8 >> 8);
  local_4b9 = (undefined1)uStack_3f0;
  uStack_4b8 = (undefined7)((ulong)uStack_3f0 >> 8);
  uStack_4a1 = (undefined1)uStack_3d8;
  uStack_4a0 = (undefined7)((ulong)uStack_3d8 >> 8);
  local_4a9 = (undefined1)local_3e0;
  uStack_4a8 = (undefined7)((ulong)local_3e0 >> 8);
  uStack_491 = (undefined1)uStack_3c8;
  uStack_490 = (undefined7)((ulong)uStack_3c8 >> 8);
  local_499 = (undefined1)uStack_3d0;
  uStack_498 = (undefined7)((ulong)uStack_3d0 >> 8);
  uStack_481 = (undefined1)uStack_3b8;
  uStack_480 = (undefined7)((ulong)uStack_3b8 >> 8);
  local_489 = (undefined1)local_3c0;
  uStack_488 = (undefined7)((ulong)local_3c0 >> 8);
  uStack_4f1 = (undefined1)uStack_428;
  uStack_4f0 = (undefined7)((ulong)uStack_428 >> 8);
  local_4f9 = (undefined1)uStack_430;
  uStack_4f8 = (undefined7)((ulong)uStack_430 >> 8);
  uStack_4e1 = (undefined1)uStack_418;
  uStack_4e0 = (undefined7)((ulong)uStack_418 >> 8);
  local_4e9 = (undefined1)local_420;
  uStack_4e8 = (undefined7)((ulong)local_420 >> 8);
  uStack_4d1 = (undefined1)uStack_408;
  uStack_4d0 = (undefined7)((ulong)uStack_408 >> 8);
  local_4d9 = (undefined1)uStack_410;
  uStack_4d8 = (undefined7)((ulong)uStack_410 >> 8);
  uStack_4c1 = (undefined1)uStack_3f8;
  uStack_4c0 = (undefined7)((ulong)uStack_3f8 >> 8);
  local_4c9 = (undefined1)local_400;
  uStack_4c8 = (undefined7)((ulong)local_400 >> 8);
  uStack_521 = (undefined1)uStack_458;
  uStack_520 = (undefined7)((ulong)uStack_458 >> 8);
  local_529 = (undefined1)local_460;
  uStack_528 = (undefined7)((ulong)local_460 >> 8);
  uStack_511 = (undefined1)uStack_448;
  uStack_510 = (undefined7)((ulong)uStack_448 >> 8);
  local_519 = (undefined1)uStack_450;
  uStack_518 = (undefined7)((ulong)uStack_450 >> 8);
  uStack_501 = (undefined1)uStack_438;
  uStack_500 = (undefined7)((ulong)uStack_438 >> 8);
  local_509 = (undefined1)local_440;
  uStack_508 = (undefined7)((ulong)local_440 >> 8);
  uStack_1af = CONCAT17(uStack_4b1,uStack_4b8);
  local_1b7 = CONCAT17(local_4b9,uStack_4c0);
  uStack_267 = uStack_4a8;
  uStack_260 = uStack_4a1;
  local_26f = uStack_4b0;
  uStack_268 = local_4a9;
  uStack_19f = CONCAT17(uStack_4a1,uStack_4a8);
  local_1a7 = CONCAT17(local_4a9,uStack_4b0);
  uStack_257 = uStack_498;
  uStack_250 = uStack_491;
  local_25f = uStack_4a0;
  uStack_258 = local_499;
  uStack_18f = CONCAT17(uStack_491,uStack_498);
  local_197 = CONCAT17(local_499,uStack_4a0);
  uStack_247 = uStack_488;
  local_24f = uStack_490;
  uStack_248 = local_489;
  uStack_1ef = CONCAT17(uStack_4f1,uStack_4f8);
  local_1f7 = CONCAT17(local_4f9,uStack_500);
  uStack_2a7 = uStack_4e8;
  uStack_2a0 = uStack_4e1;
  local_2af = uStack_4f0;
  uStack_2a8 = local_4e9;
  uStack_1df = CONCAT17(uStack_4e1,uStack_4e8);
  local_1e7 = CONCAT17(local_4e9,uStack_4f0);
  uStack_297 = uStack_4d8;
  uStack_290 = uStack_4d1;
  local_29f = uStack_4e0;
  uStack_298 = local_4d9;
  uStack_1cf = CONCAT17(uStack_4d1,uStack_4d8);
  local_1d7 = CONCAT17(local_4d9,uStack_4e0);
  uStack_287 = uStack_4c8;
  uStack_280 = uStack_4c1;
  local_28f = uStack_4d0;
  uStack_288 = local_4c9;
  uStack_1bf = CONCAT17(uStack_4c1,uStack_4c8);
  local_1c7 = CONCAT17(local_4c9,uStack_4d0);
  uStack_277 = uStack_4b8;
  uStack_270 = uStack_4b1;
  local_27f = uStack_4c0;
  uStack_278 = local_4b9;
  uStack_20f = CONCAT17(uStack_511,uStack_518);
  local_217 = CONCAT17(local_519,uStack_520);
  uStack_2e7 = uStack_528;
  uStack_2e0 = uStack_521;
  local_2ef = uStack_530;
  uStack_2e8 = local_529;
  uStack_21f = CONCAT17(uStack_521,uStack_528);
  local_227 = CONCAT17(local_529,uStack_530);
  uStack_2d7 = uStack_518;
  uStack_2d0 = uStack_511;
  local_2df = uStack_520;
  uStack_2d8 = local_519;
  uStack_2c7 = uStack_508;
  uStack_2c0 = uStack_501;
  local_2cf = uStack_510;
  uStack_2c8 = local_509;
  uStack_1ff = CONCAT17(uStack_501,uStack_508);
  local_207 = CONCAT17(local_509,uStack_510);
  uStack_2b7 = uStack_4f8;
  uStack_2b0 = uStack_4f1;
  local_2bf = uStack_500;
  uStack_2b8 = local_4f9;
  local_187 = CONCAT17(local_489,uStack_490);
  uStack_17f = uStack_488;
  uStack_2f8 = 0x4030000000000000;
  local_2f0 = 0;
  local_230 = 0x4030000000000000;
  local_228 = 0;
  local_300 = HVar8.unknown;
  uStack_240 = uStack_481;
  uStack_23f = uStack_480;
  local_238 = HVar8.unknown;
  uStack_178 = uStack_481;
  uStack_177 = uStack_480;
  FUN_100011090(&local_300,&local_170,&DAT_100fa71b0,&DAT_100c23fd8);
  FUN_100005808(&local_238,&DAT_100fa71b0,&DAT_100c23fd8);
  SVar20.bridgeObject = (void *)0xec00000035762d77;
  SVar20.str = (char *)0x656e2d7374616877;
  IVar9 = SwiftUI::Image::_init(SVar20);
  puVar4 = local_640;
  lVar15 = local_648;
  IVar10.unknown = local_640;
  (**(code **)(local_648 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0;
  IVar10 = SwiftUI::Image::resizable
                     ((EdgeInsets)capInsets.unknown,(ResizingMode)(__int8)IVar9.unknown,IVar10);
  _swift_release(IVar9.unknown);
  (**(code **)(lVar15 + 8))(capInsets.unknown,puVar4);
  SwiftUI::Alignment::get_center(capInsets);
  _Var11 = SwiftUI::_FrameLayout::_init((Alignment)0x4079000000000000);
  local_640 = (undefined *)CONCAT44(local_640._4_4_,(uint)local_98);
  local_648 = local_90;
  local_64c = (uint)local_88;
  local_660[0] = uStack_78;
  local_660[1] = local_80;
  VVar12 = SwiftUI::VerticalAlignment::get_center(_Var11.unknown);
  puVar14 = local_608;
  *local_608 = VVar12.unknown;
  puVar14[1] = 0;
  *(undefined1 *)(puVar14 + 2) = 1;
  puVar4 = &DAT_100fa71b8;
  FUN_1000037f0(&DAT_100fa71b8,&DAT_100c23fe0);
  SVar13.unknown = local_638;
  FUN_10001bf40((long)puVar14 + (long)*(int *)(puVar4 + 0x2c),local_638,uStack_630,local_620,
                uStack_618);
  SVar13 = SwiftUI::Edge::Set::get_bottom(SVar13);
  uVar16 = 0x4044000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  lVar15 = local_600;
  puVar1 = (undefined1 *)((long)puVar14 + (long)*(int *)(local_628 + 0x24));
  *puVar1 = (char)SVar13.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  *(undefined8 *)(puVar1 + 0x10) = uVar17;
  *(undefined8 *)(puVar1 + 0x18) = uVar18;
  *(undefined8 *)(puVar1 + 0x20) = uVar19;
  puVar1[0x28] = 0;
  uStack_478 = CONCAT71(uStack_247,uStack_248);
  uStack_488 = (undefined7)CONCAT71(uStack_257,uStack_258);
  uStack_481 = (undefined1)((uint7)uStack_257 >> 0x30);
  uStack_490 = (undefined7)CONCAT71(local_25f,uStack_260);
  local_489 = (undefined1)((uint7)local_25f >> 0x30);
  uStack_480 = (undefined7)CONCAT71(local_24f,uStack_250);
  uStack_479 = (undefined1)((uint7)local_24f >> 0x30);
  local_470 = CONCAT71(uStack_23f,uStack_240);
  uStack_4c8 = (undefined7)CONCAT71(uStack_297,uStack_298);
  uStack_4c1 = (undefined1)((uint7)uStack_297 >> 0x30);
  uStack_4d0 = (undefined7)CONCAT71(local_29f,uStack_2a0);
  local_4c9 = (undefined1)((uint7)local_29f >> 0x30);
  uStack_4b8 = (undefined7)CONCAT71(uStack_287,uStack_288);
  uStack_4b1 = (undefined1)((uint7)uStack_287 >> 0x30);
  uStack_4c0 = (undefined7)CONCAT71(local_28f,uStack_290);
  local_4b9 = (undefined1)((uint7)local_28f >> 0x30);
  uStack_4a8 = (undefined7)CONCAT71(uStack_277,uStack_278);
  uStack_4a1 = (undefined1)((uint7)uStack_277 >> 0x30);
  uStack_4b0 = (undefined7)CONCAT71(local_27f,uStack_280);
  local_4a9 = (undefined1)((uint7)local_27f >> 0x30);
  uStack_498 = (undefined7)CONCAT71(uStack_267,uStack_268);
  uStack_491 = (undefined1)((uint7)uStack_267 >> 0x30);
  uStack_4a0 = (undefined7)CONCAT71(local_26f,uStack_270);
  local_499 = (undefined1)((uint7)local_26f >> 0x30);
  uStack_508 = (undefined7)CONCAT71(uStack_2d7,uStack_2d8);
  uStack_501 = (undefined1)((uint7)uStack_2d7 >> 0x30);
  uStack_510 = (undefined7)CONCAT71(local_2df,uStack_2e0);
  local_509 = (undefined1)((uint7)local_2df >> 0x30);
  uStack_4f8 = (undefined7)CONCAT71(uStack_2c7,uStack_2c8);
  uStack_4f1 = (undefined1)((uint7)uStack_2c7 >> 0x30);
  uStack_500 = (undefined7)CONCAT71(local_2cf,uStack_2d0);
  local_4f9 = (undefined1)((uint7)local_2cf >> 0x30);
  uStack_4e8 = (undefined7)CONCAT71(uStack_2b7,uStack_2b8);
  uStack_4e1 = (undefined1)((uint7)uStack_2b7 >> 0x30);
  uStack_4f0 = (undefined7)CONCAT71(local_2bf,uStack_2c0);
  local_4e9 = (undefined1)((uint7)local_2bf >> 0x30);
  uStack_4d8 = (undefined7)CONCAT71(uStack_2a7,uStack_2a8);
  uStack_4d1 = (undefined1)((uint7)uStack_2a7 >> 0x30);
  uStack_4e0 = (undefined7)CONCAT71(local_2af,uStack_2b0);
  local_4d9 = (undefined1)((uint7)local_2af >> 0x30);
  uStack_528 = (undefined7)uStack_2f8;
  uStack_521 = (undefined1)((ulong)uStack_2f8 >> 0x38);
  uStack_530 = SUB87(local_300,0);
  local_529 = (undefined1)((ulong)local_300 >> 0x38);
  uStack_518 = (undefined7)CONCAT71(uStack_2e7,uStack_2e8);
  uStack_511 = (undefined1)((uint7)uStack_2e7 >> 0x30);
  uStack_520 = (undefined7)CONCAT71(local_2ef,local_2f0);
  local_519 = (undefined1)((uint7)local_2ef >> 0x30);
  FUN_100011090(puVar14,local_600,&DAT_100fa71a0,&DAT_100c23fc8);
  uStack_c8 = CONCAT17(uStack_481,uStack_488);
  local_d0 = CONCAT17(local_489,uStack_490);
  uStack_c0 = CONCAT17(uStack_479,uStack_480);
  uStack_b8 = uStack_478;
  uStack_108 = CONCAT17(uStack_4c1,uStack_4c8);
  local_110 = CONCAT17(local_4c9,uStack_4d0);
  uStack_f8 = CONCAT17(uStack_4b1,uStack_4b8);
  local_100 = CONCAT17(local_4b9,uStack_4c0);
  uStack_e8 = CONCAT17(uStack_4a1,uStack_4a8);
  local_f0 = CONCAT17(local_4a9,uStack_4b0);
  uStack_d8 = CONCAT17(uStack_491,uStack_498);
  local_e0 = CONCAT17(local_499,uStack_4a0);
  uStack_148 = CONCAT17(uStack_501,uStack_508);
  local_150 = CONCAT17(local_509,uStack_510);
  uStack_138 = CONCAT17(uStack_4f1,uStack_4f8);
  local_140 = CONCAT17(local_4f9,uStack_500);
  uStack_128 = CONCAT17(uStack_4e1,uStack_4e8);
  local_130 = CONCAT17(local_4e9,uStack_4f0);
  uStack_118 = CONCAT17(uStack_4d1,uStack_4d8);
  local_120 = CONCAT17(local_4d9,uStack_4e0);
  uStack_168 = CONCAT17(uStack_521,uStack_528);
  local_170 = CONCAT17(local_529,uStack_530);
  uStack_158 = CONCAT17(uStack_511,uStack_518);
  uStack_160 = CONCAT17(local_519,uStack_520);
  param_1[0x17] = CONCAT17(uStack_481,uStack_488);
  param_1[0x16] = CONCAT17(local_489,uStack_490);
  param_1[0x19] = uStack_478;
  param_1[0x18] = CONCAT17(uStack_479,uStack_480);
  param_1[0xf] = CONCAT17(uStack_4c1,uStack_4c8);
  param_1[0xe] = CONCAT17(local_4c9,uStack_4d0);
  param_1[0x11] = CONCAT17(uStack_4b1,uStack_4b8);
  param_1[0x10] = CONCAT17(local_4b9,uStack_4c0);
  param_1[0x13] = CONCAT17(uStack_4a1,uStack_4a8);
  param_1[0x12] = CONCAT17(local_4a9,uStack_4b0);
  param_1[0x15] = CONCAT17(uStack_491,uStack_498);
  param_1[0x14] = CONCAT17(local_499,uStack_4a0);
  param_1[7] = CONCAT17(uStack_501,uStack_508);
  param_1[6] = CONCAT17(local_509,uStack_510);
  param_1[9] = CONCAT17(uStack_4f1,uStack_4f8);
  param_1[8] = CONCAT17(local_4f9,uStack_500);
  param_1[0xb] = CONCAT17(uStack_4e1,uStack_4e8);
  param_1[10] = CONCAT17(local_4e9,uStack_4f0);
  param_1[0xd] = CONCAT17(uStack_4d1,uStack_4d8);
  param_1[0xc] = CONCAT17(local_4d9,uStack_4e0);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  local_b0 = local_470;
  param_1[3] = CONCAT17(uStack_521,uStack_528);
  param_1[2] = CONCAT17(local_529,uStack_530);
  param_1[5] = CONCAT17(uStack_511,uStack_518);
  param_1[4] = CONCAT17(local_519,uStack_520);
  param_1[0x1a] = local_470;
  param_1[0x1b] = IVar10.unknown;
  param_1[0x1c] = local_a0;
  *(char *)(param_1 + 0x1d) = (char)local_640;
  param_1[0x1e] = local_648;
  *(char *)(param_1 + 0x1f) = (char)local_64c;
  param_1[0x20] = local_660[1];
  param_1[0x21] = local_660[0];
  puVar4 = &DAT_100fa71c0;
  FUN_1000037f0(&DAT_100fa71c0,&DAT_100c23fe8);
  FUN_100011090(lVar15,(long)param_1 + (long)*(int *)(puVar4 + 0x50),&DAT_100fa71a0,&DAT_100c23fc8);
  iVar2 = *(int *)(puVar4 + 0x60);
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = 1;
  FUN_100011090(&local_170,auStack_5f8,&DAT_100fa71b0,&DAT_100c23fd8);
  _swift_retain(IVar10.unknown);
  FUN_100005808(puVar14,&DAT_100fa71a0,&DAT_100c23fc8);
  FUN_100005808(lVar15,&DAT_100fa71a0,&DAT_100c23fc8);
  _swift_release(IVar10.unknown);
  FUN_100005808(&uStack_530,&DAT_100fa71b0,&DAT_100c23fd8);
  _swift_release(local_610);
  return;
}



/* Address: 0x10001b7ac | FUN_10001b7ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10001b7ac(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ResizingMode RVar3;
  undefined7 extraout_var;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  NSImage *nsImage;
  Image IVar8;
  Image IVar9;
  Alignment capInsets;
  _FrameLayout _Var10;
  HorizontalAlignment HVar11;
  undefined **ppuVar12;
  Color CVar13;
  long extraout_x8;
  long lVar14;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  uint local_4dc;
  undefined8 local_4d8;
  uint local_4cc;
  MainActor *local_4c8;
  undefined *local_4c0;
  undefined1 auStack_4b8 [120];
  undefined *local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined1 local_3f0;
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 local_390;
  undefined *local_380;
  undefined8 uStack_378;
  undefined1 local_370;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 local_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 local_34f;
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 local_33f;
  undefined1 uStack_338;
  undefined7 uStack_337;
  undefined1 uStack_330;
  undefined7 local_32f;
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined8 local_31f;
  undefined *local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined8 local_2ff;
  undefined8 uStack_2f7;
  undefined8 local_2ef;
  undefined8 uStack_2e7;
  undefined8 local_2df;
  undefined8 uStack_2d7;
  undefined8 local_2cf;
  undefined8 uStack_2c7;
  undefined8 local_2bf;
  undefined8 uStack_2b7;
  undefined8 local_2af;
  undefined *local_2a0;
  undefined8 uStack_298;
  long local_290;
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
  undefined *local_230;
  uint7 uStack_220;
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
  undefined1 local_1d9;
  undefined7 uStack_1d8;
  undefined1 uStack_1d1;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined *local_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined7 local_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined *local_130;
  undefined *local_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a0;
  byte local_98;
  undefined8 local_90;
  byte local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  RVar3 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_4c0 = (undefined *)CONCAT71(extraout_var,RVar3.value);
  lVar14 = *(long *)(local_4c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  capInsets.unknown = (undefined *)((long)&local_4f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_4c8 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x30,UVar6.unknown,puVar5);
  }
  nsImage = (NSImage *)
            NSImage::imageNamed_
                      ((ID)&_OBJC_CLASS___NSImage,
                       *(undefined8 *)PTR__NSImageNameApplicationIcon_100ea90d8);
  if (nsImage != (NSImage *)0x0) {
    IVar8 = SwiftUI::Image::init(nsImage);
    puVar1 = local_4c0;
    IVar9.unknown = local_4c0;
    (**(code **)(lVar14 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
              );
    IVar9 = SwiftUI::Image::resizable
                      ((EdgeInsets)capInsets.unknown,(ResizingMode)(__int8)IVar8.unknown,IVar9);
    _swift_release(IVar8.unknown);
    (**(code **)(lVar14 + 8))(capInsets.unknown,puVar1);
    SwiftUI::Alignment::get_center(capInsets);
    _Var10 = SwiftUI::_FrameLayout::_init((Alignment)0x4054000000000000);
    local_4c0 = (undefined *)local_a0;
    local_4cc = (uint)local_98;
    local_4d8 = local_90;
    local_4dc = (uint)local_88;
    local_4f0 = uStack_78;
    uStack_4e8 = local_80;
    HVar11 = SwiftUI::HorizontalAlignment::get_center(_Var10.unknown);
    FUN_10001bc34(&local_120);
    uStack_408 = uStack_e8;
    local_410 = uStack_f0;
    uStack_3f8 = uStack_d8;
    uStack_400 = local_e0;
    local_3f0 = (undefined1)local_d0;
    uStack_438 = uStack_118;
    local_440 = local_120;
    uStack_428 = uStack_108;
    local_430 = lStack_110;
    uStack_418 = uStack_f8;
    uStack_420 = local_100;
    local_390 = (undefined1)local_d0;
    uStack_3b8 = uStack_f8;
    local_3c0 = local_100;
    uStack_3a8 = uStack_e8;
    uStack_3b0 = uStack_f0;
    uStack_398 = uStack_d8;
    local_3a0 = local_e0;
    uStack_3d8 = uStack_118;
    local_3e0 = local_120;
    uStack_3c8 = uStack_108;
    uStack_3d0 = lStack_110;
    FUN_100011090(&local_440,&local_1a0,&DAT_100fa7238,&DAT_100c24060);
    ppuVar12 = &local_3e0;
    FUN_100005808(ppuVar12,&DAT_100fa7238,&DAT_100c24060);
    uStack_1f1 = (undefined1)uStack_418;
    uStack_1f0 = (undefined7)((ulong)uStack_418 >> 8);
    local_1f9 = (undefined1)uStack_420;
    uStack_1f8 = (undefined7)((ulong)uStack_420 >> 8);
    uStack_1e1 = (undefined1)uStack_408;
    uStack_1e0 = (undefined7)((ulong)uStack_408 >> 8);
    local_1e9 = (undefined1)local_410;
    uStack_1e8 = (undefined7)((ulong)local_410 >> 8);
    uStack_1d1 = (undefined1)uStack_3f8;
    uStack_1d0 = (undefined7)((ulong)uStack_3f8 >> 8);
    local_1d9 = (undefined1)uStack_400;
    uStack_1d8 = (undefined7)((ulong)uStack_400 >> 8);
    uStack_1c9 = local_3f0;
    uStack_211 = (undefined1)uStack_438;
    uStack_210 = (undefined7)((ulong)uStack_438 >> 8);
    local_219 = SUB81(local_440,0);
    uStack_218 = (undefined7)((ulong)local_440 >> 8);
    uStack_201 = (undefined1)uStack_428;
    uStack_200 = (undefined7)((ulong)uStack_428 >> 8);
    local_209 = (undefined1)local_430;
    uStack_208 = (undefined7)((ulong)local_430 >> 8);
    FUN_1001fe15c();
    CVar13 = SwiftUI::Color::init((NSColor *)*ppuVar12);
    uStack_367 = uStack_218;
    uStack_360 = uStack_211;
    uStack_368 = local_219;
    uStack_2f7 = CONCAT17(uStack_211,uStack_218);
    local_2ff = CONCAT17(local_219,uStack_220);
    uStack_2e7 = CONCAT17(uStack_201,uStack_208);
    local_2ef = CONCAT17(local_209,uStack_210);
    uStack_357 = uStack_208;
    uStack_350 = uStack_201;
    local_35f = uStack_210;
    uStack_358 = local_209;
    local_31f = CONCAT17(uStack_1c9,uStack_1d0);
    local_2af = CONCAT17(uStack_1c9,uStack_1d0);
    uStack_378 = 0x4010000000000000;
    local_370 = 0;
    uStack_2c7 = CONCAT17(uStack_1e1,uStack_1e8);
    local_2cf = CONCAT17(local_1e9,uStack_1f0);
    uStack_327 = uStack_1d8;
    uStack_320 = uStack_1d1;
    local_32f = uStack_1e0;
    uStack_328 = local_1d9;
    uStack_2d7 = CONCAT17(uStack_1f1,uStack_1f8);
    local_2df = CONCAT17(local_1f9,uStack_200);
    uStack_337 = uStack_1e8;
    uStack_330 = uStack_1e1;
    local_33f = uStack_1f0;
    uStack_338 = local_1e9;
    uStack_347 = uStack_1f8;
    uStack_340 = uStack_1f1;
    local_34f = uStack_200;
    uStack_348 = local_1f9;
    uStack_188 = CONCAT71(uStack_218,local_219);
    lStack_190 = (ulong)uStack_220 << 8;
    uStack_198 = 0x4010000000000000;
    uStack_13f = uStack_1d0;
    uStack_138 = uStack_1c9;
    uStack_140 = uStack_1d1;
    uStack_158 = CONCAT71(uStack_1e8,local_1e9);
    local_160 = CONCAT71(uStack_1f0,uStack_1f1);
    uStack_150 = CONCAT71(uStack_1e0,uStack_1e1);
    uStack_148 = local_1d9;
    local_147 = uStack_1d8;
    uStack_178 = CONCAT71(uStack_208,local_209);
    local_180 = CONCAT71(uStack_210,uStack_211);
    uStack_168 = CONCAT71(uStack_1f8,local_1f9);
    uStack_170 = CONCAT71(uStack_200,uStack_201);
    uStack_308 = 0x4010000000000000;
    local_300 = 0;
    uStack_2b7 = CONCAT17(uStack_1d1,uStack_1d8);
    local_2bf = CONCAT17(local_1d9,uStack_1e0);
    local_380 = HVar11.unknown;
    local_310 = HVar11.unknown;
    local_1a0 = HVar11.unknown;
    FUN_100011090(&local_380,&local_120,&DAT_100fa7240,&DAT_100c24068);
    FUN_100005808(&local_310,&DAT_100fa7240,&DAT_100c24068);
    uStack_248 = CONCAT71(local_147,uStack_148);
    uStack_258 = uStack_158;
    local_260 = local_160;
    local_250 = uStack_150;
    uStack_238 = CONCAT71(uStack_137,uStack_138);
    local_240 = CONCAT71(uStack_13f,uStack_140);
    uStack_298 = uStack_198;
    local_2a0 = local_1a0;
    uStack_288 = uStack_188;
    local_290 = lStack_190;
    uStack_278 = uStack_178;
    local_280 = local_180;
    uStack_268 = uStack_168;
    local_270 = uStack_170;
    uStack_218 = (undefined7)uStack_198;
    uStack_211 = (undefined1)((ulong)uStack_198 >> 0x38);
    uStack_220 = (uint7)local_1a0;
    local_219 = (undefined1)((ulong)local_1a0 >> 0x38);
    uStack_208 = (undefined7)uStack_188;
    uStack_201 = (undefined1)((ulong)uStack_188 >> 0x38);
    uStack_210 = (undefined7)lStack_190;
    local_209 = (undefined1)((ulong)lStack_190 >> 0x38);
    uStack_1d0 = (undefined7)uStack_150;
    uStack_1c9 = (undefined1)((ulong)uStack_150 >> 0x38);
    uStack_1e8 = (undefined7)uStack_168;
    uStack_1e1 = (undefined1)((ulong)uStack_168 >> 0x38);
    uStack_1f0 = (undefined7)uStack_170;
    local_1e9 = (undefined1)((ulong)uStack_170 >> 0x38);
    uStack_1d8 = (undefined7)uStack_158;
    uStack_1d1 = (undefined1)((ulong)uStack_158 >> 0x38);
    uStack_1e0 = (undefined7)local_160;
    local_1d9 = (undefined1)((ulong)local_160 >> 0x38);
    uStack_1f8 = (undefined7)uStack_178;
    uStack_1f1 = (undefined1)((ulong)uStack_178 >> 0x38);
    uStack_200 = (undefined7)local_180;
    local_1f9 = (undefined1)((ulong)local_180 >> 0x38);
    local_230 = CVar13.unknown;
    uStack_1c8 = uStack_248;
    uStack_1c0 = local_240;
    uStack_1b8 = uStack_238;
    local_1b0 = CVar13.unknown;
    FUN_100011090(&local_2a0,&local_120,&DAT_100fa7248,&DAT_100c24070);
    FUN_100005808(&uStack_220,&DAT_100fa7248,&DAT_100c24070);
    local_b0 = local_230;
    local_130 = local_230;
    uStack_d8 = uStack_258;
    local_e0 = local_260;
    uStack_c8 = uStack_248;
    local_d0 = local_250;
    uStack_b8 = uStack_238;
    local_c0 = local_240;
    uStack_148 = (undefined1)uStack_248;
    local_147 = (undefined7)((ulong)uStack_248 >> 8);
    uStack_150 = local_250;
    uStack_138 = (undefined1)uStack_238;
    uStack_137 = (undefined7)((ulong)uStack_238 >> 8);
    uStack_140 = (undefined1)local_240;
    uStack_13f = (undefined7)((ulong)local_240 >> 8);
    uStack_158 = uStack_258;
    local_160 = local_260;
    uStack_f8 = uStack_278;
    local_100 = local_280;
    uStack_e8 = uStack_268;
    uStack_f0 = local_270;
    uStack_178 = uStack_278;
    local_180 = local_280;
    uStack_168 = uStack_268;
    uStack_170 = local_270;
    uStack_118 = uStack_298;
    local_120 = local_2a0;
    uStack_108 = uStack_288;
    lStack_110 = local_290;
    uStack_198 = uStack_298;
    local_1a0 = local_2a0;
    uStack_188 = uStack_288;
    lStack_190 = local_290;
    *param_1 = IVar9.unknown;
    param_1[1] = local_4c0;
    *(char *)(param_1 + 2) = (char)local_4cc;
    param_1[3] = local_4d8;
    *(char *)(param_1 + 4) = (char)local_4dc;
    param_1[5] = uStack_4e8;
    param_1[6] = local_4f0;
    param_1[0xe] = uStack_268;
    param_1[0xd] = local_270;
    param_1[0xc] = uStack_278;
    param_1[0xb] = local_280;
    param_1[10] = uStack_288;
    param_1[9] = local_290;
    param_1[8] = uStack_298;
    param_1[7] = local_2a0;
    param_1[0x15] = local_230;
    param_1[0x14] = uStack_238;
    param_1[0x13] = local_240;
    param_1[0x12] = uStack_248;
    param_1[0x11] = local_250;
    param_1[0x10] = uStack_258;
    param_1[0xf] = local_260;
    _swift_retain(IVar9.unknown);
    FUN_100011090(&local_1a0,auStack_4b8,&DAT_100fa7248,&DAT_100c24070);
    FUN_100005808(&local_120,&DAT_100fa7248,&DAT_100c24070);
    _swift_release(local_4c8);
    _swift_release(IVar9.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10001bc34);
  (*pcVar2)();
}



/* Address: 0x10001bc34 | FUN_10001bc34 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001bdd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001bc34(undefined8 *param_1)

{
  undefined4 uVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  Text TVar8;
  Font FVar9;
  Font FVar10;
  Text TVar11;
  undefined *puVar12;
  Text TVar13;
  char *pcVar14;
  undefined *puVar15;
  undefined8 in_x3;
  char *pcVar16;
  long extraout_x8;
  String SVar17;
  undefined1 auStack_1d0 [12];
  undefined4 local_1c4;
  undefined *local_1c0;
  char *pcStack_1b8;
  MainActor *local_1b0;
  undefined1 auStack_1a8 [56];
  char *local_170;
  void *pvStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  char *local_130;
  void *pvStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100;
  char *local_f0;
  void *pvStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  String local_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = auStack_1d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1b0 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    in_x3 = 0x35;
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x35,UVar5.unknown,puVar4);
  }
  FUN_1001e64f8(LVar2.unknown);
  SVar17 = (extension_Foundation)::Swift::String::init(LVar2);
  local_b0 = SVar17;
  FUN_100008378();
  pcVar7 = SVar17.str;
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar14 = pcVar7;
  TVar8 = SwiftUI::Text::_init();
  FVar10.unknown = puVar12;
  FVar9 = SwiftUI::Font::get_title(TVar8.unknown);
  SwiftUI::Font::Weight::get_bold((Weight)FVar9.unknown);
  FVar10 = SwiftUI::Font::weight(FVar9.unknown,FVar10);
  _swift_release(FVar9.unknown);
  TVar13 = TVar8;
  puVar15 = puVar12;
  pcVar16 = pcVar14;
  TVar11 = SwiftUI::Text::_font(FVar10.unknown);
  local_1c4 = SUB84(puVar15,0);
  local_1c0 = TVar11.unknown;
  pcStack_1b8 = pcVar16;
  _swift_release(FVar10.unknown);
  FUN_100016d74(TVar8.unknown,puVar12,pcVar14);
  _swift_bridgeObjectRelease(in_x3);
  FUN_1001e6378(LVar2.unknown);
  local_b0 = (extension_Foundation)::Swift::String::init(LVar2);
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar8 = SwiftUI::Text::_init(TVar11.unknown,PTR___type_metadata_for_Swift_String_100eac208,pcVar7)
  ;
  FUN_100205044(&local_b0,1,TVar8.unknown,puVar12,pcVar7,pcVar16);
  FUN_100016d74(TVar8.unknown,puVar12,pcVar7);
  _swift_bridgeObjectRelease(pcVar16);
  pvStack_168 = local_b0.bridgeObject;
  local_170 = local_b0.str;
  uStack_158 = uStack_98;
  uStack_160 = uStack_a0;
  uStack_148 = uStack_88;
  local_150 = local_90;
  local_140 = local_80;
  pvStack_128 = local_b0.bridgeObject;
  local_130 = local_b0.str;
  uStack_118 = uStack_98;
  local_120 = uStack_a0;
  uStack_108 = uStack_88;
  uStack_110 = local_90;
  local_100 = local_80;
  FUN_100011090(&local_170,&local_f0,&DAT_100fa7250,&DAT_100c26540);
  FUN_100005808(&local_130,&DAT_100fa7250,&DAT_100c26540);
  pcVar14 = pcStack_1b8;
  puVar12 = local_1c0;
  uVar1 = local_1c4;
  local_b0.bridgeObject = pvStack_168;
  local_b0.str = local_170;
  uStack_98 = uStack_158;
  uStack_a0 = uStack_160;
  pvStack_e8 = pvStack_168;
  local_f0 = local_170;
  uStack_d8 = uStack_158;
  uStack_e0 = uStack_160;
  uStack_88 = uStack_148;
  local_90 = local_150;
  uStack_c8 = uStack_148;
  local_d0 = local_150;
  local_80 = local_140;
  local_c0 = local_140;
  *param_1 = local_1c0;
  param_1[1] = TVar13.unknown;
  *(char *)(param_1 + 2) = (char)local_1c4;
  param_1[3] = pcStack_1b8;
  *(undefined1 *)(param_1 + 10) = local_140;
  param_1[7] = uStack_158;
  param_1[6] = uStack_160;
  param_1[9] = uStack_148;
  param_1[8] = local_150;
  param_1[5] = pvStack_168;
  param_1[4] = local_170;
  FUN_100016d5c(local_1c0,TVar13.unknown,local_1c4);
  _swift_bridgeObjectRetain(pcVar14);
  FUN_100011090(&local_f0,auStack_1a8,&DAT_100fa7250,&DAT_100c26540);
  FUN_100005808(&local_b0,&DAT_100fa7250,&DAT_100c26540);
  FUN_100016d74(puVar12,TVar13.unknown,uVar1);
  _swift_release(local_1b0);
  _swift_bridgeObjectRelease(pcVar14);
  return;
}



/* Address: 0x10001bf40 | FUN_10001bf40 */

void FUN_10001bf40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  KeyboardShortcut KVar5;
  long lVar6;
  long lVar7;
  ControlSize CVar8;
  undefined *puVar9;
  PlainButtonStyle PVar10;
  undefined *puVar11;
  MainActor *pMVar12;
  undefined8 *puVar13;
  UnownedSerialExecutor UVar14;
  UnownedSerialExecutor UVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined7 extraout_var;
  Button<undefined> BVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar22;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  MainActor *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  KeyboardShortcut local_a8;
  long local_a0;
  undefined *puStack_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long lVar18;
  
  local_80 = param_1;
  local_78 = param_2;
  uStack_70 = param_4;
  puStack_98 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_a0 = *(long *)(puStack_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar11 = (undefined *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_100fa71c8;
  local_a8.unknown = puVar11;
  FUN_1000037f0(&DAT_100fa71c8,&DAT_100c23ff0);
  local_b8 = *(long *)(puVar9 + -8);
  local_b0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)puVar11 - extraout_x8_00;
  puVar9 = &DAT_100fa71d0;
  local_c0 = lVar20;
  FUN_1000037f0(&DAT_100fa71d0,&DAT_100c23ff8);
  local_c8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12;
  local_90 = lVar20;
  PVar10 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_e8 = *(long *)(PVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  lVar20 = lVar20 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100fa71d8;
  FUN_1000037f0(&DAT_100fa71d8,&DAT_100c24000);
  local_f0 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100fa71e0;
  FUN_1000037f0(&DAT_100fa71e0,&DAT_100c24008);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar21 = (lVar20 - extraout_x8_03) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_d0 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_e0 = lVar21 - extraout_x12_00;
  pMVar12 = Swift::MainActor::typeMetadataAccessor();
  puVar16 = PTR_typeMetadataAccessor_100eaec10;
  pMVar12 = Swift::MainActor::get_shared(pMVar12,pMVar12);
  puVar13 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar16,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_d8 = pMVar12;
  UVar14 = Swift::Actor::get_unownedExecutor();
  UVar15 = UVar14;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar15.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x42,UVar14.unknown,puVar13);
  }
  puVar16 = &DAT_100eb09c0;
  _swift_allocObject(&DAT_100eb09c0,0x30,7);
  *(undefined8 *)(puVar16 + 0x10) = local_78;
  *(undefined8 *)(puVar16 + 0x18) = param_3;
  *(undefined8 *)(puVar16 + 0x20) = uStack_70;
  *(undefined8 *)(puVar16 + 0x28) = param_5;
  _swift_retain(param_3);
  _swift_retain(param_5);
  FUN_1000037f0(&DAT_100fa71e8,&DAT_100c24010);
  local_100 = param_3;
  uStack_f8 = param_5;
  FUN_100016eac(&DAT_100fa71f0,&DAT_100fa71e8,&DAT_100c24010,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  SwiftUI::Button::_init();
  SwiftUI::PlainButtonStyle::init();
  puVar16 = &DAT_100fa71f8;
  FUN_100016eac(&DAT_100fa71f8,&DAT_100fa71d8,&DAT_100c24000,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar17 = &DAT_100fa7200;
  FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  lVar21 = local_e0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_e0,lVar20,puVar9,PVar10.unknown,puVar16,puVar17);
  (**(code **)(local_e8 + 8))(lVar20,PVar10.unknown);
  (**(code **)(local_f0 + 8))(lVar20 - extraout_x8_03,puVar9);
  iVar2 = *(int *)(puVar11 + 0x24);
  puVar9 = &DAT_100fa7208;
  FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
  iVar3 = *(int *)(puVar9 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar8 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar18 = CONCAT71(extraout_var,CVar8.value);
  pcVar22 = *(code **)(*(long *)(lVar18 + -8) + 0x68);
  (*pcVar22)(lVar21 + iVar2 + (long)iVar3,uVar1,lVar18);
  puVar11 = &DAT_100c24020;
  _swift_getKeyPath();
  *(undefined **)(lVar21 + iVar2) = puVar11;
  puVar11 = &DAT_100eb09e8;
  _swift_allocObject(&DAT_100eb09e8,0x30,7);
  uVar4 = uStack_f8;
  *(undefined8 *)(puVar11 + 0x10) = local_78;
  *(undefined8 *)(puVar11 + 0x18) = local_100;
  *(undefined8 *)(puVar11 + 0x20) = uStack_70;
  *(undefined8 *)(puVar11 + 0x28) = uStack_f8;
  _swift_retain();
  _swift_retain(uVar4);
  FUN_1000037f0(&DAT_100fa7210,&DAT_100c24050);
  FUN_10001ff90(&DAT_100fa7218,&DAT_100fa7210,&DAT_100c24050,
                PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
               );
  lVar20 = local_c0;
  BVar19 = SwiftUI::Button::_init();
  KVar5.unknown = local_a8.unknown;
  SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar19.unknown);
  FUN_100016eac(&DAT_100fa7220,&DAT_100fa71c8,&DAT_100c23ff0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  lVar6 = local_90;
  puVar11 = local_b0;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar5);
  (**(code **)(local_a0 + 8))(KVar5.unknown,puStack_98);
  (**(code **)(local_b8 + 8))(lVar20,puVar11);
  iVar2 = *(int *)(local_c8 + 0x24);
  (*pcVar22)(lVar6 + iVar2 + (long)*(int *)(puVar9 + 0x1c),uVar1,lVar18);
  puVar9 = &DAT_100c24020;
  _swift_getKeyPath();
  lVar20 = local_d0;
  *(undefined **)(lVar6 + iVar2) = puVar9;
  FUN_100011090(lVar21,local_d0,&DAT_100fa71e0,&DAT_100c24008);
  lVar18 = local_88;
  FUN_100011090(lVar6,local_88,&DAT_100fa71d0,&DAT_100c23ff8);
  lVar7 = local_80;
  FUN_100011090(lVar20,local_80,&DAT_100fa71e0,&DAT_100c24008);
  puVar9 = &DAT_100fa7228;
  FUN_1000037f0(&DAT_100fa7228,&DAT_100c24058);
  puVar13 = (undefined8 *)(lVar7 + *(int *)(puVar9 + 0x30));
  *puVar13 = 0;
  *(undefined1 *)(puVar13 + 1) = 1;
  FUN_100011090(lVar18,lVar7 + *(int *)(puVar9 + 0x40),&DAT_100fa71d0,&DAT_100c23ff8);
  FUN_100005808(lVar6,&DAT_100fa71d0,&DAT_100c23ff8);
  FUN_100005808(lVar21,&DAT_100fa71e0,&DAT_100c24008);
  FUN_100005808(lVar18,&DAT_100fa71d0,&DAT_100c23ff8);
  FUN_100005808(lVar20,&DAT_100fa71e0,&DAT_100c24008);
  _swift_release(local_d8);
  return;
}



/* Address: 0x10001c5a4 | FUN_10001c5a4 */

void FUN_10001c5a4(undefined8 param_1,undefined8 param_2,code *param_3)

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
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x43,UVar4.unknown,puVar3);
  }
  (*param_3)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10001c658 | FUN_10001c658 */

void FUN_10001c658(undefined8 *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  undefined1 auStack_1e0 [88];
  undefined7 uStack_188;
  undefined1 local_181;
  undefined7 uStack_180;
  undefined1 uStack_179;
  undefined7 uStack_178;
  undefined1 local_171;
  undefined7 uStack_170;
  undefined1 uStack_169;
  undefined7 uStack_168;
  undefined1 local_161;
  undefined7 uStack_160;
  undefined1 uStack_159;
  undefined7 uStack_158;
  undefined1 local_151;
  undefined7 uStack_150;
  undefined1 uStack_149;
  undefined7 uStack_148;
  undefined1 local_140 [64];
  undefined *local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined7 local_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 local_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_97;
  undefined8 uStack_8f;
  undefined8 local_87;
  undefined8 uStack_7f;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined7 uStack_57;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/V5WhatsNewView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x45,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_10001c7f8(local_140);
  uStack_169 = (undefined1)local_140._24_8_;
  uStack_168 = SUB87(local_140._24_8_,1);
  local_171 = (undefined1)local_140._16_8_;
  uStack_170 = SUB87(local_140._16_8_,1);
  uStack_179 = (undefined1)local_140._8_8_;
  uStack_178 = SUB87(local_140._8_8_,1);
  local_181 = (undefined1)local_140._0_8_;
  uStack_180 = SUB87(local_140._0_8_,1);
  uStack_159 = (undefined1)local_140._40_8_;
  uStack_158 = SUB87(local_140._40_8_,1);
  local_161 = (undefined1)local_140._32_8_;
  uStack_160 = SUB87(local_140._32_8_,1);
  uStack_149 = (undefined1)local_140._56_8_;
  uStack_148 = SUB87(local_140._56_8_,1);
  local_151 = (undefined1)local_140._48_8_;
  uStack_150 = SUB87(local_140._48_8_,1);
  uStack_7f = CONCAT17(uStack_169,uStack_170);
  local_87 = CONCAT17(local_171,uStack_178);
  uStack_d7 = uStack_170;
  uStack_d0 = uStack_169;
  local_df = uStack_178;
  uStack_d8 = local_171;
  uStack_6f = CONCAT17(uStack_159,uStack_160);
  local_77 = CONCAT17(local_161,uStack_168);
  uStack_c7 = uStack_160;
  uStack_c0 = uStack_159;
  local_cf = uStack_168;
  uStack_c8 = local_161;
  uStack_b7 = uStack_150;
  local_bf = uStack_158;
  uStack_b8 = local_151;
  uStack_8f = CONCAT17(uStack_179,uStack_180);
  local_97 = CONCAT17(local_181,uStack_188);
  uStack_e7 = uStack_180;
  uStack_e0 = uStack_179;
  local_ef = uStack_188;
  uStack_e8 = local_181;
  local_67 = CONCAT17(local_151,uStack_158);
  uStack_5f = uStack_150;
  uStack_f8 = 0x4010000000000000;
  local_f0 = 0;
  uStack_a0 = 0x4010000000000000;
  local_98 = 0;
  local_100 = VVar6.unknown;
  uStack_b0 = uStack_149;
  uStack_af = uStack_148;
  local_a8 = VVar6.unknown;
  uStack_58 = uStack_149;
  uStack_57 = uStack_148;
  FUN_100011090(&local_100,auStack_1e0,&DAT_100fa71e8,&DAT_100c24010);
  FUN_100005808(&local_a8,&DAT_100fa71e8,&DAT_100c24010);
  _swift_release(pMVar2);
  param_1[5] = CONCAT71(uStack_d7,uStack_d8);
  param_1[4] = CONCAT71(local_df,uStack_e0);
  param_1[7] = CONCAT71(uStack_c7,uStack_c8);
  param_1[6] = CONCAT71(local_cf,uStack_d0);
  param_1[9] = CONCAT71(uStack_b7,uStack_b8);
  param_1[8] = CONCAT71(local_bf,uStack_c0);
  param_1[10] = CONCAT71(uStack_af,uStack_b0);
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = CONCAT71(uStack_e7,uStack_e8);
  param_1[2] = CONCAT71(local_ef,local_f0);
  return;
}



/* Address: 0x10001c7f8 | FUN_10001c7f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10001c7f8(undefined8 *param_1)

{
  long lVar1;
  undefined4 uVar2;
  LocalizedStringResource LVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  Text TVar9;
  Text TVar10;
  Color CVar11;
  LocalizedStringKey LVar12;
  Text TVar13;
  undefined *puVar14;
  uint uVar16;
  undefined *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 in_x3;
  char *pcVar20;
  ulong uVar21;
  long extraout_x8;
  String stringLiteral;
  undefined8 uStack_b0;
  undefined2 auStack_a8 [4];
  undefined1 auStack_a0 [12];
  undefined4 local_94;
  undefined *local_90;
  undefined *puStack_88;
  char *local_80;
  MainActor *local_78;
  String local_70;
  undefined8 uVar15;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_78 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    in_x3 = 0x46;
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x46,UVar6.unknown,puVar5);
  }
  FUN_1001e58f8(auStack_a0 + lVar1);
  local_70 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)(auStack_a0 + lVar1));
  pcVar8 = local_70.str;
  FUN_100008378();
  puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar9 = SwiftUI::Text::_init();
  TVar10 = TVar9;
  FUN_1001fe19c();
  CVar11 = SwiftUI::Color::init(*(NSColor **)TVar10.unknown);
  local_70.str = (char *)CVar11;
  FUN_10001fec0();
  TVar10 = TVar9;
  puVar17 = puVar14;
  pcVar20 = pcVar8;
  puStack_88 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_94 = SUB84(puVar17,0);
  local_90 = TVar10.unknown;
  local_80 = pcVar20;
  FUN_100016d74(TVar9.unknown,puVar14);
  uVar16 = (uint)pcVar8;
  _swift_release(CVar11.unknown);
  _swift_bridgeObjectRelease(in_x3);
  stringLiteral.bridgeObject = (void *)0xa400000000000000;
  stringLiteral.str = (char *)0xb5ae80f4;
  uVar15 = 0xa400000000000000;
  LVar12 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  *(undefined2 *)((long)auStack_a8 + lVar1) = 0x100;
  *(undefined8 *)((long)&uStack_b0 + lVar1) = 0;
  uVar18 = (ulong)(uVar16 & 1);
  TVar9 = SwiftUI::Text::_init(LVar12);
  TVar10 = TVar9;
  FUN_1001fef10();
  CVar11 = SwiftUI::Color::init(*(NSColor **)TVar10.unknown);
  local_70.str = CVar11.unknown;
  TVar10 = TVar9;
  uVar19 = uVar15;
  uVar21 = uVar18;
  TVar13 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar9.unknown,uVar15,uVar18);
  _swift_release(CVar11.unknown);
  _swift_bridgeObjectRelease(pcVar20);
  pcVar20 = local_80;
  puVar17 = puStack_88;
  puVar14 = local_90;
  uVar2 = local_94;
  *param_1 = puStack_88;
  param_1[1] = local_90;
  *(char *)(param_1 + 2) = (char)local_94;
  param_1[3] = local_80;
  param_1[4] = TVar13.unknown;
  param_1[5] = TVar10.unknown;
  *(char *)(param_1 + 6) = (char)uVar19;
  param_1[7] = uVar21;
  FUN_100016d5c(puStack_88,local_90,local_94);
  _swift_bridgeObjectRetain(pcVar20);
  FUN_100016d5c(TVar13.unknown,TVar10.unknown,uVar19);
  _swift_bridgeObjectRetain(uVar21);
  FUN_100016d74(TVar13.unknown,TVar10.unknown,uVar19);
  _swift_bridgeObjectRelease(uVar21);
  FUN_100016d74(puVar17,puVar14,uVar2);
  _swift_release(local_78);
  _swift_bridgeObjectRelease(pcVar20);
  return;
}



/* Address: 0x10001cad8 | FUN_10001cad8 */

void FUN_10001cad8(code *param_1)

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
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x52,UVar4.unknown,puVar3);
  }
  (*param_1)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10001cb8c | FUN_10001cb8c */

void FUN_10001cb8c(undefined8 *param_1)

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
  undefined8 in_x3;
  long extraout_x8;
  undefined8 uStack_2a0;
  undefined1 auStack_298 [8];
  undefined8 uStack_290;
  undefined1 auStack_288 [8];
  undefined8 auStack_280 [2];
  undefined1 auStack_270 [144];
  undefined *local_1e0;
  undefined *puStack_1d8;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  String local_150;
  undefined1 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    in_x3 = 0x54;
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x54,UVar5.unknown,puVar4);
  }
  FUN_1001c0a88(auStack_270 + lVar1);
  local_150 = (extension_Foundation)::Swift::String::init
                        ((LocalizedStringResource)(auStack_270 + lVar1));
  uVar11 = local_150.str._0_1_;
  FUN_100008378();
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init();
  puVar10 = puVar9;
  AVar8 = SwiftUI::Alignment::get_center(TVar7.unknown);
  *(undefined **)((long)auStack_280 + lVar1) = AVar8.unknown;
  *(undefined **)((long)auStack_280 + lVar1 + 8) = puVar10;
  auStack_288[lVar1] = 1;
  *(undefined8 *)((long)&uStack_290 + lVar1) = 0;
  auStack_298[lVar1] = 1;
  *(undefined8 *)((long)&uStack_2a0 + lVar1) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x405e000000000000);
  uStack_178 = uStack_78;
  local_180 = local_80;
  uStack_168 = uStack_68;
  uStack_170 = uStack_70;
  uStack_158 = uStack_58;
  local_160 = local_60;
  uStack_1b8 = uStack_b8;
  local_1c0 = local_c0;
  uStack_1a8 = uStack_a8;
  uStack_1b0 = uStack_b0;
  uStack_198 = uStack_98;
  local_1a0 = local_a0;
  uStack_188 = uStack_88;
  uStack_190 = uStack_90;
  uStack_e8 = uStack_78;
  local_f0 = local_80;
  uStack_d8 = uStack_68;
  uStack_e0 = uStack_70;
  uStack_c8 = uStack_58;
  local_d0 = local_60;
  uStack_128 = uStack_b8;
  local_130 = local_c0;
  uStack_118 = uStack_a8;
  uStack_120 = uStack_b0;
  local_150.bridgeObject = puVar9;
  local_150.str = TVar7.unknown;
  uStack_108 = uStack_98;
  local_110 = local_a0;
  uStack_f8 = uStack_88;
  uStack_100 = uStack_90;
  local_1e0 = TVar7.unknown;
  puStack_1d8 = puVar9;
  local_1d0 = uVar11;
  local_1c8 = in_x3;
  local_140 = uVar11;
  local_138 = in_x3;
  FUN_100011090(&local_1e0,auStack_270,&DAT_100fa7210,&DAT_100c24050);
  FUN_100005808(&local_150,&DAT_100fa7210,&DAT_100c24050);
  _swift_release(pMVar3);
  param_1[0xd] = uStack_178;
  param_1[0xc] = local_180;
  param_1[0xf] = uStack_168;
  param_1[0xe] = uStack_170;
  param_1[0x11] = uStack_158;
  param_1[0x10] = local_160;
  param_1[5] = uStack_1b8;
  param_1[4] = local_1c0;
  param_1[7] = uStack_1a8;
  param_1[6] = uStack_1b0;
  param_1[9] = uStack_198;
  param_1[8] = local_1a0;
  param_1[0xb] = uStack_188;
  param_1[10] = uStack_190;
  param_1[1] = puStack_1d8;
  *param_1 = local_1e0;
  param_1[3] = local_1c8;
  param_1[2] = CONCAT71(uStack_1cf,local_1d0);
  return;
}



/* Address: 0x10001cdb8 | FUN_10001cdb8 */

void FUN_10001cdb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  HorizontalAlignment HVar4;
  undefined *puVar5;
  Set SVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  
  SVar6.unknown = (undefined *)*unaff_x20;
  uVar2 = unaff_x20[1];
  uVar7 = unaff_x20[2];
  uVar3 = unaff_x20[3];
  HVar4 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar4.unknown;
  param_1[1] = 0x403c000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar5 = &DAT_100fa7190;
  FUN_1000037f0(&DAT_100fa7190,&DAT_100c23fb8);
  FUN_10001b180((long)param_1 + (long)*(int *)(puVar5 + 0x2c),SVar6.unknown,uVar2,uVar7,uVar3);
  SVar6 = SwiftUI::Edge::Set::get_horizontal(SVar6);
  uVar7 = 0x4052000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar6.unknown);
  puVar5 = &DAT_100fa7198;
  FUN_1000037f0(&DAT_100fa7198,&DAT_100c23fc0);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar5 + 0x24));
  *puVar1 = (char)SVar6.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Address: 0x10001ce8c | FUN_10001ce8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001d074 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001ce8c(long param_1,undefined8 param_2)

{
  LocalizedStringResource LVar1;
  LinearProgressViewStyle LVar2;
  undefined *puVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  Text TVar12;
  Text TVar13;
  Color CVar14;
  Text TVar15;
  Text TVar16;
  Font FVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar18;
  long extraout_x12;
  Alignment AVar19;
  long lVar20;
  long lVar21;
  String SVar22;
  undefined1 auStack_e0 [8];
  long local_d8;
  MainActor *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  String local_b0;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_c0 = param_1;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar2 = SwiftUI::LinearProgressViewStyle::typeMetadataAccessor();
  local_d8 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  lVar21 = (long)LVar1.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fa7260;
  FUN_1000037f0(&DAT_100fa7260,&DAT_100c24088);
  lVar20 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar19.unknown = (undefined *)(lVar21 - extraout_x8_01);
  puVar4 = &DAT_100fa7268;
  FUN_1000037f0(&DAT_100fa7268,&DAT_100c24090);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar18 = (long)AVar19.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar18;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_b8 = lVar18 - extraout_x12;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_d0 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "Paste/V5WhatsNewView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x68,UVar7.unknown,puVar6);
  }
  uStack_98 = 0;
  local_b0.str = (char *)0x3ff0000000000000;
  local_a0 = param_2;
  FUN_10001ff00();
  SwiftUI::ProgressView::_init
            (AVar19.unknown,pcVar8,&local_b0,PTR___type_metadata_for_Swift_Double_100eac5d0,pcVar8);
  SwiftUI::LinearProgressViewStyle::init();
  puVar9 = &DAT_100fa7278;
  FUN_100016eac(&DAT_100fa7278,&DAT_100fa7260,&DAT_100c24088,
                PTR_SwiftUI__SwiftUI__ProgressView<undefined,undefined>_>SwiftUI__View_100eaa6a0);
  puVar10 = &DAT_100fa7280;
  FUN_100003a00(&DAT_100fa7280,PTR_typeMetadataAccessor_100eaaf58,
                PTR_SwiftUI__SwiftUI__LinearProgressViewStyle_>SwiftUI__ProgressViewStyle_100eaaf48)
  ;
  lVar18 = local_b8;
  (extension_SwiftUI)::SwiftUI::View::_progressViewStyle(lVar21,puVar3,LVar2.unknown,puVar9,puVar10)
  ;
  (**(code **)(local_d8 + 8))(lVar21,LVar2.unknown);
  (**(code **)(lVar20 + 8))(AVar19.unknown,puVar3);
  SwiftUI::Alignment::get_center(AVar19);
  FVar17.unknown = (undefined *)0x0;
  SwiftUI::_FrameLayout::_init((Alignment)0x4064000000000000);
  puVar6 = (undefined8 *)(lVar18 + *(int *)(puVar4 + 0x24));
  puVar6[1] = CONCAT71(uStack_97,uStack_98);
  *puVar6 = local_a0;
  puVar6[3] = uStack_88;
  puVar6[2] = uStack_90;
  puVar6[5] = uStack_78;
  puVar6[4] = local_80;
  FUN_1001e5d78(LVar1.unknown);
  SVar22 = (extension_Foundation)::Swift::String::init(LVar1);
  local_b0 = SVar22;
  FUN_100008378();
  pcVar11 = SVar22.str;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar12 = SwiftUI::Text::_init(pcVar11,PTR___type_metadata_for_Swift_String_100eac208,pcVar11);
  TVar13 = TVar12;
  FUN_1001fe19c();
  CVar14 = SwiftUI::Color::init(*(NSColor **)TVar13.unknown);
  local_b0.str = CVar14.unknown;
  FUN_10001fec0();
  TVar13 = TVar12;
  puVar4 = puVar3;
  pcVar8 = pcVar11;
  TVar15 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar12.unknown,puVar3,pcVar11);
  _swift_release(CVar14.unknown);
  _swift_bridgeObjectRelease();
  FVar17 = SwiftUI::Font::get_title3(FVar17);
  TVar12 = TVar15;
  puVar9 = TVar13.unknown;
  puVar10 = puVar4;
  TVar16 = SwiftUI::Text::_font(FVar17.unknown);
  _swift_release(FVar17.unknown);
  FUN_100016d74(TVar15.unknown,TVar13.unknown,puVar4);
  _swift_bridgeObjectRelease(pcVar8);
  lVar21 = local_b8;
  lVar18 = local_c8;
  FUN_100011090(local_b8,local_c8,&DAT_100fa7268,&DAT_100c24090);
  lVar20 = local_c0;
  FUN_100011090(lVar18,local_c0,&DAT_100fa7268,&DAT_100c24090);
  puVar3 = &DAT_100fa7288;
  FUN_1000037f0(&DAT_100fa7288,&DAT_100c24098);
  puVar6 = (undefined8 *)(lVar20 + *(int *)(puVar3 + 0x30));
  *puVar6 = TVar16.unknown;
  puVar6[1] = TVar12.unknown;
  *(char *)(puVar6 + 2) = (char)puVar9;
  puVar6[3] = puVar10;
  FUN_100016d5c(TVar16.unknown,TVar12.unknown,puVar9);
  _swift_bridgeObjectRetain(puVar10);
  FUN_100005808(lVar21,&DAT_100fa7268,&DAT_100c24090);
  FUN_100016d74(TVar16.unknown,TVar12.unknown,puVar9);
  _swift_bridgeObjectRelease(puVar10);
  FUN_100005808(lVar18,&DAT_100fa7268,&DAT_100c24090);
  _swift_release(local_d0);
  return;
}



/* Address: 0x10001d328 | FUN_10001d328 */

void FUN_10001d328(undefined8 *param_1,HorizontalAlignment param_2)

{
  HorizontalAlignment HVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  HVar1 = SwiftUI::HorizontalAlignment::get_center(param_2);
  *param_1 = HVar1.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar2 = &DAT_100fa7258;
  FUN_1000037f0(&DAT_100fa7258,&DAT_100c24080);
  FUN_10001ce8c((long)param_1 + (long)*(int *)(puVar2 + 0x2c),uVar3);
  return;
}



/* Address: 0x10001d384 | FUN_10001d384 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001d520 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001d384(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  HorizontalAlignment HVar9;
  Set SVar10;
  long extraout_x8;
  undefined8 *puVar11;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined *local_960 [4];
  undefined8 *local_940;
  MainActor *local_938;
  long local_930;
  undefined1 auStack_928 [232];
  undefined *local_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
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
  undefined *puStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  undefined1 local_760;
  undefined *local_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  long lStack_738;
  undefined8 local_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined *puStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  long lStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined *local_630;
  undefined8 uStack_628;
  undefined1 local_620;
  undefined7 local_61f;
  undefined1 uStack_618;
  undefined7 uStack_617;
  undefined1 uStack_610;
  undefined7 local_60f;
  undefined1 uStack_608;
  undefined7 uStack_607;
  undefined1 uStack_600;
  undefined7 local_5ff;
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
  undefined7 local_5bf;
  undefined1 uStack_5b8;
  undefined7 uStack_5b7;
  undefined1 uStack_5b0;
  undefined7 local_5af;
  undefined1 uStack_5a8;
  undefined7 uStack_5a7;
  undefined1 uStack_5a0;
  undefined7 local_59f;
  undefined1 uStack_598;
  undefined7 uStack_597;
  undefined1 uStack_590;
  undefined7 uStack_58f;
  undefined *local_588;
  undefined8 local_580;
  undefined1 local_578;
  undefined8 local_577;
  undefined8 uStack_56f;
  undefined8 local_567;
  undefined8 uStack_55f;
  undefined8 local_557;
  undefined8 uStack_54f;
  undefined8 local_547;
  undefined8 uStack_53f;
  undefined8 local_537;
  undefined8 uStack_52f;
  undefined8 local_527;
  undefined8 uStack_51f;
  undefined8 local_517;
  undefined8 uStack_50f;
  undefined8 local_507;
  undefined8 uStack_4ff;
  undefined8 local_4f7;
  undefined7 uStack_4ef;
  undefined1 uStack_4e8;
  undefined7 uStack_4e7;
  undefined *local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined *puStack_438;
  undefined1 local_430;
  undefined *local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined *local_378;
  undefined1 local_370;
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
  undefined1 local_319;
  undefined7 uStack_318;
  undefined1 uStack_311;
  undefined7 uStack_310;
  undefined1 local_309;
  undefined7 uStack_308;
  undefined1 uStack_301;
  undefined7 uStack_300;
  undefined1 local_2f9;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 local_2e9;
  undefined7 uStack_2e8;
  undefined1 uStack_2e1;
  undefined7 uStack_2e0;
  undefined1 local_2d9;
  undefined7 uStack_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  undefined1 uStack_2c9;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined *puStack_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined7 uStack_2a7;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_280;
  undefined *local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long lStack_168;
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
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  
  puVar4 = &DAT_100fa72a0;
  local_960[1] = (undefined *)param_1;
  FUN_1000037f0(&DAT_100fa72a0,&DAT_100c240b0);
  local_960[2] = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar12 = (long)local_960 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_930 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = (undefined8 *)(lVar12 - extraout_x12);
  local_940 = puVar11;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_938 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x7a,UVar7.unknown,puVar6);
  }
  FUN_10001db14(&local_180,*param_2,param_2[1],*(undefined1 *)(param_2 + 2));
  uVar14 = local_160;
  lVar12 = lStack_168;
  FUN_100004640(&local_180,lStack_168);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar12 + -8) + 0x40));
  local_960[0] = (undefined *)param_2;
  (**(code **)(extraout_x12_00 + 0x10))
            ((long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_960[3] = (undefined *)SwiftUI::AnyView::_init(UVar8.unknown,lVar12,uVar14);
  HVar9.unknown = (undefined *)&local_180;
  FUN_100004594();
  HVar9 = SwiftUI::HorizontalAlignment::get_center(HVar9);
  FUN_10001dd9c(&local_180,param_2);
  uStack_6e8 = uStack_118;
  local_6f0 = local_120;
  uStack_6d8 = uStack_108;
  uStack_6e0 = local_110;
  uStack_728 = uStack_158;
  local_730 = local_160;
  uStack_718 = uStack_148;
  uStack_720 = local_150;
  uStack_708 = uStack_138;
  local_710 = local_140;
  uStack_6f8 = uStack_128;
  uStack_700 = local_130;
  uStack_748 = uStack_178;
  local_750 = local_180;
  lStack_738 = lStack_168;
  uStack_740 = local_170;
  uStack_668 = uStack_128;
  local_670 = local_130;
  uStack_658 = uStack_118;
  uStack_660 = local_120;
  uStack_648 = uStack_108;
  local_650 = local_110;
  uStack_638 = uStack_f8;
  uStack_640 = local_100;
  lStack_6a8 = lStack_168;
  local_6b0 = local_170;
  uStack_698 = uStack_158;
  uStack_6a0 = local_160;
  uStack_688 = uStack_148;
  local_690 = local_150;
  uStack_678 = uStack_138;
  uStack_680 = local_140;
  uStack_6c8 = uStack_f8;
  local_6d0 = local_100;
  uStack_6b8 = uStack_178;
  puStack_6c0 = local_180;
  FUN_100011090(&local_750,&local_270,&DAT_100fa72a8,&DAT_100c240b8);
  FUN_100005808(&puStack_6c0,&DAT_100fa72a8,&DAT_100c240b8);
  uStack_2f1 = (undefined1)uStack_6e8;
  uStack_2f0 = (undefined7)((ulong)uStack_6e8 >> 8);
  local_2f9 = (undefined1)local_6f0;
  uStack_2f8 = (undefined7)((ulong)local_6f0 >> 8);
  uStack_301 = (undefined1)uStack_6f8;
  uStack_300 = (undefined7)((ulong)uStack_6f8 >> 8);
  local_309 = (undefined1)uStack_700;
  uStack_308 = (undefined7)((ulong)uStack_700 >> 8);
  uStack_331 = (undefined1)uStack_728;
  uStack_330 = (undefined7)((ulong)uStack_728 >> 8);
  local_339 = (undefined1)local_730;
  uStack_338 = (undefined7)((ulong)local_730 >> 8);
  uStack_341 = (undefined1)lStack_738;
  uStack_340 = (undefined7)((ulong)lStack_738 >> 8);
  local_349 = (undefined1)uStack_740;
  uStack_348 = (undefined7)((ulong)uStack_740 >> 8);
  uStack_2e1 = (undefined1)uStack_6d8;
  uStack_2e0 = (undefined7)((ulong)uStack_6d8 >> 8);
  local_2e9 = (undefined1)uStack_6e0;
  uStack_2e8 = (undefined7)((ulong)uStack_6e0 >> 8);
  uStack_2d1 = (undefined1)uStack_6c8;
  uStack_2d0 = (undefined7)((ulong)uStack_6c8 >> 8);
  local_2d9 = (undefined1)local_6d0;
  uStack_2d8 = (undefined7)((ulong)local_6d0 >> 8);
  uStack_321 = (undefined1)uStack_718;
  uStack_320 = (undefined7)((ulong)uStack_718 >> 8);
  local_329 = (undefined1)uStack_720;
  uStack_328 = (undefined7)((ulong)uStack_720 >> 8);
  uStack_311 = (undefined1)uStack_708;
  uStack_310 = (undefined7)((ulong)uStack_708 >> 8);
  local_319 = (undefined1)local_710;
  uStack_318 = (undefined7)((ulong)local_710 >> 8);
  uStack_351 = (undefined1)uStack_748;
  uStack_350 = (undefined7)((ulong)uStack_748 >> 8);
  local_359 = SUB81(local_750,0);
  uStack_358 = (undefined7)((ulong)local_750 >> 8);
  uStack_5b7 = uStack_2f8;
  uStack_5b0 = uStack_2f1;
  local_5bf = uStack_300;
  uStack_5b8 = local_2f9;
  uStack_5a7 = uStack_2e8;
  uStack_5a0 = uStack_2e1;
  local_5af = uStack_2f0;
  uStack_5a8 = local_2e9;
  uStack_597 = uStack_2d8;
  local_59f = uStack_2e0;
  uStack_598 = local_2d9;
  uStack_5f7 = uStack_338;
  uStack_5f0 = uStack_331;
  local_5ff = uStack_340;
  uStack_5f8 = local_339;
  uStack_5e7 = uStack_328;
  uStack_5e0 = uStack_321;
  local_5ef = uStack_330;
  uStack_5e8 = local_329;
  uStack_5d7 = uStack_318;
  uStack_5d0 = uStack_311;
  local_5df = uStack_320;
  uStack_5d8 = local_319;
  uStack_5c7 = uStack_308;
  uStack_5c0 = uStack_301;
  local_5cf = uStack_310;
  uStack_5c8 = local_309;
  uStack_617 = uStack_358;
  uStack_610 = uStack_351;
  local_61f = uStack_360;
  uStack_618 = local_359;
  uStack_628 = 0x4020000000000000;
  local_620 = 0;
  uStack_607 = uStack_348;
  uStack_600 = uStack_341;
  local_60f = uStack_350;
  uStack_608 = local_349;
  puVar4 = &DAT_100c240c0;
  uVar16 = local_710;
  uVar18 = uStack_720;
  local_630 = HVar9.unknown;
  uStack_590 = uStack_2d1;
  uStack_58f = uStack_2d0;
  _swift_getKeyPath();
  uStack_1e8 = CONCAT71(uStack_5a7,uStack_5a8);
  local_1f0 = CONCAT71(local_5af,uStack_5b0);
  uStack_1d8 = CONCAT71(uStack_597,uStack_598);
  uStack_1e0 = CONCAT71(local_59f,uStack_5a0);
  uStack_228 = CONCAT71(uStack_5e7,uStack_5e8);
  local_230 = CONCAT71(local_5ef,uStack_5f0);
  uStack_218 = CONCAT71(uStack_5d7,uStack_5d8);
  uStack_220 = CONCAT71(local_5df,uStack_5e0);
  uStack_208 = CONCAT71(uStack_5c7,uStack_5c8);
  local_210 = CONCAT71(local_5cf,uStack_5d0);
  uStack_1f8 = CONCAT71(uStack_5b7,uStack_5b8);
  uStack_200 = CONCAT71(local_5bf,uStack_5c0);
  uStack_258 = CONCAT71(uStack_617,uStack_618);
  uStack_260 = CONCAT71(local_61f,local_620);
  uStack_268 = uStack_628;
  local_270 = local_630;
  uStack_248 = CONCAT71(uStack_607,uStack_608);
  local_250 = CONCAT71(local_60f,uStack_610);
  uStack_238 = CONCAT71(uStack_5f7,uStack_5f8);
  uStack_240 = CONCAT71(local_5ff,uStack_600);
  uStack_50f = CONCAT17(uStack_2f1,uStack_2f8);
  local_517 = CONCAT17(local_2f9,uStack_300);
  uStack_4ff = CONCAT17(uStack_2e1,uStack_2e8);
  local_507 = CONCAT17(local_2e9,uStack_2f0);
  local_4f7 = CONCAT17(local_2d9,uStack_2e0);
  uStack_4ef = uStack_2d8;
  uStack_54f = CONCAT17(uStack_331,uStack_338);
  local_557 = CONCAT17(local_339,uStack_340);
  uStack_53f = CONCAT17(uStack_321,uStack_328);
  local_547 = CONCAT17(local_329,uStack_330);
  uStack_52f = CONCAT17(uStack_311,uStack_318);
  local_537 = CONCAT17(local_319,uStack_320);
  uStack_51f = CONCAT17(uStack_301,uStack_308);
  local_527 = CONCAT17(local_309,uStack_310);
  uStack_56f = CONCAT17(uStack_351,uStack_358);
  local_577 = CONCAT17(local_359,uStack_360);
  uStack_55f = CONCAT17(uStack_341,uStack_348);
  local_567 = CONCAT17(local_349,uStack_350);
  local_1d0 = CONCAT71(uStack_58f,uStack_590);
  local_580 = 0x4020000000000000;
  local_578 = 0;
  uStack_4e8 = uStack_2d1;
  uStack_4e7 = uStack_2d0;
  local_588 = HVar9.unknown;
  FUN_100011090(&local_630,&local_180,&DAT_100fa72b0,&DAT_100c240f0);
  SVar10.unknown = (undefined *)&local_588;
  FUN_100005808(SVar10.unknown,&DAT_100fa72b0,&DAT_100c240f0);
  SVar10 = SwiftUI::Edge::Set::get_horizontal(SVar10);
  uStack_458 = uStack_1e8;
  local_460 = local_1f0;
  uStack_448 = uStack_1d8;
  uStack_450 = uStack_1e0;
  uStack_498 = uStack_228;
  local_4a0 = local_230;
  uStack_488 = uStack_218;
  uStack_490 = uStack_220;
  uStack_478 = uStack_208;
  local_480 = local_210;
  uStack_468 = uStack_1f8;
  uStack_470 = uStack_200;
  uStack_4d8 = uStack_268;
  local_4e0 = local_270;
  uStack_4c8 = uStack_258;
  uStack_4d0 = uStack_260;
  uStack_4b8 = uStack_248;
  local_4c0 = local_250;
  uStack_4a8 = uStack_238;
  uStack_4b0 = uStack_240;
  local_440 = local_1d0;
  local_430 = 1;
  uVar13 = 0x4048000000000000;
  uVar14 = local_250;
  puStack_438 = puVar4;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  uStack_7b8 = uStack_458;
  local_7c0 = local_460;
  uStack_7a8 = uStack_448;
  local_7b0 = uStack_450;
  puStack_798 = puStack_438;
  local_7a0 = local_440;
  local_790 = CONCAT71(local_790._1_7_,local_430);
  uStack_7f8 = uStack_498;
  local_800 = local_4a0;
  uStack_7e8 = uStack_488;
  local_7f0 = uStack_490;
  uStack_7d8 = uStack_478;
  local_7e0 = local_480;
  uStack_7c8 = uStack_468;
  local_7d0 = uStack_470;
  uStack_838 = uStack_4d8;
  local_840 = local_4e0;
  uStack_828 = uStack_4c8;
  uStack_830 = uStack_4d0;
  uStack_818 = uStack_4b8;
  local_820 = local_4c0;
  uStack_808 = uStack_4a8;
  local_810 = uStack_4b0;
  uStack_398 = uStack_1e8;
  local_3a0 = local_1f0;
  uStack_388 = uStack_1d8;
  uStack_390 = uStack_1e0;
  uStack_3d8 = uStack_228;
  local_3e0 = local_230;
  uStack_3c8 = uStack_218;
  uStack_3d0 = uStack_220;
  uStack_3b8 = uStack_208;
  local_3c0 = local_210;
  uStack_3a8 = uStack_1f8;
  uStack_3b0 = uStack_200;
  uStack_418 = uStack_268;
  local_420 = local_270;
  uStack_408 = uStack_258;
  uStack_410 = uStack_260;
  uStack_3f8 = uStack_248;
  local_400 = local_250;
  uStack_3e8 = uStack_238;
  uStack_3f0 = uStack_240;
  local_380 = local_1d0;
  local_370 = 1;
  local_378 = puVar4;
  FUN_100011090(&local_4e0,&local_180,&DAT_100fa72b8,&DAT_100c240f8);
  FUN_100005808(&local_420,&DAT_100fa72b8,&DAT_100c240f8);
  uStack_2d8 = (undefined7)uStack_7b8;
  uStack_2d1 = (undefined1)((ulong)uStack_7b8 >> 0x38);
  uStack_2e0 = (undefined7)local_7c0;
  local_2d9 = (undefined1)((ulong)local_7c0 >> 0x38);
  uStack_2c8 = uStack_7a8;
  uStack_2d0 = (undefined7)local_7b0;
  uStack_2c9 = (undefined1)((ulong)local_7b0 >> 0x38);
  puStack_2b8 = puStack_798;
  local_2c0 = local_7a0;
  uStack_318 = (undefined7)uStack_7f8;
  uStack_311 = (undefined1)((ulong)uStack_7f8 >> 0x38);
  uStack_320 = (undefined7)local_800;
  local_319 = (undefined1)((ulong)local_800 >> 0x38);
  uStack_308 = (undefined7)uStack_7e8;
  uStack_301 = (undefined1)((ulong)uStack_7e8 >> 0x38);
  uStack_310 = (undefined7)local_7f0;
  local_309 = (undefined1)((ulong)local_7f0 >> 0x38);
  uStack_2f8 = (undefined7)uStack_7d8;
  uStack_2f1 = (undefined1)((ulong)uStack_7d8 >> 0x38);
  uStack_300 = (undefined7)local_7e0;
  local_2f9 = (undefined1)((ulong)local_7e0 >> 0x38);
  uStack_2e8 = (undefined7)uStack_7c8;
  uStack_2e1 = (undefined1)((ulong)uStack_7c8 >> 0x38);
  uStack_2f0 = (undefined7)local_7d0;
  local_2e9 = (undefined1)((ulong)local_7d0 >> 0x38);
  uStack_358 = (undefined7)uStack_838;
  uStack_351 = (undefined1)((ulong)uStack_838 >> 0x38);
  uStack_360 = SUB87(local_840,0);
  local_359 = (undefined1)((ulong)local_840 >> 0x38);
  uStack_348 = (undefined7)uStack_828;
  uStack_341 = (undefined1)((ulong)uStack_828 >> 0x38);
  uStack_350 = (undefined7)uStack_830;
  local_349 = (undefined1)((ulong)uStack_830 >> 0x38);
  uStack_338 = (undefined7)uStack_818;
  uStack_331 = (undefined1)((ulong)uStack_818 >> 0x38);
  uStack_340 = (undefined7)local_820;
  local_339 = (undefined1)((ulong)local_820 >> 0x38);
  uStack_328 = (undefined7)uStack_808;
  uStack_321 = (undefined1)((ulong)uStack_808 >> 0x38);
  uStack_330 = (undefined7)local_810;
  local_329 = (undefined1)((ulong)local_810 >> 0x38);
  uStack_1e8 = uStack_7b8;
  local_1f0 = local_7c0;
  uStack_1d8 = uStack_7a8;
  uStack_1e0 = local_7b0;
  puStack_1c8 = puStack_798;
  local_1d0 = local_7a0;
  uStack_228 = uStack_7f8;
  local_230 = local_800;
  uStack_218 = uStack_7e8;
  uStack_220 = local_7f0;
  uStack_208 = uStack_7d8;
  local_210 = local_7e0;
  uStack_1f8 = uStack_7c8;
  uStack_200 = local_7d0;
  uStack_268 = uStack_838;
  local_270 = local_840;
  uStack_258 = uStack_828;
  uStack_260 = uStack_830;
  local_2b0 = local_790;
  local_2a8 = SUB81(SVar10.unknown,0);
  local_280 = 0;
  local_1c0 = local_790;
  uStack_248 = uStack_818;
  local_250 = local_820;
  uStack_238 = uStack_808;
  uStack_240 = local_810;
  local_190 = 0;
  uVar15 = local_7c0;
  uVar17 = local_7b0;
  uVar19 = local_7d0;
  local_2a0 = uVar13;
  uStack_298 = uVar14;
  local_290 = uVar16;
  local_288 = uVar18;
  local_1b8 = local_2a8;
  local_1b0 = uVar13;
  local_1a8 = uVar14;
  local_1a0 = uVar16;
  local_198 = uVar18;
  FUN_100011090(&uStack_360,&local_180,&DAT_100fa72c0,&DAT_100c24100);
  HVar9.unknown = (undefined *)&local_270;
  FUN_100005808(HVar9.unknown,&DAT_100fa72c0,&DAT_100c24100);
  HVar9 = SwiftUI::HorizontalAlignment::get_center(HVar9);
  puVar6 = local_940;
  *local_940 = HVar9.unknown;
  puVar6[1] = 0x4020000000000000;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar4 = &DAT_100fa72c8;
  FUN_1000037f0(&DAT_100fa72c8,&DAT_100c24108);
  SVar10.unknown = local_960[0];
  FUN_10001e554((long)puVar6 + (long)*(int *)(puVar4 + 0x2c));
  SVar10 = SwiftUI::Edge::Set::get_all(SVar10);
  uVar14 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  lVar12 = local_930;
  puVar1 = (undefined1 *)((long)puVar6 + (long)*(int *)(local_960[2] + 0x24));
  *puVar1 = (char)SVar10.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar14;
  *(undefined8 *)(puVar1 + 0x10) = uVar15;
  *(undefined8 *)(puVar1 + 0x18) = uVar17;
  *(undefined8 *)(puVar1 + 0x20) = uVar19;
  puVar1[0x28] = 0;
  uStack_778 = uStack_298;
  local_780 = local_2a0;
  uStack_768 = local_288;
  local_770 = local_290;
  local_760 = local_280;
  uStack_7b8 = CONCAT17(uStack_2d1,uStack_2d8);
  local_7c0 = CONCAT17(local_2d9,uStack_2e0);
  local_7b0 = CONCAT17(uStack_2c9,uStack_2d0);
  uStack_7a8 = uStack_2c8;
  uStack_788 = CONCAT71(uStack_2a7,local_2a8);
  puStack_798 = puStack_2b8;
  local_7a0 = local_2c0;
  local_790 = local_2b0;
  uStack_7f8 = CONCAT17(uStack_311,uStack_318);
  local_800 = CONCAT17(local_319,uStack_320);
  uStack_7e8 = CONCAT17(uStack_301,uStack_308);
  local_7f0 = CONCAT17(local_309,uStack_310);
  uStack_7d8 = CONCAT17(uStack_2f1,uStack_2f8);
  local_7e0 = CONCAT17(local_2f9,uStack_300);
  uStack_7c8 = CONCAT17(uStack_2e1,uStack_2e8);
  local_7d0 = CONCAT17(local_2e9,uStack_2f0);
  uStack_838 = CONCAT17(uStack_351,uStack_358);
  local_840 = (undefined *)CONCAT17(local_359,uStack_360);
  uStack_828 = CONCAT17(uStack_341,uStack_348);
  uStack_830 = CONCAT17(local_349,uStack_350);
  uStack_818 = CONCAT17(uStack_331,uStack_338);
  local_820 = CONCAT17(local_339,uStack_340);
  uStack_808 = CONCAT17(uStack_321,uStack_328);
  local_810 = CONCAT17(local_329,uStack_330);
  FUN_100011090(puVar6,local_930,&DAT_100fa72a0,&DAT_100c240b0);
  puVar3 = local_960[3];
  puVar2 = local_960[1];
  uStack_b8 = uStack_778;
  local_c0 = local_780;
  uStack_a8 = uStack_768;
  uStack_b0 = local_770;
  uStack_f8 = uStack_7b8;
  local_100 = local_7c0;
  uStack_e8 = uStack_7a8;
  uStack_f0 = local_7b0;
  puStack_d8 = puStack_798;
  local_e0 = local_7a0;
  uStack_c8 = uStack_788;
  uStack_d0 = local_790;
  uStack_138 = uStack_7f8;
  local_140 = local_800;
  uStack_128 = uStack_7e8;
  local_130 = local_7f0;
  uStack_118 = uStack_7d8;
  local_120 = local_7e0;
  uStack_108 = uStack_7c8;
  local_110 = local_7d0;
  uStack_178 = uStack_838;
  local_180 = local_840;
  lStack_168 = uStack_828;
  local_170 = uStack_830;
  uStack_158 = uStack_818;
  local_160 = local_820;
  uStack_148 = uStack_808;
  local_150 = local_810;
  *(undefined8 *)((long)local_960[1] + 0xc0) = uStack_788;
  *(undefined8 *)((long)local_960[1] + 0xb8) = local_790;
  *(undefined8 *)((long)local_960[1] + 0xd0) = uStack_778;
  *(undefined8 *)((long)local_960[1] + 200) = local_780;
  *(undefined8 *)((long)local_960[1] + 0xe0) = uStack_768;
  *(undefined8 *)((long)local_960[1] + 0xd8) = local_770;
  *(undefined8 *)((long)local_960[1] + 0x80) = uStack_7c8;
  *(undefined8 *)((long)local_960[1] + 0x78) = local_7d0;
  *(undefined8 *)((long)local_960[1] + 0x90) = uStack_7b8;
  *(undefined8 *)((long)local_960[1] + 0x88) = local_7c0;
  *(undefined8 *)((long)local_960[1] + 0xa0) = uStack_7a8;
  *(undefined8 *)((long)local_960[1] + 0x98) = local_7b0;
  *(undefined **)((long)local_960[1] + 0xb0) = puStack_798;
  *(undefined8 *)((long)local_960[1] + 0xa8) = local_7a0;
  *(undefined8 *)((long)local_960[1] + 0x40) = uStack_808;
  *(undefined8 *)((long)local_960[1] + 0x38) = local_810;
  *(undefined8 *)((long)local_960[1] + 0x50) = uStack_7f8;
  *(undefined8 *)((long)local_960[1] + 0x48) = local_800;
  *(undefined8 *)((long)local_960[1] + 0x60) = uStack_7e8;
  *(undefined8 *)((long)local_960[1] + 0x58) = local_7f0;
  *(undefined8 *)((long)local_960[1] + 0x70) = uStack_7d8;
  *(undefined8 *)((long)local_960[1] + 0x68) = local_7e0;
  *(undefined8 *)((long)local_960[1] + 0x10) = uStack_838;
  *(undefined **)((long)local_960[1] + 8) = local_840;
  *(undefined8 *)((long)local_960[1] + 0x20) = uStack_828;
  *(undefined8 *)((long)local_960[1] + 0x18) = uStack_830;
  *(undefined **)local_960[1] = local_960[3];
  local_a0 = local_760;
  *(undefined1 *)((long)local_960[1] + 0xe8) = local_760;
  *(undefined8 *)((long)local_960[1] + 0x30) = uStack_818;
  *(undefined8 *)((long)local_960[1] + 0x28) = local_820;
  puVar4 = &DAT_100fa72d0;
  FUN_1000037f0(&DAT_100fa72d0,&DAT_100c24110);
  FUN_100011090(lVar12,(long)puVar2 + (long)*(int *)(puVar4 + 0x40),&DAT_100fa72a0,&DAT_100c240b0);
  _swift_retain(puVar3);
  FUN_100011090(&local_180,auStack_928,&DAT_100fa72c0,&DAT_100c24100);
  FUN_100005808(puVar6,&DAT_100fa72a0,&DAT_100c240b0);
  FUN_100005808(lVar12,&DAT_100fa72a0,&DAT_100c240b0);
  FUN_100005808(&local_840,&DAT_100fa72c0,&DAT_100c24100);
  _swift_release(local_938);
  _swift_release(puVar3);
  return;
}



/* Address: 0x10001db14 | FUN_10001db14 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010001dc60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10001db14(undefined8 *param_1,CGFloat param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  Design DVar1;
  String *pSVar2;
  Image IVar3;
  Font FVar5;
  NSColor *pNVar6;
  AnyView AVar7;
  undefined *puVar8;
  Color CVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined1 *puVar12;
  String SVar13;
  undefined1 auStack_50 [8];
  undefined *local_48;
  long lVar4;
  
  pSVar2 = (String *)&DAT_100fa73a0;
  FUN_1000037f0(&DAT_100fa73a0,&DAT_100c241c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)pSVar2[-1].bridgeObject + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_50 + -extraout_x8;
  if (param_5 == '\0') {
    SVar13.bridgeObject = (void *)0x8000000100d8e010;
    SVar13.str = (char *)0xd000000000000012;
    local_48 = (undefined *)SwiftUI::Image::_init(SVar13);
    AVar7 = SwiftUI::AnyView::_init
                      (local_48,PTR___type_metadata_for_SwiftUI_Image_100eab7b8,
                       PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8
                      );
    puVar8 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
    param_1[3] = PTR___type_metadata_for_SwiftUI_AnyView_100eab970;
    param_1[4] = puVar8;
    *param_1 = AVar7.unknown;
  }
  else {
    if (param_5 == '\x01') {
      FUN_10020cf18();
      SVar13 = *pSVar2;
      _swift_bridgeObjectRetain(pSVar2->bridgeObject);
      IVar3 = SwiftUI::Image::init(SVar13);
      SwiftUI::Font::Weight::get_medium((Weight)IVar3.unknown);
      DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
      lVar4 = CONCAT71((int7)((ulong)IVar3.unknown >> 8),DVar1.value);
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar12,1,1,lVar4);
      FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
      FUN_100005808(puVar12,&DAT_100fa73a0,&DAT_100c241c8);
      puVar8 = &DAT_100c24180;
      _swift_getKeyPath();
      pNVar6 = (NSColor *)NSColor::systemOrangeColor((ID)&_OBJC_CLASS___NSColor);
    }
    else {
      FUN_10020dafc();
      SVar13 = *pSVar2;
      _swift_bridgeObjectRetain(pSVar2->bridgeObject);
      IVar3 = SwiftUI::Image::init(SVar13);
      SwiftUI::Font::Weight::get_medium((Weight)IVar3.unknown);
      DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
      lVar4 = CONCAT71((int7)((ulong)IVar3.unknown >> 8),DVar1.value);
      (**(code **)(*(long *)(lVar4 + -8) + 0x38))(puVar12,1,1,lVar4);
      FVar5 = SwiftUI::Font::_system(param_2,(Font)0x0);
      FUN_100005808(puVar12,&DAT_100fa73a0,&DAT_100c241c8);
      puVar8 = &DAT_100c24180;
      _swift_getKeyPath();
      pNVar6 = (NSColor *)NSColor::systemRedColor((ID)&_OBJC_CLASS___NSColor);
    }
    CVar9 = SwiftUI::Color::init(pNVar6);
    puVar10 = &DAT_100fa73a8;
    FUN_1000037f0(&DAT_100fa73a8,&DAT_100c241d0);
    param_1[3] = puVar10;
    FUN_100020258();
    param_1[4] = puVar10;
    puVar10 = &DAT_100eb0a60;
    _swift_allocObject(&DAT_100eb0a60,0x38,7);
    *param_1 = puVar10;
    puVar11 = &DAT_100c241e8;
    _swift_getKeyPath();
    *(undefined **)(puVar10 + 0x10) = IVar3.unknown;
    *(undefined **)(puVar10 + 0x18) = puVar8;
    *(undefined **)(puVar10 + 0x20) = FVar5.unknown;
    *(undefined **)(puVar10 + 0x28) = puVar11;
    *(undefined **)(puVar10 + 0x30) = CVar9.unknown;
  }
  return;
}



/* Address: 0x10001dd9c | FUN_10001dd9c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10001dd9c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  Font param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Text TVar7;
  Text TVar8;
  Color CVar9;
  Text TVar10;
  Font FVar11;
  Font FVar12;
  Text TVar13;
  HorizontalAlignment HVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long extraout_x8;
  undefined1 auStack_470 [8];
  undefined8 *local_468;
  undefined8 *local_460;
  MainActor *local_458;
  undefined1 auStack_450 [112];
  undefined1 local_3e0 [64];
  undefined *local_3a0;
  undefined8 uStack_398;
  undefined1 local_390;
  undefined1 uStack_388;
  undefined7 uStack_387;
  undefined1 uStack_380;
  undefined7 local_37f;
  undefined1 uStack_378;
  undefined7 uStack_377;
  undefined1 uStack_370;
  undefined7 local_36f;
  undefined1 uStack_368;
  undefined7 uStack_367;
  undefined1 uStack_360;
  undefined7 local_35f;
  undefined1 uStack_358;
  undefined7 uStack_357;
  undefined1 uStack_350;
  undefined7 uStack_34f;
  undefined *puStack_348;
  undefined8 local_340;
  undefined1 local_338;
  undefined8 local_337;
  undefined8 uStack_32f;
  undefined8 local_327;
  undefined8 uStack_31f;
  undefined8 local_317;
  undefined8 uStack_30f;
  undefined8 local_307;
  undefined7 uStack_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  char *local_2f0;
  undefined8 uStack_2e8;
  long lStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined *puStack_298;
  char *local_290;
  undefined8 uStack_288;
  long lStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined *local_238;
  char *local_230;
  void *pvStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *local_1d0;
  undefined *puStack_1c8;
  char *local_1c0;
  void *pvStack_1b8;
  long lStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  undefined *local_160;
  undefined *local_158;
  uint7 uStack_150;
  undefined1 local_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 local_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined7 uStack_130;
  undefined1 local_129;
  undefined7 uStack_128;
  undefined1 uStack_121;
  undefined7 uStack_120;
  undefined1 local_119;
  undefined7 uStack_118;
  undefined1 uStack_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  String local_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_470 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar15 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar15,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    param_5.unknown = (undefined *)0x7d;
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x7d,UVar4.unknown,puVar3);
  }
  local_468 = param_2;
  local_460 = param_1;
  local_458 = pMVar2;
  if (*(char *)(param_2 + 2) == '\0') {
    FUN_1001e5ef8(LVar1.unknown);
  }
  else if (*(char *)(param_2 + 2) == '\x01') {
    FUN_1001e61f8(LVar1.unknown);
  }
  else {
    FUN_1001e5bf8(LVar1.unknown);
  }
  local_e0 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar6 = local_e0.str;
  FUN_100008378();
  FVar12.unknown = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init();
  TVar8 = TVar7;
  FUN_1001fe15c();
  CVar9 = SwiftUI::Color::init(*(NSColor **)TVar8.unknown);
  local_e0.str = CVar9.unknown;
  FUN_10001fec0();
  TVar8 = TVar7;
  puVar15 = FVar12.unknown;
  HVar14.unknown = pcVar6;
  TVar10 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar7.unknown,FVar12.unknown,pcVar6);
  _swift_release(CVar9.unknown);
  _swift_bridgeObjectRelease();
  FVar11 = SwiftUI::Font::get_largeTitle(param_5);
  SwiftUI::Font::Weight::get_bold((Weight)FVar11.unknown);
  FVar12 = SwiftUI::Font::weight(FVar11.unknown,FVar12);
  _swift_release(FVar11.unknown);
  TVar7 = TVar10;
  puVar16 = TVar8.unknown;
  puVar17 = puVar15;
  TVar13 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100016d74(TVar10.unknown,TVar8.unknown,puVar15);
  _swift_bridgeObjectRelease();
  HVar14 = SwiftUI::HorizontalAlignment::get_center(HVar14);
  puVar3 = local_468;
  FUN_10001e27c(local_3e0);
  uStack_141 = (undefined1)local_3e0._8_8_;
  uStack_140 = SUB87(local_3e0._8_8_,1);
  local_149 = (undefined1)local_3e0._0_8_;
  uStack_148 = SUB87(local_3e0._0_8_,1);
  uStack_131 = (undefined1)local_3e0._24_8_;
  uStack_130 = SUB87(local_3e0._24_8_,1);
  local_139 = (undefined1)local_3e0._16_8_;
  uStack_138 = SUB87(local_3e0._16_8_,1);
  uStack_121 = (undefined1)local_3e0._40_8_;
  uStack_120 = SUB87(local_3e0._40_8_,1);
  local_129 = (undefined1)local_3e0._32_8_;
  uStack_128 = SUB87(local_3e0._32_8_,1);
  uStack_111 = (undefined1)local_3e0._56_8_;
  uStack_110 = SUB87(local_3e0._56_8_,1);
  local_119 = (undefined1)local_3e0._48_8_;
  uStack_118 = SUB87(local_3e0._48_8_,1);
  FUN_1001fe19c();
  CVar9 = SwiftUI::Color::init((NSColor *)*puVar3);
  uStack_398 = 0x4020000000000000;
  local_390 = 0;
  uStack_387 = uStack_148;
  uStack_380 = uStack_141;
  uStack_388 = local_149;
  uStack_32f = CONCAT17(uStack_141,uStack_148);
  local_337 = CONCAT17(local_149,uStack_150);
  uStack_31f = CONCAT17(uStack_131,uStack_138);
  local_327 = CONCAT17(local_139,uStack_140);
  uStack_377 = uStack_138;
  uStack_370 = uStack_131;
  local_37f = uStack_140;
  uStack_378 = local_139;
  uStack_367 = uStack_128;
  uStack_360 = uStack_121;
  local_36f = uStack_130;
  uStack_368 = local_129;
  uStack_30f = CONCAT17(uStack_121,uStack_128);
  local_317 = CONCAT17(local_129,uStack_130);
  local_307 = CONCAT17(local_119,uStack_120);
  uStack_357 = uStack_118;
  local_35f = uStack_120;
  uStack_358 = local_119;
  uStack_1a8 = CONCAT71(uStack_148,local_149);
  lStack_1b0 = (ulong)uStack_150 << 8;
  pvStack_1b8 = (void *)0x4020000000000000;
  uStack_188 = CONCAT71(uStack_128,local_129);
  local_190 = CONCAT71(uStack_130,uStack_131);
  uStack_178 = CONCAT71(uStack_118,local_119);
  local_180 = CONCAT71(uStack_120,uStack_121);
  uStack_198 = CONCAT71(uStack_138,local_139);
  local_1a0 = CONCAT71(uStack_140,uStack_141);
  local_170 = CONCAT71(uStack_110,uStack_111);
  uStack_350 = uStack_111;
  uStack_34f = uStack_110;
  local_340 = 0x4020000000000000;
  local_338 = 0;
  uStack_2f7 = uStack_110;
  uStack_2ff = uStack_118;
  uStack_2f8 = uStack_111;
  local_3a0 = HVar14.unknown;
  puStack_348 = HVar14.unknown;
  local_1c0 = (char *)HVar14;
  FUN_100011090(&local_3a0,&local_e0,&DAT_100fa7388,&DAT_100c241b0);
  FVar12.unknown = (undefined *)&puStack_348;
  FUN_100005808(FVar12.unknown,&DAT_100fa7388,&DAT_100c241b0);
  FVar12 = SwiftUI::Font::get_title3(FVar12);
  uStack_2c8 = uStack_198;
  local_2d0 = local_1a0;
  uStack_2b8 = uStack_188;
  uStack_2c0 = local_190;
  uStack_2a8 = uStack_178;
  local_2b0 = local_180;
  uStack_2e8 = pvStack_1b8;
  local_2f0 = local_1c0;
  uStack_2d8 = uStack_1a8;
  lStack_2e0 = lStack_1b0;
  local_2a0 = local_170;
  puVar15 = &DAT_100c24180;
  puStack_298 = CVar9.unknown;
  _swift_getKeyPath();
  uStack_128 = (undefined7)uStack_2c8;
  uStack_121 = (undefined1)((ulong)uStack_2c8 >> 0x38);
  uStack_130 = (undefined7)local_2d0;
  local_129 = (undefined1)((ulong)local_2d0 >> 0x38);
  uStack_118 = (undefined7)uStack_2b8;
  uStack_111 = (undefined1)((ulong)uStack_2b8 >> 0x38);
  uStack_120 = (undefined7)uStack_2c0;
  local_119 = (undefined1)((ulong)uStack_2c0 >> 0x38);
  uStack_108 = uStack_2a8;
  uStack_110 = (undefined7)local_2b0;
  uStack_109 = (undefined1)((ulong)local_2b0 >> 0x38);
  puStack_f8 = puStack_298;
  local_100 = local_2a0;
  uStack_148 = (undefined7)uStack_2e8;
  uStack_141 = (undefined1)((ulong)uStack_2e8 >> 0x38);
  uStack_150 = (uint7)local_2f0;
  local_149 = (undefined1)((ulong)local_2f0 >> 0x38);
  uStack_138 = (undefined7)uStack_2d8;
  uStack_131 = (undefined1)((ulong)uStack_2d8 >> 0x38);
  uStack_140 = (undefined7)lStack_2e0;
  local_139 = (undefined1)((ulong)lStack_2e0 >> 0x38);
  uStack_268 = uStack_198;
  local_270 = local_1a0;
  uStack_258 = uStack_188;
  uStack_260 = local_190;
  uStack_248 = uStack_178;
  local_250 = local_180;
  uStack_288 = pvStack_1b8;
  local_290 = local_1c0;
  uStack_278 = uStack_1a8;
  lStack_280 = lStack_1b0;
  local_240 = local_170;
  local_238 = CVar9.unknown;
  FUN_100011090(&local_2f0,&local_e0,&DAT_100fa7390,&DAT_100c241b8);
  FUN_100005808(&local_290,&DAT_100fa7390,&DAT_100c241b8);
  uStack_208 = CONCAT17(uStack_121,uStack_128);
  local_210 = CONCAT17(local_129,uStack_130);
  uStack_1f8 = CONCAT17(uStack_111,uStack_118);
  uStack_200 = CONCAT17(local_119,uStack_120);
  local_1f0 = CONCAT17(uStack_109,uStack_110);
  uStack_1e8 = uStack_108;
  puStack_1d8 = puStack_f8;
  uStack_1e0 = local_100;
  pvStack_228 = (void *)CONCAT17(uStack_141,uStack_148);
  local_230 = (char *)CONCAT17(local_149,uStack_150);
  uStack_218 = CONCAT17(uStack_131,uStack_138);
  uStack_220 = CONCAT17(local_139,uStack_140);
  uStack_178 = uStack_108;
  puStack_168 = puStack_f8;
  local_170 = local_100;
  local_1d0 = puVar15;
  puStack_1c8 = FVar12.unknown;
  local_1c0 = local_230;
  pvStack_1b8 = pvStack_228;
  lStack_1b0 = uStack_220;
  uStack_1a8 = uStack_218;
  local_1a0 = local_210;
  uStack_198 = uStack_208;
  local_190 = uStack_200;
  uStack_188 = uStack_1f8;
  local_180 = local_1f0;
  local_160 = puVar15;
  local_158 = FVar12.unknown;
  FUN_100011090(&local_230,&local_e0,&DAT_100fa7398,&DAT_100c241c0);
  FUN_100005808(&local_1c0,&DAT_100fa7398,&DAT_100c241c0);
  uStack_98 = uStack_1e8;
  local_a0 = local_1f0;
  puStack_88 = puStack_1d8;
  uStack_90 = uStack_1e0;
  puStack_78 = puStack_1c8;
  local_80 = local_1d0;
  local_e0.bridgeObject = pvStack_228;
  local_e0.str = local_230;
  uStack_c8 = uStack_218;
  uStack_d0 = uStack_220;
  uStack_b8 = uStack_208;
  local_c0 = local_210;
  uStack_a8 = uStack_1f8;
  uStack_b0 = uStack_200;
  uStack_148 = SUB87(pvStack_228,0);
  uStack_141 = (undefined1)((ulong)pvStack_228 >> 0x38);
  uStack_150 = (uint7)local_230;
  local_149 = (undefined1)((ulong)local_230 >> 0x38);
  uStack_138 = (undefined7)uStack_218;
  uStack_131 = (undefined1)((ulong)uStack_218 >> 0x38);
  uStack_140 = (undefined7)uStack_220;
  local_139 = (undefined1)((ulong)uStack_220 >> 0x38);
  puStack_f8 = puStack_1d8;
  local_100 = uStack_1e0;
  puStack_e8 = puStack_1c8;
  puStack_f0 = local_1d0;
  uStack_128 = (undefined7)uStack_208;
  uStack_121 = (undefined1)((ulong)uStack_208 >> 0x38);
  uStack_130 = (undefined7)local_210;
  local_129 = (undefined1)((ulong)local_210 >> 0x38);
  uStack_118 = (undefined7)uStack_1f8;
  uStack_111 = (undefined1)((ulong)uStack_1f8 >> 0x38);
  uStack_120 = (undefined7)uStack_200;
  local_119 = (undefined1)((ulong)uStack_200 >> 0x38);
  uStack_108 = uStack_1e8;
  uStack_110 = (undefined7)local_1f0;
  uStack_109 = (undefined1)((ulong)local_1f0 >> 0x38);
  *local_460 = TVar13.unknown;
  local_460[1] = TVar7.unknown;
  *(char *)(local_460 + 2) = (char)puVar16;
  local_460[3] = puVar17;
  local_460[0xf] = puStack_1d8;
  local_460[0xe] = uStack_1e0;
  local_460[0x11] = puStack_1c8;
  local_460[0x10] = local_1d0;
  local_460[0xb] = uStack_1f8;
  local_460[10] = uStack_200;
  local_460[0xd] = uStack_1e8;
  local_460[0xc] = local_1f0;
  local_460[5] = pvStack_228;
  local_460[4] = local_230;
  local_460[7] = uStack_218;
  local_460[6] = uStack_220;
  local_460[9] = uStack_208;
  local_460[8] = local_210;
  FUN_100016d5c(TVar13.unknown,TVar7.unknown,puVar16);
  _swift_bridgeObjectRetain(puVar17);
  FUN_100011090(&uStack_150,auStack_450,&DAT_100fa7398,&DAT_100c241c0);
  FUN_100005808(&local_e0,&DAT_100fa7398,&DAT_100c241c0);
  FUN_100016d74(TVar13.unknown,TVar7.unknown,puVar16);
  _swift_release(local_458);
  _swift_bridgeObjectRelease(puVar17);
  return;
}



/* Address: 0x10001e27c | FUN_10001e27c */

void FUN_10001e27c(undefined8 *param_1,ulong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  char *pcVar7;
  Text TVar8;
  void *pvVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long extraout_x8;
  undefined *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  String local_70;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar12 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    param_5 = 0x82;
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x82,UVar4.unknown,puVar3);
  }
  pcVar7 = (char *)*param_2;
  pvVar9 = (void *)param_2[1];
  FUN_10001e48c(pcVar7,pvVar9,(char)param_2[2]);
  if (pvVar9 == (void *)0x0) {
    TVar6.unknown = (undefined *)0x0;
    puVar12 = (undefined *)0x0;
    uVar14 = 0;
    uVar13 = 0;
    uVar11 = param_5;
  }
  else {
    local_70.bridgeObject = pvVar9;
    local_70.str = pcVar7;
    FUN_100008378();
    puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
    TVar6 = SwiftUI::Text::_init();
    uVar14 = (ulong)pcVar7 & 0xff;
    uVar11 = param_5;
    FUN_100016d5c();
    _swift_bridgeObjectRetain(param_5);
    uVar13 = param_5;
  }
  FUN_1001e6078(LVar1.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar7 = local_70.str;
  FUN_100008378();
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar8 = SwiftUI::Text::_init();
  FUN_100020200(TVar6.unknown,puVar12,uVar14,uVar13);
  FUN_100016d5c(TVar8.unknown,puVar10,pcVar7);
  _swift_bridgeObjectRetain(uVar11);
  FUN_10002022c(TVar6.unknown,puVar12,uVar14,uVar13);
  *param_1 = TVar6.unknown;
  param_1[1] = puVar12;
  param_1[2] = uVar14;
  param_1[3] = uVar13;
  param_1[4] = TVar8.unknown;
  param_1[5] = puVar10;
  *(char *)(param_1 + 6) = (char)pcVar7;
  param_1[7] = uVar11;
  FUN_100016d74(TVar8.unknown,puVar10,pcVar7);
  _swift_bridgeObjectRelease(uVar11);
  FUN_10002022c(TVar6.unknown,puVar12,uVar14,uVar13);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10001e48c | FUN_10001e48c */

String FUN_10001e48c(undefined8 param_1,long param_2,char param_3)

{
  LocalizedStringResource LVar1;
  long extraout_x8;
  String SVar2;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_40 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_3 == '\0') {
    SVar2.bridgeObject._1_7_ = 0;
    SVar2._0_9_ = (unkuint9)0 << 0x40;
  }
  else {
    if (param_3 == '\x01') {
      local_38 = *(undefined8 *)(param_2 + 0x10);
      SVar2 = Swift::CustomStringConvertible::get_description();
      thunk_FUN_1001e7184(LVar1.unknown,SVar2.str);
      _swift_bridgeObjectRelease(SVar2.bridgeObject);
    }
    else {
      FUN_1001e5a78(LVar1.unknown);
    }
    SVar2 = (extension_Foundation)::Swift::String::init(LVar1);
  }
  return SVar2;
}



/* Address: 0x10001e554 | FUN_10001e554 */

void FUN_10001e554(long param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  ControlSize CVar11;
  undefined *puVar12;
  undefined *puVar13;
  MainActor *pMVar14;
  undefined8 *puVar15;
  UnownedSerialExecutor UVar16;
  UnownedSerialExecutor UVar17;
  undefined *puVar18;
  Button<undefined> BVar19;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  long lVar21;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar22;
  undefined8 uVar23;
  code *pcVar24;
  KeyboardShortcut KVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  undefined *puStack_d0;
  MainActor *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  char local_70;
  long lVar20;
  
  local_a8 = param_1;
  local_e8 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_f0 = *(long *)(local_e8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  puVar12 = &DAT_100fa72d8;
  local_f8 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fa72d8,&DAT_100c24118);
  local_108 = *(long *)(puVar12 + -8);
  local_100 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_108 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar21 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar12 = &DAT_100fa72e0;
  local_110 = lVar21;
  FUN_1000037f0(&DAT_100fa72e0,&DAT_100c24120);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar21 = lVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar21 - extraout_x12;
  local_b8 = lVar21;
  puStack_d0 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_d8 = *(long *)(puStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d8 + 0x40));
  KVar25.unknown = (undefined *)(lVar21 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar12 = &DAT_100fa72e8;
  FUN_1000037f0(&DAT_100fa72e8,&DAT_100c24128);
  local_e0 = *(long *)(puVar12 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100fa72f0;
  FUN_1000037f0(&DAT_100fa72f0,&DAT_100c24130);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar21 = ((long)KVar25.unknown - extraout_x8_03) - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a0 = lVar21 - extraout_x12_00;
  pMVar14 = Swift::MainActor::typeMetadataAccessor();
  puVar18 = PTR_typeMetadataAccessor_100eaec10;
  pMVar14 = Swift::MainActor::get_shared(pMVar14,pMVar14);
  puVar15 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar18,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c8 = pMVar14;
  UVar16 = Swift::Actor::get_unownedExecutor();
  UVar17 = UVar16;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar17.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x8e,UVar16.unknown,puVar15);
  }
  uStack_78 = param_2[1];
  local_80 = *param_2;
  local_70 = *(char *)(param_2 + 2);
  uVar23 = param_2[4];
  uVar22 = param_2[6];
  puVar18 = &DAT_100eb0a10;
  _swift_allocObject(&DAT_100eb0a10,0x48,7);
  uVar26 = *param_2;
  uVar28 = param_2[3];
  uVar27 = param_2[2];
  *(undefined8 *)(puVar18 + 0x18) = param_2[1];
  *(undefined8 *)(puVar18 + 0x10) = uVar26;
  *(undefined8 *)(puVar18 + 0x28) = uVar28;
  *(undefined8 *)(puVar18 + 0x20) = uVar27;
  uVar26 = param_2[4];
  *(undefined8 *)(puVar18 + 0x38) = param_2[5];
  *(undefined8 *)(puVar18 + 0x30) = uVar26;
  *(undefined8 *)(puVar18 + 0x40) = param_2[6];
  local_118 = uVar23;
  _swift_retain(uVar23);
  _swift_retain(uVar22);
  FUN_10001ff54(&local_80,auStack_98);
  FUN_1000037f0(&DAT_100fa72f8,&DAT_100c26430);
  FUN_10001ff90(&DAT_100fa7300,&DAT_100fa72f8,&DAT_100c26430,
                PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0
               );
  BVar19 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar19.unknown);
  FUN_100016eac(&DAT_100fa7308,&DAT_100fa72e8,&DAT_100c24128,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  lVar21 = local_a0;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar25);
  (**(code **)(local_d8 + 8))(KVar25.unknown,puStack_d0);
  (**(code **)(local_e0 + 8))((long)KVar25.unknown - extraout_x8_03,puVar12);
  iVar3 = *(int *)(puVar13 + 0x24);
  puVar12 = &DAT_100fa7208;
  FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
  iVar4 = *(int *)(puVar12 + 0x1c);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar11 = SwiftUI::ControlSize::typeMetadataAccessor();
  lVar20 = CONCAT71(extraout_var,CVar11.value);
  pcVar24 = *(code **)(*(long *)(lVar20 + -8) + 0x68);
  (*pcVar24)(lVar21 + iVar3 + (long)iVar4,uVar2,lVar20);
  puVar13 = &DAT_100c24020;
  _swift_getKeyPath();
  *(undefined **)(lVar21 + iVar3) = puVar13;
  bVar1 = local_70 == '\0';
  if (bVar1) {
    puVar13 = &DAT_100fa7378;
    FUN_1000037f0(&DAT_100fa7378,&DAT_100c24170);
    pcVar24 = *(code **)(*(long *)(puVar13 + -8) + 0x38);
    lVar21 = local_b8;
  }
  else {
    puVar13 = &DAT_100eb0a38;
    _swift_allocObject(&DAT_100eb0a38,0x48,7);
    uVar23 = *param_2;
    uVar27 = param_2[3];
    uVar26 = param_2[2];
    *(undefined8 *)(puVar13 + 0x18) = param_2[1];
    *(undefined8 *)(puVar13 + 0x10) = uVar23;
    *(undefined8 *)(puVar13 + 0x28) = uVar27;
    *(undefined8 *)(puVar13 + 0x20) = uVar26;
    uVar23 = param_2[4];
    *(undefined8 *)(puVar13 + 0x38) = param_2[5];
    *(undefined8 *)(puVar13 + 0x30) = uVar23;
    *(undefined8 *)(puVar13 + 0x40) = param_2[6];
    _swift_retain(local_118);
    _swift_retain(uVar22);
    FUN_10001ff54(&local_80,auStack_98);
    FUN_1000037f0(&DAT_100fa7310,&DAT_100c24140);
    FUN_100020030();
    lVar5 = local_110;
    SwiftUI::Button::_init();
    puVar7 = local_f8;
    SwiftUI::PlainButtonStyle::init();
    puVar13 = &DAT_100fa7370;
    FUN_100016eac(&DAT_100fa7370,&DAT_100fa72d8,&DAT_100c24118,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
    puVar18 = &DAT_100fa7200;
    FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
    lVar21 = local_b8;
    puVar8 = local_e8;
    puVar6 = local_100;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_b8,puVar7,local_100,local_e8,puVar13,puVar18);
    (**(code **)(local_f0 + 8))(puVar7,puVar8);
    (**(code **)(local_108 + 8))(lVar5,puVar6);
    puVar13 = &DAT_100fa7378;
    FUN_1000037f0(&DAT_100fa7378,&DAT_100c24170);
    puVar15 = (undefined8 *)(lVar21 + *(int *)(puVar13 + 0x24));
    (*pcVar24)((long)puVar15 + (long)*(int *)(puVar12 + 0x1c),uVar2,lVar20);
    puVar12 = &DAT_100c24020;
    _swift_getKeyPath();
    *puVar15 = puVar12;
    pcVar24 = *(code **)(*(long *)(puVar13 + -8) + 0x38);
  }
  (*pcVar24)(lVar21,bVar1,1,puVar13);
  lVar10 = local_a0;
  lVar20 = local_c0;
  FUN_100011090(local_a0,local_c0,&DAT_100fa72f0,&DAT_100c24130);
  lVar5 = local_b0;
  FUN_100011090(lVar21,local_b0,&DAT_100fa72e0,&DAT_100c24120);
  lVar9 = local_a8;
  FUN_100011090(lVar20,local_a8,&DAT_100fa72f0,&DAT_100c24130);
  puVar12 = &DAT_100fa7380;
  FUN_1000037f0(&DAT_100fa7380,&DAT_100c24178);
  FUN_100011090(lVar5,lVar9 + *(int *)(puVar12 + 0x30),&DAT_100fa72e0,&DAT_100c24120);
  FUN_100005808(lVar21,&DAT_100fa72e0,&DAT_100c24120);
  FUN_100005808(lVar10,&DAT_100fa72f0,&DAT_100c24130);
  FUN_100005808(lVar5,&DAT_100fa72e0,&DAT_100c24120);
  FUN_100005808(lVar20,&DAT_100fa72f0,&DAT_100c24130);
  _swift_release(local_c8);
  return;
}



/* Address: 0x10001ec38 | FUN_10001ec38 */

void FUN_10001ec38(long param_1)

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
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x8f,UVar4.unknown,puVar3);
  }
  (**(code **)(param_1 + 0x28))();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10001ece8 | FUN_10001ece8 */

void FUN_10001ece8(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined8 in_x3;
  long extraout_x8;
  undefined1 auStack_170 [80];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  String local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x91;
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x91,UVar4.unknown,puVar3);
  }
  FUN_1001c1388(auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_170 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  uVar8 = local_a0.str._0_1_;
  FUN_100008378();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  SwiftUI::Alignment::get_center((Alignment)TVar6.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4064000000000000);
  uStack_c8 = uStack_118;
  local_d0 = local_120;
  uStack_b8 = uStack_108;
  uStack_c0 = uStack_110;
  uStack_a8 = uStack_f8;
  local_b0 = local_100;
  local_a0.bridgeObject = puVar7;
  local_a0.str = TVar6.unknown;
  uStack_68 = uStack_108;
  local_70 = uStack_110;
  uStack_58 = uStack_f8;
  uStack_60 = local_100;
  uStack_78 = uStack_118;
  local_80 = local_120;
  local_f0 = TVar6.unknown;
  puStack_e8 = puVar7;
  local_e0 = uVar8;
  local_d8 = in_x3;
  local_90 = uVar8;
  local_88 = in_x3;
  FUN_100011090(&local_f0,auStack_170,&DAT_100fa72f8,&DAT_100c26430);
  FUN_100005808(&local_a0,&DAT_100fa72f8,&DAT_100c26430);
  _swift_release(pMVar2);
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  param_1[9] = uStack_a8;
  param_1[8] = local_b0;
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = local_d8;
  param_1[2] = CONCAT71(uStack_df,local_e0);
  return;
}



/* Address: 0x10001eeb4 | FUN_10001eeb4 */

void FUN_10001eeb4(long param_1)

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
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x99,UVar4.unknown,puVar3);
  }
  (**(code **)(param_1 + 0x18))();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10001ef64 | FUN_10001ef64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10001ef64(undefined8 *param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  VerticalAlignment VVar5;
  VerticalAlignment VVar6;
  Color CVar7;
  Font FVar8;
  undefined *puVar9;
  Alignment AVar10;
  undefined1 auStack_3f8 [136];
  undefined *local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined *puStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined *local_330;
  undefined *puStack_328;
  undefined *local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined *local_2e0;
  undefined8 uStack_2d8;
  undefined1 local_2d0;
  undefined7 uStack_2cf;
  undefined *local_2c8;
  undefined8 local_2c0;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined *local_2a0;
  undefined *local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined *local_280;
  undefined8 uStack_278;
  undefined1 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined *puStack_258;
  undefined *local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined *puStack_208;
  undefined *local_200;
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/V5WhatsNewView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x9b,UVar3.unknown,puVar2);
  }
  VVar5 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar4);
  VVar6 = VVar5;
  FUN_10001f27c(&local_100);
  FUN_1001fe19c();
  CVar7 = SwiftUI::Color::init(*(NSColor **)VVar6.unknown);
  FVar8 = SwiftUI::Font::get_body(CVar7.unknown);
  uStack_2d8 = 0x4010000000000000;
  local_2d0 = 0;
  local_2c8 = local_100;
  local_2c0 = uStack_f8;
  uStack_2b8 = (undefined1)local_f0;
  uStack_2a8 = uStack_e0;
  local_2b0 = local_e8;
  puVar9 = &DAT_100c24180;
  local_2e0 = VVar5.unknown;
  local_2a0 = CVar7.unknown;
  _swift_getKeyPath();
  uStack_168 = CONCAT71(uStack_2b7,uStack_2b8);
  local_170 = local_2c0;
  uStack_158 = uStack_2a8;
  uStack_160 = local_2b0;
  local_150 = local_2a0;
  uStack_180 = CONCAT71(uStack_2cf,local_2d0);
  uStack_188 = uStack_2d8;
  local_190 = local_2e0;
  puStack_178 = local_2c8;
  uStack_290 = 0x4010000000000000;
  local_288 = 0;
  local_280 = local_100;
  uStack_278 = uStack_f8;
  local_270 = (undefined1)local_f0;
  local_268 = local_e8;
  local_260 = uStack_e0;
  local_298 = VVar5.unknown;
  puStack_258 = CVar7.unknown;
  FUN_100011090(&local_2e0,&local_100,&DAT_100fa7338,&DAT_100c24150);
  AVar10.unknown = (undefined *)&local_298;
  FUN_100005808(AVar10.unknown,&DAT_100fa7338,&DAT_100c24150);
  SwiftUI::Alignment::get_center(AVar10);
  uStack_228 = uStack_168;
  local_230 = local_170;
  uStack_218 = uStack_158;
  uStack_220 = uStack_160;
  uStack_248 = uStack_188;
  local_250 = local_190;
  puStack_238 = puStack_178;
  uStack_240 = uStack_180;
  local_210 = local_150;
  puStack_208 = puVar9;
  local_200 = FVar8.unknown;
  SwiftUI::_FrameLayout::_init((Alignment)0x4064000000000000);
  uStack_348 = uStack_228;
  local_350 = local_230;
  uStack_338 = uStack_218;
  local_340 = uStack_220;
  puStack_328 = puStack_208;
  local_330 = local_210;
  local_320 = local_200;
  uStack_368 = uStack_248;
  local_370 = local_250;
  puStack_358 = puStack_238;
  local_360 = uStack_240;
  uStack_1c8 = uStack_168;
  local_1d0 = local_170;
  uStack_1b8 = uStack_158;
  uStack_1c0 = uStack_160;
  uStack_1e8 = uStack_188;
  local_1f0 = local_190;
  puStack_1d8 = puStack_178;
  uStack_1e0 = uStack_180;
  local_1b0 = local_150;
  local_1a8 = puVar9;
  local_1a0 = FVar8.unknown;
  FUN_100011090(&local_250,&local_100,&DAT_100fa7328,&DAT_100c24148);
  FUN_100005808(&local_1f0,&DAT_100fa7328,&DAT_100c24148);
  uStack_128 = uStack_308;
  local_130 = local_310;
  uStack_118 = uStack_2f8;
  uStack_120 = local_300;
  uStack_168 = uStack_348;
  local_170 = local_350;
  uStack_158 = uStack_338;
  uStack_160 = local_340;
  puStack_148 = puStack_328;
  local_150 = local_330;
  uStack_138 = uStack_318;
  puStack_140 = local_320;
  uStack_188 = uStack_368;
  local_190 = local_370;
  puStack_178 = puStack_358;
  uStack_180 = local_360;
  uStack_98 = uStack_308;
  local_a0 = local_310;
  uStack_88 = uStack_2f8;
  uStack_90 = local_300;
  uStack_d8 = uStack_348;
  uStack_e0 = local_350;
  uStack_c8 = uStack_338;
  uStack_d0 = local_340;
  puStack_b8 = puStack_328;
  local_c0 = local_330;
  uStack_a8 = uStack_318;
  puStack_b0 = local_320;
  local_110 = local_2f0;
  local_80 = local_2f0;
  uStack_f8 = uStack_368;
  local_100 = local_370;
  local_e8 = puStack_358;
  local_f0 = local_360;
  FUN_100011090(&local_190,auStack_3f8,&DAT_100fa7310,&DAT_100c24140);
  FUN_100005808(&local_100,&DAT_100fa7310,&DAT_100c24140);
  _swift_release(pMVar1);
  param_1[0xd] = uStack_128;
  param_1[0xc] = local_130;
  param_1[0xf] = uStack_118;
  param_1[0xe] = uStack_120;
  param_1[0x10] = local_110;
  param_1[5] = uStack_168;
  param_1[4] = local_170;
  param_1[7] = uStack_158;
  param_1[6] = uStack_160;
  param_1[9] = puStack_148;
  param_1[8] = local_150;
  param_1[0xb] = uStack_138;
  param_1[10] = puStack_140;
  param_1[1] = uStack_188;
  *param_1 = local_190;
  param_1[3] = puStack_178;
  param_1[2] = uStack_180;
  return;
}



/* Address: 0x10001f27c | FUN_10001f27c */

void FUN_10001f27c(undefined8 *param_1)

{
  String systemName;
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Text TVar7;
  Text TVar8;
  Image IVar9;
  undefined *puVar10;
  undefined8 in_x3;
  long extraout_x8;
  String local_60;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x9c;
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewView.swift",0x1a,1,0x9c,UVar4.unknown,puVar3);
  }
  FUN_1001c46ac(LVar1.unknown);
  local_60 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar6 = local_60.str;
  FUN_100008378();
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar7 = SwiftUI::Text::_init();
  TVar8 = TVar7;
  FUN_10020cb24();
  systemName = *(String *)TVar8.unknown;
  _swift_bridgeObjectRetain(((String *)TVar8.unknown)->bridgeObject);
  IVar9 = SwiftUI::Image::init(systemName);
  *param_1 = TVar7.unknown;
  param_1[1] = puVar10;
  *(char *)(param_1 + 2) = (char)pcVar6;
  param_1[3] = in_x3;
  param_1[4] = IVar9.unknown;
  FUN_100016d5c(TVar7.unknown,puVar10,pcVar6);
  _swift_bridgeObjectRetain(in_x3);
  FUN_100016d74(TVar7.unknown,puVar10,pcVar6);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(in_x3);
  return;
}



/* Address: 0x10001f3fc | FUN_10001f3fc */

void FUN_10001f3fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set SVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  SVar4.unknown = (undefined *)&local_80;
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uVar6 = unaff_x20[2];
  uStack_58 = unaff_x20[5];
  local_60 = unaff_x20[4];
  local_50 = unaff_x20[6];
  uStack_70 = uVar6;
  HVar2 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar2.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100fa7290;
  FUN_1000037f0(&DAT_100fa7290,&DAT_100c240a0);
  FUN_10001d384((long)param_1 + (long)*(int *)(puVar3 + 0x2c));
  SVar4 = SwiftUI::Edge::Set::get_all(SVar4);
  uVar5 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  puVar3 = &DAT_100fa7298;
  FUN_1000037f0(&DAT_100fa7298,&DAT_100c240a8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar5;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Address: 0x10001f4c8 | FUN_10001f4c8 */

void FUN_10001f4c8(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c23de8;
  _swift_getKeyPath(&DAT_100c23de8);
  puVar2 = &DAT_100c23e10;
  _swift_getKeyPath(&DAT_100c23e10);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10001f530 | thunk_FUN_10001f4c8 */

void thunk_FUN_10001f4c8(void)

{
  FUN_10001f4c8();
  return;
}



/* Address: 0x10001f534 | FUN_10001f534 */

void FUN_10001f534(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  Published *pPVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 local_58;
  Published *pPStack_50;
  undefined1 local_48;
  
  uVar1 = *param_1;
  pPVar2 = (Published *)param_1[1];
  uVar6 = *param_2;
  uVar3 = *(undefined1 *)(param_1 + 2);
  puVar4 = &DAT_100c23de8;
  _swift_getKeyPath(&DAT_100c23de8);
  puVar5 = &DAT_100c23e10;
  _swift_getKeyPath(&DAT_100c23e10);
  local_58 = uVar1;
  pPStack_50 = pPVar2;
  local_48 = uVar3;
  _swift_retain(uVar6);
  FUN_10001f60c(uVar1,pPVar2,uVar3);
  Combine::Published::_set_subscript(pPVar2,&local_58,uVar6,puVar4,puVar5);
  return;
}



/* Address: 0x10001f5c4 | thunk_FUN_10001f534 */

void thunk_FUN_10001f534(void)

{
  FUN_10001f534();
  return;
}



/* Address: 0x10001f5c8 | FUN_10001f5c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10001f5c8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 1) {
    FUN_10001f5e8(param_1,param_2,param_3 & 0x3f);
    return param_1;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return param_1;
}



/* Address: 0x10001f5e8 | FUN_10001f5e8 */

void FUN_10001f5e8(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x02') {
    _swift_errorRelease();
    return;
  }
  if (param_3 == '\x01') {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x10001f60c | FUN_10001f60c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10001f60c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 1) {
    FUN_10001f62c(param_1,param_2,param_3 & 0x3f);
    return param_1;
  }
  if (uVar1 == 0) {
    return param_1;
  }
  return param_1;
}



/* Address: 0x10001f62c | FUN_10001f62c */

void FUN_10001f62c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x02') {
    _swift_errorRetain();
    return;
  }
  if (param_3 == '\x01') {
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x10001f650 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x10001f654 | FUN_10001f654 */

void FUN_10001f654(void)

{
  long unaff_x20;
  
  FUN_10001b054(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),FUN_1001abb88);
  return;
}



/* Address: 0x10001f678 | FUN_10001f678 */

void FUN_10001f678(void)

{
  long unaff_x20;
  
  FUN_10001b120(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x10001f68c | FUN_10001f68c */

void FUN_10001f68c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7118;
  FUN_100005c24(&DAT_100fa7118,&DAT_100c23e40);
  puVar2 = puVar1;
  FUN_10001f704();
  puVar3 = puVar2;
  FUN_10001f744();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fa7120 = puVar4;
  return;
}



/* Address: 0x10001f704 | FUN_10001f704 */

void FUN_10001f704(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7128 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c23f68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c23f68,&DAT_100eb0998);
  DAT_100fa7128 = pTVar1;
  return;
}



/* Address: 0x10001f744 | FUN_10001f744 */

void FUN_10001f744(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7130 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c23f18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c23f18,&DAT_100eb0918);
  DAT_100fa7130 = pTVar1;
  return;
}



/* Address: 0x10001f784 | FUN_10001f784 */

void FUN_10001f784(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7138 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c23ec8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c23ec8,&DAT_100eb08e8);
  DAT_100fa7138 = pTVar1;
  return;
}



/* Address: 0x10001f7c4 | FUN_10001f7c4 */

void FUN_10001f7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\0') {
    return;
  }
  _swift_retain(param_2);
  _swift_retain(param_4);
  return;
}



/* Address: 0x10001f7f8 | FUN_10001f7f8 */

void FUN_10001f7f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 != '\0') {
    return;
  }
  _swift_release(param_2);
  _swift_release(param_4);
  return;
}



/* Address: 0x10001f82c | FUN_10001f82c */

void FUN_10001f82c(void)

{
  FUN_1000205dc();
  return;
}



/* Address: 0x10001f84c | FUN_10001f84c */

void FUN_10001f84c(void)

{
  long unaff_x20;
  
  FUN_10001b054(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),FUN_1001abdec);
  return;
}



/* Address: 0x10001f870 | FUN_10001f870 */

void FUN_10001f870(undefined8 *param_1)

{
  FUN_10001f5e8(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  _swift_release(param_1[4]);
  _swift_release(param_1[6]);
  return;
}



/* Address: 0x10001f8a8 | FUN_10001f8a8 */

undefined8 * FUN_10001f8a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar1 = *(undefined1 *)(param_2 + 2);
  FUN_10001f62c(uVar2,uVar3,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = uVar1;
  uVar2 = param_2[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  uVar3 = param_2[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x10001f920 | FUN_10001f920 */

undefined8 * FUN_10001f920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar2 = *(undefined1 *)(param_2 + 2);
  FUN_10001f62c(uVar4,uVar6,uVar2);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar6;
  uVar3 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar2;
  FUN_10001f5e8(uVar5,uVar1,uVar3);
  uVar5 = param_1[4];
  uVar4 = param_2[4];
  uVar6 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar6;
  _swift_retain(uVar4);
  _swift_release(uVar5);
  uVar5 = param_1[6];
  uVar4 = param_2[6];
  uVar6 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar6;
  _swift_retain(uVar4);
  _swift_release(uVar5);
  return param_1;
}



/* Address: 0x10001f9b8 | FUN_10001f9b8 */

undefined8 * FUN_10001f9b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_10001f5e8(uVar3,uVar4,uVar2);
  uVar3 = param_1[4];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  _swift_release(uVar3);
  uVar3 = param_1[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  _swift_release(uVar3);
  return param_1;
}



/* Address: 0x10001fa1c | FUN_10001fa1c */

int FUN_10001fa1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}


