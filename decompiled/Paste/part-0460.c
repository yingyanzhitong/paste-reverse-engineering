/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10057c118 | FUN_10057c118 */

void FUN_10057c118(Hasher param_1)

{
  String *unaff_x20;
  void *pvVar1;
  Hasher HVar2;
  char *pcVar3;
  Hasher HVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  HVar2.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar1 = unaff_x20[1].bridgeObject;
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    pcVar3 = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar2);
    SVar5.bridgeObject = pvVar1;
    SVar5.str = pcVar3;
    Swift::String::hash(param_1,SVar5);
  }
  HVar2.unknown = unaff_x20[2].str;
  Swift::String::hash(param_1,unaff_x20[2]);
  pvVar1 = unaff_x20[3].bridgeObject;
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
    pvVar1 = unaff_x20[4].bridgeObject;
    HVar4.unknown = HVar2.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[3].str;
    Swift::Hasher::_combine(1,HVar2);
    SVar6.bridgeObject = pvVar1;
    SVar6.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar6);
    pvVar1 = unaff_x20[4].bridgeObject;
  }
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    pcVar3 = unaff_x20[4].str;
    Swift::Hasher::_combine(1,HVar4);
    SVar7.bridgeObject = pvVar1;
    SVar7.str = pcVar3;
    Swift::String::hash(param_1,SVar7);
    HVar4.unknown = pcVar3;
  }
  if (*(char *)&unaff_x20[5].bridgeObject == '\x01') {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    pcVar3 = unaff_x20[5].str;
    Swift::Hasher::_combine(1,HVar4);
    Swift::Hasher::_combine((__uint64)pcVar3,HVar4);
  }
  FUN_10055fb80(param_1.unknown);
  HVar2.unknown = unaff_x20[8].bridgeObject;
  if (HVar2.unknown == (undefined *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
    pcVar3 = unaff_x20[9].str;
    HVar2.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004d7564(param_1.unknown);
    pcVar3 = unaff_x20[9].str;
  }
  if (pcVar3 == (char *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
    return;
  }
  Swift::Hasher::_combine(1,HVar2);
  FUN_1004df778(param_1.unknown,pcVar3);
  return;
}



/* Address: 0x10057c2d4 | FUN_10057c2d4 */

void FUN_10057c2d4(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10057c118();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057c310 | thunk_FUN_10057c118 */

void thunk_FUN_10057c118(void)

{
  FUN_10057c118();
  return;
}



/* Address: 0x10057c314 | FUN_10057c314 */

void FUN_10057c314(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10057c118();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057c34c | FUN_10057c34c */

void FUN_10057c34c(void)

{
  FUN_10057a798();
  return;
}



/* Address: 0x10057c360 | FUN_10057c360 */

uint FUN_10057c360(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar1 = 0;
  uStack_f8 = param_1[0xd];
  local_100 = param_1[0xc];
  uStack_e8 = param_1[0xf];
  uStack_f0 = param_1[0xe];
  uStack_d8 = param_1[0x11];
  local_e0 = param_1[0x10];
  local_d0 = param_1[0x12];
  uStack_138 = param_1[5];
  local_140 = param_1[4];
  uStack_128 = param_1[7];
  uStack_130 = param_1[6];
  uStack_118 = param_1[9];
  local_120 = param_1[8];
  uStack_108 = param_1[0xb];
  uStack_110 = param_1[10];
  uStack_158 = param_1[1];
  local_160 = *param_1;
  uStack_148 = param_1[3];
  uStack_150 = param_1[2];
  uStack_58 = param_2[0xd];
  local_60 = param_2[0xc];
  uStack_48 = param_2[0xf];
  uStack_50 = param_2[0xe];
  uStack_38 = param_2[0x11];
  local_40 = param_2[0x10];
  local_30 = param_2[0x12];
  uStack_98 = param_2[5];
  local_a0 = param_2[4];
  uStack_88 = param_2[7];
  uStack_90 = param_2[6];
  uStack_78 = param_2[9];
  local_80 = param_2[8];
  uStack_68 = param_2[0xb];
  uStack_70 = param_2[10];
  uStack_b8 = param_2[1];
  local_c0 = *param_2;
  uStack_a8 = param_2[3];
  uStack_b0 = param_2[2];
  FUN_10057f548(&local_160,&local_c0);
  return uVar1 & 1;
}



/* Address: 0x10057c3f0 | FUN_10057c3f0 */

char * FUN_10057c3f0(void)

{
  return "resources/list";
}



/* Address: 0x10057c3fc | FUN_10057c3fc */

undefined1  [16] FUN_10057c3fc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee007473696c2f73;
  auVar1._0_8_ = 0x656372756f736572;
  return auVar1;
}



/* Address: 0x10057c420 | thunk_FUN_100573f54 */

void thunk_FUN_100573f54(void)

{
  FUN_100573f54();
  return;
}



/* Address: 0x10057c424 | FUN_10057c424 */

String FUN_10057c424(void)

{
  String SVar1;
  
  FUN_10058156c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057c44c | FUN_10057c44c */

String FUN_10057c44c(void)

{
  String SVar1;
  
  FUN_10058156c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057c474 | thunk_FUN_10055a010 */

void thunk_FUN_10055a010(void)

{
  FUN_10055a010();
  return;
}



/* Address: 0x10057c478 | FUN_10057c478 */

void FUN_10057c478(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd14e0;
  FUN_1000f7830(&DAT_100fd14e0,&DAT_100c5cfd0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10058156c();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10057c56c | thunk_FUN_10055a158 */

void thunk_FUN_10055a158(void)

{
  FUN_10055a158();
  return;
}



/* Address: 0x10057c570 | thunk_FUN_10055a1b4 */

void thunk_FUN_10055a1b4(void)

{
  FUN_10055a1b4();
  return;
}



/* Address: 0x10057c574 | FUN_10057c574 */

undefined1  [16] FUN_10057c574(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = &DAT_100fd14f0;
  FUN_1000f7830(&DAT_100fd14f0,&DAT_100c5cfd8);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined **)(param_1 + 0x18);
  puVar2 = param_1;
  FUN_100004640(param_1,puVar4);
  FUN_10058156c();
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



/* Address: 0x10057c684 | thunk_FUN_10055a334 */

void thunk_FUN_10055a334(void)

{
  FUN_10055a334();
  return;
}



/* Address: 0x10057c688 | thunk_FUN_10055a3a0 */

void thunk_FUN_10055a3a0(void)

{
  FUN_10055a3a0();
  return;
}



/* Address: 0x10057c68c | thunk_FUN_10055a404 */

void thunk_FUN_10055a404(void)

{
  FUN_10055a404();
  return;
}



/* Address: 0x10057c690 | FUN_10057c690 */

void FUN_10057c690(void)

{
  FUN_10057db90();
  return;
}



/* Address: 0x10057c6c4 | FUN_10057c6c4 */

void FUN_10057c6c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd14e0;
  FUN_1000f7830(&DAT_100fd14e0,&DAT_100c5cfd0);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10058156c();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10057c7b4 | thunk_FUN_10055a684 */

void thunk_FUN_10055a684(void)

{
  FUN_10055a684();
  return;
}



/* Address: 0x10057c7b8 | FUN_10057c7b8 */

void FUN_10057c7b8(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar2 = (char *)0x737275437478656e;
  if (cVar1 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar2 = (char *)0x6174656d5f;
  }
  HVar4.unknown = (undefined1 *)0xe900000000000073;
  pcVar3 = (char *)0x656372756f736572;
  if (cVar1 != '\0') {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10057c85c | FUN_10057c85c */

void FUN_10057c85c(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  String SVar5;
  
  puVar4 = (undefined1 *)0xea0000000000726f;
  pcVar2 = (char *)0x737275437478656e;
  if (*unaff_x20 != '\x01') {
    puVar4 = &DAT_e500000000000000;
    pcVar2 = (char *)0x6174656d5f;
  }
  puVar1 = (undefined1 *)0xe900000000000073;
  pcVar3 = (char *)0x656372756f736572;
  if (*unaff_x20 != '\0') {
    puVar1 = puVar4;
    pcVar3 = pcVar2;
  }
  SVar5.bridgeObject = puVar1;
  SVar5.str = pcVar3;
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(puVar1);
  return;
}



/* Address: 0x10057c8dc | FUN_10057c8dc */

void FUN_10057c8dc(__int64 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar5 = (undefined1 *)0xea0000000000726f;
  pcVar2 = (char *)0x737275437478656e;
  if (cVar1 != '\x01') {
    puVar5 = &DAT_e500000000000000;
    pcVar2 = (char *)0x6174656d5f;
  }
  HVar4.unknown = (undefined1 *)0xe900000000000073;
  pcVar3 = (char *)0x656372756f736572;
  if (cVar1 != '\0') {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10057c97c | FUN_10057c97c */

void FUN_10057c97c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd1cd8);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10057c9b0 | FUN_10057c9b0 */

void FUN_10057c9b0(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  
  puVar4 = (undefined1 *)0xea0000000000726f;
  uVar2 = 0x737275437478656e;
  if (*unaff_x20 != '\x01') {
    puVar4 = &DAT_e500000000000000;
    uVar2 = 0x6174656d5f;
  }
  puVar1 = (undefined1 *)0xe900000000000073;
  uVar3 = 0x656372756f736572;
  if (*unaff_x20 != '\0') {
    puVar1 = puVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar1;
  return;
}



/* Address: 0x10057ca14 | FUN_10057ca14 */

undefined1  [16] FUN_10057ca14(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  puVar4 = (undefined1 *)0xea0000000000726f;
  uVar2 = 0x737275437478656e;
  if (*unaff_x20 != '\x01') {
    puVar4 = &DAT_e500000000000000;
    uVar2 = 0x6174656d5f;
  }
  puVar1 = (undefined1 *)0xe900000000000073;
  uVar3 = 0x656372756f736572;
  if (*unaff_x20 != '\0') {
    puVar1 = puVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x10057ca74 | FUN_10057ca74 */

void FUN_10057ca74(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fd1cd8);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x10057caa0 | FUN_10057caa0 */

void FUN_10057caa0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd1ea8;
  FUN_1000f7830(&DAT_100fd1ea8,&DAT_100c5eea8);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10057cae0 | FUN_10057cae0 */

String FUN_10057cae0(void)

{
  String SVar1;
  
  FUN_1005815ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057cb08 | FUN_10057cb08 */

String FUN_10057cb08(void)

{
  String SVar1;
  
  FUN_1005815ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057cb30 | FUN_10057cb30 */

/* WARNING: Removing unreachable block (ram,0x00010057cc68) */

void FUN_10057cb30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100fd14f8;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_1000f7830(&DAT_100fd14f8,&DAT_100c5cfe0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005815ac();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar2 = &DAT_100fd1508;
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fd1508,&DAT_100c5cfe8);
  puVar3 = puVar2;
  FUN_1005815ec();
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



/* Address: 0x10057ccec | FUN_10057ccec */

void FUN_10057ccec(undefined8 param_1)

{
  FUN_100575740(param_1,FUN_10058169c);
  return;
}



/* Address: 0x10057cd08 | thunk_FUN_10057f86c */

void thunk_FUN_10057f86c(void)

{
  FUN_10057f86c();
  return;
}



/* Address: 0x10057cd0c | FUN_10057cd0c */

void FUN_10057cd0c(void)

{
  FUN_10057e310();
  return;
}



/* Address: 0x10057cd18 | FUN_10057cd18 */

void FUN_10057cd18(void)

{
  FUN_10057e3a4();
  return;
}



/* Address: 0x10057cd24 | FUN_10057cd24 */

void FUN_10057cd24(void)

{
  undefined8 *unaff_x20;
  
  FUN_10057cd18(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10057cd30 | FUN_10057cd30 */

void FUN_10057cd30(void)

{
  FUN_10057e478();
  return;
}



/* Address: 0x10057cd3c | FUN_10057cd3c */

void FUN_10057cd3c(void)

{
  FUN_10057e524();
  return;
}



/* Address: 0x10057cd48 | FUN_10057cd48 */

void FUN_10057cd48(void)

{
  FUN_10057e5f0();
  return;
}



/* Address: 0x10057cd64 | FUN_10057cd64 */

void FUN_10057cd64(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10057cb30(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10057cd80 | FUN_10057cd80 */

void FUN_10057cd80(void)

{
  FUN_100575a74();
  return;
}



/* Address: 0x10057cd8c | FUN_10057cd8c */

char * FUN_10057cd8c(void)

{
  return "resources/read";
}



/* Address: 0x10057cd98 | FUN_10057cd98 */

undefined1  [16] FUN_10057cd98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee00646165722f73;
  auVar1._0_8_ = 0x656372756f736572;
  return auVar1;
}



/* Address: 0x10057cdbc | FUN_10057cdbc */

undefined1  [16] FUN_10057cdbc(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x697275;
  return auVar1;
}



/* Address: 0x10057cdcc | thunk_FUN_10057ee8c */

void thunk_FUN_10057ee8c(void)

{
  FUN_10057ee8c();
  return;
}



/* Address: 0x10057cdd0 | FUN_10057cdd0 */

String FUN_10057cdd0(void)

{
  String SVar1;
  
  FUN_1005818ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057cdf8 | FUN_10057cdf8 */

String FUN_10057cdf8(void)

{
  String SVar1;
  
  FUN_1005818ac();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057ce20 | FUN_10057ce20 */

void FUN_10057ce20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd1520;
  FUN_1000f7830(&DAT_100fd1520,&DAT_100c5cff0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005818ac();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10057cf14 | thunk_FUN_10020c28c */

void thunk_FUN_10020c28c(void)

{
  FUN_10020c28c();
  return;
}



/* Address: 0x10057cf18 | FUN_10057cf18 */

String FUN_10057cf18(char *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char *pcVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  
  puVar2 = &DAT_100fd1530;
  FUN_1000f7830(&DAT_100fd1530,&DAT_100c5cff8);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar3 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar6.bridgeObject = pvVar1;
  SVar6.str = pcVar3;
  FUN_1005818ac();
  KVar4 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    SVar6 = Swift::KeyedDecodingContainer::_decode(KVar4.unknown,puVar2);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar2);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return SVar6;
}



/* Address: 0x10057d028 | thunk_FUN_10020c418 */

void thunk_FUN_10020c418(void)

{
  FUN_10020c418();
  return;
}



/* Address: 0x10057d02c | thunk_FUN_10020c468 */

void thunk_FUN_10020c468(void)

{
  FUN_10020c468();
  return;
}



/* Address: 0x10057d030 | FUN_10057d030 */

void FUN_10057d030(void)

{
  FUN_10057f198();
  return;
}



/* Address: 0x10057d064 | FUN_10057d064 */

void FUN_10057d064(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd1520;
  FUN_1000f7830(&DAT_100fd1520,&DAT_100c5cff0);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005818ac();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10057d154 | thunk_FUN_10020c3e8 */

void thunk_FUN_10020c3e8(void)

{
  FUN_10020c3e8();
  return;
}



/* Address: 0x10057d158 | FUN_10057d158 */

void FUN_10057d158(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6174656d5f;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x73746e65746e6f63;
  }
  HVar3.unknown = &DAT_e500000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e800000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10057d1d4 | FUN_10057d1d4 */

void FUN_10057d1d4(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x73746e65746e6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e800000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10057d22c | FUN_10057d22c */

void FUN_10057d22c(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6174656d5f;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x73746e65746e6f63;
  }
  HVar3.unknown = &DAT_e500000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e800000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10057d2a4 | FUN_10057d2a4 */

void FUN_10057d2a4(void)

{
  FUN_10054220c();
  return;
}



/* Address: 0x10057d2b0 | FUN_10057d2b0 */

void FUN_10057d2b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73746e65746e6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e800000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x10057d2ec | FUN_10057d2ec */

undefined1  [16] FUN_10057d2ec(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x73746e65746e6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e800000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10057d324 | FUN_10057d324 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010057d368 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10057d324(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  __int64 _Var2;
  undefined1 uVar3;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}


