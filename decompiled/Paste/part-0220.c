/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10029f7c0 | FUN_10029f7c0 */

void FUN_10029f7c0(void)

{
  FUN_1002a0e78();
  (extension_SwiftUI)::SwiftUI::Shape::get_body();
  return;
}



/* Address: 0x10029f7f8 | FUN_10029f7f8 */

void FUN_10029f7f8(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  BlendMode BVar3;
  Color CVar4;
  Color CVar5;
  Color CVar6;
  UnitPoint UVar7;
  Gradient gradient;
  LinearGradient LVar8;
  undefined *puVar9;
  undefined7 extraout_var;
  UnitPoint startPoint;
  UnitPoint endPoint;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined6 uStack_488;
  undefined2 local_482;
  undefined6 uStack_480;
  undefined2 uStack_47a;
  undefined6 uStack_478;
  undefined2 local_472;
  undefined6 uStack_470;
  undefined2 uStack_46a;
  undefined6 uStack_468;
  undefined2 local_462;
  undefined6 uStack_460;
  undefined2 uStack_45a;
  undefined6 uStack_458;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined7 local_3a7;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined2 uStack_308;
  undefined2 uStack_300;
  undefined6 uStack_2fe;
  undefined2 uStack_2f8;
  undefined6 local_2f6;
  undefined2 uStack_2f0;
  undefined6 uStack_2ee;
  undefined2 uStack_2e8;
  undefined6 local_2e6;
  undefined2 uStack_2e0;
  undefined6 uStack_2de;
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined2 local_2a8;
  undefined8 local_2a6;
  undefined8 uStack_29e;
  undefined8 local_296;
  undefined8 uStack_28e;
  undefined8 local_286;
  undefined6 uStack_27e;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined8 local_270;
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
  undefined1 uStack_218;
  undefined7 local_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  undefined8 local_190;
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
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_80;
  
  CVar4.unknown = &DAT_100fba3e0;
  FUN_1000037f0(&DAT_100fba3e0,&DAT_100c3aaf0);
  startPoint.unknown = &DAT_00000038;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar4.unknown + 0x18) = 6;
  *(undefined8 *)(CVar4.unknown + 0x10) = 3;
  CVar5 = SwiftUI::Color::get_white(CVar4);
  CVar6 = SwiftUI::Color::opacity(0.0,CVar5);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x20) = CVar6.unknown;
  CVar5 = SwiftUI::Color::get_white(CVar5);
  CVar6 = SwiftUI::Color::opacity(0.14,CVar5);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x28) = CVar6.unknown;
  UVar7.unknown = (undefined *)SwiftUI::Color::get_white(CVar5);
  CVar6 = SwiftUI::Color::opacity(0.0,(Color)UVar7.unknown);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x30) = CVar6.unknown;
  UVar7 = SwiftUI::UnitPoint::get_leading(UVar7);
  SwiftUI::UnitPoint::get_trailing(UVar7);
  gradient = SwiftUI::Gradient::init();
  LVar8 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SwiftUI::Alignment::get_center((Alignment)LVar8.unknown);
  _swift_bridgeObjectRetain(local_388);
  SwiftUI::_FrameLayout::_init((Alignment)0x4050000000000000);
  uStack_47a = (undefined2)uStack_358;
  uStack_478 = (undefined6)((ulong)uStack_358 >> 0x10);
  local_482 = (undefined2)local_360;
  uStack_480 = (undefined6)((ulong)local_360 >> 0x10);
  uStack_46a = (undefined2)uStack_348;
  uStack_468 = (undefined6)((ulong)uStack_348 >> 0x10);
  local_472 = (undefined2)uStack_350;
  uStack_470 = (undefined6)((ulong)uStack_350 >> 0x10);
  uStack_45a = (undefined2)uStack_338;
  uStack_458 = (undefined6)((ulong)uStack_338 >> 0x10);
  local_462 = (undefined2)local_340;
  uStack_460 = (undefined6)((ulong)local_340 >> 0x10);
  _swift_bridgeObjectRelease(local_388);
  local_330 = local_388;
  uStack_328 = local_380;
  uStack_320 = uStack_378;
  local_318 = local_370;
  local_310 = uStack_368;
  uStack_308 = 0x100;
  uStack_2d6 = uStack_458;
  uVar11 = CONCAT26(local_462,uStack_468);
  uStack_2de = uStack_460;
  uStack_2d8 = uStack_45a;
  local_2e6 = uStack_468;
  uStack_2e0 = local_462;
  uStack_28e = CONCAT26(uStack_46a,uStack_470);
  local_296 = CONCAT26(local_472,uStack_478);
  uStack_2ee = uStack_470;
  uStack_2e8 = uStack_46a;
  local_2f6 = uStack_478;
  uStack_2f0 = local_472;
  uStack_29e = CONCAT26(uStack_47a,uStack_480);
  local_2a6 = CONCAT26(local_482,uStack_488);
  uStack_2fe = uStack_480;
  uStack_2f8 = uStack_47a;
  uStack_300 = local_482;
  uStack_188 = local_380;
  local_190 = local_388;
  uStack_178 = local_370;
  local_180 = uStack_378;
  uStack_148 = CONCAT62(uStack_468,uStack_46a);
  local_150 = CONCAT62(uStack_470,local_472);
  uStack_138 = CONCAT62(uStack_458,uStack_45a);
  local_140 = CONCAT62(uStack_460,local_462);
  uStack_168 = CONCAT62(uStack_488,0x100);
  uStack_158 = CONCAT62(uStack_478,uStack_47a);
  local_160 = CONCAT62(uStack_480,local_482);
  local_170 = uStack_368;
  local_2d0 = local_388;
  local_2c8 = local_380;
  uStack_2c0 = uStack_378;
  local_2b8 = local_370;
  uStack_2b0 = uStack_368;
  local_2a8 = 0x100;
  uStack_276 = uStack_458;
  uStack_27e = uStack_460;
  uStack_278 = uStack_45a;
  local_286 = uVar11;
  FUN_100011090(&local_330,&local_100,&DAT_100fbb110,&DAT_100c3ba88);
  UVar7.unknown = (undefined *)&local_2d0;
  FUN_100005808(UVar7.unknown,&DAT_100fbb110,&DAT_100c3ba88);
  uVar10 = uStack_368;
  SwiftUI::UnitPoint::get_center(UVar7);
  uStack_228 = uStack_148;
  local_230 = local_150;
  uStack_218 = (undefined1)uStack_138;
  local_217 = (undefined7)((ulong)uStack_138 >> 8);
  uStack_220 = local_140;
  uStack_268 = uStack_188;
  local_270 = local_190;
  uStack_258 = uStack_178;
  uStack_260 = local_180;
  uStack_3b8 = uStack_148;
  local_3c0 = local_150;
  uStack_3b0 = local_140;
  uStack_3f8 = uStack_188;
  local_400 = local_190;
  uStack_3e8 = uStack_178;
  local_3f0 = local_180;
  uStack_248 = uStack_168;
  local_250 = local_170;
  uStack_238 = uStack_158;
  uStack_240 = local_160;
  uStack_210 = 0;
  uStack_20f = 0x402c0000000000;
  uStack_208 = 0;
  uStack_3d8 = uStack_168;
  local_3e0 = local_170;
  uStack_3c8 = uStack_158;
  local_3d0 = local_160;
  uStack_39f = 0x402c0000000000;
  uStack_398 = 0;
  local_3a7 = local_217;
  uStack_3a0 = 0;
  uStack_1b8 = uStack_148;
  local_1c0 = local_150;
  uStack_1a8 = uStack_138;
  uStack_1b0 = local_140;
  uStack_1d8 = uStack_168;
  local_1e0 = local_170;
  uStack_1c8 = uStack_158;
  uStack_1d0 = local_160;
  uStack_1f8 = uStack_188;
  local_200 = local_190;
  uStack_1e8 = uStack_178;
  uStack_1f0 = local_180;
  local_1a0 = 0x402c000000000000;
  local_198 = 0;
  uStack_3a8 = uStack_218;
  FUN_100011090(&local_270,&local_100,&DAT_100fbb118,&DAT_100c3ba90);
  FUN_100005808(&local_200,&DAT_100fbb118,&DAT_100c3ba90);
  puVar9 = &DAT_100fbb120;
  FUN_1000037f0(&DAT_100fbb120,&DAT_100c3ba98);
  iVar2 = *(int *)(puVar9 + 0x24);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_BlendMode_plusLighter_SwiftUI_BlendMode_Type___>_SwiftUI_BlendMode_100eabab0
  ;
  BVar3 = SwiftUI::BlendMode::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,BVar3.value) + -8) + 0x68))
            ((long)param_1 + (long)iVar2,uVar1,CONCAT71(extraout_var,BVar3.value));
  uStack_a8 = CONCAT71(local_3a7,uStack_3a8);
  uStack_128 = CONCAT71(uStack_397,uStack_398);
  uStack_130 = CONCAT71(uStack_39f,uStack_3a0);
  uStack_138 = CONCAT71(local_3a7,uStack_3a8);
  local_140 = uStack_3b0;
  uStack_158 = uStack_3c8;
  local_160 = local_3d0;
  uStack_148 = uStack_3b8;
  local_150 = local_3c0;
  local_120 = 0x3fe03258031ade7c;
  param_1[0xd] = uStack_128;
  param_1[0xc] = uStack_130;
  param_1[0xf] = uVar10;
  param_1[0xe] = 0x3fe03258031ade7c;
  param_1[9] = uStack_3b8;
  param_1[8] = local_3c0;
  param_1[0xb] = uStack_138;
  param_1[10] = uStack_3b0;
  uStack_178 = uStack_3e8;
  local_180 = local_3f0;
  uStack_168 = uStack_3d8;
  local_170 = local_3e0;
  uStack_188 = uStack_3f8;
  local_190 = local_400;
  param_1[0x10] = uVar11;
  param_1[1] = uStack_3f8;
  *param_1 = local_400;
  param_1[3] = uStack_3e8;
  param_1[2] = local_3f0;
  param_1[5] = uStack_3d8;
  param_1[4] = local_3e0;
  param_1[7] = uStack_3c8;
  param_1[6] = local_3d0;
  uStack_f8 = uStack_3f8;
  local_100 = local_400;
  uStack_e8 = uStack_3e8;
  uStack_f0 = local_3f0;
  uStack_98 = CONCAT71(uStack_397,uStack_398);
  uStack_a0 = CONCAT71(uStack_39f,uStack_3a0);
  local_b0 = uStack_3b0;
  uStack_c8 = uStack_3c8;
  local_d0 = local_3d0;
  uStack_b8 = uStack_3b8;
  uStack_c0 = local_3c0;
  uStack_d8 = uStack_3d8;
  local_e0 = local_3e0;
  local_90 = 0x3fe03258031ade7c;
  local_110 = uVar11;
  uStack_80 = uVar11;
  FUN_100011090(&local_190,&uStack_488,&DAT_100fbb128,&DAT_100c3baa0);
  FUN_100005808(&local_100,&DAT_100fbb128,&DAT_100c3baa0);
  puVar9 = &DAT_100fbb130;
  FUN_1000037f0(&DAT_100fbb130,&DAT_100c3baa8);
  iVar2 = *(int *)(puVar9 + 0x24);
  ((undefined8 *)((long)param_1 + (long)iVar2))[1] = 0;
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0x4030000000000000;
  return;
}



/* Address: 0x10029fbf0 | thunk_FUN_10029f7f8 */

void thunk_FUN_10029f7f8(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  BlendMode BVar3;
  Color CVar4;
  Color CVar5;
  Color CVar6;
  UnitPoint UVar7;
  Gradient gradient;
  LinearGradient LVar8;
  undefined *puVar9;
  undefined7 extraout_var;
  UnitPoint startPoint;
  UnitPoint endPoint;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined6 uStack_488;
  undefined2 uStack_482;
  undefined6 uStack_480;
  undefined2 uStack_47a;
  undefined6 uStack_478;
  undefined2 uStack_472;
  undefined6 uStack_470;
  undefined2 uStack_46a;
  undefined6 uStack_468;
  undefined2 uStack_462;
  undefined6 uStack_460;
  undefined2 uStack_45a;
  undefined6 uStack_458;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 uStack_3a8;
  undefined7 uStack_3a7;
  undefined1 uStack_3a0;
  undefined7 uStack_39f;
  undefined1 uStack_398;
  undefined7 uStack_397;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined2 uStack_308;
  undefined2 uStack_300;
  undefined6 uStack_2fe;
  undefined2 uStack_2f8;
  undefined6 uStack_2f6;
  undefined2 uStack_2f0;
  undefined6 uStack_2ee;
  undefined2 uStack_2e8;
  undefined6 uStack_2e6;
  undefined2 uStack_2e0;
  undefined6 uStack_2de;
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined2 uStack_2a8;
  undefined8 uStack_2a6;
  undefined8 uStack_29e;
  undefined8 uStack_296;
  undefined8 uStack_28e;
  undefined8 uStack_286;
  undefined6 uStack_27e;
  undefined2 uStack_278;
  undefined6 uStack_276;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 uStack_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  
  CVar4.unknown = &DAT_100fba3e0;
  FUN_1000037f0(&DAT_100fba3e0,&DAT_100c3aaf0);
  startPoint.unknown = &DAT_00000038;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar4.unknown + 0x18) = 6;
  *(undefined8 *)(CVar4.unknown + 0x10) = 3;
  CVar5 = SwiftUI::Color::get_white(CVar4);
  CVar6 = SwiftUI::Color::opacity(0.0,CVar5);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x20) = CVar6.unknown;
  CVar5 = SwiftUI::Color::get_white(CVar5);
  CVar6 = SwiftUI::Color::opacity(0.14,CVar5);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x28) = CVar6.unknown;
  UVar7.unknown = (undefined *)SwiftUI::Color::get_white(CVar5);
  CVar6 = SwiftUI::Color::opacity(0.0,(Color)UVar7.unknown);
  _swift_release();
  *(undefined **)(CVar4.unknown + 0x30) = CVar6.unknown;
  UVar7 = SwiftUI::UnitPoint::get_leading(UVar7);
  SwiftUI::UnitPoint::get_trailing(UVar7);
  gradient = SwiftUI::Gradient::init();
  LVar8 = SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  SwiftUI::Alignment::get_center((Alignment)LVar8.unknown);
  _swift_bridgeObjectRetain(uStack_388);
  SwiftUI::_FrameLayout::_init((Alignment)0x4050000000000000);
  uStack_47a = (undefined2)uStack_358;
  uStack_478 = (undefined6)((ulong)uStack_358 >> 0x10);
  uStack_482 = (undefined2)uStack_360;
  uStack_480 = (undefined6)((ulong)uStack_360 >> 0x10);
  uStack_46a = (undefined2)uStack_348;
  uStack_468 = (undefined6)((ulong)uStack_348 >> 0x10);
  uStack_472 = (undefined2)uStack_350;
  uStack_470 = (undefined6)((ulong)uStack_350 >> 0x10);
  uStack_45a = (undefined2)uStack_338;
  uStack_458 = (undefined6)((ulong)uStack_338 >> 0x10);
  uStack_462 = (undefined2)uStack_340;
  uStack_460 = (undefined6)((ulong)uStack_340 >> 0x10);
  _swift_bridgeObjectRelease(uStack_388);
  uStack_330 = uStack_388;
  uStack_328 = uStack_380;
  uStack_320 = uStack_378;
  uStack_318 = uStack_370;
  uStack_310 = uStack_368;
  uStack_308 = 0x100;
  uStack_2d6 = uStack_458;
  uVar11 = CONCAT26(uStack_462,uStack_468);
  uStack_2de = uStack_460;
  uStack_2d8 = uStack_45a;
  uStack_2e6 = uStack_468;
  uStack_2e0 = uStack_462;
  uStack_28e = CONCAT26(uStack_46a,uStack_470);
  uStack_296 = CONCAT26(uStack_472,uStack_478);
  uStack_2ee = uStack_470;
  uStack_2e8 = uStack_46a;
  uStack_2f6 = uStack_478;
  uStack_2f0 = uStack_472;
  uStack_29e = CONCAT26(uStack_47a,uStack_480);
  uStack_2a6 = CONCAT26(uStack_482,uStack_488);
  uStack_2fe = uStack_480;
  uStack_2f8 = uStack_47a;
  uStack_300 = uStack_482;
  uStack_188 = uStack_380;
  uStack_190 = uStack_388;
  uStack_178 = uStack_370;
  uStack_180 = uStack_378;
  uStack_148 = CONCAT62(uStack_468,uStack_46a);
  uStack_150 = CONCAT62(uStack_470,uStack_472);
  uStack_138 = CONCAT62(uStack_458,uStack_45a);
  uStack_140 = CONCAT62(uStack_460,uStack_462);
  uStack_168 = CONCAT62(uStack_488,0x100);
  uStack_158 = CONCAT62(uStack_478,uStack_47a);
  uStack_160 = CONCAT62(uStack_480,uStack_482);
  uStack_170 = uStack_368;
  uStack_2d0 = uStack_388;
  uStack_2c8 = uStack_380;
  uStack_2c0 = uStack_378;
  uStack_2b8 = uStack_370;
  uStack_2b0 = uStack_368;
  uStack_2a8 = 0x100;
  uStack_276 = uStack_458;
  uStack_27e = uStack_460;
  uStack_278 = uStack_45a;
  uStack_286 = uVar11;
  FUN_100011090(&uStack_330,&uStack_100,&DAT_100fbb110,&DAT_100c3ba88);
  UVar7.unknown = (undefined *)&uStack_2d0;
  FUN_100005808(UVar7.unknown,&DAT_100fbb110,&DAT_100c3ba88);
  uVar10 = uStack_368;
  SwiftUI::UnitPoint::get_center(UVar7);
  uStack_228 = uStack_148;
  uStack_230 = uStack_150;
  uStack_218 = (undefined1)uStack_138;
  uStack_217 = (undefined7)((ulong)uStack_138 >> 8);
  uStack_220 = uStack_140;
  uStack_268 = uStack_188;
  uStack_270 = uStack_190;
  uStack_258 = uStack_178;
  uStack_260 = uStack_180;
  uStack_3b8 = uStack_148;
  uStack_3c0 = uStack_150;
  uStack_3b0 = uStack_140;
  uStack_3f8 = uStack_188;
  uStack_400 = uStack_190;
  uStack_3e8 = uStack_178;
  uStack_3f0 = uStack_180;
  uStack_248 = uStack_168;
  uStack_250 = uStack_170;
  uStack_238 = uStack_158;
  uStack_240 = uStack_160;
  uStack_210 = 0;
  uStack_20f = 0x402c0000000000;
  uStack_208 = 0;
  uStack_3d8 = uStack_168;
  uStack_3e0 = uStack_170;
  uStack_3c8 = uStack_158;
  uStack_3d0 = uStack_160;
  uStack_39f = 0x402c0000000000;
  uStack_398 = 0;
  uStack_3a7 = uStack_217;
  uStack_3a0 = 0;
  uStack_1b8 = uStack_148;
  uStack_1c0 = uStack_150;
  uStack_1a8 = uStack_138;
  uStack_1b0 = uStack_140;
  uStack_1d8 = uStack_168;
  uStack_1e0 = uStack_170;
  uStack_1c8 = uStack_158;
  uStack_1d0 = uStack_160;
  uStack_1f8 = uStack_188;
  uStack_200 = uStack_190;
  uStack_1e8 = uStack_178;
  uStack_1f0 = uStack_180;
  uStack_1a0 = 0x402c000000000000;
  uStack_198 = 0;
  uStack_3a8 = uStack_218;
  FUN_100011090(&uStack_270,&uStack_100,&DAT_100fbb118,&DAT_100c3ba90);
  FUN_100005808(&uStack_200,&DAT_100fbb118,&DAT_100c3ba90);
  puVar9 = &DAT_100fbb120;
  FUN_1000037f0(&DAT_100fbb120,&DAT_100c3ba98);
  iVar2 = *(int *)(puVar9 + 0x24);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_BlendMode_plusLighter_SwiftUI_BlendMode_Type___>_SwiftUI_BlendMode_100eabab0
  ;
  BVar3 = SwiftUI::BlendMode::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,BVar3.value) + -8) + 0x68))
            ((long)param_1 + (long)iVar2,uVar1,CONCAT71(extraout_var,BVar3.value));
  uStack_a8 = CONCAT71(uStack_3a7,uStack_3a8);
  uStack_128 = CONCAT71(uStack_397,uStack_398);
  uStack_130 = CONCAT71(uStack_39f,uStack_3a0);
  uStack_138 = CONCAT71(uStack_3a7,uStack_3a8);
  uStack_140 = uStack_3b0;
  uStack_158 = uStack_3c8;
  uStack_160 = uStack_3d0;
  uStack_148 = uStack_3b8;
  uStack_150 = uStack_3c0;
  uStack_120 = 0x3fe03258031ade7c;
  param_1[0xd] = uStack_128;
  param_1[0xc] = uStack_130;
  param_1[0xf] = uVar10;
  param_1[0xe] = 0x3fe03258031ade7c;
  param_1[9] = uStack_3b8;
  param_1[8] = uStack_3c0;
  param_1[0xb] = uStack_138;
  param_1[10] = uStack_3b0;
  uStack_178 = uStack_3e8;
  uStack_180 = uStack_3f0;
  uStack_168 = uStack_3d8;
  uStack_170 = uStack_3e0;
  uStack_188 = uStack_3f8;
  uStack_190 = uStack_400;
  param_1[0x10] = uVar11;
  param_1[1] = uStack_3f8;
  *param_1 = uStack_400;
  param_1[3] = uStack_3e8;
  param_1[2] = uStack_3f0;
  param_1[5] = uStack_3d8;
  param_1[4] = uStack_3e0;
  param_1[7] = uStack_3c8;
  param_1[6] = uStack_3d0;
  uStack_f8 = uStack_3f8;
  uStack_100 = uStack_400;
  uStack_e8 = uStack_3e8;
  uStack_f0 = uStack_3f0;
  uStack_98 = CONCAT71(uStack_397,uStack_398);
  uStack_a0 = CONCAT71(uStack_39f,uStack_3a0);
  uStack_b0 = uStack_3b0;
  uStack_c8 = uStack_3c8;
  uStack_d0 = uStack_3d0;
  uStack_b8 = uStack_3b8;
  uStack_c0 = uStack_3c0;
  uStack_d8 = uStack_3d8;
  uStack_e0 = uStack_3e0;
  uStack_90 = 0x3fe03258031ade7c;
  uStack_110 = uVar11;
  uStack_80 = uVar11;
  FUN_100011090(&uStack_190,&uStack_488,&DAT_100fbb128,&DAT_100c3baa0);
  FUN_100005808(&uStack_100,&DAT_100fbb128,&DAT_100c3baa0);
  puVar9 = &DAT_100fbb130;
  FUN_1000037f0(&DAT_100fbb130,&DAT_100c3baa8);
  iVar2 = *(int *)(puVar9 + 0x24);
  ((undefined8 *)((long)param_1 + (long)iVar2))[1] = 0;
  *(undefined8 *)((long)param_1 + (long)iVar2) = 0x4030000000000000;
  return;
}



/* Address: 0x10029fbf4 | FUN_10029fbf4 */

void FUN_10029fbf4(void)

{
  FUN_1000f3588();
  DAT_100fbada0 = 0x404c000000000000;
  return;
}



/* Address: 0x10029fc14 | FUN_10029fc14 */

void FUN_10029fc14(void)

{
  FUN_1000f3588();
  DAT_100fbaeb0 = 0x402a000000000000;
  return;
}



/* Address: 0x10029fc34 | FUN_10029fc34 */

void FUN_10029fc34(void)

{
  FUN_1000f3588();
  DAT_100fbaf28 = 0x4081800000000000;
  return;
}



/* Address: 0x10029fc58 | FUN_10029fc58 */

void FUN_10029fc58(void)

{
  FUN_1000f3588();
  DAT_100fbaf18 = 0x4036000000000000;
  return;
}



/* Address: 0x10029fc78 | FUN_10029fc78 */

void FUN_10029fc78(void)

{
  FUN_1000f3588();
  DAT_100fbaf58 = 0x4081800000000000;
  return;
}



/* Address: 0x10029fc9c | FUN_10029fc9c */

void FUN_10029fc9c(void)

{
  FUN_1000f3588();
  DAT_100fbaf48 = 0x402e000000000000;
  return;
}



/* Address: 0x10029fcbc | FUN_10029fcbc */

void FUN_10029fcbc(void)

{
  FUN_1000f3588();
  DAT_100fbae40 = 0x4069000000000000;
  return;
}



/* Address: 0x10029fcdc | FUN_10029fcdc */

void FUN_10029fcdc(void)

{
  FUN_1000f3588();
  DAT_100fbadf0 = 0x4038000000000000;
  return;
}



/* Address: 0x10029fcfc | FUN_10029fcfc */

void FUN_10029fcfc(void)

{
  FUN_1000f3588();
  DAT_100fbae08 = 0x4030000000000000;
  return;
}



/* Address: 0x10029fd1c | FUN_10029fd1c */

void FUN_10029fd1c(void)

{
  FUN_1000f3588();
  DAT_100fbae28 = 0x4038000000000000;
  return;
}



/* Address: 0x10029fd3c | FUN_10029fd3c */

void FUN_10029fd3c(void)

{
  FUN_1000f3588();
  DAT_100fbae58 = 0x4038000000000000;
  return;
}



/* Address: 0x10029fd5c | FUN_10029fd5c */

void FUN_10029fd5c(void)

{
  FUN_1000f3588();
  DAT_100fbae70 = 0x4034000000000000;
  return;
}



/* Address: 0x10029fd7c | FUN_10029fd7c */

void FUN_10029fd7c(void)

{
  FUN_1000f3588();
  DAT_100fbae88 = 0x4038000000000000;
  return;
}



/* Address: 0x10029fd9c | FUN_10029fd9c */

void FUN_10029fd9c(void)

{
  FUN_1000f3588();
  DAT_100fbad18 = 0;
  return;
}



/* Address: 0x10029fdb8 | FUN_10029fdb8 */

void FUN_10029fdb8(void)

{
  FUN_1000f3588();
  DAT_100fbad58 = 0x4020000000000000;
  return;
}



/* Address: 0x10029fdd8 | FUN_10029fdd8 */

void FUN_10029fdd8(void)

{
  FUN_1000f3588();
  DAT_100fbacb0 = 0x4030000000000000;
  return;
}



/* Address: 0x10029fdf8 | FUN_10029fdf8 */

void FUN_10029fdf8(void)

{
  FUN_1000f3588();
  DAT_100fbacc8 = 0x4020000000000000;
  return;
}



/* Address: 0x10029fe18 | FUN_10029fe18 */

void FUN_10029fe18(void)

{
  FUN_1000f3588();
  DAT_100fbace0 = 0x4030000000000000;
  return;
}



/* Address: 0x10029fe38 | FUN_10029fe38 */

void FUN_10029fe38(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c3b668;
  _swift_getKeyPath(&DAT_100c3b668);
  puVar2 = &DAT_100c3b690;
  _swift_getKeyPath(&DAT_100c3b690);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10029fea0 | FUN_10029fea0 */

void FUN_10029fea0(Published *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  
  lVar1 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar4 = *param_2;
  puVar2 = &DAT_100c3b668;
  _swift_getKeyPath(&DAT_100c3b668);
  puVar3 = &DAT_100c3b690;
  _swift_getKeyPath(&DAT_100c3b690);
  FUN_1000c495c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                FUN_10025cfc4);
  _swift_retain(uVar4);
  Combine::Published::_set_subscript
            (param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar4,
             puVar2,puVar3);
  return;
}



/* Address: 0x10029ff60 | FUN_10029ff60 */

void FUN_10029ff60(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001fa300();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10029ff88 | FUN_10029ff88 */

void FUN_10029ff88(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_retain(uVar2);
  FUN_1001fa4a8(uVar1,uVar2);
  return;
}



/* Address: 0x10029ffc4 | FUN_10029ffc4 */

void FUN_10029ffc4(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_font(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x10029ffec | FUN_10029ffec */

void FUN_10029ffec(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_font(param_2);
  return;
}



/* Address: 0x1002a0014 | FUN_1002a0014 */

void FUN_1002a0014(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *local_60;
  undefined8 *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  if (DAT_100fbad38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbacf0;
  FUN_100005c24(&DAT_100fbacf0,&DAT_100c3b5d0);
  puVar2 = &DAT_100fb96f8;
  puVar3 = &DAT_100fb90b8;
  FUN_100016eac(&DAT_100fb96f8,&DAT_100fb90b8,&DAT_100c38dd0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  FUN_100005c24(&DAT_100fb90b8,&DAT_100c38dd0);
  puVar4 = &DAT_100fb9c28;
  FUN_100005c24(&DAT_100fb9c28,&DAT_100c39e20);
  puVar5 = puVar4;
  FUN_1002a0100();
  ppuVar6 = &local_50;
  local_50 = puVar3;
  puStack_48 = puVar4;
  local_40 = puVar2;
  puStack_38 = puVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_60 = puVar2;
  puStack_58 = ppuVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_60);
  DAT_100fbad38 = puVar3;
  return;
}



/* Address: 0x1002a0100 | FUN_1002a0100 */

void FUN_1002a0100(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9c28;
  FUN_100005c24(&DAT_100fb9c28,&DAT_100c39e20);
  puVar2 = puVar1;
  FUN_10027b7cc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9c30 = puVar3;
  return;
}



/* Address: 0x1002a0178 | FUN_1002a0178 */

void FUN_1002a0178(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  DateComponents DVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  Product PVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  
  lVar4 = 0;
  FUN_1002994c0();
  lVar16 = *(long *)(lVar4 + -8);
  uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar11 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar11;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x14);
  lVar5 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar5 + 0x14);
  DVar6 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar6.unknown + -8);
  lVar12 = lVar2 + iVar3;
  (**(code **)(lVar14 + 0x30))(lVar12,1,DVar6.unknown);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar14 + 8))(lVar2 + iVar3,DVar6.unknown);
  }
  lVar12 = lVar2 + *(int *)(lVar5 + 0x18);
  lVar7 = 0;
  FUN_1002abbf0();
  lVar8 = lVar12;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(lVar12,1,lVar7);
  if ((int)lVar8 == 0) {
    lVar8 = lVar12;
    _swift_getEnumCaseMultiPayload(lVar12,lVar7);
    iVar3 = (int)lVar8;
    if ((iVar3 == 2) || (iVar3 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 8));
      puVar9 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar14 + 8);
      (*pcVar15)(lVar12 + *(int *)(puVar9 + 0x30),DVar6.unknown);
      (*pcVar15)(lVar12 + *(int *)(puVar9 + 0x40),DVar6.unknown);
    }
    else if (iVar3 == 0) {
      (**(code **)(lVar14 + 8))(lVar12,DVar6.unknown);
    }
  }
  lVar12 = *(long *)(lVar16 + 0x40);
  iVar3 = *(int *)(lVar5 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 8))(lVar2 + iVar3,PVar10.unknown);
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x20));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x20) + 8));
  _swift_deallocObject(unaff_x20,lVar12 + uVar11,uVar13 | 7);
  return;
}



/* Address: 0x1002a0344 | FUN_1002a0344 */

void FUN_1002a0344(void)

{
  FUN_1002a04b8(FUN_10029e3a4);
  return;
}



/* Address: 0x1002a0350 | FUN_1002a0350 */

void FUN_1002a0350(void)

{
  long unaff_x20;
  
  FUN_10029e490(*(undefined8 *)(unaff_x20 + 0x10),0x123);
  return;
}



/* Address: 0x1002a036c | FUN_1002a036c */

void FUN_1002a036c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002994c0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10029e5c0(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1002a03a8 | FUN_1002a03a8 */

void FUN_1002a03a8(void)

{
  FUN_1002a04b8(FUN_10029e1f8);
  return;
}



/* Address: 0x1002a03b4 | FUN_1002a03b4 */

void FUN_1002a03b4(void)

{
  long unaff_x20;
  
  FUN_10029e490(*(undefined8 *)(unaff_x20 + 0x10),0x11d);
  return;
}



/* Address: 0x1002a03d0 | thunk_FUN_10029fe38 */

void thunk_FUN_10029fe38(void)

{
  FUN_10029fe38();
  return;
}



/* Address: 0x1002a03d4 | thunk_FUN_10029fea0 */

void thunk_FUN_10029fea0(void)

{
  FUN_10029fea0();
  return;
}



/* Address: 0x1002a03d8 | FUN_1002a03d8 */

void FUN_1002a03d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1001fa300();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1002a0400 | FUN_1002a0400 */

void FUN_1002a0400(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  _swift_retain(uVar2);
  FUN_1001fa4a8(uVar1,uVar2);
  return;
}



/* Address: 0x1002a043c | FUN_1002a043c */

void FUN_1002a043c(void)

{
  FUN_1002a045c(0x111,FUN_1001abd38);
  return;
}



/* Address: 0x1002a044c | FUN_1002a044c */

void FUN_1002a044c(void)

{
  FUN_1002a045c(0x113,FUN_1001abce4);
  return;
}



/* Address: 0x1002a045c | FUN_1002a045c */

void FUN_1002a045c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002994c0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10029e098(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),param_1,param_2);
  return;
}



/* Address: 0x1002a04ac | FUN_1002a04ac */

void FUN_1002a04ac(void)

{
  FUN_1002a04b8(FUN_10029c6cc);
  return;
}



/* Address: 0x1002a04b8 | FUN_1002a04b8 */

void FUN_1002a04b8(code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002994c0();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001002a04f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1002a04f4 | FUN_1002a04f4 */

void FUN_1002a04f4(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbafc8,&TargetStructDescriptor_100caa884);
  return;
}



/* Address: 0x1002a0508 | FUN_1002a0508 */

void FUN_1002a0508(__int8 *param_1,EnvironmentValues param_2)

{
  TextAlignment TVar1;
  
  TVar1 = SwiftUI::EnvironmentValues::get_multilineTextAlignment(param_2);
  *param_1 = TVar1.value;
  return;
}



/* Address: 0x1002a0530 | FUN_1002a0530 */

void FUN_1002a0530(__int8 *param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_multilineTextAlignment(param_2,(TextAlignment)*param_1);
  return;
}



/* Address: 0x1002a0554 | FUN_1002a0554 */

undefined1  [16] FUN_1002a0554(void)

{
  return ZEXT816(0x100ec6040);
}



/* Address: 0x1002a0564 | FUN_1002a0564 */

long * FUN_1002a0564(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    lVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar5;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    iVar3 = *(int *)(param_3 + 0x18);
    LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    pcVar7 = *(code **)(*(long *)(LVar4.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar1);
    (*pcVar7)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,LVar4.unknown);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002a0614 | FUN_1002a0614 */

void FUN_1002a0614(long param_1,long param_2)

{
  int iVar1;
  LocalizedStringResource LVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001002a065c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(LVar2.unknown + -8) + 8))(param_1 + iVar1,LVar2.unknown);
  return;
}



/* Address: 0x1002a0660 | FUN_1002a0660 */

undefined8 * FUN_1002a0660(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  code *pcVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  iVar3 = *(int *)(param_3 + 0x18);
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  pcVar5 = *(code **)(*(long *)(LVar4.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar5)((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,LVar4.unknown);
  return param_1;
}



/* Address: 0x1002a06e4 | FUN_1002a06e4 */

undefined8 * FUN_1002a06e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  LocalizedStringResource LVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x18);
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (**(code **)(*(long *)(LVar2.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,LVar2.unknown);
  return param_1;
}



/* Address: 0x1002a0778 | FUN_1002a0778 */

undefined8 * FUN_1002a0778(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  LocalizedStringResource LVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  iVar1 = *(int *)(param_3 + 0x18);
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (**(code **)(*(long *)(LVar2.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,LVar2.unknown);
  return param_1;
}



/* Address: 0x1002a07d0 | FUN_1002a07d0 */

undefined8 * FUN_1002a07d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  LocalizedStringResource LVar4;
  
  uVar1 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  iVar2 = *(int *)(param_3 + 0x18);
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (**(code **)(*(long *)(LVar4.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,LVar4.unknown);
  return param_1;
}



/* Address: 0x1002a0844 | FUN_1002a0844 */

void FUN_1002a0844(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002a0850 | FUN_1002a0850 */

ulong FUN_1002a0850(long param_1,undefined8 param_2,long param_3)

{
  LocalizedStringResource LVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001002a08c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(LVar1.unknown + -8) + 0x30))(uVar2,param_2,LVar1.unknown);
  return uVar2;
}



/* Address: 0x1002a08cc | FUN_1002a08cc */

void FUN_1002a08cc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002a08d8 | FUN_1002a08d8 */

void FUN_1002a08d8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  LocalizedStringResource LVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001002a0948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(LVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,LVar1.unknown);
  return;
}



/* Address: 0x1002a094c | FUN_1002a094c */

undefined1  [16] FUN_1002a094c(long param_1,ulong param_2)

{
  LocalizedStringResource LVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c3b4f8;
  puStack_30 = &DAT_100c3b4f8;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(LVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
    LVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = LVar1.unknown;
  return auVar3;
}



/* Address: 0x1002a09c0 | thunk_FUN_1002a09c4 */

void thunk_FUN_1002a09c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fbb008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbac90;
  FUN_100005c24(&DAT_100fbac90,&DAT_100c3b5a0);
  puVar2 = puVar1;
  FUN_1002a0a5c();
  puVar3 = &DAT_100fbb030;
  FUN_100016eac(&DAT_100fbb030,&DAT_100fbac98,&DAT_100c3b5a8,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fbb008 = puVar4;
  return;
}



/* Address: 0x1002a09c4 | FUN_1002a09c4 */

void FUN_1002a09c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb008 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbac90;
  FUN_100005c24(&DAT_100fbac90,&DAT_100c3b5a0);
  puVar2 = puVar1;
  FUN_1002a0a5c();
  puVar3 = &DAT_100fbb030;
  FUN_100016eac(&DAT_100fbb030,&DAT_100fbac98,&DAT_100c3b5a8,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb008 = puVar4;
  return;
}



/* Address: 0x1002a0a5c | FUN_1002a0a5c */

void FUN_1002a0a5c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbac88;
  FUN_100005c24(&DAT_100fbac88,&DAT_100c3b598);
  puVar2 = &DAT_100fbb018;
  FUN_100016eac(&DAT_100fbb018,&DAT_100fbac80,&DAT_100c3b590,
                &TargetProtocolConformanceDescriptor_100c3cd20);
  puVar3 = &DAT_100fbb020;
  FUN_100016eac(&DAT_100fbb020,&DAT_100fbb028,&DAT_100c3b868,
                PTR_SwiftUI__SwiftUI___GeometryActionModifier<undefined>_>SwiftUI__ViewModifier_100eaaf78
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb010 = puVar4;
  return;
}



/* Address: 0x1002a0b14 | FUN_1002a0b14 */

void FUN_1002a0b14(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa8f8,1);
  return;
}



/* Address: 0x1002a0b24 | FUN_1002a0b24 */

void FUN_1002a0b24(void)

{
  FUN_100016eac(&DAT_100fbb038,&DAT_100fbb040,&DAT_100c3b8c0,
                PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100eaa5d8);
  return;
}


