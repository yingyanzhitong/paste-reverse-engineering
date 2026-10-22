/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100485cf0 | FUN_100485cf0 */

void FUN_100485cf0(void)

{
  undefined1 *unaff_x20;
  
  FUN_100485414(*unaff_x20);
  return;
}



/* Address: 0x100485d08 | FUN_100485d08 */

void FUN_100485d08(undefined1 *param_1,undefined1 param_2)

{
  FUN_100485fb0();
  *param_1 = param_2;
  return;
}



/* Address: 0x100485d2c | FUN_100485d2c */

void FUN_100485d2c(undefined1 *param_1)

{
  *param_1 = 10;
  return;
}



/* Address: 0x100485d38 | FUN_100485d38 */

String FUN_100485d38(void)

{
  String SVar1;
  
  FUN_100486bac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100485d60 | FUN_100485d60 */

String FUN_100485d60(void)

{
  String SVar1;
  
  FUN_100486bac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100485d88 | FUN_100485d88 */

void FUN_100485d88(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 local_28;
  
  FUN_100486014(&local_98);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_50;
    param_1[8] = local_58;
    param_1[0xb] = uStack_40;
    param_1[10] = local_48;
    param_1[0xd] = uStack_30;
    param_1[0xc] = local_38;
    param_1[0xe] = local_28;
    param_1[1] = uStack_90;
    *param_1 = local_98;
    param_1[3] = uStack_80;
    param_1[2] = local_88;
    param_1[5] = uStack_70;
    param_1[4] = local_78;
    param_1[7] = uStack_60;
    param_1[6] = local_68;
  }
  return;
}



/* Address: 0x100485dec | FUN_100485dec */

void FUN_100485dec(void)

{
  FUN_100485558();
  return;
}



/* Address: 0x100485e00 | FUN_100485e00 */

/* WARNING: Removing unreachable block (ram,0x000100485f8c) */
/* WARNING: Removing unreachable block (ram,0x000100485ec8) */

char * FUN_100485e00(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_60 [15];
  undefined1 local_51;
  
  puVar1 = &DAT_100fc9280;
  FUN_1000037f0(&DAT_100fc9280,&DAT_100c4dcf8);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100486bec();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar6 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar6.str;
    puVar3 = &DAT_100fc7eb8;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    local_61 = 1;
    puVar4 = &DAT_100fc7ed0;
    FUN_10045e1bc(&DAT_100fc7ed0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(local_60,puVar3,&local_61,puVar1,puVar3,puVar4);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}



/* Address: 0x100485fb0 | FUN_100485fb0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100485fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100485fb0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fc8150,&DAT_100c4cdb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Address: 0x100486014 | FUN_100486014 */

/* WARNING: Removing unreachable block (ram,0x0001004864dc) */
/* WARNING: Removing unreachable block (ram,0x0001004863cc) */
/* WARNING: Removing unreachable block (ram,0x00010048631c) */
/* WARNING: Removing unreachable block (ram,0x0001004861ec) */
/* WARNING: Removing unreachable block (ram,0x000100486154) */
/* WARNING: Removing unreachable block (ram,0x0001004861a0) */
/* WARNING: Removing unreachable block (ram,0x00010048628c) */
/* WARNING: Removing unreachable block (ram,0x00010048620c) */
/* WARNING: Removing unreachable block (ram,0x000100486244) */
/* WARNING: Removing unreachable block (ram,0x000100486220) */
/* WARNING: Removing unreachable block (ram,0x000100486224) */
/* WARNING: Removing unreachable block (ram,0x000100486250) */
/* WARNING: Removing unreachable block (ram,0x000100486254) */
/* WARNING: Removing unreachable block (ram,0x000100486260) */
/* WARNING: Removing unreachable block (ram,0x000100486230) */
/* WARNING: Removing unreachable block (ram,0x000100486234) */
/* WARNING: Removing unreachable block (ram,0x00010048623c) */
/* WARNING: Removing unreachable block (ram,0x000100486374) */
/* WARNING: Removing unreachable block (ram,0x000100486428) */
/* WARNING: Removing unreachable block (ram,0x0001004860e8) */
/* WARNING: Removing unreachable block (ram,0x000100486480) */
/* WARNING: Removing unreachable block (ram,0x0001004864e0) */
/* WARNING: Removing unreachable block (ram,0x0001004864ec) */
/* WARNING: Removing unreachable block (ram,0x000100486500) */
/* WARNING: Removing unreachable block (ram,0x000100486508) */

void FUN_100486014(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  char *local_240;
  char *local_238;
  char *local_230;
  undefined1 local_1e8 [120];
  char *local_170;
  void *pvStack_168;
  char *local_160;
  void *pvStack_158;
  char *pcStack_150;
  void *pvStack_148;
  char *local_140;
  void *pvStack_138;
  char *pcStack_130;
  void *pvStack_128;
  char *local_120;
  char *pcStack_118;
  char *pcStack_110;
  char *pcStack_108;
  undefined8 local_100;
  undefined1 local_f1;
  undefined8 local_f0;
  String local_e8;
  String local_d8;
  String local_c8;
  String local_b8;
  String local_a8;
  char *local_98;
  char *pcStack_90;
  char *local_88;
  char *pcStack_80;
  undefined8 local_78;
  
  puVar1 = &DAT_100fc9288;
  FUN_1000037f0(&DAT_100fc9288,&DAT_100c4dd00);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100486bac();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_170 = (char *)((ulong)local_170 & 0xffffffffffffff00);
    local_e8 = Swift::KeyedDecodingContainer::_decode(&local_170,puVar1);
    local_170._0_1_ = 1;
    local_d8 = Swift::KeyedDecodingContainer::_decode(&local_170,puVar1);
    local_170._0_1_ = 2;
    local_c8 = Swift::KeyedDecodingContainer::_decode(&local_170,puVar1);
    local_170._0_1_ = 3;
    local_b8 = Swift::KeyedDecodingContainer::_decode(&local_170,puVar1);
    local_170 = (char *)CONCAT71(local_170._1_7_,4);
    local_a8 = Swift::KeyedDecodingContainer::_decode(&local_170,puVar1);
    puVar2 = &DAT_100fc7eb8;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    local_1e8[0] = 5;
    puVar3 = &DAT_100fc7ed0;
    FUN_10045e1bc(&DAT_100fc7ed0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_170,puVar2,local_1e8,puVar1,puVar2);
    local_98 = local_170;
    local_1e8[0] = 6;
    Swift::KeyedDecodingContainer::_decode(&local_170,puVar2,local_1e8,puVar1,puVar2,puVar3);
    local_230 = local_170;
    pcStack_90 = local_170;
    local_1e8[0] = 7;
    Swift::KeyedDecodingContainer::_decode(&local_170,puVar2,local_1e8,puVar1,puVar2,puVar3);
    local_240 = local_170;
    local_88 = local_170;
    local_1e8[0] = 8;
    Swift::KeyedDecodingContainer::_decode(&local_170,puVar2,local_1e8,puVar1,puVar2,puVar3);
    local_238 = local_170;
    pcStack_80 = local_170;
    local_f1 = 9;
    Swift::KeyedDecodingContainer::_decode(&local_f0,puVar2,&local_f1,puVar1,puVar2,puVar3);
    (**(code **)(lVar4 + 8))((long)&local_240 - extraout_x8,puVar1);
    pcStack_118 = pcStack_90;
    local_120 = local_98;
    pcStack_108 = pcStack_80;
    pcStack_110 = local_88;
    pvStack_168 = local_e8.bridgeObject;
    local_170 = local_e8.str;
    pvStack_158 = local_d8.bridgeObject;
    local_160 = local_d8.str;
    pvStack_148 = local_c8.bridgeObject;
    pcStack_150 = local_c8.str;
    local_78 = local_f0;
    local_100 = local_f0;
    pvStack_138 = local_b8.bridgeObject;
    local_140 = local_b8.str;
    pvStack_128 = local_a8.bridgeObject;
    pcStack_130 = local_a8.str;
    FUN_100486c2c(&local_170,local_1e8);
    FUN_100004594(param_2);
    FUN_10047fdb8(&local_e8);
    param_1[9] = pvStack_128;
    param_1[8] = pcStack_130;
    param_1[0xb] = pcStack_118;
    param_1[10] = local_120;
    param_1[0xd] = pcStack_108;
    param_1[0xc] = pcStack_110;
    param_1[1] = pvStack_168;
    *param_1 = local_170;
    param_1[3] = pvStack_158;
    param_1[2] = local_160;
    param_1[0xe] = local_100;
    param_1[5] = pvStack_148;
    param_1[4] = pcStack_150;
    param_1[7] = pvStack_138;
    param_1[6] = local_140;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004865a8 | FUN_1004865a8 */

void FUN_1004865a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  _swift_bridgeObjectRetain(param_3);
  SVar6.bridgeObject = (void *)0xea0000000000657a;
  SVar6.str = (char *)0x69726f687475612f;
  SVar10.bridgeObject = param_5;
  SVar10.str = param_4;
  Swift::String::append(SVar6,SVar10);
  _swift_bridgeObjectRetain(param_3);
  SVar7.bridgeObject = &DAT_e600000000000000;
  SVar7.str = (char *)0x6e656b6f742f;
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar7,SVar11);
  _swift_bridgeObjectRetain(param_3);
  SVar8.bridgeObject = (void *)0xe900000000000072;
  SVar8.str = (char *)0x657473696765722f;
  SVar12.bridgeObject = param_5;
  SVar12.str = param_4;
  Swift::String::append(SVar8,SVar12);
  _swift_bridgeObjectRetain(param_3);
  SVar9.bridgeObject = &DAT_e700000000000000;
  SVar9.str = (char *)0x656b6f7665722f;
  SVar13.bridgeObject = param_5;
  SVar13.str = param_4;
  Swift::String::append(SVar9,SVar13);
  puVar1 = &DAT_100fc8330;
  FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
  puVar2 = puVar1;
  _swift_initStaticObject();
  puVar3 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fc9188);
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fc91c0);
  puVar5 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fc91f8);
  _swift_initStaticObject(puVar1,&DAT_100fc9230);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_2;
  param_1[5] = param_3;
  param_1[6] = param_2;
  param_1[7] = param_3;
  param_1[8] = param_2;
  param_1[9] = param_3;
  param_1[10] = puVar2;
  param_1[0xb] = puVar3;
  param_1[0xc] = puVar4;
  param_1[0xd] = puVar5;
  param_1[0xe] = puVar1;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100486758 | FUN_100486758 */

void FUN_100486758(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10048676c | FUN_10048676c */

undefined1  [16] FUN_10048676c(void)

{
  return ZEXT816(0x100ed7520);
}



/* Address: 0x10048677c | FUN_10048677c */

void FUN_10048677c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  return;
}



/* Address: 0x1004867e4 | FUN_1004867e4 */

undefined8 * FUN_1004867e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  param_1[8] = param_2[8];
  uVar4 = param_2[10];
  uVar7 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar7;
  uVar5 = param_2[0xc];
  uVar8 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar8;
  uVar6 = param_2[0xe];
  uVar9 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar9;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Address: 0x1004868d4 | FUN_1004868d4 */

undefined8 * FUN_1004868d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100486a18 | FUN_100486a18 */

void FUN_100486a18(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  param_1[0xe] = param_2[0xe];
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Address: 0x100486a44 | FUN_100486a44 */

undefined8 * FUN_100486a44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(param_1[9]);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(param_1[0xb]);
  uVar2 = param_1[0xc];
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(param_1[0xd]);
  uVar2 = param_1[0xe];
  uVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100486af8 | FUN_100486af8 */

int FUN_100486af8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100486b40 | FUN_100486b40 */

void FUN_100486b40(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
      *(undefined1 *)(param_1 + 0xf) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100486b9c | FUN_100486b9c */

undefined1  [16] FUN_100486b9c(void)

{
  return ZEXT816(0x100ed75a0);
}



/* Address: 0x100486bac | FUN_100486bac */

void FUN_100486bac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4df44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4df44,&DAT_100ed76e8);
  DAT_100fc9268 = pTVar1;
  return;
}



/* Address: 0x100486bec | FUN_100486bec */

void FUN_100486bec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9278 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4def4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4def4,&DAT_100ed7658);
  DAT_100fc9278 = pTVar1;
  return;
}



/* Address: 0x100486c2c | FUN_100486c2c */

undefined8 FUN_100486c2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1004867e4(param_2,param_1,&DAT_100ed75a0);
  return param_2;
}



/* Address: 0x100486c60 | FUN_100486c60 */

undefined1  [16] FUN_100486c60(void)

{
  return ZEXT816(0x100ed7658);
}



/* Address: 0x100486c70 | FUN_100486c70 */

undefined1  [16] FUN_100486c70(void)

{
  return ZEXT816(0x100ed76e8);
}



/* Address: 0x100486c80 | thunk_FUN_100486c84 */

void thunk_FUN_100486c84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9290 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dddc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dddc,&DAT_100ed76e8);
  DAT_100fc9290 = pTVar1;
  return;
}



/* Address: 0x100486c84 | FUN_100486c84 */

void FUN_100486c84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9290 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dddc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dddc,&DAT_100ed76e8);
  DAT_100fc9290 = pTVar1;
  return;
}



/* Address: 0x100486cc4 | thunk_FUN_100486cc8 */

void thunk_FUN_100486cc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9298 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4decc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4decc,&DAT_100ed7658);
  DAT_100fc9298 = pTVar1;
  return;
}



/* Address: 0x100486cc8 | FUN_100486cc8 */

void FUN_100486cc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9298 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4decc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4decc,&DAT_100ed7658);
  DAT_100fc9298 = pTVar1;
  return;
}



/* Address: 0x100486d08 | thunk_FUN_100486d0c */

void thunk_FUN_100486d0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4de2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4de2c,&DAT_100ed7658);
  DAT_100fc92a0 = pTVar1;
  return;
}



/* Address: 0x100486d0c | FUN_100486d0c */

void FUN_100486d0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4de2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4de2c,&DAT_100ed7658);
  DAT_100fc92a0 = pTVar1;
  return;
}



/* Address: 0x100486d4c | thunk_FUN_100486d50 */

void thunk_FUN_100486d50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4de04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4de04,&DAT_100ed7658);
  DAT_100fc92a8 = pTVar1;
  return;
}



/* Address: 0x100486d50 | FUN_100486d50 */

void FUN_100486d50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4de04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4de04,&DAT_100ed7658);
  DAT_100fc92a8 = pTVar1;
  return;
}



/* Address: 0x100486d90 | thunk_FUN_100486d94 */

void thunk_FUN_100486d94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dd3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dd3c,&DAT_100ed76e8);
  DAT_100fc92b0 = pTVar1;
  return;
}



/* Address: 0x100486d94 | FUN_100486d94 */

void FUN_100486d94(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dd3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dd3c,&DAT_100ed76e8);
  DAT_100fc92b0 = pTVar1;
  return;
}



/* Address: 0x100486dd4 | thunk_FUN_100486dd8 */

void thunk_FUN_100486dd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dd14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dd14,&DAT_100ed76e8);
  DAT_100fc92b8 = pTVar1;
  return;
}



/* Address: 0x100486dd8 | FUN_100486dd8 */

void FUN_100486dd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc92b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4dd14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4dd14,&DAT_100ed76e8);
  DAT_100fc92b8 = pTVar1;
  return;
}



/* Address: 0x100486e18 | thunk_FUN_10000862c */

void thunk_FUN_10000862c(void)

{
  thunk_FUN_10000862c();
  return;
}



/* Address: 0x100486e1c | FUN_100486e1c */

void FUN_100486e1c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  puVar1 = &DAT_100fc9468;
  FUN_1000037f0(&DAT_100fc9468,&DAT_100c4dfb0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  lVar3 = 0;
  FUN_1009edba8();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_100486ea0,0,0);
  return;
}



/* Address: 0x100486ea0 | FUN_100486ea0 */

void FUN_100486ea0(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x28)) {
    FUN_1009e9628(*(undefined8 *)(unaff_x22 + 0x40));
    plVar2 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100486f04;
    FUN_1009e9918();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100486f04);
  (*pcVar1)();
}



/* Address: 0x100486f04 | FUN_100486f04 */

void FUN_100486f04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  *(undefined8 *)(lVar2 + 0x58) = param_2;
  *(undefined8 *)(lVar2 + 0x60) = param_3;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100486f68;
  }
  else {
    pcVar1 = FUN_100487128;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100486f68 | FUN_100486f68 */

void FUN_100486f68(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  if (lVar5 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_1006116e8();
    uVar4 = *param_1;
    uVar6 = param_1[1];
    uVar1 = param_1[2];
    _swift_retain(uVar4);
    FUN_10005241c(uVar3,FUN_1009edba8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001004870b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar4,uVar6,(ulong)(uint7)uVar1);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(ulong *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x10) = lVar5;
  *(int *)(unaff_x22 + 0x18) = *(int *)(unaff_x22 + 0x58);
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x5c);
  *(int *)(unaff_x22 + 0x20) = (int)uVar3;
  *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar3 >> 0x20);
  *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar3 >> 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = (ulong)(uint)(*(int *)(unaff_x22 + 0x5c) - *(int *)(unaff_x22 + 0x58));
  if (uVar6 < uVar4) {
    FUN_10048f5b0();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = uVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    FUN_10005241c(uVar3,FUN_1009edba8);
    _swift_release(lVar5);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100487040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_1000c495c(uVar3,*(undefined8 *)(unaff_x22 + 0x38),FUN_1009edba8);
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100487174;
  FUN_1004878ec(uVar6 - uVar4,unaff_x22 + 0x10);
  return;
}



/* Address: 0x100487128 | FUN_100487128 */

void FUN_100487128(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x40),FUN_1009edba8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100487170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100487174 | FUN_100487174 */

void FUN_100487174(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004871d0;
  }
  else {
    pcVar1 = FUN_100487264;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004871d0 | FUN_1004871d0 */

void FUN_1004871d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint7 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x38),&DAT_100fc9468,&DAT_100c4dfb0);
  FUN_10005241c(uVar2,FUN_1009edba8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(uint7 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100487260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3,(ulong)uVar4);
  return;
}



/* Address: 0x100487264 | FUN_100487264 */

void FUN_100487264(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x38),&DAT_100fc9468,&DAT_100c4dfb0);
  FUN_10005241c(uVar1,FUN_1009edba8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001004872cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004872d0 | FUN_1004872d0 */

void FUN_1004872d0(undefined8 param_1,undefined8 param_2,CharacterSet param_3)

{
  CharacterSet CVar1;
  String charactersIn;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  FUN_1000ce204(CVar1.unknown,&DAT_100fc94a8);
  FUN_1000cd990(CVar1.unknown,&DAT_100fc94a8);
  Foundation::CharacterSet::get_alphanumerics(CVar1);
  charactersIn.bridgeObject = &DAT_e400000000000000;
  charactersIn.str = (char *)0x7e5f2e2d;
  Foundation::CharacterSet::insert(charactersIn,param_3);
  return;
}



/* Address: 0x10048732c | FUN_10048732c */

undefined * FUN_10048732c(undefined *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_60;
  undefined8 uStack_58;
  undefined *local_48;
  
  ppuVar2 = &local_60;
  _swift_bridgeObjectRetain(param_2);
  FUN_1004873f4(&local_60,0,0,1,param_1,param_2);
  puVar1 = local_60;
  if (ppuVar2 == (undefined **)0x0) {
    lVar4 = *param_3;
    uStack_58 = param_2;
    local_60 = param_1;
    local_48 = PTR___type_metadata_for_Swift__StringGuts_100eace60;
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    puVar3 = (undefined *)ppuVar2;
    _swift_getObjectType();
    lVar4 = *param_3;
    local_60 = (undefined *)ppuVar2;
    local_48 = puVar3;
  }
  if (lVar4 != 0) {
    FUN_10000cbfc(&local_60,lVar4);
    *param_3 = lVar4 + 0x20;
  }
  FUN_100004594(&local_60);
  return puVar1;
}



/* Address: 0x1004873f4 | FUN_1004873f4 */

void FUN_1004873f4(ulong *param_1,void *param_2,long param_3,char param_4,_StringObject param_5,
                  ulong param_6)

{
  code *pcVar1;
  UnsafeBufferPointer<__int8> UVar2;
  ulong uVar3;
  undefined *local_40;
  ulong uStack_38;
  
  if ((param_6 >> 0x3d & 1) == 0) {
    if ((param_6 >> 0x3c & 1) == 0) {
      if (((ulong)param_5.unknown >> 0x3c & 1) == 0) {
        UVar2 = Swift::_StringObject::get_sharedUTF8(param_5);
        if (UVar2.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100487504);
          (*pcVar1)();
        }
      }
      else {
        UVar2.unknown = (undefined *)((param_6 & 0xfffffffffffffff) + 0x20);
      }
      *param_1 = (ulong)UVar2.unknown;
      if ((long)param_6 < 0) {
        return;
      }
      _swift_unknownObjectRetain(param_6 & 0xfffffffffffffff);
      return;
    }
  }
  else if (((param_4 != '\x01') && (param_2 != (void *)0x0)) &&
          (uVar3 = param_6 >> 0x38 & 0xf, uVar3 < (ulong)(param_3 - (long)param_2))) {
    uStack_38 = param_6 & 0xffffffffffffff;
    local_40 = param_5.unknown;
    _memcpy(param_2,&local_40,uVar3);
    *(undefined1 *)((long)param_2 + uVar3) = 0;
    *param_1 = (ulong)param_2;
    return;
  }
  FUN_100487504(param_5.unknown);
  *param_1 = param_6;
  return;
}



/* Address: 0x100487504 | FUN_100487504 */

void FUN_100487504(void)

{
  FUN_100487568();
  FUN_1000037f0(&DAT_100fc83a0,&DAT_100c4cf30);
  _swift_initStaticObject();
  FUN_10048769c();
  return;
}



/* Address: 0x100487568 | FUN_100487568 */

undefined * FUN_100487568(UTF8View param_1,undefined *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  UnsafeMutableBufferPointer<__int8> into;
  UnsafeBufferPointer<__int8> UVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_50;
  ulong uStack_48;
  
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    puVar7 = param_1.unknown & 0xffffffffffff;
    puVar8 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    puVar2 = puVar7;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar2 = puVar8;
    }
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar2 != (undefined *)0x0) {
      FUN_10048778c(puVar2,0);
      _Var4.unknown = puVar2;
      if (((ulong)param_2 >> 0x3d & 1) == 0) {
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          if ((long)puVar7 < (long)param_2) goto LAB_100487698;
        }
        else {
          UVar5.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          param_2 = puVar7;
          if (SBORROW8((long)puVar7,(long)puVar7)) {
LAB_100487698:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10048769c);
            (*pcVar1)();
          }
        }
        _memcpy(puVar2 + 0x20,UVar5.unknown,(size_t)param_2);
        if (param_2 != puVar7) {
LAB_100487604:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100487608);
          (*pcVar1)();
        }
      }
      else {
        uStack_48 = (ulong)param_2 & 0xffffffffffffff;
        local_50 = param_1.unknown;
        _memcpy(puVar2 + 0x20,&local_50,(size_t)puVar8);
      }
    }
  }
  else {
    _Var3.unknown = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var3.unknown != (undefined *)0x0) {
      _Var4.unknown = _Var3.unknown;
      FUN_10048778c(_Var3.unknown,0);
      into.unknown = _Var4.unknown + 0x20;
      _Var6.unknown = _Var3.unknown;
      Swift::_StringGuts::__foreignCopyUTF8(into,_Var3);
      if (((uint)_Var6.unknown & 0xff) == 1) goto LAB_100487698;
      if (into.unknown != _Var3.unknown) goto LAB_100487604;
    }
  }
  return _Var4.unknown;
}



/* Address: 0x10048769c | FUN_10048769c */

void FUN_10048769c(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100487780);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1004877fc();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100487784);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100487788);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) + 0x20),(void *)(param_1 + 0x20),uVar5);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10048778c);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x10048778c | FUN_10048778c */

undefined * FUN_10048778c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fc83a0;
    FUN_1000037f0(&DAT_100fc83a0,&DAT_100c4cf30);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1004877fc | FUN_1004877fc */

undefined * FUN_1004877fc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004878ec);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc83a0;
    FUN_1000037f0(&DAT_100fc83a0,&DAT_100c4cf30);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1004878ec | FUN_1004878ec */

void FUN_1004878ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  puVar1 = &DAT_100fc9468;
  FUN_1000037f0(&DAT_100fc9468,&DAT_100c4dfb0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  lVar3 = 0;
  FUN_1009edba8();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  _swift_task_switch(FUN_100487974,0,0);
  return;
}



/* Address: 0x100487974 | FUN_100487974 */

void FUN_100487974(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x40)) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_100011090(*(undefined8 *)(unaff_x22 + 0x50),uVar1,&DAT_100fc9468,&DAT_100c4dfb0);
    FUN_1000523d8(uVar1,uVar2,FUN_1009edba8);
    plVar4 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100487a00;
    FUN_1009e9918();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100487a00);
  (*pcVar3)();
}



/* Address: 0x100487a00 | FUN_100487a00 */

void FUN_100487a00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_3;
    pcVar1 = FUN_100487a80;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_100487cd8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100487a80 | FUN_100487a80 */

void FUN_100487a80(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  size_t sVar19;
  long unaff_x22;
  long lVar20;
  
  lVar15 = *(long *)(unaff_x22 + 0x78);
  if (lVar15 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10005241c(uVar6,FUN_1009edba8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(ulong *)(unaff_x22 + 0x80);
    uVar5 = *(ulong *)(unaff_x22 + 0x88);
    uVar14 = (ulong)(uint)((int)(uVar3 >> 0x20) - (int)uVar3);
    lVar13 = *(long *)(unaff_x22 + 0x70) + uVar14;
    *(long *)(unaff_x22 + 0x90) = lVar13;
    if (SCARRY8(*(long *)(unaff_x22 + 0x70),uVar14)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100487cd0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar18 = *(long *)(unaff_x22 + 0x40);
    if (lVar13 <= lVar18) {
      uVar7 = *(uint *)(*(long *)(unaff_x22 + 0x48) + 0xc);
      _swift_beginAccess(lVar15 + 0x18,unaff_x22 + 0x10,0,0);
      sVar19 = (uVar3 >> 0x20) - (uVar3 & 0xffffffff);
      uVar17 = (uint)sVar19;
      if (CARRY4(uVar7,uVar17)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100487cd4);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar13 = *(long *)(lVar15 + 0x18);
      uVar14 = **(ulong **)(unaff_x22 + 0x48);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = (uint)uVar14;
      if ((uVar14 & 1) == 0) {
        uVar8 = *(uint *)(*(long *)(unaff_x22 + 0x48) + 0x10);
        iVar1 = 0;
        if (uVar8 <= uVar7 + uVar17) {
          iVar1 = (uVar7 + uVar17) - uVar8;
        }
        FUN_1000d2130();
        FUN_100612358(iVar1,uVar12 & 1);
      }
      uVar10 = *(ushort *)(unaff_x22 + 0x8c);
      plVar16 = *(long **)(unaff_x22 + 0x48);
      FUN_100612380(sVar19,uVar7);
      lVar20 = *plVar16;
      lVar18 = plVar16[2];
      uVar11 = *(undefined2 *)((long)plVar16 + 0x14);
      uVar9 = *(undefined1 *)((long)plVar16 + 0x16);
      _swift_beginAccess(lVar20 + 0x18,unaff_x22 + 0x28,0,0);
      uVar8 = (uint)CONCAT21(uVar11,uVar9);
      uVar12 = (int)lVar18 - uVar8;
      if (uVar7 <= uVar12) {
        uVar12 = uVar7;
      }
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar12;
      }
      _memmove((void *)(*(long *)(lVar20 + 0x18) + (ulong)uVar8 + (ulong)uVar2),
               (void *)(lVar13 + (ulong)uVar10 * 0x100 + (uVar5 >> 0x30 & 0xff) +
                       (uVar3 & 0xffffffff)),sVar19);
      _swift_release(lVar15);
      if (!CARRY4(*(uint *)((long)plVar16 + 0xc),uVar17)) {
        *(uint *)(*(long *)(unaff_x22 + 0x48) + 0xc) = *(uint *)((long)plVar16 + 0xc) + uVar17;
        plVar16 = (long *)0xa0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa0) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_100487d30;
        FUN_1009e9918();
        return;
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100487cd8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    FUN_10048f5b0();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = lVar18;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    _swift_release(lVar15);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10005241c(uVar6,FUN_1009edba8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100487b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100487cd8 | FUN_100487cd8 */

void FUN_100487cd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_10005241c(uVar2,FUN_1009edba8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100487d2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100487d30 | FUN_100487d30 */

void FUN_100487d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_3;
    pcVar1 = FUN_100487a80;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_100487cd8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100487db4 | FUN_100487db4 */

void FUN_100487db4(ulong *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  __DataStorage *p_Var6;
  ulong *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  __DataStorage *p_Var11;
  long lVar12;
  uint uVar13;
  long lVar14;
  undefined4 uVar15;
  undefined2 uVar16;
  undefined1 uVar17;
  __DataStorage local_a8 [16];
  __DataStorage *local_98;
  undefined4 local_90;
  uint local_8c;
  uint local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar9 = (uint)(param_2 >> 0x20);
  uVar5 = uVar9 >> 0x1e;
  iVar10 = (int)param_1;
  iVar8 = (int)((ulong)param_1 >> 0x20);
  if (uVar9 >> 0x1e < 2) {
    if (uVar5 == 0) {
      p_Var6 = (__DataStorage *)(param_2 >> 0x30 & 0xff);
    }
    else {
      if (SBORROW4(iVar8,iVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10048810c);
        (*pcVar3)();
      }
      p_Var6 = (__DataStorage *)(long)(iVar8 - iVar10);
LAB_100487e2c:
      if ((long)p_Var6 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100488100);
        (*pcVar3)();
      }
    }
    puVar7 = (ulong *)0x0;
    if (p_Var6 == (__DataStorage *)0x0) goto LAB_100487e80;
    if ((ulong)p_Var6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100488108);
      (*pcVar3)();
    }
    FUN_100488140(p_Var6,param_3,param_4,param_5,param_6);
    p_Var11 = p_Var6 + 0x10;
    _swift_beginAccess(p_Var11,auStack_80,0,0);
    uVar15 = 0;
    uVar9 = 0;
    uVar16 = 0;
    uVar17 = 0;
    uVar13 = *(uint *)(p_Var6 + 0x10);
  }
  else {
    puVar7 = param_1;
    if (uVar5 == 2) {
      p_Var6 = (__DataStorage *)(param_1[3] - param_1[2]);
      if (SBORROW8(param_1[3],param_1[2])) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100487e1c);
        (*pcVar3)();
      }
      goto LAB_100487e2c;
    }
LAB_100487e80:
    FUN_1006116e8();
    p_Var6 = (__DataStorage *)*puVar7;
    uVar15 = (undefined4)puVar7[1];
    uVar9 = *(uint *)((long)puVar7 + 0xc);
    uVar13 = (uint)puVar7[2];
    uVar16 = *(undefined2 *)((long)puVar7 + 0x14);
    uVar17 = *(undefined1 *)((long)puVar7 + 0x16);
    p_Var11 = p_Var6;
    _swift_retain();
  }
  local_98 = p_Var6;
  local_90 = uVar15;
  local_8c = uVar9;
  local_88 = uVar13;
  local_84 = uVar16;
  local_82 = uVar17;
  if (uVar5 < 2) {
    if (uVar5 == 0) {
      local_a8[0] = SUB81(param_1,0);
      local_a8[1] = SUB81((ulong)param_1 >> 8,0);
      local_a8[2] = SUB81((ulong)param_1 >> 0x10,0);
      local_a8[3] = SUB81((ulong)param_1 >> 0x18,0);
      local_a8[4] = SUB81((ulong)param_1 >> 0x20,0);
      local_a8[5] = SUB81((ulong)param_1 >> 0x28,0);
      local_a8[6] = SUB81((ulong)param_1 >> 0x30,0);
      local_a8[7] = SUB81((ulong)param_1 >> 0x38,0);
      local_a8[8] = SUB81(param_2,0);
      local_a8[9] = SUB81(param_2 >> 8,0);
      local_a8[10] = SUB81(param_2 >> 0x10,0);
      local_a8[0xb] = SUB81(param_2 >> 0x18,0);
      local_a8[0xc] = SUB81(param_2 >> 0x20,0);
      p_Var11 = (__DataStorage *)(param_2 >> 0x30 & 0xff);
      local_a8[0xd] = SUB81(param_2 >> 0x28,0);
      uVar5 = uVar9 + (uint)p_Var11;
      if (CARRY4(uVar9,(uint)p_Var11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100488110);
        (*pcVar3)();
      }
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = (uint)p_Var6;
      if (((ulong)p_Var6 & 1) == 0) {
        iVar8 = 0;
        if (uVar13 <= uVar5) {
          iVar8 = uVar5 - uVar13;
        }
        FUN_1000d2130();
        FUN_100612358(iVar8,uVar4 & 1);
      }
      FUN_100612380(p_Var11,uVar9);
      FUN_10061258c(local_a8,local_a8 + (long)p_Var11,uVar9);
      goto LAB_100488098;
    }
    lVar14 = (long)iVar10;
    lVar12 = ((long)param_1 >> 0x20) - lVar14;
    if ((long)param_1 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100488114);
      (*pcVar3)();
    }
    Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
    if (p_Var11 != (__DataStorage *)0x0) {
      p_Var6 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
      if (SBORROW8(lVar14,(long)p_Var6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10048811c);
        (*pcVar3)();
      }
      p_Var11 = p_Var11 + (lVar14 - (long)p_Var6);
      goto LAB_100487ff8;
    }
    Foundation::__DataStorage::get__length
              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100488080:
    p_Var11 = (__DataStorage *)0x0;
    p_Var6 = (__DataStorage *)0x0;
  }
  else {
    if (uVar5 != 2) {
      local_a8[8] = (__DataStorage)0x0;
      local_a8[9] = (__DataStorage)0x0;
      local_a8[10] = (__DataStorage)0x0;
      local_a8[0xb] = (__DataStorage)0x0;
      local_a8[0xc] = (__DataStorage)0x0;
      local_a8[0xd] = (__DataStorage)0x0;
      local_a8[0] = (__DataStorage)0x0;
      local_a8[1] = (__DataStorage)0x0;
      local_a8[2] = (__DataStorage)0x0;
      local_a8[3] = (__DataStorage)0x0;
      local_a8[4] = (__DataStorage)0x0;
      local_a8[5] = (__DataStorage)0x0;
      local_a8[6] = (__DataStorage)0x0;
      local_a8[7] = (__DataStorage)0x0;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = (uint)p_Var6;
      if (((ulong)p_Var6 & 1) == 0) {
        iVar8 = 0;
        if (uVar13 <= uVar9) {
          iVar8 = uVar9 - uVar13;
        }
        FUN_1000d2130();
        FUN_100612358(iVar8,uVar5 & 1);
      }
      FUN_100612380(0,uVar9);
      FUN_10061258c(local_a8,local_a8,uVar9);
      p_Var11 = (__DataStorage *)0x0;
      goto LAB_100488098;
    }
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
    p_Var6 = (__DataStorage *)0x0;
    if (p_Var11 != (__DataStorage *)0x0) {
      p_Var6 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var11);
      if (SBORROW8(uVar1,(long)p_Var6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100488118);
        (*pcVar3)();
      }
      p_Var11 = p_Var11 + (uVar1 - (long)p_Var6);
    }
    lVar12 = uVar2 - uVar1;
    if (SBORROW8(uVar2,uVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100487fc4);
      (*pcVar3)();
    }
LAB_100487ff8:
    lVar14 = Foundation::__DataStorage::get__length
                       ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var6);
    if (p_Var11 == (__DataStorage *)0x0) goto LAB_100488080;
    if (lVar12 <= lVar14) {
      lVar14 = lVar12;
    }
    p_Var6 = p_Var11 + lVar14;
  }
  FUN_1006124ec(p_Var11,p_Var6,uVar9);
LAB_100488098:
  if (CARRY4(local_8c,(uint)p_Var11)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100488104);
    (*pcVar3)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_98);
}



/* Address: 0x100488120 | FUN_100488120 */

undefined1  [16] FUN_100488120(ulong param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10048813c);
    (*pcVar2)();
  }
  if (param_1 < 0x100) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_1 << 0x30;
    return auVar1 << 0x40;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100488140);
  (*pcVar2)();
}



/* Address: 0x100488140 | FUN_100488140 */

void FUN_100488140(int param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  if (param_1 == 0) {
    uVar5 = 0;
  }
  else {
    uVar1 = param_1 - 1U | param_1 - 1U >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar5 = uVar1 + 1;
    if (uVar1 == 0xffffffff) {
      uVar5 = 0xffffffff;
    }
  }
  uVar3 = (ulong)uVar5;
  (*param_2)();
  if (uVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004881dc);
    (*pcVar2)();
  }
  lVar4 = 0;
  FUN_1006140ec();
  _swift_allocObject();
  *(uint *)(lVar4 + 0x10) = uVar5;
  *(ulong *)(lVar4 + 0x18) = uVar3;
  *(code **)(lVar4 + 0x20) = param_2;
  *(undefined8 *)(lVar4 + 0x28) = param_3;
  *(undefined8 *)(lVar4 + 0x30) = param_4;
  *(undefined8 *)(lVar4 + 0x38) = param_5;
  return;
}


