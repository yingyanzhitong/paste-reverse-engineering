/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10057d3a0 | FUN_10057d3a0 */

void FUN_10057d3a0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd1e70;
  FUN_1000f7830(&DAT_100fd1e70,&DAT_100c5eea0);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10057d3e0 | FUN_10057d3e0 */

String FUN_10057d3e0(void)

{
  String SVar1;
  
  FUN_1005818ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057d408 | FUN_10057d408 */

String FUN_10057d408(void)

{
  String SVar1;
  
  FUN_1005818ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057d430 | FUN_10057d430 */

void FUN_10057d430(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd1538;
  FUN_1000f7830(&DAT_100fd1538,&DAT_100c5d000);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005818ec();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar2 = &DAT_100fd1548;
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fd1548,&DAT_100c5d008);
  puVar3 = puVar2;
  FUN_10058192c();
  puVar4 = &local_58;
  Swift::KeyedEncodingContainer::_encode(puVar4,&local_61,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    local_61 = 1;
    local_58 = param_3;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_58,&local_61,puVar1,&DAT_100edcda0,puVar4);
  }
  (**(code **)(lVar5 + 8))(auStack_70 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10057d590 | FUN_10057d590 */

void FUN_10057d590(void)

{
  FUN_10058199c();
  return;
}



/* Address: 0x10057d5a4 | FUN_10057d5a4 */

undefined8 FUN_10057d5a4(ulong param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  
  FUN_100556dc4(param_1,param_3);
  if ((param_1 & 1) != 0) {
    if (param_2 == 0) {
      if (param_4 == 0) {
        return 1;
      }
    }
    else if (param_4 != 0) {
      _swift_bridgeObjectRetain(param_4);
      uVar1 = param_2;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_4);
      if ((uVar1 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x10057d620 | FUN_10057d620 */

void FUN_10057d620(undefined8 param_1,Hasher param_2,long param_3)

{
  FUN_1004d927c();
  if (param_3 != 0) {
    Swift::Hasher::_combine(1,param_2);
    FUN_1004df778(param_1,param_3);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x10057d66c | FUN_10057d66c */

void FUN_10057d66c(Hasher param_1,long param_2)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  FUN_1004d927c(auStack_68);
  if (param_2 == 0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_1);
  }
  else {
    Swift::Hasher::_combine(1,param_1);
    HVar1.unknown = auStack_68;
    FUN_1004df778(HVar1.unknown,param_2);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10057d6dc | FUN_10057d6dc */

void FUN_10057d6dc(void)

{
  long lVar1;
  Hasher HVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = (undefined *)*unaff_x20;
  lVar1 = unaff_x20[1];
  Swift::Hasher::init(0);
  FUN_1004d927c(auStack_78);
  if (lVar1 == 0) {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    HVar2.unknown = auStack_78;
    FUN_1004df778(HVar2.unknown,lVar1);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10057d750 | FUN_10057d750 */

void FUN_10057d750(undefined8 param_1)

{
  long lVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  lVar1 = unaff_x20[1];
  FUN_1004d927c();
  if (lVar1 != 0) {
    Swift::Hasher::_combine(1,HVar2);
    FUN_1004df778(param_1,lVar1);
    return;
  }
  Swift::Hasher::_combine(0,HVar2);
  return;
}



/* Address: 0x10057d7b0 | FUN_10057d7b0 */

void FUN_10057d7b0(__int64 param_1)

{
  long lVar1;
  Hasher HVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = (undefined *)*unaff_x20;
  lVar1 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  FUN_1004d927c(auStack_78);
  if (lVar1 == 0) {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    Swift::Hasher::_combine(1,HVar3);
    HVar2.unknown = auStack_78;
    FUN_1004df778(HVar2.unknown,lVar1);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10057d820 | FUN_10057d820 */

void FUN_10057d820(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_10058199c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x10057d848 | FUN_10057d848 */

void FUN_10057d848(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10057d430(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10057d860 | FUN_10057d860 */

undefined8 FUN_10057d860(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar3 = *param_1;
  uVar1 = param_1[1];
  lVar2 = param_2[1];
  FUN_100556dc4(uVar3,*param_2);
  if ((uVar3 & 1) != 0) {
    if (uVar1 == 0) {
      if (lVar2 == 0) {
        return 1;
      }
    }
    else if (lVar2 != 0) {
      _swift_bridgeObjectRetain(lVar2);
      uVar3 = uVar1;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(uVar1);
      _swift_bridgeObjectRelease(lVar2);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x10057d8e0 | FUN_10057d8e0 */

undefined * FUN_10057d8e0(void)

{
  return &DAT_100ee1b08;
}



/* Address: 0x10057d8ec | FUN_10057d8ec */

undefined1  [16] FUN_10057d8ec(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad410;
  auVar1._0_8_ = 0xd000000000000018;
  return auVar1;
}



/* Address: 0x10057d908 | FUN_10057d908 */

String FUN_10057d908(void)

{
  String SVar1;
  
  FUN_100581b44();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057d930 | FUN_10057d930 */

String FUN_10057d930(void)

{
  String SVar1;
  
  FUN_100581b44();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057d958 | FUN_10057d958 */

void FUN_10057d958(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd1558;
  FUN_1000f7830(&DAT_100fd1558,&DAT_100c5d010);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581b44();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10057da4c | FUN_10057da4c */

undefined1  [16] FUN_10057da4c(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = &DAT_100fd1568;
  FUN_1000f7830(&DAT_100fd1568,&DAT_100c5d018);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined **)(param_1 + 0x18);
  puVar2 = param_1;
  FUN_100004640(param_1,puVar4);
  FUN_100581b44();
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



/* Address: 0x10057db5c | FUN_10057db5c */

void FUN_10057db5c(void)

{
  FUN_10057db90();
  return;
}



/* Address: 0x10057db90 | FUN_10057db90 */

/* WARNING: Removing unreachable block (ram,0x00010057dc5c) */

void FUN_10057db90(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  undefined8 *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long lVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined8 *local_68;
  
  local_68 = param_1;
  FUN_1000f7830(param_5,param_6);
  lVar4 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  (*param_7)();
  KVar2 = Swift::Decoder::_container();
  puVar1 = local_68;
  if (unaff_x21 == 0) {
    lVar3 = param_5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,param_5);
    FUN_100004594(param_2);
    *puVar1 = KVar2.unknown;
    puVar1[1] = lVar3;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10057dcc0 | FUN_10057dcc0 */

void FUN_10057dcc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd1558;
  FUN_1000f7830(&DAT_100fd1558,&DAT_100c5d010);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581b44();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10057ddb0 | FUN_10057ddb0 */

void FUN_10057ddb0(void)

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
  HVar4.unknown = (undefined1 *)0x8000000100dadc20;
  pcVar3 = (char *)0xd000000000000011;
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



/* Address: 0x10057de54 | FUN_10057de54 */

void FUN_10057de54(Hasher param_1)

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
  puVar1 = (undefined1 *)0x8000000100dadc20;
  pcVar3 = (char *)0xd000000000000011;
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



/* Address: 0x10057ded4 | FUN_10057ded4 */

void FUN_10057ded4(__int64 param_1)

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
  HVar4.unknown = (undefined1 *)0x8000000100dadc20;
  pcVar3 = (char *)0xd000000000000011;
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



/* Address: 0x10057df74 | FUN_10057df74 */

void FUN_10057df74(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd1da0);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10057dfa8 | FUN_10057dfa8 */

void FUN_10057dfa8(undefined8 *param_1)

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
  puVar1 = (undefined1 *)0x8000000100dadc20;
  uVar3 = 0xd000000000000011;
  if (*unaff_x20 != '\0') {
    puVar1 = puVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar1;
  return;
}



/* Address: 0x10057e00c | FUN_10057e00c */

undefined1  [16] FUN_10057e00c(void)

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
  puVar1 = (undefined1 *)0x8000000100dadc20;
  uVar3 = 0xd000000000000011;
  if (*unaff_x20 != '\0') {
    puVar1 = puVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x10057e06c | FUN_10057e06c */

void FUN_10057e06c(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fd1da0);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x10057e098 | FUN_10057e098 */

void FUN_10057e098(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd1e38;
  FUN_1000f7830(&DAT_100fd1e38,&DAT_100c5ee98);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10057e0d8 | FUN_10057e0d8 */

String FUN_10057e0d8(void)

{
  String SVar1;
  
  FUN_100581b84();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057e100 | FUN_10057e100 */

String FUN_10057e100(void)

{
  String SVar1;
  
  FUN_100581b84();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057e128 | FUN_10057e128 */

/* WARNING: Removing unreachable block (ram,0x00010057e260) */

void FUN_10057e128(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar1 = &DAT_100fd1570;
  local_78 = param_3;
  uStack_70 = param_4;
  FUN_1000f7830(&DAT_100fd1570,&DAT_100c5d020);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581b84();
  Swift::Encoder::_container();
  local_61 = 0;
  puVar2 = &DAT_100fd1580;
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fd1580,&DAT_100c5d028);
  puVar3 = puVar2;
  FUN_100581bc4();
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



/* Address: 0x10057e2e4 | FUN_10057e2e4 */

void FUN_10057e2e4(undefined8 param_1)

{
  FUN_100575740(param_1,FUN_100581c74);
  return;
}



/* Address: 0x10057e300 | thunk_FUN_10057fe5c */

void thunk_FUN_10057fe5c(void)

{
  FUN_10057fe5c();
  return;
}



/* Address: 0x10057e304 | FUN_10057e304 */

void FUN_10057e304(void)

{
  FUN_10057e310();
  return;
}



/* Address: 0x10057e310 | FUN_10057e310 */

void FUN_10057e310(Hasher param_1,Hasher param_2,Hasher param_3,void *param_4,long param_5,
                  code *param_6)

{
  String SVar1;
  
  (*param_6)();
  if (param_4 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_2);
    param_3.unknown = param_2.unknown;
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    SVar1.bridgeObject = param_4;
    SVar1.str = param_3.unknown;
    Swift::String::hash(param_1,SVar1);
  }
  if (param_5 != 0) {
    Swift::Hasher::_combine(1,param_3);
    FUN_1004df778(param_1.unknown,param_5);
    return;
  }
  Swift::Hasher::_combine(0,param_3);
  return;
}



/* Address: 0x10057e398 | FUN_10057e398 */

void FUN_10057e398(void)

{
  FUN_10057e3a4();
  return;
}



/* Address: 0x10057e3a4 | FUN_10057e3a4 */

void FUN_10057e3a4(Hasher param_1,Hasher param_2,void *param_3,long param_4,code *param_5)

{
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(0);
  (*param_5)(auStack_88);
  if (param_3 == (void *)0x0) {
    Swift::Hasher::_combine(0,param_1);
    param_2.unknown = param_1.unknown;
  }
  else {
    Swift::Hasher::_combine(1,param_1);
    SVar2.bridgeObject = param_3;
    SVar2.str = param_2.unknown;
    Swift::String::hash((Hasher)auStack_88,SVar2);
  }
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



/* Address: 0x10057e460 | FUN_10057e460 */

void FUN_10057e460(void)

{
  undefined8 *unaff_x20;
  
  FUN_10057e398(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10057e46c | FUN_10057e46c */

void FUN_10057e46c(void)

{
  FUN_10057e478();
  return;
}



/* Address: 0x10057e478 | FUN_10057e478 */

void FUN_10057e478(Hasher param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  undefined8 *unaff_x20;
  
  HVar4.unknown = (undefined *)*unaff_x20;
  HVar5.unknown = ((String *)(unaff_x20 + 1))->str;
  lVar1 = unaff_x20[2];
  SVar3 = *(String *)(unaff_x20 + 1);
  lVar2 = unaff_x20[3];
  (*param_4)();
  if (lVar1 == 0) {
    Swift::Hasher::_combine(0,HVar4);
    HVar5.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    Swift::String::hash(param_1,SVar3);
  }
  if (lVar2 != 0) {
    Swift::Hasher::_combine(1,HVar5);
    FUN_1004df778(param_1.unknown,lVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar5);
  return;
}



/* Address: 0x10057e518 | FUN_10057e518 */

void FUN_10057e518(void)

{
  FUN_10057e524();
  return;
}



/* Address: 0x10057e524 | FUN_10057e524 */

void FUN_10057e524(__int64 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar4.unknown = (undefined *)*unaff_x20;
  HVar5.unknown = ((String *)(unaff_x20 + 1))->str;
  lVar1 = unaff_x20[2];
  SVar3 = *(String *)(unaff_x20 + 1);
  lVar2 = unaff_x20[3];
  Swift::Hasher::init(param_1);
  (*param_4)(auStack_88);
  if (lVar1 == 0) {
    Swift::Hasher::_combine(0,HVar4);
    HVar5.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    Swift::String::hash((Hasher)auStack_88,SVar3);
  }
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



/* Address: 0x10057e5d4 | FUN_10057e5d4 */

void FUN_10057e5d4(void)

{
  FUN_10057e5f0();
  return;
}



/* Address: 0x10057e5f0 | FUN_10057e5f0 */

void FUN_10057e5f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long unaff_x21;
  
  (*param_5)();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x10057e61c | FUN_10057e61c */

void FUN_10057e61c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10057e128(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x10057e638 | FUN_10057e638 */

void FUN_10057e638(void)

{
  FUN_100575a74();
  return;
}



/* Address: 0x10057e644 | FUN_10057e644 */

undefined * FUN_10057e644(void)

{
  return &DAT_100ee1b18;
}



/* Address: 0x10057e650 | FUN_10057e650 */

undefined1  [16] FUN_10057e650(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dadb80;
  auVar1._0_8_ = 0xd000000000000024;
  return auVar1;
}



/* Address: 0x10057e66c | FUN_10057e66c */

String FUN_10057e66c(void)

{
  String SVar1;
  
  FUN_100581e84();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057e694 | FUN_10057e694 */

String FUN_10057e694(void)

{
  String SVar1;
  
  FUN_100581e84();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057e6bc | FUN_10057e6bc */

void FUN_10057e6bc(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fd1598,&DAT_100c5d030,FUN_100581e84,&DAT_100ee25a8);
  return;
}



/* Address: 0x10057e6f0 | FUN_10057e6f0 */

void FUN_10057e6f0(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x10057e724 | FUN_10057e724 */

undefined * FUN_10057e724(void)

{
  return &DAT_100ee1b28;
}



/* Address: 0x10057e730 | FUN_10057e730 */

undefined1  [16] FUN_10057e730(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad3f0;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Address: 0x10057e74c | FUN_10057e74c */

String FUN_10057e74c(void)

{
  String SVar1;
  
  FUN_100581ec4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057e774 | FUN_10057e774 */

String FUN_10057e774(void)

{
  String SVar1;
  
  FUN_100581ec4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057e79c | FUN_10057e79c */

void FUN_10057e79c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd15a8;
  FUN_1000f7830(&DAT_100fd15a8,&DAT_100c5d038);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581ec4();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10057e890 | FUN_10057e890 */

String FUN_10057e890(char *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char *pcVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  
  puVar2 = &DAT_100fd15b8;
  FUN_1000f7830(&DAT_100fd15b8,&DAT_100c5d040);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar3 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar6.bridgeObject = pvVar1;
  SVar6.str = pcVar3;
  FUN_100581ec4();
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



/* Address: 0x10057e9a0 | FUN_10057e9a0 */

void FUN_10057e9a0(void)

{
  FUN_10057f198();
  return;
}



/* Address: 0x10057e9d4 | FUN_10057e9d4 */

void FUN_10057e9d4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd15a8;
  FUN_1000f7830(&DAT_100fd15a8,&DAT_100c5d038);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581ec4();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10057eac4 | FUN_10057eac4 */

undefined * FUN_10057eac4(void)

{
  return &DAT_100ee1b38;
}


