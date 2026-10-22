/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005a28e8 | FUN_1005a28e8 */

undefined1  [16] FUN_1005a28e8(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar5 = *unaff_x20;
  uVar6 = 0x736e6f6369;
  if (bVar5 != 6) {
    uVar6 = 0x6174656d5f;
  }
  puVar3 = (undefined1 *)0xec000000616d6568;
  uVar7 = 0x635374757074756f;
  if (bVar5 != 4) {
    puVar3 = (undefined1 *)0xeb00000000736e6f;
    uVar7 = 0x697461746f6e6e61;
  }
  puVar4 = &DAT_e500000000000000;
  if (bVar5 < 6) {
    puVar4 = puVar3;
    uVar6 = uVar7;
  }
  puVar3 = &DAT_eb000000006e6f69;
  uVar7 = 0x7470697263736564;
  if (bVar5 != 2) {
    puVar3 = (undefined1 *)0xeb00000000616d65;
    uVar7 = 0x6863537475706e69;
  }
  uVar1 = 0x656d616e;
  if (bVar5 != 0) {
    uVar1 = 0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar5 != 0) {
    puVar2 = &DAT_e500000000000000;
  }
  if (bVar5 < 2) {
    puVar3 = puVar2;
    uVar7 = uVar1;
  }
  if (bVar5 < 4) {
    puVar4 = puVar3;
    uVar6 = uVar7;
  }
  auVar8._8_8_ = puVar4;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Address: 0x1005a29f0 | FUN_1005a29f0 */

void FUN_1005a29f0(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005a7874();
  *param_1 = param_2;
  return;
}



/* Address: 0x1005a2a14 | FUN_1005a2a14 */

String FUN_1005a2a14(void)

{
  String SVar1;
  
  FUN_1005a7ed0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a2a3c | FUN_1005a2a3c */

String FUN_1005a2a3c(void)

{
  String SVar1;
  
  FUN_1005a7ed0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a2a64 | FUN_1005a2a64 */

void FUN_1005a2a64(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  FUN_1005a78d8(&local_c8);
  if (unaff_x21 == 0) {
    param_1[0x11] = uStack_40;
    param_1[0x10] = local_48;
    param_1[0x13] = uStack_30;
    param_1[0x12] = local_38;
    *(undefined4 *)(param_1 + 0x14) = local_28;
    param_1[9] = uStack_80;
    param_1[8] = local_88;
    param_1[0xb] = uStack_70;
    param_1[10] = local_78;
    param_1[0xd] = uStack_60;
    param_1[0xc] = local_68;
    param_1[0xf] = uStack_50;
    param_1[0xe] = local_58;
    param_1[1] = uStack_c0;
    *param_1 = local_c8;
    param_1[3] = uStack_b0;
    param_1[2] = local_b8;
    param_1[5] = uStack_a0;
    param_1[4] = local_a8;
    param_1[7] = uStack_90;
    param_1[6] = local_98;
  }
  return;
}



/* Address: 0x1005a2ad8 | FUN_1005a2ad8 */

/* WARNING: Removing unreachable block (ram,0x0001005a2d10) */
/* WARNING: Removing unreachable block (ram,0x0001005a2c8c) */

void FUN_1005a2ad8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_120 [8];
  undefined1 local_118 [39];
  undefined1 local_f1;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  puVar1 = &DAT_100fd26c8;
  FUN_1000f7830(&DAT_100fd26c8,&BYTE_100c60318);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a7ed0();
  Swift::Encoder::_container();
  local_f0 = local_f0 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_f0,puVar1);
  if (unaff_x21 == 0) {
    local_f0 = CONCAT71(local_f0._1_7_,1);
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[2],unaff_x20[3],&local_f0,puVar1);
    uStack_e8 = unaff_x20[5];
    local_f0 = unaff_x20[4];
    local_118[0] = 2;
    puVar2 = &DAT_100fcb6e0;
    FUN_1000f7830(&DAT_100fcb6e0,&DAT_100c50490);
    puVar3 = puVar2;
    FUN_1005a7f10();
    Swift::KeyedEncodingContainer::_encode(&local_f0,local_118,puVar1,puVar2,puVar3);
    uStack_88 = unaff_x20[7];
    local_90 = unaff_x20[6];
    uStack_78 = unaff_x20[9];
    uStack_80 = unaff_x20[8];
    local_70 = *(undefined1 *)(unaff_x20 + 10);
    uStack_e8 = unaff_x20[7];
    local_f0 = unaff_x20[6];
    uStack_d8 = unaff_x20[9];
    local_e0 = unaff_x20[8];
    local_d0 = *(undefined1 *)(unaff_x20 + 10);
    local_f1 = 3;
    puVar4 = &local_90;
    FUN_10052797c(puVar4,local_118);
    FUN_1004d9ea8();
    Swift::KeyedEncodingContainer::_encode(&local_f0,&local_f1,puVar1,&DAT_100edd000,puVar4);
    FUN_1004dbde0(local_f0,uStack_e8,local_e0,uStack_d8,local_d0);
    uStack_b8 = unaff_x20[0xd];
    local_c0 = unaff_x20[0xc];
    uStack_a8 = unaff_x20[0xf];
    uStack_b0 = unaff_x20[0xe];
    local_a0 = *(undefined1 *)(unaff_x20 + 0x10);
    uStack_e8 = unaff_x20[0xd];
    local_f0 = unaff_x20[0xc];
    uStack_d8 = unaff_x20[0xf];
    local_e0 = unaff_x20[0xe];
    local_d0 = *(undefined1 *)(unaff_x20 + 0x10);
    local_f1 = 4;
    FUN_1005a1058(&local_c0,local_118);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_f0,&local_f1,puVar1,&DAT_100edd000,puVar4);
    FUN_100524e98(local_f0,uStack_e8,local_e0,uStack_d8,local_d0);
    if ((((unaff_x20[0x13] != 0) || (*(char *)((long)unaff_x20 + 0xa3) != '\x02')) ||
        (*(char *)(unaff_x20 + 0x14) != '\x02')) ||
       ((*(char *)((long)unaff_x20 + 0xa1) != '\x02' ||
        (*(char *)((long)unaff_x20 + 0xa2) != '\x02')))) {
      local_e0 = CONCAT44(local_e0._4_4_,*(undefined4 *)(unaff_x20 + 0x14));
      local_118[0] = 5;
      uVar5 = local_f0;
      local_f0 = unaff_x20[0x12];
      uStack_e8 = unaff_x20[0x13];
      FUN_1005a7f78();
      Swift::KeyedEncodingContainer::_encode(&local_f0,local_118,puVar1,&DAT_100ee3a78,uVar5);
    }
    local_f0 = unaff_x20[0xb];
    local_118[0] = 6;
    puVar2 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    puVar3 = puVar2;
    FUN_100576684();
    puVar6 = &local_f0;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar6,local_118,puVar1,puVar2,puVar3);
    local_f0 = unaff_x20[0x11];
    local_118[0] = 7;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_f0,local_118,puVar1,&DAT_100edcda0,puVar6);
  }
  (**(code **)(lVar7 + 8))(auStack_120 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1005a2e8c | thunk_FUN_1005a555c */

void thunk_FUN_1005a555c(void)

{
  FUN_1005a555c();
  return;
}



/* Address: 0x1005a2e90 | FUN_1005a2e90 */

void FUN_1005a2e90(Hasher param_1)

{
  Hasher HVar1;
  String *unaff_x20;
  void *pvVar2;
  undefined *puVar3;
  Hasher HVar4;
  char *pcVar5;
  String SVar6;
  String SVar7;
  
  HVar1.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar2 = unaff_x20[1].bridgeObject;
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar1);
    pvVar2 = unaff_x20[2].bridgeObject;
    HVar4.unknown = HVar1.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar1);
    SVar6.bridgeObject = pvVar2;
    SVar6.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar6);
    pvVar2 = unaff_x20[2].bridgeObject;
  }
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    pcVar5 = unaff_x20[2].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar7.bridgeObject = pvVar2;
    SVar7.str = pcVar5;
    Swift::String::hash(param_1,SVar7);
    HVar4.unknown = pcVar5;
  }
  FUN_100525cfc(param_1.unknown);
  puVar3 = unaff_x20[5].bridgeObject;
  if (puVar3 == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004d7564(param_1.unknown);
    HVar4.unknown = puVar3;
  }
  if (((((ulong)unaff_x20[7].bridgeObject ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(char *)&unaff_x20[8].str == -1)) {
    Swift::Hasher::_combine(0,HVar4);
    pvVar2 = unaff_x20[8].bridgeObject;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_100525cfc(param_1.unknown);
    pvVar2 = unaff_x20[8].bridgeObject;
  }
  if (pvVar2 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,pvVar2);
  }
  FUN_1005a1438(param_1.unknown,unaff_x20[9].str,unaff_x20[9].bridgeObject,
                *(undefined4 *)&unaff_x20[10].str);
  return;
}



/* Address: 0x1005a3028 | FUN_1005a3028 */

void FUN_1005a3028(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005a2e90();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a3064 | thunk_FUN_1005a2e90 */

void thunk_FUN_1005a2e90(void)

{
  FUN_1005a2e90();
  return;
}



/* Address: 0x1005a3068 | FUN_1005a3068 */

void FUN_1005a3068(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005a2e90();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a30a0 | FUN_1005a30a0 */

void FUN_1005a30a0(void)

{
  FUN_1005a2ad8();
  return;
}



/* Address: 0x1005a30b4 | FUN_1005a30b4 */

uint FUN_1005a30b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 local_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0x11];
  local_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  local_e0 = *(undefined4 *)(param_1 + 0x14);
  uStack_138 = param_1[9];
  local_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  local_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  local_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  local_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  local_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  local_30 = *(undefined4 *)(param_2 + 0x14);
  uStack_88 = param_2[9];
  local_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  local_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  local_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  local_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_1005a555c(&local_180,&local_d0);
  return uVar1 & 1;
}



/* Address: 0x1005a3144 | FUN_1005a3144 */

byte * FUN_1005a3144(void)

{
  return &BYTE_100c602e0;
}



/* Address: 0x1005a3150 | FUN_1005a3150 */

undefined1  [16] FUN_1005a3150(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000007473;
  auVar1._0_8_ = 0x696c2f736c6f6f74;
  return auVar1;
}



/* Address: 0x1005a316c | FUN_1005a316c */

String FUN_1005a316c(void)

{
  String SVar1;
  
  FUN_1005a7fb8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a3194 | FUN_1005a3194 */

String FUN_1005a3194(void)

{
  String SVar1;
  
  FUN_1005a7fb8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a31bc | FUN_1005a31bc */

void FUN_1005a31bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd26e8;
  FUN_1000f7830(&DAT_100fd26e8,&BYTE_100c60320);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a7fb8();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1005a32b0 | FUN_1005a32b0 */

undefined1  [16] FUN_1005a32b0(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = &DAT_100fd26f8;
  FUN_1000f7830(&DAT_100fd26f8,&BYTE_100c60328);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined **)(param_1 + 0x18);
  puVar2 = param_1;
  FUN_100004640(param_1,puVar4);
  FUN_1005a7fb8();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(KVar3.unknown,puVar1);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    KVar3.unknown = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = KVar3.unknown;
  return auVar6;
}



/* Address: 0x1005a33c0 | FUN_1005a33c0 */

/* WARNING: Removing unreachable block (ram,0x0001005a3484) */

void FUN_1005a33c0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  
  puVar1 = &DAT_100fd26f8;
  FUN_1000f7830(&DAT_100fd26f8,&BYTE_100c60328);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005a7fb8();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = KVar2.unknown;
    param_1[1] = puVar3;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1005a34e8 | FUN_1005a34e8 */

void FUN_1005a34e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd26e8;
  FUN_1000f7830(&DAT_100fd26e8,&BYTE_100c60320);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a7fb8();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x1005a35d8 | FUN_1005a35d8 */

void FUN_1005a35d8(void)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar3 = (char *)0x737275437478656e;
  if (cVar2 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar3 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x736c6f6f74;
  if (cVar2 != '\0') {
    pcVar1 = pcVar3;
  }
  HVar4.unknown = &DAT_e500000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = puVar5;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005a3674 | FUN_1005a3674 */

void FUN_1005a3674(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char cVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar4 = (char *)0x737275437478656e;
  if (cVar3 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar4 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x736c6f6f74;
  if (cVar3 != '\0') {
    pcVar1 = pcVar4;
  }
  puVar2 = &DAT_e500000000000000;
  if (cVar3 != '\0') {
    puVar2 = puVar5;
  }
  SVar6.bridgeObject = puVar2;
  SVar6.str = pcVar1;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1005a36ec | FUN_1005a36ec */

void FUN_1005a36ec(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar3 = (char *)0x737275437478656e;
  if (cVar2 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar3 = (char *)0x6174656d5f;
  }
  pcVar1 = (char *)0x736c6f6f74;
  if (cVar2 != '\0') {
    pcVar1 = pcVar3;
  }
  HVar4.unknown = &DAT_e500000000000000;
  if (cVar2 != '\0') {
    HVar4.unknown = puVar5;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005a3784 | FUN_1005a3784 */

void FUN_1005a3784(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd2c28);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1005a37b8 | FUN_1005a37b8 */

void FUN_1005a37b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xea0000000000726f;
  uVar4 = 0x737275437478656e;
  if (cVar3 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    uVar4 = 0x6174656d5f;
  }
  uVar1 = 0x736c6f6f74;
  if (cVar3 != '\0') {
    uVar1 = uVar4;
  }
  puVar2 = &DAT_e500000000000000;
  if (cVar3 != '\0') {
    puVar2 = puVar5;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1005a3814 | FUN_1005a3814 */

undefined1  [16] FUN_1005a3814(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xea0000000000726f;
  uVar4 = 0x737275437478656e;
  if (cVar3 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    uVar4 = 0x6174656d5f;
  }
  uVar1 = 0x736c6f6f74;
  if (cVar3 != '\0') {
    uVar1 = uVar4;
  }
  puVar2 = &DAT_e500000000000000;
  if (cVar3 != '\0') {
    puVar2 = puVar5;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x1005a386c | FUN_1005a386c */

void FUN_1005a386c(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fd2c28);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1005a3898 | FUN_1005a3898 */

void FUN_1005a3898(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd2df0;
  FUN_1000f7830(&DAT_100fd2df0,&DAT_100c613a8);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1005a38d8 | FUN_1005a38d8 */

String FUN_1005a38d8(void)

{
  String SVar1;
  
  FUN_1005a7ff8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a3900 | FUN_1005a3900 */

String FUN_1005a3900(void)

{
  String SVar1;
  
  FUN_1005a7ff8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a3928 | FUN_1005a3928 */

/* WARNING: Removing unreachable block (ram,0x0001005a3a60) */

void FUN_1005a3928(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd2700;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_1000f7830(&DAT_100fd2700,&BYTE_100c60330);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a7ff8();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar2 = &DAT_100fcfbc0;
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fcfbc0,&BYTE_100c588a0);
  puVar3 = puVar2;
  FUN_100563c2c();
  Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    local_58 = CONCAT71(local_58._1_7_,1);
    uVar4 = local_78;
    Swift::KeyedEncodingContainer::_encodeIfPresent(local_78,uStack_70,&local_58,puVar1);
    local_61 = 2;
    local_58 = param_5;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_61,puVar1,&DAT_100edcda0,uVar4)
    ;
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1005a3ae4 | FUN_1005a3ae4 */

void FUN_1005a3ae4(undefined8 param_1)

{
  FUN_100575740(param_1,FUN_1005a8038);
  return;
}



/* Address: 0x1005a3b00 | thunk_FUN_1005a6744 */

void thunk_FUN_1005a6744(void)

{
  FUN_1005a6744();
  return;
}



/* Address: 0x1005a3b04 | FUN_1005a3b04 */

void FUN_1005a3b04(Hasher param_1,Hasher param_2,Hasher param_3,void *param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  __uint8 _Var6;
  undefined *puVar7;
  char *pcVar8;
  __uint64 _Var9;
  String *pSVar10;
  uint uVar11;
  Hasher HVar12;
  Hasher HVar13;
  void *pvVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined1 auStack_228 [168];
  char *local_180;
  void *pvStack_178;
  char *local_170;
  void *pvStack_168;
  char *local_160;
  void *pvStack_158;
  char *local_150;
  void *pvStack_148;
  char *local_140;
  void *pvStack_138;
  char *local_130;
  undefined *local_128;
  char *local_120;
  void *pvStack_118;
  char *local_110;
  void *local_108;
  char *local_100;
  undefined *puStack_f8;
  char *local_f0;
  void *local_e8;
  undefined4 local_e0;
  char *local_d0;
  void *pvStack_c8;
  char *local_c0;
  void *pvStack_b8;
  char local_b0;
  char *local_a0;
  void *pvStack_98;
  char *pcStack_90;
  void *pvStack_88;
  undefined1 local_80;
  
  _Var9 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar13.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var9,param_2);
  if (_Var9 != 0) {
    pSVar10 = (String *)(param_2.unknown + 0x20);
    do {
      puStack_f8 = pSVar10[8].bridgeObject;
      local_100 = pSVar10[8].str;
      local_e8 = pSVar10[9].bridgeObject;
      local_f0 = pSVar10[9].str;
      local_e0 = *(uint *)&pSVar10[10].str;
      pvStack_138 = pSVar10[4].bridgeObject;
      local_140 = pSVar10[4].str;
      local_128 = pSVar10[5].bridgeObject;
      local_130 = pSVar10[5].str;
      pvStack_118 = pSVar10[6].bridgeObject;
      local_120 = pSVar10[6].str;
      local_108 = pSVar10[7].bridgeObject;
      local_110 = pSVar10[7].str;
      pvStack_178 = pSVar10->bridgeObject;
      HVar12.unknown = pSVar10->str;
      SVar15 = *pSVar10;
      pvVar14 = pSVar10[1].bridgeObject;
      HVar13.unknown = pSVar10[1].str;
      SVar16 = pSVar10[1];
      pvStack_158 = pSVar10[2].bridgeObject;
      local_160 = pSVar10[2].str;
      pvStack_148 = pSVar10[3].bridgeObject;
      local_150 = pSVar10[3].str;
      local_180 = HVar12.unknown;
      local_170 = HVar13.unknown;
      pvStack_168 = pvVar14;
      FUN_100558d60(&local_180,auStack_228);
      Swift::String::hash(param_1,SVar15);
      if (pvVar14 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar12);
        HVar13.unknown = HVar12.unknown;
        if (pvStack_158 != (void *)0x0) goto LAB_1005a3bf8;
LAB_1005a3c30:
        Swift::Hasher::_combine(0,HVar12);
      }
      else {
        Swift::Hasher::_combine(1,HVar12);
        Swift::String::hash(param_1,SVar16);
        HVar12.unknown = HVar13.unknown;
        if (pvStack_158 == (void *)0x0) goto LAB_1005a3c30;
LAB_1005a3bf8:
        pvVar14 = pvStack_158;
        HVar12.unknown = local_160;
        Swift::Hasher::_combine(1,HVar13);
        SVar15.bridgeObject = pvVar14;
        SVar15.str = HVar12.unknown;
        Swift::String::hash(param_1,SVar15);
      }
      puVar7 = local_128;
      pvStack_98 = pvStack_148;
      local_a0 = local_150;
      pvStack_88 = pvStack_138;
      pcStack_90 = local_140;
      local_80 = local_130._0_1_;
      FUN_100525cfc(param_1.unknown);
      if (puVar7 == (undefined *)0x0) {
        Swift::Hasher::_combine(0,HVar12);
      }
      else {
        Swift::Hasher::_combine(1,HVar12);
        FUN_1004d7564(param_1.unknown);
        HVar12.unknown = puVar7;
      }
      if (((((ulong)local_108 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
         ((char)local_100 == -1)) {
        Swift::Hasher::_combine(0,HVar12);
        if (puStack_f8 != (undefined *)0x0) goto LAB_1005a3cfc;
LAB_1005a3cb8:
        Swift::Hasher::_combine(0,HVar12);
        HVar13.unknown = HVar12.unknown;
      }
      else {
        pvStack_c8 = pvStack_118;
        local_d0 = local_120;
        local_c0 = local_110;
        pvStack_b8 = local_108;
        local_b0 = (char)local_100;
        Swift::Hasher::_combine(1,HVar12);
        FUN_100525cfc(param_1.unknown);
        if (puStack_f8 == (undefined *)0x0) goto LAB_1005a3cb8;
LAB_1005a3cfc:
        HVar13.unknown = puStack_f8;
        Swift::Hasher::_combine(1,HVar12);
        FUN_1004df778(param_1.unknown);
      }
      uVar1 = local_e0;
      pvVar14 = local_e8;
      pcVar8 = local_f0;
      bVar4 = local_e0._1_1_;
      bVar5 = local_e0._2_1_;
      bVar2 = local_e0._3_1_;
      uVar11 = local_e0 & 0xff;
      if (local_e8 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar13);
        if (uVar11 == 2) goto LAB_1005a3d54;
LAB_1005a3d70:
        Swift::Hasher::_combine(1,HVar13);
        bVar3 = (byte)uVar1 & 1;
      }
      else {
        Swift::Hasher::_combine(1,HVar13);
        SVar16.bridgeObject = pvVar14;
        SVar16.str = pcVar8;
        Swift::String::hash(param_1,SVar16);
        HVar13.unknown = pcVar8;
        if (uVar11 != 2) goto LAB_1005a3d70;
LAB_1005a3d54:
        bVar3 = 0;
      }
      Swift::Hasher::_combine(bVar3,HVar13);
      if (bVar4 == 2) {
        bVar4 = 0;
      }
      else {
        Swift::Hasher::_combine(1,HVar13);
        bVar4 = bVar4 & 1;
      }
      Swift::Hasher::_combine(bVar4,HVar13);
      if (bVar5 == 2) {
        bVar5 = 0;
      }
      else {
        Swift::Hasher::_combine(1,HVar13);
        bVar5 = bVar5 & 1;
      }
      Swift::Hasher::_combine(bVar5,HVar13);
      if (bVar2 == 2) {
        _Var6 = 0;
      }
      else {
        Swift::Hasher::_combine(1,HVar13);
        _Var6 = bVar2 & 1;
      }
      Swift::Hasher::_combine(_Var6,HVar13);
      FUN_100558d9c(&local_180);
      pSVar10 = (String *)&pSVar10[10].bridgeObject;
      _Var9 = _Var9 - 1;
    } while (_Var9 != 0);
  }
  if (param_4 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar13);
    param_3.unknown = HVar13.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar13);
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3.unknown;
    Swift::String::hash(param_1,SVar17);
  }
  if (param_5 == 0) {
    Swift::Hasher::_combine(0,param_3);
  }
  else {
    Swift::Hasher::_combine(1,param_3);
    FUN_1004df778(param_1.unknown,param_5);
  }
  return;
}



/* Address: 0x1005a3e7c | FUN_1005a3e7c */

void FUN_1005a3e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_1005a3b04(HVar1.unknown,param_1,param_2,param_3,param_4);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a3ee0 | FUN_1005a3ee0 */

void FUN_1005a3ee0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Hasher HVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  Swift::Hasher::init(0);
  HVar5.unknown = auStack_78;
  FUN_1005a3b04(HVar5.unknown,uVar1,uVar3,uVar2,uVar4);
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005a3f3c | FUN_1005a3f3c */

void FUN_1005a3f3c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005a3b04(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005a3f48 | FUN_1005a3f48 */

void FUN_1005a3f48(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Hasher HVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  Swift::Hasher::init(param_1);
  HVar5.unknown = auStack_78;
  FUN_1005a3b04(HVar5.unknown,uVar1,uVar3,uVar2,uVar4);
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005a3fa0 | FUN_1005a3fa0 */

void FUN_1005a3fa0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_1005a8038();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x1005a3fcc | FUN_1005a3fcc */

void FUN_1005a3fcc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005a3928(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005a3fe8 | FUN_1005a3fe8 */

void FUN_1005a3fe8(void)

{
  FUN_100575a74();
  return;
}



/* Address: 0x1005a3ff4 | FUN_1005a3ff4 */

byte * FUN_1005a3ff4(void)

{
  return &BYTE_100c602f0;
}



/* Address: 0x1005a4000 | FUN_1005a4000 */

undefined1  [16] FUN_1005a4000(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006c6c;
  auVar1._0_8_ = 0x61632f736c6f6f74;
  return auVar1;
}



/* Address: 0x1005a401c | FUN_1005a401c */

void FUN_1005a401c(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x656d616e;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x746e656d75677261;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar2 = (undefined1 *)0xe900000000000073;
  }
  pcVar3 = (char *)0x6174656d5f;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e500000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005a40b4 | FUN_1005a40b4 */

void FUN_1005a40b4(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x656d616e;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x746e656d75677261;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = (undefined1 *)0xe900000000000073;
  }
  pcVar3 = (char *)0x6174656d5f;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  puVar4 = &DAT_e500000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x1005a4128 | FUN_1005a4128 */

void FUN_1005a4128(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char cVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x656d616e;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x746e656d75677261;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar4 != '\x01') {
    puVar2 = (undefined1 *)0xe900000000000073;
  }
  pcVar3 = (char *)0x6174656d5f;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e500000000000000;
  if (cVar4 != '\0') {
    HVar5.unknown = puVar2;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1005a41bc | FUN_1005a41bc */

void FUN_1005a41bc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd2c98);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1005a41f0 | FUN_1005a41f0 */

void FUN_1005a41f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x656d616e;
  if (cVar5 != '\x01') {
    uVar1 = 0x746e656d75677261;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = (undefined1 *)0xe900000000000073;
  }
  uVar3 = 0x6174656d5f;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e500000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x1005a4248 | FUN_1005a4248 */

undefined1  [16] FUN_1005a4248(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x656d616e;
  if (cVar5 != '\x01') {
    uVar1 = 0x746e656d75677261;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = (undefined1 *)0xe900000000000073;
  }
  uVar3 = 0x6174656d5f;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e500000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1005a429c | FUN_1005a429c */

void FUN_1005a429c(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fd2c98);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1005a42c8 | FUN_1005a42c8 */

String FUN_1005a42c8(void)

{
  String SVar1;
  
  FUN_1005a847c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005a42f0 | FUN_1005a42f0 */

String FUN_1005a42f0(void)

{
  String SVar1;
  
  FUN_1005a847c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005a4318 | FUN_1005a4318 */

void FUN_1005a4318(undefined8 param_1)

{
  FUN_100575740(param_1,FUN_1005a8248);
  return;
}



/* Address: 0x1005a4334 | FUN_1005a4334 */

/* WARNING: Removing unreachable block (ram,0x0001005a4454) */

void FUN_1005a4334(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd2710;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_1000f7830(&DAT_100fd2710,&BYTE_100c60340);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005a847c();
  KVar2 = Swift::Encoder::_container();
  local_61 = 0;
  local_58 = param_2;
  FUN_1004e02ac();
  Swift::KeyedEncodingContainer::_encodeIfPresent
            (&local_58,&local_61,puVar1,&DAT_100edcda0,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_58 = CONCAT71(local_58._1_7_,1);
    Swift::KeyedEncodingContainer::_encode(local_78,uStack_70,&local_58,puVar1);
    local_61 = 2;
    puVar3 = &DAT_100fcc380;
    local_58 = param_5;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    puVar4 = &DAT_100fcc388;
    FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_61,puVar1,puVar3,puVar4);
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar5 + 8))(auStack_80 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1005a450c | thunk_FUN_1005a6334 */

void thunk_FUN_1005a6334(void)

{
  FUN_1005a6334();
  return;
}



/* Address: 0x1005a4510 | FUN_1005a4510 */

void FUN_1005a4510(Hasher param_1,Hasher param_2,Hasher param_3,void *param_4,long param_5)

{
  String SVar1;
  
  if (param_2.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,(Hasher)0x0);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df778(param_1.unknown,param_2.unknown);
  }
  SVar1.bridgeObject = param_4;
  SVar1.str = param_3.unknown;
  Swift::String::hash(param_1,SVar1);
  if (param_5 != 0) {
    Swift::Hasher::_combine(1,param_3);
    FUN_1004df778(param_1.unknown,param_5);
    return;
  }
  Swift::Hasher::_combine(0,param_3);
  return;
}



/* Address: 0x1005a45b0 | FUN_1005a45b0 */

void FUN_1005a45b0(long param_1,Hasher param_2,void *param_3,long param_4)

{
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_88 [72];
  
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::init(0);
  if (param_1 == 0) {
    Swift::Hasher::_combine(0,HVar1);
  }
  else {
    Swift::Hasher::_combine(1,HVar1);
    FUN_1004df778(auStack_88,param_1);
  }
  SVar2.bridgeObject = param_3;
  SVar2.str = param_2.unknown;
  Swift::String::hash((Hasher)auStack_88,SVar2);
  if (param_4 == 0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar1.unknown = auStack_88;
    FUN_1004df778(HVar1.unknown,param_4);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005a4664 | FUN_1005a4664 */

void FUN_1005a4664(void)

{
  undefined8 *unaff_x20;
  
  FUN_1005a45b0(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005a4670 | FUN_1005a4670 */

void FUN_1005a4670(Hasher param_1,Hasher param_2)

{
  long lVar1;
  long lVar2;
  String SVar3;
  Hasher HVar4;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  HVar4.unknown = ((String *)(unaff_x20 + 1))->str;
  SVar3 = *(String *)(unaff_x20 + 1);
  lVar2 = unaff_x20[3];
  if (lVar1 == 0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df778(param_1.unknown,lVar1);
  }
  Swift::String::hash(param_1,SVar3);
  if (lVar2 != 0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,lVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x1005a4718 | FUN_1005a4718 */

void FUN_1005a4718(__int64 param_1,Hasher param_2)

{
  long lVar1;
  long lVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  long *unaff_x20;
  undefined1 auStack_88 [72];
  
  lVar1 = *unaff_x20;
  HVar5.unknown = ((String *)(unaff_x20 + 1))->str;
  SVar3 = *(String *)(unaff_x20 + 1);
  lVar2 = unaff_x20[3];
  Swift::Hasher::init(param_1);
  if (lVar1 == 0) {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df778(auStack_88,lVar1);
  }
  Swift::String::hash((Hasher)auStack_88,SVar3);
  if (lVar2 == 0) {
    HVar4.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar5);
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    HVar4.unknown = auStack_88;
    FUN_1004df778(HVar4.unknown,lVar2);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1005a47c0 | FUN_1005a47c0 */

void FUN_1005a47c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_1005a8248();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x1005a47ec | FUN_1005a47ec */

void FUN_1005a47ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005a4334(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1005a4808 | FUN_1005a4808 */

void FUN_1005a4808(void)

{
  FUN_100575a74();
  return;
}


