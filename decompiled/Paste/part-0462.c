/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10057ead0 | FUN_10057ead0 */

undefined1  [16] FUN_10057ead0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dadbb0;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x10057eaec | FUN_10057eaec */

String FUN_10057eaec(void)

{
  String SVar1;
  
  FUN_100581f04();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057eb14 | FUN_10057eb14 */

String FUN_10057eb14(void)

{
  String SVar1;
  
  FUN_100581f04();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057eb3c | FUN_10057eb3c */

void FUN_10057eb3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd15c0;
  FUN_1000f7830(&DAT_100fd15c0,&DAT_100c5d048);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581f04();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10057ec30 | FUN_10057ec30 */

String FUN_10057ec30(char *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char *pcVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  
  puVar2 = &DAT_100fd15d0;
  FUN_1000f7830(&DAT_100fd15d0,&DAT_100c5d050);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar3 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar6.bridgeObject = pvVar1;
  SVar6.str = pcVar3;
  FUN_100581f04();
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



/* Address: 0x10057ed40 | FUN_10057ed40 */

void FUN_10057ed40(void)

{
  FUN_10057f198();
  return;
}



/* Address: 0x10057ed74 | FUN_10057ed74 */

void FUN_10057ed74(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd15c0;
  FUN_1000f7830(&DAT_100fd15c0,&DAT_100c5d048);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581f04();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10057ee64 | FUN_10057ee64 */

undefined * FUN_10057ee64(void)

{
  return &DAT_100ee1b48;
}



/* Address: 0x10057ee70 | FUN_10057ee70 */

undefined1  [16] FUN_10057ee70(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dadbd0;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Address: 0x10057ee8c | FUN_10057ee8c */

void FUN_10057ee8c(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x697275 && param_3 == -0x1d00000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x697275,(_StringGuts)0xe300000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x10057ef10 | FUN_10057ef10 */

String FUN_10057ef10(void)

{
  String SVar1;
  
  FUN_100581f44();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057ef38 | FUN_10057ef38 */

String FUN_10057ef38(void)

{
  String SVar1;
  
  FUN_100581f44();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057ef60 | FUN_10057ef60 */

void FUN_10057ef60(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fd15d8;
  FUN_1000f7830(&DAT_100fd15d8,&DAT_100c5d058);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581f44();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10057f054 | FUN_10057f054 */

String FUN_10057f054(char *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  char *pcVar3;
  KeyedDecodingContainer<undefined> KVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  
  puVar2 = &DAT_100fd15e8;
  FUN_1000f7830(&DAT_100fd15e8,&DAT_100c5d060);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar3 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar6.bridgeObject = pvVar1;
  SVar6.str = pcVar3;
  FUN_100581f44();
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



/* Address: 0x10057f164 | FUN_10057f164 */

void FUN_10057f164(void)

{
  FUN_10057f198();
  return;
}



/* Address: 0x10057f198 | FUN_10057f198 */

/* WARNING: Removing unreachable block (ram,0x00010057f264) */

void FUN_10057f198(String *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,code *param_7)

{
  String *pSVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 auStack_70 [8];
  String *local_68;
  
  local_68 = param_1;
  FUN_1000f7830(param_5,param_6);
  lVar3 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  (*param_7)();
  KVar2 = Swift::Decoder::_container();
  pSVar1 = local_68;
  if (unaff_x21 == 0) {
    SVar4 = Swift::KeyedDecodingContainer::_decode(KVar2.unknown,param_5);
    (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,param_5);
    FUN_100004594(param_2);
    *pSVar1 = SVar4;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10057f2c8 | FUN_10057f2c8 */

void FUN_10057f2c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fd15d8;
  FUN_1000f7830(&DAT_100fd15d8,&DAT_100c5d058);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100581f44();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encode(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10057f3b8 | FUN_10057f3b8 */

String FUN_10057f3b8(void)

{
  String SVar1;
  
  FUN_100581f84();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10057f3e0 | FUN_10057f3e0 */

String FUN_10057f3e0(void)

{
  String SVar1;
  
  FUN_100581f84();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10057f408 | FUN_10057f408 */

void FUN_10057f408(undefined8 param_1)

{
  FUN_10052a074(param_1,&DAT_100fd15f0,&DAT_100c5d068,FUN_100581f84,&DAT_100ee23d8);
  return;
}



/* Address: 0x10057f43c | FUN_10057f43c */

void FUN_10057f43c(void)

{
  FUN_1004e4c30();
  return;
}



/* Address: 0x10057f470 | FUN_10057f470 */

undefined8 FUN_10057f470(ulong *param_1,long *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar5 = *param_1;
  lVar4 = *param_2;
  if (uVar5 == 0) {
    if (lVar4 != 0) {
      return 0;
    }
  }
  else {
    if (lVar4 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar4);
    thunk_FUN_100556d68(uVar5,lVar4);
    _swift_bridgeObjectRelease(lVar4);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  if ((char)param_1[2] == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return 0;
    }
  }
  else {
    bVar1 = false;
    if (((char)param_2[2] != '\x01') &&
       (bVar1 = false, !NAN((double)param_1[1]) && !NAN((double)param_2[1]))) {
      bVar1 = (double)param_1[1] == (double)param_2[1];
    }
    if (!bVar1) {
      return 0;
    }
  }
  _Var2.unknown = (undefined *)param_1[4];
  puVar3 = (undefined *)param_2[4];
  if (_Var2.unknown == (undefined *)0x0) {
    if (puVar3 == (undefined *)0x0) {
      return 1;
    }
  }
  else if (puVar3 != (undefined *)0x0) {
    if (((undefined *)param_1[3] == (undefined *)param_2[3]) && (_Var2.unknown == puVar3)) {
      return 1;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)param_1[3],_Var2,
                       (_StringComparisonResult)(__int8)(undefined *)param_2[3]);
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10057f548 | FUN_10057f548 */

undefined8 FUN_10057f548(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  _StringGuts _Var10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long lStack_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  
  uVar14 = 0;
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar8 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar8)) {
    return 0;
  }
  _Var10.unknown = (undefined *)param_1[3];
  puVar11 = (undefined *)param_2[3];
  if (_Var10.unknown == (undefined *)0x0) {
    if (puVar11 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)param_1[2] != (undefined *)param_2[2] || _Var10.unknown != puVar11) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var10,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar8)) {
      return 0;
    }
  }
  if ((((undefined *)param_1[4] != (undefined *)param_2[4]) ||
      ((undefined *)param_1[5] != (undefined *)param_2[5])) &&
     (bVar8 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[4],(undefined *)param_1[5],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar8)) {
    return 0;
  }
  _Var10.unknown = (undefined *)param_1[7];
  puVar11 = (undefined *)param_2[7];
  if (_Var10.unknown == (undefined *)0x0) {
    if (puVar11 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[6] != (undefined *)param_2[6]) || (_Var10.unknown != puVar11)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[6],_Var10,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[6]), !bVar8)) {
      return 0;
    }
  }
  _Var10.unknown = (undefined *)param_1[9];
  puVar11 = (undefined *)param_2[9];
  if (_Var10.unknown == (undefined *)0x0) {
    if (puVar11 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[8] != (undefined *)param_2[8]) || (_Var10.unknown != puVar11)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[8],_Var10,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[8]), !bVar8)) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    if ((char)param_2[0xb] != '\x01') {
      return 0;
    }
  }
  else {
    if ((char)param_2[0xb] == '\x01') {
      return 0;
    }
    if (param_1[10] != param_2[10]) {
      return 0;
    }
  }
  lVar13 = param_1[0xc];
  uVar4 = param_1[0xd];
  uVar1 = param_1[0xe];
  uVar5 = param_1[0xf];
  uVar12 = param_1[0x10];
  lVar2 = param_2[0xc];
  lVar6 = param_2[0xd];
  lVar3 = param_2[0xe];
  lVar7 = param_2[0xf];
  lVar15 = param_2[0x10];
  if (lVar13 == 1) {
    if (lVar2 != 1) {
LAB_10057f6d4:
      FUN_1004dbc6c(lVar2,lVar6,lVar3,lVar7,lVar15);
      FUN_1004dbc6c(lVar13,uVar4,uVar1,uVar5,uVar12);
      FUN_100558f34(lVar13,uVar4,uVar1,uVar5,uVar12);
      FUN_100558f34(lVar2,lVar6,lVar3,lVar7,lVar15);
      return 0;
    }
  }
  else {
    if (lVar2 == 1) goto LAB_10057f6d4;
    local_78 = (undefined1)lVar3;
    local_a0 = (undefined1)uVar1;
    local_b0 = lVar13;
    uStack_a8 = uVar4;
    local_98 = uVar5;
    uStack_90 = uVar12;
    local_88 = lVar2;
    lStack_80 = lVar6;
    local_70 = lVar7;
    lStack_68 = lVar15;
    FUN_1004dbc6c(lVar2,lVar6,lVar3,lVar7,lVar15);
    FUN_1004dbc6c(lVar13,uVar4,uVar1,uVar5,uVar12);
    FUN_10057f470(&local_b0,&local_88);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(lVar15);
    FUN_100558f34(lVar13,uVar4,uVar1,uVar5,uVar12);
    if ((uVar14 & 1) == 0) {
      return 0;
    }
  }
  uVar14 = param_1[0x11];
  lVar13 = param_2[0x11];
  if (uVar14 == 0) {
    if (lVar13 != 0) {
      return 0;
    }
  }
  else {
    if (lVar13 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar13);
    uVar9 = uVar14;
    _swift_bridgeObjectRetain();
    FUN_100554f9c();
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(lVar13);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar14 = param_1[0x12];
  lVar13 = param_2[0x12];
  if (uVar14 == 0) {
    if (lVar13 == 0) {
      return 1;
    }
  }
  else if (lVar13 != 0) {
    _swift_bridgeObjectRetain(lVar13);
    uVar9 = uVar14;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(lVar13);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10057f86c | FUN_10057f86c */

undefined8
FUN_10057f86c(long param_1,_StringGuts param_2,_StringGuts param_3,ulong param_4,long param_5,
             undefined *param_6,undefined *param_7,long param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_248 [152];
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
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
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
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_5 + 0x10)) {
    if (lVar5 != 0 && param_1 != param_5) {
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar4 = (undefined8 *)(param_5 + 0x20);
      do {
        uStack_148 = puVar6[0xd];
        local_150 = puVar6[0xc];
        uStack_138 = puVar6[0xf];
        uStack_140 = puVar6[0xe];
        uStack_128 = puVar6[0x11];
        local_130 = puVar6[0x10];
        local_120 = puVar6[0x12];
        uStack_188 = puVar6[5];
        local_190 = puVar6[4];
        uStack_178 = puVar6[7];
        uStack_180 = puVar6[6];
        uStack_168 = puVar6[9];
        local_170 = puVar6[8];
        uStack_158 = puVar6[0xb];
        uStack_160 = puVar6[10];
        uStack_1a8 = puVar6[1];
        local_1b0 = *puVar6;
        uStack_198 = puVar6[3];
        uStack_1a0 = puVar6[2];
        uStack_a8 = puVar4[0xd];
        local_b0 = puVar4[0xc];
        uStack_98 = puVar4[0xf];
        uStack_a0 = puVar4[0xe];
        uStack_88 = puVar4[0x11];
        local_90 = puVar4[0x10];
        local_80 = puVar4[0x12];
        uStack_e8 = puVar4[5];
        local_f0 = puVar4[4];
        uStack_d8 = puVar4[7];
        uStack_e0 = puVar4[6];
        uStack_c8 = puVar4[9];
        local_d0 = puVar4[8];
        uStack_b8 = puVar4[0xb];
        uStack_c0 = puVar4[10];
        uStack_108 = puVar4[1];
        local_110 = *puVar4;
        uStack_f8 = puVar4[3];
        uStack_100 = puVar4[2];
        FUN_1004dba38(&local_1b0,auStack_248);
        FUN_1004dba38(&local_110,auStack_248);
        puVar2 = &local_1b0;
        FUN_10057f548(puVar2,&local_110);
        FUN_1004dba74(&local_110);
        FUN_1004dba74(&local_1b0);
        if (((ulong)puVar2 & 1) == 0) {
          return 0;
        }
        puVar4 = puVar4 + 0x13;
        puVar6 = puVar6 + 0x13;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_3.unknown == (undefined *)0x0) {
      if (param_7 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (param_7 == (undefined *)0x0) {
        return 0;
      }
      if (((param_2.unknown != param_6) || (param_3.unknown != param_7)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            (param_2,param_3,(_StringComparisonResult)(__int8)param_6), !bVar1)) {
        return 0;
      }
    }
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      _swift_bridgeObjectRetain(param_8);
      uVar3 = param_4;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_8);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x10057fa24 | FUN_10057fa24 */

undefined8 FUN_10057fa24(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  ulong uVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar1)) {
    return 0;
  }
  _Var3.unknown = (undefined *)param_1[3];
  puVar4 = (undefined *)param_2[3];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if (((undefined *)param_1[2] != (undefined *)param_2[2] || _Var3.unknown != puVar4) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar1)) {
      return 0;
    }
  }
  _Var3.unknown = (undefined *)param_1[5];
  puVar4 = (undefined *)param_2[5];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[4] != (undefined *)param_2[4]) || (_Var3.unknown != puVar4)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[4],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar1)) {
      return 0;
    }
  }
  _Var3.unknown = (undefined *)param_1[7];
  puVar4 = (undefined *)param_2[7];
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar4 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar4 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[6] != (undefined *)param_2[6]) || (_Var3.unknown != puVar4)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[6],_Var3,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[6]), !bVar1)) {
      return 0;
    }
  }
  uVar6 = param_1[8];
  lVar5 = param_2[8];
  if (uVar6 == 0) {
    if (lVar5 == 0) {
      return 1;
    }
  }
  else if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar5);
    uVar2 = uVar6;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(lVar5);
    if ((uVar2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10057fb70 | FUN_10057fb70 */

undefined8 FUN_10057fb70(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  ulong uVar9;
  _StringGuts _Var10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  long local_88;
  long lStack_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  
  uVar14 = 0;
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar8 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar8)) {
    return 0;
  }
  if (((undefined *)param_1[2] != (undefined *)param_2[2] ||
       (undefined *)param_1[3] != (undefined *)param_2[3]) &&
     (bVar8 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[2],(undefined *)param_1[3],
                         (_StringComparisonResult)(__int8)(undefined *)param_2[2]), !bVar8)) {
    return 0;
  }
  _Var10.unknown = (undefined *)param_1[5];
  puVar11 = (undefined *)param_2[5];
  if (_Var10.unknown == (undefined *)0x0) {
    if (puVar11 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[4] != (undefined *)param_2[4]) || (_Var10.unknown != puVar11)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[4],_Var10,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[4]), !bVar8)) {
      return 0;
    }
  }
  _Var10.unknown = (undefined *)param_1[7];
  puVar11 = (undefined *)param_2[7];
  if (_Var10.unknown == (undefined *)0x0) {
    if (puVar11 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[6] != (undefined *)param_2[6]) || (_Var10.unknown != puVar11)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[6],_Var10,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[6]), !bVar8)) {
      return 0;
    }
  }
  _Var10.unknown = (undefined *)param_1[9];
  puVar11 = (undefined *)param_2[9];
  if (_Var10.unknown == (undefined *)0x0) {
    if (puVar11 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (puVar11 == (undefined *)0x0) {
      return 0;
    }
    if ((((undefined *)param_1[8] != (undefined *)param_2[8]) || (_Var10.unknown != puVar11)) &&
       (bVar8 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[8],_Var10,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[8]), !bVar8)) {
      return 0;
    }
  }
  lVar13 = param_1[10];
  uVar4 = param_1[0xb];
  uVar1 = param_1[0xc];
  uVar5 = param_1[0xd];
  uVar12 = param_1[0xe];
  lVar2 = param_2[10];
  lVar6 = param_2[0xb];
  lVar3 = param_2[0xc];
  lVar7 = param_2[0xd];
  lVar15 = param_2[0xe];
  if (lVar13 == 1) {
    if (lVar2 != 1) {
LAB_10057fcc4:
      FUN_1004dbc6c(lVar2,lVar6,lVar3,lVar7,lVar15);
      FUN_1004dbc6c(lVar13,uVar4,uVar1,uVar5,uVar12);
      FUN_100558f34(lVar13,uVar4,uVar1,uVar5,uVar12);
      FUN_100558f34(lVar2,lVar6,lVar3,lVar7,lVar15);
      return 0;
    }
  }
  else {
    if (lVar2 == 1) goto LAB_10057fcc4;
    local_78 = (undefined1)lVar3;
    local_a0 = (undefined1)uVar1;
    local_b0 = lVar13;
    uStack_a8 = uVar4;
    local_98 = uVar5;
    uStack_90 = uVar12;
    local_88 = lVar2;
    lStack_80 = lVar6;
    local_70 = lVar7;
    lStack_68 = lVar15;
    FUN_1004dbc6c(lVar2,lVar6,lVar3,lVar7,lVar15);
    FUN_1004dbc6c(lVar13,uVar4,uVar1,uVar5,uVar12);
    FUN_10057f470(&local_b0,&local_88);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(lVar15);
    FUN_100558f34(lVar13,uVar4,uVar1,uVar5,uVar12);
    if ((uVar14 & 1) == 0) {
      return 0;
    }
  }
  uVar14 = param_1[0xf];
  lVar13 = param_2[0xf];
  if (uVar14 == 0) {
    if (lVar13 != 0) {
      return 0;
    }
  }
  else {
    if (lVar13 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar13);
    uVar9 = uVar14;
    _swift_bridgeObjectRetain();
    FUN_100554f9c();
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(lVar13);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uVar14 = param_1[0x10];
  lVar13 = param_2[0x10];
  if (uVar14 == 0) {
    if (lVar13 == 0) {
      return 1;
    }
  }
  else if (lVar13 != 0) {
    _swift_bridgeObjectRetain(lVar13);
    uVar9 = uVar14;
    _swift_bridgeObjectRetain();
    FUN_100523efc();
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(lVar13);
    if ((uVar9 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10057fe5c | FUN_10057fe5c */

undefined8
FUN_10057fe5c(long param_1,_StringGuts param_2,_StringGuts param_3,ulong param_4,long param_5,
             undefined *param_6,undefined *param_7,long param_8)

{
  bool bVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined1 auStack_218 [136];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
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
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == *(long *)(param_5 + 0x10)) {
    if (lVar5 != 0 && param_1 != param_5) {
      puVar6 = (undefined8 *)(param_1 + 0x20);
      puVar4 = (undefined8 *)(param_5 + 0x20);
      do {
        uStack_128 = puVar6[0xd];
        local_130 = puVar6[0xc];
        uStack_118 = puVar6[0xf];
        uStack_120 = puVar6[0xe];
        local_110 = puVar6[0x10];
        uStack_168 = puVar6[5];
        local_170 = puVar6[4];
        uStack_158 = puVar6[7];
        uStack_160 = puVar6[6];
        uStack_148 = puVar6[9];
        local_150 = puVar6[8];
        uStack_138 = puVar6[0xb];
        uStack_140 = puVar6[10];
        uStack_188 = puVar6[1];
        local_190 = *puVar6;
        uStack_178 = puVar6[3];
        uStack_180 = puVar6[2];
        uStack_98 = puVar4[0xd];
        local_a0 = puVar4[0xc];
        uStack_88 = puVar4[0xf];
        uStack_90 = puVar4[0xe];
        local_80 = puVar4[0x10];
        uStack_d8 = puVar4[5];
        local_e0 = puVar4[4];
        uStack_c8 = puVar4[7];
        uStack_d0 = puVar4[6];
        uStack_b8 = puVar4[9];
        local_c0 = puVar4[8];
        uStack_a8 = puVar4[0xb];
        uStack_b0 = puVar4[10];
        uStack_f8 = puVar4[1];
        local_100 = *puVar4;
        uStack_e8 = puVar4[3];
        uStack_f0 = puVar4[2];
        FUN_1004db9c8(&local_190,auStack_218);
        FUN_1004db9c8(&local_100,auStack_218);
        puVar2 = &local_190;
        FUN_10057fb70(puVar2,&local_100);
        FUN_1004dba04(&local_100);
        FUN_1004dba04(&local_190);
        if (((ulong)puVar2 & 1) == 0) {
          return 0;
        }
        puVar4 = puVar4 + 0x11;
        puVar6 = puVar6 + 0x11;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
    if (param_3.unknown == (undefined *)0x0) {
      if (param_7 != (undefined *)0x0) {
        return 0;
      }
    }
    else {
      if (param_7 == (undefined *)0x0) {
        return 0;
      }
      if (((param_2.unknown != param_6) || (param_3.unknown != param_7)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            (param_2,param_3,(_StringComparisonResult)(__int8)param_6), !bVar1)) {
        return 0;
      }
    }
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if (param_8 != 0) {
      _swift_bridgeObjectRetain(param_8);
      uVar3 = param_4;
      _swift_bridgeObjectRetain();
      FUN_100523efc();
      _swift_bridgeObjectRelease(param_4);
      _swift_bridgeObjectRelease(param_8);
      if ((uVar3 & 1) != 0) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x100580004 | FUN_100580004 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100580040 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100580004(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (8 < uVar1) {
    uVar1 = 9;
  }
  return uVar1;
}



/* Address: 0x100580068 | FUN_100580068 */

/* WARNING: Removing unreachable block (ram,0x0001005802e8) */
/* WARNING: Removing unreachable block (ram,0x00010058025c) */
/* WARNING: Removing unreachable block (ram,0x000100580214) */
/* WARNING: Removing unreachable block (ram,0x0001005802a4) */
/* WARNING: Removing unreachable block (ram,0x000100580304) */
/* WARNING: Removing unreachable block (ram,0x000100580140) */
/* WARNING: Removing unreachable block (ram,0x0001005804d4) */
/* WARNING: Removing unreachable block (ram,0x000100580464) */
/* WARNING: Removing unreachable block (ram,0x0001005804ec) */
/* WARNING: Removing unreachable block (ram,0x0001005803b0) */
/* WARNING: Removing unreachable block (ram,0x000100580328) */
/* WARNING: Removing unreachable block (ram,0x000100580340) */

void FUN_100580068(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 *local_2a0;
  undefined8 local_298;
  undefined *local_290;
  undefined *local_288;
  void *local_280;
  undefined8 local_278;
  undefined1 local_248 [152];
  char *local_1b0;
  void *pvStack_1a8;
  char **local_1a0;
  undefined *puStack_198;
  char *local_190;
  void *pvStack_188;
  char **ppcStack_180;
  undefined *puStack_178;
  char **local_170;
  undefined *puStack_168;
  char **ppcStack_160;
  undefined8 uStack_158;
  char *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  char *pcStack_128;
  undefined8 local_120;
  undefined1 local_111;
  undefined8 local_110;
  String local_108;
  char **local_f8;
  undefined *puStack_f0;
  String local_e8;
  char **local_d8;
  undefined *puStack_d0;
  char **local_c8;
  undefined *puStack_c0;
  char **local_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  
  puVar1 = &DAT_100fd1f20;
  FUN_1000f7830(&DAT_100fd1f20,&DAT_100c5eee0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005805a4();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_1b0 = (char *)((ulong)local_1b0 & 0xffffffffffffff00);
    local_108 = Swift::KeyedDecodingContainer::_decode(&local_1b0,puVar1);
    local_1b0._0_1_ = 1;
    local_e8 = Swift::KeyedDecodingContainer::_decode(&local_1b0,puVar1);
    local_280 = local_e8.bridgeObject;
    local_1b0._0_1_ = 2;
    ppcVar2 = &local_1b0;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_1b0._0_1_ = 3;
    ppcVar3 = &local_1b0;
    puVar5 = puVar1;
    local_288 = puVar4;
    local_f8 = ppcVar2;
    puStack_f0 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_1b0._0_1_ = 4;
    ppcVar2 = &local_1b0;
    puVar4 = puVar1;
    local_290 = puVar5;
    local_d8 = ppcVar3;
    puStack_d0 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_1b0 = (char *)CONCAT71(local_1b0._1_7_,5);
    ppcVar3 = &local_1b0;
    puVar5 = puVar1;
    local_c8 = ppcVar2;
    puStack_c0 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_b0 = SUB81(puVar5,0);
    local_248[0] = 6;
    local_b8 = ppcVar3;
    FUN_100567a28();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,&DAT_100ee1da8,local_248,puVar1,&DAT_100ee1da8,ppcVar3);
    local_a8 = local_1b0;
    uStack_a0 = pvStack_1a8;
    local_298 = pvStack_1a8;
    local_278 = local_1a0;
    local_98 = local_1a0;
    uStack_90 = puStack_198;
    local_88 = local_190;
    puVar4 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    local_248[0] = 7;
    puVar5 = puVar4;
    FUN_10057a1f8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_1b0,puVar4,local_248,puVar1,puVar4,puVar5);
    pcStack_80 = local_1b0;
    local_111 = 8;
    local_2a0 = param_1;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_110,&DAT_100edcda0,&local_111,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar6 + 8))((long)&local_2a0 - extraout_x8,puVar1);
    local_78 = local_110;
    uStack_148 = uStack_a0;
    local_150 = local_a8;
    uStack_138 = uStack_90;
    uStack_140 = local_98;
    pcStack_128 = pcStack_80;
    local_130 = local_88;
    local_120 = local_110;
    pvStack_188 = local_e8.bridgeObject;
    local_190 = local_e8.str;
    puStack_178 = puStack_d0;
    ppcStack_180 = local_d8;
    uStack_158 = CONCAT71(uStack_af,uStack_b0);
    puStack_168 = puStack_c0;
    local_170 = local_c8;
    ppcStack_160 = local_b8;
    pvStack_1a8 = local_108.bridgeObject;
    local_1b0 = local_108.str;
    puStack_198 = puStack_f0;
    local_1a0 = local_f8;
    FUN_1004dba38(&local_1b0,local_248);
    FUN_100004594(param_2);
    FUN_1004dba74(&local_108);
    local_2a0[0xd] = uStack_148;
    local_2a0[0xc] = local_150;
    local_2a0[0xf] = uStack_138;
    local_2a0[0xe] = uStack_140;
    local_2a0[0x11] = pcStack_128;
    local_2a0[0x10] = local_130;
    local_2a0[0x12] = local_120;
    local_2a0[5] = pvStack_188;
    local_2a0[4] = local_190;
    local_2a0[7] = puStack_178;
    local_2a0[6] = ppcStack_180;
    local_2a0[9] = puStack_168;
    local_2a0[8] = local_170;
    local_2a0[0xb] = uStack_158;
    local_2a0[10] = ppcStack_160;
    local_2a0[1] = pvStack_1a8;
    *local_2a0 = local_1b0;
    local_2a0[3] = puStack_198;
    local_2a0[2] = local_1a0;
  }
  else {
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    FUN_100558f34(1,0,0,0,0);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x1005805a4 | FUN_1005805a4 */

void FUN_1005805a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1438 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ee48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ee48,&DAT_100ee2b48);
  DAT_100fd1438 = pTVar1;
  return;
}



/* Address: 0x1005805e4 | FUN_1005805e4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100580620 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005805e4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Address: 0x100580648 | FUN_100580648 */

/* WARNING: Removing unreachable block (ram,0x000100580848) */
/* WARNING: Removing unreachable block (ram,0x0001005808cc) */
/* WARNING: Removing unreachable block (ram,0x0001005807d0) */
/* WARNING: Removing unreachable block (ram,0x000100580780) */
/* WARNING: Removing unreachable block (ram,0x00010058081c) */
/* WARNING: Removing unreachable block (ram,0x000100580834) */
/* WARNING: Removing unreachable block (ram,0x000100580860) */
/* WARNING: Removing unreachable block (ram,0x000100580870) */
/* WARNING: Removing unreachable block (ram,0x00010058084c) */
/* WARNING: Removing unreachable block (ram,0x00010058085c) */
/* WARNING: Removing unreachable block (ram,0x000100580874) */
/* WARNING: Removing unreachable block (ram,0x000100580718) */

void FUN_100580648(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined1 auStack_148 [72];
  char *local_100;
  void *pvStack_f8;
  char **ppcStack_f0;
  undefined *puStack_e8;
  char **local_e0;
  undefined *puStack_d8;
  char **ppcStack_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined1 local_b1;
  String local_b0;
  char **local_a0;
  undefined *puStack_98;
  char **local_90;
  undefined *puStack_88;
  char **local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd1f18;
  FUN_1000f7830(&DAT_100fd1f18,&DAT_100c5eed8);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10058094c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_100 = (char *)((ulong)local_100 & 0xffffffffffffff00);
    local_b0 = Swift::KeyedDecodingContainer::_decode(&local_100,puVar1);
    local_100._0_1_ = 1;
    ppcVar2 = &local_100;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_100._0_1_ = 2;
    ppcVar3 = &local_100;
    puVar5 = puVar1;
    local_150 = puVar4;
    local_a0 = ppcVar2;
    puStack_98 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_100._0_1_ = 3;
    ppcVar2 = &local_100;
    puVar4 = puVar1;
    local_158 = puVar5;
    local_90 = ppcVar3;
    puStack_88 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_b1 = 4;
    local_160 = puVar4;
    local_80 = ppcVar2;
    puStack_78 = puVar4;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_b1,puVar1,&DAT_100edcda0,ppcVar2);
    (**(code **)(lVar6 + 8))((long)&local_160 - extraout_x8,puVar1);
    local_70 = local_58;
    puStack_d8 = puStack_88;
    local_e0 = local_90;
    puStack_c8 = puStack_78;
    ppcStack_d0 = local_80;
    local_c0 = local_58;
    pvStack_f8 = local_b0.bridgeObject;
    local_100 = local_b0.str;
    puStack_e8 = puStack_98;
    ppcStack_f0 = local_a0;
    FUN_100558dd0(&local_100,auStack_148);
    FUN_100004594(param_2);
    FUN_100558e0c(&local_b0);
    param_1[5] = puStack_d8;
    param_1[4] = local_e0;
    param_1[7] = puStack_c8;
    param_1[6] = ppcStack_d0;
    param_1[8] = local_c0;
    param_1[1] = pvStack_f8;
    *param_1 = local_100;
    param_1[3] = puStack_e8;
    param_1[2] = ppcStack_f0;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10058094c | FUN_10058094c */

void FUN_10058094c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5edf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5edf8,&DAT_100ee2ab8);
  DAT_100fd1448 = pTVar1;
  return;
}



/* Address: 0x10058098c | FUN_10058098c */

void FUN_10058098c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1458 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5eda8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5eda8,&DAT_100ee2a28);
  DAT_100fd1458 = pTVar1;
  return;
}



/* Address: 0x1005809cc | FUN_1005809cc */

undefined4 FUN_1005809cc(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x6c706d6554697275 || param_2 != (undefined1 *)0xeb00000000657461) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6c706d6554697275,(_StringGuts)0xeb00000000657461,expecting);
    if (!bVar1) {
      if (((param_1 == 0x656d616e) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == 0x656c746974) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == 0x7470697263736564) && (param_2 == &DAT_eb000000006e6f69)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7470697263736564,(_StringGuts)0xeb000000006e6f69,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == 0x65707954656d696d) && (param_2 == &DAT_e800000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65707954656d696d,(_StringGuts)0xe800000000000000,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != 0x697461746f6e6e61) || (param_2 != (undefined1 *)0xeb00000000736e6f)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x697461746f6e6e61,(_StringGuts)0xeb00000000736e6f,
                             expecting), !bVar1)) {
        if (((param_1 != 0x736e6f6369) || (param_2 != &DAT_e500000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x736e6f6369,(_StringGuts)0xe500000000000000,expecting),
           !bVar1)) {
          if ((param_1 == 0x6174656d5f) && (param_2 == &DAT_e500000000000000)) {
            _swift_bridgeObjectRelease(&DAT_e500000000000000);
            return 7;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6174656d5f,(_StringGuts)0xe500000000000000,expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 7;
          }
          return 8;
        }
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100580c5c | FUN_100580c5c */

/* WARNING: Removing unreachable block (ram,0x000100580e80) */
/* WARNING: Removing unreachable block (ram,0x000100580dfc) */
/* WARNING: Removing unreachable block (ram,0x000100580e40) */
/* WARNING: Removing unreachable block (ram,0x000100580e94) */
/* WARNING: Removing unreachable block (ram,0x000100580f38) */
/* WARNING: Removing unreachable block (ram,0x000100580d34) */
/* WARNING: Removing unreachable block (ram,0x000100581060) */
/* WARNING: Removing unreachable block (ram,0x0001005810c8) */
/* WARNING: Removing unreachable block (ram,0x000100580fa8) */
/* WARNING: Removing unreachable block (ram,0x000100580ee8) */

void FUN_100580c5c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined *local_240;
  void *local_238;
  undefined1 local_218 [136];
  char *local_190;
  void *pvStack_188;
  char *local_180;
  void *pvStack_178;
  char **local_170;
  undefined *puStack_168;
  char **ppcStack_160;
  undefined *puStack_158;
  char **local_150;
  undefined *puStack_148;
  char *pcStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  char *pcStack_118;
  undefined8 local_110;
  undefined1 local_101;
  undefined8 local_100;
  String local_f8;
  String local_e8;
  char **local_d8;
  undefined *puStack_d0;
  char **local_c8;
  undefined *puStack_c0;
  char **local_b8;
  undefined *puStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *pcStack_80;
  undefined8 local_78;
  
  puVar1 = &DAT_100fd1f10;
  FUN_1000f7830(&DAT_100fd1f10,&DAT_100c5eed0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10058098c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_190 = (char *)((ulong)local_190 & 0xffffffffffffff00);
    local_f8 = Swift::KeyedDecodingContainer::_decode(&local_190,puVar1);
    local_190._0_1_ = 1;
    local_e8 = Swift::KeyedDecodingContainer::_decode(&local_190,puVar1);
    local_238 = local_e8.bridgeObject;
    local_190._0_1_ = 2;
    ppcVar2 = &local_190;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190._0_1_ = 3;
    ppcVar3 = &local_190;
    puVar5 = puVar1;
    local_d8 = ppcVar2;
    puStack_d0 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_190 = (char *)CONCAT71(local_190._1_7_,4);
    ppcVar2 = &local_190;
    puVar4 = puVar1;
    local_c8 = ppcVar3;
    puStack_c0 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_218[0] = 5;
    local_240 = puVar4;
    local_b8 = ppcVar2;
    puStack_b0 = puVar4;
    FUN_100567a28();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_190,&DAT_100ee1da8,local_218,puVar1,&DAT_100ee1da8,ppcVar2);
    local_a8 = local_190;
    uStack_a0 = pvStack_188;
    local_250 = local_180;
    local_248 = pvStack_188;
    local_98 = local_180;
    uStack_90 = pvStack_178;
    local_260 = local_170;
    local_258 = pvStack_178;
    local_88 = local_170;
    puVar4 = &DAT_100fce820;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    local_218[0] = 6;
    puVar5 = puVar4;
    FUN_10057a1f8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_190,puVar4,local_218,puVar1,puVar4,puVar5);
    pcStack_80 = local_190;
    local_101 = 7;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_100,&DAT_100edcda0,&local_101,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar6 + 8))((long)&local_260 - extraout_x8,puVar1);
    local_78 = local_100;
    uStack_128 = uStack_90;
    local_130 = local_98;
    pcStack_118 = pcStack_80;
    uStack_120 = local_88;
    local_110 = local_100;
    puStack_168 = puStack_d0;
    local_170 = local_d8;
    puStack_158 = puStack_c0;
    ppcStack_160 = local_c8;
    puStack_148 = puStack_b0;
    local_150 = local_b8;
    uStack_138 = uStack_a0;
    pcStack_140 = local_a8;
    pvStack_188 = local_f8.bridgeObject;
    local_190 = local_f8.str;
    pvStack_178 = local_e8.bridgeObject;
    local_180 = local_e8.str;
    FUN_1004db9c8(&local_190,local_218);
    FUN_100004594(param_2);
    FUN_1004dba04(&local_f8);
    param_1[0xd] = uStack_128;
    param_1[0xc] = local_130;
    param_1[0xf] = pcStack_118;
    param_1[0xe] = uStack_120;
    param_1[0x10] = local_110;
    param_1[5] = puStack_168;
    param_1[4] = local_170;
    param_1[7] = puStack_158;
    param_1[6] = ppcStack_160;
    param_1[9] = puStack_148;
    param_1[8] = local_150;
    param_1[0xb] = uStack_138;
    param_1[10] = pcStack_140;
    param_1[1] = pvStack_188;
    *param_1 = local_190;
    param_1[3] = pvStack_178;
    param_1[2] = local_180;
  }
  else {
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    FUN_100558f34(1,0,0,0,0);
    _swift_bridgeObjectRelease(0);
  }
  return;
}



/* Address: 0x10058117c | FUN_10058117c */

void FUN_10058117c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd14c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ed58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ed58,&DAT_100ee2998);
  DAT_100fd14c0 = pTVar1;
  return;
}



/* Address: 0x1005811bc | FUN_1005811bc */

void FUN_1005811bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd14d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd14c8;
  FUN_1000f8b08(&DAT_100fd14c8,&DAT_100c5cfc8);
  puVar2 = puVar1;
  FUN_10058122c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd14d0 = puVar3;
  return;
}



/* Address: 0x10058122c | FUN_10058122c */

void FUN_10058122c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd14d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d2a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d2a8,&DAT_100ee1e48);
  DAT_100fd14d8 = pTVar1;
  return;
}



/* Address: 0x10058126c | FUN_10058126c */

undefined4 FUN_10058126c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x65636e6569647561 || param_2 != &DAT_e800000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65636e6569647561,(_StringGuts)0xe800000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != 0x797469726f697270) || (param_2 != &DAT_e800000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x797469726f697270,(_StringGuts)0xe800000000000000,
                             expecting), !bVar1)) {
        if ((param_1 == 0x69646f4d7473616c) && (param_2 == (undefined1 *)0xec00000064656966)) {
          _swift_bridgeObjectRelease(0xec00000064656966);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x69646f4d7473616c,(_StringGuts)0xec00000064656966,expecting
                          );
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



/* Address: 0x100581384 | FUN_100581384 */

/* WARNING: Removing unreachable block (ram,0x000100581510) */
/* WARNING: Removing unreachable block (ram,0x000100581480) */

void FUN_100581384(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  undefined1 *local_70;
  undefined4 local_68;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar1 = &DAT_100fd1ef8;
  FUN_1000f7830(&DAT_100fd1ef8,&DAT_100c5eec8);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10058117c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fd14c8;
    FUN_1000f7830(&DAT_100fd14c8,&DAT_100c5cfc8);
    local_61 = 0;
    puVar3 = puVar2;
    FUN_100584b10();
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_58,puVar2,&local_61,puVar1,puVar2,puVar3)
    ;
    local_62 = 1;
    puVar4 = &local_62;
    puVar2 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_68 = SUB84(puVar2,0);
    local_63 = 2;
    puVar5 = &local_63;
    puVar2 = puVar1;
    local_70 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar6 + 8))((long)&local_70 - extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = local_58;
    param_1[1] = local_70;
    *(char *)(param_1 + 2) = (char)local_68;
    param_1[3] = puVar5;
    param_1[4] = puVar2;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10058156c | FUN_10058156c */

void FUN_10058156c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd14e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ed08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ed08,&DAT_100ee2908);
  DAT_100fd14e8 = pTVar1;
  return;
}



/* Address: 0x1005815ac | FUN_1005815ac */

void FUN_1005815ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1500 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ecb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ecb8,&DAT_100ee2878);
  DAT_100fd1500 = pTVar1;
  return;
}



/* Address: 0x1005815ec | FUN_1005815ec */

void FUN_1005815ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd1510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd1508;
  FUN_1000f8b08(&DAT_100fd1508,&DAT_100c5cfe8);
  puVar2 = puVar1;
  FUN_10058165c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd1510 = puVar3;
  return;
}



/* Address: 0x10058165c | FUN_10058165c */

void FUN_10058165c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1518 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d3f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d3f0,&DAT_100ee1be0);
  DAT_100fd1518 = pTVar1;
  return;
}



/* Address: 0x10058169c | FUN_10058169c */

/* WARNING: Removing unreachable block (ram,0x000100581808) */
/* WARNING: Removing unreachable block (ram,0x000100581878) */
/* WARNING: Removing unreachable block (ram,0x00010058187c) */
/* WARNING: Removing unreachable block (ram,0x000100581890) */
/* WARNING: Removing unreachable block (ram,0x000100581794) */

undefined8 FUN_10058169c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar1 = &DAT_100fd1ee0;
  FUN_1000f7830(&DAT_100fd1ee0,&DAT_100c5eec0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar5);
  FUN_1005815ac();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fd1508;
    FUN_1000f7830(&DAT_100fd1508,&DAT_100c5cfe8);
    local_61 = 0;
    puVar3 = puVar2;
    FUN_100584a60();
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar2,&local_61,puVar1,puVar2,puVar3);
    uVar5 = CONCAT71(uStack_57,local_58);
    local_58 = 1;
    puVar4 = &local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar4,puVar1);
    local_61 = 2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_61,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5;
}



/* Address: 0x1005818ac | FUN_1005818ac */

void FUN_1005818ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ec68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ec68,&DAT_100ee27e8);
  DAT_100fd1528 = pTVar1;
  return;
}



/* Address: 0x1005818ec | FUN_1005818ec */

void FUN_1005818ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ec18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ec18,&DAT_100ee2758);
  DAT_100fd1540 = pTVar1;
  return;
}



/* Address: 0x10058192c | FUN_10058192c */

void FUN_10058192c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd1550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd1548;
  FUN_1000f8b08(&DAT_100fd1548,&DAT_100c5d008);
  puVar2 = puVar1;
  FUN_10056386c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd1550 = puVar3;
  return;
}



/* Address: 0x10058199c | FUN_10058199c */

/* WARNING: Removing unreachable block (ram,0x000100581b20) */
/* WARNING: Removing unreachable block (ram,0x000100581a90) */

undefined1  [16] FUN_10058199c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  undefined1 auStack_60 [7];
  undefined1 local_59;
  long local_58;
  
  puVar1 = &DAT_100fd1ed0;
  FUN_1000f7830(&DAT_100fd1ed0,&DAT_100c5eeb8);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_1 + 0x18);
  lVar2 = param_1;
  FUN_100004640(param_1,lVar5);
  FUN_1005818ec();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100fd1548;
    FUN_1000f7830(&DAT_100fd1548,&DAT_100c5d008);
    local_59 = 0;
    puVar4 = puVar3;
    FUN_1005849f0();
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3,&local_59,puVar1,puVar3,puVar4);
    lVar5 = local_58;
    local_59 = 1;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_59,puVar1,&DAT_100edcda0,puVar3);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = lVar2;
  }
  auVar7._8_8_ = local_58;
  auVar7._0_8_ = lVar5;
  return auVar7;
}



/* Address: 0x100581b44 | FUN_100581b44 */

void FUN_100581b44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1560 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ebc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ebc8,&DAT_100ee26c8);
  DAT_100fd1560 = pTVar1;
  return;
}



/* Address: 0x100581b84 | FUN_100581b84 */

void FUN_100581b84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1578 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5eb78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5eb78,&DAT_100ee2638);
  DAT_100fd1578 = pTVar1;
  return;
}



/* Address: 0x100581bc4 | FUN_100581bc4 */

void FUN_100581bc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fd1588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd1580;
  FUN_1000f8b08(&DAT_100fd1580,&DAT_100c5d028);
  puVar2 = puVar1;
  FUN_100581c34();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510,puVar1,&local_28);
  DAT_100fd1588 = puVar3;
  return;
}



/* Address: 0x100581c34 | FUN_100581c34 */

void FUN_100581c34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1590 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d190;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d190,&DAT_100ee1d10);
  DAT_100fd1590 = pTVar1;
  return;
}



/* Address: 0x100581c74 | FUN_100581c74 */

/* WARNING: Removing unreachable block (ram,0x000100581de0) */
/* WARNING: Removing unreachable block (ram,0x000100581e50) */
/* WARNING: Removing unreachable block (ram,0x000100581e54) */
/* WARNING: Removing unreachable block (ram,0x000100581e68) */
/* WARNING: Removing unreachable block (ram,0x000100581d6c) */

undefined8 FUN_100581c74(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar1 = &DAT_100fd1eb8;
  FUN_1000f7830(&DAT_100fd1eb8,&DAT_100c5eeb0);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar5);
  FUN_100581b84();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar2 = &DAT_100fd1580;
    FUN_1000f7830(&DAT_100fd1580,&DAT_100c5d028);
    local_61 = 0;
    puVar3 = puVar2;
    FUN_100584940();
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar2,&local_61,puVar1,puVar2,puVar3);
    uVar5 = CONCAT71(uStack_57,local_58);
    local_58 = 1;
    puVar4 = &local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar4,puVar1);
    local_61 = 2;
    FUN_1004e16ac();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100edcda0,&local_61,puVar1,&DAT_100edcda0,puVar4);
    (**(code **)(lVar6 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return uVar5;
}



/* Address: 0x100581e84 | FUN_100581e84 */

void FUN_100581e84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd15a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5eb28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5eb28,&DAT_100ee25a8);
  DAT_100fd15a0 = pTVar1;
  return;
}



/* Address: 0x100581ec4 | FUN_100581ec4 */

void FUN_100581ec4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd15b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ead8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ead8,&DAT_100ee2588);
  DAT_100fd15b0 = pTVar1;
  return;
}



/* Address: 0x100581f04 | FUN_100581f04 */

void FUN_100581f04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd15c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ea88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ea88,&DAT_100ee24f8);
  DAT_100fd15c8 = pTVar1;
  return;
}



/* Address: 0x100581f44 | FUN_100581f44 */

void FUN_100581f44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd15e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5ea38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5ea38,&DAT_100ee2468);
  DAT_100fd15e0 = pTVar1;
  return;
}



/* Address: 0x100581f84 | FUN_100581f84 */

void FUN_100581f84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd15f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5e9e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5e9e8,&DAT_100ee23d8);
  DAT_100fd15f8 = pTVar1;
  return;
}



/* Address: 0x100581fc4 | thunk_FUN_100581fc8 */

void thunk_FUN_100581fc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1600 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d100;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d100,&DAT_100ee1c80);
  DAT_100fd1600 = pTVar1;
  return;
}



/* Address: 0x100581fc8 | FUN_100581fc8 */

void FUN_100581fc8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1600 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d100;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d100,&DAT_100ee1c80);
  DAT_100fd1600 = pTVar1;
  return;
}



/* Address: 0x100582008 | thunk_FUN_10058200c */

void thunk_FUN_10058200c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d1b8,&DAT_100ee1d10);
  DAT_100fd1608 = pTVar1;
  return;
}



/* Address: 0x10058200c | FUN_10058200c */

void FUN_10058200c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5d1b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5d1b8,&DAT_100ee1d10);
  DAT_100fd1608 = pTVar1;
  return;
}


