/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10044fbe0 | FUN_10044fbe0 */

void FUN_10044fbe0(void)

{
  undefined1 *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar6 = (char *)0x6e6f6973726576;
  puVar1 = (undefined1 *)0x8000000100da69b0;
  pcVar3 = (char *)0xd000000000000019;
  if (bVar2 != 3) {
    puVar1 = (undefined1 *)0xef74736567694464;
    pcVar3 = (char *)0x6574707972636e65;
  }
  HVar5.unknown = (undefined1 *)0xef6d687469726f67;
  pcVar4 = (char *)0x6c41747365676964;
  if (bVar2 != 2) {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar3;
  }
  if (bVar2 != 0) {
    pcVar6 = (char *)0xd000000000000010;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar2 != 0) {
    puVar1 = (undefined1 *)0x8000000100da6990;
  }
  if (bVar2 < 2) {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar6;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044fce8 | FUN_10044fce8 */

undefined1  [16] FUN_10044fce8(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  uVar6 = 0x6e6f6973726576;
  puVar1 = (undefined1 *)0x8000000100da69b0;
  uVar4 = 0xd000000000000019;
  if (bVar3 != 3) {
    puVar1 = (undefined1 *)0xef74736567694464;
    uVar4 = 0x6574707972636e65;
  }
  puVar2 = (undefined1 *)0xef6d687469726f67;
  uVar5 = 0x6c41747365676964;
  if (bVar3 != 2) {
    puVar2 = puVar1;
    uVar5 = uVar4;
  }
  if (bVar3 != 0) {
    uVar6 = 0xd000000000000010;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar1 = (undefined1 *)0x8000000100da6990;
  }
  if (bVar3 < 2) {
    puVar2 = puVar1;
    uVar5 = uVar6;
  }
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Address: 0x10044fdac | FUN_10044fdac */

void FUN_10044fdac(undefined1 *param_1,undefined1 param_2)

{
  FUN_100454250();
  *param_1 = param_2;
  return;
}



/* Address: 0x10044fdd0 | FUN_10044fdd0 */

String FUN_10044fdd0(void)

{
  String SVar1;
  
  FUN_1004532c0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044fdf8 | FUN_10044fdf8 */

String FUN_10044fdf8(void)

{
  String SVar1;
  
  FUN_1004532c0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10044fe20 | FUN_10044fe20 */

void FUN_10044fe20(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100450ad0(&local_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    param_1[8] = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x10044fe70 | FUN_10044fe70 */

undefined1 * FUN_10044fe70(undefined1 param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  FUN_10044add8();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar8 = (ulong *)(lVar2 + 0x10);
  *puVar8 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_beginAccess(puVar8,auStack_48,0x21,0);
  *puVar8 = (ulong)puVar1;
  uVar3 = 0;
  FUN_10044c504(0,1,1,puVar1);
  *puVar8 = uVar3;
  uVar5 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10044c504(uVar3,uVar5 + 1,1);
  }
  *(ulong *)(uVar3 + 0x10) = uVar5 + 1;
  *(undefined1 *)(uVar3 + uVar5 + 0x20) = param_1;
  *(ulong *)(lVar2 + 0x10) = uVar3;
  puVar4 = auStack_48;
  _swift_endAccess();
  FUN_10044ac88();
  _swift_retain();
  _swift_release(lVar2);
  _swift_beginAccess(puVar4 + 0x10,auStack_48,0x21,0);
  uVar7 = *(ulong *)(puVar4 + 0x10);
  uVar5 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(puVar4 + 0x10) = uVar7;
  uVar3 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
    FUN_10044c504(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    *(ulong *)(puVar4 + 0x10) = uVar3;
  }
  uVar5 = *(ulong *)(uVar3 + 0x10);
  uVar7 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10044c504(uVar7,uVar5 + 1,1,uVar3);
  }
  *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
  *(undefined1 *)(uVar7 + uVar5 + 0x20) = 0x10;
  *(ulong *)(puVar4 + 0x10) = uVar7;
  puVar6 = auStack_48;
  _swift_endAccess(puVar6);
  FUN_10044ac88();
  _swift_retain();
  _swift_release(puVar4);
  return puVar6;
}



/* Address: 0x100450004 | FUN_100450004 */

/* WARNING: Removing unreachable block (ram,0x000100450158) */
/* WARNING: Removing unreachable block (ram,0x0001004500c0) */

String FUN_100450004(long param_1)

{
  undefined *puVar1;
  long lVar3;
  long unaff_x21;
  long lVar4;
  String SVar5;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  char *pcVar2;
  
  puVar1 = &DAT_100fc76b8;
  FUN_1000f7830(&DAT_100fc76b8,&DAT_100c4b8f8);
  lVar4 = *(long *)(puVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  SVar5.bridgeObject = *(void **)(param_1 + 0x18);
  SVar5.str = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(void **)(param_1 + 0x18));
  FUN_100453478();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar5 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar5.str;
    local_52 = 1;
    FUN_10044b6a4();
    Swift::KeyedDecodingContainer::_decode(&DAT_100ed5690,&local_52,puVar1,&DAT_100ed5690,pcVar2);
    (**(code **)(lVar4 + 8))(auStack_60 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return SVar5;
}



/* Address: 0x100450164 | FUN_100450164 */

undefined1 * FUN_100450164(undefined1 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined1 auStack_48 [24];
  
  lVar3 = 0;
  FUN_10044add8();
  _swift_allocObject();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = (ulong *)(lVar3 + 0x10);
  *puVar6 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_beginAccess(puVar6,auStack_48,0x21,0);
  *puVar6 = (ulong)puVar2;
  uVar4 = 0;
  FUN_10044c504(0,1,1,puVar2);
  *puVar6 = uVar4;
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_10044c504(uVar4,uVar1 + 1,1);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar4 + uVar1 + 0x20) = param_1;
  *(ulong *)(lVar3 + 0x10) = uVar4;
  puVar5 = auStack_48;
  _swift_endAccess(puVar5);
  FUN_10044ac88();
  _swift_retain();
  _swift_release(lVar3);
  return puVar5;
}



/* Address: 0x100450248 | FUN_100450248 */

/* WARNING: Removing unreachable block (ram,0x0001004504c0) */
/* WARNING: Removing unreachable block (ram,0x0001004503dc) */
/* WARNING: Removing unreachable block (ram,0x000100450448) */
/* WARNING: Removing unreachable block (ram,0x000100450460) */
/* WARNING: Removing unreachable block (ram,0x000100450474) */
/* WARNING: Removing unreachable block (ram,0x0001004504ec) */
/* WARNING: Removing unreachable block (ram,0x000100450508) */
/* WARNING: Removing unreachable block (ram,0x00010045035c) */

void FUN_100450248(ulong *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  ulong local_260;
  ulong uStack_258;
  ulong local_250;
  ulong uStack_248;
  undefined1 local_240 [128];
  ulong local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  ulong local_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined1 local_139;
  ulong local_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong local_78;
  
  puVar1 = &DAT_100fc76c8;
  FUN_1000f7830(&DAT_100fc76c8,&DAT_100c4b900);
  lVar6 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004534b8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_1c0 = local_1c0 & 0xffffffffffffff00;
    local_f0 = Swift::KeyedDecodingContainer::_decode(&local_1c0,puVar1);
    uVar2 = (ulong)local_f0;
    local_240[0] = 1;
    FUN_100451c50();
    puVar3 = &DAT_100ed5cf8;
    Swift::KeyedDecodingContainer::_decode
              (&local_1c0,&DAT_100ed5cf8,local_240,puVar1,&DAT_100ed5cf8,uVar2);
    uStack_e8 = local_1c0;
    local_240[0] = 2;
    FUN_100451cb4();
    puVar4 = &DAT_100ed5df8;
    Swift::KeyedDecodingContainer::_decode
              (&local_1c0,&DAT_100ed5df8,local_240,puVar1,&DAT_100ed5df8,puVar3);
    local_260 = local_1c0;
    uStack_258 = uStack_1b8;
    local_e0 = local_1c0;
    uStack_d8 = uStack_1b8;
    local_250 = local_1b0;
    uStack_248 = uStack_1a8;
    local_d0 = local_1b0;
    uStack_c8 = uStack_1a8;
    local_240[0] = 3;
    FUN_100451de0();
    puVar3 = &DAT_100ed5f40;
    Swift::KeyedDecodingContainer::_decode
              (&local_1c0,&DAT_100ed5f40,local_240,puVar1,&DAT_100ed5f40,puVar4);
    local_c0 = local_1c0;
    local_139 = 4;
    FUN_100451e44();
    Swift::KeyedDecodingContainer::_decode
              (&local_138,&DAT_100ed5fc0,&local_139,puVar1,&DAT_100ed5fc0,puVar3);
    (**(code **)(lVar6 + 8))((long)&local_260 - (lVar5 + 0xfU & 0xfffffffffffffff0),puVar1);
    uStack_b0 = uStack_130;
    local_b8 = local_138;
    uStack_a0 = uStack_120;
    uStack_a8 = uStack_128;
    uStack_90 = uStack_110;
    local_98 = local_118;
    uStack_80 = uStack_100;
    uStack_88 = uStack_108;
    local_78 = local_f8;
    local_1c0 = CONCAT44(uStack_ec,local_f0);
    uStack_1b8 = uStack_e8;
    uStack_1a8 = uStack_d8;
    local_1b0 = local_e0;
    uStack_178 = uStack_128;
    local_180 = uStack_130;
    uStack_168 = local_118;
    uStack_170 = uStack_120;
    uStack_158 = uStack_108;
    local_160 = uStack_110;
    uStack_148 = local_f8;
    uStack_150 = uStack_100;
    uStack_198 = uStack_c8;
    local_1a0 = local_d0;
    uStack_188 = local_138;
    uStack_190 = local_c0;
    FUN_1004519b8(&local_1c0,local_240);
    FUN_100004594(param_2);
    FUN_1004534f8(&local_f0);
    param_1[9] = uStack_178;
    param_1[8] = local_180;
    param_1[0xb] = uStack_168;
    param_1[10] = uStack_170;
    param_1[0xd] = uStack_158;
    param_1[0xc] = local_160;
    param_1[0xf] = uStack_148;
    param_1[0xe] = uStack_150;
    param_1[1] = uStack_1b8;
    *param_1 = local_1c0;
    param_1[3] = uStack_1a8;
    param_1[2] = local_1b0;
    param_1[5] = uStack_198;
    param_1[4] = local_1a0;
    param_1[7] = uStack_188;
    param_1[6] = uStack_190;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004505a0 | FUN_1004505a0 */

/* WARNING: Removing unreachable block (ram,0x00010045080c) */
/* WARNING: Removing unreachable block (ram,0x0001004507a8) */
/* WARNING: Removing unreachable block (ram,0x00010045081c) */
/* WARNING: Removing unreachable block (ram,0x000100450838) */
/* WARNING: Removing unreachable block (ram,0x000100450840) */
/* WARNING: Removing unreachable block (ram,0x000100450720) */
/* WARNING: Removing unreachable block (ram,0x000100450844) */

void FUN_1004505a0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_320 [8];
  long local_318;
  undefined1 local_310 [160];
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
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  undefined1 local_1c1;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1a9;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 auStack_138 [24];
  undefined8 local_120;
  long local_118;
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
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  
  puVar1 = &DAT_100fc7698;
  FUN_1000f7830(&DAT_100fc7698,&DAT_100c4b8e8);
  lVar5 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  FUN_100076688(param_2,&local_270);
  puVar2 = &DAT_100fc7688;
  FUN_1000f7830(&DAT_100fc7688,&DAT_100c4b8d8);
  puVar3 = &DAT_100fc7690;
  FUN_1000f7830(&DAT_100fc7690,&DAT_100c4b8e0);
  _swift_dynamicCast(auStack_138,&local_270,puVar2,puVar3,7);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100453398();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_318 = lVar5;
    FUN_100004640(auStack_138,local_120);
    (**(code **)(local_118 + 0x10))();
    local_1a9 = 0;
    local_80 = local_120;
    lStack_78 = local_118;
    FUN_100451d7c();
    puVar2 = &DAT_100ed5f00;
    Swift::KeyedDecodingContainer::_decode
              (&local_1a8,&DAT_100ed5f00,&local_1a9,puVar1,&DAT_100ed5f00,local_120);
    uStack_c8 = uStack_160;
    local_d0 = local_168;
    uStack_b8 = uStack_150;
    uStack_c0 = uStack_158;
    uStack_a8 = uStack_140;
    local_b0 = local_148;
    uStack_108 = uStack_1a0;
    local_110 = local_1a8;
    uStack_f8 = uStack_190;
    uStack_100 = uStack_198;
    uStack_e8 = uStack_180;
    local_f0 = local_188;
    uStack_d8 = uStack_170;
    uStack_e0 = uStack_178;
    local_310[0] = 1;
    FUN_10044b640();
    puVar3 = &DAT_100ed5668;
    Swift::KeyedDecodingContainer::_decode
              (&local_270,&DAT_100ed5668,local_310,puVar1,&DAT_100ed5668,puVar2);
    uStack_98 = uStack_268;
    local_a0 = local_270;
    local_1c1 = 2;
    FUN_10044bb34();
    Swift::KeyedDecodingContainer::_decode
              (&local_1c0,PTR___type_metadata_for_Foundation_Data_100ea7300,&local_1c1,puVar1,
               PTR___type_metadata_for_Foundation_Data_100ea7300,puVar3);
    (**(code **)(local_318 + 8))(auStack_320 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar1);
    uStack_88 = uStack_1b8;
    local_90 = local_1c0;
    FUN_100004594(auStack_138);
    uStack_208 = uStack_a8;
    local_210 = local_b0;
    uStack_1f8 = uStack_98;
    uStack_200 = local_a0;
    uStack_1e8 = uStack_88;
    local_1f0 = local_90;
    lStack_1d8 = lStack_78;
    uStack_1e0 = local_80;
    uStack_248 = uStack_e8;
    local_250 = local_f0;
    uStack_238 = uStack_d8;
    uStack_240 = uStack_e0;
    uStack_228 = uStack_c8;
    local_230 = local_d0;
    uStack_218 = uStack_b8;
    uStack_220 = uStack_c0;
    uStack_268 = uStack_108;
    local_270 = local_110;
    uStack_258 = uStack_f8;
    uStack_260 = uStack_100;
    FUN_1004533d8(&local_270,local_310);
    FUN_100004594(param_2);
    FUN_10045340c(&local_110);
    param_1[0xd] = uStack_208;
    param_1[0xc] = local_210;
    param_1[0xf] = uStack_1f8;
    param_1[0xe] = uStack_200;
    param_1[0x11] = uStack_1e8;
    param_1[0x10] = local_1f0;
    param_1[0x13] = lStack_1d8;
    param_1[0x12] = uStack_1e0;
    param_1[5] = uStack_248;
    param_1[4] = local_250;
    param_1[7] = uStack_238;
    param_1[6] = uStack_240;
    param_1[9] = uStack_228;
    param_1[8] = local_230;
    param_1[0xb] = uStack_218;
    param_1[10] = uStack_220;
    param_1[1] = uStack_268;
    *param_1 = local_270;
    param_1[3] = uStack_258;
    param_1[2] = uStack_260;
  }
  else {
    FUN_100004594(auStack_138);
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100450904 | FUN_100450904 */

/* WARNING: Removing unreachable block (ram,0x000100450a78) */
/* WARNING: Removing unreachable block (ram,0x0001004509e0) */

undefined8 FUN_100450904(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  long lVar4;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar2 = &DAT_100fc76a8;
  FUN_1000f7830(&DAT_100fc76a8,&DAT_100c4b8f0);
  lVar6 = *(long *)(puVar2 + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar5);
  FUN_100453438();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    FUN_10044b640();
    Swift::KeyedDecodingContainer::_decode
              (&local_70,&DAT_100ed5668,&local_51,puVar2,&DAT_100ed5668,KVar3.unknown);
    uVar1 = uStack_68;
    uVar5 = local_70;
    local_51 = 1;
    Swift::KeyedDecodingContainer::_decode
              (&local_70,&DAT_100ed5668,&local_51,puVar2,&DAT_100ed5668,KVar3.unknown);
    (**(code **)(lVar6 + 8))((long)&local_70 - (lVar4 + 0xfU & 0xfffffffffffffff0),puVar2);
    FUN_1001037b4(uVar5,uVar1);
    FUN_1001037b4(local_70,uStack_68);
    FUN_100004594(param_1);
    FUN_10003bf2c(uVar5,uVar1);
    FUN_10003bf2c(local_70,uStack_68);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5;
}



/* Address: 0x100450ad0 | FUN_100450ad0 */

/* WARNING: Removing unreachable block (ram,0x000100450d84) */
/* WARNING: Removing unreachable block (ram,0x000100450c74) */
/* WARNING: Removing unreachable block (ram,0x000100450cec) */
/* WARNING: Removing unreachable block (ram,0x000100450d0c) */
/* WARNING: Removing unreachable block (ram,0x000100450d28) */
/* WARNING: Removing unreachable block (ram,0x000100450dc8) */
/* WARNING: Removing unreachable block (ram,0x000100450bdc) */
/* WARNING: Removing unreachable block (ram,0x000100450be0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100450b8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100450ad0(ulong *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  undefined1 local_168 [72];
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined1 local_d1;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  
  puVar1 = &DAT_100fc7668;
  FUN_1000f7830(&DAT_100fc7668,&DAT_100c4b8c8);
  lVar5 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004532c0();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_120 = local_120 & 0xffffffffffffff00;
    uVar2 = Swift::KeyedDecodingContainer::_decode(puVar1,puVar1);
    local_168[0] = 1;
    local_b8 = uVar2;
    FUN_10044b640();
    Swift::KeyedDecodingContainer::_decode
              (&local_120,&DAT_100ed5668,local_168,puVar1,&DAT_100ed5668,uVar2);
    uStack_b0 = local_120;
    local_a8 = uStack_118;
    local_170 = uStack_118;
    local_168[0] = 2;
    Swift::KeyedDecodingContainer::_decode
              (&local_120,&DAT_100ed5668,local_168,puVar1,&DAT_100ed5668,uVar2);
    local_180 = local_120;
    uStack_a0 = local_120;
    local_98 = uStack_118;
    local_178 = uStack_118;
    local_168[0] = 3;
    puVar3 = &DAT_100ed5668;
    Swift::KeyedDecodingContainer::_decode
              (&local_120,&DAT_100ed5668,local_168,puVar1,&DAT_100ed5668,uVar2);
    uStack_90 = local_120;
    uStack_88 = uStack_118;
    local_d1 = 4;
    FUN_10044bb34();
    Swift::KeyedDecodingContainer::_decode
              (&local_d0,PTR___type_metadata_for_Foundation_Data_100ea7300,&local_d1,puVar1,
               PTR___type_metadata_for_Foundation_Data_100ea7300,puVar3);
    (**(code **)(lVar5 + 8))((long)&local_180 - (lVar4 + 0xfU & 0xfffffffffffffff0),puVar1);
    uStack_78 = uStack_c8;
    local_80 = local_d0;
    uStack_118 = uStack_b0;
    local_120 = local_b8;
    uStack_108 = uStack_a0;
    local_110 = local_a8;
    uStack_f8 = uStack_90;
    local_100 = local_98;
    uStack_e8 = local_d0;
    local_f0 = uStack_88;
    local_e0 = uStack_c8;
    FUN_1004519ec(&local_120,local_168);
    FUN_100004594(param_2);
    FUN_100453300(&local_b8);
    param_1[5] = uStack_f8;
    param_1[4] = local_100;
    param_1[7] = uStack_e8;
    param_1[6] = local_f0;
    param_1[8] = local_e0;
    param_1[1] = uStack_118;
    *param_1 = local_120;
    param_1[3] = uStack_108;
    param_1[2] = local_110;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100450e54 | FUN_100450e54 */

/* WARNING: Removing unreachable block (ram,0x000100451160) */
/* WARNING: Removing unreachable block (ram,0x00010045112c) */
/* WARNING: Removing unreachable block (ram,0x000100451078) */
/* WARNING: Removing unreachable block (ram,0x000100450f98) */
/* WARNING: Removing unreachable block (ram,0x000100450f9c) */
/* WARNING: Removing unreachable block (ram,0x000100451018) */
/* WARNING: Removing unreachable block (ram,0x0001004510d8) */
/* WARNING: Removing unreachable block (ram,0x000100451144) */
/* WARNING: Removing unreachable block (ram,0x00010045114c) */
/* WARNING: Removing unreachable block (ram,0x000100451180) */
/* WARNING: Removing unreachable block (ram,0x000100451190) */
/* WARNING: Removing unreachable block (ram,0x000100451198) */
/* WARNING: Removing unreachable block (ram,0x000100451164) */
/* WARNING: Removing unreachable block (ram,0x000100451174) */
/* WARNING: Removing unreachable block (ram,0x00010045119c) */
/* WARNING: Removing unreachable block (ram,0x0001004511a0) */
/* WARNING: Removing unreachable block (ram,0x000100450f24) */
/* WARNING: Removing unreachable block (ram,0x000100450fa0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100450f1c */
/* WARNING: Removing unreachable block (ram,0x000100451254) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100450e54(ulong *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  undefined1 local_240 [8];
  ulong local_238;
  ulong local_230;
  ulong local_228;
  ulong uStack_220;
  ulong local_218;
  ulong local_210;
  ulong uStack_208;
  undefined1 local_1f0 [112];
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  undefined1 auStack_100 [24];
  ulong local_e8;
  ulong uStack_e0;
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uStack_80;
  ulong local_78;
  ulong uStack_70;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc7678;
  FUN_1000f7830(&DAT_100fc7678,&DAT_100c4b8d0);
  lVar6 = *(long *)(puVar1 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10045332c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_180 = local_180 & 0xffffffffffffff00;
    local_d8 = Swift::KeyedDecodingContainer::_decode(puVar1,puVar1);
    local_180 = CONCAT71(local_180._1_7_,1);
    uVar2 = Swift::KeyedDecodingContainer::_decode(local_d8,puVar1);
    local_1f0[0] = 2;
    uStack_d0 = uVar2;
    FUN_10044b640();
    Swift::KeyedDecodingContainer::_decode
              (&local_180,&DAT_100ed5668,local_1f0,puVar1,&DAT_100ed5668,uVar2);
    local_210 = local_180;
    uStack_208 = uStack_178;
    local_c8 = local_180;
    uStack_c0 = uStack_178;
    local_1f0[0] = 3;
    Swift::KeyedDecodingContainer::_decode
              (&local_180,&DAT_100ed5668,local_1f0,puVar1,&DAT_100ed5668,uVar2);
    local_228 = local_180;
    uStack_220 = uStack_178;
    local_b8 = local_180;
    uStack_b0 = uStack_178;
    local_1f0[0] = 4;
    Swift::KeyedDecodingContainer::_decode
              (&local_180,&DAT_100ed5668,local_1f0,puVar1,&DAT_100ed5668,uVar2);
    local_238 = local_180;
    local_230 = uStack_178;
    local_a8 = local_180;
    uStack_a0 = uStack_178;
    local_1f0[0] = 5;
    Swift::KeyedDecodingContainer::_decode
              (&local_180,&DAT_100ed5668,local_1f0,puVar1,&DAT_100ed5668,uVar2);
    local_98 = local_180;
    uStack_90 = uStack_178;
    local_218 = uStack_178;
    local_1f0[0] = 6;
    Swift::KeyedDecodingContainer::_superDecoder(&local_180,local_1f0,puVar1);
    puVar3 = &DAT_100fc7688;
    FUN_1000f7830(&DAT_100fc7688,&DAT_100c4b8d8);
    puVar4 = &DAT_100fc7690;
    FUN_1000f7830(&DAT_100fc7690,&DAT_100c4b8e0);
    _swift_dynamicCast(auStack_100,&local_180,puVar3,puVar4,7);
    FUN_100004640(auStack_100,local_e8);
    (**(code **)(uStack_e0 + 0x10))();
    local_51 = 7;
    local_88 = local_e8;
    uStack_80 = uStack_e0;
    Swift::KeyedDecodingContainer::_decode
              (&local_110,&DAT_100ed5668,&local_51,puVar1,&DAT_100ed5668,uVar2);
    (**(code **)(lVar6 + 8))(local_240 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar1);
    uStack_70 = uStack_108;
    local_78 = local_110;
    FUN_100004594(auStack_100);
    uStack_138 = uStack_90;
    local_140 = local_98;
    uStack_128 = uStack_80;
    uStack_130 = local_88;
    uStack_118 = uStack_70;
    local_120 = local_78;
    uStack_178 = uStack_d0;
    local_180 = local_d8;
    uStack_168 = uStack_c0;
    uStack_170 = local_c8;
    uStack_158 = uStack_b0;
    local_160 = local_b8;
    uStack_148 = uStack_a0;
    uStack_150 = local_a8;
    FUN_100451a54(&local_180,local_1f0);
    FUN_100004594(param_2);
    FUN_10045336c(&local_d8);
    param_1[9] = uStack_138;
    param_1[8] = local_140;
    param_1[0xb] = uStack_128;
    param_1[10] = uStack_130;
    param_1[0xd] = uStack_118;
    param_1[0xc] = local_120;
    param_1[1] = uStack_178;
    *param_1 = local_180;
    param_1[3] = uStack_168;
    param_1[2] = uStack_170;
    param_1[5] = uStack_158;
    param_1[4] = local_160;
    param_1[7] = uStack_148;
    param_1[6] = uStack_150;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10045133c | FUN_10045133c */

/* WARNING: Removing unreachable block (ram,0x0001004514a0) */
/* WARNING: Removing unreachable block (ram,0x000100451420) */

void FUN_10045133c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_2b0 [8];
  undefined8 *local_2a8;
  undefined1 local_2a0 [144];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
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
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc76d8;
  local_2a8 = param_1;
  FUN_1000f7830(&DAT_100fc76d8,&DAT_100c4b908);
  lVar5 = *(long *)(puVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100453524();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_2a0[0] = 0;
    FUN_10044b640();
    puVar3 = &DAT_100ed5668;
    Swift::KeyedDecodingContainer::_decode
              (&local_210,&DAT_100ed5668,local_2a0,puVar1,&DAT_100ed5668,KVar2.unknown);
    local_f8 = local_210;
    uStack_f0 = uStack_208;
    local_51 = 1;
    FUN_100451b88();
    Swift::KeyedDecodingContainer::_decode
              (&local_178,&DAT_100ed5cc0,&local_51,puVar1,&DAT_100ed5cc0,puVar3);
    (**(code **)(lVar5 + 8))(auStack_2b0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar1);
    uStack_d0 = uStack_160;
    local_d8 = local_168;
    uStack_e0 = uStack_170;
    local_e8 = local_178;
    uStack_90 = uStack_120;
    local_98 = local_128;
    uStack_a0 = uStack_130;
    local_a8 = local_138;
    uStack_80 = uStack_110;
    local_88 = local_118;
    uStack_70 = uStack_100;
    local_78 = local_108;
    uStack_c0 = uStack_150;
    local_c8 = local_158;
    uStack_b0 = uStack_140;
    local_b8 = local_148;
    uStack_1e8 = uStack_160;
    local_1f0 = local_168;
    uStack_1d8 = uStack_150;
    uStack_1e0 = local_158;
    uStack_1c8 = uStack_140;
    local_1d0 = local_148;
    uStack_1b8 = uStack_130;
    uStack_1c0 = local_138;
    uStack_1a8 = uStack_120;
    local_1b0 = local_128;
    uStack_198 = uStack_110;
    uStack_1a0 = local_118;
    uStack_208 = uStack_f0;
    local_210 = local_f8;
    uStack_1f8 = uStack_170;
    uStack_200 = local_178;
    uStack_188 = uStack_100;
    local_190 = local_108;
    FUN_100453564(&local_210,local_2a0);
    FUN_100004594(param_2);
    FUN_100453598(&local_f8);
    local_2a8[0xd] = uStack_1a8;
    local_2a8[0xc] = local_1b0;
    local_2a8[0xf] = uStack_198;
    local_2a8[0xe] = uStack_1a0;
    local_2a8[0x11] = uStack_188;
    local_2a8[0x10] = local_190;
    local_2a8[5] = uStack_1e8;
    local_2a8[4] = local_1f0;
    local_2a8[7] = uStack_1d8;
    local_2a8[6] = uStack_1e0;
    local_2a8[9] = uStack_1c8;
    local_2a8[8] = local_1d0;
    local_2a8[0xb] = uStack_1b8;
    local_2a8[10] = uStack_1c0;
    local_2a8[1] = uStack_208;
    *local_2a8 = local_210;
    local_2a8[3] = uStack_1f8;
    local_2a8[2] = uStack_200;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10045159c | FUN_10045159c */

/* WARNING: Removing unreachable block (ram,0x000100451794) */

undefined * FUN_10045159c(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  
  puVar5 = *(undefined **)(param_1 + 0x18);
  FUN_100004640(param_1,puVar5);
  Swift::Decoder::_unkeyedContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_98,local_80);
    bVar2 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    while (!bVar2) {
      FUN_10007d048(auStack_98,local_80);
      FUN_100451d18();
      Swift::UnkeyedDecodingContainer::_decode();
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_10044c954(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_10044c954(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x28) = uStack_130;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x20) = local_138;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x38) = uStack_120;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x30) = uStack_128;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x68) = uStack_f0;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x60) = local_f8;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x78) = uStack_e0;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x70) = uStack_e8;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x48) = uStack_110;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x40) = local_118;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x58) = uStack_100;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x50) = uStack_108;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0xa8) = uStack_b0;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0xa0) = local_b8;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0xb8) = uStack_a0;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0xb0) = uStack_a8;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x88) = uStack_d0;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x80) = local_d8;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x98) = uStack_c0;
      *(undefined8 *)(puVar5 + uVar1 * 0xa0 + 0x90) = uStack_c8;
      FUN_100004640(auStack_98,local_80);
      bVar2 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
    }
    FUN_100004594(auStack_98);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return puVar5;
}



/* Address: 0x1004517a8 | FUN_1004517a8 */

/* WARNING: Removing unreachable block (ram,0x000100451940) */

undefined * FUN_1004517a8(long param_1)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x21;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  
  puVar5 = *(undefined **)(param_1 + 0x18);
  FUN_100004640(param_1,puVar5);
  Swift::Decoder::_unkeyedContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_78,local_60);
    bVar2 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    while (!bVar2) {
      FUN_10007d048(auStack_78,local_60);
      FUN_100451bec();
      Swift::UnkeyedDecodingContainer::_decode();
      puVar3 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar4 = puVar5;
      if (((ulong)puVar3 & 1) == 0) {
        puVar4 = (undefined *)0x0;
        FUN_10044ca70(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
      }
      uVar1 = *(ulong *)(puVar4 + 0x10);
      puVar5 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_10044ca70(puVar5,uVar1 + 1,1,puVar4);
      }
      *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x20) = local_88;
      *(undefined8 *)(puVar5 + uVar1 * 0x10 + 0x28) = uStack_80;
      FUN_100004640(auStack_78,local_60);
      bVar2 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
    }
    FUN_100004594(auStack_78);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return puVar5;
}



/* Address: 0x100451954 | FUN_100451954 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100451990 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100451954(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fc7800,&DAT_100c4b910);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Address: 0x1004519b8 | FUN_1004519b8 */

undefined8 FUN_1004519b8(undefined8 param_1,undefined8 param_2)

{
  FUN_100452308(param_2,param_1,&DAT_100ed5cc0);
  return param_2;
}



/* Address: 0x1004519ec | FUN_1004519ec */

undefined8 FUN_1004519ec(undefined8 param_1,undefined8 param_2)

{
  FUN_100453064(param_2,param_1,&DAT_100ed5fc0);
  return param_2;
}



/* Address: 0x100451a20 | FUN_100451a20 */

undefined8 FUN_100451a20(undefined8 param_1,undefined8 param_2)

{
  FUN_10045318c(param_2,param_1,&DAT_100ed5fc0);
  return param_2;
}



/* Address: 0x100451a54 | FUN_100451a54 */

undefined8 FUN_100451a54(undefined8 param_1,undefined8 param_2)

{
  FUN_100452d0c(param_2,param_1,&DAT_100ed5f00);
  return param_2;
}



/* Address: 0x100451a88 | FUN_100451a88 */

undefined8 FUN_100451a88(undefined8 param_1,undefined8 param_2)

{
  FUN_100452ec0(param_2,param_1,&DAT_100ed5f00);
  return param_2;
}



/* Address: 0x100451abc | thunk_FUN_100451ac0 */

void thunk_FUN_100451ac0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c4b51c;
  _swift_getWitnessTable(&DAT_100c4b51c,&DAT_100ed5bc8);
  DAT_100fc7618 = puVar1;
  return;
}



/* Address: 0x100451ac0 | FUN_100451ac0 */

void FUN_100451ac0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c4b51c;
  _swift_getWitnessTable(&DAT_100c4b51c,&DAT_100ed5bc8);
  DAT_100fc7618 = puVar1;
  return;
}



/* Address: 0x100451b00 | FUN_100451b00 */

void FUN_100451b00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451b24();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451b24 | FUN_100451b24 */

void FUN_100451b24(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c4b5d8;
  _swift_getWitnessTable(&DAT_100c4b5d8,&DAT_100ed5c40);
  DAT_100fc7620 = puVar1;
  return;
}



/* Address: 0x100451b64 | FUN_100451b64 */

void FUN_100451b64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451b88();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451b88 | FUN_100451b88 */

void FUN_100451b88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7628 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b61c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b61c,&DAT_100ed5cc0);
  DAT_100fc7628 = pTVar1;
  return;
}



/* Address: 0x100451bc8 | FUN_100451bc8 */

void FUN_100451bc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451bec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451bec | FUN_100451bec */

void FUN_100451bec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7630 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b660;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b660,&DAT_100ed5d78);
  DAT_100fc7630 = pTVar1;
  return;
}



/* Address: 0x100451c2c | FUN_100451c2c */

void FUN_100451c2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451c50();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451c50 | FUN_100451c50 */

void FUN_100451c50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7638 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b6a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b6a4,&DAT_100ed5cf8);
  DAT_100fc7638 = pTVar1;
  return;
}



/* Address: 0x100451c90 | FUN_100451c90 */

void FUN_100451c90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451cb4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451cb4 | FUN_100451cb4 */

void FUN_100451cb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7640 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b6e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b6e8,&DAT_100ed5df8);
  DAT_100fc7640 = pTVar1;
  return;
}



/* Address: 0x100451cf4 | FUN_100451cf4 */

void FUN_100451cf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451d18();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451d18 | FUN_100451d18 */

void FUN_100451d18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7648 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b72c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b72c,&DAT_100ed5e78);
  DAT_100fc7648 = pTVar1;
  return;
}



/* Address: 0x100451d58 | FUN_100451d58 */

void FUN_100451d58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451d7c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451d7c | FUN_100451d7c */

void FUN_100451d7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b770;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b770,&DAT_100ed5f00);
  DAT_100fc7650 = pTVar1;
  return;
}



/* Address: 0x100451dbc | FUN_100451dbc */

void FUN_100451dbc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451de0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451de0 | FUN_100451de0 */

void FUN_100451de0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b7b4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b7b4,&DAT_100ed5f40);
  DAT_100fc7658 = pTVar1;
  return;
}



/* Address: 0x100451e20 | FUN_100451e20 */

void FUN_100451e20(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100451e44();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100451e44 | FUN_100451e44 */

void FUN_100451e44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7660 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b7f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b7f8,&DAT_100ed5fc0);
  DAT_100fc7660 = pTVar1;
  return;
}



/* Address: 0x100451e84 | FUN_100451e84 */

undefined1  [16] FUN_100451e84(void)

{
  return ZEXT816(0x100ed5bc8);
}



/* Address: 0x100451e94 | FUN_100451e94 */

void FUN_100451e94(undefined8 *param_1)

{
  FUN_10003bf2c(*param_1,param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  FUN_10003bf2c(param_1[4],param_1[5]);
  FUN_10003bf2c(param_1[6],param_1[7]);
  _swift_bridgeObjectRelease(param_1[8]);
  FUN_10003bf2c(param_1[10],param_1[0xb]);
  FUN_10003bf2c(param_1[0xc],param_1[0xd]);
  FUN_10003bf2c(param_1[0xe],param_1[0xf]);
  FUN_10003bf2c(param_1[0x10],param_1[0x11]);
  return;
}



/* Address: 0x100451ef8 | FUN_100451ef8 */

undefined8 * FUN_100451ef8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1001037b4(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  _swift_bridgeObjectRetain();
  FUN_1001037b4(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  FUN_1001037b4(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[10];
  uVar2 = param_2[0xb];
  _swift_bridgeObjectRetain();
  FUN_1001037b4(uVar1,uVar2);
  param_1[10] = uVar1;
  param_1[0xb] = uVar2;
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  FUN_1001037b4(uVar1,uVar2);
  param_1[0xc] = uVar1;
  param_1[0xd] = uVar2;
  uVar1 = param_2[0xe];
  uVar2 = param_2[0xf];
  FUN_1001037b4(uVar1,uVar2);
  param_1[0xe] = uVar1;
  param_1[0xf] = uVar2;
  uVar1 = param_2[0x10];
  uVar2 = param_2[0x11];
  FUN_1001037b4(uVar1,uVar2);
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  return param_1;
}



/* Address: 0x100451fd0 | FUN_100451fd0 */

undefined8 * FUN_100451fd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar2 = param_2[1];
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = param_2[4];
  uVar2 = param_2[5];
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = param_1[4];
  uVar3 = param_1[5];
  param_1[4] = uVar4;
  param_1[5] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  param_1[9] = param_2[9];
  uVar4 = param_2[10];
  uVar2 = param_2[0xb];
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = param_1[10];
  uVar3 = param_1[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = param_2[0xc];
  uVar2 = param_2[0xd];
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = param_1[0xc];
  uVar3 = param_1[0xd];
  param_1[0xc] = uVar4;
  param_1[0xd] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = param_2[0xe];
  uVar2 = param_2[0xf];
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = param_1[0xe];
  uVar3 = param_1[0xf];
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = param_2[0x10];
  uVar2 = param_2[0x11];
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = param_1[0x10];
  uVar3 = param_1[0x11];
  param_1[0x10] = uVar4;
  param_1[0x11] = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  return param_1;
}



/* Address: 0x100452100 | FUN_100452100 */

void FUN_100452100(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  return;
}



/* Address: 0x10045212c | FUN_10045212c */

undefined8 * FUN_10045212c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[10];
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  FUN_10003bf2c(uVar1,param_1[0xb]);
  uVar1 = param_1[0xc];
  uVar2 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar2;
  FUN_10003bf2c(uVar1,param_1[0xd]);
  uVar1 = param_1[0xe];
  uVar2 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar2;
  FUN_10003bf2c(uVar1,param_1[0xf]);
  uVar3 = param_2[0x11];
  uVar1 = param_1[0x10];
  uVar2 = param_1[0x11];
  uVar4 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar4;
  param_1[0x11] = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}



/* Address: 0x1004521f4 | FUN_1004521f4 */

int FUN_1004521f4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x24] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10045223c | FUN_10045223c */

void FUN_10045223c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x12) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004522a0 | FUN_1004522a0 */

undefined1  [16] FUN_1004522a0(void)

{
  return ZEXT816(0x100ed5c40);
}



/* Address: 0x1004522b0 | FUN_1004522b0 */

void FUN_1004522b0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Address: 0x100452308 | FUN_100452308 */

undefined4 * FUN_100452308(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 6);
  _swift_bridgeObjectRetain();
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 10);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 10) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  _swift_bridgeObjectRetain();
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x1c) = uVar1;
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  return param_1;
}



/* Address: 0x1004523cc | FUN_1004523cc */

undefined4 * FUN_1004523cc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 6);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)(param_1 + 4) = uVar4;
  *(undefined8 *)(param_1 + 6) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_2 + 10);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 10) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar4);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0x16);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_1 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar4;
  *(undefined8 *)(param_1 + 0x16) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x1a);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x1a);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(undefined8 *)(param_1 + 0x1a) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar4 = *(undefined8 *)(param_2 + 0x1c);
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  FUN_1001037b4(uVar4,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  uVar3 = *(undefined8 *)(param_1 + 0x1e);
  *(undefined8 *)(param_1 + 0x1c) = uVar4;
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  return param_1;
}



/* Address: 0x1004524e0 | FUN_1004524e0 */

void FUN_1004524e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar5 = param_2[0xc];
  uVar7 = param_2[0xf];
  uVar6 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  param_1[0xf] = uVar7;
  param_1[0xe] = uVar6;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  return;
}



/* Address: 0x100452504 | FUN_100452504 */

undefined4 * FUN_100452504(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_1 + 10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  FUN_10003bf2c(uVar1,*(undefined8 *)(param_1 + 0x12));
  uVar1 = *(undefined8 *)(param_1 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  FUN_10003bf2c(uVar1,*(undefined8 *)(param_1 + 0x16));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x16) = uVar3;
  FUN_10003bf2c(uVar1,*(undefined8 *)(param_1 + 0x1a));
  uVar2 = *(undefined8 *)(param_2 + 0x1e);
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  uVar3 = *(undefined8 *)(param_1 + 0x1e);
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x1a) = uVar4;
  *(undefined8 *)(param_1 + 0x1e) = uVar2;
  FUN_10003bf2c(uVar1,uVar3);
  return param_1;
}



/* Address: 0x1004525b8 | FUN_1004525b8 */

int FUN_1004525b8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100452600 | FUN_100452600 */

void FUN_100452600(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100452660 | FUN_100452660 */

undefined1  [16] FUN_100452660(void)

{
  return ZEXT816(0x100ed5cc0);
}



/* Address: 0x100452670 | FUN_100452670 */

undefined1  [16] FUN_100452670(void)

{
  return ZEXT816(0x100ed5cf8);
}



/* Address: 0x100452680 | FUN_100452680 */

undefined1  [16] FUN_100452680(void)

{
  return ZEXT816(0x100ed5d78);
}



/* Address: 0x100452690 | FUN_100452690 */

void FUN_100452690(undefined8 *param_1)

{
  FUN_10003bf2c(*param_1,param_1[1]);
  FUN_10003bf2c(param_1[2],param_1[3]);
  return;
}



/* Address: 0x1004526bc | FUN_1004526bc */

undefined8 * FUN_1004526bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1001037b4(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  FUN_1001037b4(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}


