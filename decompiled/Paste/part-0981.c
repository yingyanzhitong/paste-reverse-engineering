/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a7d08c | FUN_100a7d08c */

void FUN_100a7d08c(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6461657270;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64616572;
  }
  HVar3.unknown = &DAT_e500000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e400000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100a7d100 | FUN_100a7d100 */

void FUN_100a7d100(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6461657270;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x64616572;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x100a7d150 | FUN_100a7d150 */

void FUN_100a7d150(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6461657270;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64616572;
  }
  HVar3.unknown = &DAT_e500000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e400000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100a7d1c0 | FUN_100a7d1c0 */

void FUN_100a7d1c0(void)

{
  FUN_100a7d400();
  return;
}



/* Address: 0x100a7d1cc | FUN_100a7d1cc */

void FUN_100a7d1cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x6461657270;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64616572;
  }
  puVar2 = &DAT_e500000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100a7d200 | FUN_100a7d200 */

void FUN_100a7d200(undefined8 param_1,undefined8 param_2)

{
  FUN_100a7d20c(param_1,param_2,0x100ff6f50);
  return;
}



/* Address: 0x100a7d20c | FUN_100a7d20c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100a7d24c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_100a7d20c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_1000f7830(&DAT_100ff6f40,&DAT_100c91fe8);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x100a7d280 | FUN_100a7d280 */

undefined1  [16] FUN_100a7d280(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x657469727770;
  if (param_1 != '\x01') {
    uVar1 = 0x6574697277;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100a7d2b4 | FUN_100a7d2b4 */

void FUN_100a7d2b4(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x657469727770;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x6574697277;
  }
  HVar3.unknown = &DAT_e600000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100a7d32c | FUN_100a7d32c */

void FUN_100a7d32c(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x657469727770;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x6574697277;
  }
  puVar2 = &DAT_e600000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x100a7d380 | FUN_100a7d380 */

void FUN_100a7d380(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x657469727770;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x6574697277;
  }
  HVar3.unknown = &DAT_e600000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100a7d3f4 | FUN_100a7d3f4 */

void FUN_100a7d3f4(void)

{
  FUN_100a7d400();
  return;
}



/* Address: 0x100a7d400 | FUN_100a7d400 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100a7d440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100a7d400(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000f7830(&DAT_100ff6f40,&DAT_100c91fe8);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a7d478 | FUN_100a7d478 */

void FUN_100a7d478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x657469727770;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6574697277;
  }
  puVar2 = &DAT_e600000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100a7d4b0 | FUN_100a7d4b0 */

void FUN_100a7d4b0(undefined8 *param_1)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100a82d5c(&local_68);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  param_1[8] = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x100a7d4fc | FUN_100a7d4fc */

void FUN_100a7d4fc(undefined8 *param_1)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100a7e9f4(&local_68);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  param_1[8] = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x100a7d548 | FUN_100a7d548 */

void FUN_100a7d548(undefined8 *param_1)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100a7ed30(&local_68);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  param_1[8] = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x100a7d594 | FUN_100a7d594 */

void FUN_100a7d594(undefined8 *param_1,char *param_2,_StringGuts param_3,char *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 *puVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_148 [72];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_98 = 0;
  local_90 = 0xe000000000000000;
  pcVar5 = param_4;
  puVar6 = param_5;
  Swift::_StringGuts::grow(0x27,param_3);
  _swift_bridgeObjectRelease(local_90);
  local_98 = 0xd000000000000023;
  local_90 = 0x8000000100db9350;
  SVar7.bridgeObject = param_3.unknown;
  SVar7.str = param_2;
  SVar9.bridgeObject = puVar6;
  SVar9.str = pcVar5;
  Swift::String::append(SVar7,SVar9);
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x2e27;
  puVar3 = (undefined8 *)0x2e27;
  SVar10.bridgeObject = puVar6;
  SVar10.str = pcVar5;
  Swift::String::append(SVar8,SVar10);
  uVar2 = local_90;
  uVar1 = local_98;
  FUN_100a57a58();
  puVar4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
  *puVar3 = 0x727473666e6f63;
  puVar3[1] = &DAT_e700000000000000;
  *(int *)(puVar3 + 2) = (int)param_4;
  uStack_e8 = param_5[1];
  uStack_f0 = *param_5;
  uStack_f8 = param_5[3];
  local_100 = param_5[2];
  local_a0 = param_5[4];
  local_e0 = 7;
  uStack_d8 = uVar1;
  uStack_d0 = uVar2;
  local_98 = CONCAT71(local_98._1_7_,7);
  local_90 = uVar1;
  uStack_88 = uVar2;
  local_c8 = puVar4;
  local_c0 = uStack_f0;
  uStack_b8 = uStack_e8;
  uStack_b0 = local_100;
  uStack_a8 = uStack_f8;
  local_80 = puVar4;
  local_78 = uStack_f0;
  uStack_70 = uStack_e8;
  local_68 = local_100;
  uStack_60 = uStack_f8;
  local_58 = local_a0;
  FUN_10000ca28(&uStack_f0,auStack_148);
  FUN_10000ca28(&local_100,auStack_148);
  FUN_100a50050(&local_e0,auStack_148);
  FUN_100a5008c(&local_98);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x100a7d6f0 | FUN_100a7d6f0 */

void FUN_100a7d6f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100a80a18(&local_68,0x6c696679706f6366,0xe900000000000065,param_2,param_3,param_4,param_5);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  param_1[8] = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x100a7d764 | FUN_100a7d764 */

void FUN_100a7d764(undefined8 *param_1,int param_2,_StringGuts param_3,char *param_4,
                  undefined8 *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  char *pcVar9;
  undefined8 *puVar10;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined1 auStack_158 [72];
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puVar8;
  
  pcVar9 = param_4;
  puVar10 = param_5;
  if (param_2 == 0xc) {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3a,param_3);
    pcVar1 = "Insufficient memory to read from \'";
    pcVar4 = (char *)0xd000000000000022;
  }
  else {
    if (param_2 != 5) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      _Var7.unknown = param_3.unknown;
      Swift::_StringGuts::grow(0x22,param_3);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = 0xd000000000000016;
      local_c0 = 0x8000000100db9380;
      FUN_1005b32e4();
      SVar16.bridgeObject = _Var7.unknown;
      SVar16.str = param_3.unknown;
      SVar25.bridgeObject = puVar10;
      SVar25.str = pcVar9;
      Swift::String::append(SVar16,SVar25);
      _swift_bridgeObjectRelease(_Var7.unknown);
      SVar17.bridgeObject = &DAT_e600000000000000;
      SVar17.str = (char *)0x27206f742027;
      puVar8 = &DAT_e600000000000000;
      SVar26.bridgeObject = puVar10;
      SVar26.str = pcVar9;
      Swift::String::append(SVar17,SVar26);
      FUN_1005b32e4();
      SVar18.bridgeObject = puVar8;
      SVar18.str = param_4;
      SVar27.bridgeObject = puVar10;
      SVar27.str = pcVar9;
      Swift::String::append(SVar18,SVar27);
      _swift_bridgeObjectRelease(puVar8);
      SVar19.bridgeObject = &SUB_e200000000000000;
      SVar19.str = (char *)0x2e27;
      puVar5 = (undefined8 *)0x2e27;
      SVar28.bridgeObject = puVar10;
      SVar28.str = pcVar9;
      Swift::String::append(SVar19,SVar28);
      local_110 = 8;
      goto LAB_100a7d924;
    }
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x42,param_3);
    pcVar1 = "An I/O error occurred while reading from \'";
    pcVar4 = (char *)0xd00000000000002a;
  }
  SVar11.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar11.str = pcVar4;
  SVar20.bridgeObject = puVar10;
  SVar20.str = pcVar9;
  Swift::String::append(SVar11,SVar20);
  FUN_1005b32e4();
  SVar12.bridgeObject = SVar11.bridgeObject;
  SVar12.str = param_3.unknown;
  SVar21.bridgeObject = puVar10;
  SVar21.str = pcVar9;
  Swift::String::append(SVar12,SVar21);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar11.bridgeObject = (void *)0x8000000100db93d0;
  SVar13.bridgeObject = (void *)0x8000000100db93d0;
  SVar13.str = (char *)0xd000000000000012;
  SVar22.bridgeObject = puVar10;
  SVar22.str = pcVar9;
  Swift::String::append(SVar13,SVar22);
  FUN_1005b32e4();
  SVar14.bridgeObject = SVar11.bridgeObject;
  SVar14.str = param_4;
  SVar23.bridgeObject = puVar10;
  SVar23.str = pcVar9;
  Swift::String::append(SVar14,SVar23);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar15.bridgeObject = &SUB_e200000000000000;
  SVar15.str = (char *)0x2e27;
  puVar5 = (undefined8 *)0x2e27;
  SVar24.bridgeObject = puVar10;
  SVar24.str = pcVar9;
  Swift::String::append(SVar15,SVar24);
  local_110 = 2;
LAB_100a7d924:
  uVar3 = local_c0;
  uVar2 = local_c8;
  FUN_100a57a58();
  puVar6 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar5,0,0);
  *puVar5 = 0x656c6966646e6573;
  puVar5[1] = &DAT_e800000000000000;
  *(int *)(puVar5 + 2) = param_2;
  uStack_e8 = param_5[1];
  local_f0 = *param_5;
  uStack_d8 = param_5[3];
  uStack_e0 = param_5[2];
  local_d0 = param_5[4];
  uStack_108 = uVar2;
  uStack_100 = uVar3;
  local_c8 = CONCAT71(local_c8._1_7_,local_110);
  local_c0 = uVar2;
  uStack_b8 = uVar3;
  local_f8 = puVar6;
  local_b0 = puVar6;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = CONCAT71(uStack_10f,local_110);
  param_1[3] = local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a7d9f8 | FUN_100a7d9f8 */

void FUN_100a7d9f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 in_stack_00000000;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100a83074(&local_68,param_2,param_3,in_stack_00000000);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  param_1[8] = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x100a7da48 | FUN_100a7da48 */

void FUN_100a7da48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
                  char *param_5,undefined8 *param_6)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  _StringGuts _Var6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  undefined1 auStack_168 [72];
  int local_120;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  local_d8 = param_4;
  _swift_errorRetain(param_4);
  pcVar4 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar8 = &DAT_100ee42f8;
  iVar3 = (int)&local_120;
  _Var6.unknown = (undefined *)&local_d8;
  _swift_dynamicCast();
  iVar2 = local_120;
  if (iVar3 == 0) {
    local_d8 = (undefined *)0x0;
    local_d0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x21,_Var6);
    _swift_bridgeObjectRelease(local_d0);
    local_d8 = (undefined *)0xd00000000000001d;
    local_d0 = (undefined *)0x8000000100dba910;
    FUN_1005b32e4();
    SVar14.bridgeObject = _Var6.unknown;
    SVar14.str = param_5;
    SVar41.bridgeObject = puVar8;
    SVar41.str = pcVar4;
    Swift::String::append(SVar14,SVar41);
    _swift_bridgeObjectRelease(_Var6.unknown);
    SVar15.bridgeObject = &SUB_e200000000000000;
    SVar15.str = (char *)0x2e27;
    SVar42.bridgeObject = puVar8;
    SVar42.str = pcVar4;
    Swift::String::append(SVar15,SVar42);
    puVar9 = local_d0;
    puVar8 = local_d8;
    _swift_errorRetain(param_4);
    uVar10 = 8;
    goto LAB_100a7e054;
  }
  if (local_120 < 0xd) {
    if (local_120 < 5) {
      if (local_120 == 1) goto LAB_100a7dda0;
      if (local_120 == 2) {
        local_d8 = (undefined *)0x0;
        local_d0 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x86,_Var6);
        pvVar7 = (void *)0x8000000100dba130;
        SVar16.bridgeObject = (void *)0x8000000100dba130;
        SVar16.str = (char *)0xd000000000000027;
        SVar43.bridgeObject = puVar8;
        SVar43.str = pcVar4;
        Swift::String::append(SVar16,SVar43);
        FUN_1005b32e4();
        SVar17.bridgeObject = pvVar7;
        SVar17.str = param_5;
        SVar44.bridgeObject = puVar8;
        SVar44.str = pcVar4;
        Swift::String::append(SVar17,SVar44);
        _swift_bridgeObjectRelease(pvVar7);
        pcVar1 = 
        "\', either a component of the path did not exist or the named file to be opened did not exist."
        ;
        pcVar5 = (char *)0xd00000000000005d;
        goto LAB_100a7df18;
      }
LAB_100a7dfb8:
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x21,_Var6);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = (undefined *)0xd00000000000001d;
      local_d0 = (undefined *)0x8000000100dba910;
      FUN_1005b32e4();
      SVar36.bridgeObject = _Var6.unknown;
      SVar36.str = param_5;
      SVar63.bridgeObject = puVar8;
      SVar63.str = pcVar4;
      Swift::String::append(SVar36,SVar63);
      _swift_bridgeObjectRelease(_Var6.unknown);
      SVar37.bridgeObject = &SUB_e200000000000000;
      SVar37.str = (char *)0x2e27;
      pcVar5 = (char *)0x2e27;
      SVar64.bridgeObject = puVar8;
      SVar64.str = pcVar4;
      Swift::String::append(SVar37,SVar64);
      uVar10 = 8;
    }
    else if (local_120 == 5) {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x52,_Var6);
      pvVar7 = (void *)0x8000000100dba230;
      SVar27.bridgeObject = (void *)0x8000000100dba230;
      SVar27.str = (char *)0xd00000000000001f;
      SVar54.bridgeObject = puVar8;
      SVar54.str = pcVar4;
      Swift::String::append(SVar27,SVar54);
      FUN_1005b32e4();
      SVar28.bridgeObject = pvVar7;
      SVar28.str = param_5;
      SVar55.bridgeObject = puVar8;
      SVar55.str = pcVar4;
      Swift::String::append(SVar28,SVar55);
      _swift_bridgeObjectRelease(pvVar7);
      pcVar5 = (char *)0xd000000000000031;
      SVar29.bridgeObject = (void *)0x8000000100dbaa10;
      SVar29.str = (char *)0xd000000000000031;
      SVar56.bridgeObject = puVar8;
      SVar56.str = pcVar4;
      Swift::String::append(SVar29,SVar56);
      uVar10 = 2;
    }
    else {
      if (local_120 != 9) goto LAB_100a7dfb8;
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x3b,_Var6);
      pvVar7 = (void *)0x8000000100dba910;
      SVar18.bridgeObject = (void *)0x8000000100dba910;
      SVar18.str = (char *)0xd00000000000001d;
      SVar45.bridgeObject = puVar8;
      SVar45.str = pcVar4;
      Swift::String::append(SVar18,SVar45);
      FUN_1005b32e4();
      SVar19.bridgeObject = pvVar7;
      SVar19.str = param_5;
      SVar46.bridgeObject = puVar8;
      SVar46.str = pcVar4;
      Swift::String::append(SVar19,SVar46);
      _swift_bridgeObjectRelease(pvVar7);
      pcVar5 = (char *)0xd00000000000001c;
      SVar20.bridgeObject = (void *)0x8000000100dbaa70;
      SVar20.str = (char *)0xd00000000000001c;
      SVar47.bridgeObject = puVar8;
      SVar47.str = pcVar4;
      Swift::String::append(SVar20,SVar47);
      uVar10 = 0;
    }
  }
  else if (local_120 < 0x14) {
    if (local_120 == 0xd) {
LAB_100a7dda0:
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x35,_Var6);
      pvVar7 = (void *)0x8000000100dba910;
      SVar24.bridgeObject = (void *)0x8000000100dba910;
      SVar24.str = (char *)0xd00000000000001d;
      SVar51.bridgeObject = puVar8;
      SVar51.str = pcVar4;
      Swift::String::append(SVar24,SVar51);
      FUN_1005b32e4();
      SVar25.bridgeObject = pvVar7;
      SVar25.str = param_5;
      SVar52.bridgeObject = puVar8;
      SVar52.str = pcVar4;
      Swift::String::append(SVar25,SVar52);
      _swift_bridgeObjectRelease(pvVar7);
      pcVar5 = (char *)0xd000000000000016;
      SVar26.bridgeObject = (void *)0x8000000100dbaa50;
      SVar26.str = (char *)0xd000000000000016;
      SVar53.bridgeObject = puVar8;
      SVar53.str = pcVar4;
      Swift::String::append(SVar26,SVar53);
      uVar10 = 3;
    }
    else {
      if (local_120 != 0x11) goto LAB_100a7dfb8;
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x9e,_Var6);
      pvVar7 = (void *)0x8000000100dba230;
      SVar21.bridgeObject = (void *)0x8000000100dba230;
      SVar21.str = (char *)0xd00000000000001f;
      SVar48.bridgeObject = puVar8;
      SVar48.str = pcVar4;
      Swift::String::append(SVar21,SVar48);
      FUN_1005b32e4();
      SVar22.bridgeObject = pvVar7;
      SVar22.str = param_5;
      SVar49.bridgeObject = puVar8;
      SVar49.str = pcVar4;
      Swift::String::append(SVar22,SVar49);
      _swift_bridgeObjectRelease(pvVar7);
      pcVar5 = (char *)0xd00000000000007d;
      SVar23.bridgeObject = (void *)0x8000000100dba250;
      SVar23.str = (char *)0xd00000000000007d;
      SVar50.bridgeObject = puVar8;
      SVar50.str = pcVar4;
      Swift::String::append(SVar23,SVar50);
      uVar10 = 10;
    }
  }
  else if (local_120 == 0x14) {
    local_d8 = (undefined *)0x0;
    local_d0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x66,_Var6);
    pvVar7 = (void *)0x8000000100dba130;
    SVar30.bridgeObject = (void *)0x8000000100dba130;
    SVar30.str = (char *)0xd000000000000027;
    SVar57.bridgeObject = puVar8;
    SVar57.str = pcVar4;
    Swift::String::append(SVar30,SVar57);
    FUN_1005b32e4();
    SVar31.bridgeObject = pvVar7;
    SVar31.str = param_5;
    SVar58.bridgeObject = puVar8;
    SVar58.str = pcVar4;
    Swift::String::append(SVar31,SVar58);
    _swift_bridgeObjectRelease(pvVar7);
    pcVar1 = "\', an intermediate component of the path was not a directory.";
    pcVar5 = (char *)0xd00000000000003d;
LAB_100a7df18:
    SVar32.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    SVar32.str = pcVar5;
    SVar59.bridgeObject = puVar8;
    SVar59.str = pcVar4;
    Swift::String::append(SVar32,SVar59);
    uVar10 = 5;
  }
  else if (local_120 == 0x18) {
    local_d8 = (undefined *)0x0;
    local_d0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x45,_Var6);
    pvVar7 = (void *)0x8000000100dba910;
    SVar33.bridgeObject = (void *)0x8000000100dba910;
    SVar33.str = (char *)0xd00000000000001d;
    SVar60.bridgeObject = puVar8;
    SVar60.str = pcVar4;
    Swift::String::append(SVar33,SVar60);
    FUN_1005b32e4();
    SVar34.bridgeObject = pvVar7;
    SVar34.str = param_5;
    SVar61.bridgeObject = puVar8;
    SVar61.str = pcVar4;
    Swift::String::append(SVar34,SVar61);
    _swift_bridgeObjectRelease(pvVar7);
    pcVar5 = (char *)0xd000000000000026;
    SVar35.bridgeObject = (void *)0x8000000100dba9e0;
    SVar35.str = (char *)0xd000000000000026;
    SVar62.bridgeObject = puVar8;
    SVar62.str = pcVar4;
    Swift::String::append(SVar35,SVar62);
    uVar10 = 7;
  }
  else {
    if (local_120 != 0x3e) goto LAB_100a7dfb8;
    local_d8 = (undefined *)0x0;
    local_d0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x69,_Var6);
    pvVar7 = (void *)0x8000000100dba930;
    SVar11.bridgeObject = (void *)0x8000000100dba930;
    SVar11.str = (char *)0xd000000000000019;
    SVar38.bridgeObject = puVar8;
    SVar38.str = pcVar4;
    Swift::String::append(SVar11,SVar38);
    FUN_1005b32e4();
    SVar12.bridgeObject = pvVar7;
    SVar12.str = param_5;
    SVar39.bridgeObject = puVar8;
    SVar39.str = pcVar4;
    Swift::String::append(SVar12,SVar39);
    _swift_bridgeObjectRelease(pvVar7);
    pcVar5 = (char *)0xd00000000000004e;
    SVar13.bridgeObject = (void *)0x8000000100dba950;
    SVar13.str = (char *)0xd00000000000004e;
    SVar40.bridgeObject = puVar8;
    SVar40.str = pcVar4;
    Swift::String::append(SVar13,SVar40);
    uVar10 = 1;
  }
  puVar9 = local_d0;
  puVar8 = local_d8;
  FUN_100a57a58();
  param_4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,pcVar5,0,0);
  *(undefined8 *)pcVar5 = param_2;
  *(undefined8 *)(pcVar5 + 8) = param_3;
  *(int *)(pcVar5 + 0x10) = iVar2;
  _swift_bridgeObjectRetain(param_3);
LAB_100a7e054:
  uStack_f8 = param_6[1];
  local_100 = *param_6;
  uStack_e8 = param_6[3];
  uStack_f0 = param_6[2];
  local_e0 = param_6[4];
  local_120 = CONCAT31(local_120._1_3_,uVar10);
  local_d8 = (undefined *)CONCAT71(local_d8._1_7_,uVar10);
  puStack_118 = puVar8;
  uStack_110 = puVar9;
  local_108 = param_4;
  local_d0 = puVar8;
  uStack_c8 = puVar9;
  local_c0 = param_4;
  local_b8 = local_100;
  uStack_b0 = uStack_f8;
  local_a8 = uStack_f0;
  uStack_a0 = uStack_e8;
  local_98 = local_e0;
  local_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = local_100;
  uStack_78 = uStack_f8;
  FUN_10000ca28(&uStack_80,auStack_168);
  FUN_10000ca28(&local_90,auStack_168);
  FUN_100a50050(&local_120,auStack_168);
  FUN_100a5008c(&local_d8);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = local_e0;
  param_1[1] = puStack_118;
  *param_1 = CONCAT44(uStack_11c,local_120);
  param_1[3] = local_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100a7e0f0 | FUN_100a7e0f0 */

void FUN_100a7e0f0(undefined8 *param_1,undefined *param_2,char *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  _StringGuts _Var5;
  void *pvVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 uVar9;
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
  String SVar22;
  String SVar23;
  undefined1 auStack_158 [72];
  int local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  local_c8 = param_2;
  _swift_errorRetain();
  pcVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar7 = &DAT_100ee42f8;
  iVar2 = (int)&local_110;
  _Var5.unknown = (undefined *)&local_c8;
  _swift_dynamicCast();
  iVar1 = local_110;
  if (iVar2 == 0) {
    local_c8 = (undefined *)0x0;
    local_c0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x32,_Var5);
    _swift_bridgeObjectRelease(local_c0);
    local_c8 = (undefined *)0xd00000000000002e;
    local_c0 = (undefined *)0x8000000100db9890;
    FUN_1005b32e4();
    SVar13.bridgeObject = _Var5.unknown;
    SVar13.str = param_3;
    SVar20.bridgeObject = puVar7;
    SVar20.str = pcVar3;
    Swift::String::append(SVar13,SVar20);
    _swift_bridgeObjectRelease(_Var5.unknown);
    SVar14.bridgeObject = &SUB_e200000000000000;
    SVar14.str = (char *)0x2e27;
    SVar21.bridgeObject = puVar7;
    SVar21.str = pcVar3;
    Swift::String::append(SVar14,SVar21);
    uVar8 = local_c0;
    puVar7 = local_c8;
    _swift_errorRetain(param_2);
    uVar9 = 8;
  }
  else {
    if (local_110 == 9) {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x39,_Var5);
      pvVar6 = (void *)0x8000000100db98c0;
      SVar10.bridgeObject = (void *)0x8000000100db98c0;
      SVar10.str = (char *)0xd000000000000035;
      SVar17.bridgeObject = puVar7;
      SVar17.str = pcVar3;
      Swift::String::append(SVar10,SVar17);
      FUN_1005b32e4();
      SVar11.bridgeObject = pvVar6;
      SVar11.str = param_3;
      SVar18.bridgeObject = puVar7;
      SVar18.str = pcVar3;
      Swift::String::append(SVar11,SVar18);
      _swift_bridgeObjectRelease(pvVar6);
      SVar12.bridgeObject = &SUB_e200000000000000;
      SVar12.str = (char *)0x2e27;
      puVar4 = (undefined8 *)0x2e27;
      SVar19.bridgeObject = puVar7;
      SVar19.str = pcVar3;
      Swift::String::append(SVar12,SVar19);
      uVar9 = 0;
    }
    else {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x32,_Var5);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = (undefined *)0xd00000000000002e;
      local_c0 = (undefined *)0x8000000100db9890;
      FUN_1005b32e4();
      SVar15.bridgeObject = _Var5.unknown;
      SVar15.str = param_3;
      SVar22.bridgeObject = puVar7;
      SVar22.str = pcVar3;
      Swift::String::append(SVar15,SVar22);
      _swift_bridgeObjectRelease(_Var5.unknown);
      SVar16.bridgeObject = &SUB_e200000000000000;
      SVar16.str = (char *)0x2e27;
      puVar4 = (undefined8 *)0x2e27;
      SVar23.bridgeObject = puVar7;
      SVar23.str = pcVar3;
      Swift::String::append(SVar16,SVar23);
      uVar9 = 8;
    }
    uVar8 = local_c0;
    puVar7 = local_c8;
    FUN_100a57a58();
    param_2 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar4,0,0);
    *puVar4 = 0x707564;
    puVar4[1] = 0xe300000000000000;
    *(int *)(puVar4 + 2) = iVar1;
  }
  uStack_e8 = param_4[1];
  local_f0 = *param_4;
  uStack_d8 = param_4[3];
  uStack_e0 = param_4[2];
  local_d0 = param_4[4];
  local_110 = CONCAT31(local_110._1_3_,uVar9);
  local_c8 = (undefined *)CONCAT71(local_c8._1_7_,uVar9);
  uStack_108 = puVar7;
  uStack_100 = uVar8;
  local_f8 = param_2;
  local_c0 = puVar7;
  uStack_b8 = uVar8;
  local_b0 = param_2;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = CONCAT44(uStack_10c,local_110);
  param_1[3] = local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a7e384 | FUN_100a7e384 */

void FUN_100a7e384(undefined8 *param_1,undefined4 param_2,_StringGuts param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_148 [72];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_98 = 0;
  local_90 = 0xe000000000000000;
  _Var5.unknown = param_3.unknown;
  pcVar6 = param_4;
  Swift::_StringGuts::grow(0x29,param_3);
  _swift_bridgeObjectRelease(local_90);
  local_98 = 0xd000000000000025;
  local_90 = 0x8000000100dba8e0;
  FUN_1005b32e4();
  SVar7.bridgeObject = _Var5.unknown;
  SVar7.str = param_3.unknown;
  SVar9.bridgeObject = param_5;
  SVar9.str = pcVar6;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(_Var5.unknown);
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x2e27;
  puVar3 = (undefined8 *)0x2e27;
  SVar10.bridgeObject = param_5;
  SVar10.str = pcVar6;
  Swift::String::append(SVar8,SVar10);
  uVar2 = local_90;
  uVar1 = local_98;
  FUN_100a57a58();
  puVar4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
  *puVar3 = 0x72696464616572;
  puVar3[1] = &DAT_e700000000000000;
  *(undefined4 *)(puVar3 + 2) = param_2;
  uStack_e8 = *(undefined8 *)(param_4 + 8);
  uStack_f0 = *(undefined8 *)param_4;
  uStack_f8 = *(undefined8 *)(param_4 + 0x18);
  local_100 = *(undefined8 *)(param_4 + 0x10);
  local_a0 = *(undefined8 *)(param_4 + 0x20);
  local_e0 = 8;
  uStack_d8 = uVar1;
  uStack_d0 = uVar2;
  local_98 = CONCAT71(local_98._1_7_,8);
  local_90 = uVar1;
  uStack_88 = uVar2;
  local_c8 = puVar4;
  local_c0 = uStack_f0;
  uStack_b8 = uStack_e8;
  uStack_b0 = local_100;
  uStack_a8 = uStack_f8;
  local_80 = puVar4;
  local_78 = uStack_f0;
  uStack_70 = uStack_e8;
  local_68 = local_100;
  uStack_60 = uStack_f8;
  local_58 = local_a0;
  FUN_10000ca28(&uStack_f0,auStack_148);
  FUN_10000ca28(&local_100,auStack_148);
  FUN_100a50050(&local_e0,auStack_148);
  FUN_100a5008c(&local_98);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x100a7e4e8 | FUN_100a7e4e8 */

void FUN_100a7e4e8(undefined8 *param_1,undefined4 param_2,_StringGuts param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_148 [72];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  local_98 = 0;
  local_90 = 0xe000000000000000;
  _Var5.unknown = param_3.unknown;
  pcVar6 = param_4;
  Swift::_StringGuts::grow(0x23,param_3);
  _swift_bridgeObjectRelease(local_90);
  local_98 = 0xd00000000000001f;
  local_90 = 0x8000000100dba8c0;
  FUN_1005b32e4();
  SVar7.bridgeObject = _Var5.unknown;
  SVar7.str = param_3.unknown;
  SVar9.bridgeObject = param_5;
  SVar9.str = pcVar6;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(_Var5.unknown);
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x2e27;
  puVar3 = (undefined8 *)0x2e27;
  SVar10.bridgeObject = param_5;
  SVar10.str = pcVar6;
  Swift::String::append(SVar8,SVar10);
  uVar2 = local_90;
  uVar1 = local_98;
  FUN_100a57a58();
  puVar4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
  *puVar3 = 0x646165725f737466;
  puVar3[1] = &DAT_e800000000000000;
  *(undefined4 *)(puVar3 + 2) = param_2;
  uStack_e8 = *(undefined8 *)(param_4 + 8);
  uStack_f0 = *(undefined8 *)param_4;
  uStack_f8 = *(undefined8 *)(param_4 + 0x18);
  local_100 = *(undefined8 *)(param_4 + 0x10);
  local_a0 = *(undefined8 *)(param_4 + 0x20);
  local_e0 = 8;
  uStack_d8 = uVar1;
  uStack_d0 = uVar2;
  local_98 = CONCAT71(local_98._1_7_,8);
  local_90 = uVar1;
  uStack_88 = uVar2;
  local_c8 = puVar4;
  local_c0 = uStack_f0;
  uStack_b8 = uStack_e8;
  uStack_b0 = local_100;
  uStack_a8 = uStack_f8;
  local_80 = puVar4;
  local_78 = uStack_f0;
  uStack_70 = uStack_e8;
  local_68 = local_100;
  uStack_60 = uStack_f8;
  local_58 = local_a0;
  FUN_10000ca28(&uStack_f0,auStack_148);
  FUN_10000ca28(&local_100,auStack_148);
  FUN_100a50050(&local_e0,auStack_148);
  FUN_100a5008c(&local_98);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[8] = local_a0;
  param_1[1] = uStack_d8;
  *param_1 = CONCAT71(uStack_df,local_e0);
  param_1[3] = local_c8;
  param_1[2] = uStack_d0;
  return;
}



/* Address: 0x100a7e64c | FUN_100a7e64c */

void FUN_100a7e64c(undefined8 *param_1,char param_2,undefined *param_3,char *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  _StringGuts _Var7;
  void *pvVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined1 uVar11;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined1 auStack_168 [72];
  int local_120;
  undefined4 uStack_11c;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  local_d8 = param_3;
  _swift_errorRetain(param_3);
  pcVar5 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar9 = &DAT_100ee42f8;
  iVar4 = (int)&local_120;
  _Var7.unknown = (undefined *)&local_d8;
  _swift_dynamicCast();
  iVar3 = local_120;
  if (iVar4 == 0) {
    local_d8 = (undefined *)0x0;
    local_d0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var7);
    _swift_bridgeObjectRelease(local_d0);
    local_d8 = (undefined *)0xd00000000000001a;
    local_d0 = (undefined *)0x8000000100dba810;
    FUN_1005b32e4();
    SVar14.bridgeObject = _Var7.unknown;
    SVar14.str = param_4;
    SVar25.bridgeObject = puVar9;
    SVar25.str = pcVar5;
    Swift::String::append(SVar14,SVar25);
    _swift_bridgeObjectRelease(_Var7.unknown);
    SVar15.bridgeObject = &SUB_e200000000000000;
    SVar15.str = (char *)0x2e27;
    SVar26.bridgeObject = puVar9;
    SVar26.str = pcVar5;
    Swift::String::append(SVar15,SVar26);
    uVar10 = local_d0;
    puVar9 = local_d8;
    _swift_errorRetain(param_3);
    uVar11 = 8;
  }
  else {
    if (local_120 == 5) {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x5a,_Var7);
      pvVar8 = (void *)0x8000000100dba830;
      SVar18.bridgeObject = (void *)0x8000000100dba830;
      SVar18.str = (char *)0xd00000000000001b;
      SVar29.bridgeObject = puVar9;
      SVar29.str = pcVar5;
      Swift::String::append(SVar18,SVar29);
      FUN_1005b32e4();
      SVar19.bridgeObject = pvVar8;
      SVar19.str = param_4;
      SVar30.bridgeObject = puVar9;
      SVar30.str = pcVar5;
      Swift::String::append(SVar19,SVar30);
      _swift_bridgeObjectRelease(pvVar8);
      puVar6 = (undefined8 *)0xd00000000000003d;
      SVar20.bridgeObject = (void *)0x8000000100dba850;
      SVar20.str = (char *)0xd00000000000003d;
      SVar31.bridgeObject = puVar9;
      SVar31.str = pcVar5;
      Swift::String::append(SVar20,SVar31);
      uVar11 = 2;
    }
    else if (local_120 == 0x1d) {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1b,_Var7);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = (undefined *)0xd000000000000017;
      local_d0 = (undefined *)0x8000000100db96c0;
      FUN_1005b32e4();
      SVar16.bridgeObject = _Var7.unknown;
      SVar16.str = param_4;
      SVar27.bridgeObject = puVar9;
      SVar27.str = pcVar5;
      Swift::String::append(SVar16,SVar27);
      _swift_bridgeObjectRelease(_Var7.unknown);
      SVar17.bridgeObject = &SUB_e200000000000000;
      SVar17.str = (char *)0x2e27;
      puVar6 = (undefined8 *)0x2e27;
      SVar28.bridgeObject = puVar9;
      SVar28.str = pcVar5;
      Swift::String::append(SVar17,SVar28);
      uVar11 = 9;
    }
    else if (local_120 == 9) {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x25,_Var7);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = (undefined *)0xd000000000000021;
      local_d0 = (undefined *)0x8000000100dba890;
      FUN_1005b32e4();
      SVar12.bridgeObject = _Var7.unknown;
      SVar12.str = param_4;
      SVar23.bridgeObject = puVar9;
      SVar23.str = pcVar5;
      Swift::String::append(SVar12,SVar23);
      _swift_bridgeObjectRelease(_Var7.unknown);
      SVar13.bridgeObject = &SUB_e200000000000000;
      SVar13.str = (char *)0x2e27;
      puVar6 = (undefined8 *)0x2e27;
      SVar24.bridgeObject = puVar9;
      SVar24.str = pcVar5;
      Swift::String::append(SVar13,SVar24);
      uVar11 = 0;
    }
    else {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1e,_Var7);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = (undefined *)0xd00000000000001a;
      local_d0 = (undefined *)0x8000000100dba810;
      FUN_1005b32e4();
      SVar21.bridgeObject = _Var7.unknown;
      SVar21.str = param_4;
      SVar32.bridgeObject = puVar9;
      SVar32.str = pcVar5;
      Swift::String::append(SVar21,SVar32);
      _swift_bridgeObjectRelease(_Var7.unknown);
      SVar22.bridgeObject = &SUB_e200000000000000;
      SVar22.str = (char *)0x2e27;
      puVar6 = (undefined8 *)0x2e27;
      SVar33.bridgeObject = puVar9;
      SVar33.str = pcVar5;
      Swift::String::append(SVar22,SVar33);
      uVar11 = 8;
    }
    uVar10 = local_d0;
    puVar9 = local_d8;
    uVar1 = 0x6461657270;
    if (param_2 != '\x01') {
      uVar1 = 0x64616572;
    }
    puVar2 = &DAT_e500000000000000;
    if (param_2 != '\x01') {
      puVar2 = &DAT_e400000000000000;
    }
    FUN_100a57a58();
    param_3 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar6,0,0);
    *puVar6 = uVar1;
    puVar6[1] = puVar2;
    *(int *)(puVar6 + 2) = iVar3;
  }
  uStack_f8 = param_5[1];
  local_100 = *param_5;
  uStack_e8 = param_5[3];
  uStack_f0 = param_5[2];
  local_e0 = param_5[4];
  local_120 = CONCAT31(local_120._1_3_,uVar11);
  local_d8 = (undefined *)CONCAT71(local_d8._1_7_,uVar11);
  uStack_118 = puVar9;
  uStack_110 = uVar10;
  local_108 = param_3;
  local_d0 = puVar9;
  uStack_c8 = uVar10;
  local_c0 = param_3;
  local_b8 = local_100;
  uStack_b0 = uStack_f8;
  local_a8 = uStack_f0;
  uStack_a0 = uStack_e8;
  local_98 = local_e0;
  local_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = local_100;
  uStack_78 = uStack_f8;
  FUN_10000ca28(&uStack_80,auStack_168);
  FUN_10000ca28(&local_90,auStack_168);
  FUN_100a50050(&local_120,auStack_168);
  FUN_100a5008c(&local_d8);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = local_e0;
  param_1[1] = uStack_118;
  *param_1 = CONCAT44(uStack_11c,local_120);
  param_1[3] = local_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100a7e9f4 | FUN_100a7e9f4 */

void FUN_100a7e9f4(undefined8 *param_1,int param_2,_StringGuts param_3,char *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  void *pvVar6;
  _StringGuts _Var7;
  char *pcVar9;
  undefined8 *puVar10;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  undefined1 auStack_158 [72];
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 *puVar8;
  
  if (param_2 == 5) {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    _Var7.unknown = param_3.unknown;
    pcVar3 = param_4;
    puVar10 = param_5;
    Swift::_StringGuts::grow(0x25,param_3);
    _swift_bridgeObjectRelease(local_c0);
    local_c8 = 0xd000000000000019;
    local_c0 = 0x8000000100db9660;
    FUN_1005b32e4();
    SVar18.bridgeObject = _Var7.unknown;
    SVar18.str = param_3.unknown;
    SVar33.bridgeObject = puVar10;
    SVar33.str = pcVar3;
    Swift::String::append(SVar18,SVar33);
    _swift_bridgeObjectRelease(_Var7.unknown);
    SVar19.bridgeObject = &DAT_e600000000000000;
    SVar19.str = (char *)0x27206f742027;
    puVar8 = &DAT_e600000000000000;
    SVar34.bridgeObject = puVar10;
    SVar34.str = pcVar3;
    Swift::String::append(SVar19,SVar34);
    FUN_1005b32e4();
    SVar20.bridgeObject = puVar8;
    SVar20.str = param_4;
    SVar35.bridgeObject = puVar10;
    SVar35.str = pcVar3;
    Swift::String::append(SVar20,SVar35);
    _swift_bridgeObjectRelease(puVar8);
    SVar21.bridgeObject = &SUB_e200000000000000;
    SVar21.str = (char *)0x2e27;
    puVar4 = (undefined8 *)0x2e27;
    SVar36.bridgeObject = puVar10;
    SVar36.str = pcVar3;
    Swift::String::append(SVar21,SVar36);
    local_110 = 2;
  }
  else if (param_2 == 0x11) {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    pcVar9 = param_4;
    puVar10 = param_5;
    Swift::_StringGuts::grow(0x37,param_3);
    pvVar6 = (void *)0xec00000027206b6e;
    SVar11.bridgeObject = (void *)0xec00000027206b6e;
    SVar11.str = (char *)0x696c2074276e6143;
    SVar26.bridgeObject = puVar10;
    SVar26.str = pcVar9;
    Swift::String::append(SVar11,SVar26);
    FUN_1005b32e4();
    SVar12.bridgeObject = pvVar6;
    SVar12.str = param_3.unknown;
    SVar27.bridgeObject = puVar10;
    SVar27.str = pcVar9;
    Swift::String::append(SVar12,SVar27);
    _swift_bridgeObjectRelease(pvVar6);
    SVar13.bridgeObject = &DAT_e600000000000000;
    SVar13.str = (char *)0x27206f742027;
    puVar8 = &DAT_e600000000000000;
    SVar28.bridgeObject = puVar10;
    SVar28.str = pcVar9;
    Swift::String::append(SVar13,SVar28);
    pcVar3 = param_4;
    FUN_1005b32e4();
    SVar14.bridgeObject = puVar8;
    SVar14.str = pcVar3;
    SVar29.bridgeObject = puVar10;
    SVar29.str = pcVar9;
    Swift::String::append(SVar14,SVar29);
    _swift_bridgeObjectRelease(puVar8);
    pvVar6 = (void *)0x8000000100db9680;
    SVar15.bridgeObject = (void *)0x8000000100db9680;
    SVar15.str = (char *)0xd00000000000001d;
    SVar30.bridgeObject = puVar10;
    SVar30.str = pcVar9;
    Swift::String::append(SVar15,SVar30);
    FUN_1005b32e4();
    SVar16.bridgeObject = pvVar6;
    SVar16.str = param_4;
    SVar31.bridgeObject = puVar10;
    SVar31.str = pcVar9;
    Swift::String::append(SVar16,SVar31);
    _swift_bridgeObjectRelease(pvVar6);
    SVar17.bridgeObject = &SUB_e200000000000000;
    SVar17.str = (char *)0x2e27;
    puVar4 = (undefined8 *)0x2e27;
    SVar32.bridgeObject = puVar10;
    SVar32.str = pcVar9;
    Swift::String::append(SVar17,SVar32);
    local_110 = 10;
  }
  else {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    _Var7.unknown = param_3.unknown;
    pcVar3 = param_4;
    puVar10 = param_5;
    Swift::_StringGuts::grow(0x1b,param_3);
    _swift_bridgeObjectRelease(local_c0);
    local_c8 = 0x696c20726f727245;
    local_c0 = 0xef2720676e696b6e;
    FUN_1005b32e4();
    SVar22.bridgeObject = _Var7.unknown;
    SVar22.str = param_3.unknown;
    SVar37.bridgeObject = puVar10;
    SVar37.str = pcVar3;
    Swift::String::append(SVar22,SVar37);
    _swift_bridgeObjectRelease(_Var7.unknown);
    SVar23.bridgeObject = &DAT_e600000000000000;
    SVar23.str = (char *)0x27206f742027;
    puVar8 = &DAT_e600000000000000;
    SVar38.bridgeObject = puVar10;
    SVar38.str = pcVar3;
    Swift::String::append(SVar23,SVar38);
    FUN_1005b32e4();
    SVar24.bridgeObject = puVar8;
    SVar24.str = param_4;
    SVar39.bridgeObject = puVar10;
    SVar39.str = pcVar3;
    Swift::String::append(SVar24,SVar39);
    _swift_bridgeObjectRelease(puVar8);
    SVar25.bridgeObject = &SUB_e200000000000000;
    SVar25.str = (char *)0x2e27;
    puVar4 = (undefined8 *)0x2e27;
    SVar40.bridgeObject = puVar10;
    SVar40.str = pcVar3;
    Swift::String::append(SVar25,SVar40);
    local_110 = 8;
  }
  uVar2 = local_c0;
  uVar1 = local_c8;
  FUN_100a57a58();
  puVar5 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar4,0,0);
  *puVar4 = 0x74616b6e696c;
  puVar4[1] = &DAT_e600000000000000;
  *(int *)(puVar4 + 2) = param_2;
  uStack_e8 = param_5[1];
  local_f0 = *param_5;
  uStack_d8 = param_5[3];
  uStack_e0 = param_5[2];
  local_d0 = param_5[4];
  local_c8 = CONCAT71(local_c8._1_7_,local_110);
  uStack_108 = uVar1;
  uStack_100 = uVar2;
  local_f8 = puVar5;
  local_c0 = uVar1;
  uStack_b8 = uVar2;
  local_b0 = puVar5;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = CONCAT71(uStack_10f,local_110);
  param_1[3] = local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a7ed30 | FUN_100a7ed30 */

void FUN_100a7ed30(undefined8 *param_1,undefined8 param_2,_StringGuts param_3,char *param_4,
                  char *param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  int iVar8;
  char *pcVar9;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined1 auStack_158 [72];
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  iVar8 = (int)param_4;
  pcVar9 = param_5;
  if (iVar8 < 5) {
    if (iVar8 == 1) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      _Var7.unknown = param_3.unknown;
      Swift::_StringGuts::grow(0x28,param_3);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = 0xd000000000000024;
      local_c0 = 0x8000000100db9530;
      FUN_1005b32e4();
      SVar16.bridgeObject = _Var7.unknown;
      SVar16.str = param_5;
      SVar26.bridgeObject = pcVar9;
      SVar26.str = param_4;
      Swift::String::append(SVar16,SVar26);
      _swift_bridgeObjectRelease(_Var7.unknown);
      pcVar3 = (char *)0x2e27;
      puVar6 = &SUB_e200000000000000;
LAB_100a7ef64:
      SVar17.bridgeObject = puVar6;
      SVar17.str = pcVar3;
      SVar27.bridgeObject = pcVar9;
      SVar27.str = param_4;
      Swift::String::append(SVar17,SVar27);
      local_110 = 3;
      goto LAB_100a7efe8;
    }
    if (iVar8 == 2) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      _Var7.unknown = param_3.unknown;
      Swift::_StringGuts::grow(0x24,param_3);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = 0xd000000000000011;
      local_c0 = 0x8000000100db9560;
      FUN_1005b32e4();
      SVar10.bridgeObject = _Var7.unknown;
      SVar10.str = param_5;
      SVar20.bridgeObject = pcVar9;
      SVar20.str = param_4;
      Swift::String::append(SVar10,SVar20);
      _swift_bridgeObjectRelease(_Var7.unknown);
      pcVar3 = (char *)0xd000000000000011;
      SVar11.bridgeObject = (void *)0x8000000100db9580;
      SVar11.str = (char *)0xd000000000000011;
      SVar21.bridgeObject = pcVar9;
      SVar21.str = param_4;
      Swift::String::append(SVar11,SVar21);
      local_110 = 5;
      goto LAB_100a7efe8;
    }
  }
  else {
    if (iVar8 == 5) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      _Var7.unknown = param_3.unknown;
      Swift::_StringGuts::grow(0x1f,param_3);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = 0xd00000000000001b;
      local_c0 = 0x8000000100db95a0;
      FUN_1005b32e4();
      SVar18.bridgeObject = _Var7.unknown;
      SVar18.str = param_5;
      SVar28.bridgeObject = pcVar9;
      SVar28.str = param_4;
      Swift::String::append(SVar18,SVar28);
      _swift_bridgeObjectRelease(_Var7.unknown);
      SVar19.bridgeObject = &SUB_e200000000000000;
      SVar19.str = (char *)0x2e27;
      pcVar3 = (char *)0x2e27;
      SVar29.bridgeObject = pcVar9;
      SVar29.str = param_4;
      Swift::String::append(SVar19,SVar29);
      local_110 = 2;
      goto LAB_100a7efe8;
    }
    if (iVar8 == 0xd) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x8a,param_3);
      pvVar5 = (void *)0x8000000100db95c0;
      SVar12.bridgeObject = (void *)0x8000000100db95c0;
      SVar12.str = (char *)0xd000000000000037;
      SVar22.bridgeObject = pcVar9;
      SVar22.str = param_4;
      Swift::String::append(SVar12,SVar22);
      FUN_1005b32e4();
      SVar13.bridgeObject = pvVar5;
      SVar13.str = param_5;
      SVar23.bridgeObject = pcVar9;
      SVar23.str = param_4;
      Swift::String::append(SVar13,SVar23);
      _swift_bridgeObjectRelease(pvVar5);
      pcVar3 = (char *)0xd000000000000051;
      puVar6 = (undefined1 *)0x8000000100db9600;
      goto LAB_100a7ef64;
    }
  }
  local_c8 = 0;
  local_c0 = 0xe000000000000000;
  _Var7.unknown = param_3.unknown;
  Swift::_StringGuts::grow(0x15,param_3);
  _swift_bridgeObjectRelease(local_c0);
  local_c8 = 0xd000000000000011;
  local_c0 = 0x8000000100db9510;
  FUN_1005b32e4();
  SVar14.bridgeObject = _Var7.unknown;
  SVar14.str = param_5;
  SVar24.bridgeObject = pcVar9;
  SVar24.str = param_4;
  Swift::String::append(SVar14,SVar24);
  _swift_bridgeObjectRelease(_Var7.unknown);
  SVar15.bridgeObject = &SUB_e200000000000000;
  SVar15.str = (char *)0x2e27;
  pcVar3 = (char *)0x2e27;
  SVar25.bridgeObject = pcVar9;
  SVar25.str = param_4;
  Swift::String::append(SVar15,SVar25);
  local_110 = 8;
LAB_100a7efe8:
  uVar2 = local_c0;
  uVar1 = local_c8;
  FUN_100a57a58();
  puVar4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,pcVar3,0,0);
  *(undefined8 *)pcVar3 = param_2;
  *(undefined **)(pcVar3 + 8) = param_3.unknown;
  *(int *)(pcVar3 + 0x10) = iVar8;
  uStack_e8 = param_6[1];
  local_f0 = *param_6;
  uStack_d8 = param_6[3];
  uStack_e0 = param_6[2];
  local_d0 = param_6[4];
  local_c8 = CONCAT71(local_c8._1_7_,local_110);
  uStack_108 = uVar1;
  uStack_100 = uVar2;
  local_f8 = puVar4;
  local_c0 = uVar1;
  uStack_b8 = uVar2;
  local_b0 = puVar4;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  _swift_bridgeObjectRetain(param_3.unknown);
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = CONCAT71(uStack_10f,local_110);
  param_1[3] = local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a7f0b0 | FUN_100a7f0b0 */

void FUN_100a7f0b0(undefined8 *param_1,char *param_2,_StringGuts param_3,char *param_4,void *param_5
                  )

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  _StringGuts _Var4;
  char *pcVar5;
  char *pcVar6;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  undefined1 auStack_158 [72];
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  local_110 = 8;
  iVar1 = (int)param_2;
  pcVar5 = param_4;
  uStack_108 = 0;
  uStack_100 = 0xe000000000000000;
  if (iVar1 < 0x11) {
    if (iVar1 != 2) {
      if (iVar1 == 5) {
        local_c8 = 0;
        local_c0 = 0xe000000000000000;
        _Var4.unknown = param_3.unknown;
        Swift::_StringGuts::grow(0x31,param_3);
        _swift_bridgeObjectRelease(local_c0);
        local_c8 = 0xd00000000000002d;
        local_c0 = 0x8000000100dba3f0;
        FUN_1005b32e4();
        SVar17.bridgeObject = _Var4.unknown;
        SVar17.str = param_3.unknown;
        SVar32.bridgeObject = param_5;
        SVar32.str = pcVar5;
        Swift::String::append(SVar17,SVar32);
        _swift_bridgeObjectRelease(_Var4.unknown);
        SVar18.bridgeObject = &SUB_e200000000000000;
        SVar18.str = (char *)0x2e27;
        param_2 = (char *)0x2e27;
        SVar33.bridgeObject = param_5;
        SVar33.str = pcVar5;
        Swift::String::append(SVar18,SVar33);
        local_110 = 2;
        uStack_108 = local_c8;
        uStack_100 = local_c0;
      }
      else if (iVar1 == 0xd) {
        local_c8 = 0;
        local_c0 = 0xe000000000000000;
        Swift::_StringGuts::grow(0xa2,param_3);
        pvVar3 = (void *)0x8000000100dba580;
        SVar7.bridgeObject = (void *)0x8000000100dba580;
        SVar7.str = (char *)0xd000000000000033;
        SVar22.bridgeObject = param_5;
        SVar22.str = pcVar5;
        Swift::String::append(SVar7,SVar22);
        FUN_1005b32e4();
        SVar8.bridgeObject = pvVar3;
        SVar8.str = param_3.unknown;
        SVar23.bridgeObject = param_5;
        SVar23.str = pcVar5;
        Swift::String::append(SVar8,SVar23);
        _swift_bridgeObjectRelease(pvVar3);
        param_2 = (char *)0xd00000000000006d;
        SVar9.bridgeObject = (void *)0x8000000100dba5c0;
        SVar9.str = (char *)0xd00000000000006d;
        SVar24.bridgeObject = param_5;
        SVar24.str = pcVar5;
        Swift::String::append(SVar9,SVar24);
        local_110 = 3;
        uStack_108 = local_c8;
        uStack_100 = local_c0;
      }
      goto LAB_100a7f414;
    }
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0xda,param_3);
    pvVar3 = (void *)0x8000000100dba420;
    SVar12.bridgeObject = (void *)0x8000000100dba420;
    SVar12.str = (char *)0xd000000000000028;
    SVar27.bridgeObject = param_5;
    SVar27.str = pcVar5;
    Swift::String::append(SVar12,SVar27);
    FUN_1005b32e4();
    SVar13.bridgeObject = pvVar3;
    SVar13.str = param_3.unknown;
    SVar28.bridgeObject = param_5;
    SVar28.str = pcVar5;
    Swift::String::append(SVar13,SVar28);
    _swift_bridgeObjectRelease(pvVar3);
    pcVar6 = "ectory, a component of \'";
    param_2 = (char *)0xd0000000000000b0;
  }
  else {
    if (iVar1 == 0x11) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x39,param_3);
      pvVar3 = (void *)0x8000000100dba510;
      SVar14.bridgeObject = (void *)0x8000000100dba510;
      SVar14.str = (char *)0xd000000000000026;
      SVar29.bridgeObject = param_5;
      SVar29.str = pcVar5;
      Swift::String::append(SVar14,SVar29);
      FUN_1005b32e4();
      SVar15.bridgeObject = pvVar3;
      SVar15.str = param_3.unknown;
      SVar30.bridgeObject = param_5;
      SVar30.str = pcVar5;
      Swift::String::append(SVar15,SVar30);
      _swift_bridgeObjectRelease(pvVar3);
      param_2 = (char *)0xd000000000000011;
      SVar16.bridgeObject = (void *)0x8000000100dba020;
      SVar16.str = (char *)0xd000000000000011;
      SVar31.bridgeObject = param_5;
      SVar31.str = pcVar5;
      Swift::String::append(SVar16,SVar31);
      local_110 = 10;
      uStack_108 = local_c8;
      uStack_100 = local_c0;
      goto LAB_100a7f414;
    }
    if (iVar1 == 0x14) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x3f,param_3);
      pvVar3 = (void *)0x8000000100dba420;
      SVar19.bridgeObject = (void *)0x8000000100dba420;
      SVar19.str = (char *)0xd000000000000028;
      SVar34.bridgeObject = param_5;
      SVar34.str = pcVar5;
      Swift::String::append(SVar19,SVar34);
      FUN_1005b32e4();
      SVar20.bridgeObject = pvVar3;
      SVar20.str = param_3.unknown;
      SVar35.bridgeObject = param_5;
      SVar35.str = pcVar5;
      Swift::String::append(SVar20,SVar35);
      _swift_bridgeObjectRelease(pvVar3);
      pcVar6 = "\', an I/O error occurred.";
      param_2 = (char *)0xd000000000000015;
    }
    else {
      if (iVar1 != 0x15) goto LAB_100a7f414;
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x33,param_3);
      pvVar3 = (void *)0x8000000100dba540;
      SVar10.bridgeObject = (void *)0x8000000100dba540;
      SVar10.str = (char *)0xd000000000000019;
      SVar25.bridgeObject = param_5;
      SVar25.str = pcVar5;
      Swift::String::append(SVar10,SVar25);
      FUN_1005b32e4();
      SVar11.bridgeObject = pvVar3;
      SVar11.str = param_3.unknown;
      SVar26.bridgeObject = param_5;
      SVar26.str = pcVar5;
      Swift::String::append(SVar11,SVar26);
      _swift_bridgeObjectRelease(pvVar3);
      pcVar6 = "Can\'t create directory, \'";
      param_2 = (char *)0xd000000000000018;
    }
  }
  SVar21.bridgeObject = (void *)((ulong)pcVar6 | 0x8000000000000000);
  SVar21.str = param_2;
  SVar36.bridgeObject = param_5;
  SVar36.str = pcVar5;
  Swift::String::append(SVar21,SVar36);
  local_110 = 1;
  uStack_108 = local_c8;
  uStack_100 = local_c0;
LAB_100a7f414:
  FUN_100a57a58();
  puVar2 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,param_2,0,0);
  param_2[0] = 'm';
  param_2[1] = 'k';
  param_2[2] = 'd';
  param_2[3] = 'i';
  param_2[4] = 'r';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  *(undefined1 **)(param_2 + 8) = &DAT_e500000000000000;
  *(int *)(param_2 + 0x10) = iVar1;
  uStack_e8 = *(undefined8 *)(param_4 + 8);
  local_f0 = *(undefined8 *)param_4;
  uStack_d8 = *(undefined8 *)(param_4 + 0x18);
  uStack_e0 = *(undefined8 *)(param_4 + 0x10);
  local_d0 = *(undefined8 *)(param_4 + 0x20);
  local_c8 = CONCAT71(local_c8._1_7_,local_110);
  local_f8 = puVar2;
  local_c0 = uStack_108;
  uStack_b8 = uStack_100;
  local_b0 = puVar2;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = CONCAT71(uStack_10f,local_110);
  param_1[3] = local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a7f4e4 | FUN_100a7f4e4 */

void FUN_100a7f4e4(undefined8 *param_1,int param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  void *pvVar6;
  _StringGuts _Var7;
  char *pcVar8;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_148 [72];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar8 = param_4;
  if (param_2 < 0xd) {
    if (param_2 == 1) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x71,param_3);
      pvVar6 = (void *)0x8000000100dba6d0;
      SVar16.bridgeObject = (void *)0x8000000100dba6d0;
      SVar16.str = (char *)0xd000000000000023;
      SVar29.bridgeObject = param_5;
      SVar29.str = pcVar8;
      Swift::String::append(SVar16,SVar29);
      FUN_1005b32e4();
      SVar17.bridgeObject = pvVar6;
      SVar17.str = param_3.unknown;
      SVar30.bridgeObject = param_5;
      SVar30.str = pcVar8;
      Swift::String::append(SVar17,SVar30);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar1 = "\', the effective user ID of the process is not permitted to remove the file.";
      pcVar4 = (char *)0xd00000000000004c;
LAB_100a7f724:
      SVar18.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
      SVar18.str = pcVar4;
      SVar31.bridgeObject = param_5;
      SVar31.str = pcVar8;
      Swift::String::append(SVar18,SVar31);
      local_100 = 3;
      goto LAB_100a7f7c8;
    }
    if (param_2 == 5) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x4c,param_3);
      pvVar6 = (void *)0xee00272065766f6d;
      SVar9.bridgeObject = (void *)0xee00272065766f6d;
      SVar9.str = (char *)0x65722074276e6143;
      SVar22.bridgeObject = param_5;
      SVar22.str = pcVar8;
      Swift::String::append(SVar9,SVar22);
      FUN_1005b32e4();
      SVar10.bridgeObject = pvVar6;
      SVar10.str = param_3.unknown;
      SVar23.bridgeObject = param_5;
      SVar23.str = pcVar8;
      Swift::String::append(SVar10,SVar23);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar4 = (char *)0xd00000000000003c;
      SVar11.bridgeObject = (void *)0x8000000100dba630;
      SVar11.str = (char *)0xd00000000000003c;
      SVar24.bridgeObject = param_5;
      SVar24.str = pcVar8;
      Swift::String::append(SVar11,SVar24);
      local_100 = 2;
      goto LAB_100a7f7c8;
    }
  }
  else {
    if (param_2 == 0x10) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x6b,param_3);
      pvVar6 = (void *)0xee00272065766f6d;
      SVar19.bridgeObject = (void *)0xee00272065766f6d;
      SVar19.str = (char *)0x65722074276e6143;
      SVar32.bridgeObject = param_5;
      SVar32.str = pcVar8;
      Swift::String::append(SVar19,SVar32);
      FUN_1005b32e4();
      SVar20.bridgeObject = pvVar6;
      SVar20.str = param_3.unknown;
      SVar33.bridgeObject = param_5;
      SVar33.str = pcVar8;
      Swift::String::append(SVar20,SVar33);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar4 = (char *)0xd00000000000005b;
      SVar21.bridgeObject = (void *)0x8000000100dba670;
      SVar21.str = (char *)0xd00000000000005b;
      SVar34.bridgeObject = param_5;
      SVar34.str = pcVar8;
      Swift::String::append(SVar21,SVar34);
      local_100 = 7;
      goto LAB_100a7f7c8;
    }
    if (param_2 == 0xd) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0xac,param_3);
      pvVar6 = (void *)0x8000000100dba750;
      SVar12.bridgeObject = (void *)0x8000000100dba750;
      SVar12.str = (char *)0xd000000000000024;
      SVar25.bridgeObject = param_5;
      SVar25.str = pcVar8;
      Swift::String::append(SVar12,SVar25);
      FUN_1005b32e4();
      SVar13.bridgeObject = pvVar6;
      SVar13.str = param_3.unknown;
      SVar26.bridgeObject = param_5;
      SVar26.str = pcVar8;
      Swift::String::append(SVar13,SVar26);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar1 = 
      "\'. Search permissions denied on a component of the path or write permission denied on the directory containing the item to be removed."
      ;
      pcVar4 = (char *)0xd000000000000086;
      goto LAB_100a7f724;
    }
  }
  local_b8 = 0;
  local_b0 = 0xe000000000000000;
  _Var7.unknown = param_3.unknown;
  Swift::_StringGuts::grow(0x12,param_3);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = 0x65722074276e6143;
  local_b0 = 0xee00272065766f6d;
  FUN_1005b32e4();
  SVar14.bridgeObject = _Var7.unknown;
  SVar14.str = param_3.unknown;
  SVar27.bridgeObject = param_5;
  SVar27.str = pcVar8;
  Swift::String::append(SVar14,SVar27);
  _swift_bridgeObjectRelease(_Var7.unknown);
  SVar15.bridgeObject = &SUB_e200000000000000;
  SVar15.str = (char *)0x2e27;
  pcVar4 = (char *)0x2e27;
  SVar28.bridgeObject = param_5;
  SVar28.str = pcVar8;
  Swift::String::append(SVar15,SVar28);
  local_100 = 8;
LAB_100a7f7c8:
  uVar3 = local_b0;
  uVar2 = local_b8;
  FUN_100a57a58();
  puVar5 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,pcVar4,0,0);
  pcVar4[0] = 'r';
  pcVar4[1] = 'e';
  pcVar4[2] = 'm';
  pcVar4[3] = 'o';
  pcVar4[4] = 'v';
  pcVar4[5] = 'e';
  pcVar4[6] = '\0';
  pcVar4[7] = '\0';
  *(undefined1 **)(pcVar4 + 8) = &DAT_e600000000000000;
  *(int *)(pcVar4 + 0x10) = param_2;
  uStack_d8 = *(undefined8 *)(param_4 + 8);
  local_e0 = *(undefined8 *)param_4;
  uStack_c8 = *(undefined8 *)(param_4 + 0x18);
  uStack_d0 = *(undefined8 *)(param_4 + 0x10);
  local_c0 = *(undefined8 *)(param_4 + 0x20);
  local_b8 = CONCAT71(local_b8._1_7_,local_100);
  uStack_f8 = uVar2;
  uStack_f0 = uVar3;
  local_e8 = puVar5;
  local_b0 = uVar2;
  uStack_a8 = uVar3;
  local_a0 = puVar5;
  local_98 = local_e0;
  uStack_90 = uStack_d8;
  local_88 = uStack_d0;
  uStack_80 = uStack_c8;
  local_78 = local_c0;
  local_70 = uStack_d0;
  uStack_68 = uStack_c8;
  uStack_60 = local_e0;
  uStack_58 = uStack_d8;
  FUN_10000ca28(&uStack_60,auStack_148);
  FUN_10000ca28(&local_70,auStack_148);
  FUN_100a50050(&local_100,auStack_148);
  FUN_100a5008c(&local_b8);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = CONCAT71(uStack_ff,local_100);
  param_1[3] = local_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Address: 0x100a7f894 | FUN_100a7f894 */

void FUN_100a7f894(undefined8 *param_1,undefined8 param_2,_StringGuts param_3,char *param_4,
                  char *param_5,char *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  void *pvVar5;
  _StringGuts _Var6;
  undefined1 *puVar7;
  int iVar8;
  char *pcVar9;
  undefined1 uVar10;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  undefined1 auStack_168 [72];
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  iVar8 = (int)param_4;
  if (iVar8 < 0xd) {
    if (iVar8 == 2) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      pcVar9 = param_5;
      Swift::_StringGuts::grow(0x3e,param_3);
      pvVar5 = (void *)0xee002720656d616e;
      SVar29.bridgeObject = (void *)0xee002720656d616e;
      SVar29.str = (char *)0x65722074276e6143;
      SVar63.bridgeObject = pcVar9;
      SVar63.str = param_4;
      Swift::String::append(SVar29,SVar63);
      pcVar4 = param_5;
      FUN_1005b32e4();
      SVar30.bridgeObject = pvVar5;
      SVar30.str = pcVar4;
      SVar64.bridgeObject = pcVar9;
      SVar64.str = param_4;
      Swift::String::append(SVar30,SVar64);
      _swift_bridgeObjectRelease(pvVar5);
      SVar31.bridgeObject = &DAT_e600000000000000;
      SVar31.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar65.bridgeObject = pcVar9;
      SVar65.str = param_4;
      Swift::String::append(SVar31,SVar65);
      FUN_1005b32e4();
      SVar32.bridgeObject = puVar7;
      SVar32.str = param_6;
      SVar66.bridgeObject = pcVar9;
      SVar66.str = param_4;
      Swift::String::append(SVar32,SVar66);
      _swift_bridgeObjectRelease(puVar7);
      pvVar5 = (void *)0x8000000100db9e00;
      SVar33.bridgeObject = (void *)0x8000000100db9e00;
      SVar33.str = (char *)0xd000000000000013;
      SVar67.bridgeObject = pcVar9;
      SVar67.str = param_4;
      Swift::String::append(SVar33,SVar67);
      FUN_1005b32e4();
      SVar34.bridgeObject = pvVar5;
      SVar34.str = param_5;
      SVar68.bridgeObject = pcVar9;
      SVar68.str = param_4;
      Swift::String::append(SVar34,SVar68);
      _swift_bridgeObjectRelease(pvVar5);
      pcVar4 = (char *)0xd000000000000011;
      SVar35.bridgeObject = (void *)0x8000000100db9e20;
      SVar35.str = (char *)0xd000000000000011;
      SVar69.bridgeObject = pcVar9;
      SVar69.str = param_4;
      Swift::String::append(SVar35,SVar69);
      uVar10 = 5;
      goto LAB_100a7feb0;
    }
    if (iVar8 == 5) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      pcVar9 = param_5;
      Swift::_StringGuts::grow(0x5c,param_3);
      pvVar5 = (void *)0xee002720656d616e;
      SVar16.bridgeObject = (void *)0xee002720656d616e;
      SVar16.str = (char *)0x65722074276e6143;
      SVar50.bridgeObject = pcVar9;
      SVar50.str = param_4;
      Swift::String::append(SVar16,SVar50);
      FUN_1005b32e4();
      SVar17.bridgeObject = pvVar5;
      SVar17.str = param_5;
      SVar51.bridgeObject = pcVar9;
      SVar51.str = param_4;
      Swift::String::append(SVar17,SVar51);
      _swift_bridgeObjectRelease(pvVar5);
      SVar18.bridgeObject = &DAT_e600000000000000;
      SVar18.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar52.bridgeObject = pcVar9;
      SVar52.str = param_4;
      Swift::String::append(SVar18,SVar52);
      FUN_1005b32e4();
      SVar19.bridgeObject = puVar7;
      SVar19.str = param_6;
      SVar53.bridgeObject = pcVar9;
      SVar53.str = param_4;
      Swift::String::append(SVar19,SVar53);
      _swift_bridgeObjectRelease(puVar7);
      pcVar4 = (char *)0xd000000000000044;
      SVar20.bridgeObject = (void *)0x8000000100db9db0;
      SVar20.str = (char *)0xd000000000000044;
      SVar54.bridgeObject = pcVar9;
      SVar54.str = param_4;
      Swift::String::append(SVar20,SVar54);
      uVar10 = 2;
      goto LAB_100a7feb0;
    }
  }
  else {
    if (iVar8 == 0x16) {
      puVar3 = (undefined *)0x2e;
      pcVar9 = param_5;
      FUN_1005b3548(0x2e,0xe100000000000000);
      pcVar4 = param_5;
      _Var6.unknown = puVar3;
      thunk_FUN_100556d68();
      _swift_bridgeObjectRelease(puVar3);
      if (((ulong)pcVar4 & 1) == 0) {
        puVar3 = (undefined *)0x2e2e;
        FUN_1005b3548(0x2e2e,&SUB_e200000000000000);
        pcVar4 = param_5;
        _Var6.unknown = puVar3;
        thunk_FUN_100556d68();
        _swift_bridgeObjectRelease(puVar3);
        if (((ulong)pcVar4 & 1) != 0) goto LAB_100a7fadc;
        local_d8 = 0;
        local_d0 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x38,_Var6);
        pvVar5 = (void *)0xee002720656d616e;
        SVar40.bridgeObject = (void *)0xee002720656d616e;
        SVar40.str = (char *)0x65722074276e6143;
        SVar74.bridgeObject = pcVar9;
        SVar74.str = param_4;
        Swift::String::append(SVar40,SVar74);
        FUN_1005b32e4();
        SVar41.bridgeObject = pvVar5;
        SVar41.str = param_5;
        SVar75.bridgeObject = pcVar9;
        SVar75.str = param_4;
        Swift::String::append(SVar41,SVar75);
        _swift_bridgeObjectRelease(pvVar5);
        pvVar5 = (void *)0x8000000100db9e40;
        SVar42.bridgeObject = (void *)0x8000000100db9e40;
        SVar42.str = (char *)0xd000000000000024;
        SVar76.bridgeObject = pcVar9;
        SVar76.str = param_4;
        Swift::String::append(SVar42,SVar76);
        FUN_1005b32e4();
        SVar43.bridgeObject = pvVar5;
        SVar43.str = param_6;
        SVar77.bridgeObject = pcVar9;
        SVar77.str = param_4;
        Swift::String::append(SVar43,SVar77);
        _swift_bridgeObjectRelease(pvVar5);
        pcVar4 = (char *)0x2e27;
        puVar7 = &SUB_e200000000000000;
      }
      else {
LAB_100a7fadc:
        local_d8 = 0;
        local_d0 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x39,_Var6);
        pvVar5 = (void *)0xee002720656d616e;
        SVar21.bridgeObject = (void *)0xee002720656d616e;
        SVar21.str = (char *)0x65722074276e6143;
        SVar55.bridgeObject = pcVar9;
        SVar55.str = param_4;
        Swift::String::append(SVar21,SVar55);
        FUN_1005b32e4();
        SVar22.bridgeObject = pvVar5;
        SVar22.str = param_5;
        SVar56.bridgeObject = pcVar9;
        SVar56.str = param_4;
        Swift::String::append(SVar22,SVar56);
        _swift_bridgeObjectRelease(pvVar5);
        SVar23.bridgeObject = &DAT_e600000000000000;
        SVar23.str = (char *)0x27206f742027;
        puVar7 = &DAT_e600000000000000;
        SVar57.bridgeObject = pcVar9;
        SVar57.str = param_4;
        Swift::String::append(SVar23,SVar57);
        FUN_1005b32e4();
        SVar24.bridgeObject = puVar7;
        SVar24.str = param_6;
        SVar58.bridgeObject = pcVar9;
        SVar58.str = param_4;
        Swift::String::append(SVar24,SVar58);
        _swift_bridgeObjectRelease(puVar7);
        pcVar4 = (char *)0xd000000000000021;
        puVar7 = (undefined1 *)0x8000000100db9e70;
      }
      SVar44.bridgeObject = puVar7;
      SVar44.str = pcVar4;
      SVar78.bridgeObject = pcVar9;
      SVar78.str = param_4;
      Swift::String::append(SVar44,SVar78);
      uVar10 = 1;
      goto LAB_100a7feb0;
    }
    if (iVar8 == 0x11) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      _Var6.unknown = param_3.unknown;
      pcVar9 = param_5;
      Swift::_StringGuts::grow(0x2f,param_3);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = 0x65722074276e6143;
      local_d0 = 0xee002720656d616e;
      FUN_1005b32e4();
      SVar25.bridgeObject = _Var6.unknown;
      SVar25.str = param_5;
      SVar59.bridgeObject = pcVar9;
      SVar59.str = param_4;
      Swift::String::append(SVar25,SVar59);
      _swift_bridgeObjectRelease(_Var6.unknown);
      SVar26.bridgeObject = &DAT_e600000000000000;
      SVar26.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar60.bridgeObject = pcVar9;
      SVar60.str = param_4;
      Swift::String::append(SVar26,SVar60);
      FUN_1005b32e4();
      SVar27.bridgeObject = puVar7;
      SVar27.str = param_6;
      SVar61.bridgeObject = pcVar9;
      SVar61.str = param_4;
      Swift::String::append(SVar27,SVar61);
      _swift_bridgeObjectRelease(puVar7);
      pcVar4 = (char *)0xd000000000000017;
      SVar28.bridgeObject = (void *)0x8000000100db9ea0;
      SVar28.str = (char *)0xd000000000000017;
      SVar62.bridgeObject = pcVar9;
      SVar62.str = param_4;
      Swift::String::append(SVar28,SVar62);
      uVar10 = 10;
      goto LAB_100a7feb0;
    }
    if (iVar8 == 0xd) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      pcVar9 = param_5;
      Swift::_StringGuts::grow(0xb7,param_3);
      pvVar5 = (void *)0x8000000100db9ec0;
      SVar11.bridgeObject = (void *)0x8000000100db9ec0;
      SVar11.str = (char *)0xd000000000000024;
      SVar45.bridgeObject = pcVar9;
      SVar45.str = param_4;
      Swift::String::append(SVar11,SVar45);
      FUN_1005b32e4();
      SVar12.bridgeObject = pvVar5;
      SVar12.str = param_5;
      SVar46.bridgeObject = pcVar9;
      SVar46.str = param_4;
      Swift::String::append(SVar12,SVar46);
      _swift_bridgeObjectRelease(pvVar5);
      SVar13.bridgeObject = &DAT_e600000000000000;
      SVar13.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar47.bridgeObject = pcVar9;
      SVar47.str = param_4;
      Swift::String::append(SVar13,SVar47);
      FUN_1005b32e4();
      SVar14.bridgeObject = puVar7;
      SVar14.str = param_6;
      SVar48.bridgeObject = pcVar9;
      SVar48.str = param_4;
      Swift::String::append(SVar14,SVar48);
      _swift_bridgeObjectRelease(puVar7);
      pcVar4 = (char *)0xd000000000000089;
      SVar15.bridgeObject = (void *)0x8000000100db9ef0;
      SVar15.str = (char *)0xd000000000000089;
      SVar49.bridgeObject = pcVar9;
      SVar49.str = param_4;
      Swift::String::append(SVar15,SVar49);
      uVar10 = 3;
      goto LAB_100a7feb0;
    }
  }
  local_d8 = 0;
  local_d0 = 0xe000000000000000;
  _Var6.unknown = param_3.unknown;
  pcVar9 = param_5;
  Swift::_StringGuts::grow(0x1a,param_3);
  _swift_bridgeObjectRelease(local_d0);
  local_d8 = 0x65722074276e6143;
  local_d0 = 0xee002720656d616e;
  FUN_1005b32e4();
  SVar36.bridgeObject = _Var6.unknown;
  SVar36.str = param_5;
  SVar70.bridgeObject = pcVar9;
  SVar70.str = param_4;
  Swift::String::append(SVar36,SVar70);
  _swift_bridgeObjectRelease(_Var6.unknown);
  SVar37.bridgeObject = &DAT_e600000000000000;
  SVar37.str = (char *)0x27206f742027;
  puVar7 = &DAT_e600000000000000;
  SVar71.bridgeObject = pcVar9;
  SVar71.str = param_4;
  Swift::String::append(SVar37,SVar71);
  FUN_1005b32e4();
  SVar38.bridgeObject = puVar7;
  SVar38.str = param_6;
  SVar72.bridgeObject = pcVar9;
  SVar72.str = param_4;
  Swift::String::append(SVar38,SVar72);
  _swift_bridgeObjectRelease(puVar7);
  SVar39.bridgeObject = &SUB_e200000000000000;
  SVar39.str = (char *)0x2e27;
  pcVar4 = (char *)0x2e27;
  SVar73.bridgeObject = pcVar9;
  SVar73.str = param_4;
  Swift::String::append(SVar39,SVar73);
  uVar10 = 8;
LAB_100a7feb0:
  uVar2 = local_d0;
  uVar1 = local_d8;
  FUN_100a57a58();
  puVar3 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,pcVar4,0,0);
  *(undefined8 *)pcVar4 = param_2;
  *(undefined **)(pcVar4 + 8) = param_3.unknown;
  *(int *)(pcVar4 + 0x10) = iVar8;
  uStack_f8 = param_7[1];
  local_100 = *param_7;
  uStack_e8 = param_7[3];
  uStack_f0 = param_7[2];
  local_e0 = param_7[4];
  local_d8 = CONCAT71(local_d8._1_7_,uVar10);
  local_120 = uVar10;
  uStack_118 = uVar1;
  uStack_110 = uVar2;
  local_108 = puVar3;
  local_d0 = uVar1;
  uStack_c8 = uVar2;
  local_c0 = puVar3;
  local_b8 = local_100;
  uStack_b0 = uStack_f8;
  local_a8 = uStack_f0;
  uStack_a0 = uStack_e8;
  local_98 = local_e0;
  local_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = local_100;
  uStack_78 = uStack_f8;
  _swift_bridgeObjectRetain(param_3.unknown);
  FUN_10000ca28(&uStack_80,auStack_168);
  FUN_10000ca28(&local_90,auStack_168);
  FUN_100a50050(&local_120,auStack_168);
  FUN_100a5008c(&local_d8);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = local_e0;
  param_1[1] = uStack_118;
  *param_1 = CONCAT71(uStack_11f,local_120);
  param_1[3] = local_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100a7ff78 | FUN_100a7ff78 */

void FUN_100a7ff78(undefined8 *param_1,undefined8 param_2,_StringGuts param_3,char *param_4,
                  char *param_5,char *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  void *pvVar6;
  _StringGuts _Var8;
  int iVar9;
  char *pcVar10;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String SVar77;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  undefined1 auStack_168 [72];
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puVar7;
  
  iVar9 = (int)param_4;
  pcVar4 = param_5;
  if (iVar9 < 0xd) {
    if (iVar9 == 1) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x78,param_3);
      pvVar6 = (void *)0x8000000100db9f80;
      SVar20.bridgeObject = (void *)0x8000000100db9f80;
      SVar20.str = (char *)0xd00000000000001c;
      SVar60.bridgeObject = pcVar4;
      SVar60.str = param_4;
      Swift::String::append(SVar20,SVar60);
      pcVar3 = param_5;
      FUN_1005b32e4();
      SVar21.bridgeObject = pvVar6;
      SVar21.str = pcVar3;
      SVar61.bridgeObject = pcVar4;
      SVar61.str = param_4;
      Swift::String::append(SVar21,SVar61);
      _swift_bridgeObjectRelease(pvVar6);
      SVar22.bridgeObject = &DAT_e600000000000000;
      SVar22.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar62.bridgeObject = pcVar4;
      SVar62.str = param_4;
      Swift::String::append(SVar22,SVar62);
      FUN_1005b32e4();
      SVar23.bridgeObject = puVar7;
      SVar23.str = param_6;
      SVar63.bridgeObject = pcVar4;
      SVar63.str = param_4;
      Swift::String::append(SVar23,SVar63);
      _swift_bridgeObjectRelease(puVar7);
      pvVar6 = (void *)0x8000000100dba040;
      SVar24.bridgeObject = (void *)0x8000000100dba040;
      SVar24.str = (char *)0xd00000000000001f;
      SVar64.bridgeObject = pcVar4;
      SVar64.str = param_4;
      Swift::String::append(SVar24,SVar64);
      FUN_1005b32e4();
      SVar25.bridgeObject = pvVar6;
      SVar25.str = param_5;
      SVar65.bridgeObject = pcVar4;
      SVar65.str = param_4;
      Swift::String::append(SVar25,SVar65);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar10 = "\' doesn\'t support the creation of symbolic links.";
      pcVar3 = (char *)0xd000000000000031;
LAB_100a80234:
      SVar26.bridgeObject = (void *)((ulong)(pcVar10 + -0x20) | 0x8000000000000000);
      SVar26.str = pcVar3;
      SVar66.bridgeObject = pcVar4;
      SVar66.str = param_4;
      Swift::String::append(SVar26,SVar66);
      local_120 = 3;
      goto LAB_100a805b4;
    }
    if (iVar9 != 2) {
      if (iVar9 == 5) {
        local_d8 = 0;
        local_d0 = 0xe000000000000000;
        pcVar4 = param_5;
        Swift::_StringGuts::grow(0x3f,param_3);
        pvVar6 = (void *)0x8000000100db9f80;
        SVar11.bridgeObject = (void *)0x8000000100db9f80;
        SVar11.str = (char *)0xd00000000000001c;
        SVar51.bridgeObject = pcVar4;
        SVar51.str = param_4;
        Swift::String::append(SVar11,SVar51);
        FUN_1005b32e4();
        SVar12.bridgeObject = pvVar6;
        SVar12.str = param_5;
        SVar52.bridgeObject = pcVar4;
        SVar52.str = param_4;
        Swift::String::append(SVar12,SVar52);
        _swift_bridgeObjectRelease(pvVar6);
        SVar13.bridgeObject = &DAT_e600000000000000;
        SVar13.str = (char *)0x27206f742027;
        puVar7 = &DAT_e600000000000000;
        SVar53.bridgeObject = pcVar4;
        SVar53.str = param_4;
        Swift::String::append(SVar13,SVar53);
        FUN_1005b32e4();
        SVar14.bridgeObject = puVar7;
        SVar14.str = param_6;
        SVar54.bridgeObject = pcVar4;
        SVar54.str = param_4;
        Swift::String::append(SVar14,SVar54);
        _swift_bridgeObjectRelease(puVar7);
        pcVar3 = (char *)0xd000000000000019;
        SVar15.bridgeObject = (void *)0x8000000100db9fa0;
        SVar15.str = (char *)0xd000000000000019;
        SVar55.bridgeObject = pcVar4;
        SVar55.str = param_4;
        Swift::String::append(SVar15,SVar55);
        local_120 = 2;
        goto LAB_100a805b4;
      }
LAB_100a8032c:
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      _Var8.unknown = param_3.unknown;
      pcVar4 = param_5;
      Swift::_StringGuts::grow(0x28,param_3);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = 0xd00000000000001c;
      local_d0 = 0x8000000100db9f80;
      FUN_1005b32e4();
      SVar33.bridgeObject = _Var8.unknown;
      SVar33.str = param_5;
      SVar73.bridgeObject = pcVar4;
      SVar73.str = param_4;
      Swift::String::append(SVar33,SVar73);
      _swift_bridgeObjectRelease(_Var8.unknown);
      SVar34.bridgeObject = &DAT_e600000000000000;
      SVar34.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar74.bridgeObject = pcVar4;
      SVar74.str = param_4;
      Swift::String::append(SVar34,SVar74);
      FUN_1005b32e4();
      SVar35.bridgeObject = puVar7;
      SVar35.str = param_6;
      SVar75.bridgeObject = pcVar4;
      SVar75.str = param_4;
      Swift::String::append(SVar35,SVar75);
      _swift_bridgeObjectRelease(puVar7);
      SVar36.bridgeObject = &SUB_e200000000000000;
      SVar36.str = (char *)0x2e27;
      pcVar3 = (char *)0x2e27;
      SVar76.bridgeObject = pcVar4;
      SVar76.str = param_4;
      Swift::String::append(SVar36,SVar76);
      local_120 = 8;
      goto LAB_100a805b4;
    }
    local_d8 = 0;
    local_d0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x6b,param_3);
    pvVar6 = (void *)0x8000000100db9f80;
    SVar37.bridgeObject = (void *)0x8000000100db9f80;
    SVar37.str = (char *)0xd00000000000001c;
    SVar77.bridgeObject = pcVar4;
    SVar77.str = param_4;
    Swift::String::append(SVar37,SVar77);
    pcVar3 = param_5;
    FUN_1005b32e4();
    SVar38.bridgeObject = pvVar6;
    SVar38.str = pcVar3;
    SVar78.bridgeObject = pcVar4;
    SVar78.str = param_4;
    Swift::String::append(SVar38,SVar78);
    _swift_bridgeObjectRelease(pvVar6);
    SVar39.bridgeObject = &DAT_e600000000000000;
    SVar39.str = (char *)0x27206f742027;
    puVar7 = &DAT_e600000000000000;
    SVar79.bridgeObject = pcVar4;
    SVar79.str = param_4;
    Swift::String::append(SVar39,SVar79);
    FUN_1005b32e4();
    SVar40.bridgeObject = puVar7;
    SVar40.str = param_6;
    SVar80.bridgeObject = pcVar4;
    SVar80.str = param_4;
    Swift::String::append(SVar40,SVar80);
    _swift_bridgeObjectRelease(puVar7);
    pvVar6 = (void *)0x8000000100db9e00;
    SVar41.bridgeObject = (void *)0x8000000100db9e00;
    SVar41.str = (char *)0xd000000000000013;
    SVar81.bridgeObject = pcVar4;
    SVar81.str = param_4;
    Swift::String::append(SVar41,SVar81);
    FUN_1005b32e4();
    SVar42.bridgeObject = pvVar6;
    SVar42.str = param_5;
    SVar82.bridgeObject = pcVar4;
    SVar82.str = param_4;
    Swift::String::append(SVar42,SVar82);
    _swift_bridgeObjectRelease(pvVar6);
    pcVar10 = "\' does not exist or is a dangling symbolic link.";
    pcVar3 = (char *)0xd000000000000030;
  }
  else {
    if (iVar9 != 0x14) {
      if (iVar9 == 0x11) {
        local_d8 = 0;
        local_d0 = 0xe000000000000000;
        pcVar10 = param_5;
        Swift::_StringGuts::grow(0x3d,param_3);
        pvVar6 = (void *)0x8000000100db9f80;
        SVar44.bridgeObject = (void *)0x8000000100db9f80;
        SVar44.str = (char *)0xd00000000000001c;
        SVar84.bridgeObject = pcVar10;
        SVar84.str = param_4;
        Swift::String::append(SVar44,SVar84);
        pcVar4 = param_5;
        FUN_1005b32e4();
        SVar45.bridgeObject = pvVar6;
        SVar45.str = pcVar4;
        SVar85.bridgeObject = pcVar10;
        SVar85.str = param_4;
        Swift::String::append(SVar45,SVar85);
        _swift_bridgeObjectRelease(pvVar6);
        SVar46.bridgeObject = &DAT_e600000000000000;
        SVar46.str = (char *)0x27206f742027;
        puVar7 = &DAT_e600000000000000;
        SVar86.bridgeObject = pcVar10;
        SVar86.str = param_4;
        Swift::String::append(SVar46,SVar86);
        FUN_1005b32e4();
        SVar47.bridgeObject = puVar7;
        SVar47.str = param_6;
        SVar87.bridgeObject = pcVar10;
        SVar87.str = param_4;
        Swift::String::append(SVar47,SVar87);
        _swift_bridgeObjectRelease(puVar7);
        SVar48.bridgeObject = &DAT_e400000000000000;
        SVar48.str = (char *)0x27202c27;
        puVar7 = &DAT_e400000000000000;
        SVar88.bridgeObject = pcVar10;
        SVar88.str = param_4;
        Swift::String::append(SVar48,SVar88);
        FUN_1005b32e4();
        SVar49.bridgeObject = puVar7;
        SVar49.str = param_5;
        SVar89.bridgeObject = pcVar10;
        SVar89.str = param_4;
        Swift::String::append(SVar49,SVar89);
        _swift_bridgeObjectRelease(puVar7);
        pcVar3 = (char *)0xd000000000000011;
        SVar50.bridgeObject = (void *)0x8000000100dba020;
        SVar50.str = (char *)0xd000000000000011;
        SVar90.bridgeObject = pcVar10;
        SVar90.str = param_4;
        Swift::String::append(SVar50,SVar90);
        local_120 = 10;
        goto LAB_100a805b4;
      }
      if (iVar9 != 0xd) goto LAB_100a8032c;
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0xa6,param_3);
      pvVar6 = (void *)0x8000000100db9f80;
      SVar16.bridgeObject = (void *)0x8000000100db9f80;
      SVar16.str = (char *)0xd00000000000001c;
      SVar56.bridgeObject = pcVar4;
      SVar56.str = param_4;
      Swift::String::append(SVar16,SVar56);
      FUN_1005b32e4();
      SVar17.bridgeObject = pvVar6;
      SVar17.str = param_5;
      SVar57.bridgeObject = pcVar4;
      SVar57.str = param_4;
      Swift::String::append(SVar17,SVar57);
      _swift_bridgeObjectRelease(pvVar6);
      SVar18.bridgeObject = &DAT_e600000000000000;
      SVar18.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar58.bridgeObject = pcVar4;
      SVar58.str = param_4;
      Swift::String::append(SVar18,SVar58);
      FUN_1005b32e4();
      SVar19.bridgeObject = puVar7;
      SVar19.str = param_6;
      SVar59.bridgeObject = pcVar4;
      SVar59.str = param_4;
      Swift::String::append(SVar19,SVar59);
      _swift_bridgeObjectRelease(puVar7);
      pcVar10 = 
      "\', write access to the directory containing the link was denied or one of the directories in its path denied search permissions."
      ;
      pcVar3 = (char *)0xd000000000000080;
      goto LAB_100a80234;
    }
    local_d8 = 0;
    local_d0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x50,param_3);
    pvVar6 = (void *)0x8000000100db9f80;
    SVar27.bridgeObject = (void *)0x8000000100db9f80;
    SVar27.str = (char *)0xd00000000000001c;
    SVar67.bridgeObject = pcVar4;
    SVar67.str = param_4;
    Swift::String::append(SVar27,SVar67);
    pcVar3 = param_5;
    FUN_1005b32e4();
    SVar28.bridgeObject = pvVar6;
    SVar28.str = pcVar3;
    SVar68.bridgeObject = pcVar4;
    SVar68.str = param_4;
    Swift::String::append(SVar28,SVar68);
    _swift_bridgeObjectRelease(pvVar6);
    SVar29.bridgeObject = &DAT_e600000000000000;
    SVar29.str = (char *)0x27206f742027;
    puVar7 = &DAT_e600000000000000;
    SVar69.bridgeObject = pcVar4;
    SVar69.str = param_4;
    Swift::String::append(SVar29,SVar69);
    FUN_1005b32e4();
    SVar30.bridgeObject = puVar7;
    SVar30.str = param_6;
    SVar70.bridgeObject = pcVar4;
    SVar70.str = param_4;
    Swift::String::append(SVar30,SVar70);
    _swift_bridgeObjectRelease(puVar7);
    pvVar6 = (void *)0x8000000100db9e00;
    SVar31.bridgeObject = (void *)0x8000000100db9e00;
    SVar31.str = (char *)0xd000000000000013;
    SVar71.bridgeObject = pcVar4;
    SVar71.str = param_4;
    Swift::String::append(SVar31,SVar71);
    FUN_1005b32e4();
    SVar32.bridgeObject = pvVar6;
    SVar32.str = param_5;
    SVar72.bridgeObject = pcVar4;
    SVar72.str = param_4;
    Swift::String::append(SVar32,SVar72);
    _swift_bridgeObjectRelease(pvVar6);
    pcVar10 = "\' is not a directory.";
    pcVar3 = (char *)0xd000000000000015;
  }
  SVar43.bridgeObject = (void *)((ulong)(pcVar10 + -0x20) | 0x8000000000000000);
  SVar43.str = pcVar3;
  SVar83.bridgeObject = pcVar4;
  SVar83.str = param_4;
  Swift::String::append(SVar43,SVar83);
  local_120 = 1;
LAB_100a805b4:
  uVar2 = local_d0;
  uVar1 = local_d8;
  FUN_100a57a58();
  puVar5 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,pcVar3,0,0);
  *(undefined8 *)pcVar3 = param_2;
  *(undefined **)(pcVar3 + 8) = param_3.unknown;
  *(int *)(pcVar3 + 0x10) = iVar9;
  uStack_f8 = param_7[1];
  local_100 = *param_7;
  uStack_e8 = param_7[3];
  uStack_f0 = param_7[2];
  local_e0 = param_7[4];
  local_d8 = CONCAT71(local_d8._1_7_,local_120);
  uStack_118 = uVar1;
  uStack_110 = uVar2;
  local_108 = puVar5;
  local_d0 = uVar1;
  uStack_c8 = uVar2;
  local_c0 = puVar5;
  local_b8 = local_100;
  uStack_b0 = uStack_f8;
  local_a8 = uStack_f0;
  uStack_a0 = uStack_e8;
  local_98 = local_e0;
  local_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = local_100;
  uStack_78 = uStack_f8;
  _swift_bridgeObjectRetain(param_3.unknown);
  FUN_10000ca28(&uStack_80,auStack_168);
  FUN_10000ca28(&local_90,auStack_168);
  FUN_100a50050(&local_120,auStack_168);
  FUN_100a5008c(&local_d8);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = local_e0;
  param_1[1] = uStack_118;
  *param_1 = CONCAT71(uStack_11f,local_120);
  param_1[3] = local_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100a8067c | FUN_100a8067c */

void FUN_100a8067c(undefined8 *param_1,int param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  void *pvVar5;
  _StringGuts _Var6;
  char *pcVar7;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined1 auStack_148 [72];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 < 0xd) {
    if (param_2 == 2) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      _Var6.unknown = param_3.unknown;
      pcVar7 = param_4;
      Swift::_StringGuts::grow(0x31,param_3);
      _swift_bridgeObjectRelease(local_b0);
      local_b8 = 0xd00000000000002d;
      local_b0 = 0x8000000100db9d00;
      FUN_1005b32e4();
      SVar16.bridgeObject = _Var6.unknown;
      SVar16.str = param_3.unknown;
      SVar28.bridgeObject = param_5;
      SVar28.str = pcVar7;
      Swift::String::append(SVar16,SVar28);
      _swift_bridgeObjectRelease(_Var6.unknown);
      SVar17.bridgeObject = &SUB_e200000000000000;
      SVar17.str = (char *)0x2e27;
      puVar3 = (undefined8 *)0x2e27;
      SVar29.bridgeObject = param_5;
      SVar29.str = pcVar7;
      Swift::String::append(SVar17,SVar29);
      local_100 = 5;
      goto LAB_100a80948;
    }
    if (param_2 == 5) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      pcVar7 = param_4;
      Swift::_StringGuts::grow(0x38,param_3);
      pvVar5 = (void *)0x8000000100db9ce0;
      SVar8.bridgeObject = (void *)0x8000000100db9ce0;
      SVar8.str = (char *)0xd00000000000001d;
      SVar20.bridgeObject = param_5;
      SVar20.str = pcVar7;
      Swift::String::append(SVar8,SVar20);
      FUN_1005b32e4();
      SVar9.bridgeObject = pvVar5;
      SVar9.str = param_3.unknown;
      SVar21.bridgeObject = param_5;
      SVar21.str = pcVar7;
      Swift::String::append(SVar9,SVar21);
      _swift_bridgeObjectRelease(pvVar5);
      puVar3 = (undefined8 *)0xd000000000000019;
      SVar10.bridgeObject = (void *)0x8000000100db9d30;
      SVar10.str = (char *)0xd000000000000019;
      SVar22.bridgeObject = param_5;
      SVar22.str = pcVar7;
      Swift::String::append(SVar10,SVar22);
      local_100 = 2;
      goto LAB_100a80948;
    }
  }
  else {
    if (param_2 == 0x16) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      _Var6.unknown = param_3.unknown;
      pcVar7 = param_4;
      Swift::_StringGuts::grow(0x2b,param_3);
      _swift_bridgeObjectRelease(local_b0);
      local_b8 = 0x65722074276e6143;
      local_b0 = 0xec00000027206461;
      FUN_1005b32e4();
      SVar18.bridgeObject = _Var6.unknown;
      SVar18.str = param_3.unknown;
      SVar30.bridgeObject = param_5;
      SVar30.str = pcVar7;
      Swift::String::append(SVar18,SVar30);
      _swift_bridgeObjectRelease(_Var6.unknown);
      puVar3 = (undefined8 *)0xd00000000000001d;
      SVar19.bridgeObject = (void *)0x8000000100db9d50;
      SVar19.str = (char *)0xd00000000000001d;
      SVar31.bridgeObject = param_5;
      SVar31.str = pcVar7;
      Swift::String::append(SVar19,SVar31);
      local_100 = 1;
      goto LAB_100a80948;
    }
    if (param_2 == 0xd) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      pcVar7 = param_4;
      Swift::_StringGuts::grow(0x5d,param_3);
      pvVar5 = (void *)0x8000000100db9ce0;
      SVar11.bridgeObject = (void *)0x8000000100db9ce0;
      SVar11.str = (char *)0xd00000000000001d;
      SVar23.bridgeObject = param_5;
      SVar23.str = pcVar7;
      Swift::String::append(SVar11,SVar23);
      FUN_1005b32e4();
      SVar12.bridgeObject = pvVar5;
      SVar12.str = param_3.unknown;
      SVar24.bridgeObject = param_5;
      SVar24.str = pcVar7;
      Swift::String::append(SVar12,SVar24);
      _swift_bridgeObjectRelease(pvVar5);
      puVar3 = (undefined8 *)0xd00000000000003e;
      SVar13.bridgeObject = (void *)0x8000000100db9d70;
      SVar13.str = (char *)0xd00000000000003e;
      SVar25.bridgeObject = param_5;
      SVar25.str = pcVar7;
      Swift::String::append(SVar13,SVar25);
      local_100 = 3;
      goto LAB_100a80948;
    }
  }
  local_b8 = 0;
  local_b0 = 0xe000000000000000;
  _Var6.unknown = param_3.unknown;
  pcVar7 = param_4;
  Swift::_StringGuts::grow(0x21,param_3);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = 0xd00000000000001d;
  local_b0 = 0x8000000100db9ce0;
  FUN_1005b32e4();
  SVar14.bridgeObject = _Var6.unknown;
  SVar14.str = param_3.unknown;
  SVar26.bridgeObject = param_5;
  SVar26.str = pcVar7;
  Swift::String::append(SVar14,SVar26);
  _swift_bridgeObjectRelease(_Var6.unknown);
  SVar15.bridgeObject = &SUB_e200000000000000;
  SVar15.str = (char *)0x2e27;
  puVar3 = (undefined8 *)0x2e27;
  SVar27.bridgeObject = param_5;
  SVar27.str = pcVar7;
  Swift::String::append(SVar15,SVar27);
  local_100 = 8;
LAB_100a80948:
  uVar2 = local_b0;
  uVar1 = local_b8;
  FUN_100a57a58();
  puVar4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
  *puVar3 = 0x6b6e696c64616572;
  puVar3[1] = &DAT_e800000000000000;
  *(int *)(puVar3 + 2) = param_2;
  uStack_d8 = *(undefined8 *)(param_4 + 8);
  local_e0 = *(undefined8 *)param_4;
  uStack_c8 = *(undefined8 *)(param_4 + 0x18);
  uStack_d0 = *(undefined8 *)(param_4 + 0x10);
  local_c0 = *(undefined8 *)(param_4 + 0x20);
  local_b8 = CONCAT71(local_b8._1_7_,local_100);
  uStack_f8 = uVar1;
  uStack_f0 = uVar2;
  local_e8 = puVar4;
  local_b0 = uVar1;
  uStack_a8 = uVar2;
  local_a0 = puVar4;
  local_98 = local_e0;
  uStack_90 = uStack_d8;
  local_88 = uStack_d0;
  uStack_80 = uStack_c8;
  local_78 = local_c0;
  local_70 = uStack_d0;
  uStack_68 = uStack_c8;
  uStack_60 = local_e0;
  uStack_58 = uStack_d8;
  FUN_10000ca28(&uStack_60,auStack_148);
  FUN_10000ca28(&local_70,auStack_148);
  FUN_100a50050(&local_100,auStack_148);
  FUN_100a5008c(&local_b8);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = CONCAT71(uStack_ff,local_100);
  param_1[3] = local_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Address: 0x100a80a18 | FUN_100a80a18 */

void FUN_100a80a18(undefined8 *param_1,undefined8 param_2,_StringGuts param_3,char *param_4,
                  char *param_5,char *param_6,undefined8 *param_7)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  void *pvVar6;
  _StringGuts _Var8;
  int iVar9;
  char *pcVar10;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  undefined1 auStack_168 [72];
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 *puVar7;
  
  iVar9 = (int)param_4;
  if (iVar9 < 0x16) {
    if (iVar9 == 2) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      pcVar10 = param_5;
      Swift::_StringGuts::grow(0x86,param_3);
      pvVar6 = (void *)0x8000000100dba130;
      SVar18.bridgeObject = (void *)0x8000000100dba130;
      SVar18.str = (char *)0xd000000000000027;
      SVar47.bridgeObject = pcVar10;
      SVar47.str = param_4;
      Swift::String::append(SVar18,SVar47);
      FUN_1005b32e4();
      SVar19.bridgeObject = pvVar6;
      SVar19.str = param_5;
      SVar48.bridgeObject = pcVar10;
      SVar48.str = param_4;
      Swift::String::append(SVar19,SVar48);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar4 = (char *)0xd00000000000005d;
      SVar20.bridgeObject = (void *)0x8000000100dba160;
      SVar20.str = (char *)0xd00000000000005d;
      SVar49.bridgeObject = pcVar10;
      SVar49.str = param_4;
      Swift::String::append(SVar20,SVar49);
      local_120 = 5;
      goto LAB_100a80f18;
    }
    if (iVar9 == 0xd) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      pcVar10 = param_5;
      Swift::_StringGuts::grow(0xcf,param_3);
      pvVar6 = (void *)0x8000000100dba2d0;
      SVar30.bridgeObject = (void *)0x8000000100dba2d0;
      SVar30.str = (char *)0xd000000000000062;
      SVar59.bridgeObject = pcVar10;
      SVar59.str = param_4;
      Swift::String::append(SVar30,SVar59);
      FUN_1005b32e4();
      SVar31.bridgeObject = pvVar6;
      SVar31.str = param_5;
      SVar60.bridgeObject = pcVar10;
      SVar60.str = param_4;
      Swift::String::append(SVar31,SVar60);
      _swift_bridgeObjectRelease(pvVar6);
      pvVar6 = (void *)0x8000000100dba1e0;
      SVar32.bridgeObject = (void *)0x8000000100dba1e0;
      SVar32.str = (char *)0xd000000000000014;
      SVar61.bridgeObject = pcVar10;
      SVar61.str = param_4;
      Swift::String::append(SVar32,SVar61);
      FUN_1005b32e4();
      SVar33.bridgeObject = pvVar6;
      SVar33.str = param_6;
      SVar62.bridgeObject = pcVar10;
      SVar62.str = param_4;
      Swift::String::append(SVar33,SVar62);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar4 = (char *)0xd000000000000055;
      SVar34.bridgeObject = (void *)0x8000000100dba340;
      SVar34.str = (char *)0xd000000000000055;
      SVar63.bridgeObject = pcVar10;
      SVar63.str = param_4;
      Swift::String::append(SVar34,SVar63);
      local_120 = 3;
      goto LAB_100a80f18;
    }
    if (iVar9 == 0x11) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x9e,param_3);
      pvVar6 = (void *)0x8000000100dba230;
      SVar11.bridgeObject = (void *)0x8000000100dba230;
      SVar11.str = (char *)0xd00000000000001f;
      SVar40.bridgeObject = param_5;
      SVar40.str = param_4;
      Swift::String::append(SVar11,SVar40);
      FUN_1005b32e4();
      SVar12.bridgeObject = pvVar6;
      SVar12.str = param_6;
      SVar41.bridgeObject = param_5;
      SVar41.str = param_4;
      Swift::String::append(SVar12,SVar41);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar4 = (char *)0xd00000000000007d;
      SVar13.bridgeObject = (void *)0x8000000100dba250;
      SVar13.str = (char *)0xd00000000000007d;
      SVar42.bridgeObject = param_5;
      SVar42.str = param_4;
      Swift::String::append(SVar13,SVar42);
      local_120 = 10;
      goto LAB_100a80f18;
    }
LAB_100a80d00:
    local_d8 = 0;
    local_d0 = 0xe000000000000000;
    _Var8.unknown = param_3.unknown;
    pcVar10 = param_5;
    Swift::_StringGuts::grow(0x22,param_3);
    _swift_bridgeObjectRelease(local_d0);
    local_d8 = 0xd000000000000016;
    local_d0 = 0x8000000100db9380;
    FUN_1005b32e4();
    SVar26.bridgeObject = _Var8.unknown;
    SVar26.str = param_5;
    SVar55.bridgeObject = pcVar10;
    SVar55.str = param_4;
    Swift::String::append(SVar26,SVar55);
    _swift_bridgeObjectRelease(_Var8.unknown);
    SVar27.bridgeObject = &DAT_e600000000000000;
    SVar27.str = (char *)0x27206f742027;
    puVar7 = &DAT_e600000000000000;
    SVar56.bridgeObject = pcVar10;
    SVar56.str = param_4;
    Swift::String::append(SVar27,SVar56);
    FUN_1005b32e4();
    SVar28.bridgeObject = puVar7;
    SVar28.str = param_6;
    SVar57.bridgeObject = pcVar10;
    SVar57.str = param_4;
    Swift::String::append(SVar28,SVar57);
    _swift_bridgeObjectRelease(puVar7);
    SVar29.bridgeObject = &SUB_e200000000000000;
    SVar29.str = (char *)0x2e27;
    pcVar4 = (char *)0x2e27;
    SVar58.bridgeObject = pcVar10;
    SVar58.str = param_4;
    Swift::String::append(SVar29,SVar58);
    local_120 = 8;
  }
  else {
    pcVar10 = param_5;
    if (iVar9 == 0x16) {
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x47,param_3);
      pvVar6 = (void *)0x8000000100db9380;
      SVar21.bridgeObject = (void *)0x8000000100db9380;
      SVar21.str = (char *)0xd000000000000016;
      SVar50.bridgeObject = pcVar10;
      SVar50.str = param_4;
      Swift::String::append(SVar21,SVar50);
      FUN_1005b32e4();
      SVar22.bridgeObject = pvVar6;
      SVar22.str = param_5;
      SVar51.bridgeObject = pcVar10;
      SVar51.str = param_4;
      Swift::String::append(SVar22,SVar51);
      _swift_bridgeObjectRelease(pvVar6);
      SVar23.bridgeObject = &DAT_e600000000000000;
      SVar23.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar52.bridgeObject = pcVar10;
      SVar52.str = param_4;
      Swift::String::append(SVar23,SVar52);
      FUN_1005b32e4();
      SVar24.bridgeObject = puVar7;
      SVar24.str = param_6;
      SVar53.bridgeObject = pcVar10;
      SVar53.str = param_4;
      Swift::String::append(SVar24,SVar53);
      _swift_bridgeObjectRelease(puVar7);
      pcVar1 = "\', the destination path already exists.";
      pcVar4 = (char *)0xd000000000000027;
    }
    else {
      if (iVar9 == 0x18) {
        local_d8 = 0;
        local_d0 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x61,param_3);
        pvVar6 = (void *)0x8000000100dba1c0;
        SVar35.bridgeObject = (void *)0x8000000100dba1c0;
        SVar35.str = (char *)0xd00000000000001c;
        SVar64.bridgeObject = pcVar10;
        SVar64.str = param_4;
        Swift::String::append(SVar35,SVar64);
        FUN_1005b32e4();
        SVar36.bridgeObject = pvVar6;
        SVar36.str = param_5;
        SVar65.bridgeObject = pcVar10;
        SVar65.str = param_4;
        Swift::String::append(SVar36,SVar65);
        _swift_bridgeObjectRelease(pvVar6);
        pvVar6 = (void *)0x8000000100dba1e0;
        SVar37.bridgeObject = (void *)0x8000000100dba1e0;
        SVar37.str = (char *)0xd000000000000014;
        SVar66.bridgeObject = pcVar10;
        SVar66.str = param_4;
        Swift::String::append(SVar37,SVar66);
        FUN_1005b32e4();
        SVar38.bridgeObject = pvVar6;
        SVar38.str = param_6;
        SVar67.bridgeObject = pcVar10;
        SVar67.str = param_4;
        Swift::String::append(SVar38,SVar67);
        _swift_bridgeObjectRelease(pvVar6);
        pcVar4 = (char *)0xd00000000000002d;
        SVar39.bridgeObject = (void *)0x8000000100dba200;
        SVar39.str = (char *)0xd00000000000002d;
        SVar68.bridgeObject = pcVar10;
        SVar68.str = param_4;
        Swift::String::append(SVar39,SVar68);
        local_120 = 7;
        goto LAB_100a80f18;
      }
      if (iVar9 != 0x2d) goto LAB_100a80d00;
      local_d8 = 0;
      local_d0 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x66,param_3);
      pvVar6 = (void *)0x8000000100db9380;
      SVar14.bridgeObject = (void *)0x8000000100db9380;
      SVar14.str = (char *)0xd000000000000016;
      SVar43.bridgeObject = pcVar10;
      SVar43.str = param_4;
      Swift::String::append(SVar14,SVar43);
      FUN_1005b32e4();
      SVar15.bridgeObject = pvVar6;
      SVar15.str = param_5;
      SVar44.bridgeObject = pcVar10;
      SVar44.str = param_4;
      Swift::String::append(SVar15,SVar44);
      _swift_bridgeObjectRelease(pvVar6);
      SVar16.bridgeObject = &DAT_e600000000000000;
      SVar16.str = (char *)0x27206f742027;
      puVar7 = &DAT_e600000000000000;
      SVar45.bridgeObject = pcVar10;
      SVar45.str = param_4;
      Swift::String::append(SVar16,SVar45);
      FUN_1005b32e4();
      SVar17.bridgeObject = puVar7;
      SVar17.str = param_6;
      SVar46.bridgeObject = pcVar10;
      SVar46.str = param_4;
      Swift::String::append(SVar17,SVar46);
      _swift_bridgeObjectRelease(puVar7);
      pcVar1 = "\', the item to copy is not a directory, symbolic link or regular file.";
      pcVar4 = (char *)0xd000000000000046;
    }
    SVar25.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    SVar25.str = pcVar4;
    SVar54.bridgeObject = pcVar10;
    SVar54.str = param_4;
    Swift::String::append(SVar25,SVar54);
    local_120 = 1;
  }
LAB_100a80f18:
  uVar3 = local_d0;
  uVar2 = local_d8;
  FUN_100a57a58();
  puVar5 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,pcVar4,0,0);
  *(undefined8 *)pcVar4 = param_2;
  *(undefined **)(pcVar4 + 8) = param_3.unknown;
  *(int *)(pcVar4 + 0x10) = iVar9;
  uStack_f8 = param_7[1];
  local_100 = *param_7;
  uStack_e8 = param_7[3];
  uStack_f0 = param_7[2];
  local_e0 = param_7[4];
  local_d8 = CONCAT71(local_d8._1_7_,local_120);
  uStack_118 = uVar2;
  uStack_110 = uVar3;
  local_108 = puVar5;
  local_d0 = uVar2;
  uStack_c8 = uVar3;
  local_c0 = puVar5;
  local_b8 = local_100;
  uStack_b0 = uStack_f8;
  local_a8 = uStack_f0;
  uStack_a0 = uStack_e8;
  local_98 = local_e0;
  local_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = local_100;
  uStack_78 = uStack_f8;
  _swift_bridgeObjectRetain(param_3.unknown);
  FUN_10000ca28(&uStack_80,auStack_168);
  FUN_10000ca28(&local_90,auStack_168);
  FUN_100a50050(&local_120,auStack_168);
  FUN_100a5008c(&local_d8);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = local_e0;
  param_1[1] = uStack_118;
  *param_1 = CONCAT71(uStack_11f,local_120);
  param_1[3] = local_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100a80fe0 | FUN_100a80fe0 */

void FUN_100a80fe0(undefined8 *param_1,undefined *param_2,char *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  _StringGuts _Var5;
  void *pvVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 uVar9;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined1 auStack_158 [72];
  int local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  local_c8 = param_2;
  _swift_errorRetain();
  pcVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar7 = &DAT_100ee42f8;
  iVar2 = (int)&local_110;
  _Var5.unknown = (undefined *)&local_c8;
  _swift_dynamicCast();
  iVar1 = local_110;
  if (iVar2 == 0) {
    local_c8 = (undefined *)0x0;
    local_c0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x18,_Var5);
    _swift_bridgeObjectRelease(local_c0);
    local_c8 = (undefined *)0xd000000000000014;
    local_c0 = (undefined *)0x8000000100db9770;
    FUN_1005b32e4();
    SVar13.bridgeObject = _Var5.unknown;
    SVar13.str = param_3;
    SVar23.bridgeObject = puVar7;
    SVar23.str = pcVar3;
    Swift::String::append(SVar13,SVar23);
    _swift_bridgeObjectRelease(_Var5.unknown);
    SVar14.bridgeObject = &SUB_e200000000000000;
    SVar14.str = (char *)0x2e27;
    SVar24.bridgeObject = puVar7;
    SVar24.str = pcVar3;
    Swift::String::append(SVar14,SVar24);
    uVar8 = local_c0;
    puVar7 = local_c8;
    _swift_errorRetain(param_2);
    uVar9 = 8;
  }
  else {
    if (local_110 == 5) {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x3c,_Var5);
      pvVar6 = (void *)0x8000000100db9790;
      SVar15.bridgeObject = (void *)0x8000000100db9790;
      SVar15.str = (char *)0xd000000000000028;
      SVar25.bridgeObject = puVar7;
      SVar25.str = pcVar3;
      Swift::String::append(SVar15,SVar25);
      FUN_1005b32e4();
      SVar16.bridgeObject = pvVar6;
      SVar16.str = param_3;
      SVar26.bridgeObject = puVar7;
      SVar26.str = pcVar3;
      Swift::String::append(SVar16,SVar26);
      _swift_bridgeObjectRelease(pvVar6);
      puVar4 = (undefined8 *)0xd000000000000012;
      SVar17.bridgeObject = (void *)0x8000000100db97c0;
      SVar17.str = (char *)0xd000000000000012;
      SVar27.bridgeObject = puVar7;
      SVar27.str = pcVar3;
      Swift::String::append(SVar17,SVar27);
      uVar9 = 2;
    }
    else if (local_110 == 9) {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x3a,_Var5);
      pvVar6 = (void *)0x8000000100db97e0;
      SVar10.bridgeObject = (void *)0x8000000100db97e0;
      SVar10.str = (char *)0xd000000000000035;
      SVar20.bridgeObject = puVar7;
      SVar20.str = pcVar3;
      Swift::String::append(SVar10,SVar20);
      FUN_1005b32e4();
      SVar11.bridgeObject = pvVar6;
      SVar11.str = param_3;
      SVar21.bridgeObject = puVar7;
      SVar21.str = pcVar3;
      Swift::String::append(SVar11,SVar21);
      _swift_bridgeObjectRelease(pvVar6);
      puVar4 = (undefined8 *)0x2e2927;
      SVar12.bridgeObject = (void *)0xe300000000000000;
      SVar12.str = (char *)0x2e2927;
      SVar22.bridgeObject = puVar7;
      SVar22.str = pcVar3;
      Swift::String::append(SVar12,SVar22);
      uVar9 = 0;
    }
    else {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x18,_Var5);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = (undefined *)0xd000000000000014;
      local_c0 = (undefined *)0x8000000100db9770;
      FUN_1005b32e4();
      SVar18.bridgeObject = _Var5.unknown;
      SVar18.str = param_3;
      SVar28.bridgeObject = puVar7;
      SVar28.str = pcVar3;
      Swift::String::append(SVar18,SVar28);
      _swift_bridgeObjectRelease(_Var5.unknown);
      SVar19.bridgeObject = &SUB_e200000000000000;
      SVar19.str = (char *)0x2e27;
      puVar4 = (undefined8 *)0x2e27;
      SVar29.bridgeObject = puVar7;
      SVar29.str = pcVar3;
      Swift::String::append(SVar19,SVar29);
      uVar9 = 8;
    }
    uVar8 = local_c0;
    puVar7 = local_c8;
    FUN_100a57a58();
    param_2 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar4,0,0);
    *puVar4 = 0x65736f6c63;
    puVar4[1] = &DAT_e500000000000000;
    *(int *)(puVar4 + 2) = iVar1;
  }
  uStack_e8 = param_4[1];
  local_f0 = *param_4;
  uStack_d8 = param_4[3];
  uStack_e0 = param_4[2];
  local_d0 = param_4[4];
  local_110 = CONCAT31(local_110._1_3_,uVar9);
  local_c8 = (undefined *)CONCAT71(local_c8._1_7_,uVar9);
  uStack_108 = puVar7;
  uStack_100 = uVar8;
  local_f8 = param_2;
  local_c0 = puVar7;
  uStack_b8 = uVar8;
  local_b0 = param_2;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = CONCAT44(uStack_10c,local_110);
  param_1[3] = local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a812fc | FUN_100a812fc */

void FUN_100a812fc(undefined8 *param_1,ulong param_2,_StringGuts param_3,char *param_4,void *param_5
                  ,char *param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined *puVar6;
  void *pvVar7;
  char *pcVar8;
  int iVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  char *pcVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  undefined1 auStack_168 [72];
  undefined1 local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  iVar9 = (int)param_5;
  uVar10 = (undefined1)param_2;
  if (iVar9 == 1) {
    local_d8 = 0;
    local_d0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x9f,param_3);
    SVar19.bridgeObject = (void *)0x8000000100db9c10;
    SVar19.str = (char *)0xd000000000000011;
    SVar43.bridgeObject = param_5;
    SVar43.str = param_4;
    Swift::String::append(SVar19,SVar43);
    pcVar8 = "\x01\x02";
    puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    local_120 = uVar10;
    Swift::__print_unlocked
              (&local_120,&local_d8,&DAT_100f2ff50,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar7 = (void *)0xee002720736e6f69;
    SVar20.bridgeObject = (void *)0xee002720736e6f69;
    SVar20.str = (char *)0x7373696d72657020;
    SVar44.bridgeObject = puVar6;
    SVar44.str = pcVar8;
    Swift::String::append(SVar20,SVar44);
    FUN_1005b76c0();
    SVar21.bridgeObject = pvVar7;
    SVar21.str = param_3.unknown;
    SVar45.bridgeObject = puVar6;
    SVar45.str = pcVar8;
    Swift::String::append(SVar21,SVar45);
    _swift_bridgeObjectRelease(pvVar7);
    pvVar7 = (void *)0xec0000002720656c;
    SVar22.bridgeObject = (void *)0xec0000002720656c;
    SVar22.str = (char *)0x696620726f662027;
    SVar46.bridgeObject = puVar6;
    SVar46.str = pcVar8;
    Swift::String::append(SVar22,SVar46);
    FUN_1005b32e4();
    SVar23.bridgeObject = pvVar7;
    SVar23.str = param_6;
    SVar47.bridgeObject = puVar6;
    SVar47.str = pcVar8;
    Swift::String::append(SVar23,SVar47);
    _swift_bridgeObjectRelease(pvVar7);
    puVar4 = (undefined8 *)0xd00000000000006e;
    SVar24.bridgeObject = (void *)0x8000000100db9c30;
    SVar24.str = (char *)0xd00000000000006e;
    SVar48.bridgeObject = puVar6;
    SVar48.str = pcVar8;
    Swift::String::append(SVar24,SVar48);
    uVar10 = 3;
  }
  else if (iVar9 == 0x16) {
    local_d8 = CONCAT62(local_d8._2_6_,(short)param_4);
    uVar5 = param_2;
    FUN_100a83438();
    pcVar8 = (char *)0x0;
    puVar6 = PTR___type_metadata_for_Swift_UInt16_100eade18;
    SVar19 = Swift::String::_init
                       (&local_d8,8,0,PTR___type_metadata_for_Swift_UInt16_100eade18,uVar5);
    if ((param_2 & 0xff) == 0) {
      puVar11 = (undefined1 *)0xe300000000000000;
      pcVar12 = (char *)0x746573;
    }
    else {
      bVar3 = ((uint)param_2 & 0xff) != 1;
      pcVar12 = (char *)0x6465646461;
      if (bVar3) {
        pcVar12 = (char *)0x6465766f6d6572;
      }
      puVar11 = &DAT_e500000000000000;
      if (bVar3) {
        puVar11 = &DAT_e700000000000000;
      }
    }
    local_d8 = 0;
    local_d0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x39,(_StringGuts)SVar19.bridgeObject);
    SVar31.bridgeObject = (void *)0x8000000100db9ca0;
    SVar31.str = (char *)0xd000000000000016;
    SVar55.bridgeObject = puVar6;
    SVar55.str = pcVar8;
    Swift::String::append(SVar31,SVar55);
    SVar56.bridgeObject = puVar6;
    SVar56.str = pcVar8;
    Swift::String::append(SVar19,SVar56);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar32.bridgeObject = (void *)0x8000000100db9cc0;
    SVar32.str = (char *)0xd000000000000010;
    SVar57.bridgeObject = puVar6;
    SVar57.str = pcVar8;
    Swift::String::append(SVar32,SVar57);
    SVar33.bridgeObject = puVar11;
    SVar33.str = pcVar12;
    SVar58.bridgeObject = puVar6;
    SVar58.str = pcVar8;
    Swift::String::append(SVar33,SVar58);
    _swift_bridgeObjectRelease(puVar11);
    pvVar7 = (void *)0xeb00000000272065;
    SVar34.bridgeObject = (void *)0xeb00000000272065;
    SVar34.str = (char *)0x6c696620726f6620;
    SVar59.bridgeObject = puVar6;
    SVar59.str = pcVar8;
    Swift::String::append(SVar34,SVar59);
    FUN_1005b32e4();
    SVar35.bridgeObject = pvVar7;
    SVar35.str = param_6;
    SVar60.bridgeObject = puVar6;
    SVar60.str = pcVar8;
    Swift::String::append(SVar35,SVar60);
    _swift_bridgeObjectRelease(pvVar7);
    SVar36.bridgeObject = &SUB_e200000000000000;
    SVar36.str = (char *)0x2e27;
    puVar4 = (undefined8 *)0x2e27;
    SVar61.bridgeObject = puVar6;
    SVar61.str = pcVar8;
    Swift::String::append(SVar36,SVar61);
    uVar10 = 1;
  }
  else if (iVar9 == 9) {
    local_d8 = 0;
    local_d0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2e,param_3);
    SVar13.bridgeObject = (void *)0xea00000000002074;
    SVar13.str = (char *)0x6f6e20646c756f43;
    SVar37.bridgeObject = param_5;
    SVar37.str = param_4;
    Swift::String::append(SVar13,SVar37);
    pcVar8 = "\x01\x02";
    puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    local_120 = uVar10;
    Swift::__print_unlocked
              (&local_120,&local_d8,&DAT_100f2ff50,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar7 = (void *)0xee002720736e6f69;
    SVar14.bridgeObject = (void *)0xee002720736e6f69;
    SVar14.str = (char *)0x7373696d72657020;
    SVar38.bridgeObject = puVar6;
    SVar38.str = pcVar8;
    Swift::String::append(SVar14,SVar38);
    FUN_1005b76c0();
    SVar15.bridgeObject = pvVar7;
    SVar15.str = param_3.unknown;
    SVar39.bridgeObject = puVar6;
    SVar39.str = pcVar8;
    Swift::String::append(SVar15,SVar39);
    _swift_bridgeObjectRelease(pvVar7);
    SVar16.bridgeObject = &DAT_e400000000000000;
    SVar16.str = (char *)0x27202c27;
    puVar11 = &DAT_e400000000000000;
    SVar40.bridgeObject = puVar6;
    SVar40.str = pcVar8;
    Swift::String::append(SVar16,SVar40);
    FUN_1005b32e4();
    SVar17.bridgeObject = puVar11;
    SVar17.str = param_6;
    SVar41.bridgeObject = puVar6;
    SVar41.str = pcVar8;
    Swift::String::append(SVar17,SVar41);
    _swift_bridgeObjectRelease(puVar11);
    puVar4 = (undefined8 *)0x6f6c632073692027;
    SVar18.bridgeObject = (void *)0xec0000002e646573;
    SVar18.str = (char *)0x6f6c632073692027;
    SVar42.bridgeObject = puVar6;
    SVar42.str = pcVar8;
    Swift::String::append(SVar18,SVar42);
    uVar10 = 0;
  }
  else {
    local_d8 = 0;
    local_d0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x26,param_3);
    SVar25.bridgeObject = (void *)0xea00000000002074;
    SVar25.str = (char *)0x6f6e20646c756f43;
    SVar49.bridgeObject = param_5;
    SVar49.str = param_4;
    Swift::String::append(SVar25,SVar49);
    pcVar8 = "\x01\x02";
    puVar6 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    local_120 = uVar10;
    Swift::__print_unlocked
              (&local_120,&local_d8,&DAT_100f2ff50,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pvVar7 = (void *)0xee002720736e6f69;
    SVar26.bridgeObject = (void *)0xee002720736e6f69;
    SVar26.str = (char *)0x7373696d72657020;
    SVar50.bridgeObject = puVar6;
    SVar50.str = pcVar8;
    Swift::String::append(SVar26,SVar50);
    FUN_1005b76c0();
    SVar27.bridgeObject = pvVar7;
    SVar27.str = param_3.unknown;
    SVar51.bridgeObject = puVar6;
    SVar51.str = pcVar8;
    Swift::String::append(SVar27,SVar51);
    _swift_bridgeObjectRelease(pvVar7);
    SVar28.bridgeObject = &DAT_e600000000000000;
    SVar28.str = (char *)0x27206f742027;
    puVar11 = &DAT_e600000000000000;
    SVar52.bridgeObject = puVar6;
    SVar52.str = pcVar8;
    Swift::String::append(SVar28,SVar52);
    FUN_1005b32e4();
    SVar29.bridgeObject = puVar11;
    SVar29.str = param_6;
    SVar53.bridgeObject = puVar6;
    SVar53.str = pcVar8;
    Swift::String::append(SVar29,SVar53);
    _swift_bridgeObjectRelease(puVar11);
    SVar30.bridgeObject = &SUB_e200000000000000;
    SVar30.str = (char *)0x2e27;
    puVar4 = (undefined8 *)0x2e27;
    SVar54.bridgeObject = puVar6;
    SVar54.str = pcVar8;
    Swift::String::append(SVar30,SVar54);
    uVar10 = 8;
  }
  uVar2 = local_d0;
  uVar1 = local_d8;
  FUN_100a57a58();
  puVar6 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar4,0,0);
  *puVar4 = 0x646f6d686366;
  puVar4[1] = &DAT_e600000000000000;
  *(int *)(puVar4 + 2) = iVar9;
  uStack_f8 = param_7[1];
  local_100 = *param_7;
  uStack_e8 = param_7[3];
  uStack_f0 = param_7[2];
  local_e0 = param_7[4];
  local_d8 = CONCAT71(local_d8._1_7_,uVar10);
  local_120 = uVar10;
  uStack_118 = uVar1;
  uStack_110 = uVar2;
  local_108 = puVar6;
  local_d0 = uVar1;
  uStack_c8 = uVar2;
  local_c0 = puVar6;
  local_b8 = local_100;
  uStack_b0 = uStack_f8;
  local_a8 = uStack_f0;
  uStack_a0 = uStack_e8;
  local_98 = local_e0;
  local_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = local_100;
  uStack_78 = uStack_f8;
  FUN_10000ca28(&uStack_80,auStack_168);
  FUN_10000ca28(&local_90,auStack_168);
  FUN_100a50050(&local_120,auStack_168);
  FUN_100a5008c(&local_d8);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = local_e0;
  param_1[1] = uStack_118;
  *param_1 = CONCAT71(uStack_11f,local_120);
  param_1[3] = local_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100a8188c | FUN_100a8188c */

void FUN_100a8188c(undefined8 *param_1,undefined8 *param_2,_StringGuts param_3,char *param_4,
                  void *param_5)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined1 auStack_148 [72];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  iVar1 = (int)param_2;
  if (iVar1 < 0xd) {
    if (iVar1 == 1) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      _Var4.unknown = param_3.unknown;
      pcVar5 = param_4;
      Swift::_StringGuts::grow(0x2e,param_3);
      _swift_bridgeObjectRelease(local_b0);
      local_b8 = 0xd00000000000002a;
      local_b0 = 0x8000000100db9bb0;
      FUN_1005b32e4();
      SVar14.bridgeObject = _Var4.unknown;
      SVar14.str = param_3.unknown;
      SVar24.bridgeObject = param_5;
      SVar24.str = pcVar5;
      Swift::String::append(SVar14,SVar24);
      _swift_bridgeObjectRelease(_Var4.unknown);
      SVar15.bridgeObject = &SUB_e200000000000000;
      SVar15.str = (char *)0x2e27;
      param_2 = (undefined8 *)0x2e27;
      SVar25.bridgeObject = param_5;
      SVar25.str = pcVar5;
      Swift::String::append(SVar15,SVar25);
      uVar8 = 9;
      uVar6 = local_b8;
      uVar7 = local_b0;
      goto LAB_100a81af0;
    }
    if (iVar1 == 9) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      pcVar5 = param_4;
      Swift::_StringGuts::grow(0x33,param_3);
      pvVar3 = (void *)0x8000000100db9be0;
      SVar9.bridgeObject = (void *)0x8000000100db9be0;
      SVar9.str = (char *)0xd000000000000025;
      SVar19.bridgeObject = param_5;
      SVar19.str = pcVar5;
      Swift::String::append(SVar9,SVar19);
      FUN_1005b32e4();
      SVar10.bridgeObject = pvVar3;
      SVar10.str = param_3.unknown;
      SVar20.bridgeObject = param_5;
      SVar20.str = pcVar5;
      Swift::String::append(SVar10,SVar20);
      _swift_bridgeObjectRelease(pvVar3);
      param_2 = (undefined8 *)0x6f6c632073692027;
      SVar11.bridgeObject = (void *)0xec0000002e646573;
      SVar11.str = (char *)0x6f6c632073692027;
      SVar21.bridgeObject = param_5;
      SVar21.str = pcVar5;
      Swift::String::append(SVar11,SVar21);
      uVar8 = 0;
      uVar6 = local_b8;
      uVar7 = local_b0;
      goto LAB_100a81af0;
    }
  }
  else {
    if (iVar1 == 0xd) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      pcVar5 = param_4;
      Swift::_StringGuts::grow(0x33,param_3);
      pvVar3 = (void *)0x8000000100db9b80;
      SVar16.bridgeObject = (void *)0x8000000100db9b80;
      SVar16.str = (char *)0xd00000000000002f;
      SVar26.bridgeObject = param_5;
      SVar26.str = pcVar5;
      Swift::String::append(SVar16,SVar26);
      FUN_1005b32e4();
      SVar17.bridgeObject = pvVar3;
      SVar17.str = param_3.unknown;
      SVar27.bridgeObject = param_5;
      SVar27.str = pcVar5;
      Swift::String::append(SVar17,SVar27);
      _swift_bridgeObjectRelease(pvVar3);
      SVar18.bridgeObject = &SUB_e200000000000000;
      SVar18.str = (char *)0x2e27;
      param_2 = (undefined8 *)0x2e27;
      SVar28.bridgeObject = param_5;
      SVar28.str = pcVar5;
      Swift::String::append(SVar18,SVar28);
      uVar8 = 3;
      uVar6 = local_b8;
      uVar7 = local_b0;
      goto LAB_100a81af0;
    }
    if (iVar1 == 0x2d) {
      uVar8 = 9;
      uVar6 = 0xd000000000000044;
      uVar7 = 0x8000000100db9a20;
      goto LAB_100a81af0;
    }
  }
  local_b8 = 0;
  local_b0 = 0xe000000000000000;
  _Var4.unknown = param_3.unknown;
  pcVar5 = param_4;
  Swift::_StringGuts::grow(0x2f,param_3);
  _swift_bridgeObjectRelease(local_b0);
  local_b8 = 0xd00000000000002b;
  local_b0 = 0x8000000100db9b50;
  FUN_1005b32e4();
  SVar12.bridgeObject = _Var4.unknown;
  SVar12.str = param_3.unknown;
  SVar22.bridgeObject = param_5;
  SVar22.str = pcVar5;
  Swift::String::append(SVar12,SVar22);
  _swift_bridgeObjectRelease(_Var4.unknown);
  SVar13.bridgeObject = &SUB_e200000000000000;
  SVar13.str = (char *)0x2e27;
  param_2 = (undefined8 *)0x2e27;
  SVar23.bridgeObject = param_5;
  SVar23.str = pcVar5;
  Swift::String::append(SVar13,SVar23);
  uVar8 = 8;
  uVar6 = local_b8;
  uVar7 = local_b0;
LAB_100a81af0:
  FUN_100a57a58();
  puVar2 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,param_2,0,0);
  *param_2 = 0x7461787473696c66;
  param_2[1] = 0xea00000000007274;
  *(int *)(param_2 + 2) = iVar1;
  uStack_d8 = *(undefined8 *)(param_4 + 8);
  local_e0 = *(undefined8 *)param_4;
  uStack_c8 = *(undefined8 *)(param_4 + 0x18);
  uStack_d0 = *(undefined8 *)(param_4 + 0x10);
  local_c0 = *(undefined8 *)(param_4 + 0x20);
  local_b8 = CONCAT71(local_b8._1_7_,uVar8);
  local_100 = uVar8;
  uStack_f8 = uVar6;
  uStack_f0 = uVar7;
  local_e8 = puVar2;
  local_b0 = uVar6;
  uStack_a8 = uVar7;
  local_a0 = puVar2;
  local_98 = local_e0;
  uStack_90 = uStack_d8;
  local_88 = uStack_d0;
  uStack_80 = uStack_c8;
  local_78 = local_c0;
  local_70 = uStack_d0;
  uStack_68 = uStack_c8;
  uStack_60 = local_e0;
  uStack_58 = uStack_d8;
  FUN_10000ca28(&uStack_60,auStack_148);
  FUN_10000ca28(&local_70,auStack_148);
  FUN_100a50050(&local_100,auStack_148);
  FUN_100a5008c(&local_b8);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = CONCAT71(uStack_ff,local_100);
  param_1[3] = local_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Address: 0x100a81bc4 | FUN_100a81bc4 */

void FUN_100a81bc4(ulong *param_1,UTF8View param_2,_StringGuts param_3,char *param_4,char *param_5,
                  ulong *param_6)

{
  undefined *puVar1;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  String SVar6;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined1 auStack_158 [72];
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 *puVar2;
  
  iVar3 = (int)param_4;
  if (iVar3 == 0x3f) {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x6a,param_3);
    SVar11.bridgeObject = (void *)0x8000000100db99a0;
    SVar11.str = (char *)0xd000000000000029;
    SVar24.bridgeObject = param_5;
    SVar24.str = param_4;
    Swift::String::append(SVar11,SVar24);
    if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
      local_110 = (ulong)param_2.unknown & 0xffffffffffff;
      if (((ulong)param_3.unknown & 0x2000000000000000) != 0) {
        local_110 = (ulong)param_3.unknown >> 0x38 & 0xf;
      }
    }
    else {
      local_110 = Swift::String::UTF8View::_foreignCount(param_2);
    }
    SVar11 = Swift::CustomStringConvertible::get_description();
    SVar25.bridgeObject = param_5;
    SVar25.str = param_4;
    Swift::String::append(SVar11,SVar25);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    SVar12.bridgeObject = (void *)0x8000000100db99d0;
    SVar12.str = (char *)0xd00000000000001d;
    SVar26.bridgeObject = param_5;
    SVar26.str = param_4;
    Swift::String::append(SVar12,SVar26);
    local_110 = CONCAT44(local_110._4_4_,0x7f);
    SVar11 = Swift::CustomStringConvertible::get_description();
    SVar27.bridgeObject = param_5;
    SVar27.str = param_4;
    Swift::String::append(SVar11,SVar27);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    param_2.unknown = (undefined *)0xd000000000000020;
    SVar13.bridgeObject = (void *)0x8000000100db99f0;
    SVar13.str = (char *)0xd000000000000020;
    SVar28.bridgeObject = param_5;
    SVar28.str = param_4;
    Swift::String::append(SVar13,SVar28);
    uVar5 = 1;
    uStack_108 = local_c8;
    uStack_100 = local_c0;
  }
  else if (iVar3 == 0x2d) {
    uVar5 = 9;
    uStack_108 = 0xd000000000000044;
    uStack_100 = 0x8000000100db9a20;
  }
  else if (iVar3 == 9) {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    pcVar4 = param_5;
    Swift::_StringGuts::grow(0x42,param_3);
    SVar6.bridgeObject = (void *)0x8000000100db9b20;
    SVar6.str = (char *)0xd00000000000002d;
    SVar19.bridgeObject = pcVar4;
    SVar19.str = param_4;
    Swift::String::append(SVar6,SVar19);
    SVar7.bridgeObject = param_3.unknown;
    SVar7.str = param_2.unknown;
    SVar20.bridgeObject = pcVar4;
    SVar20.str = param_4;
    Swift::String::append(SVar7,SVar20);
    SVar8.bridgeObject = &DAT_e500000000000000;
    SVar8.str = (char *)0x27202c2927;
    puVar2 = &DAT_e500000000000000;
    SVar21.bridgeObject = pcVar4;
    SVar21.str = param_4;
    Swift::String::append(SVar8,SVar21);
    FUN_1005b32e4();
    SVar9.bridgeObject = puVar2;
    SVar9.str = param_5;
    SVar22.bridgeObject = pcVar4;
    SVar22.str = param_4;
    Swift::String::append(SVar9,SVar22);
    _swift_bridgeObjectRelease(puVar2);
    param_2.unknown = (undefined *)0x6f6c632073692027;
    SVar10.bridgeObject = (void *)0xec0000002e646573;
    SVar10.str = (char *)0x6f6c632073692027;
    SVar23.bridgeObject = pcVar4;
    SVar23.str = param_4;
    Swift::String::append(SVar10,SVar23);
    uVar5 = 0;
    uStack_108 = local_c8;
    uStack_100 = local_c0;
  }
  else {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    pcVar4 = param_5;
    Swift::_StringGuts::grow(0x3b,param_3);
    SVar14.bridgeObject = (void *)0x8000000100db9b20;
    SVar14.str = (char *)0xd00000000000002d;
    SVar29.bridgeObject = pcVar4;
    SVar29.str = param_4;
    Swift::String::append(SVar14,SVar29);
    SVar15.bridgeObject = param_3.unknown;
    SVar15.str = param_2.unknown;
    SVar30.bridgeObject = pcVar4;
    SVar30.str = param_4;
    Swift::String::append(SVar15,SVar30);
    SVar16.bridgeObject = &DAT_e800000000000000;
    SVar16.str = (char *)0x2720726f66202927;
    puVar2 = &DAT_e800000000000000;
    SVar31.bridgeObject = pcVar4;
    SVar31.str = param_4;
    Swift::String::append(SVar16,SVar31);
    FUN_1005b32e4();
    SVar17.bridgeObject = puVar2;
    SVar17.str = param_5;
    SVar32.bridgeObject = pcVar4;
    SVar32.str = param_4;
    Swift::String::append(SVar17,SVar32);
    _swift_bridgeObjectRelease(puVar2);
    SVar18.bridgeObject = &SUB_e200000000000000;
    SVar18.str = (char *)0x2e27;
    param_2.unknown = (undefined *)0x2e27;
    SVar33.bridgeObject = pcVar4;
    SVar33.str = param_4;
    Swift::String::append(SVar18,SVar33);
    uVar5 = 8;
    uStack_108 = local_c8;
    uStack_100 = local_c0;
  }
  FUN_100a57a58();
  puVar1 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,param_2.unknown,0,0);
  *(undefined8 *)param_2.unknown = 0x7474617874656766;
  *(undefined8 *)((long)param_2.unknown + 8) = 0xe900000000000072;
  *(int *)((long)param_2.unknown + 0x10) = iVar3;
  uStack_e8 = param_6[1];
  local_f0 = *param_6;
  uStack_d8 = param_6[3];
  uStack_e0 = param_6[2];
  local_d0 = param_6[4];
  local_110 = CONCAT71(local_110._1_7_,uVar5);
  local_c8 = CONCAT71(local_c8._1_7_,uVar5);
  local_f8 = puVar1;
  local_c0 = uStack_108;
  uStack_b8 = uStack_100;
  local_b0 = puVar1;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = local_110;
  param_1[3] = (ulong)local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a81f60 | FUN_100a81f60 */

void FUN_100a81f60(ulong *param_1,UTF8View param_2,_StringGuts param_3,char *param_4,char *param_5,
                  ulong *param_6)

{
  undefined *puVar1;
  int iVar3;
  char *pcVar4;
  undefined1 uVar5;
  String SVar6;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined1 auStack_158 [72];
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 *puVar2;
  
  iVar3 = (int)param_4;
  if (iVar3 < 0x2d) {
    if (iVar3 == 9) {
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      pcVar4 = param_5;
      Swift::_StringGuts::grow(0x42,param_3);
      SVar16.bridgeObject = (void *)0x8000000100db9a70;
      SVar16.str = (char *)0xd00000000000002d;
      SVar33.bridgeObject = pcVar4;
      SVar33.str = param_4;
      Swift::String::append(SVar16,SVar33);
      SVar17.bridgeObject = param_3.unknown;
      SVar17.str = param_2.unknown;
      SVar34.bridgeObject = pcVar4;
      SVar34.str = param_4;
      Swift::String::append(SVar17,SVar34);
      SVar18.bridgeObject = &DAT_e500000000000000;
      SVar18.str = (char *)0x27202c2927;
      puVar2 = &DAT_e500000000000000;
      SVar35.bridgeObject = pcVar4;
      SVar35.str = param_4;
      Swift::String::append(SVar18,SVar35);
      FUN_1005b32e4();
      SVar19.bridgeObject = puVar2;
      SVar19.str = param_5;
      SVar36.bridgeObject = pcVar4;
      SVar36.str = param_4;
      Swift::String::append(SVar19,SVar36);
      _swift_bridgeObjectRelease(puVar2);
      param_2.unknown = (undefined *)0x6f6c632073692027;
      SVar20.bridgeObject = (void *)0xec0000002e646573;
      SVar20.str = (char *)0x6f6c632073692027;
      SVar37.bridgeObject = pcVar4;
      SVar37.str = param_4;
      Swift::String::append(SVar20,SVar37);
      uVar5 = 0;
      uStack_108 = local_c8;
      uStack_100 = local_c0;
      goto LAB_100a822a4;
    }
    if (iVar3 != 0x16) {
LAB_100a82124:
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      pcVar4 = param_5;
      Swift::_StringGuts::grow(0x3b,param_3);
      SVar11.bridgeObject = (void *)0x8000000100db9a70;
      SVar11.str = (char *)0xd00000000000002d;
      SVar28.bridgeObject = pcVar4;
      SVar28.str = param_4;
      Swift::String::append(SVar11,SVar28);
      SVar12.bridgeObject = param_3.unknown;
      SVar12.str = param_2.unknown;
      SVar29.bridgeObject = pcVar4;
      SVar29.str = param_4;
      Swift::String::append(SVar12,SVar29);
      SVar13.bridgeObject = &DAT_e800000000000000;
      SVar13.str = (char *)0x2720726f66202927;
      puVar2 = &DAT_e800000000000000;
      SVar30.bridgeObject = pcVar4;
      SVar30.str = param_4;
      Swift::String::append(SVar13,SVar30);
      FUN_1005b32e4();
      SVar14.bridgeObject = puVar2;
      SVar14.str = param_5;
      SVar31.bridgeObject = pcVar4;
      SVar31.str = param_4;
      Swift::String::append(SVar14,SVar31);
      _swift_bridgeObjectRelease(puVar2);
      SVar15.bridgeObject = &SUB_e200000000000000;
      SVar15.str = (char *)0x2e27;
      param_2.unknown = (undefined *)0x2e27;
      SVar32.bridgeObject = pcVar4;
      SVar32.str = param_4;
      Swift::String::append(SVar15,SVar32);
      uVar5 = 8;
      uStack_108 = local_c8;
      uStack_100 = local_c0;
      goto LAB_100a822a4;
    }
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3c,param_3);
    SVar6.bridgeObject = (void *)0x8000000100db9aa0;
    SVar6.str = (char *)0xd00000000000001a;
    SVar21.bridgeObject = param_5;
    SVar21.str = param_4;
    Swift::String::append(SVar6,SVar21);
    SVar7.bridgeObject = param_3.unknown;
    SVar7.str = param_2.unknown;
    SVar22.bridgeObject = param_5;
    SVar22.str = param_4;
    Swift::String::append(SVar7,SVar22);
    pcVar4 = "\') must be a valid UTF-8 string.";
  }
  else {
    if (iVar3 == 0x2d) {
      uStack_100 = 0x8000000100db9a20;
      uStack_108 = 0xd000000000000044;
      uVar5 = 9;
      goto LAB_100a822a4;
    }
    if (iVar3 != 0x3f) goto LAB_100a82124;
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x70,param_3);
    SVar8.bridgeObject = (void *)0x8000000100db99a0;
    SVar8.str = (char *)0xd000000000000029;
    SVar23.bridgeObject = param_5;
    SVar23.str = param_4;
    Swift::String::append(SVar8,SVar23);
    if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
      local_110 = (ulong)param_2.unknown & 0xffffffffffff;
      if (((ulong)param_3.unknown & 0x2000000000000000) != 0) {
        local_110 = (ulong)param_3.unknown >> 0x38 & 0xf;
      }
    }
    else {
      local_110 = Swift::String::UTF8View::_foreignCount(param_2);
    }
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar24.bridgeObject = param_5;
    SVar24.str = param_4;
    Swift::String::append(SVar8,SVar24);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    SVar9.bridgeObject = (void *)0x8000000100db9af0;
    SVar9.str = (char *)0xd000000000000023;
    SVar25.bridgeObject = param_5;
    SVar25.str = param_4;
    Swift::String::append(SVar9,SVar25);
    local_110 = CONCAT44(local_110._4_4_,0x7f);
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar26.bridgeObject = param_5;
    SVar26.str = param_4;
    Swift::String::append(SVar8,SVar26);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    pcVar4 = "). Use a shorter attribute name.";
  }
  SVar10.bridgeObject = (void *)((ulong)(pcVar4 + -0x20) | 0x8000000000000000);
  param_2.unknown = (undefined *)0xd000000000000020;
  SVar10.str = (char *)0xd000000000000020;
  SVar27.bridgeObject = param_5;
  SVar27.str = param_4;
  Swift::String::append(SVar10,SVar27);
  uVar5 = 1;
  uStack_108 = local_c8;
  uStack_100 = local_c0;
LAB_100a822a4:
  FUN_100a57a58();
  puVar1 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,param_2.unknown,0,0);
  *(undefined8 *)param_2.unknown = 0x7474617874657366;
  *(undefined8 *)((long)param_2.unknown + 8) = 0xe900000000000072;
  *(int *)((long)param_2.unknown + 0x10) = iVar3;
  uStack_e8 = param_6[1];
  local_f0 = *param_6;
  uStack_d8 = param_6[3];
  uStack_e0 = param_6[2];
  local_d0 = param_6[4];
  local_110 = CONCAT71(local_110._1_7_,uVar5);
  local_c8 = CONCAT71(local_c8._1_7_,uVar5);
  local_f8 = puVar1;
  local_c0 = uStack_108;
  uStack_b8 = uStack_100;
  local_b0 = puVar1;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = local_110;
  param_1[3] = (ulong)local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a8238c | FUN_100a8238c */

void FUN_100a8238c(ulong *param_1,UTF8View param_2,_StringGuts param_3,char *param_4,char *param_5,
                  ulong *param_6)

{
  undefined *puVar1;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  undefined1 uVar6;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_158 [72];
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined *local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 *puVar2;
  
  iVar4 = (int)param_4;
  if (iVar4 == 0x3f) {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x6a,param_3);
    SVar12.bridgeObject = (void *)0x8000000100db99a0;
    SVar12.str = (char *)0xd000000000000029;
    SVar25.bridgeObject = param_5;
    SVar25.str = param_4;
    Swift::String::append(SVar12,SVar25);
    if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
      local_110 = (ulong)param_2.unknown & 0xffffffffffff;
      if (((ulong)param_3.unknown & 0x2000000000000000) != 0) {
        local_110 = (ulong)param_3.unknown >> 0x38 & 0xf;
      }
    }
    else {
      local_110 = Swift::String::UTF8View::_foreignCount(param_2);
    }
    SVar12 = Swift::CustomStringConvertible::get_description();
    SVar26.bridgeObject = param_5;
    SVar26.str = param_4;
    Swift::String::append(SVar12,SVar26);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    SVar13.bridgeObject = (void *)0x8000000100db99d0;
    SVar13.str = (char *)0xd00000000000001d;
    SVar27.bridgeObject = param_5;
    SVar27.str = param_4;
    Swift::String::append(SVar13,SVar27);
    local_110 = CONCAT44(local_110._4_4_,0x7f);
    SVar12 = Swift::CustomStringConvertible::get_description();
    SVar28.bridgeObject = param_5;
    SVar28.str = param_4;
    Swift::String::append(SVar12,SVar28);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    param_2.unknown = (undefined *)0xd000000000000020;
    SVar14.bridgeObject = (void *)0x8000000100db99f0;
    SVar14.str = (char *)0xd000000000000020;
    SVar29.bridgeObject = param_5;
    SVar29.str = param_4;
    Swift::String::append(SVar14,SVar29);
    uVar6 = 1;
    uStack_108 = local_c8;
    uStack_100 = local_c0;
  }
  else if (iVar4 == 0x2d) {
    uVar6 = 9;
    uStack_108 = 0xd000000000000044;
    uStack_100 = 0x8000000100db9a20;
  }
  else if (iVar4 == 9) {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    pcVar5 = param_5;
    Swift::_StringGuts::grow(0x3b,param_3);
    SVar7.bridgeObject = (void *)0x8000000100db9970;
    SVar7.str = (char *)0xd000000000000026;
    SVar20.bridgeObject = pcVar5;
    SVar20.str = param_4;
    Swift::String::append(SVar7,SVar20);
    SVar8.bridgeObject = param_3.unknown;
    SVar8.str = param_2.unknown;
    SVar21.bridgeObject = pcVar5;
    SVar21.str = param_4;
    Swift::String::append(SVar8,SVar21);
    SVar9.bridgeObject = &DAT_e500000000000000;
    SVar9.str = (char *)0x27202c2927;
    puVar2 = &DAT_e500000000000000;
    SVar22.bridgeObject = pcVar5;
    SVar22.str = param_4;
    Swift::String::append(SVar9,SVar22);
    FUN_1005b32e4();
    SVar10.bridgeObject = puVar2;
    SVar10.str = param_5;
    SVar23.bridgeObject = pcVar5;
    SVar23.str = param_4;
    Swift::String::append(SVar10,SVar23);
    _swift_bridgeObjectRelease(puVar2);
    param_2.unknown = (undefined *)0x6f6c632073692027;
    SVar11.bridgeObject = (void *)0xec0000002e646573;
    SVar11.str = (char *)0x6f6c632073692027;
    SVar24.bridgeObject = pcVar5;
    SVar24.str = param_4;
    Swift::String::append(SVar11,SVar24);
    uVar6 = 0;
    uStack_108 = local_c8;
    uStack_100 = local_c0;
  }
  else {
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    pcVar5 = param_5;
    Swift::_StringGuts::grow(0x34,param_3);
    SVar15.bridgeObject = (void *)0x8000000100db9970;
    SVar15.str = (char *)0xd000000000000026;
    SVar30.bridgeObject = pcVar5;
    SVar30.str = param_4;
    Swift::String::append(SVar15,SVar30);
    SVar16.bridgeObject = param_3.unknown;
    SVar16.str = param_2.unknown;
    SVar31.bridgeObject = pcVar5;
    SVar31.str = param_4;
    Swift::String::append(SVar16,SVar31);
    pvVar3 = (void *)0xe900000000000027;
    SVar17.bridgeObject = (void *)0xe900000000000027;
    SVar17.str = (char *)0x206d6f7266202927;
    SVar32.bridgeObject = pcVar5;
    SVar32.str = param_4;
    Swift::String::append(SVar17,SVar32);
    FUN_1005b32e4();
    SVar18.bridgeObject = pvVar3;
    SVar18.str = param_5;
    SVar33.bridgeObject = pcVar5;
    SVar33.str = param_4;
    Swift::String::append(SVar18,SVar33);
    _swift_bridgeObjectRelease(pvVar3);
    SVar19.bridgeObject = (void *)0xe100000000000000;
    SVar19.str = (char *)0x27;
    param_2.unknown = (undefined *)0x27;
    SVar34.bridgeObject = pcVar5;
    SVar34.str = param_4;
    Swift::String::append(SVar19,SVar34);
    uVar6 = 8;
    uStack_108 = local_c8;
    uStack_100 = local_c0;
  }
  FUN_100a57a58();
  puVar1 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,param_2.unknown,0,0);
  *(undefined8 *)param_2.unknown = 0x7865766f6d657266;
  *(undefined8 *)((long)param_2.unknown + 8) = 0xec00000072747461;
  *(int *)((long)param_2.unknown + 0x10) = iVar4;
  uStack_e8 = param_6[1];
  local_f0 = *param_6;
  uStack_d8 = param_6[3];
  uStack_e0 = param_6[2];
  local_d0 = param_6[4];
  local_110 = CONCAT71(local_110._1_7_,uVar6);
  local_c8 = CONCAT71(local_c8._1_7_,uVar6);
  local_f8 = puVar1;
  local_c0 = uStack_108;
  uStack_b8 = uStack_100;
  local_b0 = puVar1;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = local_110;
  param_1[3] = (ulong)local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a82730 | FUN_100a82730 */

void FUN_100a82730(undefined8 *param_1,int param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
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
  undefined1 auStack_148 [72];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 == 5) {
    local_b8 = 0;
    local_b0 = 0xe000000000000000;
    _Var5.unknown = param_3.unknown;
    pcVar6 = param_4;
    Swift::_StringGuts::grow(0x2f,param_3);
    _swift_bridgeObjectRelease(local_b0);
    local_b8 = 0xd00000000000002b;
    local_b0 = 0x8000000100db9920;
    FUN_1005b32e4();
    SVar9.bridgeObject = _Var5.unknown;
    SVar9.str = param_3.unknown;
    SVar15.bridgeObject = param_5;
    SVar15.str = pcVar6;
    Swift::String::append(SVar9,SVar15);
    _swift_bridgeObjectRelease(_Var5.unknown);
    SVar10.bridgeObject = &SUB_e200000000000000;
    SVar10.str = (char *)0x2e27;
    puVar3 = (undefined8 *)0x2e27;
    SVar16.bridgeObject = param_5;
    SVar16.str = pcVar6;
    Swift::String::append(SVar10,SVar16);
    local_100 = 2;
  }
  else if (param_2 == 9) {
    local_b8 = 0;
    local_b0 = 0xe000000000000000;
    _Var5.unknown = param_3.unknown;
    pcVar6 = param_4;
    Swift::_StringGuts::grow(0x2b,param_3);
    _swift_bridgeObjectRelease(local_b0);
    local_b8 = 0xd00000000000001d;
    local_b0 = 0x8000000100db9950;
    FUN_1005b32e4();
    SVar7.bridgeObject = _Var5.unknown;
    SVar7.str = param_3.unknown;
    SVar13.bridgeObject = param_5;
    SVar13.str = pcVar6;
    Swift::String::append(SVar7,SVar13);
    _swift_bridgeObjectRelease(_Var5.unknown);
    puVar3 = (undefined8 *)0x6f6c632073692027;
    SVar8.bridgeObject = (void *)0xec0000002e646573;
    SVar8.str = (char *)0x6f6c632073692027;
    SVar14.bridgeObject = param_5;
    SVar14.str = pcVar6;
    Swift::String::append(SVar8,SVar14);
    local_100 = 0;
  }
  else {
    local_b8 = 0;
    local_b0 = 0xe000000000000000;
    _Var5.unknown = param_3.unknown;
    pcVar6 = param_4;
    Swift::_StringGuts::grow(0x20,param_3);
    _swift_bridgeObjectRelease(local_b0);
    local_b8 = 0xd00000000000001c;
    local_b0 = 0x8000000100db9900;
    FUN_1005b32e4();
    SVar11.bridgeObject = _Var5.unknown;
    SVar11.str = param_3.unknown;
    SVar17.bridgeObject = param_5;
    SVar17.str = pcVar6;
    Swift::String::append(SVar11,SVar17);
    _swift_bridgeObjectRelease(_Var5.unknown);
    SVar12.bridgeObject = &SUB_e200000000000000;
    SVar12.str = (char *)0x2e27;
    puVar3 = (undefined8 *)0x2e27;
    SVar18.bridgeObject = param_5;
    SVar18.str = pcVar6;
    Swift::String::append(SVar12,SVar18);
    local_100 = 8;
  }
  uVar2 = local_b0;
  uVar1 = local_b8;
  FUN_100a57a58();
  puVar4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
  *puVar3 = 0x636e797366;
  puVar3[1] = &DAT_e500000000000000;
  *(int *)(puVar3 + 2) = param_2;
  uStack_d8 = *(undefined8 *)(param_4 + 8);
  local_e0 = *(undefined8 *)param_4;
  uStack_c8 = *(undefined8 *)(param_4 + 0x18);
  uStack_d0 = *(undefined8 *)(param_4 + 0x10);
  local_c0 = *(undefined8 *)(param_4 + 0x20);
  local_b8 = CONCAT71(local_b8._1_7_,local_100);
  uStack_f8 = uVar1;
  uStack_f0 = uVar2;
  local_e8 = puVar4;
  local_b0 = uVar1;
  uStack_a8 = uVar2;
  local_a0 = puVar4;
  local_98 = local_e0;
  uStack_90 = uStack_d8;
  local_88 = uStack_d0;
  uStack_80 = uStack_c8;
  local_78 = local_c0;
  local_70 = uStack_d0;
  uStack_68 = uStack_c8;
  uStack_60 = local_e0;
  uStack_58 = uStack_d8;
  FUN_10000ca28(&uStack_60,auStack_148);
  FUN_10000ca28(&local_70,auStack_148);
  FUN_100a50050(&local_100,auStack_148);
  FUN_100a5008c(&local_b8);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = CONCAT71(uStack_ff,local_100);
  param_1[3] = local_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Address: 0x100a8298c | FUN_100a8298c */

void FUN_100a8298c(undefined8 *param_1,undefined *param_2,char *param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  _StringGuts _Var5;
  void *pvVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined1 uVar9;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined1 auStack_158 [72];
  int local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  local_c8 = param_2;
  _swift_errorRetain();
  pcVar3 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar7 = &DAT_100ee42f8;
  iVar2 = (int)&local_110;
  _Var5.unknown = (undefined *)&local_c8;
  _swift_dynamicCast();
  iVar1 = local_110;
  if (iVar2 == 0) {
    local_c8 = (undefined *)0x0;
    local_c0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x16,_Var5);
    _swift_bridgeObjectRelease(local_c0);
    local_c8 = (undefined *)0xd000000000000012;
    local_c0 = (undefined *)0x8000000100db9820;
    FUN_1005b32e4();
    SVar12.bridgeObject = _Var5.unknown;
    SVar12.str = param_3;
    SVar22.bridgeObject = puVar7;
    SVar22.str = pcVar3;
    Swift::String::append(SVar12,SVar22);
    _swift_bridgeObjectRelease(_Var5.unknown);
    SVar13.bridgeObject = &SUB_e200000000000000;
    SVar13.str = (char *)0x2e27;
    SVar23.bridgeObject = puVar7;
    SVar23.str = pcVar3;
    Swift::String::append(SVar13,SVar23);
    uVar8 = local_c0;
    puVar7 = local_c8;
    _swift_errorRetain(param_2);
    uVar9 = 8;
    goto LAB_100a82cc0;
  }
  if (local_110 == 0x1b) {
    local_c8 = (undefined *)0x0;
    local_c0 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var5);
    _swift_bridgeObjectRelease(local_c0);
    local_c8 = (undefined *)0xd000000000000018;
    local_c0 = (undefined *)0x8000000100db9840;
    FUN_1005b32e4();
    SVar16.bridgeObject = _Var5.unknown;
    SVar16.str = param_3;
    SVar26.bridgeObject = puVar7;
    SVar26.str = pcVar3;
    Swift::String::append(SVar16,SVar26);
    _swift_bridgeObjectRelease(_Var5.unknown);
    pcVar4 = (char *)0x6f6f742073692027;
    pvVar6 = (void *)0xef2e656772616c20;
LAB_100a82c04:
    SVar17.bridgeObject = pvVar6;
    SVar17.str = pcVar4;
    SVar27.bridgeObject = puVar7;
    SVar27.str = pcVar3;
    Swift::String::append(SVar17,SVar27);
    uVar9 = 1;
  }
  else {
    if (local_110 == 0x16) {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x3b,_Var5);
      pvVar6 = (void *)0x8000000100db9840;
      SVar14.bridgeObject = (void *)0x8000000100db9840;
      SVar14.str = (char *)0xd000000000000018;
      SVar24.bridgeObject = puVar7;
      SVar24.str = pcVar3;
      Swift::String::append(SVar14,SVar24);
      FUN_1005b32e4();
      SVar15.bridgeObject = pvVar6;
      SVar15.str = param_3;
      SVar25.bridgeObject = puVar7;
      SVar25.str = pcVar3;
      Swift::String::append(SVar15,SVar25);
      _swift_bridgeObjectRelease(pvVar6);
      pcVar4 = (char *)0xd000000000000021;
      pvVar6 = (void *)0x8000000100db9860;
      goto LAB_100a82c04;
    }
    if (local_110 == 9) {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1f,_Var5);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = (undefined *)0x65722074276e6143;
      local_c0 = (undefined *)0xee002720657a6973;
      FUN_1005b32e4();
      SVar10.bridgeObject = _Var5.unknown;
      SVar10.str = param_3;
      SVar20.bridgeObject = puVar7;
      SVar20.str = pcVar3;
      Swift::String::append(SVar10,SVar20);
      _swift_bridgeObjectRelease(_Var5.unknown);
      pcVar4 = (char *)0x2073277469202c27;
      SVar11.bridgeObject = (void *)0xef2e6465736f6c63;
      SVar11.str = (char *)0x2073277469202c27;
      SVar21.bridgeObject = puVar7;
      SVar21.str = pcVar3;
      Swift::String::append(SVar11,SVar21);
      uVar9 = 0;
    }
    else {
      local_c8 = (undefined *)0x0;
      local_c0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var5);
      _swift_bridgeObjectRelease(local_c0);
      local_c8 = (undefined *)0xd000000000000012;
      local_c0 = (undefined *)0x8000000100db9820;
      FUN_1005b32e4();
      SVar18.bridgeObject = _Var5.unknown;
      SVar18.str = param_3;
      SVar28.bridgeObject = puVar7;
      SVar28.str = pcVar3;
      Swift::String::append(SVar18,SVar28);
      _swift_bridgeObjectRelease(_Var5.unknown);
      SVar19.bridgeObject = &SUB_e200000000000000;
      SVar19.str = (char *)0x2e27;
      pcVar4 = (char *)0x2e27;
      SVar29.bridgeObject = puVar7;
      SVar29.str = pcVar3;
      Swift::String::append(SVar19,SVar29);
      uVar9 = 8;
    }
  }
  uVar8 = local_c0;
  puVar7 = local_c8;
  FUN_100a57a58();
  param_2 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,pcVar4,0,0);
  pcVar4[0] = 'f';
  pcVar4[1] = 't';
  pcVar4[2] = 'r';
  pcVar4[3] = 'u';
  pcVar4[4] = 'n';
  pcVar4[5] = 'c';
  pcVar4[6] = 'a';
  pcVar4[7] = 't';
  pcVar4[8] = 'e';
  pcVar4[9] = '\0';
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  pcVar4[0xc] = '\0';
  pcVar4[0xd] = '\0';
  pcVar4[0xe] = '\0';
  pcVar4[0xf] = -0x17;
  *(int *)(pcVar4 + 0x10) = iVar1;
LAB_100a82cc0:
  uStack_e8 = param_4[1];
  local_f0 = *param_4;
  uStack_d8 = param_4[3];
  uStack_e0 = param_4[2];
  local_d0 = param_4[4];
  local_110 = CONCAT31(local_110._1_3_,uVar9);
  local_c8 = (undefined *)CONCAT71(local_c8._1_7_,uVar9);
  uStack_108 = puVar7;
  uStack_100 = uVar8;
  local_f8 = param_2;
  local_c0 = puVar7;
  uStack_b8 = uVar8;
  local_b0 = param_2;
  local_a8 = local_f0;
  uStack_a0 = uStack_e8;
  local_98 = uStack_e0;
  uStack_90 = uStack_d8;
  local_88 = local_d0;
  local_80 = uStack_e0;
  uStack_78 = uStack_d8;
  uStack_70 = local_f0;
  uStack_68 = uStack_e8;
  FUN_10000ca28(&uStack_70,auStack_158);
  FUN_10000ca28(&local_80,auStack_158);
  FUN_100a50050(&local_110,auStack_158);
  FUN_100a5008c(&local_c8);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[8] = local_d0;
  param_1[1] = uStack_108;
  *param_1 = CONCAT44(uStack_10c,local_110);
  param_1[3] = local_f8;
  param_1[2] = uStack_100;
  return;
}



/* Address: 0x100a82d5c | FUN_100a82d5c */

void FUN_100a82d5c(undefined8 *param_1,char param_2,undefined *param_3,char *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  _StringGuts _Var6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
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
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 auStack_168 [72];
  int local_120;
  undefined4 uStack_11c;
  undefined *puStack_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar9 = (undefined *)0xd000000000000018;
  local_d8 = param_3;
  _swift_errorRetain(param_3);
  pcVar4 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  puVar8 = &DAT_100ee42f8;
  piVar5 = &local_120;
  _Var6.unknown = (undefined *)&local_d8;
  _swift_dynamicCast();
  iVar3 = local_120;
  if ((int)piVar5 == 0) {
    puVar8 = (undefined *)0x8000000100db96a0;
    _swift_errorRetain(param_3);
    uVar10 = 8;
  }
  else {
    if (local_120 == 5) {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x57,_Var6);
      pvVar7 = (void *)0x8000000100db96e0;
      SVar15.bridgeObject = (void *)0x8000000100db96e0;
      SVar15.str = (char *)0xd00000000000001a;
      SVar22.bridgeObject = puVar8;
      SVar22.str = pcVar4;
      Swift::String::append(SVar15,SVar22);
      FUN_1005b32e4();
      SVar16.bridgeObject = pvVar7;
      SVar16.str = param_4;
      SVar23.bridgeObject = puVar8;
      SVar23.str = pcVar4;
      Swift::String::append(SVar16,SVar23);
      _swift_bridgeObjectRelease(pvVar7);
      piVar5 = (int *)0xd00000000000003b;
      SVar17.bridgeObject = (void *)0x8000000100db9700;
      SVar17.str = (char *)0xd00000000000003b;
      SVar24.bridgeObject = puVar8;
      SVar24.str = pcVar4;
      Swift::String::append(SVar17,SVar24);
      uVar10 = 2;
      puVar8 = local_d0;
      puVar9 = local_d8;
    }
    else if (local_120 == 0x1d) {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1b,_Var6);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = (undefined *)0xd000000000000017;
      local_d0 = (undefined *)0x8000000100db96c0;
      FUN_1005b32e4();
      SVar13.bridgeObject = _Var6.unknown;
      SVar13.str = param_4;
      SVar20.bridgeObject = puVar8;
      SVar20.str = pcVar4;
      Swift::String::append(SVar13,SVar20);
      _swift_bridgeObjectRelease(_Var6.unknown);
      SVar14.bridgeObject = &SUB_e200000000000000;
      SVar14.str = (char *)0x2e27;
      piVar5 = (int *)0x2e27;
      SVar21.bridgeObject = puVar8;
      SVar21.str = pcVar4;
      Swift::String::append(SVar14,SVar21);
      uVar10 = 9;
      puVar8 = local_d0;
      puVar9 = local_d8;
    }
    else if (local_120 == 9) {
      local_d8 = (undefined *)0x0;
      local_d0 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x24,_Var6);
      _swift_bridgeObjectRelease(local_d0);
      local_d8 = (undefined *)0xd000000000000020;
      local_d0 = (undefined *)0x8000000100db9740;
      FUN_1005b32e4();
      SVar11.bridgeObject = _Var6.unknown;
      SVar11.str = param_4;
      SVar18.bridgeObject = puVar8;
      SVar18.str = pcVar4;
      Swift::String::append(SVar11,SVar18);
      _swift_bridgeObjectRelease(_Var6.unknown);
      SVar12.bridgeObject = &SUB_e200000000000000;
      SVar12.str = (char *)0x2e27;
      piVar5 = (int *)0x2e27;
      SVar19.bridgeObject = puVar8;
      SVar19.str = pcVar4;
      Swift::String::append(SVar12,SVar19);
      uVar10 = 0;
      puVar8 = local_d0;
      puVar9 = local_d8;
    }
    else {
      uVar10 = 8;
      puVar8 = (undefined *)0x8000000100db96a0;
    }
    uVar1 = 0x657469727770;
    if (param_2 != '\x01') {
      uVar1 = 0x6574697277;
    }
    puVar2 = &DAT_e600000000000000;
    if (param_2 != '\x01') {
      puVar2 = &DAT_e500000000000000;
    }
    FUN_100a57a58();
    param_3 = &DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,piVar5,0,0);
    *(undefined8 *)piVar5 = uVar1;
    *(undefined1 **)(piVar5 + 2) = puVar2;
    piVar5[4] = iVar3;
  }
  uStack_f8 = param_5[1];
  local_100 = *param_5;
  uStack_e8 = param_5[3];
  uStack_f0 = param_5[2];
  local_e0 = param_5[4];
  local_120 = CONCAT31(local_120._1_3_,uVar10);
  local_d8 = (undefined *)CONCAT71(local_d8._1_7_,uVar10);
  puStack_118 = puVar9;
  uStack_110 = puVar8;
  local_108 = param_3;
  local_d0 = puVar9;
  uStack_c8 = puVar8;
  local_c0 = param_3;
  local_b8 = local_100;
  uStack_b0 = uStack_f8;
  local_a8 = uStack_f0;
  uStack_a0 = uStack_e8;
  local_98 = local_e0;
  local_90 = uStack_f0;
  uStack_88 = uStack_e8;
  uStack_80 = local_100;
  uStack_78 = uStack_f8;
  FUN_10000ca28(&uStack_80,auStack_168);
  FUN_10000ca28(&local_90,auStack_168);
  FUN_100a50050(&local_120,auStack_168);
  FUN_100a5008c(&local_d8);
  param_1[5] = uStack_f8;
  param_1[4] = local_100;
  param_1[7] = uStack_e8;
  param_1[6] = uStack_f0;
  param_1[8] = local_e0;
  param_1[1] = puStack_118;
  *param_1 = CONCAT44(uStack_11c,local_120);
  param_1[3] = local_108;
  param_1[2] = uStack_110;
  return;
}



/* Address: 0x100a83074 | FUN_100a83074 */

void FUN_100a83074(undefined8 *param_1,int param_2,_StringGuts param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  void *pvVar5;
  char *pcVar6;
  undefined1 uVar7;
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
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined1 auStack_148 [72];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if (param_2 < 0xd) {
    if (param_2 == 1) {
LAB_100a83154:
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      pcVar6 = param_4;
      Swift::_StringGuts::grow(0x4b,param_3);
      pvVar5 = (void *)0x8000000100db9490;
      SVar11.bridgeObject = (void *)0x8000000100db9490;
      SVar11.str = (char *)0xd000000000000048;
      SVar23.bridgeObject = param_5;
      SVar23.str = pcVar6;
      Swift::String::append(SVar11,SVar23);
      FUN_1005b32e4();
      SVar12.bridgeObject = pvVar5;
      SVar12.str = param_3.unknown;
      SVar24.bridgeObject = param_5;
      SVar24.str = pcVar6;
      Swift::String::append(SVar12,SVar24);
      _swift_bridgeObjectRelease(pvVar5);
      SVar13.bridgeObject = (void *)0xe100000000000000;
      SVar13.str = (char *)0x2e;
      puVar3 = (undefined8 *)0x2e;
      SVar25.bridgeObject = param_5;
      SVar25.str = pcVar6;
      Swift::String::append(SVar13,SVar25);
      uVar7 = 3;
      goto LAB_100a832c0;
    }
    if (param_2 == 9) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      pcVar6 = param_4;
      Swift::_StringGuts::grow(0x54,param_3);
      pvVar5 = (void *)0x8000000100db9420;
      SVar8.bridgeObject = (void *)0x8000000100db9420;
      SVar8.str = (char *)0xd000000000000041;
      SVar20.bridgeObject = param_5;
      SVar20.str = pcVar6;
      Swift::String::append(SVar8,SVar20);
      FUN_1005b32e4();
      SVar9.bridgeObject = pvVar5;
      SVar9.str = param_3.unknown;
      SVar21.bridgeObject = param_5;
      SVar21.str = pcVar6;
      Swift::String::append(SVar9,SVar21);
      _swift_bridgeObjectRelease(pvVar5);
      puVar3 = (undefined8 *)0xd000000000000011;
      SVar10.bridgeObject = (void *)0x8000000100db9470;
      SVar10.str = (char *)0xd000000000000011;
      SVar22.bridgeObject = param_5;
      SVar22.str = pcVar6;
      Swift::String::append(SVar10,SVar22);
      uVar7 = 0;
      goto LAB_100a832c0;
    }
  }
  else {
    if (param_2 == 0x1e) {
      local_b8 = 0;
      local_b0 = 0xe000000000000000;
      pcVar6 = param_4;
      Swift::_StringGuts::grow(0x6c,param_3);
      pvVar5 = (void *)0x8000000100db9490;
      SVar17.bridgeObject = (void *)0x8000000100db9490;
      SVar17.str = (char *)0xd000000000000048;
      SVar29.bridgeObject = param_5;
      SVar29.str = pcVar6;
      Swift::String::append(SVar17,SVar29);
      FUN_1005b32e4();
      SVar18.bridgeObject = pvVar5;
      SVar18.str = param_3.unknown;
      SVar30.bridgeObject = param_5;
      SVar30.str = pcVar6;
      Swift::String::append(SVar18,SVar30);
      _swift_bridgeObjectRelease(pvVar5);
      puVar3 = (undefined8 *)0xd000000000000022;
      SVar19.bridgeObject = (void *)0x8000000100db94e0;
      SVar19.str = (char *)0xd000000000000022;
      SVar31.bridgeObject = param_5;
      SVar31.str = pcVar6;
      Swift::String::append(SVar19,SVar31);
      uVar7 = 9;
      goto LAB_100a832c0;
    }
    if (param_2 == 0xd) goto LAB_100a83154;
  }
  local_b8 = 0;
  local_b0 = 0xe000000000000000;
  pcVar6 = param_4;
  Swift::_StringGuts::grow(0x44,param_3);
  pvVar5 = (void *)0x8000000100db9420;
  SVar14.bridgeObject = (void *)0x8000000100db9420;
  SVar14.str = (char *)0xd000000000000041;
  SVar26.bridgeObject = param_5;
  SVar26.str = pcVar6;
  Swift::String::append(SVar14,SVar26);
  FUN_1005b32e4();
  SVar15.bridgeObject = pvVar5;
  SVar15.str = param_3.unknown;
  SVar27.bridgeObject = param_5;
  SVar27.str = pcVar6;
  Swift::String::append(SVar15,SVar27);
  _swift_bridgeObjectRelease(pvVar5);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x2e;
  puVar3 = (undefined8 *)0x2e;
  SVar28.bridgeObject = param_5;
  SVar28.str = pcVar6;
  Swift::String::append(SVar16,SVar28);
  uVar7 = 8;
LAB_100a832c0:
  uVar2 = local_b0;
  uVar1 = local_b8;
  FUN_100a57a58();
  puVar4 = &DAT_100f2dfc8;
  _swift_allocError(&DAT_100f2dfc8,puVar3,0,0);
  *puVar3 = 0x736e656d69747566;
  puVar3[1] = &DAT_e800000000000000;
  *(int *)(puVar3 + 2) = param_2;
  uStack_d8 = *(undefined8 *)(param_4 + 8);
  local_e0 = *(undefined8 *)param_4;
  uStack_c8 = *(undefined8 *)(param_4 + 0x18);
  uStack_d0 = *(undefined8 *)(param_4 + 0x10);
  local_c0 = *(undefined8 *)(param_4 + 0x20);
  local_b8 = CONCAT71(local_b8._1_7_,uVar7);
  local_100 = uVar7;
  uStack_f8 = uVar1;
  uStack_f0 = uVar2;
  local_e8 = puVar4;
  local_b0 = uVar1;
  uStack_a8 = uVar2;
  local_a0 = puVar4;
  local_98 = local_e0;
  uStack_90 = uStack_d8;
  local_88 = uStack_d0;
  uStack_80 = uStack_c8;
  local_78 = local_c0;
  local_70 = uStack_d0;
  uStack_68 = uStack_c8;
  uStack_60 = local_e0;
  uStack_58 = uStack_d8;
  FUN_10000ca28(&uStack_60,auStack_148);
  FUN_10000ca28(&local_70,auStack_148);
  FUN_100a50050(&local_100,auStack_148);
  FUN_100a5008c(&local_b8);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = CONCAT71(uStack_ff,local_100);
  param_1[3] = local_e8;
  param_1[2] = uStack_f0;
  return;
}



/* Address: 0x100a83390 | thunk_FUN_100a83394 */

void thunk_FUN_100a83394(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fa0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ff0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ff0,&DAT_100f2dcd0);
  DAT_100ff6fa0 = pTVar1;
  return;
}



/* Address: 0x100a83394 | FUN_100a83394 */

void FUN_100a83394(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fa0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c91ff0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c91ff0,&DAT_100f2dcd0);
  DAT_100ff6fa0 = pTVar1;
  return;
}



/* Address: 0x100a833d4 | thunk_FUN_100a833d8 */

void thunk_FUN_100a833d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92090,&DAT_100f2dd60);
  DAT_100ff6fa8 = pTVar1;
  return;
}



/* Address: 0x100a833d8 | FUN_100a833d8 */

void FUN_100a833d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6fa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c92090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c92090,&DAT_100f2dd60);
  DAT_100ff6fa8 = pTVar1;
  return;
}



/* Address: 0x100a83418 | FUN_100a83418 */

undefined1  [16] FUN_100a83418(void)

{
  return ZEXT816(0x100f2dcd0);
}



/* Address: 0x100a83428 | FUN_100a83428 */

undefined1  [16] FUN_100a83428(void)

{
  return ZEXT816(0x100f2dd60);
}



/* Address: 0x100a83438 | FUN_100a83438 */

void FUN_100a83438(void)

{
  undefined *puVar1;
  
  if (DAT_100ff6fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int16_>Swift__BinaryInteger_100eade28;
  _swift_getWitnessTable
            (PTR_Swift____int16_>Swift__BinaryInteger_100eade28,
             PTR___type_metadata_for_Swift_UInt16_100eade18);
  DAT_100ff6fb0 = puVar1;
  return;
}



/* Address: 0x100a83478 | FUN_100a83478 */

void FUN_100a83478(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6)

{
  undefined1 auStack_f8 [72];
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uStack_88 = param_6[1];
  local_90 = *param_6;
  uStack_78 = param_6[3];
  uStack_80 = param_6[2];
  local_70 = param_6[4];
  local_b0 = param_2;
  uStack_a8 = param_3;
  uStack_a0 = param_4;
  local_98 = param_5;
  local_68[0] = param_2;
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_5;
  local_48 = local_90;
  uStack_40 = uStack_88;
  local_38 = uStack_80;
  uStack_30 = uStack_78;
  local_28 = local_70;
  FUN_100a50050(&local_b0,auStack_f8);
  FUN_100a5008c(local_68);
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = local_70;
  param_1[1] = uStack_a8;
  *param_1 = CONCAT71(uStack_af,local_b0);
  param_1[3] = local_98;
  param_1[2] = uStack_a0;
  return;
}



/* Address: 0x100a834fc | FUN_100a834fc */

void FUN_100a834fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  *param_1 = *(undefined8 *)(unaff_x20 + 0x20);
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  return;
}



/* Address: 0x100a83534 | FUN_100a83534 */

void FUN_100a83534(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1[4];
  return;
}



/* Address: 0x100a83570 | FUN_100a83570 */

undefined1  [16] FUN_100a83570(undefined8 param_1,void *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  long lVar5;
  byte *unaff_x20;
  String SVar6;
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
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 auStack_58 [8];
  ulong local_50;
  void *pvStack_48;
  
  pcVar4 = (char *)&local_70;
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 == 0) {
    uVar3 = (ulong)*unaff_x20;
    FUN_100a83e50();
    SVar10.bridgeObject = &SUB_e200000000000000;
    SVar10.str = (char *)0x203a;
    SVar16.bridgeObject = param_4;
    SVar16.str = param_3;
    local_50 = uVar3;
    pvStack_48 = param_2;
    Swift::String::append(SVar10,SVar16);
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3;
    Swift::String::append(*(String *)(unaff_x20 + 8),SVar17);
  }
  else {
    local_50 = 0;
    pvStack_48 = (void *)0xe000000000000000;
    pcVar2 = (char *)(ulong)*unaff_x20;
    FUN_100a83e50();
    _swift_errorRetain(lVar5);
    SVar6.bridgeObject = param_2;
    SVar6.str = pcVar2;
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    Swift::String::append(SVar6,SVar11);
    _swift_bridgeObjectRelease(param_2);
    SVar7.bridgeObject = &SUB_e200000000000000;
    SVar7.str = (char *)0x203a;
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar7,SVar12);
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(*(String *)(unaff_x20 + 8),SVar13);
    SVar8.bridgeObject = &SUB_e200000000000000;
    SVar8.str = (char *)0x2820;
    SVar14.bridgeObject = param_4;
    SVar14.str = param_3;
    Swift::String::append(SVar8,SVar14);
    _swift_getErrorValue(lVar5,auStack_58);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_70,uStack_68);
    SVar9.bridgeObject = (void *)0xe100000000000000;
    SVar9.str = (char *)0x29;
    SVar15.bridgeObject = param_4;
    SVar15.str = pcVar4;
    Swift::String::append(SVar9,SVar15);
    _swift_errorRelease(lVar5);
  }
  auVar1._8_8_ = pvStack_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}



/* Address: 0x100a83674 | thunk_FUN_100a83570 */

void thunk_FUN_100a83570(void)

{
  FUN_100a83570();
  return;
}



/* Address: 0x100a83678 | FUN_100a83678 */

String FUN_100a83678(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  long lVar2;
  undefined1 *unaff_x20;
  long lVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 local_70;
  char *pcStack_68;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  String local_40;
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 == 0) {
    local_40.str._0_1_ = *unaff_x20;
    local_40 = Swift::String::_init(&local_40,&DAT_100f2dec0);
    SVar5.bridgeObject = &SUB_e200000000000000;
    SVar5.str = (char *)0x203a;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar5,SVar13);
    local_50 = *(undefined8 *)(unaff_x20 + 8);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain();
    SVar5 = Swift::String::_init(&local_50,PTR___type_metadata_for_Swift_String_100eac208);
    SVar14.bridgeObject = param_4;
    SVar14.str = param_3;
    Swift::String::append(SVar5,SVar14);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
  }
  else {
    local_40.str._0_1_ = *unaff_x20;
    _swift_errorRetain(lVar2);
    local_40 = Swift::String::_init(&local_40,&DAT_100f2dec0);
    SVar4.bridgeObject = &SUB_e200000000000000;
    SVar4.str = (char *)0x203a;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar4,SVar8);
    local_50 = *(undefined8 *)(unaff_x20 + 8);
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_bridgeObjectRetain();
    SVar5 = Swift::String::_init(&local_50,PTR___type_metadata_for_Swift_String_100eac208);
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar5,SVar9);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    SVar6.bridgeObject = &SUB_e200000000000000;
    SVar6.str = (char *)0x2820;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar6,SVar10);
    _swift_getErrorValue(lVar2,auStack_58,&local_70);
    lVar3 = (long)&local_70 -
            (*(long *)(*(long *)(pcStack_68 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    pcVar1 = pcStack_68;
    (**(code **)(*(long *)(pcStack_68 + -8) + 0x10))(lVar3,local_70);
    SVar5 = Swift::String::_init(lVar3,pcStack_68);
    SVar11.bridgeObject = param_4;
    SVar11.str = pcVar1;
    Swift::String::append(SVar5,SVar11);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    SVar7.bridgeObject = (void *)0xe100000000000000;
    SVar7.str = (char *)0x29;
    SVar12.bridgeObject = param_4;
    SVar12.str = pcVar1;
    Swift::String::append(SVar7,SVar12);
    _swift_errorRelease(lVar2);
  }
  return local_40;
}



/* Address: 0x100a837f4 | thunk_FUN_100a83678 */

void thunk_FUN_100a83678(void)

{
  FUN_100a83678();
  return;
}



/* Address: 0x100a837f8 | FUN_100a837f8 */

undefined1 * FUN_100a837f8(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  char *pcVar14;
  undefined1 *in_x3;
  undefined *puVar15;
  long lVar16;
  byte *unaff_x20;
  undefined *puVar17;
  ulong uVar18;
  long *plVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  undefined1 auStack_150 [8];
  undefined1 *local_148;
  undefined8 local_138;
  char *local_130;
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar10 = &DAT_100ff6fe0;
  FUN_1000f7830(&DAT_100ff6fe0,&DAT_100c924a0);
  _Var12.unknown = (undefined *)0x40;
  pcVar14 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 4;
  *(undefined8 *)(puVar10 + 0x10) = 2;
  local_c0 = 0;
  uStack_b8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x13,_Var12);
  _swift_bridgeObjectRelease(uStack_b8);
  local_c0 = 0xd000000000000011;
  uStack_b8 = 0x8000000100dbab30;
  pcVar5 = (char *)(ulong)*unaff_x20;
  FUN_100a83e50();
  SVar23.bridgeObject = _Var12.unknown;
  SVar23.str = pcVar5;
  SVar25.bridgeObject = in_x3;
  SVar25.str = pcVar14;
  _Var13.unknown = _Var12.unknown;
  Swift::String::append(SVar23,SVar25);
  _swift_bridgeObjectRelease(_Var12.unknown);
  *(undefined8 *)(puVar10 + 0x20) = local_c0;
  *(undefined8 *)(puVar10 + 0x28) = uStack_b8;
  local_c0 = 0;
  uStack_b8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x11,_Var13);
  _swift_bridgeObjectRelease(uStack_b8);
  local_c0 = 0x52208094e29c94e2;
  uStack_b8 = 0xaf203a6e6f736165;
  _Var13.unknown = *(undefined **)(unaff_x20 + 0x10);
  SVar26.bridgeObject = in_x3;
  SVar26.str = pcVar14;
  Swift::String::append(*(String *)(unaff_x20 + 8),SVar26);
  *(undefined8 *)(puVar10 + 0x30) = local_c0;
  *(undefined8 *)(puVar10 + 0x38) = uStack_b8;
  puVar17 = *(undefined **)(unaff_x20 + 0x18);
  local_c8 = puVar10;
  if (puVar17 != (undefined *)0x0) {
    local_d0 = puVar17;
    _swift_errorRetain(puVar17);
    _swift_errorRetain(puVar17);
    puVar6 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    puVar15 = &DAT_100f2de38;
    puVar7 = &local_118;
    _Var13.unknown = (undefined *)&local_d0;
    _swift_dynamicCast(puVar7,_Var13.unknown,puVar6,&DAT_100f2de38,6);
    if ((int)puVar7 == 0) {
      local_c0 = 0;
      uStack_b8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x10,_Var13);
      _swift_bridgeObjectRelease(uStack_b8);
      local_c0 = 0x43208094e29c94e2;
      uStack_b8 = 0xae00203a65737561;
      _swift_getErrorValue(puVar17,auStack_120,&local_138);
      lVar16 = *(long *)(*(long *)(local_130 + -8) + 0x40);
      pcVar5 = local_130;
      (**(code **)(*(long *)(local_130 + -8) + 0x10))
                (auStack_150 + -(lVar16 + 0xfU & 0xfffffffffffffff0),local_138);
      SVar23 = Swift::String::_init(auStack_150 + -(lVar16 + 0xfU & 0xfffffffffffffff0),local_130);
      SVar29.bridgeObject = puVar15;
      SVar29.str = pcVar5;
      Swift::String::append(SVar23,SVar29);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      uVar3 = uStack_b8;
      uVar2 = local_c0;
      puVar9 = &DAT_00000001;
      _Var13.unknown = (undefined *)0x3;
      pcVar14 = &DAT_00000001;
      FUN_100aa7c9c();
      *(undefined8 *)(puVar9 + 0x10) = 3;
      *(undefined8 *)(puVar9 + 0x40) = uVar2;
      *(undefined8 *)(puVar9 + 0x48) = uVar3;
      _swift_errorRelease(puVar17);
      in_x3 = puVar10;
      local_c8 = puVar9;
    }
    else {
      _swift_errorRelease(puVar17);
      uStack_a8 = uStack_100;
      local_b0 = local_108;
      uStack_98 = uStack_f0;
      uStack_a0 = local_f8;
      uStack_88 = uStack_e0;
      local_90 = local_e8;
      local_80 = local_d8;
      uStack_b8 = uStack_110;
      local_c0 = local_118;
      puVar8 = &DAT_00000001;
      pcVar14 = &DAT_00000001;
      FUN_100aa7c9c(1,3);
      *(undefined8 *)(puVar8 + 0x10) = 3;
      *(undefined8 *)(puVar8 + 0x40) = 0x43208094e29c94e2;
      *(undefined8 *)(puVar8 + 0x48) = 0xad00003a65737561;
      puVar9 = puVar8;
      FUN_100a837f8();
      local_118 = 0x9494e220208294e2;
      uStack_110 = 0xac000000208094e2;
      uVar18 = *(ulong *)(puVar9 + 0x10);
      if (uVar18 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a83dac);
        (*pcVar4)();
      }
      puVar17 = *(undefined **)(puVar9 + 0x28);
      SVar23 = *(String *)(puVar9 + 0x20);
      _swift_bridgeObjectRetain(puVar17);
      SVar27.bridgeObject = puVar10;
      SVar27.str = pcVar14;
      _Var13.unknown = puVar17;
      Swift::String::append(SVar23,SVar27);
      _swift_bridgeObjectRelease(puVar17);
      uVar3 = uStack_110;
      uVar2 = local_118;
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar11 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar11 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        pcVar14 = &DAT_00000001;
        _Var13.unknown = (undefined *)(uVar1 + 1);
        FUN_100aa7c9c();
        puVar10 = puVar8;
      }
      *(undefined **)(puVar11 + 0x10) = (undefined *)(uVar1 + 1);
      *(undefined8 *)(puVar11 + uVar1 * 0x10 + 0x20) = uVar2;
      *(undefined8 *)(puVar11 + uVar1 * 0x10 + 0x28) = uVar3;
      local_c8 = puVar11;
      if (*(ulong *)(puVar9 + 0x10) < uVar18) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a83dd0);
        (*pcVar4)();
      }
      lVar16 = uVar18 - 1;
      if (lVar16 == 0) {
        _swift_bridgeObjectRelease(puVar9);
        puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
        pcVar14 = (char *)0x0;
        FUN_100a8f5f0(0,lVar16);
        plVar19 = (long *)(puVar9 + 0x38);
        local_148 = puVar9;
        do {
          puVar17 = local_d0;
          if (lVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100a83d68);
            (*pcVar4)();
          }
          pcVar5 = (char *)plVar19[-1];
          puVar6 = (undefined *)*plVar19;
          local_118 = 0x20202020208294e2;
          uStack_110 = 0xa800000000000000;
          _swift_bridgeObjectRetain(puVar6);
          SVar20.bridgeObject = puVar6;
          SVar20.str = pcVar5;
          SVar28.bridgeObject = puVar10;
          SVar28.str = pcVar14;
          _Var13.unknown = puVar6;
          Swift::String::append(SVar20,SVar28);
          _swift_bridgeObjectRelease(puVar6);
          uVar3 = uStack_110;
          uVar2 = local_118;
          uVar18 = *(ulong *)(puVar17 + 0x10);
          local_d0 = puVar17;
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar18) {
            pcVar14 = &DAT_00000001;
            _Var13.unknown = (undefined *)(uVar18 + 1);
            FUN_100a8f5f0(1 < *(ulong *)(puVar17 + 0x18));
          }
          puVar17 = local_d0;
          *(undefined **)(local_d0 + 0x10) = (undefined *)(uVar18 + 1);
          *(undefined8 *)(local_d0 + uVar18 * 0x10 + 0x20) = uVar2;
          *(undefined8 *)(local_d0 + uVar18 * 0x10 + 0x28) = uVar3;
          plVar19 = plVar19 + 2;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
        _swift_bridgeObjectRelease(local_148);
      }
      FUN_100ab370c(puVar17);
      FUN_100a5008c(&local_c0);
      in_x3 = puVar10;
    }
  }
  puVar10 = local_c8;
  local_118 = 0;
  uStack_110 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x22,_Var13);
  _swift_bridgeObjectRelease(uStack_110);
  local_118 = 0x1000000000000018;
  uStack_110 = 0x8000000100dbab50;
  SVar23 = *(String *)(unaff_x20 + 0x30);
  puVar17 = *(undefined **)(unaff_x20 + 0x40);
  SVar30.bridgeObject = in_x3;
  SVar30.str = pcVar14;
  Swift::String::append(*(String *)(unaff_x20 + 0x20),SVar30);
  SVar21.bridgeObject = &SUB_e200000000000000;
  SVar21.str = (char *)0x2820;
  SVar31.bridgeObject = in_x3;
  SVar31.str = pcVar14;
  Swift::String::append(SVar21,SVar31);
  SVar32.bridgeObject = in_x3;
  SVar32.str = pcVar14;
  Swift::String::append(SVar23,SVar32);
  SVar22.bridgeObject = (void *)0xe100000000000000;
  SVar22.str = &DAT_0000003a;
  SVar33.bridgeObject = in_x3;
  SVar33.str = pcVar14;
  Swift::String::append(SVar22,SVar33);
  local_d0 = puVar17;
  SVar23 = Swift::CustomStringConvertible::get_description();
  SVar34.bridgeObject = in_x3;
  SVar34.str = pcVar14;
  Swift::String::append(SVar23,SVar34);
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  SVar24.bridgeObject = (void *)0xe100000000000000;
  SVar24.str = (char *)0x29;
  SVar35.bridgeObject = in_x3;
  SVar35.str = pcVar14;
  Swift::String::append(SVar24,SVar35);
  uVar3 = uStack_110;
  uVar2 = local_118;
  puVar9 = puVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar8 = puVar10;
  if (((ulong)puVar9 & 1) == 0) {
    puVar8 = (undefined1 *)0x0;
    FUN_100aa7c9c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
  }
  uVar18 = *(ulong *)(puVar8 + 0x10);
  puVar10 = puVar8;
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar18) {
    puVar10 = (undefined1 *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
    FUN_100aa7c9c(puVar10,uVar18 + 1,1,puVar8);
  }
  *(ulong *)(puVar10 + 0x10) = uVar18 + 1;
  *(undefined8 *)(puVar10 + uVar18 * 0x10 + 0x20) = uVar2;
  *(undefined8 *)(puVar10 + uVar18 * 0x10 + 0x28) = uVar3;
  return puVar10;
}



/* Address: 0x100a83dd0 | FUN_100a83dd0 */

String FUN_100a83dd0(undefined8 param_1)

{
  String SVar1;
  
  FUN_100a837f8();
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  FUN_100a84130();
  SVar1.bridgeObject = (void *)0xe100000000000000;
  SVar1.str = (char *)0xa;
  SVar1 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar1);
  _swift_bridgeObjectRelease(param_1);
  return SVar1;
}



/* Address: 0x100a83e50 | FUN_100a83e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100a83e50(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,Hasher param_5,
             void *param_6,undefined1 *param_7,String *param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,char *param_15,undefined4 param_16,undefined4 param_17,
             undefined8 param_18,undefined8 param_19,undefined8 param_20,undefined8 param_21,
             undefined8 param_22)

{
  undefined1 in_ZR;
  bool bVar1;
  Hasher into;
  String *pSVar2;
  Hasher HVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  String *unaff_x19;
  int iVar7;
  String *unaff_x20;
  undefined1 *unaff_x21;
  char *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [48];
  
  HVar3.unknown = &DAT_e600000000000000;
  into.unknown = (undefined *)0x6465736f6c43;
  pcVar5 = (char *)(param_3 & 0xff);
  pSVar2 = (String *)into.unknown;
  switch(pcVar5) {
  case (char *)0x0:
  case (char *)0xb:
    goto switchD_100a83e7c_caseD_0;
  default:
    into.unknown = (undefined *)0x10;
  case (char *)0x4e:
  case (char *)0x68:
  case (char *)0x76:
  case (char *)0x90:
  case (char *)0x9e:
  case (char *)0xde:
  case (char *)0xf8:
    into.unknown = into.unknown | 0xd000000000000000;
    pcVar5 = "\' does not exist or is a dangling symbolic link.";
  case (char *)0x1e:
  case (char *)0x26:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x86:
  case (char *)0x8e:
  case (char *)0xae:
  case (char *)0xb6:
  case (char *)0xee:
  case (char *)0xf6:
    pcVar5 = pcVar5 + 0xb10;
switchD_100a83e7c_caseD_28:
    auVar8._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar8._0_8_ = into.unknown;
    return auVar8;
  case (char *)0x2:
  case (char *)0xd:
    pcVar5 = (char *)0xe900000000000064;
  case (char *)0xc1:
    auVar11._8_8_ = pcVar5 + 0xe;
    auVar11._0_8_ = 0x6f727265204f2f49;
    return auVar11;
  case (char *)0x3:
  case (char *)0xe:
    auVar12._8_8_ = 0x8000000100dbaad0;
    auVar12._0_8_ = 0xd000000000000011;
    return auVar12;
  case (char *)0x4:
  case (char *)0xf:
  case (char *)0xc0:
    pcVar5 = (char *)0x64;
  case (char *)0xc2:
    pcVar5 = (char *)((ulong)pcVar5 | 0xe900000000000000);
  case (char *)0x18:
    HVar3.unknown = pcVar5 + 0x15;
    into.unknown = (undefined *)0x20746f4e;
switchD_100a83e7c_caseD_98:
    auVar9._0_8_ = (ulong)into.unknown & 0xffff0000ffffffff | 0x74706d6500000000;
    auVar9._8_8_ = HVar3.unknown;
    return auVar9;
  case (char *)0x5:
  case (char *)0x10:
    auVar14._8_8_ = 0xe900000000000064;
    auVar14._0_8_ = 0x6e756f6620746f4e;
    return auVar14;
  case (char *)0x6:
  case (char *)0x11:
    pcVar5 = "Resource exhausted";
  case (char *)0x1c:
    auVar15._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
    auVar15._0_8_ = 0xd000000000000012;
    return auVar15;
  case (char *)0x7:
  case (char *)0x12:
    HVar3.unknown = (undefined *)0x656c62;
  case (char *)0x1a:
  case (char *)0x2e:
  case (char *)0x36:
  case (char *)0x3e:
  case (char *)0x46:
  case (char *)0x5a:
  case (char *)0x6e:
  case (char *)0x82:
  case (char *)0x96:
  case (char *)0xaa:
  case (char *)0xbe:
  case (char *)0xc6:
  case (char *)0xce:
  case (char *)0xd6:
  case (char *)0xea:
  case (char *)0xfe:
    HVar3.unknown = (undefined *)((ulong)HVar3.unknown & 0xffffffffffff | 0xeb00000000000000);
    into.unknown = (undefined *)0x76616e55;
switchD_100a83e7c_caseD_a4:
    auVar13._0_8_ = (ulong)into.unknown & 0xffff0000ffffffff | 0x616c696100000000;
    auVar13._8_8_ = HVar3.unknown;
    return auVar13;
  case (char *)0x8:
  case (char *)0x13:
    auVar17._8_8_ = &DAT_e700000000000000;
    auVar17._0_8_ = 0x6e776f6e6b6e55;
    return auVar17;
  case (char *)0x9:
  case (char *)0x14:
    HVar3.unknown = (undefined *)0xeb00000000646574;
    into.unknown = (undefined *)0x75736e55;
  case (char *)0x71:
    into.unknown = (undefined *)((ulong)into.unknown & 0xffff0000ffffffff | 0x726f707000000000);
switchD_100a83e7c_caseD_99:
    auVar10._8_8_ = HVar3.unknown;
    auVar10._0_8_ = into.unknown;
    return auVar10;
  case (char *)0xa:
  case (char *)0x15:
    HVar3.unknown = (undefined *)0x8000000100dbaa90;
    pcVar5 = (char *)0x10;
  case (char *)0x32:
  case (char *)0x3a:
  case (char *)0x42:
  case (char *)0x4a:
    pcVar5 = (char *)((ulong)pcVar5 | 0xd000000000000000);
  case (char *)0x56:
  case (char *)0x7e:
  case (char *)0xa6:
  case (char *)0xca:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe6:
    into.unknown = (undefined *)((ulong)pcVar5 | 3);
switchD_100a83e7c_caseD_0:
    auVar16._8_8_ = HVar3.unknown;
    auVar16._0_8_ = into.unknown;
    return auVar16;
  case (char *)0x19:
    goto switchD_100a83e7c_caseD_19;
  case (char *)0x1d:
switchD_100a83e7c_caseD_1d:
    auVar24._8_8_ = 0xe900000000000064;
    auVar24._0_8_ = 0x6e756f6620746f4e;
    return auVar24;
  case (char *)0x28:
  case (char *)0xb8:
    goto switchD_100a83e7c_caseD_28;
  case (char *)0x2c:
  case (char *)0x34:
  case (char *)0x3c:
  case (char *)0x44:
    goto switchD_100a83e7c_caseD_2c;
  case (char *)0x30:
    goto switchD_100a83e7c_caseD_30;
  case (char *)0x33:
  case (char *)0x3b:
  case (char *)0x43:
  case (char *)0x4b:
  case (char *)0x73:
  case (char *)0x9b:
  case (char *)0xcb:
  case (char *)0xd3:
  case (char *)0xdb:
switchD_100a83e7c_caseD_33:
    unaff_x21 = &DAT_e600000000000000;
    unaff_x19 = (String *)param_5.unknown;
switchD_100a83ff4_caseD_2d:
    unaff_x22 = (char *)0x6465736f6c43;
    *(undefined8 *)((long)register0x00000008 + 0x10) = 0;
    *(undefined8 *)((long)register0x00000008 + 0x18) = 0xe000000000000000;
    unaff_x23 = 0x27;
    goto switchD_100a83ff4_caseD_25;
  case (char *)0x38:
switchD_100a83e7c_caseD_38:
    HVar3.unknown = &DAT_e700000000000000;
    into.unknown = (undefined *)0x776f6e6b6e55;
switchD_100a83e7c_caseD_30:
    auVar27._0_8_ = (ulong)into.unknown | 0x6e000000000000;
    auVar27._8_8_ = HVar3.unknown;
    return auVar27;
  case (char *)0x48:
  case (char *)0xc8:
switchD_100a83e7c_caseD_48:
    pcVar5 = "\' does not exist or is a dangling symbolic link.";
  case (char *)0x55:
  case (char *)0x7d:
    pcVar5 = pcVar5 + 0xab0;
  case (char *)0xa5:
  case (char *)0xe5:
    HVar3.unknown = (undefined *)((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
  case (char *)0x40:
    pcVar5 = (char *)0x10;
switchD_100a83ff4_caseD_27:
    pcVar5 = (char *)((ulong)pcVar5 | 0xd000000000000000);
    goto switchD_100a83ff4_caseD_4b;
  case (char *)0x54:
  case (char *)0xd8:
    goto switchD_100a83e7c_caseD_54;
  case (char *)0x58:
    goto switchD_100a83e7c_caseD_58;
  case (char *)0x5c:
    *(undefined4 *)&unaff_x20[1].str = 0x736f6c43;
    auVar32._8_8_ = &DAT_e600000000000000;
    auVar32._0_8_ = 0x6465736f6c43;
    return auVar32;
  case (char *)0x5d:
  case (char *)0x85:
  case (char *)0xad:
  case (char *)0xd0:
  case (char *)0xed:
    goto switchD_100a83e7c_caseD_5d;
  case (char *)0x6c:
    goto switchD_100a83e7c_caseD_6c;
  case (char *)0x70:
switchD_100a83e7c_caseD_70:
    HVar3.unknown = (undefined *)&TargetResilientWitness_100c90ffc.Implementation;
  case (char *)0xbc:
  case (char *)0xc4:
  case (char *)0xcc:
  case (char *)0xd4:
    FUN_1000f8b08(into.unknown,&((String *)((long)HVar3.unknown + 0x1e0))->bridgeObject);
    pSVar2 = (String *)PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,
               into.unknown);
    HVar3.unknown = into.unknown;
    DAT_100ff6fb8 = pSVar2;
  case (char *)0x2d:
  case (char *)0x35:
  case (char *)0x3d:
  case (char *)0x45:
  case (char *)0x59:
  case (char *)0x6d:
  case (char *)0x81:
  case (char *)0x95:
  case (char *)0xa9:
  case (char *)0xbd:
  case (char *)0xc5:
  case (char *)0xcd:
  case (char *)0xd5:
  case (char *)0xe9:
  case (char *)0xfd:
    into.unknown = (undefined *)pSVar2;
switchD_100a83e7c_caseD_19:
    auVar28._8_8_ = HVar3.unknown;
    auVar28._0_8_ = into.unknown;
    return auVar28;
  case (char *)0x84:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0x7c:
    Swift::Hasher::init(0);
    HVar3.unknown = unaff_x20->str;
    param_5.unknown = unaff_x20->bridgeObject;
  case (char *)0xc9:
  case (char *)0xd1:
  case (char *)0xd9:
    into.unknown = (undefined *)((long)register0x00000008 + 8);
  case (char *)0x80:
    SVar43.bridgeObject = param_5.unknown;
    SVar43.str = HVar3.unknown;
    Swift::String::hash(into,SVar43);
switchD_100a83ff4_caseD_49:
    HVar3.unknown = unaff_x20[1].str;
    Swift::String::hash((undefined *)((long)register0x00000008 + 8),unaff_x20[1]);
    into.unknown = unaff_x20[2].str;
  case (char *)0x72:
  case (char *)0x9a:
    Swift::Hasher::_combine((__uint64)into.unknown,HVar3);
    into.unknown = (undefined *)Swift::Hasher::_finalize(into);
switchD_100a83ff4_caseD_e1:
switchD_100a83e7c_caseD_6c:
    auVar30._8_8_ = HVar3.unknown;
    auVar30._0_8_ = into.unknown;
    return auVar30;
  case (char *)0x94:
    goto switchD_100a83e7c_caseD_94;
  case (char *)0x98:
    goto switchD_100a83e7c_caseD_98;
  case (char *)0x99:
    goto switchD_100a83e7c_caseD_99;
  case (char *)0xa4:
    goto switchD_100a83e7c_caseD_a4;
  case (char *)0xa8:
  case (char *)0xac:
    Swift::String::hash((Hasher)0x6465736f6c43,*unaff_x20);
    HVar3.unknown = unaff_x20[1].str;
    Swift::String::hash((Hasher)0x6465736f6c43,unaff_x20[1]);
switchD_100a83ff4_caseD_d9:
    into.unknown = unaff_x20[2].str;
    Swift::Hasher::_combine((__uint64)into.unknown,HVar3);
switchD_100a83e7c_caseD_94:
    auVar29._8_8_ = HVar3.unknown;
    auVar29._0_8_ = into.unknown;
    return auVar29;
  case (char *)0xe4:
    goto switchD_100a83e7c_caseD_e4;
  case (char *)0xe8:
    goto switchD_100a83e7c_caseD_e8;
  case (char *)0xec:
switchD_100a83e7c_caseD_ec:
    auVar22._8_8_ = HVar3.unknown;
    auVar22._0_8_ = into.unknown;
    return auVar22;
  case (char *)0xfc:
    into.unknown = (undefined *)0x6465736f6c43;
    SVar35.bridgeObject = &DAT_e600000000000000;
    SVar35.str = (char *)0x6465736f6c43;
    switch(pcVar5) {
    case (char *)0x0:
      goto switchD_100a83ff4_caseD_0;
    default:
      into.unknown = (undefined *)0x10;
    case (char *)0x43:
    case (char *)0x5d:
    case (char *)0x6b:
    case (char *)0x85:
    case (char *)0x93:
    case (char *)0xd3:
    case (char *)0xed:
    case (char *)0xfb:
      into.unknown = into.unknown | 0xd000000000000000;
      pcVar5 = "\' does not exist or is a dangling symbolic link.";
switchD_100a83e7c_caseD_e8:
      pcVar5 = pcVar5 + 0xb10;
switchD_100a83ff4_caseD_1d:
      auVar18._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
      auVar18._0_8_ = into.unknown;
      return auVar18;
    case (char *)0x2:
      pcVar5 = (char *)0xe900000000000064;
    case (char *)0xb6:
      HVar3.unknown = pcVar5 + 0xe;
      into.unknown = (undefined *)0x6f727265204f2f49;
switchD_100a83e7c_caseD_54:
      auVar21._8_8_ = HVar3.unknown;
      auVar21._0_8_ = into.unknown;
      return auVar21;
    case (char *)0x3:
      HVar3.unknown = (undefined *)0x8000000100dbaad0;
      into.unknown = (undefined *)0xd000000000000011;
      goto switchD_100a83e7c_caseD_ec;
    case (char *)0x4:
    case (char *)0xb5:
      pcVar5 = (char *)0x64;
    case (char *)0xb7:
      pcVar5 = (char *)((ulong)pcVar5 | 0xe900000000000000);
      goto switchD_100a83ff4_caseD_d;
    case (char *)0x5:
      goto switchD_100a83e7c_caseD_1d;
    case (char *)0x6:
      pcVar5 = "Resource exhausted";
    case (char *)0x11:
      auVar25._8_8_ = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
      auVar25._0_8_ = 0xd000000000000012;
      return auVar25;
    case (char *)0x7:
      HVar3.unknown = (undefined *)0x656c62;
    case (char *)0xf:
    case (char *)0x23:
    case (char *)0x2b:
    case (char *)0x33:
    case (char *)0x3b:
    case (char *)0x4f:
    case (char *)0x63:
    case (char *)0x77:
    case (char *)0x8b:
    case (char *)0x9f:
    case (char *)0xb3:
    case (char *)0xbb:
    case (char *)0xc3:
    case (char *)0xcb:
    case (char *)0xdf:
    case (char *)0xf3:
      HVar3.unknown = (undefined *)((ulong)HVar3.unknown & 0xffffffffffff | 0xeb00000000000000);
      into.unknown = (undefined *)0x76616e55;
      goto switchD_100a83ff4_caseD_99;
    case (char *)0x8:
      goto switchD_100a83e7c_caseD_38;
    case (char *)0x9:
      HVar3.unknown = (undefined *)0xeb00000000646574;
      into.unknown = (undefined *)0x75736e55;
    case (char *)0x66:
      into.unknown = (undefined *)((ulong)into.unknown & 0xffff0000ffffffff | 0x726f707000000000);
switchD_100a83ff4_caseD_8e:
      auVar20._8_8_ = HVar3.unknown;
      auVar20._0_8_ = into.unknown;
      return auVar20;
    case (char *)0xa:
      goto switchD_100a83e7c_caseD_48;
    case (char *)0xd:
      goto switchD_100a83ff4_caseD_d;
    case (char *)0xe:
      goto switchD_100a83ff4_caseD_e;
    case (char *)0x13:
    case (char *)0x1b:
    case (char *)0x53:
    case (char *)0x5b:
    case (char *)0x7b:
    case (char *)0x83:
    case (char *)0xa3:
    case (char *)0xab:
    case (char *)0xe3:
    case (char *)0xeb:
      goto switchD_100a83e7c_caseD_e8;
    case (char *)0x1d:
    case (char *)0xad:
      goto switchD_100a83ff4_caseD_1d;
    case (char *)0x21:
    case (char *)0x29:
    case (char *)0x31:
    case (char *)0x39:
      register0x00000008 = (BADSPACEBASE *)auStack_80;
    case (char *)0x28:
    case (char *)0x30:
    case (char *)0x38:
    case (char *)0x40:
    case (char *)0x68:
    case (char *)0x90:
    case (char *)0xc0:
    case (char *)0xc8:
    case (char *)0xd0:
    case (char *)0xf8:
      *(String **)((long)register0x00000008 + 0x60) = unaff_x20;
      *(String **)((long)register0x00000008 + 0x68) = unaff_x19;
      *(undefined8 *)((long)register0x00000008 + 0x70) = unaff_x29;
      *(undefined8 *)((long)register0x00000008 + 0x78) = unaff_x30;
      Swift::Hasher::init(0);
      SVar44.bridgeObject = &DAT_e600000000000000;
      SVar44.str = (char *)0x6465736f6c43;
      Swift::String::hash((undefined *)((long)register0x00000008 + 8),SVar44);
      Swift::Hasher::_combine((__uint32)param_5.unknown,into);
      auVar42._0_8_ = Swift::Hasher::_finalize(param_5);
      auVar42._8_8_ = into.unknown;
      return auVar42;
    case (char *)0x22:
    case (char *)0x2a:
    case (char *)0x32:
    case (char *)0x3a:
    case (char *)0x4e:
    case (char *)0x62:
    case (char *)0x76:
    case (char *)0x8a:
    case (char *)0x9e:
    case (char *)0xb2:
    case (char *)0xba:
    case (char *)0xc2:
    case (char *)0xca:
    case (char *)0xde:
    case (char *)0xf2:
      goto switchD_100a83ff4_caseD_22;
    case (char *)0x25:
      goto switchD_100a83ff4_caseD_25;
    case (char *)0x27:
    case (char *)0x2f:
    case (char *)0x37:
    case (char *)0x3f:
      goto switchD_100a83ff4_caseD_27;
    case (char *)0x2d:
      goto switchD_100a83ff4_caseD_2d;
    case (char *)0x35:
      goto switchD_100a83ff4_caseD_35;
    case (char *)0x3d:
    case (char *)0xbd:
      register0x00000008 = (BADSPACEBASE *)auStack_60;
    case (char *)0x4a:
    case (char *)0x72:
      *(undefined8 *)((long)register0x00000008 + 0x20) = unaff_x24;
      *(undefined8 *)((long)register0x00000008 + 0x28) = unaff_x23;
      goto switchD_100a83ff4_caseD_9a;
    case (char *)0x49:
    case (char *)0xcd:
      goto switchD_100a83ff4_caseD_49;
    case (char *)0x4b:
    case (char *)0x73:
    case (char *)0x9b:
    case (char *)0xbf:
    case (char *)0xc7:
    case (char *)0xcf:
    case (char *)0xdb:
      goto switchD_100a83ff4_caseD_4b;
    case (char *)0x4d:
      goto switchD_100a83ff4_caseD_4d;
    case (char *)0x51:
      Swift::Hasher::_combine((__uint32)unaff_x19,(Hasher)0xe600000000000000);
      auVar41._8_8_ = HVar3.unknown;
      auVar41._0_8_ = unaff_x19;
      return auVar41;
    case (char *)0x52:
    case (char *)0x7a:
    case (char *)0xa2:
    case (char *)0xc5:
    case (char *)0xe2:
      param_11 = param_1;
      param_12 = in_register_00005008;
      param_13 = param_2;
      param_14 = in_register_00005028;
    case (char *)0x12:
      pcVar5 = _DAT_6465736f6c63;
      break;
    case (char *)0x61:
switchD_100a83ff4_caseD_61:
      param_5.unknown = (undefined *)unaff_x20;
      param_8 = unaff_x19;
      iVar7 = (int)param_5.unknown;
      iVar6 = (int)param_8;
      if (!(bool)in_ZR) goto LAB_100a84390;
      goto LAB_100a843ac;
    case (char *)0x65:
      goto switchD_100a83ff4_caseD_65;
    case (char *)0x67:
    case (char *)0x8f:
    case (char *)0xf7:
      if (param_6 == (void *)0x6465736f6c43) {
        in_ZR = param_7 == &DAT_e600000000000000;
        unaff_x19 = param_8;
        unaff_x20 = (String *)param_5.unknown;
        goto switchD_100a83ff4_caseD_61;
      }
LAB_100a84390:
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x6465736f6c43,(_StringGuts)0xe600000000000000,
                         (_StringComparisonResult)(__int8)param_6);
      pcVar5 = (char *)(ulong)bVar1;
      into.unknown = (undefined *)0x0;
      unaff_x19 = param_8;
      unaff_x20 = (String *)param_5.unknown;
    case (char *)0x26:
    case (char *)0x2e:
    case (char *)0x36:
    case (char *)0x3e:
      iVar7 = (int)unaff_x20;
      iVar6 = (int)unaff_x19;
      if (((ulong)pcVar5 & 1) != 0) {
LAB_100a843ac:
        into.unknown = (undefined *)(ulong)(iVar7 == iVar6);
      }
switchD_100a83ff4_caseD_4d:
      auVar40._8_8_ = HVar3.unknown;
      auVar40._0_8_ = into.unknown;
      return auVar40;
    case (char *)0x71:
      goto switchD_100a83ff4_caseD_71;
    case (char *)0x75:
      goto switchD_100a83ff4_caseD_75;
    case (char *)0x79:
      goto switchD_100a83ff4_caseD_79;
    case (char *)0x89:
      goto switchD_100a83ff4_caseD_89;
    case (char *)0x8d:
      goto switchD_100a83ff4_caseD_8d;
    case (char *)0x8e:
      goto switchD_100a83ff4_caseD_8e;
    case (char *)0x99:
      goto switchD_100a83ff4_caseD_99;
    case (char *)0x9a:
    case (char *)0xda:
      goto switchD_100a83ff4_caseD_9a;
    case (char *)0x9d:
      goto switchD_100a83ff4_caseD_9d;
    case (char *)0xa1:
      goto switchD_100a83ff4_caseD_a1;
    case (char *)0xb1:
    case (char *)0xb9:
    case (char *)0xc1:
    case (char *)0xc9:
      goto switchD_100a83ff4_caseD_b1;
    case (char *)0xbe:
    case (char *)0xc6:
    case (char *)0xce:
    case (char *)0xf5:
      goto switchD_100a83ff4_caseD_be;
    case (char *)0xd9:
      goto switchD_100a83ff4_caseD_d9;
    case (char *)0xdd:
      goto switchD_100a83e7c_caseD_19;
    case (char *)0xe1:
      goto switchD_100a83ff4_caseD_e1;
    case (char *)0xf1:
      into.unknown = (undefined *)0x6465736f791b;
      goto switchD_100a83e7c_caseD_70;
    case (char *)0xf6:
      goto switchD_100a83e7c_caseD_54;
    }
  case (char *)0x31:
  case (char *)0x39:
  case (char *)0x41:
  case (char *)0x49:
    param_19 = uRame600000000000008;
    param_18 = _DAT_e600000000000000;
    param_21 = uRame600000000000018;
    param_20 = _DAT_e600000000000010;
    param_22 = _DAT_e600000000000020;
    param_15 = pcVar5;
switchD_100a83e7c_caseD_58:
    puVar4 = &param_18;
    FUN_100a845a8();
    auVar31._4_4_ = 0;
    auVar31._0_4_ = (uint)register0x00000008 & 1;
    auVar31._8_8_ = puVar4;
    return auVar31;
  }
switchD_100a83ff4_caseD_9a:
  *(char **)((long)register0x00000008 + 0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + 0x38) = unaff_x21;
switchD_100a83e7c_caseD_2c:
  *(String **)((long)register0x00000008 + 0x40) = unaff_x20;
  *(String **)((long)register0x00000008 + 0x48) = unaff_x19;
switchD_100a83ff4_caseD_35:
  *(undefined8 *)((long)register0x00000008 + 0x50) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + 0x58) = unaff_x30;
  goto switchD_100a83e7c_caseD_33;
switchD_100a83ff4_caseD_d:
  HVar3.unknown = pcVar5 + 0x15;
  into.unknown = (undefined *)0x20746f4e;
  goto switchD_100a83ff4_caseD_8d;
switchD_100a83ff4_caseD_25:
  Swift::_StringGuts::grow(0x27,(_StringGuts)0xe600000000000000);
  _swift_bridgeObjectRelease(*(undefined8 *)((long)register0x00000008 + 0x18));
  *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x23;
  *(undefined8 *)((long)register0x00000008 + 0x18) = 0xe100000000000000;
  SVar33.bridgeObject = unaff_x21;
  SVar33.str = unaff_x22;
  SVar45.bridgeObject = param_6;
  SVar45.str = param_5.unknown;
  Swift::String::append(SVar33,SVar45);
  pcVar5 = "\' does not exist or is a dangling symbolic link.";
switchD_100a83ff4_caseD_65:
  pcVar5 = pcVar5 + 0xb30;
switchD_100a83ff4_caseD_b1:
  SVar34.bridgeObject = (void *)((ulong)(pcVar5 + -0x20) | 0x8000000000000000);
  SVar34.str = (char *)0xd00000000000001c;
  SVar46.bridgeObject = param_6;
  SVar46.str = param_5.unknown;
  Swift::String::append(SVar34,SVar46);
  *(int *)((long)register0x00000008 + 0xc) = (int)unaff_x19;
switchD_100a83ff4_caseD_22:
switchD_100a83ff4_caseD_e:
switchD_100a83ff4_caseD_9d:
  SVar35 = Swift::CustomStringConvertible::get_description();
  unaff_x21 = SVar35.bridgeObject;
switchD_100a83ff4_caseD_a1:
  into.unknown = (undefined *)unaff_x19;
  SVar47.bridgeObject = param_6;
  SVar47.str = param_5.unknown;
  Swift::String::append(SVar35,SVar47);
  _swift_bridgeObjectRelease(unaff_x21);
  SVar36.bridgeObject = &SUB_e200000000000000;
  SVar36.str = (char *)0x2029;
  HVar3.unknown = &SUB_e200000000000000;
  SVar48.bridgeObject = param_6;
  SVar48.str = param_5.unknown;
  Swift::String::append(SVar36,SVar48);
  FUN_1005aacac();
switchD_100a83ff4_caseD_89:
  SVar37.bridgeObject = HVar3.unknown;
  SVar37.str = into.unknown;
  SVar49.bridgeObject = param_6;
  SVar49.str = param_5.unknown;
  Swift::String::append(SVar37,SVar49);
  unaff_x19 = (String *)HVar3.unknown;
switchD_100a83ff4_caseD_79:
  _swift_bridgeObjectRelease(unaff_x19);
  into.unknown = (undefined *)0x2e27;
switchD_100a83ff4_caseD_71:
  SVar38.bridgeObject = &SUB_e200000000000000;
  SVar38.str = into.unknown;
  SVar50.bridgeObject = param_6;
  SVar50.str = param_5.unknown;
  Swift::String::append(SVar38,SVar50);
  into.unknown = *(undefined **)((long)register0x00000008 + 0x10);
  HVar3.unknown = *(undefined **)((long)register0x00000008 + 0x18);
  goto switchD_100a83ff4_caseD_be;
switchD_100a83ff4_caseD_4b:
  into.unknown = (undefined *)((ulong)pcVar5 | 3);
switchD_100a83ff4_caseD_0:
  auVar26._8_8_ = HVar3.unknown;
  auVar26._0_8_ = into.unknown;
  return auVar26;
switchD_100a83ff4_caseD_be:
switchD_100a83ff4_caseD_75:
  auVar39._8_8_ = HVar3.unknown;
  auVar39._0_8_ = into.unknown;
  return auVar39;
switchD_100a83ff4_caseD_8d:
  into.unknown = (undefined *)((ulong)into.unknown & 0xffff0000ffffffff | 0x74706d6500000000);
switchD_100a83e7c_caseD_e4:
  auVar19._8_8_ = HVar3.unknown;
  auVar19._0_8_ = into.unknown;
  return auVar19;
switchD_100a83ff4_caseD_99:
  into.unknown = (undefined *)((ulong)into.unknown & 0xffff0000ffffffff | 0x616c696100000000);
switchD_100a83e7c_caseD_5d:
  auVar23._8_8_ = HVar3.unknown;
  auVar23._0_8_ = into.unknown;
  return auVar23;
}



/* Address: 0x100a83fb0 | FUN_100a83fb0 */

void FUN_100a83fb0(void)

{
  undefined1 *unaff_x20;
  
  FUN_100a83e50(*unaff_x20);
  return;
}



/* Address: 0x100a83fc8 | FUN_100a83fc8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100a83fc8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,Hasher param_5,
             void *param_6,undefined1 *param_7,char *param_8,undefined8 param_9,undefined8 param_10,
             undefined8 param_11,undefined8 param_12,undefined8 param_13,undefined8 param_14,
             undefined8 param_15,undefined4 param_16,undefined4 param_17,undefined8 param_18,
             undefined8 param_19,undefined8 param_20,undefined8 param_21,undefined8 param_22)

{
  undefined1 in_ZR;
  bool bVar1;
  Hasher HVar2;
  __uint64 _Var3;
  Hasher HVar4;
  undefined8 *puVar5;
  char *pcVar6;
  int iVar7;
  char *unaff_x19;
  int iVar8;
  char *unaff_x20;
  undefined1 *unaff_x21;
  char *unaff_x22;
  undefined8 unaff_x23;
  undefined8 unaff_x24;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [48];
  
  HVar4.unknown = &DAT_e600000000000000;
  HVar2.unknown = (char *)0x6465736f6c43;
  SVar25.bridgeObject = &DAT_e600000000000000;
  SVar25.str = (char *)0x6465736f6c43;
  pcVar6 = (char *)(param_3 & 0xff);
  switch(pcVar6) {
  case (char *)0x0:
    goto switchD_100a83ff4_caseD_0;
  default:
    HVar2.unknown = (char *)0x10;
  case (char *)0x43:
  case (char *)0x5d:
  case (char *)0x6b:
  case (char *)0x85:
  case (char *)0x93:
  case (char *)0xd3:
  case (char *)0xed:
  case (char *)0xfb:
    HVar2.unknown = HVar2.unknown | 0xd000000000000000;
    pcVar6 = "\' does not exist or is a dangling symbolic link.";
  case (char *)0x13:
  case (char *)0x1b:
  case (char *)0x53:
  case (char *)0x5b:
  case (char *)0x7b:
  case (char *)0x83:
  case (char *)0xa3:
  case (char *)0xab:
  case (char *)0xe3:
  case (char *)0xeb:
    pcVar6 = pcVar6 + 0xb10;
switchD_100a83ff4_caseD_1d:
    auVar9._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar9._0_8_ = HVar2.unknown;
    return auVar9;
  case (char *)0x2:
    pcVar6 = (char *)0xe900000000000064;
  case (char *)0xb6:
    HVar4.unknown = pcVar6 + 0xe;
    HVar2.unknown = (char *)0x6f727265204f2f49;
switchD_100a83e7c_caseD_54:
    auVar12._8_8_ = HVar4.unknown;
    auVar12._0_8_ = HVar2.unknown;
    return auVar12;
  case (char *)0x3:
    auVar13._8_8_ = 0x8000000100dbaad0;
    auVar13._0_8_ = 0xd000000000000011;
    return auVar13;
  case (char *)0x4:
  case (char *)0xb5:
    pcVar6 = (char *)0x64;
  case (char *)0xb7:
    pcVar6 = (char *)((ulong)pcVar6 | 0xe900000000000000);
  case (char *)0xd:
    HVar4.unknown = pcVar6 + 0x15;
    HVar2.unknown = (char *)0x20746f4e;
switchD_100a83ff4_caseD_8d:
    auVar10._0_8_ = (ulong)HVar2.unknown & 0xffff0000ffffffff | 0x74706d6500000000;
    auVar10._8_8_ = HVar4.unknown;
    return auVar10;
  case (char *)0x5:
    auVar15._8_8_ = 0xe900000000000064;
    auVar15._0_8_ = 0x6e756f6620746f4e;
    return auVar15;
  case (char *)0x6:
    pcVar6 = "Resource exhausted";
  case (char *)0x11:
    auVar16._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar16._0_8_ = 0xd000000000000012;
    return auVar16;
  case (char *)0x7:
    HVar4.unknown = (char *)0x656c62;
  case (char *)0xf:
  case (char *)0x23:
  case (char *)0x2b:
  case (char *)0x33:
  case (char *)0x3b:
  case (char *)0x4f:
  case (char *)0x63:
  case (char *)0x77:
  case (char *)0x8b:
  case (char *)0x9f:
  case (char *)0xb3:
  case (char *)0xbb:
  case (char *)0xc3:
  case (char *)0xcb:
  case (char *)0xdf:
  case (char *)0xf3:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffffffffffff | 0xeb00000000000000);
    HVar2.unknown = (char *)0x76616e55;
switchD_100a83ff4_caseD_99:
    auVar14._0_8_ = (ulong)HVar2.unknown & 0xffff0000ffffffff | 0x616c696100000000;
    auVar14._8_8_ = HVar4.unknown;
    return auVar14;
  case (char *)0x8:
    auVar18._8_8_ = &DAT_e700000000000000;
    auVar18._0_8_ = 0x6e776f6e6b6e55;
    return auVar18;
  case (char *)0x9:
    HVar4.unknown = (char *)0xeb00000000646574;
    HVar2.unknown = (char *)0x75736e55;
  case (char *)0x66:
    HVar2.unknown = (undefined *)((ulong)HVar2.unknown & 0xffff0000ffffffff | 0x726f707000000000);
switchD_100a83ff4_caseD_8e:
    auVar11._8_8_ = HVar4.unknown;
    auVar11._0_8_ = HVar2.unknown;
    return auVar11;
  case (char *)0xa:
    HVar4.unknown = (char *)0x8000000100dbaa90;
    pcVar6 = (char *)0x10;
  case (char *)0x27:
  case (char *)0x2f:
  case (char *)0x37:
  case (char *)0x3f:
    pcVar6 = (char *)((ulong)pcVar6 | 0xd000000000000000);
  case (char *)0x4b:
  case (char *)0x73:
  case (char *)0x9b:
  case (char *)0xbf:
  case (char *)0xc7:
  case (char *)0xcf:
  case (char *)0xdb:
    HVar2.unknown = (undefined *)((ulong)pcVar6 | 3);
switchD_100a83ff4_caseD_0:
    auVar17._8_8_ = HVar4.unknown;
    auVar17._0_8_ = HVar2.unknown;
    return auVar17;
  case (char *)0x1d:
  case (char *)0xad:
    goto switchD_100a83ff4_caseD_1d;
  case (char *)0x21:
  case (char *)0x29:
  case (char *)0x31:
  case (char *)0x39:
    register0x00000008 = (BADSPACEBASE *)auStack_80;
  case (char *)0x28:
  case (char *)0x30:
  case (char *)0x38:
  case (char *)0x40:
  case (char *)0x68:
  case (char *)0x90:
  case (char *)0xc0:
  case (char *)0xc8:
  case (char *)0xd0:
  case (char *)0xf8:
    *(char **)((long)register0x00000008 + 0x60) = unaff_x20;
    *(char **)((long)register0x00000008 + 0x68) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + 0x70) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x78) = unaff_x30;
    Swift::Hasher::init(0);
    SVar33.bridgeObject = &DAT_e600000000000000;
    SVar33.str = (char *)0x6465736f6c43;
    Swift::String::hash((undefined *)((long)register0x00000008 + 8),SVar33);
    Swift::Hasher::_combine((__uint32)param_5.unknown,HVar2);
    auVar32._0_8_ = Swift::Hasher::_finalize(param_5);
    auVar32._8_8_ = HVar2.unknown;
    return auVar32;
  case (char *)0x25:
switchD_100a83ff4_caseD_25:
    Swift::_StringGuts::grow(0x27,(_StringGuts)0xe600000000000000);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)register0x00000008 + 0x18));
    *(undefined8 *)((long)register0x00000008 + 0x10) = unaff_x23;
    *(undefined8 *)((long)register0x00000008 + 0x18) = 0xe100000000000000;
    SVar23.bridgeObject = unaff_x21;
    SVar23.str = unaff_x22;
    SVar34.bridgeObject = param_6;
    SVar34.str = param_5.unknown;
    Swift::String::append(SVar23,SVar34);
    pcVar6 = "\' does not exist or is a dangling symbolic link.";
  case (char *)0x65:
    pcVar6 = pcVar6 + 0xb30;
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xc1:
  case (char *)0xc9:
    SVar24.bridgeObject = (void *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
    SVar24.str = (char *)0xd00000000000001c;
    SVar35.bridgeObject = param_6;
    SVar35.str = param_5.unknown;
    Swift::String::append(SVar24,SVar35);
    *(int *)((long)register0x00000008 + 0xc) = (int)unaff_x19;
  case (char *)0x22:
  case (char *)0x2a:
  case (char *)0x32:
  case (char *)0x3a:
  case (char *)0x4e:
  case (char *)0x62:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xc2:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xf2:
  case (char *)0xe:
  case (char *)0x9d:
    SVar25 = Swift::CustomStringConvertible::get_description();
    unaff_x21 = SVar25.bridgeObject;
  case (char *)0xa1:
    HVar2.unknown = unaff_x19;
    SVar36.bridgeObject = param_6;
    SVar36.str = param_5.unknown;
    Swift::String::append(SVar25,SVar36);
    _swift_bridgeObjectRelease(unaff_x21);
    SVar26.bridgeObject = &SUB_e200000000000000;
    SVar26.str = (char *)0x2029;
    HVar4.unknown = &SUB_e200000000000000;
    SVar37.bridgeObject = param_6;
    SVar37.str = param_5.unknown;
    Swift::String::append(SVar26,SVar37);
    FUN_1005aacac();
  case (char *)0x89:
    SVar27.bridgeObject = HVar4.unknown;
    SVar27.str = HVar2.unknown;
    SVar38.bridgeObject = param_6;
    SVar38.str = param_5.unknown;
    Swift::String::append(SVar27,SVar38);
    unaff_x19 = HVar4.unknown;
  case (char *)0x79:
    _swift_bridgeObjectRelease(unaff_x19);
    HVar2.unknown = (char *)0x2e27;
  case (char *)0x71:
    SVar28.bridgeObject = &SUB_e200000000000000;
    SVar28.str = HVar2.unknown;
    SVar39.bridgeObject = param_6;
    SVar39.str = param_5.unknown;
    Swift::String::append(SVar28,SVar39);
    HVar2.unknown = *(undefined **)((long)register0x00000008 + 0x10);
    HVar4.unknown = *(undefined **)((long)register0x00000008 + 0x18);
  case (char *)0xbe:
  case (char *)0xc6:
  case (char *)0xce:
  case (char *)0xf5:
switchD_100a83ff4_caseD_75:
    auVar29._8_8_ = HVar4.unknown;
    auVar29._0_8_ = HVar2.unknown;
    return auVar29;
  case (char *)0x26:
  case (char *)0x2e:
  case (char *)0x36:
  case (char *)0x3e:
    goto switchD_100a83ff4_caseD_26;
  case (char *)0x2d:
    goto switchD_100a83ff4_caseD_2d;
  case (char *)0x35:
    goto switchD_100a83ff4_caseD_35;
  case (char *)0x3d:
  case (char *)0xbd:
    register0x00000008 = (BADSPACEBASE *)auStack_60;
  case (char *)0x4a:
  case (char *)0x72:
    *(undefined8 *)((long)register0x00000008 + 0x20) = unaff_x24;
    *(undefined8 *)((long)register0x00000008 + 0x28) = unaff_x23;
    break;
  case (char *)0x49:
  case (char *)0xcd:
    HVar4.unknown = ((String *)(unaff_x20 + 0x10))->str;
    Swift::String::hash((Hasher)&param_12,*(String *)(unaff_x20 + 0x10));
    HVar2.unknown = *(undefined **)(unaff_x20 + 0x20);
    Swift::Hasher::_combine((__uint64)HVar2.unknown,HVar4);
    HVar2.unknown = (undefined *)Swift::Hasher::_finalize(HVar2);
  case (char *)0xe1:
    auVar21._8_8_ = HVar4.unknown;
    auVar21._0_8_ = HVar2.unknown;
    return auVar21;
  case (char *)0x4d:
    goto switchD_100a83ff4_caseD_4d;
  case (char *)0x51:
    Swift::Hasher::_combine((__uint32)unaff_x19,(Hasher)0xe600000000000000);
    auVar31._8_8_ = HVar4.unknown;
    auVar31._0_8_ = unaff_x19;
    return auVar31;
  case (char *)0x52:
  case (char *)0x7a:
  case (char *)0xa2:
  case (char *)0xc5:
  case (char *)0xe2:
    param_11 = param_1;
    param_12 = in_register_00005008;
    param_13 = param_2;
    param_14 = in_register_00005028;
  case (char *)0x12:
    param_15 = _DAT_6465736f6c63;
    param_19 = uRame600000000000008;
    param_18 = _DAT_e600000000000000;
    param_21 = uRame600000000000018;
    param_20 = _DAT_e600000000000010;
    param_22 = _DAT_e600000000000020;
    puVar5 = &param_18;
    FUN_100a845a8();
    auVar22._4_4_ = 0;
    auVar22._0_4_ = (uint)register0x00000008 & 1;
    auVar22._8_8_ = puVar5;
    return auVar22;
  case (char *)0x61:
switchD_100a83ff4_caseD_61:
    param_5.unknown = unaff_x20;
    param_8 = unaff_x19;
    iVar8 = (int)param_5.unknown;
    iVar7 = (int)param_8;
    if (!(bool)in_ZR) goto LAB_100a84390;
    goto LAB_100a843ac;
  case (char *)0x67:
  case (char *)0x8f:
  case (char *)0xf7:
    if (param_6 == (void *)0x6465736f6c43) {
      in_ZR = param_7 == &DAT_e600000000000000;
      unaff_x19 = param_8;
      unaff_x20 = param_5.unknown;
      goto switchD_100a83ff4_caseD_61;
    }
LAB_100a84390:
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6465736f6c43,(_StringGuts)0xe600000000000000,
                       (_StringComparisonResult)(__int8)param_6);
    pcVar6 = (char *)(ulong)bVar1;
    HVar2.unknown = (char *)0x0;
    unaff_x19 = param_8;
    unaff_x20 = param_5.unknown;
switchD_100a83ff4_caseD_26:
    iVar8 = (int)unaff_x20;
    iVar7 = (int)unaff_x19;
    if (((ulong)pcVar6 & 1) != 0) {
LAB_100a843ac:
      HVar2.unknown = (undefined *)(ulong)(iVar8 == iVar7);
    }
switchD_100a83ff4_caseD_4d:
    auVar30._8_8_ = HVar4.unknown;
    auVar30._0_8_ = HVar2.unknown;
    return auVar30;
  case (char *)0x75:
    goto switchD_100a83ff4_caseD_75;
  case (char *)0x8d:
    goto switchD_100a83ff4_caseD_8d;
  case (char *)0x8e:
    goto switchD_100a83ff4_caseD_8e;
  case (char *)0x99:
    goto switchD_100a83ff4_caseD_99;
  case (char *)0x9a:
  case (char *)0xda:
    break;
  case (char *)0xd9:
    _Var3 = *(__uint64 *)(unaff_x20 + 0x20);
    Swift::Hasher::_combine(_Var3,(Hasher)0xe600000000000000);
    auVar20._8_8_ = HVar4.unknown;
    auVar20._0_8_ = _Var3;
    return auVar20;
  case (char *)0xf1:
    HVar4.unknown = (char *)0x6465736f791b;
    FUN_1000f8b08(0x6465736f791b,&DAT_100c911e8);
    HVar2.unknown = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,
               HVar4.unknown);
    DAT_100ff6fb8 = HVar2.unknown;
  case (char *)0xdd:
    auVar19._8_8_ = HVar4.unknown;
    auVar19._0_8_ = HVar2.unknown;
    return auVar19;
  case (char *)0xf6:
    goto switchD_100a83e7c_caseD_54;
  }
  *(char **)((long)register0x00000008 + 0x30) = unaff_x22;
  *(undefined1 **)((long)register0x00000008 + 0x38) = unaff_x21;
  *(char **)((long)register0x00000008 + 0x40) = unaff_x20;
  *(char **)((long)register0x00000008 + 0x48) = unaff_x19;
switchD_100a83ff4_caseD_35:
  *(undefined8 *)((long)register0x00000008 + 0x50) = unaff_x29;
  *(undefined8 *)((long)register0x00000008 + 0x58) = unaff_x30;
  unaff_x21 = &DAT_e600000000000000;
  unaff_x19 = param_5.unknown;
switchD_100a83ff4_caseD_2d:
  *(undefined8 *)((long)register0x00000008 + 0x10) = 0;
  *(undefined8 *)((long)register0x00000008 + 0x18) = 0xe000000000000000;
  unaff_x23 = 0x27;
  unaff_x22 = HVar2.unknown;
  goto switchD_100a83ff4_caseD_25;
}



/* Address: 0x100a84128 | FUN_100a84128 */

void FUN_100a84128(void)

{
  undefined1 *unaff_x20;
  
  FUN_100a83fc8(*unaff_x20);
  return;
}


