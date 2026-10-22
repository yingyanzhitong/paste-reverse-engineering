/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10055c4c0 | thunk_FUN_10055be0c */

void thunk_FUN_10055be0c(void)

{
  FUN_10055be0c();
  return;
}



/* Address: 0x10055c4c4 | FUN_10055c4c4 */

void FUN_10055c4c4(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_10055be0c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10055c4fc | FUN_10055c4fc */

void FUN_10055c4fc(void)

{
  FUN_10055bbec();
  return;
}



/* Address: 0x10055c510 | FUN_10055c510 */

uint FUN_10055c510(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  local_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10056073c(&local_70,&uStack_40);
  return uVar1 & 1;
}



/* Address: 0x10055c554 | FUN_10055c554 */

void FUN_10055c554(void)

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
  pcVar1 = (char *)0x746e65746e6f63;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x656c6f72;
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



/* Address: 0x10055c5e8 | FUN_10055c5e8 */

void FUN_10055c5e8(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
  pcVar1 = (char *)0x746e65746e6f63;
  if (cVar5 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x656c6f72;
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



/* Address: 0x10055c658 | FUN_10055c658 */

void FUN_10055c658(__int64 param_1)

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
  pcVar1 = (char *)0x746e65746e6f63;
  if (cVar4 != '\x01') {
    pcVar1 = (char *)0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  pcVar3 = (char *)0x656c6f72;
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



/* Address: 0x10055c6e8 | FUN_10055c6e8 */

void FUN_10055c6e8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fcfe20);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10055c71c | FUN_10055c71c */

void FUN_10055c71c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x746e65746e6f63;
  if (cVar5 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x656c6f72;
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



/* Address: 0x10055c770 | FUN_10055c770 */

undefined1  [16] FUN_10055c770(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x746e65746e6f63;
  if (cVar5 != '\x01') {
    uVar1 = 0x6174656d5f;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x656c6f72;
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



/* Address: 0x10055c7c0 | FUN_10055c7c0 */

void FUN_10055c7c0(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_1004cbd4c(param_2,param_3,&DAT_100fcfe20);
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x10055c7ec | FUN_10055c7ec */

String FUN_10055c7ec(void)

{
  String SVar1;
  
  FUN_1005624cc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055c814 | FUN_10055c814 */

String FUN_10055c814(void)

{
  String SVar1;
  
  FUN_1005624cc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055c83c | FUN_10055c83c */

void FUN_10055c83c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_100562224(&local_68);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    param_1[8] = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x10055c88c | FUN_10055c88c */

void FUN_10055c88c(long param_1)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcfb10;
  FUN_1000f7830(&DAT_100fcfb10,&BYTE_100c58860);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005624cc();
  KVar2 = Swift::Encoder::_container();
  local_90 = CONCAT71(local_90._1_7_,*unaff_x20);
  local_51 = 0;
  FUN_10056250c();
  puVar3 = &local_90;
  Swift::KeyedEncodingContainer::_encode(puVar3,&local_51,puVar1,&DAT_100edf350,KVar2.unknown);
  if (unaff_x21 == 0) {
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x10);
    local_90 = *(undefined8 *)(unaff_x20 + 8);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    local_70 = *(undefined8 *)(unaff_x20 + 0x28);
    local_60 = unaff_x20[0x38];
    local_51 = 1;
    FUN_10056254c();
    puVar4 = &local_90;
    Swift::KeyedEncodingContainer::_encode(puVar4,&local_51,puVar1,&DAT_100edf3e0,puVar3);
    local_90 = *(undefined8 *)(unaff_x20 + 0x40);
    local_51 = 2;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_90,&local_51,puVar1,&DAT_100edcda0,puVar4);
  }
  (**(code **)(lVar5 + 8))((long)&local_90 - extraout_x8,puVar1);
  return;
}



/* Address: 0x10055ca28 | FUN_10055ca28 */

String FUN_10055ca28(ulong param_1,undefined8 param_2,undefined *param_3,undefined **param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  char *unaff_x22;
  long unaff_x23;
  long unaff_x25;
  long unaff_x28;
  long unaff_x29;
  undefined8 unaff_x30;
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
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  
  pcVar2 = (code *)&DAT_e400000000000000;
  pcVar1 = &DAT_65707974;
  puVar3 = (undefined8 *)(param_1 & 0xff);
  switch(puVar3) {
  case (undefined8 *)0x0:
    goto switchD_10055ca50_caseD_0;
  default:
    SVar4.bridgeObject = &DAT_e400000000000000;
    SVar4.str = (char *)0x74786574;
    return SVar4;
  case (undefined8 *)0x2:
    SVar8.bridgeObject = &DAT_e400000000000000;
    SVar8.str = (char *)0x61746164;
    return SVar8;
  case (undefined8 *)0x3:
    pcVar2 = (code *)&DAT_e800000000000000;
  case (undefined8 *)0x19:
    pcVar1 = (char *)0x696d;
switchD_10055ca50_caseD_13:
    SVar9.str = (char *)((ulong)pcVar1 & 0xffffffff0000ffff | 0x65707954656d0000);
    SVar9.bridgeObject = pcVar2;
    return SVar9;
  case (undefined8 *)0x4:
  case (undefined8 *)0x15:
  case (undefined8 *)0x94:
  case (undefined8 *)0xb4:
  case (undefined8 *)0xf4:
    pcVar2 = (code *)&SUB_e200000000000000;
  case (undefined8 *)0x72:
  case (undefined8 *)0x7a:
  case (undefined8 *)0x82:
  case (undefined8 *)0x8a:
  case (undefined8 *)0x92:
  case (undefined8 *)0x9a:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xb2:
  case (undefined8 *)0xc2:
  case (undefined8 *)0xca:
  case (undefined8 *)0xd2:
  case (undefined8 *)0xda:
  case (undefined8 *)0xe2:
  case (undefined8 *)0xea:
  case (undefined8 *)0xf2:
    SVar6.bridgeObject = pcVar2;
    SVar6.str = &SUB_00006469;
    return SVar6;
  case (undefined8 *)0x5:
    SVar11.bridgeObject = &DAT_e400000000000000;
    SVar11.str = (char *)0x656d616e;
    return SVar11;
  case (undefined8 *)0x6:
  case (undefined8 *)0x12:
    pcVar2 = (code *)&DAT_e500000000000000;
    pcVar1 = (char *)0x7475706e69;
  case (undefined8 *)0x1e:
    SVar12.bridgeObject = pcVar2;
    SVar12.str = pcVar1;
    return SVar12;
  case (undefined8 *)0x7:
  case (undefined8 *)0x11:
    pcVar2 = (code *)&DAT_e500000000000000;
    pcVar1 = (char *)0x74656d5f;
  case (undefined8 *)0x1a:
    SVar10.str = (char *)((ulong)pcVar1 | 0x6100000000);
    SVar10.bridgeObject = pcVar2;
    return SVar10;
  case (undefined8 *)0x8:
  case (undefined8 *)0xc:
    pcVar2 = (code *)0x64;
  case (undefined8 *)0x14:
    pcVar2 = (code *)((ulong)pcVar2 & 0xffffffffffff | 0xe900000000000000);
    pcVar1 = (char *)0x6c6f6f74;
switchD_10055ca50_caseD_1d:
    SVar14.str = (char *)((ulong)pcVar1 | 0x4965735500000000);
    SVar14.bridgeObject = pcVar2;
    return SVar14;
  case (undefined8 *)0x9:
  case (undefined8 *)0x74:
  case (undefined8 *)0x7c:
  case (undefined8 *)0x84:
  case (undefined8 *)0x8c:
  case (undefined8 *)0x9c:
  case (undefined8 *)0xac:
  case (undefined8 *)0xc4:
  case (undefined8 *)0xcc:
  case (undefined8 *)0xd4:
  case (undefined8 *)0xdc:
  case (undefined8 *)0xec:
    pcVar2 = (code *)&DAT_e700000000000000;
    pcVar1 = (char *)0x6f63;
  case (undefined8 *)0xe:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffff0000ffff | 0x746e0000);
  case (undefined8 *)0x20:
    pcVar1 = (char *)((ulong)pcVar1 | 0x746e6500000000);
switchD_10055ca50_caseD_f:
    SVar7.bridgeObject = pcVar2;
    SVar7.str = pcVar1;
    return SVar7;
  case (undefined8 *)0xa:
  case (undefined8 *)0x16:
    pcVar2 = (code *)0x8000000100dad930;
  case (undefined8 *)0x1c:
    SVar13.bridgeObject = pcVar2;
    SVar13.str = (char *)0xd000000000000011;
    return SVar13;
  case (undefined8 *)0xb:
  case (undefined8 *)0x10:
    pcVar2 = (code *)&DAT_e700000000000000;
    pcVar1 = (char *)0x6f7272457369;
  case (undefined8 *)0x1b:
  case (undefined8 *)0xe4:
    pcVar1 = (char *)((ulong)pcVar1 | 0x72000000000000);
switchD_10055ca50_caseD_0:
    SVar5.bridgeObject = pcVar2;
    SVar5.str = pcVar1;
    return SVar5;
  case (undefined8 *)0xf:
    goto switchD_10055ca50_caseD_f;
  case (undefined8 *)0x13:
    goto switchD_10055ca50_caseD_13;
  case (undefined8 *)0x17:
    FUN_10055d3e0();
    SVar16.bridgeObject = pcVar2;
    SVar16.str = pcVar1;
    return SVar16;
  case (undefined8 *)0x1d:
    goto switchD_10055ca50_caseD_1d;
  case (undefined8 *)0x1f:
    switchD_10055d294::caseD_1c();
    SVar17.bridgeObject = pcVar2;
    SVar17.str = pcVar1;
    return SVar17;
  case (undefined8 *)0x21:
    FUN_10055d370(&DAT_65707974,&DAT_e400000000000000,param_3 + 0xa28);
    SVar15.bridgeObject = pcVar2;
    SVar15.str = pcVar1;
    return SVar15;
  case (undefined8 *)0x28:
  case (undefined8 *)0x3d:
  case (undefined8 *)0x40:
  case (undefined8 *)0x43:
  case (undefined8 *)0x4e:
  case (undefined8 *)0x5e:
    goto switchD_10055ca50_caseD_28;
  case (undefined8 *)0x2d:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
  case (undefined8 *)0x38:
  case (undefined8 *)0x50:
  case (undefined8 *)0x5d:
    *(long *)((long)register0x00000008 + 0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x18) = unaff_x30;
  case (undefined8 *)0x39:
  case (undefined8 *)0x58:
  case (undefined8 *)0x2c:
  case (undefined8 *)0x3f:
  case (undefined8 *)0x71:
  case (undefined8 *)0x79:
  case (undefined8 *)0x81:
  case (undefined8 *)0x89:
  case (undefined8 *)0x91:
  case (undefined8 *)0x99:
  case (undefined8 *)0xa9:
  case (undefined8 *)0xb1:
  case (undefined8 *)0xc1:
  case (undefined8 *)0xc9:
  case (undefined8 *)0xd1:
  case (undefined8 *)0xd9:
  case (undefined8 *)0xe1:
  case (undefined8 *)0xe9:
    FUN_100562d70();
  case (undefined8 *)0xf1:
switchD_10055ca50_caseD_4a:
    SVar20 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar20;
  case (undefined8 *)0x37:
  case (undefined8 *)0x67:
    goto switchD_10055ca50_caseD_37;
  case (undefined8 *)0x3c:
    pcVar1 = (char *)(ulong)*unaff_x20;
  case (undefined8 *)0x2b:
  case (undefined8 *)0x4b:
    FUN_10055ca28();
switchD_10055ca50_caseD_5c:
    *unaff_x19 = pcVar1;
    unaff_x19[1] = pcVar2;
    SVar18.bridgeObject = pcVar2;
    SVar18.str = pcVar1;
    return SVar18;
  case (undefined8 *)0x3e:
    goto switchD_10055ca50_caseD_3e;
  case (undefined8 *)0x47:
    goto switchD_10055ca50_caseD_47;
  case (undefined8 *)0x48:
    goto switchD_10055ca50_caseD_48;
  case (undefined8 *)0x49:
    unaff_x19 = puVar3;
  case (undefined8 *)0x42:
    FUN_10056258c();
  case (undefined8 *)0x2a:
    *(char *)unaff_x19 = (char)pcVar1;
switchD_10055ca50_caseD_28:
    SVar19.bridgeObject = pcVar2;
    SVar19.str = pcVar1;
    return SVar19;
  case (undefined8 *)0x4a:
    goto switchD_10055ca50_caseD_4a;
  case (undefined8 *)0x4d:
  case (undefined8 *)0x5b:
    FUN_100562d70();
switchD_10055ca50_caseD_48:
  case (undefined8 *)0x29:
  case (undefined8 *)0x2e:
  case (undefined8 *)0x41:
  case (undefined8 *)0x4f:
  case (undefined8 *)0x3a:
  case (undefined8 *)0x4c:
  case (undefined8 *)0x59:
  case (undefined8 *)0x5a:
  case (undefined8 *)0x3b:
switchD_10055ca50_caseD_3e:
    SVar20 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar20;
  case (undefined8 *)0x57:
    goto switchD_10055ca50_caseD_57;
  case (undefined8 *)0x5c:
    goto switchD_10055ca50_caseD_5c;
  case (undefined8 *)0x70:
    break;
  case (undefined8 *)0x78:
    goto switchD_10055ca50_caseD_78;
  case (undefined8 *)0x80:
    goto switchD_10055ca50_caseD_80;
  case (undefined8 *)0x88:
    goto switchD_10055ca50_caseD_88;
  case (undefined8 *)0x90:
  case (undefined8 *)0xa8:
  case (undefined8 *)0xc0:
    goto switchD_10055ca50_caseD_90;
  case (undefined8 *)0x98:
    goto switchD_10055ca50_caseD_98;
  case (undefined8 *)0xb0:
  case (undefined8 *)0xc8:
    goto switchD_10055ca50_caseD_b0;
  case (undefined8 *)0xd0:
    goto switchD_10055ca50_caseD_d0;
  case (undefined8 *)0xd8:
    goto switchD_10055ca50_caseD_d8;
  case (undefined8 *)0xe0:
  case (undefined8 *)0xe8:
    goto switchD_10055ca50_caseD_e0;
  }
  pcVar1 = (char *)0x6573000065707974;
  param_3 = (undefined *)(unaff_x29 + -0x48);
  pcVar2 = (code *)&DAT_e800000000000000;
  unaff_x21 = unaff_x28;
switchD_10055ca50_caseD_78:
  Swift::KeyedEncodingContainer::_encode(pcVar1,pcVar2,param_3);
  if (unaff_x21 == 0) {
    *(undefined1 *)(unaff_x29 + -0x48) = 4;
    unaff_x21 = 0;
switchD_10055ca50_caseD_80:
    Swift::KeyedEncodingContainer::_encode();
    if (unaff_x21 == 0) {
      puVar3 = (undefined8 *)0x5;
      unaff_x21 = 0;
switchD_10055ca50_caseD_88:
      *(char *)(unaff_x29 + -0x48) = (char)puVar3;
switchD_10055ca50_caseD_90:
      Swift::KeyedEncodingContainer::_encode();
      unaff_x23 = unaff_x21;
switchD_10055ca50_caseD_98:
      if (unaff_x21 == 0) {
        *(undefined4 *)(unaff_x29 + -0x47) = *(undefined4 *)(unaff_x25 + 0x21);
switchD_10055ca50_caseD_37:
        puVar3 = (undefined8 *)(ulong)*(uint *)(unaff_x25 + 0x24);
switchD_10055ca50_caseD_b0:
        *(int *)(unaff_x29 + -0x44) = (int)puVar3;
switchD_10055ca50_caseD_57:
        *(char *)(unaff_x29 + -0x48) = (char)*(undefined4 *)(unaff_x29 + -100);
        puVar3 = (undefined8 *)0x6;
switchD_10055ca50_caseD_47:
        *(char *)(unaff_x29 + -0x51) = (char)puVar3;
        pcVar1 = (char *)0x100fcc000;
switchD_10055ca50_caseD_d0:
        FUN_1000f7830(pcVar1 + 0x380,&DAT_100c54e90);
        pcVar1 = (char *)0x100fcc000;
switchD_10055ca50_caseD_d8:
        pcVar1 = pcVar1 + 0x388;
        pcVar2 = FUN_1004d9ea8;
        param_4 = &
                  PTR_SwiftUI__SwiftUI___ForegroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eab000
        ;
        param_3 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
        ;
switchD_10055ca50_caseD_e0:
        FUN_1004dbd24(pcVar1,pcVar2,param_3,param_4[0x1cd]);
        Swift::KeyedEncodingContainer::_encode(unaff_x29 + -0x48,unaff_x29 + -0x51);
        if (unaff_x23 == 0) {
          *(undefined8 *)(unaff_x29 + -0x48) = *(undefined8 *)(unaff_x29 + -0x70);
          *(undefined1 *)(unaff_x29 + -0x51) = 7;
          FUN_1004e02ac();
          Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x29 + -0x48,unaff_x29 + -0x51);
          (**(code **)(*(long *)(unaff_x29 + -0x60) + 8))();
          goto LAB_10055cfa8;
        }
      }
      (**(code **)(*(long *)(unaff_x29 + -0x60) + 8))();
      goto LAB_10055cfa8;
    }
  }
  (**(code **)(*(long *)(unaff_x29 + -0x60) + 8))();
LAB_10055cfa8:
  SVar20.bridgeObject = unaff_x19;
  SVar20.str = unaff_x22;
  return SVar20;
}



/* Address: 0x10055cb2c | FUN_10055cb2c */

void FUN_10055cb2c(void)

{
  FUN_10055c88c();
  return;
}



/* Address: 0x10055cb40 | FUN_10055cb40 */

void FUN_10055cb40(undefined8 param_1,undefined8 param_2)

{
  FUN_10055d370(param_1,param_2,FUN_10055ca28);
  return;
}



/* Address: 0x10055cb4c | FUN_10055cb4c */

void FUN_10055cb4c(void)

{
  FUN_10055d3e0();
  return;
}



/* Address: 0x10055cb58 | switchD_10055ca50::caseD_1f */

void switchD_10055ca50::caseD_1f(void)

{
  switchD_10055d294::caseD_1c();
  return;
}



/* Address: 0x10055cb64 | FUN_10055cb64 */

void FUN_10055cb64(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10056258c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10055cb90 | FUN_10055cb90 */

void FUN_10055cb90(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_10055ca28();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10055cbb8 | FUN_10055cbb8 */

void FUN_10055cbb8(void)

{
  undefined1 *unaff_x20;
  
  FUN_10055ca28(*unaff_x20);
  return;
}



/* Address: 0x10055cbd0 | FUN_10055cbd0 */

void FUN_10055cbd0(undefined1 *param_1,undefined1 param_2)

{
  FUN_10056258c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10055cbf4 | FUN_10055cbf4 */

String FUN_10055cbf4(void)

{
  String SVar1;
  
  FUN_100562d70();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055cc1c | switchD_10055ca50::caseD_2d */

String switchD_10055ca50::caseD_2d(void)

{
  String SVar1;
  
  FUN_100562d70();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055cc44 | FUN_10055cc44 */

void FUN_10055cc44(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1005625f0(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    *(undefined1 *)(param_1 + 6) = local_28;
  }
  return;
}



/* Address: 0x10055cc90 | FUN_10055cc90 */

/* WARNING: Removing unreachable block (ram,0x00010055d058) */
/* WARNING: Removing unreachable block (ram,0x00010055cf20) */

void FUN_10055cc90(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined8 local_80;
  uint local_74;
  long local_70;
  undefined1 local_61;
  undefined8 local_58;
  
  puVar4 = &DAT_100fcfb30;
  FUN_1000f7830(&DAT_100fcfb30,&BYTE_100c58868);
  local_70 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&local_80 - extraout_x8;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100562d70();
  Swift::Encoder::_container();
  uVar6 = *unaff_x20;
  uVar10 = unaff_x20[1];
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  bVar3 = *(byte *)(unaff_x20 + 6);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      uVar5 = 0x6567616d69;
      goto LAB_10055cf4c;
    }
    local_58 = (ulong)local_58._1_7_ << 8;
    Swift::KeyedEncodingContainer::_encode(0x74786574,&DAT_e400000000000000,&local_58,puVar4);
    if (unaff_x21 != 0) goto LAB_10055cf8c;
    local_58 = CONCAT71(local_58._1_7_,1);
LAB_10055cfdc:
    Swift::KeyedEncodingContainer::_encode(uVar6,uVar10,&local_58,puVar4);
LAB_10055cfe8:
    (**(code **)(local_70 + 8))(lVar11,puVar4);
  }
  else {
    if (bVar3 == 2) {
      uVar5 = 0x6f69647561;
LAB_10055cf4c:
      local_58 = (ulong)local_58._1_7_ << 8;
      Swift::KeyedEncodingContainer::_encode(uVar5,&DAT_e500000000000000,&local_58,puVar4);
      if (unaff_x21 == 0) {
        local_58._0_1_ = 2;
        Swift::KeyedEncodingContainer::_encode(uVar6,uVar10,&local_58,puVar4);
        local_58 = CONCAT71(local_58._1_7_,3);
        uVar6 = uVar1;
        uVar10 = uVar2;
        goto LAB_10055cfdc;
      }
    }
    else {
      local_74 = (uint)*(byte *)(unaff_x20 + 4);
      local_80 = unaff_x20[5];
      if (bVar3 == 3) {
        local_58 = local_58 & 0xffffffffffffff00;
        Swift::KeyedEncodingContainer::_encode
                  (0x6573755f6c6f6f74,&DAT_e800000000000000,&local_58,puVar4);
        if (unaff_x21 == 0) {
          local_58._0_1_ = 4;
          Swift::KeyedEncodingContainer::_encode(uVar6,uVar10,&local_58,puVar4);
          local_58 = CONCAT71(local_58._1_7_,5);
          Swift::KeyedEncodingContainer::_encode(uVar1,uVar2,&local_58,puVar4);
          local_58 = CONCAT44(*(undefined4 *)((long)unaff_x20 + 0x24),
                              *(int *)((long)unaff_x20 + 0x21) << 8);
          local_58 = CONCAT71(local_58._1_7_,(char)local_74);
          local_61 = 6;
          puVar7 = &DAT_100fcc380;
          FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
          puVar8 = &DAT_100fcc388;
          FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                        ,
                        PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68
                       );
          puVar9 = &local_58;
          Swift::KeyedEncodingContainer::_encode(puVar9,&local_61,puVar4,puVar7,puVar8);
LAB_10055d0fc:
          if (unaff_x21 != 0) {
            (**(code **)(local_70 + 8))(lVar11,puVar4);
            return;
          }
          local_58 = local_80;
          local_61 = 7;
          FUN_1004e02ac();
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    (&local_58,&local_61,puVar4,&DAT_100edcda0,puVar9);
          goto LAB_10055cfe8;
        }
      }
      else {
        local_58 = (ulong)local_58._1_7_ << 8;
        Swift::KeyedEncodingContainer::_encode
                  (0x7365725f6c6f6f74,0xeb00000000746c75,&local_58,puVar4);
        if (unaff_x21 == 0) {
          local_58 = CONCAT71(local_58._1_7_,8);
          Swift::KeyedEncodingContainer::_encode(uVar6,uVar10,&local_58,puVar4);
          local_61 = 9;
          puVar7 = &DAT_100fcfaf8;
          local_58 = uVar1;
          FUN_1000f7830(&DAT_100fcfaf8,&BYTE_100c58850);
          puVar8 = puVar7;
          FUN_100561cbc();
          Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar4,puVar7,puVar8);
          local_61 = 10;
          puVar7 = &DAT_100fcc380;
          local_58 = uVar2;
          FUN_1000f7830(&DAT_100fcc380,&DAT_100c54e90);
          puVar8 = &DAT_100fcc388;
          FUN_1004dbd24(&DAT_100fcc388,FUN_1004d9ea8,
                        PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                        ,
                        PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68
                       );
          Swift::KeyedEncodingContainer::_encodeIfPresent(&local_58,&local_61,puVar4,puVar7,puVar8);
          local_58 = CONCAT71(local_58._1_7_,0xb);
          puVar9 = (undefined8 *)(ulong)local_74;
          Swift::KeyedEncodingContainer::_encodeIfPresent(puVar9,&local_58,puVar4);
          goto LAB_10055d0fc;
        }
      }
    }
LAB_10055cf8c:
    (**(code **)(local_70 + 8))(lVar11,puVar4);
  }
  return;
}



/* Address: 0x10055d15c | FUN_10055d15c */

void FUN_10055d15c(void)

{
  FUN_10055cc90();
  return;
}



/* Address: 0x10055d170 | FUN_10055d170 */

void FUN_10055d170(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_100562db0(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    *(undefined1 *)(param_1 + 6) = local_28;
  }
  return;
}



/* Address: 0x10055d1bc | FUN_10055d1bc */

void FUN_10055d1bc(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x30) < '\0') {
    FUN_100562f0c();
    (extension_Swift)::Swift::Array<undefined>::_encode();
  }
  else {
    FUN_10055cc90();
  }
  return;
}



/* Address: 0x10055d240 | FUN_10055d240 */

void FUN_10055d240(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Address: 0x10055d254 | FUN_10055d254 */

void FUN_10055d254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



/* Address: 0x10055d26c | FUN_10055d26c */

/* WARNING: Removing unreachable block (ram,0x00010055d97c) */

undefined1  [16]
FUN_10055d26c(undefined8 param_1,ulong param_2,undefined8 param_3,code *param_4,code *param_5)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  Hasher into;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  code cVar9;
  long lVar10;
  ulong extraout_x8;
  code *pcVar11;
  byte *pbVar12;
  undefined **in_x16;
  code *unaff_x19;
  code *unaff_x20;
  long unaff_x21;
  code *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  code *unaff_x25;
  undefined8 uVar13;
  code *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar14;
  undefined8 unaff_x30;
  undefined8 uVar15;
  undefined8 in_register_00005008;
  undefined8 uVar16;
  undefined8 uVar17;
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
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  String SVar35;
  String SVar36;
  String SVar37;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_1c0 [336];
  undefined1 auStack_70 [80];
  
  pbVar8 = &DAT_e400000000000000;
  uVar2 = 0x65707974;
  into.unknown = &DAT_65707974;
  param_2 = param_2 & 0xff;
  pbVar1 = (byte *)register0x00000008;
  pcVar11 = (code *)into.unknown;
  pcVar4 = (code *)pbVar8;
  pbVar12 = &switchD_10055d294::switchdataD_100c587ac;
  puVar14 = unaff_x29;
  switch(param_2) {
  default:
    auVar18._8_8_ = &DAT_e400000000000000;
    auVar18._0_8_ = 0x74786574;
    return auVar18;
  case 2:
    uVar2 = 0x6164;
  case 0x14:
    auVar21._4_4_ = 0;
    auVar21._0_4_ = uVar2 & 0xffff | 0x61740000;
    auVar21._8_8_ = &DAT_e400000000000000;
    return auVar21;
  case 3:
    pbVar8 = &DAT_e800000000000000;
    into.unknown = (code *)0x65707954656d696d;
  case 0xd:
    auVar22._8_8_ = pbVar8;
    auVar22._0_8_ = into.unknown;
    return auVar22;
  case 4:
    pbVar8 = &DAT_e800000000000000;
    into.unknown = (code *)0x72756f736572;
  case 0xf:
  case 0xd8:
    auVar19._0_8_ = (ulong)into.unknown | 0x6563000000000000;
    auVar19._8_8_ = pbVar8;
    return auVar19;
  case 5:
    pbVar8 = (byte *)0xeb00000000736e6f;
  case 0xe:
    auVar24._8_8_ = pbVar8;
    auVar24._0_8_ = 0x697461746f6e6e61;
    return auVar24;
  case 6:
    pbVar8 = &DAT_e500000000000000;
    into.unknown = (code *)0x6174656d5f;
  case 0x12:
    auVar25._8_8_ = pbVar8;
    auVar25._0_8_ = into.unknown;
    return auVar25;
  case 7:
    auVar23._8_8_ = 0xe300000000000000;
    auVar23._0_8_ = 0x697275;
    return auVar23;
  case 8:
    auVar27._8_8_ = &DAT_e400000000000000;
    auVar27._0_8_ = 0x656d616e;
    return auVar27;
  case 9:
  case 0x88:
  case 0xa8:
  case 0xe8:
  case 0xf8:
    pbVar8 = &DAT_e500000000000000;
  case 0x66:
  case 0x6e:
  case 0x76:
  case 0x7e:
  case 0x86:
  case 0x8e:
  case 0x9e:
  case 0xa6:
  case 0xb6:
  case 0xbe:
  case 0xc6:
  case 0xce:
  case 0xd6:
  case 0xde:
  case 0xe6:
  case 0xf6:
  case 0xfe:
    into.unknown = (code *)0x6c746974;
  case 0x68:
  case 0x70:
  case 0x78:
  case 0x80:
  case 0x90:
  case 0xa0:
  case 0xb8:
  case 0xc0:
  case 200:
  case 0xd0:
  case 0xe0:
    auVar20._0_8_ = (ulong)into.unknown | 0x6500000000;
    auVar20._8_8_ = pbVar8;
    return auVar20;
  case 10:
    pbVar8 = &DAT_eb000000006e6f69;
    into.unknown = (code *)0x6564;
  case 0x10:
    into.unknown = (undefined *)((ulong)into.unknown & 0xffffffff0000ffff | 0x7470697263730000);
  case 0:
    auVar26._8_8_ = pbVar8;
    auVar26._0_8_ = into.unknown;
    return auVar26;
  case 0x11:
    FUN_10055d370(&DAT_65707974,&DAT_e400000000000000,FUN_10055d26c);
    auVar28._8_8_ = pbVar8;
    auVar28._0_8_ = into.unknown;
    return auVar28;
  case 0x15:
    Swift::Hasher::init(0);
    into.unknown = unaff_x20;
  case 0xb:
    (*unaff_x19)();
  case 0x13:
    SVar35.bridgeObject = pbVar8;
    SVar35.str = into.unknown;
    Swift::String::hash((Hasher)&stack0x00000008,SVar35);
    _swift_bridgeObjectRelease();
    auVar29._0_8_ = Swift::Hasher::_finalize((Hasher)pbVar8);
    auVar29._8_8_ = into.unknown;
    return auVar29;
  case 0x1c:
  case 0x31:
  case 0x34:
  case 0x37:
  case 0x42:
  case 0x52:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    unaff_x20 = (code *)(ulong)(byte)*unaff_x20;
    unaff_x19 = param_5;
  case 0x41:
  case 0x4f:
    Swift::Hasher::init(0x65707974);
  case 0x3c:
    into.unknown = unaff_x20;
  case 0x1d:
  case 0x22:
  case 0x35:
  case 0x43:
    (*unaff_x19)();
  case 0x2e:
  case 0x40:
  case 0x4d:
  case 0x4e:
    param_4 = (code *)into.unknown;
  case 0x2f:
    unaff_x19 = (code *)pbVar8;
  case 0x32:
    into.unknown = (undefined *)((long)register0x00000008 + 8);
  case 0x21:
    pbVar8 = (byte *)param_4;
  case 0x2c:
  case 0x44:
  case 0x51:
    param_4 = unaff_x19;
    unaff_x19 = param_4;
  case 0x2d:
  case 0x4c:
    SVar37.bridgeObject = param_4;
    SVar37.str = (char *)pbVar8;
    Swift::String::hash(into,SVar37);
  case 0x20:
  case 0x33:
    into.unknown = unaff_x19;
  case 0x65:
  case 0x6d:
  case 0x75:
  case 0x7d:
  case 0x85:
  case 0x8d:
  case 0x9d:
  case 0xa5:
  case 0xb5:
  case 0xbd:
  case 0xc5:
  case 0xcd:
  case 0xd5:
  case 0xdd:
  case 0xf5:
  case 0xfd:
    _swift_bridgeObjectRelease();
  case 0xe5:
  case 0x3e:
    auVar32._0_8_ = Swift::Hasher::_finalize(into);
    auVar32._8_8_ = pbVar8;
    return auVar32;
  case 0x30:
  case 0x1f:
  case 0x3f:
  case 0x50:
    pcVar4 = (code *)(ulong)(byte)*unaff_x20;
    into.unknown = pbVar8;
    (*param_5)();
    SVar36.bridgeObject = into.unknown;
    SVar36.str = (char *)pcVar4;
    Swift::String::hash((Hasher)0x65707974,SVar36);
  case 0x3d:
    _swift_bridgeObjectRelease(into.unknown);
    auVar30._8_8_ = pcVar4;
    auVar30._0_8_ = into.unknown;
    return auVar30;
  case 0x36:
  case 0x1e:
    switchD_10055d294::caseD_1c();
    auVar31._8_8_ = pbVar8;
    auVar31._0_8_ = into.unknown;
    return auVar31;
  case 100:
    auVar33._8_8_ = &DAT_e400000000000000;
    auVar33._0_8_ = &DAT_65707974;
    return auVar33;
  case 0x6c:
    puVar14 = &stack0x00000050;
    pbVar1 = auStack_1c0;
    unaff_x19 = (code *)auStack_1c0;
    unaff_x24 = unaff_x21;
    unaff_x25 = unaff_x20;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
  case 0x74:
    unaff_x28 = unaff_x19 + 0xe0;
    pcVar11 = (code *)&DAT_100fcfb48;
    pbVar8 = &BYTE_100c58870;
    unaff_x20 = (code *)into.unknown;
  case 0x7c:
    FUN_1000f7830(pcVar11,pbVar8);
    lVar10 = *(long *)(pcVar11 + -8);
    puVar14[-9] = lVar10;
    param_2 = *(long *)(lVar10 + 0x40) + 0xf;
    unaff_x22 = pcVar11;
  case 0x84:
  case 0x9c:
  case 0xb4:
    param_2 = param_2 & 0xfffffffffffffff0;
    in_x16 = &PTR_get_displayPrice_100ea8000;
  case 0x8c:
    (*(code *)in_x16[0x58])(param_2);
    param_2 = extraout_x8;
    pbVar12 = pbVar1;
  case 0x2b:
  case 0x5b:
    unaff_x23 = (long)pbVar12 - param_2;
  case 0xa4:
  case 0xbc:
  case 0x4b:
    into.unknown = unaff_x20;
    pbVar8 = *(byte **)(into.unknown + 0x18);
  case 0x3b:
    FUN_100004640(into.unknown,pbVar8);
  case 0xc4:
    FUN_1005637ec();
  case 0xcc:
    Swift::Encoder::_container();
    uVar15 = *(undefined8 *)(unaff_x25 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x25 + 0x58);
    uVar16 = *(undefined8 *)(unaff_x25 + 0x50);
    *(undefined8 *)(unaff_x28 + 0x98) = *(undefined8 *)(unaff_x25 + 0x48);
    *(undefined8 *)(unaff_x28 + 0x90) = uVar15;
    *(undefined8 *)(unaff_x28 + 0xa8) = uVar5;
    *(undefined8 *)(unaff_x28 + 0xa0) = uVar16;
    in_register_00005008 = *(undefined8 *)(unaff_x25 + 0x68);
    param_1 = *(undefined8 *)(unaff_x25 + 0x60);
  case 0xd4:
  case 0xdc:
  case 0xf4:
    break;
  case 0xfc:
    goto switchD_10055d294_caseD_fc;
  }
  *(undefined8 *)(unaff_x28 + 0xb8) = in_register_00005008;
  *(undefined8 *)(unaff_x28 + 0xb0) = param_1;
  in_register_00005008 = *(undefined8 *)(unaff_x25 + 0x71);
  param_1 = *(undefined8 *)(unaff_x25 + 0x69);
switchD_10055d294_caseD_fc:
  *(undefined8 *)(unaff_x28 + 0xc1) = in_register_00005008;
  *(undefined8 *)(unaff_x28 + 0xb9) = param_1;
  uVar15 = *(undefined8 *)unaff_x25;
  uVar5 = *(undefined8 *)(unaff_x25 + 0x18);
  uVar16 = *(undefined8 *)(unaff_x25 + 0x10);
  *(undefined8 *)(unaff_x28 + 0x58) = *(undefined8 *)(unaff_x25 + 8);
  *(undefined8 *)(unaff_x28 + 0x50) = uVar15;
  *(undefined8 *)(unaff_x28 + 0x68) = uVar5;
  *(undefined8 *)(unaff_x28 + 0x60) = uVar16;
  uVar15 = *(undefined8 *)(unaff_x25 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x25 + 0x38);
  uVar16 = *(undefined8 *)(unaff_x25 + 0x30);
  *(undefined8 *)(unaff_x28 + 0x78) = *(undefined8 *)(unaff_x25 + 0x28);
  *(undefined8 *)(unaff_x28 + 0x70) = uVar15;
  *(undefined8 *)(unaff_x28 + 0x88) = uVar5;
  *(undefined8 *)(unaff_x28 + 0x80) = uVar16;
  iVar3 = (int)puVar14 + -0xe0;
  FUN_1004dbae4();
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      puVar7 = puVar14 + -0x1c;
      FUN_100004520();
      uVar15 = *puVar7;
      uVar5 = puVar7[1];
      uVar16 = puVar7[2];
      uVar13 = puVar7[3];
      unaff_x19[0xe0] = (code)0x0;
      uVar6 = 0x6567616d69;
      goto LAB_10055d9b8;
    }
    puVar7 = puVar14 + -0x1c;
    FUN_100004520();
    uVar16 = *puVar7;
    uVar13 = puVar7[1];
    unaff_x19[0xe0] = (code)0x0;
    Swift::KeyedEncodingContainer::_encode
              (0x74786574,&DAT_e400000000000000,unaff_x19 + 0xe0,unaff_x22);
    if (unaff_x24 == 0) {
      cVar9 = (code)0x1;
      goto LAB_10055da38;
    }
LAB_10055d9f8:
    pcVar11 = *(code **)(puVar14[-9] + 8);
  }
  else {
    if (iVar3 == 2) {
      puVar7 = puVar14 + -0x1c;
      FUN_100004520();
      uVar15 = *puVar7;
      uVar5 = puVar7[1];
      uVar16 = puVar7[2];
      uVar13 = puVar7[3];
      unaff_x19[0xe0] = (code)0x0;
      uVar6 = 0x6f69647561;
LAB_10055d9b8:
      Swift::KeyedEncodingContainer::_encode(uVar6,&DAT_e500000000000000,unaff_x19 + 0xe0,unaff_x22)
      ;
      if (unaff_x24 != 0) goto LAB_10055d9f8;
      unaff_x19[0xe0] = (code)0x2;
      Swift::KeyedEncodingContainer::_encode(uVar15,uVar5,unaff_x19 + 0xe0,unaff_x22);
      cVar9 = (code)0x3;
LAB_10055da38:
      unaff_x19[0xe0] = cVar9;
      Swift::KeyedEncodingContainer::_encode(uVar16,uVar13,unaff_x19 + 0xe0,unaff_x22);
    }
    else if (iVar3 == 3) {
      puVar7 = puVar14 + -0x1c;
      FUN_100004520();
      uVar15 = puVar7[2];
      *(undefined8 *)(unaff_x19 + 0xf8) = puVar7[3];
      *(undefined8 *)(unaff_x19 + 0xf0) = uVar15;
      uVar15 = puVar7[4];
      *(undefined8 *)(unaff_x19 + 0x108) = puVar7[5];
      *(undefined8 *)(unaff_x19 + 0x100) = uVar15;
      uVar15 = puVar7[6];
      *(undefined8 *)(unaff_x28 + 0x38) = puVar7[7];
      *(undefined8 *)(unaff_x28 + 0x30) = uVar15;
      *(undefined8 *)(unaff_x28 + 0x40) = puVar7[8];
      uVar15 = *puVar7;
      *(undefined8 *)(unaff_x19 + 0xe8) = puVar7[1];
      *(undefined8 *)(unaff_x19 + 0xe0) = uVar15;
      uVar5 = puVar7[0xb];
      uVar16 = puVar7[10];
      uVar15 = puVar7[9];
      *(undefined8 *)(unaff_x19 + 0x68) = puVar7[0xc];
      *(undefined8 *)(unaff_x19 + 0x60) = uVar5;
      *(undefined8 *)(unaff_x19 + 0x78) = uVar16;
      *(undefined8 *)(unaff_x19 + 0x70) = uVar15;
      uVar15 = puVar7[0xd];
      uVar16 = puVar7[0xe];
      unaff_x19[0x90] = (code)0x0;
      uVar5 = 0x656372756f736572;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,&DAT_e800000000000000,unaff_x19 + 0x90,unaff_x22);
      if (unaff_x24 != 0) {
        (**(code **)(puVar14[-9] + 8))(unaff_x23,unaff_x22);
        goto LAB_10055da14;
      }
      uVar6 = *(undefined8 *)(unaff_x28 + 0x38);
      uVar13 = *(undefined8 *)(unaff_x28 + 0x30);
      *(undefined8 *)(unaff_x19 + 0xb8) = *(undefined8 *)(unaff_x19 + 0x108);
      *(undefined8 *)(unaff_x19 + 0xb0) = *(undefined8 *)(unaff_x19 + 0x100);
      *(undefined8 *)(unaff_x19 + 200) = uVar6;
      *(undefined8 *)(unaff_x19 + 0xc0) = uVar13;
      *(undefined8 *)(unaff_x19 + 0xd0) = *(undefined8 *)(unaff_x28 + 0x40);
      *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0xe8);
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0xe0);
      *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0xf8);
      *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0xf0);
      unaff_x19[0x8f] = (code)0x4;
      FUN_10056386c();
      pcVar11 = unaff_x19 + 0x90;
      Swift::KeyedEncodingContainer::_encode
                (pcVar11,unaff_x19 + 0x8f,unaff_x22,&DAT_100ee1c80,uVar5);
      *(undefined8 *)(unaff_x19 + 0x98) = *(undefined8 *)(unaff_x19 + 0x78);
      *(undefined8 *)(unaff_x19 + 0x90) = *(undefined8 *)(unaff_x19 + 0x70);
      *(undefined8 *)(unaff_x19 + 0xa8) = *(undefined8 *)(unaff_x19 + 0x68);
      *(undefined8 *)(unaff_x19 + 0xa0) = *(undefined8 *)(unaff_x19 + 0x60);
      *(undefined8 *)(unaff_x19 + 0xb0) = uVar15;
      unaff_x19[0x8f] = (code)0x5;
      FUN_10056382c();
      pcVar4 = unaff_x19 + 0x90;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (pcVar4,unaff_x19 + 0x8f,unaff_x22,&DAT_100ee1da8,pcVar11);
      *(undefined8 *)(unaff_x19 + 0x90) = uVar16;
      unaff_x19[0x8f] = (code)0x6;
      FUN_1004e02ac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x19 + 0x90,unaff_x19 + 0x8f,unaff_x22,&DAT_100edcda0,pcVar4);
    }
    else {
      puVar7 = puVar14 + -0x1c;
      FUN_100004520();
      uVar15 = puVar7[1];
      *(undefined8 *)(unaff_x19 + 0x70) = *puVar7;
      uVar16 = puVar7[3];
      *(undefined8 *)(unaff_x19 + 0x58) = puVar7[2];
      *(undefined8 *)(unaff_x19 + 0x60) = uVar15;
      uVar15 = puVar7[5];
      *(undefined8 *)(unaff_x19 + 0x38) = puVar7[4];
      *(undefined8 *)(unaff_x19 + 0x40) = uVar15;
      *(undefined8 *)(unaff_x19 + 0x48) = uVar16;
      uVar16 = puVar7[7];
      *(undefined8 *)(unaff_x19 + 0x50) = puVar7[6];
      uVar15 = puVar7[8];
      uVar5 = puVar7[9];
      uVar6 = puVar7[0xb];
      uVar13 = puVar7[10];
      uVar17 = puVar7[0xc];
      *(undefined8 *)(unaff_x19 + 0x18) = puVar7[0xd];
      *(undefined8 *)(unaff_x19 + 0x10) = uVar17;
      *(undefined8 *)(unaff_x19 + 0x28) = uVar6;
      *(undefined8 *)(unaff_x19 + 0x20) = uVar13;
      uVar13 = puVar7[0xe];
      unaff_x19[0xe0] = (code)0x0;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,0xed00006b6e696c5f,unaff_x19 + 0xe0,unaff_x22);
      if (unaff_x24 != 0) goto LAB_10055d9f8;
      *(undefined8 *)unaff_x19 = uVar5;
      *(undefined8 *)(unaff_x19 + 8) = uVar16;
      uVar16 = *(undefined8 *)(unaff_x19 + 0x50);
      uVar5 = *(undefined8 *)(unaff_x19 + 0x58);
      unaff_x19[0xe0] = (code)0x7;
      Swift::KeyedEncodingContainer::_encode
                (*(undefined8 *)(unaff_x19 + 0x70),*(undefined8 *)(unaff_x19 + 0x60),
                 unaff_x19 + 0xe0,unaff_x22);
      unaff_x19[0xe0] = (code)0x8;
      Swift::KeyedEncodingContainer::_encode
                (uVar5,*(undefined8 *)(unaff_x19 + 0x48),unaff_x19 + 0xe0,unaff_x22);
      unaff_x19[0xe0] = (code)0x9;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (*(undefined8 *)(unaff_x19 + 0x38),*(undefined8 *)(unaff_x19 + 0x40),
                 unaff_x19 + 0xe0,unaff_x22);
      unaff_x19[0xe0] = (code)0xa;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (uVar16,*(undefined8 *)(unaff_x19 + 8),unaff_x19 + 0xe0,unaff_x22);
      unaff_x19[0xe0] = (code)0x3;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (uVar15,*(undefined8 *)unaff_x19,unaff_x19 + 0xe0,unaff_x22);
      *(undefined8 *)(unaff_x19 + 0xe8) = *(undefined8 *)(unaff_x19 + 0x28);
      *(undefined8 *)(unaff_x19 + 0xe0) = *(undefined8 *)(unaff_x19 + 0x20);
      *(undefined8 *)(unaff_x19 + 0xf8) = *(undefined8 *)(unaff_x19 + 0x18);
      *(undefined8 *)(unaff_x19 + 0xf0) = *(undefined8 *)(unaff_x19 + 0x10);
      *(undefined8 *)(unaff_x19 + 0x100) = uVar13;
      unaff_x19[0x90] = (code)0x5;
      FUN_10056382c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (unaff_x19 + 0xe0,unaff_x19 + 0x90,unaff_x22,&DAT_100ee1da8,uVar15);
    }
    pcVar11 = *(code **)(puVar14[-9] + 8);
  }
  (*pcVar11)(unaff_x23,unaff_x22);
LAB_10055da14:
  auVar34._8_8_ = unaff_x22;
  auVar34._0_8_ = unaff_x23;
  return auVar34;
}



/* Address: 0x10055d364 | switchD_10055d294::caseD_11 */

void switchD_10055d294::caseD_11(undefined8 param_1,undefined8 param_2)

{
  FUN_10055d370(param_1,param_2,FUN_10055d26c);
  return;
}



/* Address: 0x10055d370 | FUN_10055d370 */

void FUN_10055d370(undefined8 param_1,Hasher param_2,code *param_3)

{
  byte *unaff_x20;
  char *pcVar1;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  (*param_3)();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x10055d3d4 | FUN_10055d3d4 */

void FUN_10055d3d4(void)

{
  FUN_10055d3e0();
  return;
}



/* Address: 0x10055d3e0 | FUN_10055d3e0 */

void FUN_10055d3e0(Hasher param_1,void *param_2,undefined8 param_3,code *param_4)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  (*param_4)();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x10055d420 | FUN_10055d420 */

void FUN_10055d420(void)

{
  switchD_10055d294::caseD_1c();
  return;
}



/* Address: 0x10055d42c | switchD_10055d294::caseD_1c */

void switchD_10055d294::caseD_1c(__int64 param_1,Hasher param_2,undefined8 param_3,code *param_4)

{
  byte *unaff_x20;
  char *pcVar1;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  (*param_4)();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x10055d48c | FUN_10055d48c */

void FUN_10055d48c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100562f4c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10055d4b8 | FUN_10055d4b8 */

void FUN_10055d4b8(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_10055d26c();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10055d4e0 | FUN_10055d4e0 */

void FUN_10055d4e0(void)

{
  undefined1 *unaff_x20;
  
  FUN_10055d26c(*unaff_x20);
  return;
}



/* Address: 0x10055d4f8 | FUN_10055d4f8 */

void FUN_10055d4f8(undefined1 *param_1,undefined1 param_2)

{
  FUN_100562f4c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10055d51c | FUN_10055d51c */

String FUN_10055d51c(void)

{
  String SVar1;
  
  FUN_1005637ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10055d544 | FUN_10055d544 */

String FUN_10055d544(void)

{
  String SVar1;
  
  FUN_1005637ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055d56c | FUN_10055d56c */

void FUN_10055d56c(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_100562fb0(&local_a0);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_58;
    param_1[8] = local_60;
    param_1[0xb] = uStack_48;
    param_1[10] = uStack_50;
    param_1[0xd] = CONCAT71(uStack_37,uStack_38);
    param_1[0xc] = local_40;
    *(undefined8 *)((long)param_1 + 0x71) = uStack_2f;
    *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_30,uStack_37);
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = local_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
  }
  return;
}



/* Address: 0x10055d5c4 | FUN_10055d5c4 */

/* WARNING: Removing unreachable block (ram,0x00010055d97c) */

void FUN_10055d5c4(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  undefined1 uVar8;
  long lVar9;
  long extraout_x8;
  code *pcVar10;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_220;
  ulong local_218;
  ulong local_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong local_1b0;
  ulong uStack_1a8;
  undefined1 local_191;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  ulong uStack_118;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar3 = &DAT_100fcfb48;
  FUN_1000f7830(&DAT_100fcfb48,&BYTE_100c58870);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005637ec();
  Swift::Encoder::_container();
  uStack_a8 = unaff_x20[9];
  local_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  local_90 = unaff_x20[0xc];
  uStack_88 = (undefined1)unaff_x20[0xd];
  uStack_7f = *(undefined8 *)((long)unaff_x20 + 0x71);
  uStack_87 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x69);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x69) >> 0x38);
  uStack_e8 = unaff_x20[1];
  local_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  local_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  iVar2 = (int)&local_f0;
  FUN_1004dbae4();
  if (iVar2 < 2) {
    if (iVar2 != 0) {
      puVar7 = &local_f0;
      FUN_100004520();
      uVar6 = *puVar7;
      uVar14 = puVar7[1];
      uVar11 = puVar7[2];
      uVar12 = puVar7[3];
      uVar4 = 0x6567616d69;
      goto LAB_10055d9b8;
    }
    puVar7 = &local_f0;
    FUN_100004520();
    uVar11 = *puVar7;
    uVar12 = puVar7[1];
    local_140 = local_140 & 0xffffffffffffff00;
    Swift::KeyedEncodingContainer::_encode(0x74786574,&DAT_e400000000000000,&local_140,puVar3);
    if (unaff_x21 == 0) {
      uVar8 = 1;
      goto LAB_10055da38;
    }
LAB_10055d9f8:
    pcVar10 = *(code **)(lVar9 + 8);
  }
  else {
    if (iVar2 == 2) {
      puVar7 = &local_f0;
      FUN_100004520();
      uVar6 = *puVar7;
      uVar14 = puVar7[1];
      uVar11 = puVar7[2];
      uVar12 = puVar7[3];
      uVar4 = 0x6f69647561;
LAB_10055d9b8:
      local_140 = local_140 & 0xffffffffffffff00;
      Swift::KeyedEncodingContainer::_encode(uVar4,&DAT_e500000000000000,&local_140,puVar3);
      if (unaff_x21 != 0) goto LAB_10055d9f8;
      local_140 = CONCAT71(local_140._1_7_,2);
      Swift::KeyedEncodingContainer::_encode(uVar6,uVar14,&local_140,puVar3);
      uVar8 = 3;
LAB_10055da38:
      local_140 = CONCAT71(local_140._1_7_,uVar8);
      Swift::KeyedEncodingContainer::_encode(uVar11,uVar12,&local_140,puVar3);
    }
    else if (iVar2 == 3) {
      puVar7 = &local_f0;
      FUN_100004520();
      uStack_128 = puVar7[3];
      local_130 = puVar7[2];
      uStack_118 = puVar7[5];
      local_120 = puVar7[4];
      uStack_108 = puVar7[7];
      local_110 = puVar7[6];
      local_100 = puVar7[8];
      uStack_138 = puVar7[1];
      local_140 = *puVar7;
      uStack_1b8 = puVar7[0xc];
      local_1c0 = puVar7[0xb];
      uStack_1a8 = puVar7[10];
      local_1b0 = puVar7[9];
      uVar6 = puVar7[0xd];
      uVar11 = puVar7[0xe];
      local_190 = local_190 & 0xffffffffffffff00;
      uVar4 = 0x656372756f736572;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,&DAT_e800000000000000,&local_190,puVar3);
      if (unaff_x21 != 0) {
        (**(code **)(lVar9 + 8))((long)&local_220 - extraout_x8,puVar3);
        return;
      }
      uStack_168 = uStack_118;
      local_170 = local_120;
      uStack_158 = uStack_108;
      uStack_160 = local_110;
      local_150 = local_100;
      uStack_188 = uStack_138;
      local_190 = local_140;
      uStack_178 = uStack_128;
      uStack_180 = local_130;
      local_191 = 4;
      FUN_10056386c();
      puVar7 = &local_190;
      Swift::KeyedEncodingContainer::_encode(puVar7,&local_191,puVar3,&DAT_100ee1c80,uVar4);
      uStack_188 = uStack_1a8;
      local_190 = local_1b0;
      uStack_178 = uStack_1b8;
      uStack_180 = local_1c0;
      local_191 = 5;
      local_170 = uVar6;
      FUN_10056382c();
      puVar5 = &local_190;
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (puVar5,&local_191,puVar3,&DAT_100ee1da8,puVar7);
      local_191 = 6;
      local_190 = uVar11;
      FUN_1004e02ac();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (&local_190,&local_191,puVar3,&DAT_100edcda0,puVar5);
    }
    else {
      puVar7 = &local_f0;
      FUN_100004520();
      local_1b0 = *puVar7;
      local_1c0 = puVar7[1];
      local_1c8 = puVar7[2];
      local_1d8 = puVar7[3];
      local_1e8 = puVar7[4];
      local_1e0 = puVar7[5];
      local_1d0 = puVar7[6];
      uVar11 = puVar7[7];
      uVar6 = puVar7[8];
      uVar14 = puVar7[9];
      uStack_1f8 = puVar7[0xb];
      uStack_200 = puVar7[10];
      uStack_208 = puVar7[0xd];
      local_210 = puVar7[0xc];
      uVar13 = puVar7[0xe];
      local_140 = local_140 & 0xffffffffffffff00;
      Swift::KeyedEncodingContainer::_encode
                (0x656372756f736572,0xed00006b6e696c5f,&local_140,puVar3);
      uVar1 = local_1c8;
      uVar12 = local_1d0;
      if (unaff_x21 != 0) goto LAB_10055d9f8;
      local_140._0_1_ = 7;
      local_220 = uVar14;
      local_218 = uVar11;
      Swift::KeyedEncodingContainer::_encode(local_1b0,local_1c0,&local_140,puVar3);
      local_140._0_1_ = 8;
      Swift::KeyedEncodingContainer::_encode(uVar1,local_1d8,&local_140,puVar3);
      local_140._0_1_ = 9;
      Swift::KeyedEncodingContainer::_encodeIfPresent(local_1e8,local_1e0,&local_140,puVar3);
      local_140._0_1_ = 10;
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar12,local_218,&local_140,puVar3);
      local_140 = CONCAT71(local_140._1_7_,3);
      Swift::KeyedEncodingContainer::_encodeIfPresent(uVar6,local_220,&local_140,puVar3);
      uStack_138 = uStack_1f8;
      local_140 = uStack_200;
      uStack_128 = uStack_208;
      local_130 = local_210;
      local_190 = CONCAT71(local_190._1_7_,5);
      local_120 = uVar13;
      FUN_10056382c();
      Swift::KeyedEncodingContainer::_encodeIfPresent
                (&local_140,&local_190,puVar3,&DAT_100ee1da8,uVar6);
    }
    pcVar10 = *(code **)(lVar9 + 8);
  }
  (*pcVar10)((long)&local_220 - extraout_x8,puVar3);
  return;
}



/* Address: 0x10055dae4 | FUN_10055dae4 */

void FUN_10055dae4(void)

{
  FUN_10055d5c4();
  return;
}



/* Address: 0x10055daf8 | FUN_10055daf8 */

undefined * FUN_10055daf8(void)

{
  return &DAT_100edf218;
}



/* Address: 0x10055db04 | FUN_10055db04 */

undefined1  [16] FUN_10055db04(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dad430;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Address: 0x10055db20 | FUN_10055db20 */

void FUN_10055db20(undefined8 param_1,undefined8 param_2)

{
  FUN_1004cbd4c(param_1,param_2,&DAT_100fd02f0);
  return;
}



/* Address: 0x10055db3c | FUN_10055db3c */

undefined1  [16] FUN_10055db3c(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x6465726975716572;
    if (param_1 != '\x01') {
      uVar1 = 0x656e6f6e;
    }
    puVar2 = &DAT_e800000000000000;
    if (param_1 != '\x01') {
      puVar2 = &DAT_e400000000000000;
    }
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = &DAT_e400000000000000;
  auVar4._0_8_ = 0x6f747561;
  return auVar4;
}



/* Address: 0x10055db84 | FUN_10055db84 */

void FUN_10055db84(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004cbd4c(uVar1,param_2[1],&DAT_100fd02f0);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10055dbb8 | FUN_10055dbb8 */

void FUN_10055dbb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  
  cVar5 = *unaff_x20;
  uVar1 = 0x6465726975716572;
  if (cVar5 != '\x01') {
    uVar1 = 0x656e6f6e;
  }
  puVar2 = &DAT_e800000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  uVar3 = 0x6f747561;
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



/* Address: 0x10055dc08 | FUN_10055dc08 */

void FUN_10055dc08(void)

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
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055dc98 | FUN_10055dc98 */

void FUN_10055dc98(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar5 = *unaff_x20;
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



/* Address: 0x10055dd04 | FUN_10055dd04 */

void FUN_10055dd04(__int64 param_1)

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
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10055dd90 | FUN_10055dd90 */

void FUN_10055dd90(void)

{
  FUN_1005675e8();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10055ddec | FUN_10055ddec */

void FUN_10055ddec(void)

{
  FUN_1005675e8();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x10055de38 | FUN_10055de38 */

void FUN_10055de38(void)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e400000000000000;
  SVar1.str = (char *)0x65646f6d;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10055de80 | FUN_10055de80 */

void FUN_10055de80(Hasher param_1)

{
  String SVar1;
  
  SVar1.bridgeObject = &DAT_e400000000000000;
  SVar1.str = (char *)0x65646f6d;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x10055de90 | FUN_10055de90 */

void FUN_10055de90(__int64 param_1)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e400000000000000;
  SVar1.str = (char *)0x65646f6d;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10055ded4 | FUN_10055ded4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010055df14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10055ded4(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __int64 _Var3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var3 = Swift::_findStringSwitchCase(param_2,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(bool *)param_1 = _Var3 != 0;
  return;
}


