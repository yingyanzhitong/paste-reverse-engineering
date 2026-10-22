/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008580d0 | thunk_FUN_100859020 */

void thunk_FUN_100859020(void)

{
  FUN_100859020();
  return;
}



/* Address: 0x1008580d4 | FUN_1008580d4 */

void FUN_1008580d4(Hasher param_1)

{
  Hasher HVar1;
  long unaff_x20;
  
  HVar1.unknown = ((String *)(unaff_x20 + 0x10))->str;
  Swift::String::hash(param_1,*(String *)(unaff_x20 + 0x10));
  Swift::Hasher::_combine(*(__uint8 *)(unaff_x20 + 0x20),HVar1);
  Swift::String::hash(param_1,*(String *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10085810c | FUN_10085810c */

void FUN_10085810c(void)

{
  Hasher HVar1;
  long unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = ((String *)(unaff_x20 + 0x10))->str;
  Swift::String::hash((Hasher)auStack_68,*(String *)(unaff_x20 + 0x10));
  Swift::Hasher::_combine(*(__uint8 *)(unaff_x20 + 0x20),HVar1);
  HVar1.unknown = auStack_68;
  Swift::String::hash(HVar1,*(String *)(unaff_x20 + 0x28));
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100858168 | FUN_100858168 */

void FUN_100858168(void)

{
  __uint8 _Var1;
  String SVar2;
  String SVar3;
  Hasher HVar4;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar4.unknown = ((String *)(unaff_x20 + 0x10))->str;
  SVar2 = *(String *)(unaff_x20 + 0x10);
  SVar3 = *(String *)(unaff_x20 + 0x28);
  _Var1 = *(__uint8 *)(unaff_x20 + 0x20);
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  Swift::Hasher::_combine(_Var1,HVar4);
  HVar4.unknown = auStack_88;
  Swift::String::hash(HVar4,SVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1008581e4 | FUN_1008581e4 */

void FUN_1008581e4(Hasher param_1)

{
  __uint8 _Var1;
  String SVar2;
  Hasher HVar3;
  long unaff_x20;
  
  HVar3.unknown = ((String *)(unaff_x20 + 0x10))->str;
  SVar2 = *(String *)(unaff_x20 + 0x28);
  _Var1 = *(__uint8 *)(unaff_x20 + 0x20);
  Swift::String::hash(param_1,*(String *)(unaff_x20 + 0x10));
  Swift::Hasher::_combine(_Var1,HVar3);
  Swift::String::hash(param_1,SVar2);
  return;
}



/* Address: 0x100858230 | FUN_100858230 */

void FUN_100858230(__int64 param_1)

{
  __uint8 _Var1;
  String SVar2;
  String SVar3;
  Hasher HVar4;
  long unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar4.unknown = ((String *)(unaff_x20 + 0x10))->str;
  SVar2 = *(String *)(unaff_x20 + 0x10);
  SVar3 = *(String *)(unaff_x20 + 0x28);
  _Var1 = *(__uint8 *)(unaff_x20 + 0x20);
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_88,SVar2);
  Swift::Hasher::_combine(_Var1,HVar4);
  HVar4.unknown = auStack_88;
  Swift::String::hash(HVar4,SVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1008582a8 | FUN_1008582a8 */

uint FUN_1008582a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  local_60 = param_1[6];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  local_20 = param_2[6];
  FUN_100859020(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x100858300 | FUN_100858300 */

undefined1  [16] FUN_100858300(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 *unaff_x20;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_40 = local_50;
  uStack_38 = uStack_48;
  FUN_10000ca28(&uStack_40,auStack_60);
  SVar5.bridgeObject = &SUB_e200000000000000;
  SVar5.str = (char *)0x203a;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar5,SVar7);
  pcVar3 = (char *)unaff_x20[5];
  pvVar4 = (void *)unaff_x20[6];
  pcVar2 = pcVar3;
  FUN_100858afc(pcVar3,pvVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    _swift_bridgeObjectRetain(pvVar4);
  }
  else {
    FUN_100872ba8();
  }
  SVar6.bridgeObject = pvVar4;
  SVar6.str = pcVar3;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar6,SVar8);
  _swift_bridgeObjectRelease(pvVar4);
  auVar1._8_8_ = uStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}



/* Address: 0x1008583a4 | FUN_1008583a4 */

undefined1  [16] FUN_1008583a4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  undefined1 (*unaff_x20) [16];
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  auVar1 = *unaff_x20;
  pcVar3 = *(char **)(unaff_x20[2] + 8);
  pvVar4 = *(void **)unaff_x20[3];
  _swift_bridgeObjectRetain();
  SVar5.bridgeObject = &SUB_e200000000000000;
  SVar5.str = (char *)0x203a;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar5,SVar7);
  pcVar2 = pcVar3;
  FUN_100858afc(pcVar3,pvVar4);
  if (((ulong)pcVar2 & 1) == 0) {
    _swift_bridgeObjectRetain(pvVar4);
  }
  else {
    FUN_100872ba8();
  }
  SVar6.bridgeObject = pvVar4;
  SVar6.str = pcVar3;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar6,SVar8);
  _swift_bridgeObjectRelease(pvVar4);
  return auVar1;
}



/* Address: 0x10085843c | FUN_10085843c */

void FUN_10085843c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 *unaff_x20;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  _swift_bridgeObjectRetain();
  SVar6.bridgeObject = &SUB_e200000000000000;
  SVar6.str = (char *)0x203a;
  SVar8.bridgeObject = param_5;
  SVar8.str = param_4;
  Swift::String::append(SVar6,SVar8);
  pcVar4 = (char *)unaff_x20[5];
  pvVar5 = (void *)unaff_x20[6];
  pcVar3 = pcVar4;
  FUN_100858afc(pcVar4,pvVar5);
  if (((ulong)pcVar3 & 1) == 0) {
    _swift_bridgeObjectRetain(pvVar5);
  }
  else {
    FUN_100872ba8();
  }
  SVar7.bridgeObject = pvVar5;
  SVar7.str = pcVar4;
  SVar9.bridgeObject = param_5;
  SVar9.str = param_4;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(pvVar5);
  param_1[3] = PTR___type_metadata_for_Swift_String_100eac208;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1008584f4 | FUN_1008584f4 */

void FUN_1008584f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  undefined8 *unaff_x20;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  pcVar4 = (char *)unaff_x20[5];
  pvVar5 = (void *)unaff_x20[6];
  _swift_bridgeObjectRetain();
  SVar6.bridgeObject = &SUB_e200000000000000;
  SVar6.str = (char *)0x203a;
  SVar8.bridgeObject = param_5;
  SVar8.str = param_4;
  Swift::String::append(SVar6,SVar8);
  pcVar3 = pcVar4;
  FUN_100858afc(pcVar4,pvVar5);
  if (((ulong)pcVar3 & 1) == 0) {
    _swift_bridgeObjectRetain(pvVar5);
  }
  else {
    FUN_100872ba8();
  }
  SVar7.bridgeObject = pvVar5;
  SVar7.str = pcVar4;
  SVar9.bridgeObject = param_5;
  SVar9.str = param_4;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(pvVar5);
  param_1[3] = PTR___type_metadata_for_Swift_String_100eac208;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1008585a8 | FUN_1008585a8 */

void FUN_1008585a8(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  Hasher HVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar5 = &DAT_65756c6176;
  if (cVar3 != '\x01') {
    pcVar5 = (char *)0xd000000000000010;
  }
  puVar1 = &DAT_e500000000000000;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0x8000000100db2090;
  }
  pcVar2 = (char *)0x656d616e;
  if (cVar3 != '\0') {
    pcVar2 = pcVar5;
  }
  HVar4.unknown = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    HVar4.unknown = puVar1;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100858640 | FUN_100858640 */

void FUN_100858640(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar4 = *unaff_x20;
  pcVar5 = &DAT_65756c6176;
  if (cVar4 != '\x01') {
    pcVar5 = (char *)0xd000000000000010;
  }
  puVar1 = &DAT_e500000000000000;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0x8000000100db2090;
  }
  pcVar2 = (char *)0x656d616e;
  if (cVar4 != '\0') {
    pcVar2 = pcVar5;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  SVar6.bridgeObject = puVar3;
  SVar6.str = pcVar2;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x1008586b4 | FUN_1008586b4 */

void FUN_1008586b4(__int64 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  Hasher HVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar5 = &DAT_65756c6176;
  if (cVar3 != '\x01') {
    pcVar5 = (char *)0xd000000000000010;
  }
  puVar1 = &DAT_e500000000000000;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0x8000000100db2090;
  }
  pcVar2 = (char *)0x656d616e;
  if (cVar3 != '\0') {
    pcVar2 = pcVar5;
  }
  HVar4.unknown = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    HVar4.unknown = puVar1;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100858748 | FUN_100858748 */

void FUN_100858748(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100859530(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100858774 | FUN_100858774 */

void FUN_100858774(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  
  cVar3 = *unaff_x20;
  puVar4 = &DAT_65756c6176;
  if (cVar3 != '\x01') {
    puVar4 = (undefined1 *)0xd000000000000010;
  }
  puVar1 = &DAT_e500000000000000;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0x8000000100db2090;
  }
  puVar2 = (undefined1 *)0x656d616e;
  if (cVar3 != '\0') {
    puVar2 = puVar4;
  }
  puVar4 = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    puVar4 = puVar1;
  }
  *param_1 = puVar2;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x1008587cc | FUN_1008587cc */

undefined1  [16] FUN_1008587cc(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar3 = *unaff_x20;
  puVar4 = &DAT_65756c6176;
  if (cVar3 != '\x01') {
    puVar4 = (undefined1 *)0xd000000000000010;
  }
  puVar1 = &DAT_e500000000000000;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0x8000000100db2090;
  }
  puVar2 = (undefined1 *)0x656d616e;
  if (cVar3 != '\0') {
    puVar2 = puVar4;
  }
  puVar4 = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    puVar4 = puVar1;
  }
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x100858820 | FUN_100858820 */

void FUN_100858820(undefined1 *param_1,undefined1 param_2)

{
  FUN_100859530();
  *param_1 = param_2;
  return;
}



/* Address: 0x100858844 | FUN_100858844 */

String FUN_100858844(void)

{
  String SVar1;
  
  FUN_1008594b0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10085886c | FUN_10085886c */

String FUN_10085886c(void)

{
  String SVar1;
  
  FUN_1008594b0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100858894 | FUN_100858894 */

void FUN_100858894(long param_1)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  long lVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_80 [15];
  undefined1 local_71;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_100fe8208;
  FUN_1000f7830(&DAT_100fe8208,&DAT_100c7d858);
  lVar4 = *(long *)(puVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1008594b0();
  KVar2 = Swift::Encoder::_container();
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  local_71 = 0;
  FUN_1008594f0();
  Swift::KeyedEncodingContainer::_encode(&local_70,&local_71,puVar1,&DAT_100f07180,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_70 = CONCAT71(local_70._1_7_,1);
    Swift::KeyedEncodingContainer::_encode(unaff_x20[5],unaff_x20[6],&local_70,puVar1);
    if (*(char *)(unaff_x20 + 4) != '\0') {
      local_70 = CONCAT71(local_70._1_7_,2);
      Swift::KeyedEncodingContainer::_encode(*(char *)(unaff_x20 + 4),&local_70,puVar1);
      (**(code **)(lVar4 + 8))(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1);
      return;
    }
  }
  (**(code **)(lVar4 + 8))(auStack_80 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1);
  return;
}



/* Address: 0x1008589f0 | FUN_1008589f0 */

void FUN_1008589f0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100859594(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    param_1[6] = local_28;
  }
  return;
}



/* Address: 0x100858a3c | FUN_100858a3c */

void FUN_100858a3c(void)

{
  FUN_100858894();
  return;
}



/* Address: 0x100858a50 | thunk_FUN_10085c548 */

long thunk_FUN_10085c548(void)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xf,0,0);
  if ((bVar1 & 1) == 0) {
    lVar2 = 0;
    FUN_1008651b0();
    _swift_allocObject();
    puVar3 = &DAT_100fe8710;
    FUN_1000f7830(&DAT_100fe8710,&DAT_100c7e250);
    _swift_allocObject();
    *(undefined4 *)(puVar3 + 0x10) = 0;
    *(undefined **)(lVar2 + 0x20) = puVar3;
  }
  else {
    lVar2 = 0;
    FUN_100865108();
    _swift_allocObject();
    *(undefined4 *)(lVar2 + 0x20) = 0;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(lVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008623ec();
  *(undefined **)(lVar2 + 0x18) = puVar3;
  return lVar2;
}



/* Address: 0x100858a54 | FUN_100858a54 */

char * FUN_100858a54(long param_1,undefined8 param_2,void *param_3)

{
  String SVar1;
  tuple2_conflict1 tVar2;
  
  FUN_100860b0c();
  SVar1.str = *(char **)(param_1 + 0x10);
  SVar1.bridgeObject = param_3;
  tVar2 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar1);
  _swift_release(param_1);
  return tVar2.result.str;
}



/* Address: 0x100858aa8 | FUN_100858aa8 */

char * FUN_100858aa8(long param_1,undefined8 param_2,void *param_3)

{
  String SVar1;
  tuple2_conflict1 tVar2;
  
  FUN_100860ce4();
  SVar1.str = *(char **)(param_1 + 0x10);
  SVar1.bridgeObject = param_3;
  tVar2 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar1);
  _swift_release(param_1);
  return tVar2.result.str;
}



/* Address: 0x100858afc | FUN_100858afc */

bool FUN_100858afc(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar7 = 4L << uVar5;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    while( true ) {
      uVar6 = (ulong)after.cmsgPointer.unknown >> 0xe;
      if (uVar6 == uVar1 * 4) goto LAB_100858c5c;
      uVar8 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar8 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100858c8c);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) != 0) break;
      if ((param_2 >> 0x3d & 1) == 0) {
        UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
        }
      }
      else {
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        UVar4.unknown = (undefined *)&local_70;
      }
      uVar5 = (uint)*(byte *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
      if (uVar8 == uVar7) goto LAB_100858c48;
LAB_100858be8:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_100858b68;
LAB_100858bec:
      if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100858c90);
        (*pcVar2)();
      }
      after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
      if (uVar5 >> 7 != 0) goto LAB_100858c5c;
    }
    _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
    uVar5 = (uint)_Var3;
    if (uVar8 != uVar7) goto LAB_100858be8;
LAB_100858c48:
    FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_100858bec;
LAB_100858b68:
    after.cmsgPointer.unknown =
         (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
  } while (uVar5 >> 7 == 0);
LAB_100858c5c:
  return uVar6 != uVar1 * 4;
}



/* Address: 0x100858c90 | FUN_100858c90 */

bool FUN_100858c90(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar7 = 4L << uVar5;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    uVar6 = (ulong)after.cmsgPointer.unknown >> 0xe;
    if (uVar6 == uVar1 * 4) break;
    uVar8 = (ulong)after.cmsgPointer.unknown & 0xc;
    position.cmsgPointer.unknown = after.cmsgPointer.unknown;
    if (uVar8 == uVar7) {
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100858e30);
      (*pcVar2)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
        }
      }
      else {
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        UVar4.unknown = (undefined *)&local_70;
      }
      uVar5 = (uint)*(byte *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
      if (uVar8 != uVar7) goto LAB_100858d64;
LAB_100858dbc:
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_100858dcc;
LAB_100858d68:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
    }
    else {
      _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
      uVar5 = (uint)_Var3;
      if (uVar8 == uVar7) goto LAB_100858dbc;
LAB_100858d64:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_100858d68;
LAB_100858dcc:
      if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100858e34);
        (*pcVar2)();
      }
      after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
    }
  } while ((0xd < uVar5) || ((1 << (ulong)(uVar5 & 0x1f) & 0x2401U) == 0));
  return uVar6 != uVar1 * 4;
}



/* Address: 0x100858e34 | FUN_100858e34 */

undefined8 FUN_100858e34(_StringGuts param_1,ulong param_2)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  UnsafeBufferPointer<__int8> UVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  tuple2_conflict9 tVar9;
  undefined8 local_70;
  ulong uStack_68;
  
  uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    lVar8 = 0;
    do {
      if ((param_2 >> 0x3c & 1) != 0) {
        tVar9 = Swift::_StringGuts::foreignErrorCorrectedScalar((Index)(lVar8 << 0x10),param_1);
        goto LAB_100858ea0;
      }
      if ((param_2 >> 0x3d & 1) == 0) {
        UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
        }
        pcVar1 = UVar4.unknown + lVar8;
        cVar3 = *pcVar1;
        if (cVar3 < 0) {
          lVar6 = LZCOUNT((int)cVar3 << 0x18 ^ 0xffffffff);
          uVar5 = (uint)lVar6;
          uVar7 = (uint)cVar3;
          if (uVar5 < 3) {
            if (uVar5 == 1) goto LAB_100858ea8;
            tVar9._.unknown._4_4_ = 0;
            tVar9._.unknown._0_4_ = (byte)pcVar1[1] & 0x3f | (uVar7 & 0x1f) << 6;
            tVar9.scalarLength = 2;
          }
          else if (uVar5 == 3) {
            tVar9._.unknown._4_4_ = 0;
            tVar9._.unknown._0_4_ =
                 (uVar7 & 0xf) << 0xc | ((byte)pcVar1[1] & 0x3f) << 6 | (byte)pcVar1[2] & 0x3f;
            tVar9.scalarLength = 3;
          }
          else {
            tVar9._.unknown._4_4_ = 0;
            tVar9._.unknown._0_4_ =
                 (uVar7 & 0xf) << 0x12 | ((byte)pcVar1[1] & 0x3f) << 0xc |
                 ((byte)pcVar1[2] & 0x3f) << 6 | (byte)pcVar1[3] & 0x3f;
            tVar9.scalarLength = 4;
          }
          goto LAB_100858ea0;
        }
        lVar6 = 1;
      }
      else {
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        uVar5 = (uint)*(byte *)((long)&local_70 + lVar8);
        tVar9._.unknown._4_4_ = 0;
        tVar9._.unknown._0_4_ = uVar5;
        if ((char)*(byte *)((long)&local_70 + lVar8) < '\0') {
          uVar7 = (uint)LZCOUNT(uVar5 << 0x18 ^ 0xffffffff);
          if (uVar7 < 3) {
            if (uVar7 == 1) goto LAB_100858eec;
            tVar9._.unknown._4_4_ = 0;
            tVar9._.unknown._0_4_ =
                 *(byte *)((long)&local_70 + lVar8 + 1) & 0x3f | (uVar5 & 0x1f) << 6;
            tVar9.scalarLength = 2;
          }
          else if (uVar7 == 3) {
            tVar9._.unknown._4_4_ = 0;
            tVar9._.unknown._0_4_ =
                 (uVar5 & 0xf) << 0xc | (*(byte *)((long)&local_70 + lVar8 + 1) & 0x3f) << 6 |
                 *(byte *)((long)&local_70 + lVar8 + 2) & 0x3f;
            tVar9.scalarLength = 3;
          }
          else {
            tVar9._.unknown._4_4_ = 0;
            tVar9._.unknown._0_4_ =
                 (uVar5 & 0xf) << 0x12 | (*(byte *)((long)&local_70 + lVar8 + 1) & 0x3f) << 0xc |
                 (*(byte *)((long)&local_70 + lVar8 + 2) & 0x3f) << 6 |
                 *(byte *)((long)&local_70 + lVar8 + 3) & 0x3f;
            tVar9.scalarLength = 4;
          }
        }
        else {
LAB_100858eec:
          tVar9.scalarLength = 1;
        }
LAB_100858ea0:
        lVar6 = tVar9.scalarLength;
        if (0xff < (uint)tVar9._.unknown) {
          return 1;
        }
      }
LAB_100858ea8:
      lVar8 = lVar6 + lVar8;
    } while (lVar8 < (long)uVar2);
  }
  return 0;
}



/* Address: 0x100859020 | FUN_100859020 */

bool FUN_100859020(long param_1,long param_2)

{
  bool bVar1;
  
  if (((*(undefined **)(param_1 + 0x10) == *(undefined **)(param_2 + 0x10) &&
        *(undefined **)(param_1 + 0x18) == *(undefined **)(param_2 + 0x18)) ||
      (bVar1 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)*(undefined **)(param_1 + 0x10),
                          (_StringGuts)*(undefined **)(param_1 + 0x18),
                          (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x10)), bVar1))
     && (*(char *)(param_1 + 0x20) == *(char *)(param_2 + 0x20))) {
    if (*(undefined **)(param_1 + 0x28) != *(undefined **)(param_2 + 0x28) ||
        *(undefined **)(param_1 + 0x30) != *(undefined **)(param_2 + 0x30)) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_1 + 0x28),
                         (_StringGuts)*(undefined **)(param_1 + 0x30),
                         (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x28));
      return bVar1;
    }
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x1008590a4 | FUN_1008590a4 */

undefined1  [16] FUN_1008590a4(undefined8 ***param_1,undefined8 ***param_2)

{
  bool bVar1;
  undefined8 ***pppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 **local_100;
  undefined8 **ppuStack_f8;
  code *pcStack_f0;
  undefined8 uStack_e8;
  code *local_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined8 uStack_c8;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 **ppuStack_98;
  undefined8 **local_90;
  undefined8 **ppuStack_88;
  undefined8 **local_80;
  undefined8 **ppuStack_78;
  code *local_70;
  undefined8 uStack_68;
  code *local_60;
  undefined8 uStack_58;
  code *local_50;
  undefined8 uStack_48;
  
  pppuVar2 = param_1;
  FUN_100857c5c();
  if (((ulong)pppuVar2 & 1) == 0) {
    local_70 = FUN_100858048;
    uStack_68 = 0;
    local_60 = thunk_FUN_100858080;
    uStack_58 = 0;
    local_50 = thunk_FUN_100858080;
    uStack_48 = 0;
    uStack_e8 = 0;
    pcStack_f0 = FUN_100858048;
    uStack_d8 = 0;
    local_e0 = thunk_FUN_100858080;
    uStack_c8 = 0;
    pcStack_d0 = thunk_FUN_100858080;
    local_100 = param_1;
    ppuStack_f8 = param_2;
    local_80 = param_1;
    ppuStack_78 = param_2;
    _swift_bridgeObjectRetain(param_2);
    puVar3 = &DAT_100fe82f8;
    FUN_1000f7830(&DAT_100fe82f8,&DAT_100c7dba8);
    puVar4 = &DAT_100fe82e8;
    FUN_1000f7830(&DAT_100fe82e8,&DAT_100c7db98);
    puVar5 = &local_130;
    param_2 = &local_100;
    _swift_dynamicCast(puVar5,param_2,puVar3,puVar4,6);
    if ((int)puVar5 == 0) {
      local_110 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      FUN_100859c70(&local_130);
    }
    else {
      FUN_100076508(&local_130,auStack_b8);
      FUN_100004640(auStack_b8,local_a0);
      bVar1 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
      if (bVar1) {
        FUN_100004640(auStack_b8,local_a0);
        Swift::_HasContiguousBytes::_withUnsafeBytes();
        FUN_100004594(auStack_b8);
        param_2 = (undefined8 ***)ppuStack_88;
        param_1 = (undefined8 ***)local_90;
        goto LAB_100859210;
      }
      FUN_100004594(auStack_b8);
      param_2 = (undefined8 ***)ppuStack_98;
    }
    param_1 = &local_80;
    FUN_100858a54(param_1);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
  }
LAB_100859210:
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = param_1;
  return auVar6;
}



/* Address: 0x100859230 | FUN_100859230 */

void FUN_100859230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong local_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 uStack_70;
  
  uVar1 = param_6;
  FUN_100858afc(param_6,param_7);
  if ((uVar1 & 1) != 0) {
    local_78 = FUN_100872b9c;
    uStack_70 = 0;
    puVar2 = &DAT_100fe81f8;
    local_88 = param_6;
    uStack_80 = param_7;
    FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
    puVar3 = &DAT_100fe8200;
    FUN_100134584(&DAT_100fe8200,&DAT_100fe81f8,&DAT_100c7d850,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    Swift::String::UnicodeScalarView::_append(&local_88,puVar2,puVar3);
    _swift_bridgeObjectRelease(param_7);
    param_6 = 0;
    param_7 = 0xe000000000000000;
  }
  uVar4 = param_7;
  FUN_1008590a4();
  _swift_bridgeObjectRelease(param_7);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = param_6;
  param_1[6] = uVar4;
  return;
}



/* Address: 0x100859340 | FUN_100859340 */

undefined1  [16] FUN_100859340(ulong param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  ulong local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  ulong local_58;
  undefined8 uStack_50;
  
  iVar1 = (int)&local_d0;
  uVar3 = param_1;
  FUN_100858c90();
  if ((uVar3 & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    local_58 = param_1;
    uStack_50 = param_2;
  }
  else {
    local_90 = FUN_100858098;
    uStack_88 = 0;
    local_a0 = param_1;
    uStack_98 = param_2;
    _swift_bridgeObjectRetain(param_2);
    puVar4 = &DAT_100fe82e0;
    FUN_1000f7830(&DAT_100fe82e0,&DAT_100c7db90);
    puVar5 = &DAT_100fe82e8;
    FUN_1000f7830(&DAT_100fe82e8,&DAT_100c7db98);
    _swift_dynamicCast(&local_d0,&local_a0,puVar4,puVar5,6);
    if (iVar1 == 0) {
      local_b0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      FUN_100859c70(&local_d0);
    }
    else {
      FUN_100076508(&local_d0,auStack_80);
      FUN_100004640(auStack_80,local_68);
      bVar2 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
      if (bVar2) {
        FUN_100004640(auStack_80,local_68);
        Swift::_HasContiguousBytes::_withUnsafeBytes();
        FUN_100004594(auStack_80);
        goto LAB_100859490;
      }
      FUN_100004594(auStack_80);
    }
    FUN_100858aa8(param_1,param_2,FUN_100858098,0);
    local_58 = param_1;
    uStack_50 = param_2;
  }
LAB_100859490:
  auVar6._8_8_ = uStack_50;
  auVar6._0_8_ = local_58;
  return auVar6;
}



/* Address: 0x1008594b0 | FUN_1008594b0 */

void FUN_1008594b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8210 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7db2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7db2c,&DAT_100f07028);
  DAT_100fe8210 = pTVar1;
  return;
}



/* Address: 0x1008594f0 | FUN_1008594f0 */

void FUN_1008594f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8218 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dcc4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dcc4,&DAT_100f07180);
  DAT_100fe8218 = pTVar1;
  return;
}



/* Address: 0x100859530 | FUN_100859530 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010085956c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100859530(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fe82c0,&DAT_100c7db80);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x100859594 | FUN_100859594 */

/* WARNING: Removing unreachable block (ram,0x00010085975c) */
/* WARNING: Removing unreachable block (ram,0x0001008596b4) */
/* WARNING: Removing unreachable block (ram,0x0001008596d0) */

void FUN_100859594(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  DecodingError DVar4;
  char *pcVar5;
  KeyedDecodingContainer<undefined> KVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  undefined *puVar10;
  char *pcVar11;
  long unaff_x21;
  undefined1 *puVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_b0 [8];
  char *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_51;
  
  pcVar5 = &DAT_100fe82c8;
  FUN_1000f7830(&DAT_100fe82c8,&DAT_100c7db88);
  lVar13 = *(long *)(pcVar5 + -8);
  puVar12 = auStack_b0 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1008594b0();
  KVar6 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    FUN_100859c30();
    puVar8 = &DAT_100f07180;
    pcVar11 = pcVar5;
    Swift::KeyedDecodingContainer::_decode
              (&local_80,&DAT_100f07180,&local_51,pcVar5,&DAT_100f07180,KVar6.unknown);
    local_90 = local_70;
    local_88 = local_80;
    local_80._0_1_ = 1;
    SVar14 = Swift::KeyedDecodingContainer::_decode(&local_80,pcVar5);
    local_a0 = uStack_68;
    local_98 = local_78;
    SVar15 = SVar14;
    FUN_100858e34();
    _Var9.unknown = SVar15.bridgeObject;
    if (((ulong)SVar15.str & 1) == 0) {
      SVar15 = SVar14;
      FUN_100857c5c();
      _Var9.unknown = SVar15.bridgeObject;
      if (((ulong)SVar15.str & 1) != 0) {
        local_80 = CONCAT71(local_80._1_7_,2);
        puVar7 = &local_80;
        local_a8 = SVar14.str;
        Swift::KeyedDecodingContainer::_decodeIfPresent(puVar7,pcVar5);
        uVar2 = local_a0;
        (**(code **)(lVar13 + 8))(puVar12,pcVar5);
        uVar1 = 0;
        if (((uint)puVar7 & 0xff) < 4 && ((uint)puVar7 & 0xff00) != 0x100) {
          uVar1 = (char)puVar7;
        }
        FUN_100004594(param_2);
        *param_1 = local_88;
        param_1[1] = local_98;
        param_1[2] = local_90;
        param_1[3] = uVar2;
        *(undefined1 *)(param_1 + 4) = uVar1;
        param_1[5] = local_a8;
        param_1[6] = SVar14.bridgeObject;
        return;
      }
    }
    _swift_bridgeObjectRelease(local_a0);
    _swift_bridgeObjectRelease(local_98);
    local_51 = 1;
    local_80 = 0;
    local_78 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x31,_Var9);
    _swift_bridgeObjectRelease(local_78);
    local_80 = 0xd000000000000012;
    local_78 = 0x8000000100db20b0;
    SVar16.bridgeObject = puVar8;
    SVar16.str = pcVar11;
    Swift::String::append(SVar14,SVar16);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar15.bridgeObject = (void *)0x8000000100db20d0;
    SVar15.str = (char *)0xd00000000000001d;
    SVar14.bridgeObject = puVar8;
    SVar14.str = pcVar11;
    Swift::String::append(SVar15,SVar14);
    uVar3 = local_78;
    uVar2 = local_80;
    DVar4 = Swift::DecodingError::typeMetadataAccessor();
    puVar10 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(DVar4.value,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar8 = &DAT_100fe82d8;
    FUN_100134584(&DAT_100fe82d8,&DAT_100fe82c8,&DAT_100c7db88,
                  PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
                 );
    Swift::DecodingError::_dataCorruptedError(puVar10,&local_51,puVar12,uVar2,uVar3,pcVar5,puVar8);
    _swift_bridgeObjectRelease(uVar3);
    _swift_willThrow();
    (**(code **)(lVar13 + 8))(puVar12,pcVar5);
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x1008598d8 | thunk_FUN_1008598dc */

void thunk_FUN_1008598dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8220 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7d8a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d8a0,&DAT_100f06f10);
  DAT_100fe8220 = pTVar1;
  return;
}



/* Address: 0x1008598dc | FUN_1008598dc */

void FUN_1008598dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8220 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7d8a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d8a0,&DAT_100f06f10);
  DAT_100fe8220 = pTVar1;
  return;
}



/* Address: 0x10085991c | thunk_FUN_100859920 */

void thunk_FUN_100859920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8228 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7d908;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d908,&DAT_100f06ee0);
  DAT_100fe8228 = pTVar1;
  return;
}



/* Address: 0x100859920 | FUN_100859920 */

void FUN_100859920(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8228 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7d908;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d908,&DAT_100f06ee0);
  DAT_100fe8228 = pTVar1;
  return;
}



/* Address: 0x100859960 | FUN_100859960 */

undefined8 * FUN_100859960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1008599bc | FUN_1008599bc */

undefined8 * FUN_1008599bc(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100859a50 | FUN_100859a50 */

void FUN_100859a50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100859a6c | FUN_100859a6c */

undefined8 * FUN_100859a6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100859ac8 | FUN_100859ac8 */

undefined1  [16] FUN_100859ac8(void)

{
  return ZEXT816(0x100f06ee0);
}



/* Address: 0x100859ad8 | FUN_100859ad8 */

undefined1  [16] FUN_100859ad8(void)

{
  return ZEXT816(0x100f06f10);
}



/* Address: 0x100859ae8 | FUN_100859ae8 */

void FUN_100859ae8(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100859af4 | FUN_100859af4 */

void FUN_100859af4(void)

{
  return;
}



/* Address: 0x100859af8 | FUN_100859af8 */

void FUN_100859af8(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100fe8230 != 0) {
    return;
  }
  puVar1 = &DAT_100f06f90;
  _swift_getForeignTypeMetadata();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100fe8230 = param_1;
  return;
}



/* Address: 0x100859b48 | FUN_100859b48 */

void FUN_100859b48(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100859b54 | FUN_100859b54 */

undefined1  [16] FUN_100859b54(void)

{
  return ZEXT816(0x100f07028);
}



/* Address: 0x100859b64 | thunk_FUN_100859b68 */

void thunk_FUN_100859b68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7db04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7db04,&DAT_100f07028);
  DAT_100fe8238 = pTVar1;
  return;
}



/* Address: 0x100859b68 | FUN_100859b68 */

void FUN_100859b68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7db04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7db04,&DAT_100f07028);
  DAT_100fe8238 = pTVar1;
  return;
}



/* Address: 0x100859ba8 | thunk_FUN_100859bac */

void thunk_FUN_100859bac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7da64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7da64,&DAT_100f07028);
  DAT_100fe8240 = pTVar1;
  return;
}



/* Address: 0x100859bac | FUN_100859bac */

void FUN_100859bac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7da64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7da64,&DAT_100f07028);
  DAT_100fe8240 = pTVar1;
  return;
}



/* Address: 0x100859bec | thunk_FUN_100859bf0 */

void thunk_FUN_100859bf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7da3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7da3c,&DAT_100f07028);
  DAT_100fe8248 = pTVar1;
  return;
}



/* Address: 0x100859bf0 | FUN_100859bf0 */

void FUN_100859bf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7da3c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7da3c,&DAT_100f07028);
  DAT_100fe8248 = pTVar1;
  return;
}



/* Address: 0x100859c30 | FUN_100859c30 */

void FUN_100859c30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe82d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7dc9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7dc9c,&DAT_100f07180);
  DAT_100fe82d0 = pTVar1;
  return;
}



/* Address: 0x100859c70 | FUN_100859c70 */

undefined8 FUN_100859c70(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe82f0;
  FUN_1000f7830(&DAT_100fe82f0,&DAT_100c7dba0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100859cb8 | thunk_FUN_100858080 */

bool thunk_FUN_100858080(char *param_1)

{
  return *param_1 == '\t' || *param_1 == ' ';
}



/* Address: 0x100859cbc | FUN_100859cbc */

bool FUN_100859cbc(undefined8 param_1,undefined8 param_2,_StringGuts param_3,_StringGuts param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined *param_8)

{
  bool bVar1;
  
  if ((param_3.unknown == param_7) && (param_4.unknown == param_8)) {
    return true;
  }
  bVar1 = Swift::_stringCompareWithSmolCheck
                    (param_3,param_4,(_StringComparisonResult)(__int8)param_7);
  return bVar1;
}



/* Address: 0x100859cec | thunk_FUN_10085af9c */

char * thunk_FUN_10085af9c(char *param_1,void *param_2)

{
  ulong uVar1;
  char *pcVar2;
  String SVar3;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || (pcVar2 = param_1, FUN_10086b970(param_1,param_2), ((ulong)pcVar2 & 1) != 0))
  {
    _swift_bridgeObjectRelease(param_2);
    param_1 = (char *)0x0;
  }
  else {
    SVar3.bridgeObject = param_2;
    SVar3.str = param_1;
    Swift::String::lowercased(SVar3);
  }
  return param_1;
}



/* Address: 0x100859cf0 | FUN_100859cf0 */

void FUN_100859cf0(char *param_1,char *param_2,UTF8View param_3,char *param_4)

{
  ulong uVar1;
  code *pcVar2;
  byte bVar3;
  char *pcVar4;
  Index after;
  Index position;
  UnsafeBufferPointer<__int8> UVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  String SVar11;
  undefined *local_70;
  ulong uStack_68;
  
  uVar8 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar8 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar8 == 0) {
LAB_100859d8c:
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    pcVar4 = param_1;
    FUN_100830fd0(param_1,param_2);
    _swift_bridgeObjectRetain(param_2);
    if ((((uint)pcVar4 & 0xff00) == 0x100) || (((uint)pcVar4 & 0xff) != 0x3a)) {
      SVar11.bridgeObject = param_2;
      SVar11.str = param_1;
      param_1 = param_2;
      after.cmsgPointer.unknown = (UnsafeMutablePointer)Swift::Substring::init(SVar11);
    }
    else {
      after.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_00000001;
      param_3.unknown = param_2;
      FUN_100108f9c();
      _swift_bridgeObjectRelease(param_2);
    }
    uVar8 = (ulong)param_1 >> 0xe;
    uVar9 = (ulong)after.cmsgPointer.unknown >> 0xe;
    if (uVar9 != uVar8) {
      uVar6 = (uint)((ulong)param_3.unknown >> 0x3b) & 1;
      if (((ulong)param_4 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar10 = 4L << uVar6;
      uVar1 = (ulong)param_3.unknown & 0xffffffffffff;
      if (((ulong)param_4 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)param_4 >> 0x38 & 0xf;
      }
      do {
        uVar7 = (ulong)after.cmsgPointer.unknown & 0xc;
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (uVar7 == uVar10) {
          FUN_1000740a8(after.cmsgPointer.unknown,param_3.unknown,param_4);
        }
        if (((ulong)position.cmsgPointer.unknown >> 0xe < uVar9) ||
           (uVar8 <= (ulong)position.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100859fa8);
          (*pcVar2)();
        }
        if (((ulong)param_4 >> 0x3c & 1) == 0) {
          if (((ulong)param_4 >> 0x3d & 1) != 0) {
            local_70 = param_3.unknown;
            uStack_68 = (ulong)param_4 & 0xffffffffffffff;
            bVar3 = *(byte *)((long)&local_70 + ((ulong)position.cmsgPointer.unknown >> 0x10));
            goto joined_r0x000100859edc;
          }
          UVar5.unknown = (undefined *)(((ulong)param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            UVar5 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
          }
          uVar6 = (uint)(byte)UVar5.unknown[(ulong)position.cmsgPointer.unknown >> 0x10];
          if (uVar7 == uVar10) goto LAB_100859f1c;
LAB_100859ee0:
          if (((ulong)param_4 >> 0x3c & 1) == 0) goto LAB_100859e40;
LAB_100859ee4:
          if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100859fac);
            (*pcVar2)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,param_3);
        }
        else {
          bVar3 = Swift::String::UTF8View::_foreignSubscript(position,param_3);
joined_r0x000100859edc:
          uVar6 = (uint)bVar3;
          if (uVar7 != uVar10) goto LAB_100859ee0;
LAB_100859f1c:
          FUN_1000740a8(after.cmsgPointer.unknown,param_3.unknown,param_4);
          if (((ulong)param_4 >> 0x3c & 1) != 0) goto LAB_100859ee4;
LAB_100859e40:
          after.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
        }
        if ((((0x3f < uVar6 - 0x21) ||
             ((1L << ((ulong)(uVar6 - 0x21) & 0x3f) & 0xe00000000000367dU) == 0)) && (uVar6 != 0x7c)
            ) && (((uVar6 != 0x7e && (9 < (uVar6 - 0x30 & 0xff))) &&
                  ((uVar6 < 0x61 || (0x7a < uVar6)))))) {
          _swift_bridgeObjectRelease(param_2);
          param_2 = param_4;
          goto LAB_100859d8c;
        }
      } while (uVar8 != (ulong)after.cmsgPointer.unknown >> 0xe);
    }
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRetain(param_2);
  }
  return;
}


