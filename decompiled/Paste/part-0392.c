/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004d5898 | FUN_1004d5898 */

void FUN_1004d5898(void)

{
  undefined8 *unaff_x20;
  
  FUN_1004d56c8(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1004d58a8 | FUN_1004d58a8 */

undefined1  [16] FUN_1004d58a8(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  long extraout_x8;
  long extraout_x12;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_80 [8];
  undefined1 local_78 [8];
  char *pcStack_70;
  undefined1 auStack_60 [8];
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 == 7) {
    local_50 = 0;
    local_48 = 0xe000000000000000;
    pcVar5 = param_3;
    Swift::_StringGuts::grow(0x1e,param_2);
    _swift_bridgeObjectRelease(local_48);
    local_50 = 0x5b;
    local_48 = 0xe100000000000000;
    local_58 = (char *)0xffffffffffff82ff;
    SVar7 = Swift::CustomStringConvertible::get_description();
    SVar13.bridgeObject = param_4;
    SVar13.str = pcVar5;
    Swift::String::append(SVar7,SVar13);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    SVar8.bridgeObject = &SUB_e200000000000000;
    SVar8.str = (char *)0x205d;
    SVar14.bridgeObject = param_4;
    SVar14.str = pcVar5;
    Swift::String::append(SVar8,SVar14);
    pvVar6 = (void *)0x7;
    pcVar4 = param_1;
    FUN_1004d5190();
    pcVar5 = (char *)0x0;
    if (param_2.unknown != (undefined *)0x0) {
      pcVar5 = pcVar4;
    }
    puVar2 = (undefined *)0xe000000000000000;
    if (param_2.unknown != (undefined *)0x0) {
      puVar2 = param_2.unknown;
    }
    SVar9.bridgeObject = puVar2;
    SVar9.str = pcVar5;
    SVar15.bridgeObject = pvVar6;
    SVar15.str = param_3;
    Swift::String::append(SVar9,SVar15);
    _swift_bridgeObjectRelease(puVar2);
    SVar10.bridgeObject = (void *)0x8000000100dab470;
    SVar10.str = (char *)0xd000000000000014;
    SVar16.bridgeObject = pvVar6;
    SVar16.str = param_3;
    Swift::String::append(SVar10,SVar16);
    _swift_getErrorValue(param_1,auStack_60,local_78);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pcStack_70 + -8) + 0x40));
    pcVar5 = pcStack_70;
    (**(code **)(extraout_x12 + 0x10))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    SVar7 = Swift::String::_init(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcStack_70)
    ;
    SVar17.bridgeObject = pvVar6;
    SVar17.str = pcVar5;
    Swift::String::append(SVar7,SVar17);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    SVar11.bridgeObject = (void *)0xe100000000000000;
    SVar11.str = (char *)0x29;
    SVar18.bridgeObject = pvVar6;
    SVar18.str = pcVar5;
    Swift::String::append(SVar11,SVar18);
  }
  else {
    local_50 = 0x5b;
    local_48 = 0xe100000000000000;
    if (uVar1 < 4) {
      if (uVar1 == 1 || ((ulong)param_4 & 0xff) == 0) {
        local_58 = (char *)0xffffffffffff8044;
        if (((ulong)param_4 & 0xff) != 0) {
          local_58 = (char *)0xffffffffffff80a8;
        }
      }
      else if (uVar1 == 2) {
        local_58 = (char *)0xffffffffffff80a7;
      }
      else {
        local_58 = (char *)0xffffffffffff80a6;
      }
    }
    else if (uVar1 < 6) {
      local_58 = param_1;
      if (uVar1 == 4) {
        local_58 = (char *)0xffffffffffff80a5;
      }
    }
    else if (uVar1 == 6) {
      local_58 = (char *)0xffffffffffff82d6;
    }
    else {
      local_58 = (char *)0xffffffffffff8300;
    }
    pcVar5 = param_3;
    pvVar6 = param_4;
    SVar7 = Swift::CustomStringConvertible::get_description();
    SVar19.bridgeObject = pvVar6;
    SVar19.str = pcVar5;
    Swift::String::append(SVar7,SVar19);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    SVar7.bridgeObject = &SUB_e200000000000000;
    SVar7.str = (char *)0x205d;
    SVar20.bridgeObject = pvVar6;
    SVar20.str = pcVar5;
    Swift::String::append(SVar7,SVar20);
    FUN_1004d5190();
    pcVar5 = (char *)0x0;
    if (param_2.unknown != (undefined *)0x0) {
      pcVar5 = param_1;
    }
    puVar2 = (undefined *)0xe000000000000000;
    if (param_2.unknown != (undefined *)0x0) {
      puVar2 = param_2.unknown;
    }
    SVar12.bridgeObject = puVar2;
    SVar12.str = pcVar5;
    SVar21.bridgeObject = param_4;
    SVar21.str = param_3;
    Swift::String::append(SVar12,SVar21);
    _swift_bridgeObjectRelease(puVar2);
  }
  auVar3._8_8_ = local_48;
  auVar3._0_8_ = local_50;
  return auVar3;
}



/* Address: 0x1004d5b1c | FUN_1004d5b1c */

void FUN_1004d5b1c(void)

{
  undefined8 *unaff_x20;
  
  FUN_1004d58a8(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1004d5b2c | FUN_1004d5b2c */

void FUN_1004d5b2c(void)

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
  pcVar1 = (char *)0x6567617373656d;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x61746164;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar3 = (char *)0x65646f63;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e400000000000000;
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



/* Address: 0x1004d5bbc | FUN_1004d5bbc */

void FUN_1004d5bbc(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x6567617373656d;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x61746164;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar3 = (char *)0x65646f63;
  if (cVar5 != '\0') {
    pcVar3 = pcVar1;
  }
  puVar4 = &DAT_e400000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar3;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x1004d5c28 | FUN_1004d5c28 */

void FUN_1004d5c28(__int64 param_1)

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
  pcVar1 = (char *)0x6567617373656d;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x61746164;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar3 = (char *)0x65646f63;
  if (cVar4 != '\0') {
    pcVar3 = pcVar1;
  }
  HVar5.unknown = &DAT_e400000000000000;
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



/* Address: 0x1004d5cb4 | FUN_1004d5cb4 */

void FUN_1004d5cb4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004da020(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004d5ce0 | FUN_1004d5ce0 */

void FUN_1004d5ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x6567617373656d;
  if (cVar5 != '\x01') {
    uVar1 = 0x61746164;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  uVar3 = 0x65646f63;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e400000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x1004d5d30 | FUN_1004d5d30 */

undefined1  [16] FUN_1004d5d30(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x6567617373656d;
  if (cVar5 != '\x01') {
    uVar1 = 0x61746164;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  uVar3 = 0x65646f63;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e400000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1004d5d7c | FUN_1004d5d7c */

void FUN_1004d5d7c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004da020();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004d5da0 | FUN_1004d5da0 */

String FUN_1004d5da0(void)

{
  String SVar1;
  
  FUN_1004d9e00();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004d5dc8 | FUN_1004d5dc8 */

String FUN_1004d5dc8(void)

{
  String SVar1;
  
  FUN_1004d9e00();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004d5df0 | FUN_1004d5df0 */

/* WARNING: Removing unreachable block (ram,0x0001004d5ffc) */

void FUN_1004d5df0(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  ulong *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  _DictionaryStorage *this;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  long extraout_x8;
  code *pcVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  long unaff_x21;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined1 *puVar23;
  String SVar24;
  undefined1 auStack_2e0 [8];
  undefined *local_2d8;
  ulong local_1b8;
  undefined1 *local_1b0 [5];
  undefined1 local_188 [8];
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined1 local_d1;
  undefined *local_d0;
  undefined1 local_c8 [24];
  undefined1 auStack_b0 [80];
  
  puVar8 = &DAT_100fcc350;
  FUN_1000f7830(&DAT_100fcc350,&DAT_100c519d0);
  lVar15 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar23 = auStack_2e0 + -extraout_x8;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004d9e00();
  Swift::Encoder::_container();
  uVar2 = (uint)param_5 & 0xff;
  uVar22 = 0xffffffffffff82ff;
  if (uVar2 != 7) {
    uVar22 = 0xffffffffffff8300;
  }
  uVar9 = 0xffffffffffff82d6;
  if (uVar2 != 6) {
    uVar9 = uVar22;
  }
  uVar22 = 0xffffffffffff80a5;
  if (uVar2 != 4) {
    uVar22 = param_2;
  }
  if (uVar2 < 6) {
    uVar9 = uVar22;
  }
  uVar22 = 0xffffffffffff80a7;
  if (uVar2 != 2) {
    uVar22 = 0xffffffffffff80a6;
  }
  uVar3 = 0xffffffffffff8044;
  if ((param_5 & 0xff) != 0) {
    uVar3 = 0xffffffffffff80a8;
  }
  if (uVar2 == 1 || (param_5 & 0xff) == 0) {
    uVar22 = uVar3;
  }
  if (uVar2 < 4) {
    uVar9 = uVar22;
  }
  local_d0 = (undefined *)((ulong)local_d0 & 0xffffffffffffff00);
  Swift::KeyedEncodingContainer::_encode(uVar9,&local_d0,puVar8);
  if (unaff_x21 == 0) {
    uVar2 = (uint)param_5 & 0xff;
    if (uVar2 < 5) {
      FUN_1004d9ee8(param_2,param_3,param_4,param_5);
      uVar9 = param_2;
      lVar20 = param_3;
      FUN_1004d5190(param_2,param_3,param_4,param_5);
      uVar22 = 0x206e776f6e6b6e55;
      if (lVar20 != 0) {
        uVar22 = uVar9;
      }
      lVar19 = -0x12ffff8d908d8d9b;
      if (lVar20 != 0) {
        lVar19 = lVar20;
      }
      local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
      Swift::KeyedEncodingContainer::_encode(uVar22,lVar19,&local_d0,puVar8);
      _swift_bridgeObjectRelease(lVar19);
      if (param_3 == 0) {
        pcVar16 = *(code **)(lVar15 + 8);
      }
      else {
        puVar12 = &DAT_100fcb888;
        FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
        _swift_initStackObject();
        *(undefined8 *)(puVar12 + 0x18) = 2;
        *(undefined8 *)(puVar12 + 0x10) = 1;
        *(undefined8 *)(puVar12 + 0x20) = 0x6c6961746564;
        *(undefined1 **)(puVar12 + 0x28) = &DAT_e600000000000000;
        *(undefined8 *)(puVar12 + 0x30) = param_2;
        *(long *)(puVar12 + 0x38) = param_3;
        puVar13 = puVar12;
        FUN_1004a66a4();
        _swift_setDeallocating(puVar12);
        FUN_1000fb4c4(puVar12 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
        local_d1 = 2;
        puVar12 = &DAT_100fcc360;
        local_d0 = puVar13;
        FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
        puVar14 = puVar12;
        FUN_1004d9e40();
        Swift::KeyedEncodingContainer::_encode(&local_d0,&local_d1,puVar8,puVar12,puVar14);
        _swift_bridgeObjectRelease(puVar13);
        pcVar16 = *(code **)(lVar15 + 8);
      }
    }
    else if (uVar2 < 7) {
      if (uVar2 == 5) {
        FUN_1004d5190(param_2,param_3,param_4,5);
        uVar22 = 0x206e776f6e6b6e55;
        if (param_3 != 0) {
          uVar22 = param_2;
        }
        lVar20 = -0x12ffff8d908d8d9b;
        if (param_3 != 0) {
          lVar20 = param_3;
        }
        local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
        Swift::KeyedEncodingContainer::_encode(uVar22,lVar20,&local_d0,puVar8);
        (**(code **)(lVar15 + 8))(puVar23,puVar8);
        _swift_bridgeObjectRelease(lVar20);
        return;
      }
      local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
      Swift::KeyedEncodingContainer::_encode(param_2,param_3,&local_d0,puVar8);
      lVar20 = *(long *)(param_4 + 0x10);
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
      local_2d8 = puVar8;
      if (lVar20 != 0) {
        local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1004d6e44(0,lVar20,0);
        puVar8 = local_d0;
        this = (_DictionaryStorage *)&DAT_100fcb498;
        FUN_1000f7830(&DAT_100fcb498,&DAT_100c519f0);
        lVar19 = 0;
        do {
          puVar18 = (undefined8 *)(param_4 + 0x20 + lVar19 * 0x40);
          local_1b0[1] = (undefined1 *)*puVar18;
          uVar22 = puVar18[1];
          uStack_170 = puVar18[2];
          uVar9 = puVar18[3];
          uStack_138 = puVar18[4];
          uVar3 = puVar18[5];
          uStack_100 = puVar18[6];
          uVar5 = puVar18[7];
          local_1b8 = 0x65646f6d;
          local_1b0[0] = &DAT_e400000000000000;
          local_1b0[4] = (undefined1 *)0x3000000000000000;
          local_1b0[3] = (undefined1 *)0x0;
          local_188[0] = 0;
          local_180 = 0x7461746963696c65;
          local_178 = 0xed000064496e6f69;
          uStack_158 = 0x3000000000000000;
          local_160 = 0;
          local_150 = 0;
          local_148 = 0x6c7275;
          local_140 = 0xe300000000000000;
          uStack_120 = 0x3000000000000000;
          local_128 = 0;
          local_118 = 0;
          local_110 = 0x6567617373656d;
          local_108 = &DAT_e700000000000000;
          uStack_e8 = 0x3000000000000000;
          local_f0 = 0;
          local_e0 = 0;
          lVar10 = 4;
          local_1b0[2] = (undefined1 *)uVar22;
          local_168 = uVar9;
          local_130 = uVar3;
          local_f8 = uVar5;
          Swift::_DictionaryStorage::_allocate(this,4);
          _swift_bridgeObjectRetain(uVar22);
          _swift_bridgeObjectRetain(uVar9);
          _swift_bridgeObjectRetain(uVar3);
          _swift_bridgeObjectRetain(uVar5);
          _swift_retain(lVar10);
          lVar21 = 0;
          do {
            uVar4 = *(ulong *)((long)&local_1b8 + lVar21);
            uVar6 = *(ulong *)((long)local_1b0 + lVar21);
            uVar22 = *(undefined8 *)((long)local_1b0 + lVar21 + 8);
            uVar3 = *(undefined8 *)((long)local_1b0 + lVar21 + 0x10);
            uVar9 = *(undefined8 *)((long)local_1b0 + lVar21 + 0x18);
            uVar5 = *(undefined8 *)(local_188 + lVar21 + -8);
            uVar7 = local_188[lVar21];
            _swift_bridgeObjectRetain(uVar6);
            FUN_10045b2bc(uVar22,uVar3,uVar9,uVar5,uVar7);
            uVar11 = uVar4;
            uVar17 = uVar6;
            FUN_100071370();
            if ((uVar17 & 1) != 0) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x1004d6878);
              (*pcVar16)();
            }
            uVar17 = uVar11 >> 3 & 0x1ffffffffffffff8;
            *(ulong *)(lVar10 + 0x40 + uVar17) =
                 *(ulong *)(lVar10 + 0x40 + uVar17) | 1L << (uVar11 & 0x3f);
            puVar1 = (ulong *)(*(long *)(lVar10 + 0x30) + uVar11 * 0x10);
            *puVar1 = uVar4;
            puVar1[1] = uVar6;
            puVar18 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar11 * 0x28);
            *puVar18 = uVar22;
            puVar18[1] = uVar3;
            puVar18[2] = uVar9;
            puVar18[3] = uVar5;
            *(undefined1 *)(puVar18 + 4) = uVar7;
            if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar16 = (code *)SoftwareBreakpoint(1,0x1004d687c);
              (*pcVar16)();
            }
            *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
            lVar21 = lVar21 + 0x38;
          } while (lVar21 != 0xe0);
          _swift_release(lVar10);
          puVar12 = &DAT_100fcc370;
          FUN_1000f7830(&DAT_100fcc370,&DAT_100c519f8);
          _swift_arrayDestroy(&local_1b8,4,puVar12);
          uVar4 = *(ulong *)(puVar8 + 0x10);
          local_d0 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
            FUN_1004d6e44(1 < *(ulong *)(puVar8 + 0x18),uVar4 + 1,1);
          }
          lVar19 = lVar19 + 1;
          *(ulong *)(local_d0 + 0x10) = uVar4 + 1;
          *(long *)(local_d0 + uVar4 * 8 + 0x20) = lVar10;
          puVar8 = local_d0;
          puVar12 = local_d0;
        } while (lVar19 != lVar20);
      }
      puVar8 = local_2d8;
      puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar13 = &DAT_100fcc378;
      FUN_1000f7830(&DAT_100fcc378,&DAT_100c51a00);
      _swift_initStackObject();
      *(undefined8 *)(puVar13 + 0x18) = 2;
      *(undefined8 *)(puVar13 + 0x10) = 1;
      *(undefined8 *)(puVar13 + 0x20) = 0x7461746963696c65;
      *(undefined8 *)(puVar13 + 0x28) = 0xec000000736e6f69;
      lVar20 = *(long *)(puVar12 + 0x10);
      if (lVar20 == 0) {
        _swift_bridgeObjectRelease(puVar12);
      }
      else {
        local_d0 = puVar14;
        FUN_1004d6e28(0,lVar20,0);
        lVar19 = 0x20;
        puVar14 = local_d0;
        do {
          uVar22 = *(undefined8 *)(puVar12 + lVar19);
          uVar4 = *(ulong *)(puVar14 + 0x10);
          uVar6 = *(ulong *)(puVar14 + 0x18);
          local_d0 = puVar14;
          _swift_bridgeObjectRetain(uVar22);
          if (uVar6 >> 1 <= uVar4) {
            FUN_1004d6e28(1 < uVar6,uVar4 + 1,1);
            puVar14 = local_d0;
          }
          *(ulong *)(puVar14 + 0x10) = uVar4 + 1;
          *(undefined8 *)(puVar14 + uVar4 * 0x28 + 0x20) = uVar22;
          *(undefined8 *)(puVar14 + uVar4 * 0x28 + 0x28) = 0;
          *(undefined8 *)(puVar14 + uVar4 * 0x28 + 0x30) = 0;
          *(undefined8 *)(puVar14 + uVar4 * 0x28 + 0x38) = 0x2000000000000000;
          puVar14[uVar4 * 0x28 + 0x40] = 1;
          lVar19 = lVar19 + 8;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
        _swift_bridgeObjectRelease(puVar12);
        puVar8 = local_2d8;
      }
      *(undefined **)(puVar13 + 0x30) = puVar14;
      *(undefined8 *)(puVar13 + 0x38) = 0;
      *(undefined8 *)(puVar13 + 0x40) = 0;
      *(undefined8 *)(puVar13 + 0x48) = 0x1000000000000000;
      puVar13[0x50] = 1;
      puVar14 = puVar13;
      FUN_1004a68e0();
      _swift_setDeallocating(puVar13);
      FUN_1000fb4c4(puVar13 + 0x20,&DAT_100fcc370,&DAT_100c519f8);
      local_d1 = 2;
      puVar12 = &DAT_100fcc380;
      local_d0 = puVar14;
      FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
      puVar13 = &DAT_100fcc388;
      FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                    PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                    ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68)
      ;
      Swift::KeyedEncodingContainer::_encode(&local_d0,&local_d1,puVar8,puVar12,puVar13);
      _swift_bridgeObjectRelease(puVar14);
      pcVar16 = *(code **)(lVar15 + 8);
    }
    else {
      if (uVar2 != 7) {
        local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
        Swift::KeyedEncodingContainer::_encode
                  (0xd000000000000011,0x8000000100dab0d0,&local_d0,puVar8);
        (**(code **)(lVar15 + 8))(puVar23,puVar8);
        _swift_bridgeObjectRelease(0x8000000100dab0d0);
        return;
      }
      uVar9 = param_2;
      FUN_1004d5190(param_2,param_3,param_4,7);
      uVar22 = 0x206e776f6e6b6e55;
      if (param_3 != 0) {
        uVar22 = uVar9;
      }
      lVar20 = -0x12ffff8d908d8d9b;
      if (param_3 != 0) {
        lVar20 = param_3;
      }
      local_d0 = (undefined *)CONCAT71(local_d0._1_7_,1);
      Swift::KeyedEncodingContainer::_encode(uVar22,lVar20,&local_d0,puVar8);
      _swift_bridgeObjectRelease(lVar20);
      puVar12 = &DAT_100fcb888;
      FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
      _swift_initStackObject();
      *(undefined8 *)(puVar12 + 0x18) = 2;
      *(undefined8 *)(puVar12 + 0x10) = 1;
      *(undefined8 *)(puVar12 + 0x20) = 0x726f727265;
      *(undefined1 **)(puVar12 + 0x28) = &DAT_e500000000000000;
      _swift_getErrorValue(param_2,auStack_b0,local_c8);
      SVar24 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      *(String *)(puVar12 + 0x30) = SVar24;
      puVar13 = puVar12;
      FUN_1004a66a4();
      _swift_setDeallocating(puVar12);
      FUN_1000fb4c4(puVar12 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
      local_d1 = 2;
      puVar12 = &DAT_100fcc360;
      local_d0 = puVar13;
      FUN_1000f7830(&DAT_100fcc360,&DAT_100c519e8);
      puVar14 = puVar12;
      FUN_1004d9e40();
      Swift::KeyedEncodingContainer::_encode(&local_d0,&local_d1,puVar8,puVar12,puVar14);
      _swift_bridgeObjectRelease(puVar13);
      pcVar16 = *(code **)(lVar15 + 8);
    }
  }
  else {
    pcVar16 = *(code **)(lVar15 + 8);
  }
  (*pcVar16)(puVar23,puVar8);
  return;
}



/* Address: 0x1004d687c | FUN_1004d687c */

undefined8 FUN_1004d687c(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_1004da084();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x1004d68a0 | FUN_1004d68a0 */

void FUN_1004d68a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long unaff_x21;
  
  FUN_1004da084();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    *(undefined1 *)(param_1 + 3) = param_5;
  }
  return;
}



/* Address: 0x1004d68d0 | FUN_1004d68d0 */

void FUN_1004d68d0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004d5df0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1004d68f0 | thunk_FUN_1004d97c4 */

void thunk_FUN_1004d97c4(void)

{
  FUN_1004d97c4();
  return;
}



/* Address: 0x1004d68f4 | FUN_1004d68f4 */

void FUN_1004d68f4(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1004d97c4(*param_1,param_1[1],param_1[2],*(undefined1 *)(param_1 + 3),*param_2,param_2[1],
                param_2[2],*(undefined1 *)(param_2 + 3));
  return;
}



/* Address: 0x1004d6918 | FUN_1004d6918 */

void FUN_1004d6918(Hasher param_1,Hasher param_2,char *param_3,char *param_4,byte param_5)

{
  __uint64 _Var1;
  Hasher HVar2;
  String SVar3;
  String SVar4;
  undefined1 local_60 [24];
  undefined1 auStack_48 [8];
  
  if (param_5 < 4) {
    if (param_5 < 2) {
      if (param_5 == 0) {
        _Var1 = 0xffffffffffff8044;
      }
      else {
        _Var1 = 0xffffffffffff80a8;
      }
    }
    else if (param_5 == 2) {
      _Var1 = 0xffffffffffff80a7;
    }
    else {
      _Var1 = 0xffffffffffff80a6;
    }
  }
  else {
    if (5 < param_5) {
      if (param_5 == 6) {
        Swift::Hasher::_combine(0xffffffffffff82d6,param_2);
        SVar3.bridgeObject = param_3;
        SVar3.str = param_2.unknown;
        Swift::String::hash(param_1,SVar3);
        FUN_1004d87b0(param_1.unknown,param_4);
        return;
      }
      if (param_5 == 7) {
        Swift::Hasher::_combine(0xffffffffffff82ff,param_2);
        _swift_getErrorValue(param_2.unknown,auStack_48,local_60);
        SVar3 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        Swift::String::hash(param_1,SVar3);
        _swift_bridgeObjectRelease(SVar3.bridgeObject);
        return;
      }
      Swift::Hasher::_combine(0xffffffffffff8300,param_2);
      return;
    }
    if (param_5 != 4) {
      Swift::Hasher::_combine((__uint64)param_2.unknown,(Hasher)param_2.unknown);
      param_2.unknown = param_3;
      goto LAB_1004d6aa4;
    }
    _Var1 = 0xffffffffffff80a5;
  }
  HVar2.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var1,param_2);
  if (param_3 == (char *)0x0) {
    Swift::Hasher::_combine(0,HVar2);
    return;
  }
  Swift::Hasher::_combine(1,HVar2);
  param_4 = param_3;
LAB_1004d6aa4:
  SVar4.bridgeObject = param_4;
  SVar4.str = param_2.unknown;
  Swift::String::hash(param_1,SVar4);
  return;
}



/* Address: 0x1004d6abc | FUN_1004d6abc */

void FUN_1004d6abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_1004d6918(HVar1.unknown,param_1,param_2,param_3,param_4);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004d6b20 | FUN_1004d6b20 */

void FUN_1004d6b20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar3 = *(undefined1 *)(unaff_x20 + 3);
  Swift::Hasher::init(0);
  HVar4.unknown = auStack_78;
  FUN_1004d6918(HVar4.unknown,uVar1,uVar2,uVar5,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004d6b80 | FUN_1004d6b80 */

void FUN_1004d6b80(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004d6918(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1004d6b90 | FUN_1004d6b90 */

void FUN_1004d6b90(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar3 = *(undefined1 *)(unaff_x20 + 3);
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_78;
  FUN_1004d6918(HVar4.unknown,uVar1,uVar2,uVar5,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004d6bec | FUN_1004d6bec */

void FUN_1004d6bec(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x28);
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  puVar3[1] = param_4[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(param_4 + 4);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d6c48);
  (*pcVar2)();
}



/* Address: 0x1004d6c48 | FUN_1004d6c48 */

void FUN_1004d6c48(void)

{
  FUN_1004d6cd4();
  return;
}



/* Address: 0x1004d6c5c | FUN_1004d6c5c */

void FUN_1004d6c5c(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x38);
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  puVar3[1] = param_4[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  uVar4 = param_4[4];
  puVar3[5] = param_4[5];
  puVar3[4] = uVar4;
  puVar3[6] = param_4[6];
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d6cc0);
  (*pcVar2)();
}



/* Address: 0x1004d6cc0 | FUN_1004d6cc0 */

void FUN_1004d6cc0(void)

{
  FUN_1004d6cd4();
  return;
}



/* Address: 0x1004d6cd4 | FUN_1004d6cd4 */

void FUN_1004d6cd4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar3 + 0x40) = *(ulong *)(lVar3 + 0x40) | 1L << (param_1 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  lVar3 = *(long *)(param_5 + 0x38);
  FUN_1000f7830(param_6,param_7);
  (**(code **)(*(long *)(param_6 + -8) + 0x20))
            (lVar3 + *(long *)(*(long *)(param_6 + -8) + 0x48) * param_1,param_4,param_6);
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d6d68);
  (*pcVar2)();
}



/* Address: 0x1004d6d68 | FUN_1004d6d68 */

void FUN_1004d6d68(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_7 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x30) + param_1 * 0x18);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  *(undefined1 *)(puVar3 + 2) = param_4;
  puVar3 = (undefined8 *)(*(long *)(param_7 + 0x38) + param_1 * 0x10);
  *puVar3 = param_5;
  puVar3[1] = param_6;
  if (!SCARRY8(*(long *)(param_7 + 0x10),1)) {
    *(long *)(param_7 + 0x10) = *(long *)(param_7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d6dbc);
  (*pcVar2)();
}



/* Address: 0x1004d6dbc | FUN_1004d6dbc */

void FUN_1004d6dbc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  lVar1 = param_6 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_6 + 0x30) + param_1 * 0x18);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  *(undefined1 *)(puVar3 + 2) = param_4;
  *(undefined8 *)(*(long *)(param_6 + 0x38) + param_1 * 8) = param_5;
  if (!SCARRY8(*(long *)(param_6 + 0x10),1)) {
    *(long *)(param_6 + 0x10) = *(long *)(param_6 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d6e0c);
  (*pcVar2)();
}



/* Address: 0x1004d6e0c | FUN_1004d6e0c */

void FUN_1004d6e0c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004d6e98();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1004d6e28 | FUN_1004d6e28 */

void FUN_1004d6e28(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004d70d0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1004d6e44 | FUN_1004d6e44 */

void FUN_1004d6e44(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004d71e8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1004d6e60 | FUN_1004d6e60 */

void FUN_1004d6e60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004d7318();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1004d6e7c | FUN_1004d6e7c */

void FUN_1004d6e7c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004d7448();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1004d6e98 | FUN_1004d6e98 */

undefined * FUN_1004d6e98(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d6fa0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fcb488;
    FUN_1000f7830(&DAT_100fcb488,&DAT_100c504c0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1004d6fa0 | FUN_1004d6fa0 */

undefined * FUN_1004d6fa0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d70d0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fcb6e8;
    FUN_1000f7830(&DAT_100fcb6e8,&DAT_100c51f00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fcc1b0;
    FUN_1000f7830(&DAT_100fcc1b0,&DAT_100c51880);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1004d70d0 | FUN_1004d70d0 */

undefined * FUN_1004d70d0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d71e8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fcc480;
    FUN_1000f7830(&DAT_100fcc480,&DAT_100c51ee8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100edd000);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1004d71e8 | FUN_1004d71e8 */

undefined * FUN_1004d71e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d7318);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fcc488;
    FUN_1000f7830(&DAT_100fcc488,&DAT_100c51ef0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1004d7318 | FUN_1004d7318 */

undefined * FUN_1004d7318(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d7448);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fcc450;
    FUN_1000f7830(&DAT_100fcc450,&DAT_100c51ec0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fcc458;
    FUN_1000f7830(&DAT_100fcc458,&DAT_100c51ec8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1004d7448 | FUN_1004d7448 */

undefined * FUN_1004d7448(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d7564);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fcb3f0;
    FUN_1000f7830(&DAT_100fcb3f0,&DAT_100c50240);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100edc310);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1004d7564 | FUN_1004d7564 */

void FUN_1004d7564(Hasher param_1,Hasher param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  void *pvVar3;
  char *pcVar4;
  void *pvVar5;
  char cVar6;
  char *pcVar7;
  String *pSVar8;
  __uint64 _Var9;
  Hasher HVar10;
  __uint64 _Var11;
  long lVar12;
  String SVar13;
  String SVar14;
  
  _Var9 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var9,param_2);
  if (_Var9 != 0) {
    _Var11 = 0;
    do {
      pSVar8 = (String *)(param_2.unknown + _Var11 * 0x30 + 0x20);
      pvVar2 = pSVar8[1].bridgeObject;
      pcVar4 = pSVar8[2].str;
      cVar6 = *(char *)&pSVar8[2].bridgeObject;
      pvVar3 = pSVar8->bridgeObject;
      pcVar7 = pSVar8[1].str;
      SVar13 = pSVar8[1];
      HVar10.unknown = pSVar8->str;
      SVar14 = *pSVar8;
      _swift_bridgeObjectRetain(pcVar4);
      _swift_bridgeObjectRetain(pvVar3);
      _swift_bridgeObjectRetain(pvVar2);
      Swift::String::hash(param_1,SVar14);
      if (pvVar2 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar10);
        if (pcVar4 != (char *)0x0) goto LAB_1004d7680;
LAB_1004d76e4:
        Swift::Hasher::_combine(0,HVar10);
        if (cVar6 == '\x02') goto LAB_1004d76f4;
LAB_1004d75b0:
        Swift::Hasher::_combine(1,HVar10);
        pcVar7 = (char *)0x6b726164;
        if (cVar6 != '\x01') {
          pcVar7 = (char *)0x746867696c;
        }
        puVar1 = &DAT_e400000000000000;
        if (cVar6 != '\x01') {
          puVar1 = &DAT_e500000000000000;
        }
        SVar13.bridgeObject = puVar1;
        SVar13.str = pcVar7;
        Swift::String::hash(param_1,SVar13);
        _swift_bridgeObjectRelease(puVar1);
      }
      else {
        Swift::Hasher::_combine(1,HVar10);
        Swift::String::hash(param_1,SVar13);
        HVar10.unknown = pcVar7;
        if (pcVar4 == (char *)0x0) goto LAB_1004d76e4;
LAB_1004d7680:
        Swift::Hasher::_combine(1,HVar10);
        Swift::Hasher::_combine(*(__uint64 *)(pcVar4 + 0x10),HVar10);
        lVar12 = *(long *)(pcVar4 + 0x10);
        if (lVar12 != 0) {
          pcVar7 = pcVar4 + 0x28;
          do {
            HVar10.unknown = *(undefined **)(pcVar7 + -8);
            pvVar5 = *(void **)pcVar7;
            _swift_bridgeObjectRetain(pvVar5);
            SVar14.bridgeObject = pvVar5;
            SVar14.str = HVar10.unknown;
            Swift::String::hash(param_1,SVar14);
            _swift_bridgeObjectRelease(pvVar5);
            pcVar7 = pcVar7 + 0x10;
            lVar12 = lVar12 + -1;
          } while (lVar12 != 0);
        }
        if (cVar6 != '\x02') goto LAB_1004d75b0;
LAB_1004d76f4:
        Swift::Hasher::_combine(0,HVar10);
      }
      _Var11 = _Var11 + 1;
      _swift_bridgeObjectRelease(pcVar4);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_bridgeObjectRelease(pvVar3);
    } while (_Var11 != _Var9);
  }
  return;
}



/* Address: 0x1004d7720 | FUN_1004d7720 */

void FUN_1004d7720(Hasher param_1,Hasher param_2)

{
  long lVar1;
  long lVar2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  Hasher HVar6;
  __uint64 _Var7;
  long lVar8;
  long *plVar9;
  
  _Var7 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var7,param_2);
  if (_Var7 != 0) {
    plVar9 = (long *)(param_2.unknown + 0x40);
    do {
      HVar5.unknown = ((String *)(plVar9 + -4))->str;
      lVar1 = plVar9[-3];
      SVar3 = *(String *)(plVar9 + -4);
      HVar6.unknown = ((String *)(plVar9 + -2))->str;
      lVar2 = plVar9[-1];
      SVar4 = *(String *)(plVar9 + -2);
      lVar8 = *plVar9;
      _swift_bridgeObjectRetain(lVar8);
      _swift_bridgeObjectRetain(lVar1);
      _swift_bridgeObjectRetain(lVar2);
      Swift::String::hash(param_1,SVar3);
      if (lVar2 == 0) {
        Swift::Hasher::_combine(0,HVar5);
        HVar6.unknown = HVar5.unknown;
        if (lVar8 == 0) goto LAB_1004d77f4;
LAB_1004d7758:
        Swift::Hasher::_combine(1,HVar5);
        FUN_1004df778(param_1.unknown,lVar8);
        _swift_bridgeObjectRelease(lVar8);
      }
      else {
        Swift::Hasher::_combine(1,HVar5);
        Swift::String::hash(param_1,SVar4);
        HVar5.unknown = HVar6.unknown;
        if (lVar8 != 0) goto LAB_1004d7758;
LAB_1004d77f4:
        Swift::Hasher::_combine(0,HVar6);
      }
      plVar9 = plVar9 + 5;
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease(lVar1);
      _Var7 = _Var7 - 1;
    } while (_Var7 != 0);
  }
  return;
}



/* Address: 0x1004d7818 | FUN_1004d7818 */

void FUN_1004d7818(Hasher param_1,Hasher param_2)

{
  void *pvVar1;
  String SVar2;
  String SVar3;
  int iVar4;
  String *pSVar5;
  __uint64 _Var6;
  Hasher HVar7;
  Hasher HVar8;
  char *pcVar9;
  char *pcVar10;
  Hasher HVar11;
  Hasher HVar13;
  char *pcVar14;
  undefined1 *puVar15;
  __uint64 _Var16;
  void *pvVar17;
  undefined8 *puVar18;
  char *pcVar19;
  void *pvVar20;
  char *pcVar21;
  void *pvVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String local_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined8 local_150;
  char *pcStack_148;
  void *pvStack_140;
  undefined8 uStack_138;
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
  undefined1 uStack_e0;
  undefined7 local_df;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  void *local_c0;
  char *pcStack_b8;
  void *pvStack_b0;
  char *pcStack_a8;
  void *local_a0;
  char *local_98;
  void *pvStack_90;
  char *pcStack_88;
  void *pvStack_80;
  char *local_78;
  void *pvVar12;
  
  _Var16 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var16,param_2);
  if (_Var16 != 0) {
    puVar18 = (undefined8 *)(param_2.unknown + 0x20);
    do {
      uStack_e8 = puVar18[0xd];
      local_f0 = puVar18[0xc];
      uStack_d8 = (undefined1)puVar18[0xf];
      uStack_d7 = (undefined7)((ulong)puVar18[0xf] >> 8);
      uStack_e0 = (undefined1)puVar18[0xe];
      local_df = (undefined7)((ulong)puVar18[0xe] >> 8);
      uStack_d0 = *(undefined1 *)(puVar18 + 0x10);
      pcStack_148 = (char *)puVar18[1];
      local_150 = *puVar18;
      uStack_138 = puVar18[3];
      pvStack_140 = (void *)puVar18[2];
      uStack_128 = puVar18[5];
      local_130 = puVar18[4];
      uStack_118 = puVar18[7];
      uStack_120 = puVar18[6];
      uStack_108 = puVar18[9];
      local_110 = puVar18[8];
      uStack_f8 = puVar18[0xb];
      uStack_100 = puVar18[10];
      HVar7.unknown = (char *)0x6e61747369737361;
      if ((char)local_150 != '\x01') {
        HVar7.unknown = (char *)0x72657375;
      }
      puVar15 = (undefined1 *)0xe900000000000074;
      if ((char)local_150 != '\x01') {
        puVar15 = &DAT_e400000000000000;
      }
      FUN_1004dbaa8(&local_150,&local_1e0);
      SVar24.bridgeObject = puVar15;
      SVar24.str = HVar7.unknown;
      Swift::String::hash(param_1,SVar24);
      _swift_bridgeObjectRelease(puVar15);
      uStack_198 = uStack_100;
      local_1a0 = uStack_108;
      uStack_188 = local_f0;
      uStack_190 = uStack_f8;
      uStack_178 = uStack_e0;
      local_180 = uStack_e8;
      uStack_16f = CONCAT17(uStack_d0,uStack_d7);
      uStack_177 = local_df;
      uStack_170 = uStack_d8;
      local_1e0.bridgeObject = pvStack_140;
      local_1e0.str = pcStack_148;
      uStack_1c8 = local_130;
      uStack_1d0 = uStack_138;
      uStack_1b8 = uStack_120;
      local_1c0 = uStack_128;
      uStack_1a8 = local_110;
      uStack_1b0 = uStack_118;
      iVar4 = (int)&pcStack_148;
      FUN_1004dbae4();
      if (iVar4 < 2) {
        if (iVar4 != 0) {
          pSVar5 = &local_1e0;
          FUN_100004520();
          pcVar10 = pSVar5->str;
          pvVar17 = pSVar5->bridgeObject;
          pcVar9 = pSVar5[1].str;
          pvVar12 = pSVar5[1].bridgeObject;
          _Var6 = 1;
          goto LAB_1004d7a0c;
        }
        pSVar5 = &local_1e0;
        FUN_100004520();
        pcVar9 = pSVar5->str;
        pvVar12 = pSVar5->bridgeObject;
        Swift::Hasher::_combine(0,HVar7);
LAB_1004d788c:
        SVar23.bridgeObject = pvVar12;
        SVar23.str = pcVar9;
        Swift::String::hash(param_1,SVar23);
      }
      else {
        if (iVar4 == 2) {
          pSVar5 = &local_1e0;
          FUN_100004520();
          pcVar10 = pSVar5->str;
          pvVar17 = pSVar5->bridgeObject;
          pcVar9 = pSVar5[1].str;
          pvVar12 = pSVar5[1].bridgeObject;
          _Var6 = 2;
LAB_1004d7a0c:
          Swift::Hasher::_combine(_Var6,HVar7);
          SVar25.bridgeObject = pvVar17;
          SVar25.str = pcVar10;
          Swift::String::hash(param_1,SVar25);
          goto LAB_1004d788c;
        }
        if (iVar4 == 3) {
          pSVar5 = &local_1e0;
          FUN_100004520();
          HVar8.unknown = pSVar5->str;
          SVar24 = *pSVar5;
          pcVar9 = pSVar5[1].str;
          pvVar12 = pSVar5[1].bridgeObject;
          SVar25 = pSVar5[1];
          pcVar10 = pSVar5[2].str;
          pvVar17 = pSVar5[2].bridgeObject;
          SVar23 = pSVar5[2];
          HVar11.unknown = pSVar5[3].str;
          pvVar1 = pSVar5[3].bridgeObject;
          SVar2 = pSVar5[3];
          HVar13.unknown = pSVar5[4].str;
          Swift::Hasher::_combine(3,HVar7);
          Swift::String::hash(param_1,SVar24);
          if (pvVar12 == (void *)0x0) {
            Swift::Hasher::_combine(0,HVar8);
          }
          else {
            Swift::Hasher::_combine(1,HVar8);
            Swift::String::hash(param_1,SVar25);
            HVar8.unknown = pcVar9;
          }
          if (pvVar17 == (void *)0x0) {
            Swift::Hasher::_combine(0,HVar8);
            if (pvVar1 == (void *)0x0) goto LAB_1004d7ba4;
LAB_1004d7afc:
            Swift::Hasher::_combine(1,HVar8);
            Swift::String::hash(param_1,SVar2);
            if (HVar13.unknown != (char *)0x0) goto LAB_1004d7b1c;
LAB_1004d7bb4:
            HVar13.unknown = HVar11.unknown;
            Swift::Hasher::_combine(0,HVar13);
          }
          else {
            Swift::Hasher::_combine(1,HVar8);
            Swift::String::hash(param_1,SVar23);
            HVar8.unknown = pcVar10;
            if (pvVar1 != (void *)0x0) goto LAB_1004d7afc;
LAB_1004d7ba4:
            HVar11.unknown = HVar8.unknown;
            Swift::Hasher::_combine(0,HVar11);
            if (HVar13.unknown == (char *)0x0) goto LAB_1004d7bb4;
LAB_1004d7b1c:
            Swift::Hasher::_combine(1,HVar11);
            FUN_1004df778(param_1.unknown);
          }
          pcStack_b8 = pSVar5[5].str;
          local_c0 = pSVar5[4].bridgeObject;
          pcStack_a8 = pSVar5[6].str;
          pvStack_b0 = pSVar5[5].bridgeObject;
          local_a0 = pSVar5[6].bridgeObject;
          pcVar9 = pSVar5[7].str;
          FUN_10055fb80(param_1.unknown);
          if (pcVar9 == (char *)0x0) {
            Swift::Hasher::_combine(0,HVar13);
          }
          else {
            Swift::Hasher::_combine(1,HVar13);
            FUN_1004df778(param_1.unknown,pcVar9);
          }
        }
        else {
          pSVar5 = &local_1e0;
          FUN_100004520();
          SVar24 = *pSVar5;
          HVar8.unknown = pSVar5[1].str;
          SVar25 = pSVar5[1];
          pcVar9 = pSVar5[2].str;
          pvVar12 = pSVar5[2].bridgeObject;
          SVar23 = pSVar5[2];
          pcVar10 = pSVar5[3].str;
          pvVar17 = pSVar5[3].bridgeObject;
          SVar2 = pSVar5[3];
          pvVar1 = pSVar5[4].bridgeObject;
          SVar3 = pSVar5[4];
          pvVar20 = pSVar5[5].bridgeObject;
          pcVar19 = pSVar5[5].str;
          pvVar22 = pSVar5[6].bridgeObject;
          pcVar21 = pSVar5[6].str;
          pcVar14 = pSVar5[7].str;
          Swift::Hasher::_combine(4,HVar7);
          Swift::String::hash(param_1,SVar24);
          Swift::String::hash(param_1,SVar25);
          if (pvVar12 == (void *)0x0) {
            Swift::Hasher::_combine(0,HVar8);
          }
          else {
            Swift::Hasher::_combine(1,HVar8);
            Swift::String::hash(param_1,SVar23);
            HVar8.unknown = pcVar9;
          }
          if (pvVar17 == (void *)0x0) {
            Swift::Hasher::_combine(0,HVar8);
            if (pvVar1 == (void *)0x0) goto LAB_1004d7c10;
LAB_1004d7b74:
            Swift::Hasher::_combine(1,HVar8);
            Swift::String::hash(param_1,SVar3);
          }
          else {
            Swift::Hasher::_combine(1,HVar8);
            Swift::String::hash(param_1,SVar2);
            HVar8.unknown = pcVar10;
            if (pvVar1 != (void *)0x0) goto LAB_1004d7b74;
LAB_1004d7c10:
            Swift::Hasher::_combine(0,HVar8);
          }
          local_98 = pcVar19;
          pvStack_90 = pvVar20;
          pcStack_88 = pcVar21;
          pvStack_80 = pvVar22;
          local_78 = pcVar14;
          FUN_10055fb80(param_1.unknown);
        }
      }
      FUN_1004dbaec(&local_150);
      puVar18 = puVar18 + 0x11;
      _Var16 = _Var16 - 1;
    } while (_Var16 != 0);
  }
  return;
}



/* Address: 0x1004d7c74 | FUN_1004d7c74 */

void FUN_1004d7c74(Hasher param_1,Hasher param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  char cVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  byte bVar20;
  int iVar21;
  String *pSVar22;
  undefined8 *puVar23;
  undefined *puVar24;
  Hasher HVar25;
  Hasher HVar26;
  char *pcVar27;
  char *pcVar28;
  void *pvVar29;
  undefined8 uVar30;
  String *pSVar31;
  __uint64 _Var32;
  char *pcVar33;
  Hasher HVar34;
  undefined8 uVar35;
  Hasher HVar36;
  __uint64 _Var37;
  long lVar38;
  undefined1 *puVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  void *pvVar43;
  long lVar44;
  long lVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  undefined1 auStack_268 [120];
  undefined8 local_1f0;
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
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 uStack_188;
  undefined7 local_187;
  undefined1 uStack_180;
  undefined8 uStack_17f;
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
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  String local_f0;
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
  char local_78;
  
  _Var37 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar36.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var37,param_2);
  if (_Var37 != 0) {
    _Var32 = 0;
    do {
      pSVar31 = (String *)(param_2.unknown + _Var32 * 0x38 + 0x20);
      pcVar1 = pSVar31->str;
      puVar24 = pSVar31->bridgeObject;
      SVar19 = *pSVar31;
      SVar18 = *pSVar31;
      SVar48 = *pSVar31;
      SVar47 = *pSVar31;
      SVar46 = *pSVar31;
      pSVar22 = pSVar31 + 1;
      pcVar2 = pSVar22->str;
      puVar8 = pSVar31[1].bridgeObject;
      SVar17 = *pSVar22;
      SVar16 = *pSVar22;
      SVar49 = *pSVar22;
      pcVar3 = pSVar31[2].str;
      pvVar29 = pSVar31[2].bridgeObject;
      bVar20 = *(byte *)&pSVar31[3].str;
      if (bVar20 < 2) {
        if (bVar20 == 0) {
          Swift::Hasher::_combine(0,HVar36);
          _swift_bridgeObjectRetain(puVar24);
          Swift::String::hash(param_1,SVar47);
          uVar30 = 0;
        }
        else {
          Swift::Hasher::_combine(1,HVar36);
          _swift_bridgeObjectRetain(puVar24);
          _swift_bridgeObjectRetain(puVar8);
          Swift::String::hash(param_1,SVar48);
          Swift::String::hash(param_1,SVar16);
          uVar30 = 1;
        }
      }
      else if (bVar20 == 2) {
        Swift::Hasher::_combine(2,HVar36);
        _swift_bridgeObjectRetain(puVar24);
        _swift_bridgeObjectRetain(puVar8);
        Swift::String::hash(param_1,SVar46);
        Swift::String::hash(param_1,SVar49);
        uVar30 = 2;
      }
      else if (bVar20 == 3) {
        Swift::Hasher::_combine(3,HVar36);
        _swift_bridgeObjectRetain(pvVar29);
        _swift_bridgeObjectRetain(puVar24);
        _swift_bridgeObjectRetain(puVar8);
        _swift_bridgeObjectRetain(pcVar3);
        Swift::String::hash(param_1,SVar18);
        Swift::String::hash(param_1,SVar17);
        HVar36.unknown = pcVar3;
        FUN_1004df778(param_1.unknown);
        if (pvVar29 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar36);
          pvVar29 = (void *)0x0;
          uVar30 = 3;
        }
        else {
          Swift::Hasher::_combine(1,HVar36);
          FUN_1004df778(param_1.unknown,pvVar29);
          uVar30 = 3;
        }
      }
      else {
        Swift::Hasher::_combine(4,HVar36);
        _swift_bridgeObjectRetain(pvVar29);
        _swift_bridgeObjectRetain(puVar24);
        _swift_bridgeObjectRetain(pcVar2);
        _swift_bridgeObjectRetain(puVar8);
        HVar36.unknown = pcVar1;
        Swift::String::hash(param_1,SVar19);
        Swift::Hasher::_combine(*(__uint64 *)(pcVar2 + 0x10),HVar36);
        lVar38 = *(long *)(pcVar2 + 0x10);
        if (lVar38 != 0) {
          lVar44 = 0;
          HVar25.unknown = HVar36.unknown;
          do {
            pcVar33 = pcVar2 + lVar44 * 0x80 + 0x20;
            uStack_168 = *(undefined8 *)(pcVar33 + 8);
            local_170 = *(undefined8 *)pcVar33;
            uStack_158 = *(undefined8 *)(pcVar33 + 0x18);
            uStack_160 = *(undefined8 *)(pcVar33 + 0x10);
            uStack_148 = *(undefined8 *)(pcVar33 + 0x28);
            local_150 = *(undefined8 *)(pcVar33 + 0x20);
            uStack_138 = *(undefined8 *)(pcVar33 + 0x38);
            uStack_140 = *(undefined8 *)(pcVar33 + 0x30);
            uStack_128 = *(undefined8 *)(pcVar33 + 0x48);
            local_130 = *(undefined8 *)(pcVar33 + 0x40);
            uStack_118 = *(undefined8 *)(pcVar33 + 0x58);
            local_120 = *(undefined8 *)(pcVar33 + 0x50);
            uStack_110 = *(undefined8 *)(pcVar33 + 0x60);
            uStack_ff = *(undefined8 *)(pcVar33 + 0x71);
            uStack_100 = (undefined1)((ulong)*(undefined8 *)(pcVar33 + 0x69) >> 0x38);
            uStack_108 = (undefined1)*(undefined8 *)(pcVar33 + 0x68);
            local_107 = (undefined7)((ulong)*(undefined8 *)(pcVar33 + 0x68) >> 8);
            local_f0.bridgeObject = *(void **)(pcVar33 + 8);
            local_f0.str = *(char **)pcVar33;
            uStack_d8 = *(undefined8 *)(pcVar33 + 0x18);
            local_e0 = *(undefined8 *)(pcVar33 + 0x10);
            uStack_c8 = *(undefined8 *)(pcVar33 + 0x28);
            uStack_d0 = *(undefined8 *)(pcVar33 + 0x20);
            uStack_b8 = *(undefined8 *)(pcVar33 + 0x38);
            local_c0 = *(undefined8 *)(pcVar33 + 0x30);
            uStack_a8 = *(undefined8 *)(pcVar33 + 0x48);
            uStack_b0 = *(undefined8 *)(pcVar33 + 0x40);
            uStack_98 = *(undefined8 *)(pcVar33 + 0x58);
            local_a0 = *(undefined8 *)(pcVar33 + 0x50);
            uStack_88 = *(undefined8 *)(pcVar33 + 0x68);
            uStack_90 = *(undefined8 *)(pcVar33 + 0x60);
            local_80 = *(undefined8 *)(pcVar33 + 0x70);
            local_78 = pcVar33[0x78];
            iVar21 = (int)&local_170;
            FUN_1004dbae4();
            if (iVar21 < 2) {
              if (iVar21 != 0) {
                pSVar22 = &local_f0;
                FUN_100004520();
                pcVar33 = pSVar22->str;
                pvVar43 = pSVar22->bridgeObject;
                HVar36.unknown = pSVar22[1].str;
                pcVar27 = pSVar22[1].bridgeObject;
                Swift::Hasher::_combine(1,HVar25);
                uStack_198 = uStack_118;
                local_1a0 = local_120;
                uStack_188 = uStack_108;
                uStack_190 = uStack_110;
                uStack_17f = uStack_ff;
                local_187 = local_107;
                uStack_180 = uStack_100;
                uStack_1e8 = uStack_168;
                local_1f0 = local_170;
                uStack_1d8 = uStack_158;
                local_1e0 = uStack_160;
                uStack_1c8 = uStack_148;
                uStack_1d0 = local_150;
                uStack_1b8 = uStack_138;
                local_1c0 = uStack_140;
                uStack_1a8 = uStack_128;
                uStack_1b0 = local_130;
                puVar23 = &local_1f0;
                FUN_100004520();
                goto LAB_1004d8234;
              }
              pSVar22 = &local_f0;
              FUN_100004520();
              HVar36.unknown = pSVar22->str;
              pcVar27 = pSVar22->bridgeObject;
              Swift::Hasher::_combine(0,HVar25);
              uStack_198 = uStack_118;
              local_1a0 = local_120;
              uStack_188 = uStack_108;
              uStack_190 = uStack_110;
              uStack_17f = uStack_ff;
              local_187 = local_107;
              uStack_180 = uStack_100;
              uStack_1e8 = uStack_168;
              local_1f0 = local_170;
              uStack_1d8 = uStack_158;
              local_1e0 = uStack_160;
              uStack_1c8 = uStack_148;
              uStack_1d0 = local_150;
              uStack_1b8 = uStack_138;
              local_1c0 = uStack_140;
              uStack_1a8 = uStack_128;
              uStack_1b0 = local_130;
              puVar23 = &local_1f0;
              FUN_100004520();
              _swift_bridgeObjectRetain(puVar23[1]);
LAB_1004d8268:
              SVar47.bridgeObject = pcVar27;
              SVar47.str = HVar36.unknown;
              Swift::String::hash(param_1,SVar47);
LAB_1004d826c:
              FUN_1004dbca0(&local_170);
            }
            else {
              if (iVar21 == 2) {
                pSVar22 = &local_f0;
                FUN_100004520();
                pcVar33 = pSVar22->str;
                pvVar43 = pSVar22->bridgeObject;
                HVar36.unknown = pSVar22[1].str;
                pcVar27 = pSVar22[1].bridgeObject;
                Swift::Hasher::_combine(2,HVar25);
                uStack_198 = uStack_118;
                local_1a0 = local_120;
                uStack_188 = uStack_108;
                uStack_190 = uStack_110;
                uStack_17f = uStack_ff;
                local_187 = local_107;
                uStack_180 = uStack_100;
                uStack_1e8 = uStack_168;
                local_1f0 = local_170;
                uStack_1d8 = uStack_158;
                local_1e0 = uStack_160;
                uStack_1c8 = uStack_148;
                uStack_1d0 = local_150;
                uStack_1b8 = uStack_138;
                local_1c0 = uStack_140;
                uStack_1a8 = uStack_128;
                uStack_1b0 = local_130;
                puVar23 = &local_1f0;
                FUN_100004520();
LAB_1004d8234:
                uVar30 = puVar23[3];
                _swift_bridgeObjectRetain(puVar23[1]);
                _swift_bridgeObjectRetain(uVar30);
                SVar46.bridgeObject = pvVar43;
                SVar46.str = pcVar33;
                Swift::String::hash(param_1,SVar46);
                goto LAB_1004d8268;
              }
              if (iVar21 != 3) {
                pSVar22 = &local_f0;
                FUN_100004520();
                SVar49 = *pSVar22;
                HVar26.unknown = pSVar22[1].str;
                SVar47 = pSVar22[1];
                pcVar33 = pSVar22[2].str;
                pvVar43 = pSVar22[2].bridgeObject;
                SVar46 = pSVar22[2];
                pcVar28 = pSVar22[3].str;
                pvVar9 = pSVar22[3].bridgeObject;
                SVar48 = pSVar22[3];
                HVar36.unknown = pSVar22[4].str;
                pvVar10 = pSVar22[4].bridgeObject;
                SVar16 = pSVar22[4];
                pcVar4 = pSVar22[5].str;
                pvVar11 = pSVar22[5].bridgeObject;
                cVar15 = *(char *)&pSVar22[6].str;
                pcVar5 = pSVar22[6].bridgeObject;
                pcVar27 = pSVar22[7].str;
                uStack_1b8 = uStack_138;
                local_1c0 = uStack_140;
                uStack_1a8 = uStack_128;
                uStack_1b0 = local_130;
                uStack_1d8 = uStack_158;
                local_1e0 = uStack_160;
                uStack_1c8 = uStack_148;
                uStack_1d0 = local_150;
                uStack_198 = uStack_118;
                local_1a0 = local_120;
                uStack_188 = uStack_108;
                uStack_190 = uStack_110;
                uStack_17f = uStack_ff;
                local_187 = local_107;
                uStack_180 = uStack_100;
                uStack_1e8 = uStack_168;
                local_1f0 = local_170;
                puVar23 = &local_1f0;
                FUN_100004520();
                uVar42 = puVar23[1];
                uVar40 = puVar23[3];
                uVar35 = puVar23[5];
                uVar41 = puVar23[7];
                uVar30 = puVar23[9];
                uVar12 = puVar23[10];
                uVar6 = puVar23[0xb];
                uVar13 = puVar23[0xc];
                uVar7 = puVar23[0xd];
                uVar14 = puVar23[0xe];
                Swift::Hasher::_combine(4,HVar25);
                _swift_bridgeObjectRetain(uVar30);
                _swift_bridgeObjectRetain(uVar42);
                _swift_bridgeObjectRetain(uVar40);
                _swift_bridgeObjectRetain(uVar35);
                _swift_bridgeObjectRetain(uVar41);
                FUN_1004dbc6c(uVar12,uVar6,uVar13,uVar7,uVar14);
                Swift::String::hash(param_1,SVar49);
                Swift::String::hash(param_1,SVar47);
                if (pvVar43 == (void *)0x0) {
                  Swift::Hasher::_combine(0,HVar26);
                }
                else {
                  Swift::Hasher::_combine(1,HVar26);
                  Swift::String::hash(param_1,SVar46);
                  HVar26.unknown = pcVar33;
                }
                if (pvVar9 == (void *)0x0) {
                  Swift::Hasher::_combine(0,HVar26);
                  if (pvVar10 == (void *)0x0) goto LAB_1004d8434;
LAB_1004d833c:
                  Swift::Hasher::_combine(1,HVar26);
                  Swift::String::hash(param_1,SVar16);
                  if (pcVar4 != (char *)0x1) goto LAB_1004d8448;
LAB_1004d7ec8:
                  Swift::Hasher::_combine(0,HVar36);
                  FUN_1004dbca0(&local_170);
                  goto LAB_1004d7ee8;
                }
                Swift::Hasher::_combine(1,HVar26);
                Swift::String::hash(param_1,SVar48);
                HVar26.unknown = pcVar28;
                if (pvVar10 != (void *)0x0) goto LAB_1004d833c;
LAB_1004d8434:
                HVar36.unknown = HVar26.unknown;
                Swift::Hasher::_combine(0,HVar36);
                if (pcVar4 == (char *)0x1) goto LAB_1004d7ec8;
LAB_1004d8448:
                Swift::Hasher::_combine(1,HVar36);
                if (pcVar4 == (char *)0x0) {
                  Swift::Hasher::_combine(0,HVar36);
                }
                else {
                  Swift::Hasher::_combine(1,HVar36);
                  Swift::Hasher::_combine(*(__uint64 *)(pcVar4 + 0x10),HVar36);
                  lVar45 = *(long *)(pcVar4 + 0x10);
                  if (lVar45 != 0) {
                    pcVar33 = pcVar4 + 0x20;
                    do {
                      puVar39 = (undefined1 *)0xe900000000000074;
                      HVar36.unknown = (char *)0x6e61747369737361;
                      if (*pcVar33 != '\x01') {
                        puVar39 = &DAT_e400000000000000;
                        HVar36.unknown = (char *)0x72657375;
                      }
                      SVar49.bridgeObject = puVar39;
                      SVar49.str = HVar36.unknown;
                      Swift::String::hash(param_1,SVar49);
                      _swift_bridgeObjectRelease(puVar39);
                      lVar45 = lVar45 + -1;
                      pcVar33 = pcVar33 + 1;
                    } while (lVar45 != 0);
                  }
                }
                if (cVar15 == '\x01') {
                  Swift::Hasher::_combine(0,HVar36);
                }
                else {
                  Swift::Hasher::_combine(1,HVar36);
                  pvVar43 = (void *)0x0;
                  if (((ulong)pvVar11 & 0x7fffffffffffffff) != 0) {
                    pvVar43 = pvVar11;
                  }
                  Swift::Hasher::_combine((__uint64)pvVar43,HVar36);
                }
                if (pcVar27 != (char *)0x0) {
                  Swift::Hasher::_combine(1,HVar36);
                  HVar36.unknown = pcVar5;
                  goto LAB_1004d8268;
                }
                Swift::Hasher::_combine(0,HVar36);
                goto LAB_1004d826c;
              }
              pSVar22 = &local_f0;
              FUN_100004520();
              uStack_198 = uStack_118;
              local_1a0 = local_120;
              uStack_188 = uStack_108;
              uStack_190 = uStack_110;
              uStack_17f = uStack_ff;
              local_187 = local_107;
              uStack_180 = uStack_100;
              uStack_1e8 = uStack_168;
              local_1f0 = local_170;
              uStack_1d8 = uStack_158;
              local_1e0 = uStack_160;
              uStack_1c8 = uStack_148;
              uStack_1d0 = local_150;
              uStack_1b8 = uStack_138;
              local_1c0 = uStack_140;
              uStack_1a8 = uStack_128;
              uStack_1b0 = local_130;
              puVar23 = &local_1f0;
              FUN_100004520(puVar23);
              HVar36.unknown = pSVar22->str;
              SVar46 = *pSVar22;
              pcVar33 = pSVar22[1].str;
              pvVar43 = pSVar22[1].bridgeObject;
              SVar49 = pSVar22[1];
              pcVar27 = pSVar22[2].str;
              pvVar9 = pSVar22[2].bridgeObject;
              SVar47 = pSVar22[2];
              HVar26.unknown = pSVar22[3].str;
              pvVar10 = pSVar22[3].bridgeObject;
              SVar48 = pSVar22[3];
              HVar34.unknown = pSVar22[4].str;
              Swift::Hasher::_combine(3,HVar25);
              FUN_1004dbcd4(puVar23,auStack_268);
              Swift::String::hash(param_1,SVar46);
              if (pvVar43 == (void *)0x0) {
                Swift::Hasher::_combine(0,HVar36);
              }
              else {
                Swift::Hasher::_combine(1,HVar36);
                Swift::String::hash(param_1,SVar49);
                HVar36.unknown = pcVar33;
              }
              if (pvVar9 == (void *)0x0) {
                Swift::Hasher::_combine(0,HVar36);
                if (pvVar10 == (void *)0x0) goto LAB_1004d8374;
LAB_1004d82b0:
                Swift::Hasher::_combine(1,HVar36);
                Swift::String::hash(param_1,SVar48);
                if (HVar34.unknown != (char *)0x0) goto LAB_1004d82cc;
LAB_1004d8380:
                HVar34.unknown = HVar26.unknown;
                Swift::Hasher::_combine(0,HVar34);
              }
              else {
                Swift::Hasher::_combine(1,HVar36);
                Swift::String::hash(param_1,SVar47);
                HVar36.unknown = pcVar27;
                if (pvVar10 != (void *)0x0) goto LAB_1004d82b0;
LAB_1004d8374:
                HVar26.unknown = HVar36.unknown;
                Swift::Hasher::_combine(0,HVar26);
                if (HVar34.unknown == (char *)0x0) goto LAB_1004d8380;
LAB_1004d82cc:
                Swift::Hasher::_combine(1,HVar26);
                FUN_1004df778(param_1.unknown);
              }
              puVar39 = pSVar22[4].bridgeObject;
              if (puVar39 == &DAT_00000001) {
LAB_1004d8520:
                HVar25.unknown = HVar34.unknown;
                Swift::Hasher::_combine(0,HVar25);
                HVar36.unknown = pSVar22[7].str;
                if (HVar36.unknown == (char *)0x0) goto LAB_1004d8514;
LAB_1004d8530:
                Swift::Hasher::_combine(1,HVar25);
                FUN_1004df778(param_1.unknown);
              }
              else {
                pcVar33 = pSVar22[5].str;
                HVar25.unknown = pSVar22[6].str;
                pvVar43 = pSVar22[6].bridgeObject;
                SVar46 = pSVar22[6];
                cVar15 = *(char *)&pSVar22[5].bridgeObject;
                Swift::Hasher::_combine(1,HVar34);
                if (puVar39 == (undefined1 *)0x0) {
                  Swift::Hasher::_combine(0,HVar34);
                }
                else {
                  Swift::Hasher::_combine(1,HVar34);
                  Swift::Hasher::_combine(*(__uint64 *)(puVar39 + 0x10),HVar34);
                  lVar45 = *(long *)(puVar39 + 0x10);
                  if (lVar45 != 0) {
                    pcVar27 = puVar39 + 0x20;
                    do {
                      puVar39 = (undefined1 *)0xe900000000000074;
                      HVar34.unknown = (char *)0x6e61747369737361;
                      if (*pcVar27 != '\x01') {
                        puVar39 = &DAT_e400000000000000;
                        HVar34.unknown = (char *)0x72657375;
                      }
                      SVar48.bridgeObject = puVar39;
                      SVar48.str = HVar34.unknown;
                      Swift::String::hash(param_1,SVar48);
                      _swift_bridgeObjectRelease(puVar39);
                      lVar45 = lVar45 + -1;
                      pcVar27 = pcVar27 + 1;
                    } while (lVar45 != 0);
                  }
                }
                if (cVar15 == '\x01') {
                  Swift::Hasher::_combine(0,HVar34);
                }
                else {
                  Swift::Hasher::_combine(1,HVar34);
                  pcVar27 = (char *)0x0;
                  if (((ulong)pcVar33 & 0x7fffffffffffffff) != 0) {
                    pcVar27 = pcVar33;
                  }
                  Swift::Hasher::_combine((__uint64)pcVar27,HVar34);
                }
                if (pvVar43 == (void *)0x0) goto LAB_1004d8520;
                Swift::Hasher::_combine(1,HVar34);
                Swift::String::hash(param_1,SVar46);
                HVar36.unknown = pSVar22[7].str;
                if (HVar36.unknown != (char *)0x0) goto LAB_1004d8530;
LAB_1004d8514:
                Swift::Hasher::_combine(0,HVar25);
                HVar36.unknown = HVar25.unknown;
              }
              FUN_1004dbca0(&local_170);
            }
LAB_1004d7ee8:
            lVar44 = lVar44 + 1;
            HVar25.unknown = HVar36.unknown;
          } while (lVar44 != lVar38);
        }
        if (puVar8 == (undefined *)0x0) {
          Swift::Hasher::_combine(0,HVar36);
        }
        else {
          Swift::Hasher::_combine(1,HVar36);
          HVar36.unknown = puVar8;
          FUN_1004df778(param_1.unknown);
        }
        if (((ulong)pcVar3 & 0xff) == 2) {
          bVar20 = 0;
        }
        else {
          Swift::Hasher::_combine(1,HVar36);
          bVar20 = (byte)pcVar3 & 1;
        }
        Swift::Hasher::_combine(bVar20,HVar36);
        if (pvVar29 == (void *)0x0) {
          Swift::Hasher::_combine(0,HVar36);
          pvVar29 = (void *)0x0;
        }
        else {
          Swift::Hasher::_combine(1,HVar36);
          FUN_1004df778(param_1.unknown,pvVar29);
        }
        uVar30 = 4;
      }
      FUN_1004dbbd4(pcVar1,puVar24,pcVar2,puVar8,pcVar3,pvVar29,uVar30);
      _Var32 = _Var32 + 1;
      HVar36.unknown = puVar24;
    } while (_Var32 != _Var37);
  }
  return;
}



/* Address: 0x1004d8718 | FUN_1004d8718 */

void FUN_1004d8718(Hasher param_1,Hasher param_2)

{
  Hasher HVar1;
  __uint64 _Var2;
  void *pvVar3;
  char *pcVar4;
  long *plVar5;
  String SVar6;
  
  _Var2 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var2,param_2);
  if (_Var2 != 0) {
    plVar5 = (long *)(param_2.unknown + 0x28);
    do {
      pvVar3 = (void *)*plVar5;
      if (pvVar3 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar1);
        pcVar4 = HVar1.unknown;
      }
      else {
        pcVar4 = (char *)plVar5[-1];
        Swift::Hasher::_combine(1,HVar1);
        _swift_bridgeObjectRetain(pvVar3);
        SVar6.bridgeObject = pvVar3;
        SVar6.str = pcVar4;
        Swift::String::hash(param_1,SVar6);
        _swift_bridgeObjectRelease(pvVar3);
      }
      _Var2 = _Var2 - 1;
      HVar1.unknown = pcVar4;
      plVar5 = plVar5 + 2;
    } while (_Var2 != 0);
  }
  return;
}



/* Address: 0x1004d87b0 | FUN_1004d87b0 */

void FUN_1004d87b0(Hasher param_1,Hasher param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  __uint64 _Var9;
  String *pSVar10;
  
  _Var9 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var9,param_2);
  if (_Var9 != 0) {
    pSVar10 = (String *)(param_2.unknown + 0x30);
    do {
      pvVar1 = pSVar10[-1].bridgeObject;
      SVar5 = pSVar10[-1];
      pvVar2 = pSVar10->bridgeObject;
      SVar6 = *pSVar10;
      pvVar3 = pSVar10[1].bridgeObject;
      SVar7 = pSVar10[1];
      pvVar4 = pSVar10[2].bridgeObject;
      SVar8 = pSVar10[2];
      _swift_bridgeObjectRetain(pvVar1);
      _swift_bridgeObjectRetain(pvVar2);
      _swift_bridgeObjectRetain(pvVar3);
      _swift_bridgeObjectRetain(pvVar4);
      Swift::String::hash(param_1,SVar5);
      Swift::String::hash(param_1,SVar6);
      Swift::String::hash(param_1,SVar7);
      Swift::String::hash(param_1,SVar8);
      _swift_bridgeObjectRelease(pvVar4);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_bridgeObjectRelease(pvVar1);
      pSVar10 = pSVar10 + 4;
      _Var9 = _Var9 - 1;
    } while (_Var9 != 0);
  }
  return;
}



/* Address: 0x1004d88ac | FUN_1004d88ac */

void FUN_1004d88ac(Hasher param_1,Hasher param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  __uint8 _Var8;
  Hasher HVar9;
  char *pcVar10;
  Hasher HVar11;
  __uint64 _Var12;
  byte *pbVar13;
  
  _Var12 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var12,param_2);
  if (_Var12 != 0) {
    pbVar13 = param_2.unknown + 0x50;
    do {
      HVar9.unknown = ((String *)(pbVar13 + -0x30))->str;
      uVar1 = *(undefined8 *)(pbVar13 + -0x28);
      SVar5 = *(String *)(pbVar13 + -0x30);
      pcVar10 = ((String *)(pbVar13 + -0x20))->str;
      lVar2 = *(long *)(pbVar13 + -0x18);
      SVar6 = *(String *)(pbVar13 + -0x20);
      HVar11.unknown = ((String *)(pbVar13 + -0x10))->str;
      lVar3 = *(long *)(pbVar13 + -8);
      SVar7 = *(String *)(pbVar13 + -0x10);
      bVar4 = *pbVar13;
      _swift_bridgeObjectRetain(lVar3);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(lVar2);
      Swift::String::hash(param_1,SVar5);
      if (lVar2 == 0) {
        Swift::Hasher::_combine(0,HVar9);
        if (lVar3 != 0) goto LAB_1004d896c;
LAB_1004d899c:
        HVar11.unknown = HVar9.unknown;
        Swift::Hasher::_combine(0,HVar11);
        if (bVar4 != 2) goto LAB_1004d89ac;
LAB_1004d88e8:
        _Var8 = 0;
      }
      else {
        Swift::Hasher::_combine(1,HVar9);
        Swift::String::hash(param_1,SVar6);
        HVar9.unknown = pcVar10;
        if (lVar3 == 0) goto LAB_1004d899c;
LAB_1004d896c:
        Swift::Hasher::_combine(1,HVar9);
        Swift::String::hash(param_1,SVar7);
        if (bVar4 == 2) goto LAB_1004d88e8;
LAB_1004d89ac:
        Swift::Hasher::_combine(1,HVar11);
        _Var8 = bVar4 & 1;
      }
      pbVar13 = pbVar13 + 0x38;
      Swift::Hasher::_combine(_Var8,HVar11);
      _swift_bridgeObjectRelease(lVar3);
      _swift_bridgeObjectRelease(lVar2);
      _swift_bridgeObjectRelease(uVar1);
      _Var12 = _Var12 - 1;
    } while (_Var12 != 0);
  }
  return;
}



/* Address: 0x1004d89d8 | FUN_1004d89d8 */

void FUN_1004d89d8(Hasher param_1,Hasher param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  char *pcVar3;
  String *pSVar4;
  ulong uVar5;
  __uint64 _Var6;
  char *pcVar7;
  long lVar8;
  __uint64 _Var9;
  Hasher HVar10;
  Hasher HVar11;
  void *pvVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  undefined1 auStack_188 [136];
  char *local_100;
  void *pvStack_f8;
  char *local_f0;
  void *pvStack_e8;
  char *local_e0;
  void *pvStack_d8;
  char *local_d0;
  void *local_c8;
  char *local_c0;
  void *pvStack_b8;
  char *local_b0;
  void *local_a8;
  char *local_a0;
  char *pcStack_98;
  char *pcStack_90;
  undefined *local_88;
  char *local_80;
  
  _Var6 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var6,param_2);
  if (_Var6 != 0) {
    _Var9 = 0;
    do {
      pSVar4 = (String *)(param_2.unknown + _Var9 * 0x88 + 0x20);
      pcStack_98 = pSVar4[6].bridgeObject;
      local_a0 = pSVar4[6].str;
      local_88 = pSVar4[7].bridgeObject;
      pcStack_90 = pSVar4[7].str;
      local_80 = pSVar4[8].str;
      pvVar12 = pSVar4[2].bridgeObject;
      HVar10.unknown = pSVar4[2].str;
      SVar15 = pSVar4[2];
      local_c8 = pSVar4[3].bridgeObject;
      local_d0 = pSVar4[3].str;
      pvStack_b8 = pSVar4[4].bridgeObject;
      local_c0 = pSVar4[4].str;
      local_a8 = pSVar4[5].bridgeObject;
      local_b0 = pSVar4[5].str;
      pvStack_f8 = pSVar4->bridgeObject;
      local_100 = pSVar4->str;
      SVar13 = *pSVar4;
      pvStack_e8 = pSVar4[1].bridgeObject;
      HVar11.unknown = pSVar4[1].str;
      SVar14 = pSVar4[1];
      local_f0 = HVar11.unknown;
      local_e0 = HVar10.unknown;
      pvStack_d8 = pvVar12;
      FUN_1004db9c8(&local_100,auStack_188);
      Swift::String::hash(param_1,SVar13);
      Swift::String::hash(param_1,SVar14);
      if (pvVar12 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar11);
        HVar10.unknown = HVar11.unknown;
        if (local_c8 == (void *)0x0) goto LAB_1004d8b3c;
LAB_1004d8ae8:
        pvVar12 = local_c8;
        HVar11.unknown = local_d0;
        Swift::Hasher::_combine(1,HVar10);
        SVar13.bridgeObject = pvVar12;
        SVar13.str = HVar11.unknown;
        Swift::String::hash(param_1,SVar13);
        HVar10.unknown = HVar11.unknown;
        if (pvStack_b8 != (void *)0x0) goto LAB_1004d8b0c;
LAB_1004d8b4c:
        Swift::Hasher::_combine(0,HVar11);
      }
      else {
        Swift::Hasher::_combine(1,HVar11);
        Swift::String::hash(param_1,SVar15);
        HVar11.unknown = HVar10.unknown;
        if (local_c8 != (void *)0x0) goto LAB_1004d8ae8;
LAB_1004d8b3c:
        Swift::Hasher::_combine(0,HVar11);
        HVar10.unknown = HVar11.unknown;
        if (pvStack_b8 == (void *)0x0) goto LAB_1004d8b4c;
LAB_1004d8b0c:
        pvVar12 = pvStack_b8;
        HVar11.unknown = local_c0;
        Swift::Hasher::_combine(1,HVar10);
        SVar14.bridgeObject = pvVar12;
        SVar14.str = HVar11.unknown;
        Swift::String::hash(param_1,SVar14);
      }
      pcVar3 = pcStack_90;
      HVar10.unknown = pcStack_98;
      pvVar12 = local_a8;
      pcVar7 = local_b0;
      if (local_b0 == (char *)0x1) {
LAB_1004d8c64:
        HVar10.unknown = HVar11.unknown;
        Swift::Hasher::_combine(0,HVar10);
        if (local_88 == (undefined *)0x0) goto LAB_1004d8c50;
LAB_1004d8c74:
        HVar11.unknown = local_88;
        Swift::Hasher::_combine(1,HVar10);
        FUN_1004d7564(param_1.unknown);
        HVar10.unknown = HVar11.unknown;
        if (local_80 != (char *)0x0) goto LAB_1004d8c90;
LAB_1004d8a38:
        Swift::Hasher::_combine(0,HVar10);
      }
      else {
        uVar5 = (ulong)local_a0 & 0xff;
        Swift::Hasher::_combine(1,HVar11);
        if (pcVar7 == (char *)0x0) {
          Swift::Hasher::_combine(0,HVar11);
        }
        else {
          Swift::Hasher::_combine(1,HVar11);
          Swift::Hasher::_combine(*(__uint64 *)(pcVar7 + 0x10),HVar11);
          lVar8 = *(long *)(pcVar7 + 0x10);
          if (lVar8 != 0) {
            pcVar7 = pcVar7 + 0x20;
            do {
              puVar1 = (undefined1 *)0xe900000000000074;
              HVar11.unknown = (char *)0x6e61747369737361;
              if (*pcVar7 != '\x01') {
                puVar1 = &DAT_e400000000000000;
                HVar11.unknown = (char *)0x72657375;
              }
              SVar15.bridgeObject = puVar1;
              SVar15.str = HVar11.unknown;
              Swift::String::hash(param_1,SVar15);
              _swift_bridgeObjectRelease(puVar1);
              lVar8 = lVar8 + -1;
              pcVar7 = pcVar7 + 1;
            } while (lVar8 != 0);
          }
        }
        if (uVar5 == 1) {
          Swift::Hasher::_combine(0,HVar11);
        }
        else {
          Swift::Hasher::_combine(1,HVar11);
          pvVar2 = (void *)0x0;
          if (((ulong)pvVar12 & 0x7fffffffffffffff) != 0) {
            pvVar2 = pvVar12;
          }
          Swift::Hasher::_combine((__uint64)pvVar2,HVar11);
        }
        if (pcVar3 == (char *)0x0) goto LAB_1004d8c64;
        Swift::Hasher::_combine(1,HVar11);
        SVar16.bridgeObject = pcVar3;
        SVar16.str = HVar10.unknown;
        Swift::String::hash(param_1,SVar16);
        if (local_88 != (undefined *)0x0) goto LAB_1004d8c74;
LAB_1004d8c50:
        Swift::Hasher::_combine(0,HVar10);
        HVar11.unknown = HVar10.unknown;
        if (local_80 == (char *)0x0) goto LAB_1004d8a38;
LAB_1004d8c90:
        pcVar7 = local_80;
        Swift::Hasher::_combine(1,HVar11);
        FUN_1004df778(param_1.unknown,pcVar7);
      }
      _Var9 = _Var9 + 1;
      FUN_1004dba04(&local_100);
    } while (_Var9 != _Var6);
  }
  return;
}



/* Address: 0x1004d8cc8 | FUN_1004d8cc8 */

void FUN_1004d8cc8(Hasher param_1,Hasher param_2)

{
  String *pSVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte bVar8;
  __uint64 _Var9;
  Hasher HVar10;
  undefined1 *puVar11;
  __uint64 _Var12;
  undefined8 *puVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  
  _Var12 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var12,param_2);
  if (_Var12 != 0) {
    puVar13 = (undefined8 *)(param_2.unknown + 0x30);
    do {
      pcVar2 = (char *)puVar13[-1];
      pvVar5 = (void *)*puVar13;
      pSVar1 = (String *)(puVar13 + 1);
      pcVar3 = pSVar1->str;
      uVar6 = puVar13[2];
      SVar16 = *pSVar1;
      SVar17 = *pSVar1;
      puVar4 = (undefined *)puVar13[3];
      pcVar7 = (char *)puVar13[4];
      bVar8 = *(byte *)(puVar13 + 5);
      lVar14 = puVar13[6];
      HVar10.unknown = (char *)0x6e61747369737361;
      if (*(char *)(puVar13 + -2) != '\x01') {
        HVar10.unknown = (char *)0x72657375;
      }
      puVar11 = (undefined1 *)0xe900000000000074;
      if (*(char *)(puVar13 + -2) != '\x01') {
        puVar11 = &DAT_e400000000000000;
      }
      FUN_1004dbb20(pcVar2);
      _swift_bridgeObjectRetain(lVar14);
      SVar15.bridgeObject = puVar11;
      SVar15.str = HVar10.unknown;
      Swift::String::hash(param_1,SVar15);
      _swift_bridgeObjectRelease(puVar11);
      if ((char)bVar8 < '\0') {
        Swift::Hasher::_combine(1,HVar10);
        HVar10.unknown = pcVar2;
        FUN_1004d7c74(param_1.unknown);
joined_r0x0001004d8eb8:
        if (lVar14 != 0) goto LAB_1004d8d0c;
LAB_1004d8f38:
        Swift::Hasher::_combine(0,HVar10);
      }
      else {
        Swift::Hasher::_combine(0,HVar10);
        if (bVar8 < 2) {
          if (bVar8 == 0) {
            Swift::Hasher::_combine(0,HVar10);
            SVar17.bridgeObject = pvVar5;
            SVar17.str = pcVar2;
            HVar10.unknown = pcVar2;
            Swift::String::hash(param_1,SVar17);
            goto joined_r0x0001004d8eb8;
          }
          _Var9 = 1;
        }
        else {
          if (bVar8 != 2) {
            if (bVar8 == 3) {
              Swift::Hasher::_combine(3,HVar10);
              SVar16.bridgeObject = pvVar5;
              SVar16.str = pcVar2;
              Swift::String::hash(param_1,SVar16);
              Swift::String::hash(param_1,SVar17);
              HVar10.unknown = puVar4;
              FUN_1004df778(param_1.unknown);
              if (pcVar7 == (char *)0x0) {
                Swift::Hasher::_combine(0,HVar10);
              }
              else {
                Swift::Hasher::_combine(1,HVar10);
                HVar10.unknown = pcVar7;
                FUN_1004df778(param_1.unknown);
              }
            }
            else {
              Swift::Hasher::_combine(4,HVar10);
              FUN_10055be0c(param_1.unknown);
            }
            goto joined_r0x0001004d8eb8;
          }
          _Var9 = 2;
        }
        Swift::Hasher::_combine(_Var9,HVar10);
        SVar18.bridgeObject = pvVar5;
        SVar18.str = pcVar2;
        Swift::String::hash(param_1,SVar18);
        HVar10.unknown = pcVar3;
        Swift::String::hash(param_1,SVar16);
        if (lVar14 == 0) goto LAB_1004d8f38;
LAB_1004d8d0c:
        Swift::Hasher::_combine(1,HVar10);
        FUN_1004df778(param_1.unknown,lVar14);
      }
      puVar13 = puVar13 + 9;
      FUN_1004dbbc8(pcVar2,pvVar5,pcVar3,uVar6,puVar4,pcVar7,bVar8);
      _swift_bridgeObjectRelease(lVar14);
      _Var12 = _Var12 - 1;
    } while (_Var12 != 0);
  }
  return;
}



/* Address: 0x1004d8f7c | FUN_1004d8f7c */

void FUN_1004d8f7c(Hasher param_1,Hasher param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  String SVar3;
  String SVar4;
  char *pcVar5;
  Hasher HVar6;
  String *pSVar7;
  ulong uVar8;
  __uint64 _Var9;
  char *pcVar10;
  __uint64 _Var11;
  long lVar12;
  Hasher HVar13;
  void *pvVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined1 auStack_1a8 [152];
  char *local_110;
  void *pvStack_108;
  char *local_100;
  void *pvStack_f8;
  char *local_f0;
  void *pvStack_e8;
  char *local_e0;
  void *pvStack_d8;
  char *local_d0;
  void *pvStack_c8;
  char *local_c0;
  void *local_b8;
  char *local_b0;
  void *pvStack_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  undefined *puStack_88;
  char *local_80;
  
  _Var9 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var9,param_2);
  if (_Var9 != 0) {
    _Var11 = 0;
    do {
      pSVar7 = (String *)(param_2.unknown + _Var11 * 0x98 + 0x20);
      pvStack_a8 = pSVar7[6].bridgeObject;
      local_b0 = pSVar7[6].str;
      local_98 = pSVar7[7].bridgeObject;
      local_a0 = pSVar7[7].str;
      puStack_88 = pSVar7[8].bridgeObject;
      local_90 = pSVar7[8].str;
      local_80 = pSVar7[9].str;
      pvStack_e8 = pSVar7[2].bridgeObject;
      local_f0 = pSVar7[2].str;
      pvStack_d8 = pSVar7[3].bridgeObject;
      local_e0 = pSVar7[3].str;
      pvStack_c8 = pSVar7[4].bridgeObject;
      local_d0 = pSVar7[4].str;
      local_b8 = pSVar7[5].bridgeObject;
      local_c0 = pSVar7[5].str;
      pvStack_108 = pSVar7->bridgeObject;
      HVar13.unknown = pSVar7->str;
      SVar3 = *pSVar7;
      pvVar14 = pSVar7[1].bridgeObject;
      local_100 = pSVar7[1].str;
      SVar4 = pSVar7[1];
      local_110 = HVar13.unknown;
      pvStack_f8 = pvVar14;
      FUN_1004dba38(&local_110,auStack_1a8);
      Swift::String::hash(param_1,SVar3);
      if (pvVar14 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar13);
      }
      else {
        Swift::Hasher::_combine(1,HVar13);
        Swift::String::hash(param_1,SVar4);
      }
      pvVar14 = pvStack_d8;
      HVar6.unknown = local_e0;
      SVar3.bridgeObject = pvStack_e8;
      SVar3.str = local_f0;
      SVar4.bridgeObject = pvStack_d8;
      SVar4.str = local_e0;
      HVar13.unknown = local_f0;
      Swift::String::hash(param_1,SVar3);
      if (pvVar14 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar13);
        HVar6.unknown = HVar13.unknown;
        if (pvStack_c8 == (void *)0x0) goto LAB_1004d90cc;
LAB_1004d909c:
        pvVar14 = pvStack_c8;
        HVar13.unknown = local_d0;
        Swift::Hasher::_combine(1,HVar6);
        SVar15.bridgeObject = pvVar14;
        SVar15.str = HVar13.unknown;
        Swift::String::hash(param_1,SVar15);
      }
      else {
        Swift::Hasher::_combine(1,HVar13);
        Swift::String::hash(param_1,SVar4);
        HVar13.unknown = HVar6.unknown;
        if (pvStack_c8 != (void *)0x0) goto LAB_1004d909c;
LAB_1004d90cc:
        Swift::Hasher::_combine(0,HVar13);
      }
      pcVar10 = local_c0;
      if ((char)local_b8 == '\x01') {
        Swift::Hasher::_combine(0,HVar13);
      }
      else {
        Swift::Hasher::_combine(1,HVar13);
        Swift::Hasher::_combine((__uint64)pcVar10,HVar13);
      }
      pcVar5 = local_90;
      HVar6.unknown = local_98;
      pvVar14 = pvStack_a8;
      pcVar10 = local_b0;
      if (local_b0 == (char *)0x1) {
LAB_1004d9218:
        HVar6.unknown = HVar13.unknown;
        Swift::Hasher::_combine(0,HVar6);
        if (puStack_88 == (undefined *)0x0) goto LAB_1004d9204;
LAB_1004d9228:
        HVar13.unknown = puStack_88;
        Swift::Hasher::_combine(1,HVar6);
        FUN_1004d7564(param_1.unknown);
        HVar6.unknown = HVar13.unknown;
        if (local_80 != (char *)0x0) goto LAB_1004d9244;
LAB_1004d8fcc:
        Swift::Hasher::_combine(0,HVar6);
      }
      else {
        uVar8 = (ulong)local_a0 & 0xff;
        Swift::Hasher::_combine(1,HVar13);
        if (pcVar10 == (char *)0x0) {
          Swift::Hasher::_combine(0,HVar13);
        }
        else {
          Swift::Hasher::_combine(1,HVar13);
          Swift::Hasher::_combine(*(__uint64 *)(pcVar10 + 0x10),HVar13);
          lVar12 = *(long *)(pcVar10 + 0x10);
          if (lVar12 != 0) {
            pcVar10 = pcVar10 + 0x20;
            do {
              puVar1 = (undefined1 *)0xe900000000000074;
              HVar13.unknown = (char *)0x6e61747369737361;
              if (*pcVar10 != '\x01') {
                puVar1 = &DAT_e400000000000000;
                HVar13.unknown = (char *)0x72657375;
              }
              SVar16.bridgeObject = puVar1;
              SVar16.str = HVar13.unknown;
              Swift::String::hash(param_1,SVar16);
              _swift_bridgeObjectRelease(puVar1);
              lVar12 = lVar12 + -1;
              pcVar10 = pcVar10 + 1;
            } while (lVar12 != 0);
          }
        }
        if (uVar8 == 1) {
          Swift::Hasher::_combine(0,HVar13);
        }
        else {
          Swift::Hasher::_combine(1,HVar13);
          pvVar2 = (void *)0x0;
          if (((ulong)pvVar14 & 0x7fffffffffffffff) != 0) {
            pvVar2 = pvVar14;
          }
          Swift::Hasher::_combine((__uint64)pvVar2,HVar13);
        }
        if (pcVar5 == (char *)0x0) goto LAB_1004d9218;
        Swift::Hasher::_combine(1,HVar13);
        SVar17.bridgeObject = pcVar5;
        SVar17.str = HVar6.unknown;
        Swift::String::hash(param_1,SVar17);
        if (puStack_88 != (undefined *)0x0) goto LAB_1004d9228;
LAB_1004d9204:
        Swift::Hasher::_combine(0,HVar6);
        HVar13.unknown = HVar6.unknown;
        if (local_80 == (char *)0x0) goto LAB_1004d8fcc;
LAB_1004d9244:
        pcVar10 = local_80;
        Swift::Hasher::_combine(1,HVar13);
        FUN_1004df778(param_1.unknown,pcVar10);
      }
      _Var11 = _Var11 + 1;
      FUN_1004dba74(&local_110);
    } while (_Var11 != _Var9);
  }
  return;
}



/* Address: 0x1004d927c | FUN_1004d927c */

void FUN_1004d927c(Hasher param_1,Hasher param_2)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  Hasher HVar9;
  char *pcVar10;
  Hasher HVar11;
  Hasher HVar12;
  __uint64 _Var13;
  char *pcVar14;
  String *pSVar15;
  
  _Var13 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var13,param_2);
  if (_Var13 != 0) {
    pSVar15 = (String *)(param_2.unknown + 0x30);
    do {
      HVar9.unknown = pSVar15[-1].str;
      pvVar1 = pSVar15[-1].bridgeObject;
      SVar5 = pSVar15[-1];
      pcVar10 = pSVar15->str;
      pvVar2 = pSVar15->bridgeObject;
      SVar6 = *pSVar15;
      HVar11.unknown = pSVar15[1].str;
      pvVar3 = pSVar15[1].bridgeObject;
      SVar7 = pSVar15[1];
      HVar12.unknown = pSVar15[2].str;
      pvVar4 = pSVar15[2].bridgeObject;
      SVar8 = pSVar15[2];
      pcVar14 = pSVar15[3].str;
      _swift_bridgeObjectRetain(pcVar14);
      _swift_bridgeObjectRetain(pvVar1);
      _swift_bridgeObjectRetain(pvVar2);
      _swift_bridgeObjectRetain(pvVar3);
      _swift_bridgeObjectRetain(pvVar4);
      Swift::String::hash(param_1,SVar5);
      if (pvVar2 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar9);
        if (pvVar3 != (void *)0x0) goto LAB_1004d9374;
LAB_1004d93bc:
        HVar11.unknown = HVar9.unknown;
        Swift::Hasher::_combine(0,HVar11);
        if (pvVar4 != (void *)0x0) goto LAB_1004d9390;
LAB_1004d93c8:
        HVar12.unknown = HVar11.unknown;
        Swift::Hasher::_combine(0,HVar12);
        if (pcVar14 == (char *)0x0) goto LAB_1004d93d4;
LAB_1004d92bc:
        Swift::Hasher::_combine(1,HVar12);
        FUN_1004df778(param_1.unknown,pcVar14);
      }
      else {
        Swift::Hasher::_combine(1,HVar9);
        Swift::String::hash(param_1,SVar6);
        HVar9.unknown = pcVar10;
        if (pvVar3 == (void *)0x0) goto LAB_1004d93bc;
LAB_1004d9374:
        Swift::Hasher::_combine(1,HVar9);
        Swift::String::hash(param_1,SVar7);
        if (pvVar4 == (void *)0x0) goto LAB_1004d93c8;
LAB_1004d9390:
        Swift::Hasher::_combine(1,HVar11);
        Swift::String::hash(param_1,SVar8);
        if (pcVar14 != (char *)0x0) goto LAB_1004d92bc;
LAB_1004d93d4:
        Swift::Hasher::_combine(0,HVar12);
      }
      pSVar15 = (String *)&pSVar15[4].bridgeObject;
      _swift_bridgeObjectRelease(pcVar14);
      _swift_bridgeObjectRelease(pvVar4);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_bridgeObjectRelease(pvVar1);
      _Var13 = _Var13 - 1;
    } while (_Var13 != 0);
  }
  return;
}



/* Address: 0x1004d9400 | FUN_1004d9400 */

void FUN_1004d9400(Hasher param_1,Hasher param_2)

{
  char *pcVar1;
  void *pvVar2;
  undefined *puVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  byte bVar12;
  char *pcVar13;
  Hasher HVar14;
  char *pcVar15;
  Hasher HVar16;
  String *pSVar17;
  __uint64 _Var18;
  __uint64 _Var19;
  byte *pbVar20;
  long lVar21;
  
  _Var18 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var18,param_2);
  if (_Var18 != 0) {
    _Var19 = 0;
    do {
      pSVar17 = (String *)(param_2.unknown + _Var19 * 0x48 + 0x20);
      HVar16.unknown = pSVar17[2].str;
      pvVar2 = pSVar17[2].bridgeObject;
      SVar11 = pSVar17[2];
      pcVar1 = pSVar17[3].str;
      puVar3 = pSVar17[3].bridgeObject;
      pcVar13 = pSVar17[4].str;
      pcVar15 = pSVar17[1].str;
      pvVar4 = pSVar17[1].bridgeObject;
      SVar10 = pSVar17[1];
      HVar14.unknown = pSVar17->str;
      pvVar5 = pSVar17->bridgeObject;
      SVar9 = *pSVar17;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(pvVar2);
      _swift_bridgeObjectRetain(pcVar1);
      _swift_bridgeObjectRetain(puVar3);
      Swift::String::hash(param_1,SVar9);
      if (pvVar4 == (void *)0x0) {
        Swift::Hasher::_combine(0,HVar14);
        if (pvVar2 != (void *)0x0) goto LAB_1004d9528;
LAB_1004d9550:
        HVar16.unknown = HVar14.unknown;
        Swift::Hasher::_combine(0,HVar16);
      }
      else {
        Swift::Hasher::_combine(1,HVar14);
        Swift::String::hash(param_1,SVar10);
        HVar14.unknown = pcVar15;
        if (pvVar2 == (void *)0x0) goto LAB_1004d9550;
LAB_1004d9528:
        Swift::Hasher::_combine(1,HVar14);
        Swift::String::hash(param_1,SVar11);
      }
      if (pcVar1 == (char *)0x0) {
        Swift::Hasher::_combine(0,HVar16);
      }
      else {
        Swift::Hasher::_combine(1,HVar16);
        Swift::Hasher::_combine(*(__uint64 *)(pcVar1 + 0x10),HVar16);
        lVar21 = *(long *)(pcVar1 + 0x10);
        if (lVar21 != 0) {
          pbVar20 = (byte *)(pcVar1 + 0x50);
          do {
            HVar14.unknown = ((String *)(pbVar20 + -0x30))->str;
            uVar6 = *(undefined8 *)(pbVar20 + -0x28);
            SVar9 = *(String *)(pbVar20 + -0x30);
            pcVar15 = ((String *)(pbVar20 + -0x20))->str;
            lVar7 = *(long *)(pbVar20 + -0x18);
            SVar10 = *(String *)(pbVar20 + -0x20);
            HVar16.unknown = ((String *)(pbVar20 + -0x10))->str;
            lVar8 = *(long *)(pbVar20 + -8);
            SVar11 = *(String *)(pbVar20 + -0x10);
            bVar12 = *pbVar20;
            _swift_bridgeObjectRetain(lVar8);
            _swift_bridgeObjectRetain(uVar6);
            _swift_bridgeObjectRetain(lVar7);
            Swift::String::hash(param_1,SVar9);
            if (lVar7 == 0) {
              Swift::Hasher::_combine(0,HVar14);
              if (lVar8 != 0) goto LAB_1004d9614;
LAB_1004d9644:
              HVar16.unknown = HVar14.unknown;
              Swift::Hasher::_combine(0,HVar16);
              if (bVar12 == 2) goto LAB_1004d9654;
LAB_1004d9588:
              Swift::Hasher::_combine(1,HVar16);
              bVar12 = bVar12 & 1;
            }
            else {
              Swift::Hasher::_combine(1,HVar14);
              Swift::String::hash(param_1,SVar10);
              HVar14.unknown = pcVar15;
              if (lVar8 == 0) goto LAB_1004d9644;
LAB_1004d9614:
              Swift::Hasher::_combine(1,HVar14);
              Swift::String::hash(param_1,SVar11);
              if (bVar12 != 2) goto LAB_1004d9588;
LAB_1004d9654:
              bVar12 = 0;
            }
            pbVar20 = pbVar20 + 0x38;
            Swift::Hasher::_combine(bVar12,HVar16);
            _swift_bridgeObjectRelease(lVar8);
            _swift_bridgeObjectRelease(lVar7);
            _swift_bridgeObjectRelease(uVar6);
            lVar21 = lVar21 + -1;
          } while (lVar21 != 0);
        }
      }
      if (puVar3 == (undefined *)0x0) {
        Swift::Hasher::_combine(0,HVar16);
      }
      else {
        Swift::Hasher::_combine(1,HVar16);
        HVar16.unknown = puVar3;
        FUN_1004d7564(param_1.unknown);
      }
      if (pcVar13 == (char *)0x0) {
        Swift::Hasher::_combine(0,HVar16);
      }
      else {
        Swift::Hasher::_combine(1,HVar16);
        FUN_1004df778(param_1.unknown,pcVar13);
      }
      _Var19 = _Var19 + 1;
      _swift_bridgeObjectRelease(pcVar13);
      _swift_bridgeObjectRelease(puVar3);
      _swift_bridgeObjectRelease(pcVar1);
      _swift_bridgeObjectRelease(pvVar2);
      _swift_bridgeObjectRelease(pvVar4);
      _swift_bridgeObjectRelease(pvVar5);
    } while (_Var19 != _Var18);
  }
  return;
}



/* Address: 0x1004d96c8 | FUN_1004d96c8 */

bool FUN_1004d96c8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    if (((undefined *)param_1[2] == (undefined *)param_2[2] &&
         (undefined *)param_1[3] == (undefined *)param_2[3]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar1)) {
      if ((((undefined *)param_1[4] == (undefined *)param_2[4]) &&
          ((undefined *)param_1[5] == (undefined *)param_2[5])) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[4],(undefined *)param_1[5],
                             (_StringComparisonResult)(__int8)(undefined *)param_2[4]), bVar1)) {
        if (((undefined *)param_1[6] == (undefined *)param_2[6]) &&
           ((undefined *)param_1[7] == (undefined *)param_2[7])) {
          return true;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[6],(undefined *)param_1[7],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[6]);
        return bVar1;
      }
    }
  }
  return false;
}



/* Address: 0x1004d9784 | FUN_1004d9784 */

void FUN_1004d9784(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc338 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51e60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51e60,&DAT_100edaae8);
  DAT_100fcc338 = pTVar1;
  return;
}



/* Address: 0x1004d97c4 | FUN_1004d97c4 */

undefined *
FUN_1004d97c4(_StringGuts param_1,_StringGuts param_2,_StringGuts param_3,byte param_4,
             undefined *param_5,undefined *param_6,undefined *param_7,char param_8)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  String SVar4;
  String SVar5;
  undefined1 local_70 [24];
  undefined1 auStack_58 [8];
  undefined1 local_50 [24];
  undefined1 auStack_38 [8];
  
  if (param_4 < 4) {
    if (param_4 < 2) {
      if (param_4 == 0) {
        if (param_8 != '\0') {
          return (undefined *)0x0;
        }
      }
      else if (param_8 != '\x01') {
        return (undefined *)0x0;
      }
    }
    else if (param_4 == 2) {
      if (param_8 != '\x02') {
        return (undefined *)0x0;
      }
    }
    else if (param_8 != '\x03') {
      return (undefined *)0x0;
    }
  }
  else {
    if (5 < param_4) {
      if (param_4 == 6) {
        if ((param_8 == '\x06') &&
           (((param_1.unknown == param_5 && (param_2.unknown == param_6)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               (param_1,param_2,(_StringComparisonResult)(__int8)param_5), bVar1))))
        {
          FUN_100555154(param_3.unknown,param_7);
          return param_3.unknown;
        }
        return (undefined *)0x0;
      }
      if (param_4 == 7) {
        if (param_8 != '\a') {
          return (undefined *)0x0;
        }
        _swift_getErrorValue(param_1.unknown,auStack_38,local_50);
        SVar4 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        _Var2.unknown = SVar4.bridgeObject;
        _swift_getErrorValue(param_5,auStack_58,local_70);
        SVar5 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        if (SVar4 != SVar5) {
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar4.str,_Var2,(_StringComparisonResult)(__int8)SVar5.str
                            );
          _swift_bridgeObjectRelease(_Var2.unknown);
          _swift_bridgeObjectRelease(SVar5.bridgeObject);
          return (undefined *)(ulong)bVar1;
        }
        _swift_bridgeObjectRelease(_Var2.unknown);
        _swift_bridgeObjectRelease(SVar5.bridgeObject);
        return &DAT_00000001;
      }
      if (param_8 != '\b') {
        return (undefined *)0x0;
      }
      if ((param_6 != (undefined *)0x0 || param_5 != (undefined *)0x0) ||
          param_7 != (undefined *)0x0) {
        return (undefined *)0x0;
      }
      goto LAB_1004d99bc;
    }
    if (param_4 != 4) {
      if (param_8 != '\x05') {
        return (undefined *)0x0;
      }
      if (param_1.unknown != param_5) {
        return (undefined *)0x0;
      }
      param_1.unknown = param_2.unknown;
      param_5 = param_6;
      if ((param_2.unknown == param_6) && (param_3.unknown == param_7)) goto LAB_1004d99bc;
      goto LAB_1004d9964;
    }
    if (param_8 != '\x04') {
      return (undefined *)0x0;
    }
  }
  puVar3 = (undefined *)(ulong)(param_2.unknown == (undefined *)0x0 && param_6 == (undefined *)0x0);
  if (param_2.unknown == (undefined *)0x0) {
    return puVar3;
  }
  if (param_6 == (undefined *)0x0) {
    return puVar3;
  }
  param_3.unknown = param_2.unknown;
  if ((param_1.unknown != param_5) || (param_2.unknown != param_6)) {
LAB_1004d9964:
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (param_1,param_3,(_StringComparisonResult)(__int8)param_5);
    return (undefined *)(ulong)bVar1;
  }
LAB_1004d99bc:
  return &DAT_00000001;
}



/* Address: 0x1004d9a20 | FUN_1004d9a20 */

undefined4 FUN_1004d9a20(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x65646f6d || param_2 != &DAT_e400000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65646f6d,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == 0x7461746963696c65) && (param_2 == (undefined1 *)0xed000064496e6f69)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7461746963696c65,(_StringGuts)0xed000064496e6f69,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x6c7275) || (param_2 != (undefined1 *)0xe300000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6c7275,(_StringGuts)0xe300000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x6567617373656d) && (param_2 == &DAT_e700000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e700000000000000);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6567617373656d,(_StringGuts)0xe700000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004d9b88 | FUN_1004d9b88 */

/* WARNING: Removing unreachable block (ram,0x0001004d9d54) */
/* WARNING: Removing unreachable block (ram,0x0001004d9cc0) */
/* WARNING: Removing unreachable block (ram,0x0001004d9d0c) */
/* WARNING: Removing unreachable block (ram,0x0001004d9d68) */
/* WARNING: Removing unreachable block (ram,0x0001004d9d7c) */
/* WARNING: Removing unreachable block (ram,0x0001004d9d88) */
/* WARNING: Removing unreachable block (ram,0x0001004d9d8c) */
/* WARNING: Removing unreachable block (ram,0x0001004d9c58) */

void FUN_1004d9b88(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long unaff_x21;
  long lVar2;
  String SVar3;
  void *local_140;
  void *local_138;
  undefined1 auStack_130 [64];
  char *local_f0;
  void *pvStack_e8;
  char *pcStack_e0;
  void *pvStack_d8;
  char *local_d0;
  void *pvStack_c8;
  char *pcStack_c0;
  void *pvStack_b8;
  String local_a8;
  String local_98;
  String local_88;
  String local_78;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcc490;
  FUN_1000f7830(&DAT_100fcc490,&DAT_100c51ef8);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004d9784();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_f0 = (char *)((ulong)local_f0 & 0xffffffffffffff00);
    local_a8 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    local_f0._0_1_ = 1;
    local_98 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    local_138 = local_98.bridgeObject;
    local_f0._0_1_ = 2;
    local_88 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    local_140 = local_88.bridgeObject;
    local_51 = 3;
    SVar3 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    (**(code **)(lVar2 + 8))((long)&local_140 - extraout_x8,puVar1);
    pvStack_e8 = local_a8.bridgeObject;
    local_f0 = local_a8.str;
    pvStack_d8 = local_98.bridgeObject;
    pcStack_e0 = local_98.str;
    local_78.bridgeObject = SVar3.bridgeObject;
    local_78.str = SVar3.str;
    pvStack_c8 = local_88.bridgeObject;
    local_d0 = local_88.str;
    pvStack_b8 = local_78.bridgeObject;
    pcStack_c0 = local_78.str;
    local_78 = SVar3;
    FUN_1004dbe54(&local_f0,auStack_130);
    FUN_100004594(param_2);
    FUN_1004dbe88(&local_a8);
    param_1[1] = pvStack_e8;
    *param_1 = local_f0;
    param_1[3] = pvStack_d8;
    param_1[2] = pcStack_e0;
    param_1[5] = pvStack_c8;
    param_1[4] = local_d0;
    param_1[7] = pvStack_b8;
    param_1[6] = pcStack_c0;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004d9e00 | FUN_1004d9e00 */

void FUN_1004d9e00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc358 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c51e10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c51e10,&DAT_100edaa58);
  DAT_100fcc358 = pTVar1;
  return;
}



/* Address: 0x1004d9e40 | FUN_1004d9e40 */

void FUN_1004d9e40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fcc368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fcc360;
  FUN_1000f8b08(&DAT_100fcc360,&DAT_100c519e8);
  local_20 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puStack_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puVar2 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68,puVar1,
             &local_20);
  DAT_100fcc368 = puVar2;
  return;
}



/* Address: 0x1004d9ea8 | FUN_1004d9ea8 */

void FUN_1004d9ea8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc390 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55480;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55480,&DAT_100edd000);
  DAT_100fcc390 = pTVar1;
  return;
}



/* Address: 0x1004d9ee8 | FUN_1004d9ee8 */

void FUN_1004d9ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (param_4 < 4) {
    if (param_4 < 2) {
      if ((param_4 == 0) || (param_4 == 1)) {
LAB_1004d9f3c:
        _swift_bridgeObjectRetain(param_2);
        return;
      }
    }
    else if ((param_4 == 2) || (param_4 == 3)) goto LAB_1004d9f3c;
  }
  else if (param_4 < 6) {
    if (param_4 == 4) goto LAB_1004d9f3c;
    if (param_4 == 5) {
      _swift_bridgeObjectRetain(param_3);
      return;
    }
  }
  else {
    if (param_4 == 6) {
      _swift_bridgeObjectRetain(param_2);
      _swift_bridgeObjectRetain(param_3);
      return;
    }
    if (param_4 == 7) {
      _swift_errorRetain();
      return;
    }
  }
  return;
}



/* Address: 0x1004d9f84 | FUN_1004d9f84 */

void FUN_1004d9f84(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (param_4 < 4) {
    if (param_4 < 2) {
      if ((param_4 == 0) || (param_4 == 1)) {
LAB_1004d9fd8:
        _swift_bridgeObjectRelease(param_2);
        return;
      }
    }
    else if ((param_4 == 2) || (param_4 == 3)) goto LAB_1004d9fd8;
  }
  else if (param_4 < 6) {
    if (param_4 == 4) goto LAB_1004d9fd8;
    if (param_4 == 5) {
      _swift_bridgeObjectRelease(param_3);
      return;
    }
  }
  else {
    if (param_4 == 6) {
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    if (param_4 == 7) {
      _swift_errorRelease();
      return;
    }
  }
  return;
}



/* Address: 0x1004da020 | FUN_1004da020 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004da05c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004da020(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}


