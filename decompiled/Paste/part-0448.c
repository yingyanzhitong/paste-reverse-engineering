/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10056baec | FUN_10056baec */

void FUN_10056baec(long param_1)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar1 = &DAT_100fd0560;
  FUN_1000f7830(&DAT_100fd0560,&DAT_100c5a3c0);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056d7b4();
  KVar2 = Swift::Encoder::_container();
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  local_60 = *(undefined1 *)(unaff_x20 + 4);
  local_81 = 0;
  FUN_10056d7f4();
  puVar3 = &local_80;
  Swift::KeyedEncodingContainer::_encode(puVar3,&local_81,puVar1,&DAT_100ee02e8,KVar2.unknown);
  if (unaff_x21 == 0) {
    uStack_78 = unaff_x20[6];
    local_80 = unaff_x20[5];
    uStack_68 = unaff_x20[8];
    uStack_70 = unaff_x20[7];
    local_81 = 1;
    FUN_10056d834();
    puVar4 = &local_80;
    Swift::KeyedEncodingContainer::_encode(puVar4,&local_81,puVar1,&DAT_100ee0408,puVar3);
    local_80 = unaff_x20[9];
    local_81 = 2;
    FUN_10056d874();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_80,&local_81,puVar1,&DAT_100ee0430,puVar4);
  }
  (**(code **)(lVar5 + 8))(auStack_90 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10056bc80 | FUN_10056bc80 */

void FUN_10056bc80(Hasher param_1,Hasher param_2)

{
  Hasher HVar1;
  char *pcVar2;
  void *pvVar3;
  String *unaff_x20;
  String SVar4;
  
  HVar1.unknown = unaff_x20->str;
  pvVar3 = unaff_x20->bridgeObject;
  SVar4 = *unaff_x20;
  if (*(char *)&unaff_x20[2].str == '\x01') {
    Swift::Hasher::_combine(1,param_2);
    pcVar2 = HVar1.unknown;
  }
  else {
    pcVar2 = unaff_x20[1].str;
    pvVar3 = unaff_x20[1].bridgeObject;
    Swift::Hasher::_combine(0,param_2);
    Swift::String::hash(param_1,SVar4);
    if (pvVar3 == (void *)0x0) {
      Swift::Hasher::_combine(0,HVar1);
      goto LAB_10056bcfc;
    }
    Swift::Hasher::_combine(1,HVar1);
  }
  SVar4.bridgeObject = pvVar3;
  SVar4.str = pcVar2;
  Swift::String::hash(param_1,SVar4);
LAB_10056bcfc:
  HVar1.unknown = unaff_x20[3].bridgeObject;
  SVar4 = *(String *)&unaff_x20[3].bridgeObject;
  Swift::String::hash(param_1,*(String *)&unaff_x20[2].bridgeObject);
  Swift::String::hash(param_1,SVar4);
  pvVar3 = unaff_x20[4].bridgeObject;
  if (pvVar3 != (void *)0x0) {
    Swift::Hasher::_combine(1,HVar1);
    FUN_1004df90c(param_1.unknown,pvVar3);
    return;
  }
  Swift::Hasher::_combine(0,HVar1);
  return;
}



/* Address: 0x10056bd70 | FUN_10056bd70 */

void FUN_10056bd70(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10056bc80();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10056bdac | FUN_10056bdac */

void FUN_10056bdac(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_10056d9c8(&local_70);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_48;
    param_1[4] = local_50;
    param_1[7] = uStack_38;
    param_1[6] = uStack_40;
    param_1[9] = uStack_28;
    param_1[8] = local_30;
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
  }
  return;
}



/* Address: 0x10056bdf4 | thunk_FUN_10056bc80 */

void thunk_FUN_10056bc80(void)

{
  FUN_10056bc80();
  return;
}



/* Address: 0x10056bdf8 | FUN_10056bdf8 */

void FUN_10056bdf8(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10056bc80();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10056be30 | FUN_10056be30 */

void FUN_10056be30(void)

{
  FUN_10056baec();
  return;
}



/* Address: 0x10056be44 | FUN_10056be44 */

uint FUN_10056be44(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  local_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  local_50 = param_2[2];
  FUN_10056cc5c(&local_b0,&uStack_60);
  return uVar1 & 1;
}



/* Address: 0x10056be9c | FUN_10056be9c */

void FUN_10056be9c(void)

{
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x10056bec8 | FUN_10056bec8 */

void FUN_10056bec8(void)

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
    pcVar1 = (char *)0x6974656c706d6f63;
  }
  HVar3.unknown = &DAT_e500000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined1 *)0xea00000000006e6f;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10056bf48 | FUN_10056bf48 */

void FUN_10056bf48(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x6974656c706d6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = (undefined1 *)0xea00000000006e6f;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10056bfa4 | FUN_10056bfa4 */

void FUN_10056bfa4(__int64 param_1)

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
    pcVar1 = (char *)0x6974656c706d6f63;
  }
  HVar3.unknown = &DAT_e500000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined1 *)0xea00000000006e6f;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10056c020 | FUN_10056c020 */

void FUN_10056c020(void)

{
  FUN_10054220c();
  return;
}



/* Address: 0x10056c02c | FUN_10056c02c */

void FUN_10056c02c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6974656c706d6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = (undefined1 *)0xea00000000006e6f;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x10056c06c | FUN_10056c06c */

undefined1  [16] FUN_10056c06c(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6174656d5f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6974656c706d6f63;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = (undefined1 *)0xea00000000006e6f;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10056c0a8 | FUN_10056c0a8 */

void FUN_10056c0a8(void)

{
  FUN_1005422ec();
  return;
}



/* Address: 0x10056c0b4 | FUN_10056c0b4 */

void FUN_10056c0b4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd07e8;
  FUN_1000f7830(&DAT_100fd07e8,&DAT_100c5b070);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10056c0f4 | FUN_10056c0f4 */

String FUN_10056c0f4(void)

{
  String SVar1;
  
  FUN_10056dc80();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056c11c | FUN_10056c11c */

String FUN_10056c11c(void)

{
  String SVar1;
  
  FUN_10056dc80();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056c144 | FUN_10056c144 */

void FUN_10056c144(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined8 *puVar3;
  long lVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd0588;
  local_90 = param_5;
  FUN_1000f7830(&DAT_100fd0588,&DAT_100c5a3c8);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056dc80();
  KVar2 = Swift::Encoder::_container();
  local_68 = (undefined1)param_4;
  local_51 = 0;
  local_78 = param_2;
  uStack_70 = param_3;
  local_67 = (char)((ulong)param_4 >> 8);
  FUN_10056dcc0();
  puVar3 = &local_78;
  Swift::KeyedEncodingContainer::_encode(puVar3,&local_51,puVar1,&DAT_100ee0530,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_78 = local_90;
    local_51 = 1;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_78,&local_51,puVar1,&DAT_100edcda0,puVar3);
  }
  (**(code **)(lVar4 + 8))((long)&local_90 - extraout_x8,puVar1);
  return;
}



/* Address: 0x10056c2ac | FUN_10056c2ac */

undefined8 FUN_10056c2ac(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_10056dd00();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x10056c2d0 | FUN_10056c2d0 */

undefined1  [16] FUN_10056c2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x10056c2dc | FUN_10056c2dc */

uint FUN_10056c2dc(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 >> 8 & 0xff;
}



/* Address: 0x10056c2e4 | FUN_10056c2e4 */

void FUN_10056c2e4(void)

{
  return;
}



/* Address: 0x10056c2ec | FUN_10056c2ec */

undefined1  [16] FUN_10056c2ec(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x6c61746f74;
  if (cVar5 != '\x01') {
    uVar1 = 0x65726f4d736168;
  }
  puVar2 = &DAT_e500000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e700000000000000;
  }
  uVar3 = 0x7365756c6176;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x10056c340 | FUN_10056c340 */

void FUN_10056c340(undefined1 *param_1,undefined1 param_2)

{
  FUN_10056def4();
  *param_1 = param_2;
  return;
}



/* Address: 0x10056c364 | FUN_10056c364 */

String FUN_10056c364(void)

{
  String SVar1;
  
  FUN_10056deb4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10056c38c | FUN_10056c38c */

String FUN_10056c38c(void)

{
  String SVar1;
  
  FUN_10056deb4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10056c3b4 | thunk_FUN_10056cdcc */

void thunk_FUN_10056cdcc(void)

{
  FUN_10056cdcc();
  return;
}



/* Address: 0x10056c3b8 | FUN_10056c3b8 */

void FUN_10056c3b8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [8];
  uint local_68;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar2 = &DAT_100fd05a0;
  local_68 = param_4;
  FUN_1000f7830(&DAT_100fd05a0,&DAT_100c5a3d0);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056deb4();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar3 = &DAT_100fcb568;
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
  puVar4 = &DAT_100fcbbc0;
  FUN_1004cb1cc(&DAT_100fcbbc0,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar2,puVar3,puVar4);
  uVar1 = local_68;
  if (unaff_x21 == 0) {
    local_62 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent(param_3,local_68,&local_62,puVar2);
    local_63 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1 >> 8 & 0xff,&local_63,puVar2);
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x10056c55c | FUN_10056c55c */

void FUN_10056c55c(Hasher param_1,Hasher param_2,__uint64 param_3,uint param_4)

{
  void *pvVar1;
  byte bVar2;
  Hasher HVar3;
  __uint64 _Var4;
  undefined8 *puVar5;
  String SVar6;
  
  _Var4 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar3.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var4,param_2);
  if (_Var4 != 0) {
    puVar5 = (undefined8 *)(param_2.unknown + 0x28);
    do {
      HVar3.unknown = (undefined *)puVar5[-1];
      pvVar1 = (void *)*puVar5;
      _swift_bridgeObjectRetain(pvVar1);
      SVar6.bridgeObject = pvVar1;
      SVar6.str = HVar3.unknown;
      Swift::String::hash(param_1,SVar6);
      _swift_bridgeObjectRelease(pvVar1);
      puVar5 = puVar5 + 2;
      _Var4 = _Var4 - 1;
    } while (_Var4 != 0);
  }
  if ((param_4 & 0xff) == 1) {
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    Swift::Hasher::_combine(param_3,HVar3);
  }
  if ((param_4 >> 8 & 0xff) == 2) {
    bVar2 = 0;
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    bVar2 = (byte)(param_4 >> 8) & 1;
  }
  Swift::Hasher::_combine(bVar2,HVar3);
  return;
}



/* Address: 0x10056c630 | FUN_10056c630 */

void FUN_10056c630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_10056c55c(HVar1.unknown,param_1,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10056c68c | FUN_10056c68c */

undefined1  [16] FUN_10056c68c(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_10056e000();
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x10056c6ac | FUN_10056c6ac */

void FUN_10056c6ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined2 *)(unaff_x20 + 2);
  Swift::Hasher::init(0);
  HVar4.unknown = auStack_78;
  FUN_10056c55c(HVar4.unknown,uVar1,uVar2,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10056c704 | FUN_10056c704 */

void FUN_10056c704(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10056c55c(param_1,*unaff_x20,unaff_x20[1],*(undefined2 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x10056c710 | FUN_10056c710 */

void FUN_10056c710(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined2 *)(unaff_x20 + 2);
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_78;
  FUN_10056c55c(HVar4.unknown,uVar1,uVar2,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10056c764 | FUN_10056c764 */

void FUN_10056c764(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  long unaff_x21;
  
  FUN_10056e000();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(char *)(param_1 + 2) = (char)param_4;
    *(char *)((long)param_1 + 0x11) = (char)((ushort)param_4 >> 8);
  }
  return;
}



/* Address: 0x10056c798 | FUN_10056c798 */

void FUN_10056c798(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10056c3b8(param_1,*unaff_x20,unaff_x20[1],*(undefined2 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x10056c7b4 | FUN_10056c7b4 */

void FUN_10056c7b4(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10056cdcc(*param_1,param_1[1],*(undefined2 *)(param_1 + 2),*param_2,param_2[1],
                *(undefined2 *)(param_2 + 2));
  return;
}



/* Address: 0x10056c7d0 | FUN_10056c7d0 */

undefined8 FUN_10056c7d0(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long in_x7;
  
  FUN_10056cdcc();
  if ((param_1 & 1) != 0) {
    if (param_4 == 0) {
      if (in_x7 == 0) {
        return 1;
      }
    }
    else if (in_x7 != 0) {
      _swift_bridgeObjectRetain(in_x7);
      uVar1 = param_4;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(in_x7);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x10056c854 | FUN_10056c854 */

void FUN_10056c854(Hasher param_1,Hasher param_2,__uint64 param_3,uint param_4,long param_5)

{
  void *pvVar1;
  Hasher HVar2;
  __uint64 _Var3;
  undefined8 *puVar4;
  String SVar5;
  
  _Var3 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar2.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var3,param_2);
  if (_Var3 != 0) {
    puVar4 = (undefined8 *)(param_2.unknown + 0x28);
    do {
      HVar2.unknown = (undefined *)puVar4[-1];
      pvVar1 = (void *)*puVar4;
      _swift_bridgeObjectRetain(pvVar1);
      SVar5.bridgeObject = pvVar1;
      SVar5.str = HVar2.unknown;
      Swift::String::hash(param_1,SVar5);
      _swift_bridgeObjectRelease(pvVar1);
      puVar4 = puVar4 + 2;
      _Var3 = _Var3 - 1;
    } while (_Var3 != 0);
  }
  if ((param_4 & 0xff) == 1) {
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    Swift::Hasher::_combine(param_3,HVar2);
  }
  if ((param_4 >> 8 & 0xff) == 2) {
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    Swift::Hasher::_combine(1,HVar2);
    Swift::Hasher::_combine((byte)(param_4 >> 8) & 1,HVar2);
  }
  if (param_5 != 0) {
    Swift::Hasher::_combine(1,HVar2);
    FUN_1004df778(param_1.unknown,param_5);
    return;
  }
  Swift::Hasher::_combine(0,HVar2);
  return;
}



/* Address: 0x10056c964 | FUN_10056c964 */

void FUN_10056c964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_10056c854(HVar1.unknown,param_1,param_2,param_3,param_4);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10056c9c8 | FUN_10056c9c8 */

void FUN_10056c9c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[3];
  uVar3 = *(undefined2 *)(unaff_x20 + 2);
  Swift::Hasher::init(0);
  HVar4.unknown = auStack_78;
  FUN_10056c854(HVar4.unknown,uVar1,uVar2,uVar3,uVar5);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10056ca28 | FUN_10056ca28 */

void FUN_10056ca28(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10056c854(param_1,*unaff_x20,unaff_x20[1],*(undefined2 *)(unaff_x20 + 2),unaff_x20[3]);
  return;
}



/* Address: 0x10056ca38 | FUN_10056ca38 */

void FUN_10056ca38(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[3];
  uVar3 = *(undefined2 *)(unaff_x20 + 2);
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_78;
  FUN_10056c854(HVar4.unknown,uVar1,uVar2,uVar3,uVar5);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x10056ca94 | FUN_10056ca94 */

void FUN_10056ca94(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10056dd00();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(char *)(param_1 + 2) = (char)param_4;
    *(char *)((long)param_1 + 0x11) = (char)((ushort)param_4 >> 8);
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x10056cacc | FUN_10056cacc */

void FUN_10056cacc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10056c144(param_1,*unaff_x20,unaff_x20[1],*(undefined2 *)(unaff_x20 + 2),unaff_x20[3]);
  return;
}



/* Address: 0x10056caec | FUN_10056caec */

undefined8 FUN_10056caec(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[3];
  lVar2 = param_2[3];
  FUN_10056cdcc(uVar1,param_1[1],(short)param_1[2],*param_2,param_2[1],*(undefined2 *)(param_2 + 2))
  ;
  if ((uVar1 & 1) != 0) {
    if (uVar3 == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) {
      _swift_bridgeObjectRetain(lVar2);
      uVar1 = uVar3;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(lVar2);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x10056cb7c | FUN_10056cb7c */

bool FUN_10056cb7c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  bool bVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  
  _Var7.unknown = (undefined *)*param_1;
  _Var8.unknown = (undefined *)param_1[1];
  puVar1 = (undefined *)*param_2;
  if (*(char *)(param_1 + 4) == '\x01') {
    if ((char)param_2[4] == '\x01') {
      if (_Var7.unknown == puVar1 && _Var8.unknown == (undefined *)param_2[1]) {
        return true;
      }
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var7,_Var8,(_StringComparisonResult)(__int8)puVar1);
      return bVar6;
    }
  }
  else if ((char)param_2[4] != '\x01') {
    _Var2.unknown = (undefined *)param_1[2];
    _Var4.unknown = (undefined *)param_1[3];
    puVar3 = (undefined *)param_2[2];
    puVar5 = (undefined *)param_2[3];
    if ((_Var7.unknown == puVar1 && _Var8.unknown == (undefined *)param_2[1]) ||
       (bVar6 = Swift::_stringCompareWithSmolCheck
                          (_Var7,_Var8,(_StringComparisonResult)(__int8)puVar1), bVar6)) {
      if (_Var4.unknown == (undefined *)0x0) {
        if (puVar5 == (undefined *)0x0) {
          return true;
        }
      }
      else if ((puVar5 != (undefined *)0x0) &&
              (((_Var2.unknown == puVar3 && (_Var4.unknown == puVar5)) ||
               (bVar6 = Swift::_stringCompareWithSmolCheck
                                  (_Var2,_Var4,(_StringComparisonResult)(__int8)puVar3), bVar6)))) {
        return true;
      }
    }
  }
  return false;
}



/* Address: 0x10056cc5c | FUN_10056cc5c */

undefined8 FUN_10056cc5c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  ulong uVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  
  _Var4.unknown = (undefined *)*param_1;
  _Var7.unknown = (undefined *)param_1[1];
  puVar1 = (undefined *)*param_2;
  if (*(char *)(param_1 + 4) == '\x01') {
    if ((char)param_2[4] != '\x01') {
      return 0;
    }
    _Var5.unknown = _Var4.unknown;
    _Var8.unknown = _Var7.unknown;
    puVar9 = puVar1;
    if (_Var4.unknown == puVar1 && _Var7.unknown == (undefined *)param_2[1]) goto LAB_10056cd10;
  }
  else {
    if ((char)param_2[4] == '\x01') {
      return 0;
    }
    _Var5.unknown = (undefined *)param_1[2];
    _Var8.unknown = (undefined *)param_1[3];
    puVar9 = (undefined *)param_2[2];
    puVar2 = (undefined *)param_2[3];
    if ((_Var4.unknown != puVar1 || _Var7.unknown != (undefined *)param_2[1]) &&
       (bVar3 = Swift::_stringCompareWithSmolCheck
                          (_Var4,_Var7,(_StringComparisonResult)(__int8)puVar1), !bVar3)) {
      return 0;
    }
    if (_Var8.unknown == (undefined *)0x0) {
      if (puVar2 != (undefined *)0x0) {
        return 0;
      }
      goto LAB_10056cd10;
    }
    if (puVar2 == (undefined *)0x0) {
      return 0;
    }
    if ((_Var5.unknown == puVar9) && (_Var8.unknown == puVar2)) goto LAB_10056cd10;
  }
  bVar3 = Swift::_stringCompareWithSmolCheck(_Var5,_Var8,(_StringComparisonResult)(__int8)puVar9);
  if (!bVar3) {
    return 0;
  }
LAB_10056cd10:
  _Var4.unknown = (undefined *)param_1[7];
  _Var7.unknown = (undefined *)param_1[8];
  puVar1 = (undefined *)param_2[7];
  puVar9 = (undefined *)param_2[8];
  if (((((undefined *)param_1[5] == (undefined *)param_2[5]) &&
       ((undefined *)param_1[6] == (undefined *)param_2[6])) ||
      (bVar3 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)param_1[5],(undefined *)param_1[6],
                          (_StringComparisonResult)(__int8)(undefined *)param_2[5]), bVar3)) &&
     (((_Var4.unknown == puVar1 && (_Var7.unknown == puVar9)) ||
      (bVar3 = Swift::_stringCompareWithSmolCheck
                         (_Var4,_Var7,(_StringComparisonResult)(__int8)puVar1), bVar3)))) {
    uVar11 = param_1[9];
    lVar10 = param_2[9];
    if (uVar11 == 0) {
      if (lVar10 == 0) {
        return 1;
      }
    }
    else if (lVar10 != 0) {
      _swift_bridgeObjectRetain(lVar10);
      uVar6 = uVar11;
      _swift_bridgeObjectRetain();
      FUN_100524400();
      _swift_bridgeObjectRelease(uVar11);
      _swift_bridgeObjectRelease(lVar10);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x10056cdcc | FUN_10056cdcc */

undefined8
FUN_10056cdcc(long param_1,long param_2,uint param_3,long param_4,long param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == *(long *)(param_4 + 0x10)) {
    if (lVar4 != 0 && param_1 != param_4) {
      puVar5 = (undefined8 *)(param_4 + 0x28);
      puVar6 = (undefined8 *)(param_1 + 0x28);
      do {
        if (((undefined *)puVar6[-1] != (undefined *)puVar5[-1] ||
             (undefined *)*puVar6 != (undefined *)*puVar5) &&
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar6[-1],(undefined *)*puVar6,
                               (_StringComparisonResult)(__int8)(undefined *)puVar5[-1]), !bVar3)) {
          return 0;
        }
        puVar5 = puVar5 + 2;
        puVar6 = puVar6 + 2;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    if ((param_3 & 0xff) == 1) {
      if ((param_6 & 0xff) != 1) {
        return 0;
      }
    }
    else {
      if ((param_6 & 0xff) == 1) {
        return 0;
      }
      if (param_2 != param_5) {
        return 0;
      }
    }
    uVar1 = param_3 >> 8 & 0xff;
    uVar2 = param_6 >> 8 & 0xff;
    if (uVar1 == 2) {
      if (uVar2 == 2) {
        return 1;
      }
    }
    else if ((uVar2 != 2) && (((uVar1 ^ uVar2) & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10056ced0 | FUN_10056ced0 */

String FUN_10056ced0(char *param_1)

{
  void *pvVar1;
  bool bVar2;
  DecodingError DVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  _StringGuts _Var7;
  
  puVar4 = &DAT_100fd0850;
  FUN_1000f7830(&DAT_100fd0850,&DAT_100c5b0a8);
  lVar9 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_60 + -extraout_x8;
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar5 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar10.bridgeObject = pvVar1;
  SVar10.str = pcVar5;
  FUN_10056aa54();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar10 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar4);
    _Var7.unknown = SVar10.bridgeObject;
    if (SVar10.str == (undefined *)0x6f7365722f666572 &&
        _Var7.unknown == (undefined *)0xec00000065637275) {
      _swift_bridgeObjectRelease(_Var7.unknown);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar10.str,_Var7,(_StringComparisonResult)0x72);
      _swift_bridgeObjectRelease(_Var7.unknown);
      if (!bVar2) {
        local_52 = 0;
        DVar3 = Swift::DecodingError::typeMetadataAccessor();
        pcVar5 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(DVar3.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        puVar6 = &DAT_100fd0858;
        FUN_100134584(&DAT_100fd0858,&DAT_100fd0850,&DAT_100c5b0a8,
                      PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                     );
        Swift::DecodingError::_dataCorruptedError
                  (pcVar5,&local_52,puVar8,0xd00000000000001a,0x8000000100dada70,puVar4,puVar6);
        _swift_willThrow();
        SVar10.bridgeObject = "Unknown reference type: ";
        SVar10.str = pcVar5;
        (**(code **)(lVar9 + 8))(puVar8,puVar4);
        goto LAB_10056cfa8;
      }
    }
    local_53 = 1;
    SVar10 = Swift::KeyedDecodingContainer::_decode(&local_53,puVar4);
    (**(code **)(lVar9 + 8))(puVar8,puVar4);
    FUN_100004594(param_1);
  }
  else {
LAB_10056cfa8:
    FUN_100004594(param_1);
  }
  return SVar10;
}



/* Address: 0x10056d0f4 | FUN_10056d0f4 */

void FUN_10056d0f4(undefined8 *param_1,char *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  DecodingError DVar3;
  undefined *puVar4;
  char *pcVar5;
  KeyedDecodingContainer<undefined> KVar6;
  void *pvVar7;
  _StringGuts _Var8;
  undefined8 *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  undefined1 uVar11;
  undefined1 *puVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_58;
  
  puVar4 = &DAT_100fd0838;
  FUN_1000f7830(&DAT_100fd0838,&DAT_100c5b0a0);
  lVar13 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = auStack_90 + -extraout_x8;
  pvVar7 = *(void **)(param_2 + 0x18);
  pcVar5 = param_2;
  FUN_100004640(param_2,pvVar7);
  FUN_10056f388();
  KVar6 = Swift::Decoder::_container();
  if (unaff_x21 != 0) {
LAB_10056d240:
    FUN_100004594(param_2);
    return;
  }
  SVar14 = Swift::KeyedDecodingContainer::_decode(KVar6.unknown,puVar4);
  SVar15.bridgeObject = pvVar7;
  SVar15.str = pcVar5;
  pvVar7 = SVar14.bridgeObject;
  if (SVar14.str != (char *)0x6d6f72702f666572 || pvVar7 != (void *)0xea00000000007470) {
    SVar15 = SVar14;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6d6f72702f666572,(_StringGuts)0xea00000000007470,
                       (_StringComparisonResult)(__int8)SVar14.str);
    if (!bVar2) {
      _Var8.unknown = (undefined *)0xec00000065637275;
      if ((SVar14.str != (char *)0x6f7365722f666572 || pvVar7 != (void *)0xec00000065637275) &&
         (SVar15 = SVar14,
         bVar2 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)0x6f7365722f666572,(_StringGuts)0xec00000065637275,
                            (_StringComparisonResult)(__int8)SVar14.str), !bVar2)) {
        local_88 = 0;
        local_80 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x1a,_Var8);
        _swift_bridgeObjectRelease(local_80);
        local_88 = 0xd000000000000018;
        local_80 = 0x8000000100dada50;
        Swift::String::append(SVar14,SVar15);
        _swift_bridgeObjectRelease(pvVar7);
        uVar1 = local_80;
        DVar3 = Swift::DecodingError::typeMetadataAccessor();
        puVar10 = 
        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
        _swift_allocError(DVar3.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        FUN_100134584(&DAT_100fd0848,&DAT_100fd0838,&DAT_100c5b0a0,
                      PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                     );
        Swift::DecodingError::_dataCorruptedError(puVar10);
        _swift_bridgeObjectRelease(uVar1);
        _swift_willThrow();
        (**(code **)(lVar13 + 8))(puVar12,puVar4);
        goto LAB_10056d240;
      }
      _swift_bridgeObjectRelease(pvVar7);
      puVar9 = &local_88;
      FUN_100076688(param_2);
      local_58 = &local_88;
      FUN_10056ced0();
      (**(code **)(lVar13 + 8))(puVar12,puVar4);
      SVar15 = (String)ZEXT816(0);
      uVar11 = 1;
      goto LAB_10056d28c;
    }
  }
  _swift_bridgeObjectRelease(pvVar7);
  puVar9 = &local_88;
  FUN_100076688(param_2);
  local_58 = &local_88;
  FUN_100576340();
  (**(code **)(lVar13 + 8))(puVar12,puVar4);
  uVar11 = 0;
LAB_10056d28c:
  FUN_100004594(param_2);
  *param_1 = local_58;
  param_1[1] = puVar9;
  *(String *)(param_1 + 2) = SVar15;
  *(undefined1 *)(param_1 + 4) = uVar11;
  return;
}



/* Address: 0x10056d3fc | FUN_10056d3fc */

undefined8 * FUN_10056d3fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *(undefined1 *)(param_1 + 4);
  FUN_10056e57c(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_2 = uVar1;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar4;
  *(undefined1 *)(param_2 + 4) = uVar5;
  return param_2;
}



/* Address: 0x10056d45c | FUN_10056d45c */

void FUN_10056d45c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5afc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5afc8,&DAT_100ee0810);
  DAT_100fd0548 = pTVar1;
  return;
}



/* Address: 0x10056d49c | FUN_10056d49c */

/* WARNING: Removing unreachable block (ram,0x00010056d5dc) */
/* WARNING: Removing unreachable block (ram,0x00010056d564) */

char * FUN_10056d49c(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd0830;
  FUN_1000f7830(&DAT_100fd0830,&DAT_100c5b098);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056d45c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar4.str;
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decode(&local_52,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}



/* Address: 0x10056d624 | FUN_10056d624 */

void FUN_10056d624(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5af78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5af78,&DAT_100ee0780);
  DAT_100fd0558 = pTVar1;
  return;
}



/* Address: 0x10056d664 | FUN_10056d664 */

long FUN_10056d664(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  puVar1 = &DAT_100fd0828;
  FUN_1000f7830(&DAT_100fd0828,&DAT_100c5b090);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10056d624();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100fcc360;
    FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
    FUN_10054d580(&DAT_100fcf130,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = lVar2;
  }
  return local_58;
}



/* Address: 0x10056d7b4 | FUN_10056d7b4 */

void FUN_10056d7b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0568 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5af28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5af28,&DAT_100ee06f0);
  DAT_100fd0568 = pTVar1;
  return;
}



/* Address: 0x10056d7f4 | FUN_10056d7f4 */

void FUN_10056d7f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0570 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a500,&DAT_100ee02e8);
  DAT_100fd0570 = pTVar1;
  return;
}



/* Address: 0x10056d834 | FUN_10056d834 */

void FUN_10056d834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0578 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a5b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a5b8,&DAT_100ee0408);
  DAT_100fd0578 = pTVar1;
  return;
}



/* Address: 0x10056d874 | FUN_10056d874 */

void FUN_10056d874(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd0580 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5a670;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5a670,&DAT_100ee0430);
  DAT_100fd0580 = pTVar1;
  return;
}



/* Address: 0x10056d8b4 | FUN_10056d8b4 */

undefined4 FUN_10056d8b4(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x666572 || param_2 != (undefined1 *)0xe300000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x666572,(_StringGuts)0xe300000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != 0x746e656d75677261) || (param_2 != &DAT_e800000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x746e656d75677261,(_StringGuts)0xe800000000000000,
                             expecting), !bVar1)) {
        if ((param_1 == 0x747865746e6f63) && (param_2 == &DAT_e700000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e700000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x747865746e6f63,(_StringGuts)0xe700000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x10056d9c8 | FUN_10056d9c8 */

/* WARNING: Removing unreachable block (ram,0x00010056dbc4) */
/* WARNING: Removing unreachable block (ram,0x00010056db5c) */
/* WARNING: Removing unreachable block (ram,0x00010056dbd8) */
/* WARNING: Removing unreachable block (ram,0x00010056dbf8) */
/* WARNING: Removing unreachable block (ram,0x00010056dac0) */

void FUN_10056d9c8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined8 local_1a0;
  undefined8 uStack_198;
  uint local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 *local_170;
  undefined *local_168;
  undefined1 local_160 [80];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_98;
  undefined7 uStack_97;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  
  puVar2 = &DAT_100fd0808;
  FUN_1000f7830(&DAT_100fd0808,&DAT_100c5b088);
  lVar5 = *(long *)(puVar2 + -8);
  local_168 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10056d7b4();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_160[0] = 0;
    local_170 = param_1;
    FUN_10056f268();
    puVar1 = local_168;
    puVar2 = &DAT_100ee02e8;
    Swift::KeyedDecodingContainer::_decode
              (&local_110,&DAT_100ee02e8,local_160,local_168,&DAT_100ee02e8,KVar3.unknown);
    local_180 = local_100;
    uStack_178 = local_110;
    local_b8 = local_110;
    uStack_b0 = uStack_108;
    local_a8 = local_100;
    uStack_a0 = uStack_f8;
    local_188 = uStack_f8;
    local_18c = (uint)(byte)local_f0;
    local_98 = (byte)local_f0;
    local_160[0] = 1;
    FUN_10056f2a8();
    puVar4 = &DAT_100ee0408;
    Swift::KeyedDecodingContainer::_decode
              (&local_110,&DAT_100ee0408,local_160,puVar1,&DAT_100ee0408,puVar2);
    uStack_90 = local_110;
    local_88 = uStack_108;
    local_1a0 = uStack_f8;
    uStack_198 = uStack_108;
    uStack_80 = local_100;
    local_78 = uStack_f8;
    local_b9 = 2;
    FUN_10056f2e8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100ee0430,&local_b9,puVar1,&DAT_100ee0430,puVar4);
    (**(code **)(lVar5 + 8))((long)&local_1a0 - extraout_x8,puVar1);
    uStack_70 = local_58;
    local_f0 = CONCAT71(uStack_97,local_98);
    uStack_e8 = uStack_90;
    uStack_d8 = uStack_80;
    uStack_e0 = local_88;
    uStack_108 = uStack_b0;
    local_110 = local_b8;
    uStack_f8 = uStack_a0;
    local_100 = local_a8;
    uStack_c8 = local_58;
    local_d0 = local_78;
    FUN_10056f328(&local_110,local_160);
    FUN_100004594(param_2);
    FUN_10056f35c(&local_b8);
    local_170[5] = uStack_e8;
    local_170[4] = local_f0;
    local_170[7] = uStack_d8;
    local_170[6] = uStack_e0;
    local_170[9] = uStack_c8;
    local_170[8] = local_d0;
    local_170[1] = uStack_108;
    *local_170 = local_110;
    local_170[3] = uStack_f8;
    local_170[2] = local_100;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}


