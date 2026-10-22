/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10055df40 | FUN_10055df40 */

void FUN_10055df40(undefined8 *param_1)

{
  *param_1 = 0x65646f6d;
  param_1[1] = &DAT_e400000000000000;
  return;
}



/* Address: 0x10055df54 | FUN_10055df54 */

undefined1  [16] FUN_10055df54(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x65646f6d;
  return auVar1;
}



/* Address: 0x10055df64 | FUN_10055df64 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010055dfa8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10055df64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __int64 _Var1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var1 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  *(bool *)param_1 = _Var1 != 0;
  return;
}



/* Address: 0x10055dfd4 | FUN_10055dfd4 */

String FUN_10055dfd4(void)

{
  String SVar1;
  
  FUN_1005639dc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055dffc | FUN_10055dffc */

String FUN_10055dffc(void)

{
  String SVar1;
  
  FUN_1005639dc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055e024 | FUN_10055e024 */

void FUN_10055e024(void)

{
  FUN_1005638ac();
  return;
}



/* Address: 0x10055e038 | FUN_10055e038 */

void FUN_10055e038(long param_1,char param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_60 [15];
  char local_51;
  
  puVar1 = &DAT_100fcfb68;
  FUN_1000f7830(&DAT_100fcfb68,&BYTE_100c58878);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005639dc();
  Swift::Encoder::_container();
  if ((param_2 != '\0') && (param_2 != '\x03')) {
    local_51 = param_2;
    FUN_100563a1c();
    Swift::KeyedEncodingContainer::_encode(&local_51);
  }
  (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10055e144 | thunk_FUN_100560f94 */

void thunk_FUN_100560f94(void)

{
  FUN_100560f94();
  return;
}



/* Address: 0x10055e148 | FUN_10055e148 */

void FUN_10055e148(Hasher param_1,Hasher param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined1 *puVar3;
  String SVar4;
  
  if (((uint)param_2.unknown & 0xff) != 3) {
    Swift::Hasher::_combine(1,param_2);
    if (((ulong)param_2.unknown & 0xff) == 0) {
      puVar3 = &DAT_e400000000000000;
      pcVar2 = (char *)0x6f747561;
    }
    else {
      bVar1 = ((uint)param_2.unknown & 0xff) != 1;
      pcVar2 = (char *)0x6465726975716572;
      if (bVar1) {
        pcVar2 = (char *)0x656e6f6e;
      }
      puVar3 = &DAT_e800000000000000;
      if (bVar1) {
        puVar3 = &DAT_e400000000000000;
      }
    }
    SVar4.bridgeObject = puVar3;
    SVar4.str = pcVar2;
    Swift::String::hash(param_1,SVar4);
    _swift_bridgeObjectRelease(puVar3);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x10055e1e4 | FUN_10055e1e4 */

void FUN_10055e1e4(char param_1,Hasher param_2)

{
  Hasher HVar1;
  char *pcVar2;
  String SVar3;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  if (param_1 == '\x03') {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    if (param_1 == '\0') {
      HVar1.unknown = &DAT_e400000000000000;
      pcVar2 = (char *)0x6f747561;
    }
    else {
      pcVar2 = (char *)0x6465726975716572;
      if (param_1 != '\x01') {
        pcVar2 = (char *)0x656e6f6e;
      }
      HVar1.unknown = &DAT_e800000000000000;
      if (param_1 != '\x01') {
        HVar1.unknown = &DAT_e400000000000000;
      }
    }
    SVar3.bridgeObject = HVar1.unknown;
    SVar3.str = pcVar2;
    Swift::String::hash((Hasher)auStack_68,SVar3);
    _swift_bridgeObjectRelease();
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055e29c | FUN_10055e29c */

void FUN_10055e29c(void)

{
  undefined1 *unaff_x20;
  
  FUN_10055e1e4(*unaff_x20);
  return;
}



/* Address: 0x10055e2a4 | FUN_10055e2a4 */

void FUN_10055e2a4(Hasher param_1,Hasher param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  if (cVar5 == '\x03') {
    Swift::Hasher::_combine(0,param_2);
    return;
  }
  Swift::Hasher::_combine(1,param_2);
  pcVar1 = (char *)0x6465726975716572;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x656e6f6e;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar3 = (char *)0x6f747561;
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



/* Address: 0x10055e350 | FUN_10055e350 */

void FUN_10055e350(__int64 param_1,Hasher param_2)

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
  if (cVar4 == '\x03') {
    HVar5.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    pcVar1 = (char *)0x6465726975716572;
    if (cVar4 != '\x01') {
      pcVar1 = (char *)0x656e6f6e;
    }
    puVar2 = &DAT_e800000000000000;
    if (cVar4 != '\x01') {
      puVar2 = &DAT_e400000000000000;
    }
    pcVar3 = (char *)0x6f747561;
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
  }
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055e3fc | FUN_10055e3fc */

void FUN_10055e3fc(undefined1 *param_1,undefined1 param_2)

{
  long unaff_x21;
  
  FUN_1005638ac();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10055e424 | FUN_10055e424 */

void FUN_10055e424(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10055e038(param_1,*unaff_x20);
  return;
}



/* Address: 0x10055e43c | FUN_10055e43c */

void FUN_10055e43c(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100560f94(*param_1,*param_2);
  return;
}



/* Address: 0x10055e448 | FUN_10055e448 */

void FUN_10055e448(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000f8cac(unaff_x20 + 8,param_1,&DAT_100fcfb80,&BYTE_100c58880);
  return;
}



/* Address: 0x10055e474 | FUN_10055e474 */

undefined1 FUN_10055e474(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x50);
}



/* Address: 0x10055e47c | FUN_10055e47c */

undefined1  [16] FUN_10055e47c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x58);
  return auVar1;
}



/* Address: 0x10055e488 | FUN_10055e488 */

undefined8 FUN_10055e488(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x68);
}



/* Address: 0x10055e490 | FUN_10055e490 */

void FUN_10055e490(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Address: 0x10055e498 | FUN_10055e498 */

void FUN_10055e498(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Address: 0x10055e4a0 | FUN_10055e4a0 */

void FUN_10055e4a0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  return;
}



/* Address: 0x10055e4c8 | FUN_10055e4c8 */

undefined1  [16] FUN_10055e4c8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x78;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10055e4d8 | FUN_10055e4d8 */

undefined1 FUN_10055e4d8(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x88);
}



/* Address: 0x10055e4e0 | FUN_10055e4e0 */

void FUN_10055e4e0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Address: 0x10055e4e8 | FUN_10055e4e8 */

void FUN_10055e4e8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined1 param_13,undefined4 param_14,undefined8 param_15)

{
  undefined1 auStack_1f8 [152];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 local_108;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 uStack_d8;
  undefined7 uStack_d7;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  
  uStack_150 = param_3[1];
  uStack_158 = *param_3;
  uStack_140 = param_3[3];
  local_148 = param_3[2];
  uStack_130 = param_3[5];
  local_138 = param_3[4];
  local_128 = *(undefined1 *)(param_3 + 6);
  uStack_f0 = param_10;
  local_e8 = param_11;
  local_e0 = param_12;
  uStack_d8 = param_13;
  local_d0 = param_15;
  uStack_58 = param_10;
  local_50 = param_11;
  uStack_48 = param_12;
  local_40 = param_13;
  local_38 = param_15;
  local_160 = param_2;
  local_120 = param_4;
  uStack_118 = param_5;
  local_110 = param_6;
  local_108 = param_7;
  local_100 = param_8;
  uStack_f8 = param_9;
  local_c8 = param_2;
  local_c0 = uStack_158;
  uStack_b8 = uStack_150;
  uStack_b0 = local_148;
  uStack_a8 = uStack_140;
  local_a0 = local_138;
  uStack_98 = uStack_130;
  local_90 = local_128;
  local_88 = param_4;
  uStack_80 = param_5;
  local_78 = param_6;
  local_70 = param_7;
  local_68 = param_8;
  local_60 = param_9;
  FUN_100563a5c(&local_160,auStack_1f8);
  FUN_100563a90(&local_c8);
  param_1[0xd] = uStack_f8;
  param_1[0xc] = CONCAT71(uStack_ff,local_100);
  param_1[0xf] = local_e8;
  param_1[0xe] = uStack_f0;
  param_1[0x11] = CONCAT71(uStack_d7,uStack_d8);
  param_1[0x10] = local_e0;
  param_1[0x12] = local_d0;
  param_1[5] = local_138;
  param_1[4] = uStack_140;
  param_1[7] = CONCAT71(uStack_127,local_128);
  param_1[6] = uStack_130;
  param_1[9] = uStack_118;
  param_1[8] = local_120;
  param_1[0xb] = local_108;
  param_1[10] = CONCAT71(uStack_10f,local_110);
  param_1[1] = uStack_158;
  *param_1 = local_160;
  param_1[3] = local_148;
  param_1[2] = uStack_150;
  return;
}



/* Address: 0x10055e5dc | FUN_10055e5dc */

String FUN_10055e5dc(undefined1 param_1,undefined8 param_2,char *param_3,char *param_4,char *param_5
                    )

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Union_Impl_FuncImpl *pUVar6;
  long extraout_x8;
  char *unaff_x19;
  char *unaff_x20;
  long unaff_x21;
  char *unaff_x22;
  long unaff_x23;
  char *unaff_x24;
  long unaff_x27;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
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
  undefined8 *in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined1 auStack_40 [32];
  
  pUVar6 = (Union_Impl_FuncImpl *)&DAT_e800000000000000;
  pcVar1 = (char *)0x736567617373656d;
  pcVar2 = pcVar1;
  switch(param_1) {
  default:
    pUVar6 = (Union_Impl_FuncImpl *)0x8000000100dad980;
    pcVar1 = (char *)0x10;
  case 0xff:
    SVar10.str = (char *)((ulong)pcVar1 & 0xffffffffffff | 0xd000000000000000);
    SVar10.bridgeObject = pUVar6;
    return SVar10;
  case 2:
    SVar13.bridgeObject = (void *)0xec00000074706d6f;
    SVar13.str = (char *)0x72506d6574737973;
    return SVar13;
  case 3:
    SVar14.bridgeObject = (void *)0xee00747865746e6f;
    SVar14.str = (char *)0x436564756c636e69;
    return SVar14;
  case 4:
  case 0xcd:
    pUVar6 = (Union_Impl_FuncImpl *)0x657275;
  case 0x7d:
  case 0x9d:
  case 0xdd:
  case 0xed:
    pUVar6 = (Union_Impl_FuncImpl *)((ulong)pUVar6 & 0xffffffffffff | 0xeb00000000000000);
  case 0x5b:
  case 99:
  case 0x6b:
  case 0x73:
  case 0x7b:
  case 0x83:
  case 0x93:
  case 0x9b:
  case 0xab:
  case 0xb3:
  case 0xbb:
  case 0xc3:
  case 0xcb:
  case 0xd3:
  case 0xdb:
  case 0xeb:
  case 0xf3:
    pcVar1 = (char *)0x706d6574;
switchD_10055e60c_caseD_5d:
    SVar11.str = (char *)((ulong)pcVar1 & 0xffffffff | 0x7461726500000000);
    SVar11.bridgeObject = pUVar6;
    return SVar11;
  case 5:
    SVar16.bridgeObject = (void *)0xe900000000000073;
    SVar16.str = (char *)0x6e656b6f5478616d;
    return SVar16;
  case 6:
    SVar17.bridgeObject = (void *)0xed00007365636e65;
    SVar17.str = (char *)0x75716553706f7473;
    return SVar17;
  case 7:
    pUVar6 = (Union_Impl_FuncImpl *)&DAT_e500000000000000;
  case 0xfb:
    SVar15.bridgeObject = pUVar6;
    SVar15.str = (char *)0x6174656d5f;
    return SVar15;
  case 8:
    SVar19.bridgeObject = &DAT_e500000000000000;
    SVar19.str = (char *)0x736c6f6f74;
    return SVar19;
  case 9:
    pUVar6 = (Union_Impl_FuncImpl *)0x6563;
  case 0xfd:
    SVar12.bridgeObject = (void *)((ulong)pUVar6 & 0xffffffffffff | 0xea00000000000000);
    SVar12.str = (char *)0x696f68436c6f6f74;
    return SVar12;
  case 10:
    pcVar1 = (char *)0x617461646174656d;
  case 0:
    SVar18.bridgeObject = &DAT_e800000000000000;
    SVar18.str = pcVar1;
    return SVar18;
  case 0x11:
  case 0x26:
  case 0x29:
  case 0x2c:
  case 0x37:
  case 0x47:
    goto switchD_10055e60c_caseD_11;
  case 0x12:
  case 0x17:
  case 0x2a:
  case 0x38:
    goto switchD_10055e60c_caseD_12;
  case 0x13:
    goto switchD_10055e60c_caseD_13;
  case 0x14:
  case 0x34:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case 0x45:
    *(undefined8 **)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
    FUN_100563abc();
    SVar20 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar20;
  case 0x15:
  case 0x28:
    goto switchD_10055e60c_caseD_15;
  case 0x16:
    goto switchD_10055e60c_caseD_16;
  case 0x20:
  case 0x50:
    goto switchD_10055e60c_caseD_20;
  case 0x21:
  case 0x39:
  case 0x46:
    goto switchD_10055e60c_caseD_21;
  case 0x22:
  case 0x41:
    goto switchD_10055e60c_caseD_22;
  case 0x23:
  case 0x35:
  case 0x42:
  case 0x43:
    goto switchD_10055e60c_caseD_23;
  case 0x24:
    goto switchD_10055e60c_caseD_24;
  case 0x25:
    SVar20.bridgeObject = &DAT_e800000000000000;
    SVar20.str = (char *)0x736567617373656d;
    return SVar20;
  case 0x27:
    goto switchD_10055e60c_caseD_27;
  case 0x30:
switchD_10055e60c_caseD_30:
    *(undefined1 *)((long)unaff_x29 + -0x41) = param_1;
    pcVar1 = (char *)0x100fcb000;
  case 0xb9:
    unaff_x20 = pcVar1 + 0x568;
    FUN_1000f7830(unaff_x20,&DAT_100c50360);
    pcVar1 = (char *)0x100fcb000;
  case 0xc1:
    pcVar2 = pcVar1 + 0xbc0;
    FUN_1004cb1cc(pcVar2,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  case 0xc9:
  case 0xd1:
  case 0xe9:
    pcVar1 = (char *)(unaff_x29 + -0x10);
    param_5 = pcVar2;
  case 0xf1:
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (pcVar1,(long)unaff_x29 + -0x41,unaff_x19,unaff_x20,param_5);
    if (unaff_x23 == 0) {
      unaff_x29[-0x10] = *(undefined8 *)(unaff_x24 + 0x78);
      *(undefined1 *)((long)unaff_x29 + -0x41) = 7;
      FUN_1004e02ac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x29 + -0x10,(long)unaff_x29 + -0x41,unaff_x19,&DAT_100edcda0,pcVar1);
      unaff_x29[-0x10] = *(undefined8 *)(unaff_x24 + 0x80);
      *(undefined1 *)((long)unaff_x29 + -0x41) = 8;
      puVar4 = &DAT_100fcfbc0;
      FUN_1000f7830(&DAT_100fcfbc0,&BYTE_100c588a0);
      puVar5 = puVar4;
      FUN_100563c2c();
      puVar3 = unaff_x29 + -0x10;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (puVar3,(long)unaff_x29 + -0x41,unaff_x19,puVar4,puVar5);
      *(char *)(unaff_x29 + -0x10) = unaff_x24[0x88];
      *(undefined1 *)((long)unaff_x29 + -0x41) = 9;
      FUN_100563cdc();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x29 + -0x10,(long)unaff_x29 + -0x41,unaff_x19,&DAT_100edf8c8,puVar3);
      unaff_x29[-0x10] = *(undefined8 *)(unaff_x24 + 0x90);
      *(undefined1 *)((long)unaff_x29 + -0x41) = 10;
      puVar4 = &DAT_100fcc380;
      FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
      puVar5 = &DAT_100fcc388;
      FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                    PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                    ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68)
      ;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x29 + -0x10,(long)unaff_x29 + -0x41,unaff_x19,puVar4,puVar5);
    }
    break;
  case 0x31:
    goto switchD_10055e60c_caseD_31;
  case 0x32:
    FUN_100563abc();
  case 0x2b:
switchD_10055e60c_caseD_13:
switchD_10055e60c_caseD_11:
    SVar20 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar20;
  case 0x33:
    goto switchD_10055e60c_caseD_33;
  case 0x36:
  case 0x44:
switchD_10055e60c_caseD_31:
    in_stack_00000040 = unaff_x29;
    in_stack_00000048 = unaff_x30;
switchD_10055e60c_caseD_12:
    unaff_x29 = &stack0x00000040;
switchD_10055e60c_caseD_23:
    register0x00000008 = (BADSPACEBASE *)auStack_40;
switchD_10055e60c_caseD_24:
    unaff_x23 = unaff_x21;
switchD_10055e60c_caseD_27:
    unaff_x24 = unaff_x20;
switchD_10055e60c_caseD_16:
    unaff_x20 = pcVar1;
switchD_10055e60c_caseD_21:
    pcVar1 = &DAT_100fcf000;
switchD_10055e60c_caseD_22:
    pcVar1 = pcVar1 + 0xb88;
switchD_10055e60c_caseD_15:
    pUVar6 = &TargetResilientWitness_100c57ffc.Implementation;
switchD_10055e60c_caseD_5a:
    pUVar6 = pUVar6 + 0x222;
switchD_10055e60c_caseD_da:
    FUN_1000f7830(pcVar1,pUVar6);
switchD_10055e60c_caseD_33:
    unaff_x27 = *(long *)(pcVar1 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
    unaff_x22 = (char *)((long)register0x00000008 + -extraout_x8);
    FUN_100004640(unaff_x20,*(undefined8 *)(unaff_x20 + 0x18));
    FUN_100563abc();
    Swift::Encoder::_container();
    unaff_x29[-0x10] = *(undefined8 *)unaff_x24;
    *(undefined1 *)((long)unaff_x29 + -0x41) = 0;
    pcVar2 = &DAT_100fcfb98;
    FUN_1000f7830(&DAT_100fcfb98,&BYTE_100c58890);
    unaff_x19 = pcVar1;
switchD_10055e60c_caseD_f9:
    pcVar1 = pcVar2;
    FUN_100563afc();
    puVar3 = unaff_x29 + -0x10;
    Swift::KeyedEncodingContainer::_encode(puVar3,(long)unaff_x29 + -0x41,unaff_x19,pcVar2,pcVar1);
    if (unaff_x23 == 0) {
      uVar7 = *(undefined8 *)(unaff_x24 + 8);
      uVar9 = *(undefined8 *)(unaff_x24 + 0x20);
      uVar8 = *(undefined8 *)(unaff_x24 + 0x18);
      unaff_x29[-0xf] = *(undefined8 *)(unaff_x24 + 0x10);
      unaff_x29[-0x10] = uVar7;
      unaff_x29[-0xd] = uVar9;
      unaff_x29[-0xe] = uVar8;
      uVar7 = *(undefined8 *)(unaff_x24 + 0x28);
      unaff_x29[-0xb] = *(undefined8 *)(unaff_x24 + 0x30);
      unaff_x29[-0xc] = uVar7;
      *(char *)(unaff_x29 + -10) = unaff_x24[0x38];
      *(undefined1 *)((long)unaff_x29 + -0x41) = 1;
      FUN_100563bac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x29 + -0x10,(long)unaff_x29 + -0x41,unaff_x19,&DAT_100edf4e8,puVar3);
      unaff_x21 = 0;
      unaff_x23 = 0;
switchD_10055e60c_caseD_fe:
      if (unaff_x21 == 0) {
        param_5 = *(char **)(unaff_x24 + 0x40);
        uVar7 = *(undefined8 *)(unaff_x24 + 0x48);
        *(undefined1 *)(unaff_x29 + -0x10) = 2;
        Swift::KeyedEncodingContainer::_encodeIfPresent(param_5,uVar7,unaff_x29 + -0x10,unaff_x19);
        if (unaff_x23 == 0) {
          *(char *)(unaff_x29 + -0x10) = unaff_x24[0x50];
          *(undefined1 *)((long)unaff_x29 + -0x41) = 3;
          FUN_100563bec();
          unaff_x23 = 0;
switchD_10055e60c_caseD_59:
          param_3 = unaff_x19;
          param_4 = "\x01\x02";
          pcVar1 = (char *)(unaff_x29 + -0x10);
          pUVar6 = (Union_Impl_FuncImpl *)((long)unaff_x29 + -0x41);
          unaff_x19 = param_3;
switchD_10055e60c_caseD_61:
          Swift::KeyedEncodingContainer::_encodeIfPresent(pcVar1,pUVar6,param_3,param_4,param_5);
          if (unaff_x23 == 0) {
            pcVar1 = *(char **)(unaff_x24 + 0x58);
            pUVar6 = (Union_Impl_FuncImpl *)(ulong)(byte)unaff_x24[0x60];
            unaff_x23 = 0;
switchD_10055e60c_caseD_69:
            unaff_x21 = unaff_x23;
            param_4 = unaff_x19;
            *(undefined1 *)(unaff_x29 + -0x10) = 4;
            param_3 = (char *)(unaff_x29 + -0x10);
            unaff_x19 = param_4;
switchD_10055e60c_caseD_71:
            Swift::KeyedEncodingContainer::_encodeIfPresent(pcVar1,pUVar6,param_3,param_4);
            if (unaff_x21 == 0) {
              pcVar1 = *(char **)(unaff_x24 + 0x68);
              *(undefined1 *)(unaff_x29 + -0x10) = 5;
              unaff_x23 = 0;
switchD_10055e60c_caseD_79:
              param_3 = unaff_x19;
              pUVar6 = (Union_Impl_FuncImpl *)(unaff_x29 + -0x10);
              unaff_x19 = param_3;
switchD_10055e60c_caseD_81:
              unaff_x21 = unaff_x23;
              Swift::KeyedEncodingContainer::_encode(pcVar1,pUVar6,param_3);
switchD_10055e60c_caseD_20:
              unaff_x23 = unaff_x21;
switchD_10055e60c_caseD_99:
              if (unaff_x21 == 0) {
switchD_10055e60c_caseD_40:
                unaff_x29[-0x10] = *(undefined8 *)(unaff_x24 + 0x70);
                param_1 = 6;
                goto switchD_10055e60c_caseD_30;
              }
            }
          }
        }
      }
    }
    break;
  case 0x40:
    goto switchD_10055e60c_caseD_40;
  case 0x59:
    goto switchD_10055e60c_caseD_59;
  case 0x5a:
  case 0x62:
  case 0x6a:
  case 0x72:
  case 0x7a:
  case 0x82:
  case 0x92:
  case 0x9a:
  case 0xaa:
  case 0xb2:
  case 0xba:
  case 0xc2:
  case 0xca:
  case 0xd2:
  case 0xea:
  case 0xf2:
    goto switchD_10055e60c_caseD_5a;
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0x75:
  case 0x85:
  case 0x95:
  case 0xad:
  case 0xb5:
  case 0xbd:
  case 0xc5:
  case 0xd5:
  case 0xf5:
    goto switchD_10055e60c_caseD_5d;
  case 0x61:
    goto switchD_10055e60c_caseD_61;
  case 0x69:
    goto switchD_10055e60c_caseD_69;
  case 0x71:
    goto switchD_10055e60c_caseD_71;
  case 0x79:
  case 0x91:
  case 0xa9:
    goto switchD_10055e60c_caseD_79;
  case 0x81:
    goto switchD_10055e60c_caseD_81;
  case 0x99:
  case 0xb1:
    goto switchD_10055e60c_caseD_99;
  case 0xda:
  case 0xfa:
    goto switchD_10055e60c_caseD_da;
  case 0xf9:
    goto switchD_10055e60c_caseD_f9;
  case 0xfe:
    goto switchD_10055e60c_caseD_fe;
  }
  (**(code **)(unaff_x27 + 8))(unaff_x22,unaff_x19);
  SVar21.bridgeObject = unaff_x19;
  SVar21.str = unaff_x22;
  return SVar21;
}



/* Address: 0x10055e728 | FUN_10055e728 */

void FUN_10055e728(void)

{
  undefined1 *unaff_x20;
  
  FUN_10055e5dc(*unaff_x20);
  return;
}



/* Address: 0x10055e730 | FUN_10055e730 */

void FUN_10055e730(undefined1 *param_1,undefined1 param_2)

{
  FUN_100563d1c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10055e754 | FUN_10055e754 */

void FUN_10055e754(undefined1 *param_1)

{
  *param_1 = 0xb;
  return;
}



/* Address: 0x10055e760 | switchD_10055e60c::caseD_14 */

String switchD_10055e60c::caseD_14(void)

{
  String SVar1;
  
  FUN_100563abc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055e788 | FUN_10055e788 */

String FUN_10055e788(void)

{
  String SVar1;
  
  FUN_100563abc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055e7b0 | thunk_FUN_100560c38 */

void thunk_FUN_100560c38(void)

{
  FUN_100560c38();
  return;
}



/* Address: 0x10055e7b4 | FUN_10055e7b4 */

void FUN_10055e7b4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcfb88;
  FUN_1000f7830(&DAT_100fcfb88,&BYTE_100c58888);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100563abc();
  Swift::Encoder::_container();
  local_90 = *unaff_x20;
  local_51 = 0;
  puVar2 = &DAT_100fcfb98;
  FUN_1000f7830(&DAT_100fcfb98,&BYTE_100c58890);
  puVar3 = puVar2;
  FUN_100563afc();
  puVar4 = &local_90;
  Swift::KeyedEncodingContainer::_encode(puVar4,&local_51,puVar1,puVar2,puVar3);
  if (unaff_x21 == 0) {
    uStack_88 = unaff_x20[2];
    local_90 = unaff_x20[1];
    uStack_78 = unaff_x20[4];
    uStack_80 = unaff_x20[3];
    uStack_68 = unaff_x20[6];
    local_70 = unaff_x20[5];
    local_60 = *(undefined1 *)(unaff_x20 + 7);
    local_51 = 1;
    FUN_100563bac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_90,&local_51,puVar1,&DAT_100edf4e8,puVar4);
    uVar5 = unaff_x20[8];
    local_90._0_1_ = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar5,unaff_x20[9],&local_90,puVar1);
    local_90._0_1_ = *(undefined1 *)(unaff_x20 + 10);
    local_51 = 3;
    FUN_100563bec();
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_90,&local_51,puVar1,&DAT_100edf608,uVar5)
    ;
    local_90._0_1_ = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[0xb],*(undefined1 *)(unaff_x20 + 0xc),&local_90,puVar1);
    local_90 = CONCAT71(local_90._1_7_,5);
    Swift::KeyedEncodingContainer::_encode(unaff_x20[0xd],&local_90,puVar1);
    local_90 = unaff_x20[0xe];
    local_51 = 6;
    puVar2 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    puVar3 = &DAT_100fcbbc0;
    FUN_1004cb1cc(&DAT_100fcbbc0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    puVar4 = &local_90;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar4,&local_51,puVar1,puVar2,puVar3);
    local_90 = unaff_x20[0xf];
    local_51 = 7;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_90,&local_51,puVar1,&DAT_100edcda0,puVar4);
    local_90 = unaff_x20[0x10];
    local_51 = 8;
    puVar2 = &DAT_100fcfbc0;
    FUN_1000f7830(&DAT_100fcfbc0,&BYTE_100c588a0);
    puVar3 = puVar2;
    FUN_100563c2c();
    puVar4 = &local_90;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar4,&local_51,puVar1,puVar2,puVar3);
    local_90 = CONCAT71(local_90._1_7_,*(undefined1 *)(unaff_x20 + 0x11));
    local_51 = 9;
    FUN_100563cdc();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_90,&local_51,puVar1,&DAT_100edf8c8,puVar4);
    local_90 = unaff_x20[0x12];
    local_51 = 10;
    puVar2 = &DAT_100fcc380;
    FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
    puVar3 = &DAT_100fcc388;
    FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_90,&local_51,puVar1,puVar2,puVar3);
  }
  (**(code **)(lVar6 + 8))((long)&local_90 - extraout_x8,puVar1);
  return;
}



/* Address: 0x10055eb94 | FUN_10055eb94 */

void FUN_10055eb94(Hasher param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char cVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  void *pvVar5;
  ulong uVar6;
  __uint64 _Var7;
  char *pcVar8;
  long lVar9;
  undefined8 *puVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  HVar4.unknown = (undefined *)*unaff_x20;
  FUN_1004d8cc8();
  if (unaff_x20[1] == 1) {
    Swift::Hasher::_combine(0,HVar4);
    pvVar5 = (void *)unaff_x20[9];
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_10055aa10(param_1.unknown);
    pvVar5 = (void *)unaff_x20[9];
  }
  if (pvVar5 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    pcVar8 = (char *)unaff_x20[8];
    Swift::Hasher::_combine(1,HVar4);
    SVar11.bridgeObject = pvVar5;
    SVar11.str = pcVar8;
    Swift::String::hash(param_1,SVar11);
    HVar4.unknown = pcVar8;
  }
  cVar3 = *(char *)(unaff_x20 + 10);
  if (cVar3 == '\x03') {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    puVar1 = (undefined1 *)0xea00000000007265;
    pcVar8 = (char *)0x7672655373696874;
    if (cVar3 != '\x01') {
      puVar1 = (undefined1 *)0xea00000000007372;
      pcVar8 = (char *)0x65767265536c6c61;
    }
    HVar4.unknown = (char *)0x656e6f6e;
    if (cVar3 != '\0') {
      HVar4.unknown = pcVar8;
    }
    puVar2 = &DAT_e400000000000000;
    if (cVar3 != '\0') {
      puVar2 = puVar1;
    }
    SVar12.bridgeObject = puVar2;
    SVar12.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar12);
    _swift_bridgeObjectRelease(puVar2);
  }
  if (*(char *)(unaff_x20 + 0xc) == '\x01') {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    uVar6 = unaff_x20[0xb];
    Swift::Hasher::_combine(1,HVar4);
    _Var7 = 0;
    if ((uVar6 & 0x7fffffffffffffff) != 0) {
      _Var7 = uVar6;
    }
    Swift::Hasher::_combine(_Var7,HVar4);
  }
  Swift::Hasher::_combine(unaff_x20[0xd],HVar4);
  lVar9 = unaff_x20[0xe];
  if (lVar9 == 0) {
    Swift::Hasher::_combine(0,HVar4);
    lVar9 = unaff_x20[0xf];
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    _Var7 = *(__uint64 *)(lVar9 + 0x10);
    Swift::Hasher::_combine(_Var7,HVar4);
    if (_Var7 != 0) {
      puVar10 = (undefined8 *)(lVar9 + 0x28);
      do {
        HVar4.unknown = (undefined *)puVar10[-1];
        pvVar5 = (void *)*puVar10;
        _swift_bridgeObjectRetain(pvVar5);
        SVar13.bridgeObject = pvVar5;
        SVar13.str = HVar4.unknown;
        Swift::String::hash(param_1,SVar13);
        _swift_bridgeObjectRelease(pvVar5);
        puVar10 = puVar10 + 2;
        _Var7 = _Var7 - 1;
      } while (_Var7 != 0);
    }
    lVar9 = unaff_x20[0xf];
  }
  if (lVar9 == 0) {
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,lVar9);
  }
  HVar4.unknown = (undefined *)unaff_x20[0x10];
  FUN_10055fcf0(param_1.unknown);
  cVar3 = *(char *)(unaff_x20 + 0x11);
  if ((cVar3 == '\x04') || (Swift::Hasher::_combine(1,HVar4), cVar3 == '\x03')) {
    Swift::Hasher::_combine(0,HVar4);
    lVar9 = unaff_x20[0x12];
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    pcVar8 = (char *)0x6465726975716572;
    if (cVar3 != '\x01') {
      pcVar8 = (char *)0x656e6f6e;
    }
    puVar1 = &DAT_e800000000000000;
    if (cVar3 != '\x01') {
      puVar1 = &DAT_e400000000000000;
    }
    HVar4.unknown = (char *)0x6f747561;
    if (cVar3 != '\0') {
      HVar4.unknown = pcVar8;
    }
    puVar2 = &DAT_e400000000000000;
    if (cVar3 != '\0') {
      puVar2 = puVar1;
    }
    SVar14.bridgeObject = puVar2;
    SVar14.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar14);
    _swift_bridgeObjectRelease(puVar2);
    lVar9 = unaff_x20[0x12];
  }
  if (lVar9 != 0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,lVar9);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x10055eebc | FUN_10055eebc */

void FUN_10055eebc(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10055eb94();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055eef8 | FUN_10055eef8 */

void FUN_10055eef8(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 local_28;
  
  FUN_1005640b8(&local_b8);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_50;
    param_1[0xc] = local_58;
    param_1[0xf] = uStack_40;
    param_1[0xe] = local_48;
    param_1[0x11] = uStack_30;
    param_1[0x10] = local_38;
    param_1[0x12] = local_28;
    param_1[5] = uStack_90;
    param_1[4] = local_98;
    param_1[7] = uStack_80;
    param_1[6] = local_88;
    param_1[9] = uStack_70;
    param_1[8] = local_78;
    param_1[0xb] = uStack_60;
    param_1[10] = local_68;
    param_1[1] = uStack_b0;
    *param_1 = local_b8;
    param_1[3] = uStack_a0;
    param_1[2] = local_a8;
  }
  return;
}



/* Address: 0x10055ef68 | thunk_FUN_10055eb94 */

void thunk_FUN_10055eb94(void)

{
  FUN_10055eb94();
  return;
}



/* Address: 0x10055ef6c | FUN_10055ef6c */

void FUN_10055ef6c(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10055eb94();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055efa4 | FUN_10055efa4 */

void FUN_10055efa4(void)

{
  FUN_10055e7b4();
  return;
}



/* Address: 0x10055efb8 | FUN_10055efb8 */

uint FUN_10055efb8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_100560c38(&local_160,&local_c0);
  return uVar1 & 1;
}



/* Address: 0x10055f048 | FUN_10055f048 */

void FUN_10055f048(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100559374(unaff_x20 + 0x28,param_1);
  return;
}



/* Address: 0x10055f054 | FUN_10055f054 */

void FUN_10055f054(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x10055f05c | FUN_10055f05c */

void FUN_10055f05c(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  return;
}



/* Address: 0x10055f084 | FUN_10055f084 */

void FUN_10055f084(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined1 auStack_190 [104];
  undefined7 uStack_128;
  undefined1 local_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 local_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined7 uStack_f8;
  undefined1 uStack_f1;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 local_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 local_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 local_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined8 local_47;
  undefined8 uStack_3f;
  undefined8 local_37;
  undefined8 local_28;
  
  uStack_f9 = (undefined1)param_7[5];
  uStack_f8 = (undefined7)((ulong)param_7[5] >> 8);
  local_101 = (undefined1)param_7[4];
  uStack_100 = (undefined7)((ulong)param_7[4] >> 8);
  uStack_f1 = *(undefined1 *)(param_7 + 6);
  local_37 = CONCAT17(uStack_f1,uStack_f8);
  local_9f = uStack_f8;
  uStack_119 = (undefined1)param_7[1];
  uStack_118 = (undefined7)((ulong)param_7[1] >> 8);
  local_121 = (undefined1)*param_7;
  uStack_120 = (undefined7)((ulong)*param_7 >> 8);
  uStack_109 = (undefined1)param_7[3];
  uStack_108 = (undefined7)((ulong)param_7[3] >> 8);
  local_111 = (undefined1)param_7[2];
  uStack_110 = (undefined7)((ulong)param_7[2] >> 8);
  uStack_a7 = uStack_100;
  uStack_a0 = uStack_f9;
  local_af = uStack_108;
  uStack_a8 = local_101;
  uStack_4f = CONCAT17(uStack_109,uStack_110);
  local_57 = CONCAT17(local_111,uStack_118);
  uStack_b7 = uStack_110;
  uStack_b0 = uStack_109;
  local_bf = uStack_118;
  uStack_b8 = local_111;
  uStack_5f = CONCAT17(uStack_119,uStack_120);
  local_67 = CONCAT17(local_121,uStack_128);
  uStack_c7 = uStack_120;
  uStack_c0 = uStack_119;
  uStack_cf = uStack_128;
  uStack_c8 = local_121;
  uStack_3f = CONCAT17(uStack_f9,uStack_100);
  local_47 = CONCAT17(local_101,uStack_108);
  local_f0 = param_2;
  uStack_e8 = param_3;
  local_e0 = param_4;
  uStack_d8 = param_5;
  local_d0 = param_6;
  uStack_98 = uStack_f1;
  local_90 = param_8;
  local_88 = param_2;
  uStack_80 = param_3;
  local_78 = param_4;
  uStack_70 = param_5;
  local_68 = param_6;
  local_28 = param_8;
  FUN_1005646e8(&local_f0,auStack_190);
  FUN_10056471c(&local_88);
  param_1[9] = CONCAT71(uStack_a7,uStack_a8);
  param_1[8] = CONCAT71(local_af,uStack_b0);
  param_1[0xb] = CONCAT71(uStack_97,uStack_98);
  param_1[10] = CONCAT71(local_9f,uStack_a0);
  param_1[0xc] = local_90;
  param_1[1] = uStack_e8;
  *param_1 = local_f0;
  param_1[3] = uStack_d8;
  param_1[2] = local_e0;
  param_1[5] = CONCAT71(uStack_c7,uStack_c8);
  param_1[4] = CONCAT71(uStack_cf,local_d0);
  param_1[7] = CONCAT71(uStack_b7,uStack_b8);
  param_1[6] = CONCAT71(local_bf,uStack_c0);
  return;
}



/* Address: 0x10055f15c | FUN_10055f15c */

void FUN_10055f15c(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x746e65746e6f63;
  if (bVar4 != 3) {
    pcVar3 = (char *)0x6174656d5f;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar4 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x656c6f72;
  if (bVar4 != 2) {
    pcVar2 = pcVar3;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar1;
  }
  pcVar3 = (char *)0x6c65646f6d;
  if (bVar4 != 0) {
    pcVar3 = (char *)0x73616552706f7473;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4 != 0) {
    puVar1 = (undefined1 *)0xea00000000006e6f;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055f230 | FUN_10055f230 */

void FUN_10055f230(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar5 = *unaff_x20;
  pcVar3 = (char *)0x746e65746e6f63;
  if (bVar5 != 3) {
    pcVar3 = (char *)0x6174656d5f;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x656c6f72;
  if (bVar5 != 2) {
    pcVar2 = pcVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  pcVar3 = (char *)0x6c65646f6d;
  if (bVar5 != 0) {
    pcVar3 = (char *)0x73616552706f7473;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar1 = (undefined1 *)0xea00000000006e6f;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar2;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x10055f2e0 | FUN_10055f2e0 */

void FUN_10055f2e0(__int64 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x746e65746e6f63;
  if (bVar4 != 3) {
    pcVar3 = (char *)0x6174656d5f;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar4 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x656c6f72;
  if (bVar4 != 2) {
    pcVar2 = pcVar3;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar1;
  }
  pcVar3 = (char *)0x6c65646f6d;
  if (bVar4 != 0) {
    pcVar3 = (char *)0x73616552706f7473;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4 != 0) {
    puVar1 = (undefined1 *)0xea00000000006e6f;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055f3b0 | FUN_10055f3b0 */

void FUN_10055f3b0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005647c8(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10055f3dc | FUN_10055f3dc */

void FUN_10055f3dc(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar3 = 0x746e65746e6f63;
  if (bVar5 != 3) {
    uVar3 = 0x6174656d5f;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  uVar2 = 0x656c6f72;
  if (bVar5 != 2) {
    uVar2 = uVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  uVar3 = 0x6c65646f6d;
  if (bVar5 != 0) {
    uVar3 = 0x73616552706f7473;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar1 = (undefined1 *)0xea00000000006e6f;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x10055f470 | FUN_10055f470 */

undefined1  [16] FUN_10055f470(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar3 = 0x746e65746e6f63;
  if (bVar5 != 3) {
    uVar3 = 0x6174656d5f;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e500000000000000;
  }
  uVar2 = 0x656c6f72;
  if (bVar5 != 2) {
    uVar2 = uVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  uVar3 = 0x6c65646f6d;
  if (bVar5 != 0) {
    uVar3 = 0x73616552706f7473;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar5 != 0) {
    puVar1 = (undefined1 *)0xea00000000006e6f;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x10055f500 | FUN_10055f500 */

void FUN_10055f500(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005647c8();
  *param_1 = param_2;
  return;
}



/* Address: 0x10055f524 | FUN_10055f524 */

void FUN_10055f524(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd0210;
  FUN_1000f7830(&DAT_100fd0210,&DAT_100c5a2c0);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10055f564 | FUN_10055f564 */

String FUN_10055f564(void)

{
  String SVar1;
  
  FUN_100564748();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055f58c | FUN_10055f58c */

String FUN_10055f58c(void)

{
  String SVar1;
  
  FUN_100564748();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055f5b4 | FUN_10055f5b4 */

void FUN_10055f5b4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  ulong local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcfbe0;
  FUN_1000f7830(&DAT_100fcfbe0,&BYTE_100c588a8);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100564748();
  Swift::Encoder::_container();
  uVar2 = *unaff_x20;
  local_90 = local_90 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[1],&local_90,puVar1);
  if (unaff_x21 == 0) {
    uStack_88 = unaff_x20[3];
    local_90 = unaff_x20[2];
    local_51 = 1;
    FUN_100564788();
    puVar3 = &local_90;
    Swift::KeyedEncodingContainer::_encodeIfPresent(puVar3,&local_51,puVar1,&DAT_100edf680,uVar2);
    local_90 = CONCAT71(local_90._1_7_,*(undefined1 *)(unaff_x20 + 4));
    local_51 = 2;
    FUN_10056250c();
    puVar4 = &local_90;
    Swift::KeyedEncodingContainer::_encode(puVar4,&local_51,puVar1,&DAT_100edf350,puVar3);
    uStack_88 = unaff_x20[6];
    local_90 = unaff_x20[5];
    uStack_78 = unaff_x20[8];
    uStack_80 = unaff_x20[7];
    uStack_68 = unaff_x20[10];
    local_70 = unaff_x20[9];
    local_60 = *(undefined1 *)(unaff_x20 + 0xb);
    local_51 = 3;
    FUN_10056254c();
    puVar3 = &local_90;
    Swift::KeyedEncodingContainer::_encode(puVar3,&local_51,puVar1,&DAT_100edf3e0,puVar4);
    local_90 = unaff_x20[0xc];
    local_51 = 4;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_90,&local_51,puVar1,&DAT_100edcda0,puVar3);
  }
  (**(code **)(lVar5 + 8))((long)&local_90 - extraout_x8,puVar1);
  return;
}



/* Address: 0x10055f7b8 | FUN_10055f7b8 */

void FUN_10055f7b8(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_10056482c(&local_88);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_40;
    param_1[8] = local_48;
    param_1[0xb] = uStack_30;
    param_1[10] = local_38;
    param_1[0xc] = local_28;
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[3] = uStack_70;
    param_1[2] = local_78;
    param_1[5] = uStack_60;
    param_1[4] = local_68;
    param_1[7] = uStack_50;
    param_1[6] = local_58;
  }
  return;
}



/* Address: 0x10055f814 | thunk_FUN_100560fcc */

void thunk_FUN_100560fcc(void)

{
  FUN_100560fcc();
  return;
}



/* Address: 0x10055f818 | FUN_10055f818 */

void FUN_10055f818(Hasher param_1)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  bool bVar4;
  __uint64 _Var5;
  Hasher HVar6;
  Hasher HVar7;
  undefined1 *puVar8;
  String *unaff_x20;
  char *pcVar9;
  void *pvVar10;
  char *pcVar11;
  char *pcVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  HVar6.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  pvVar10 = unaff_x20[1].bridgeObject;
  if (pvVar10 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar6);
  }
  else {
    pcVar11 = unaff_x20[1].str;
    Swift::Hasher::_combine(1,HVar6);
    SVar13.bridgeObject = pvVar10;
    SVar13.str = pcVar11;
    Swift::String::hash(param_1,SVar13);
  }
  bVar4 = *(char *)&unaff_x20[2].str != '\x01';
  HVar6.unknown = (char *)0x6e61747369737361;
  if (bVar4) {
    HVar6.unknown = (char *)0x72657375;
  }
  puVar8 = (undefined1 *)0xe900000000000074;
  if (bVar4) {
    puVar8 = &DAT_e400000000000000;
  }
  SVar14.bridgeObject = puVar8;
  SVar14.str = HVar6.unknown;
  Swift::String::hash(param_1,SVar14);
  _swift_bridgeObjectRelease(puVar8);
  pcVar11 = unaff_x20[2].bridgeObject;
  bVar3 = *(byte *)&unaff_x20[5].bridgeObject;
  if ((char)bVar3 < '\0') {
    Swift::Hasher::_combine(1,HVar6);
    FUN_1004d7c74(param_1.unknown);
    pcVar9 = unaff_x20[6].str;
    HVar6.unknown = pcVar11;
    goto joined_r0x00010055f960;
  }
  pcVar9 = unaff_x20[3].str;
  pcVar2 = unaff_x20[3].bridgeObject;
  pcVar1 = unaff_x20[4].str;
  SVar13 = *(String *)&unaff_x20[3].bridgeObject;
  HVar7.unknown = unaff_x20[4].bridgeObject;
  pcVar12 = unaff_x20[5].str;
  Swift::Hasher::_combine(0,HVar6);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      _Var5 = 1;
      goto LAB_10055fa10;
    }
    Swift::Hasher::_combine(0,HVar6);
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 == 3) {
        Swift::Hasher::_combine(3,HVar6);
        SVar15.bridgeObject = pcVar9;
        SVar15.str = pcVar11;
        Swift::String::hash(param_1,SVar15);
        Swift::String::hash(param_1,SVar13);
        FUN_1004df778(param_1.unknown);
        if (pcVar12 == (char *)0x0) {
          Swift::Hasher::_combine(0,HVar7);
          pcVar9 = unaff_x20[6].str;
          HVar6.unknown = HVar7.unknown;
        }
        else {
          Swift::Hasher::_combine(1,HVar7);
          FUN_1004df778(param_1.unknown);
          pcVar9 = unaff_x20[6].str;
          HVar6.unknown = pcVar12;
        }
      }
      else {
        Swift::Hasher::_combine(4,HVar6);
        FUN_10055be0c(param_1.unknown);
        pcVar9 = unaff_x20[6].str;
      }
      goto joined_r0x00010055f960;
    }
    _Var5 = 2;
LAB_10055fa10:
    Swift::Hasher::_combine(_Var5,HVar6);
    SVar16.bridgeObject = pcVar9;
    SVar16.str = pcVar11;
    Swift::String::hash(param_1,SVar16);
    pcVar11 = pcVar2;
    pcVar9 = pcVar1;
  }
  SVar17.bridgeObject = pcVar9;
  SVar17.str = pcVar11;
  Swift::String::hash(param_1,SVar17);
  pcVar9 = unaff_x20[6].str;
  HVar6.unknown = pcVar11;
joined_r0x00010055f960:
  if (pcVar9 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar6);
    FUN_1004df778(param_1.unknown,pcVar9);
    return;
  }
  Swift::Hasher::_combine(0,HVar6);
  return;
}



/* Address: 0x10055fa8c | FUN_10055fa8c */

void FUN_10055fa8c(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_10055f818();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055fac8 | thunk_FUN_10055f818 */

void thunk_FUN_10055f818(void)

{
  FUN_10055f818();
  return;
}



/* Address: 0x10055facc | FUN_10055facc */

void FUN_10055facc(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10055f818();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055fb04 | FUN_10055fb04 */

void FUN_10055fb04(void)

{
  FUN_10055f5b4();
  return;
}


