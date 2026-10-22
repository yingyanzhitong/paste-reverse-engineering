/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006c5c48 | FUN_1006c5c48 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006c5f44 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1006c5c48(ulong param_1)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  Hasher HVar4;
  __int64 _Var5;
  char *pcVar6;
  undefined8 uVar8;
  char *pcVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  char *unaff_x19;
  byte *unaff_x20;
  byte *unaff_x21;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  undefined1 auVar33 [16];
  String SVar34;
  String SVar35;
  String SVar36;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined8 in_stack_00000068;
  char *pcVar7;
  
  pbVar1 = _DAT_6f642d776f6c6c69;
  pcVar2 = _DAT_6f642d776f6c6c61;
  pcVar6 = (char *)0xef7364616f6c6e77;
  HVar4.unknown = &DAT_6f642d776f6c6c61;
  pcVar9 = (char *)(param_1 & 0xff);
  pbVar10 = &switchD_1006c5c84::switchdataD_100c70f24;
  pbVar12 = (byte *)(ulong)(&switchD_1006c5c84::switchdataD_100c70f24)[(long)pcVar9];
  pcVar11 = (char *)((long)pbVar12 * 4 + 0x1006c5c88);
  pcVar7 = pcVar6;
  switch(pcVar9) {
  default:
    pcVar6 = (char *)0x6d72;
  case (char *)0x64:
  case (char *)0x72:
  case (char *)0xb2:
  case (char *)0xea:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffff0000ffff | 0xeb00000000730000);
  case (char *)0x62:
  case (char *)0x8a:
  case (char *)0xca:
  case (char *)0xcc:
    HVar4.unknown = (byte *)0x6c61;
  case (char *)0x5a:
  case (char *)0x82:
  case (char *)0x8c:
  case (char *)0xc2:
  case (char *)0xfa:
    auVar13._0_8_ = (ulong)HVar4.unknown & 0xffff | 0x6f662d776f6c0000;
    auVar13._8_8_ = pcVar6;
    return auVar13;
  case (char *)0x2:
    pcVar6 = (char *)0xec000000736c6164;
    HVar4.unknown = (byte *)0x6f6d2d776f6c6c61;
  case (char *)0x56:
  case (char *)0x6a:
  case (char *)0x7e:
  case (char *)0x92:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xaa:
  case (char *)0xbe:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe2:
  case (char *)0xf6:
    auVar16._8_8_ = pcVar6;
    auVar16._0_8_ = HVar4.unknown;
    return auVar16;
  case (char *)0x3:
    auVar17._8_8_ = 0x8000000100db0510;
    auVar17._0_8_ = 0xd000000000000016;
    return auVar17;
  case (char *)0x4:
  case (char *)0x6c:
    HVar4.unknown = (byte *)0xd000000000000012;
  case (char *)0x18:
  case (char *)0x20:
  case (char *)0x28:
  case (char *)0x30:
  case (char *)0x38:
  case (char *)0x48:
    pcVar9 = "allow-pointer-lock";
    break;
  case (char *)0x5:
    pcVar6 = (char *)0xec00000073707570;
    HVar4.unknown = (byte *)0x6c61;
  case (char *)0xc0:
    auVar19._0_8_ = (ulong)HVar4.unknown & 0xffff | 0x6f702d776f6c0000;
    auVar19._8_8_ = pcVar6;
    return auVar19;
  case (char *)0x6:
    pcVar6 = (char *)0x8000000100db04d0;
    HVar4.unknown = (byte *)0xd00000000000001e;
  case (char *)0xd5:
    auVar21._8_8_ = pcVar6;
    auVar21._0_8_ = HVar4.unknown;
    return auVar21;
  case (char *)0x7:
    HVar4.unknown = (byte *)0xd000000000000012;
    pcVar9 = "allow-presentation";
    break;
  case (char *)0x8:
    auVar23._8_8_ = 0x8000000100db0490;
    auVar23._0_8_ = 0xd000000000000011;
    return auVar23;
  case (char *)0x9:
    pcVar6 = (char *)0x6972;
  case (char *)0xd4:
    auVar15._8_8_ = (ulong)pcVar6 & 0xffff | 0xed00007374700000;
    auVar15._0_8_ = 0x63732d776f6c6c61;
    return auVar15;
  case (char *)0xa:
    pcVar9 = "allow-storage-access-by-user-activation";
    goto LAB_1006c5dd0;
  case (char *)0xb:
    pcVar9 = " with \'";
  case (char *)0x16:
  case (char *)0x1e:
  case (char *)0x26:
  case (char *)0x2e:
  case (char *)0x36:
  case (char *)0x46:
  case (char *)0x4e:
  case (char *)0x50:
  case (char *)0x96:
  case (char *)0xd6:
    auVar14._8_8_ = (ulong)(pcVar9 + 0x440) | 0x8000000000000000;
    auVar14._0_8_ = 0xd000000000000014;
    return auVar14;
  case (char *)0xc:
    pcVar9 = "allow-top-navigation-by-user-activation";
LAB_1006c5dd0:
    pcVar6 = (char *)((ulong)(pcVar9 + -0x20) | 0x8000000000000000);
switchD_1006c5c84_caseD_15:
    auVar22._8_8_ = pcVar6;
    auVar22._0_8_ = 0xd000000000000027;
    return auVar22;
  case (char *)0xd:
    pcVar6 = (char *)0x8000000100db03e0;
  case (char *)0x7a:
  case (char *)0xba:
  case (char *)0xf2:
    pcVar9 = (char *)0xd000000000000012;
  case (char *)0x6e:
    HVar4.unknown = pcVar9 + 0x16;
  case (char *)0x0:
    auVar20._8_8_ = pcVar6;
    auVar20._0_8_ = HVar4.unknown;
    return auVar20;
  case (char *)0x14:
    HVar4.unknown = (byte *)0x277470696f6c6c61;
    pcVar6 = &DAT_e800000000000000;
  case (char *)0x94:
    auVar29._8_8_ = pcVar6;
    auVar29._0_8_ = HVar4.unknown;
    return auVar29;
  case (char *)0x15:
  case (char *)0x1d:
  case (char *)0x25:
  case (char *)0x2d:
  case (char *)0x35:
  case (char *)0x45:
  case (char *)0x4d:
  case (char *)0x95:
    goto switchD_1006c5c84_caseD_15;
  case (char *)0x1c:
    pcVar6 = (char *)0x2774706972636e77;
    HVar4.unknown = (undefined *)&stack0x00000008;
    SVar34.bridgeObject = &DAT_e800000000000000;
    SVar34.str = (char *)0x2774706972636e77;
    Swift::String::hash(HVar4,SVar34);
  case (char *)0xf8:
    auVar30._0_8_ = Swift::Hasher::_finalize(HVar4);
    auVar30._8_8_ = pcVar6;
    return auVar30;
  case (char *)0x24:
    uVar8 = 0x2774706972637327;
    SVar35.bridgeObject = &DAT_e800000000000000;
    SVar35.str = (char *)0x2774706972637327;
    Swift::String::hash((Hasher)0x6f642d776f6c6c61,SVar35);
    auVar31._8_8_ = uVar8;
    auVar31._0_8_ = HVar4.unknown;
    return auVar31;
  case (char *)0x2c:
    pcVar6 = (char *)0x2774706972637327;
    HVar4.unknown = (undefined *)&stack0x00000008;
    SVar36.bridgeObject = &DAT_e800000000000000;
    SVar36.str = (char *)0x2774706972637327;
    Swift::String::hash(HVar4,SVar36);
    HVar4.unknown = (undefined *)Swift::Hasher::_finalize(HVar4);
  case (char *)0x34:
    auVar32._8_8_ = pcVar6;
    auVar32._0_8_ = HVar4.unknown;
    return auVar32;
  case (char *)0x58:
  case (char *)0x9c:
  case (char *)0xb8:
    unaff_x20 = HVar4.unknown;
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
  case (char *)0xde:
  case (char *)0xe6:
    HVar4.unknown = &DAT_100fdbda0;
    pcVar6 = (char *)0x100c6f000;
  case (char *)0x79:
  case (char *)0xa4:
  case (char *)0xb9:
  case (char *)0xf1:
  case (char *)0xf9:
    pcVar6 = pcVar6 + 0x4f0;
  case (char *)0x54:
  case (char *)0x59:
  case (char *)0x81:
  case (char *)0xc1:
    FUN_1000f7830(HVar4.unknown,pcVar6);
  case (char *)0xac:
  case (char *)0xe4:
    _swift_initStaticObject();
    _Var5 = Swift::_findStringSwitchCase(HVar4.unknown,unaff_x20);
    _swift_bridgeObjectRelease();
    auVar28._1_7_ = 0;
    auVar28[0] = _Var5 != 0;
    auVar28._8_8_ = unaff_x20;
    return auVar28;
  case (char *)0x6d:
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffd0;
  case (char *)0xf0:
    *(byte **)((long)register0x00000008 + 0x10) = unaff_x20;
    *(char **)((long)register0x00000008 + 0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + 0x20) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x28) = unaff_x30;
  case (char *)0x44:
    FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
    _swift_initStaticObject();
    pcVar6 = pcVar2;
    unaff_x19 = pcVar9;
    unaff_x21 = pbVar1;
  case (char *)0x4c:
    HVar4.unknown = unaff_x21;
    unaff_x20 = (byte *)Swift::_findStringSwitchCase(&DAT_6f642d776f6c6c61,pcVar6,HVar4.unknown);
    _swift_bridgeObjectRelease(HVar4.unknown);
  case (char *)0x6f:
  case (char *)0x9f:
  case (char *)0xa7:
  case (char *)0xaf:
  case (char *)0xdf:
  case (char *)0xe7:
    *unaff_x19 = unaff_x20 != (byte *)0x0;
    auVar33._8_8_ = pcVar6;
    auVar33._0_8_ = HVar4.unknown;
    return auVar33;
  case (char *)0x78:
    FUN_1006c6500();
    auVar25._8_8_ = 0xef7364616f6c6e77;
    auVar25._0_8_ = &DAT_6f642d776f6c6c61;
    return auVar25;
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xdd:
  case (char *)0xe5:
    goto switchD_1006c5c84_caseD_9d;
  case (char *)0xd0:
  case (char *)0xd8:
  case (char *)0xe0:
    pcVar11 = (char *)0x8000000100db0530;
    pbVar12 = &DAT_00000012;
  case (char *)0xbc:
    pbVar12 = (byte *)((ulong)pbVar12 | 0xd000000000000000);
    in_ZR = false;
  case (char *)0x55:
  case (char *)0x69:
  case (char *)0x7d:
  case (char *)0x91:
  case (char *)0x99:
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xbd:
  case (char *)0xd1:
  case (char *)0xd9:
  case (char *)0xe1:
  case (char *)0xf5:
    if (!(bool)in_ZR) {
      pbVar12 = HVar4.unknown;
    }
  case (char *)0x80:
    HVar4.unknown = pbVar12;
    pcVar7 = pcVar11;
    if (!(bool)in_ZR) {
      pcVar7 = pcVar6;
    }
    FUN_1006c6500();
  case (char *)0x90:
  case (char *)0x98:
  case (char *)0xa0:
  case (char *)0xa8:
    auVar26._8_8_ = pcVar7;
    auVar26._0_8_ = HVar4.unknown;
    return auVar26;
  case (char *)0xdc:
    HVar4.unknown = *(undefined **)unaff_x20;
    pcVar6 = *(char **)(unaff_x20 + 8);
    pcVar9 = &DAT_e600000000000000;
    pbVar10 = (byte *)0x27656e6f6e27;
    pcVar11 = "allow-orientation-lock";
  case (char *)0x7c:
    pcVar11 = (char *)((ulong)pcVar11 | 0x8000000000000000);
    pbVar1 = (byte *)0xd000000000000012;
    if (pcVar6 != (char *)0x1) {
      pcVar11 = pcVar6;
      pbVar1 = HVar4.unknown;
    }
    bVar3 = pcVar6 != (char *)0x0;
    pcVar6 = pcVar9;
    HVar4.unknown = pbVar10;
    if (bVar3) {
      pcVar6 = pcVar11;
      HVar4.unknown = pbVar1;
    }
    FUN_1006c6500();
  case (char *)0x68:
    auVar27._8_8_ = pcVar6;
    auVar27._0_8_ = HVar4.unknown;
    return auVar27;
  case (char *)0xf4:
    thunk_FUN_1006c5c48();
    auVar24._8_8_ = pcVar6;
    auVar24._0_8_ = HVar4.unknown;
    return auVar24;
  }
  pcVar9 = pcVar9 + -0x20;
switchD_1006c5c84_caseD_9d:
  auVar18._8_8_ = (ulong)pcVar9 | 0x8000000000000000;
  auVar18._0_8_ = HVar4.unknown;
  return auVar18;
}



/* Address: 0x1006c5e08 | FUN_1006c5e08 */

void FUN_1006c5e08(void)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_1006c5c48(*unaff_x20);
  return;
}



/* Address: 0x1006c5e10 | FUN_1006c5e10 */

undefined1  [16] FUN_1006c5e10(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  FUN_1006c6500();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1006c5e3c | switchD_1006c5c84::caseD_d0 */

undefined1  [16] switchD_1006c5c84::caseD_d0(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  puVar1 = (undefined1 *)0x8000000100db0530;
  uVar4 = 0xd000000000000012;
  if (param_2 != (undefined1 *)0x1) {
    puVar1 = param_2;
    uVar4 = param_1;
  }
  uVar2 = 0x27656e6f6e27;
  if (param_2 != (undefined1 *)0x0) {
    uVar2 = uVar4;
  }
  puVar3 = &DAT_e600000000000000;
  if (param_2 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_1006c6500();
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Address: 0x1006c5ea0 | FUN_1006c5ea0 */

undefined1  [16] FUN_1006c5ea0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  
  puVar4 = (undefined1 *)unaff_x20[1];
  puVar1 = (undefined1 *)0x8000000100db0530;
  uVar5 = 0xd000000000000012;
  if (puVar4 != (undefined1 *)0x1) {
    puVar1 = puVar4;
    uVar5 = *unaff_x20;
  }
  uVar2 = 0x27656e6f6e27;
  if (puVar4 != (undefined1 *)0x0) {
    uVar2 = uVar5;
  }
  puVar3 = &DAT_e600000000000000;
  if (puVar4 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  FUN_1006c6500();
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x1006c5f08 | FUN_1006c5f08 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006c5f44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_1006c5f08(undefined8 param_1,undefined8 param_2)

{
  __int64 _Var1;
  
  FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
  _swift_initStaticObject();
  _Var1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  return _Var1 != 0;
}



/* Address: 0x1006c5f68 | FUN_1006c5f68 */

undefined1  [16] FUN_1006c5f68(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x2774706972637327;
  return auVar1;
}



/* Address: 0x1006c5f80 | FUN_1006c5f80 */

void FUN_1006c5f80(void)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e800000000000000;
  SVar1.str = (char *)0x2774706972637327;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1006c5fd0 | switchD_1006c5c84::caseD_24 */

void switchD_1006c5c84::caseD_24(Hasher param_1)

{
  String SVar1;
  
  SVar1.bridgeObject = &DAT_e800000000000000;
  SVar1.str = (char *)0x2774706972637327;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x1006c5fe8 | FUN_1006c5fe8 */

void FUN_1006c5fe8(__int64 param_1)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &DAT_e800000000000000;
  SVar1.str = (char *)0x2774706972637327;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1006c6034 | switchD_1006c5c84::caseD_6d */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006c6074 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void switchD_1006c5c84::caseD_6d(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __int64 _Var3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
  _swift_initStaticObject();
  _Var3 = Swift::_findStringSwitchCase(param_2,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(bool *)param_1 = _Var3 != 0;
  return;
}



/* Address: 0x1006c60a0 | FUN_1006c60a0 */

void FUN_1006c60a0(undefined8 *param_1)

{
  *param_1 = 0x2774706972637327;
  param_1[1] = &DAT_e800000000000000;
  return;
}



/* Address: 0x1006c60bc | FUN_1006c60bc */

String FUN_1006c60bc(undefined8 param_1)

{
  String SVar1;
  
  _swift_bridgeObjectRetain();
  FUN_1000f7830(&DAT_100fdc730,&BYTE_100c70f68);
  FUN_1006c6514();
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x203b;
  SVar1 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar1);
  _swift_bridgeObjectRelease(param_1);
  return SVar1;
}



/* Address: 0x1006c6148 | FUN_1006c6148 */

void FUN_1006c6148(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1006c4afc(uVar1,uVar2,*(undefined1 *)(param_2 + 2));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x1006c6178 | FUN_1006c6178 */

String FUN_1006c6178(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  String SVar2;
  
  uVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(uVar1);
  FUN_1000f7830(&DAT_100fdc730,&BYTE_100c70f68);
  FUN_1006c6514();
  SVar2.bridgeObject = &SUB_e200000000000000;
  SVar2.str = (char *)0x203b;
  SVar2 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar2);
  _swift_bridgeObjectRelease(uVar1);
  return SVar2;
}



/* Address: 0x1006c6208 | FUN_1006c6208 */

void FUN_1006c6208(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  puVar5 = (undefined1 *)param_2[1];
  puVar1 = (undefined1 *)0x8000000100db0530;
  uVar6 = 0xd000000000000012;
  if (puVar5 != (undefined1 *)0x1) {
    puVar1 = puVar5;
    uVar6 = uVar4;
  }
  uVar2 = 0x27656e6f6e27;
  if (puVar5 != (undefined1 *)0x0) {
    uVar2 = uVar6;
  }
  puVar3 = &DAT_e600000000000000;
  if (puVar5 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  *param_1 = uVar2;
  param_1[1] = puVar3;
  FUN_1006c6500(uVar4);
  return;
}



/* Address: 0x1006c6258 | FUN_1006c6258 */

void FUN_1006c6258(ulong *param_1,byte *param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  FUN_1006c493c();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1006c6280 | FUN_1006c6280 */

void FUN_1006c6280(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  
  uVar5 = *param_2;
  puVar6 = (undefined1 *)param_2[1];
  uVar1 = 0x27666c657327;
  if (puVar6 != (undefined1 *)0x1) {
    uVar1 = uVar5;
  }
  puVar2 = &DAT_e600000000000000;
  if (puVar6 != (undefined1 *)0x1) {
    puVar2 = puVar6;
  }
  uVar3 = 0x27656e6f6e27;
  if (puVar6 != (undefined1 *)0x0) {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e600000000000000;
  if (puVar6 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  *param_1 = uVar3;
  param_1[1] = puVar4;
  FUN_1006c6500(uVar5);
  return;
}



/* Address: 0x1006c62c8 | FUN_1006c62c8 */

void FUN_1006c62c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1006c580c();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1006c6308 | FUN_1006c6308 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006c634c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1006c6308(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCaseWithCache(param_1,param_1,param_2,&DAT_100fdcb18);
  _swift_bridgeObjectRelease(param_2);
  if (0x11 < uVar1) {
    uVar1 = 0x12;
  }
  return uVar1;
}



/* Address: 0x1006c6374 | FUN_1006c6374 */

void FUN_1006c6374(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 0xff) < 9) {
    if ((1 << (ulong)(param_3 & 0x1f) & 0xdeU) == 0) {
      param_1 = param_2;
    }
    _swift_bridgeObjectRetain(param_1);
    return;
  }
  return;
}



/* Address: 0x1006c639c | FUN_1006c639c */

void FUN_1006c639c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1006c63ac | FUN_1006c63ac */

void FUN_1006c63ac(String *param_1)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  *param_1 = SVar1;
  return;
}



/* Address: 0x1006c63e0 | FUN_1006c63e0 */

void FUN_1006c63e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 0xff) < 9) {
    if ((1 << (ulong)(param_3 & 0x1f) & 0xdeU) == 0) {
      param_1 = param_2;
    }
    _swift_bridgeObjectRelease(param_1);
    return;
  }
  return;
}



/* Address: 0x1006c6408 | FUN_1006c6408 */

undefined8 * FUN_1006c6408(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1006c6ae0(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_2 = uVar1;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar4;
  *(undefined1 *)(param_2 + 4) = uVar5;
  return param_2;
}



/* Address: 0x1006c6468 | FUN_1006c6468 */

undefined8 * FUN_1006c6468(undefined8 *param_1)

{
  FUN_1006c6b2c(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return param_1;
}



/* Address: 0x1006c649c | FUN_1006c649c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006c64d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1006c649c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (0xd < uVar1) {
    uVar1 = 0xe;
  }
  return uVar1;
}



/* Address: 0x1006c6500 | FUN_1006c6500 */

void FUN_1006c6500(undefined8 param_1,ulong param_2)

{
  if (param_2 < 2) {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1006c6514 | FUN_1006c6514 */

void FUN_1006c6514(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fdc738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fdc730;
  FUN_1000f8b08(&DAT_100fdc730,&BYTE_100c70f68);
  puVar2 = &DAT_100fdc740;
  FUN_100134584(&DAT_100fdc740,&DAT_100fdc748,&BYTE_100c70f70,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  puVar3 = 
  PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__BidirectionalCollection_100ead1a8;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__BidirectionalCollection_100ead1a8
             ,puVar1,&local_28);
  DAT_100fdc738 = puVar3;
  return;
}



/* Address: 0x1006c65a4 | thunk_FUN_1006c65a8 */

void thunk_FUN_1006c65a8(void)

{
  byte *pbVar1;
  
  if (DAT_100fdc750 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c70f78;
  _swift_getWitnessTable(&BYTE_100c70f78,&DAT_100ef8518);
  DAT_100fdc750 = pbVar1;
  return;
}



/* Address: 0x1006c65a8 | FUN_1006c65a8 */

void FUN_1006c65a8(void)

{
  byte *pbVar1;
  
  if (DAT_100fdc750 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c70f78;
  _swift_getWitnessTable(&BYTE_100c70f78,&DAT_100ef8518);
  DAT_100fdc750 = pbVar1;
  return;
}



/* Address: 0x1006c65e8 | thunk_FUN_1006c65ec */

void thunk_FUN_1006c65ec(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c710a8;
  _swift_getWitnessTable(&DAT_100c710a8,&DAT_100ef8690);
  DAT_100fdc758 = puVar1;
  return;
}



/* Address: 0x1006c65ec | FUN_1006c65ec */

void FUN_1006c65ec(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc758 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c710a8;
  _swift_getWitnessTable(&DAT_100c710a8,&DAT_100ef8690);
  DAT_100fdc758 = puVar1;
  return;
}



/* Address: 0x1006c662c | thunk_FUN_1006c6630 */

void thunk_FUN_1006c6630(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c710e8;
  _swift_getWitnessTable(&DAT_100c710e8,&DAT_100ef8690);
  DAT_100fdc760 = puVar1;
  return;
}



/* Address: 0x1006c6630 | FUN_1006c6630 */

void FUN_1006c6630(void)

{
  undefined *puVar1;
  
  if (DAT_100fdc760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c710e8;
  _swift_getWitnessTable(&DAT_100c710e8,&DAT_100ef8690);
  DAT_100fdc760 = puVar1;
  return;
}



/* Address: 0x1006c6670 | thunk_FUN_1006c6674 */

void thunk_FUN_1006c6674(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71188;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71188,&DAT_100ef87a0);
  DAT_100fdc768 = pTVar1;
  return;
}



/* Address: 0x1006c6674 | FUN_1006c6674 */

void FUN_1006c6674(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71188;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71188,&DAT_100ef87a0);
  DAT_100fdc768 = pTVar1;
  return;
}



/* Address: 0x1006c66b4 | thunk_FUN_1006c66b8 */

void thunk_FUN_1006c66b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc770 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c711c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c711c8,&DAT_100ef87a0);
  DAT_100fdc770 = pTVar1;
  return;
}



/* Address: 0x1006c66b8 | FUN_1006c66b8 */

void FUN_1006c66b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc770 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c711c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c711c8,&DAT_100ef87a0);
  DAT_100fdc770 = pTVar1;
  return;
}



/* Address: 0x1006c66f8 | thunk_FUN_1006c66fc */

void thunk_FUN_1006c66fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc778 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71200;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71200,&DAT_100ef8948);
  DAT_100fdc778 = pTVar1;
  return;
}



/* Address: 0x1006c66fc | FUN_1006c66fc */

void FUN_1006c66fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc778 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71200;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71200,&DAT_100ef8948);
  DAT_100fdc778 = pTVar1;
  return;
}



/* Address: 0x1006c673c | thunk_FUN_1006c6740 */

void thunk_FUN_1006c6740(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc780 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c712f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c712f0,&DAT_100ef8b10);
  DAT_100fdc780 = pTVar1;
  return;
}



/* Address: 0x1006c6740 | FUN_1006c6740 */

void FUN_1006c6740(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc780 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c712f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c712f0,&DAT_100ef8b10);
  DAT_100fdc780 = pTVar1;
  return;
}



/* Address: 0x1006c6780 | FUN_1006c6780 */

undefined1  [16] FUN_1006c6780(void)

{
  return ZEXT816(0x100ef8370);
}



/* Address: 0x1006c6790 | thunk_FUN_1006c67b4 */

void thunk_FUN_1006c67b4(void)

{
  FUN_1006c67b4();
  return;
}



/* Address: 0x1006c6794 | FUN_1006c6794 */

undefined1  [16] FUN_1006c6794(void)

{
  return ZEXT816(0x100ef83f0);
}



/* Address: 0x1006c67a4 | FUN_1006c67a4 */

void FUN_1006c67a4(undefined8 *param_1)

{
  FUN_1006c63e0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1006c67b4 | FUN_1006c67b4 */

undefined8 * FUN_1006c67b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1006c6374(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1006c67fc | thunk_FUN_1006c6800 */

undefined8 * thunk_FUN_1006c6800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1006c6374(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1006c63e0(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1006c6800 | FUN_1006c6800 */

undefined8 * FUN_1006c6800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1006c6374(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1006c63e0(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1006c6854 | thunk_FUN_1006c6858 */

undefined8 * thunk_FUN_1006c6858(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1006c63e0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1006c6858 | FUN_1006c6858 */

undefined8 * FUN_1006c6858(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1006c63e0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1006c689c | thunk_FUN_1006c68a0 */

int thunk_FUN_1006c68a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf6 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xf7;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 10) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006c68a0 | FUN_1006c68a0 */

int FUN_1006c68a0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf6 < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xf7;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 10) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006c68e8 | thunk_FUN_1006c68ec */

void thunk_FUN_1006c68ec(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf7) {
    if (0xf6 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xf7);
    param_1[1] = 0;
    if (0xf6 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1006c68ec | FUN_1006c68ec */

void FUN_1006c68ec(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf7) {
    if (0xf6 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xf7);
    param_1[1] = 0;
    if (0xf6 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1006c6930 | FUN_1006c6930 */

uint FUN_1006c6930(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 9;
  if (*(byte *)(param_1 + 4) < 9) {
    uVar1 = (uint)*(byte *)(param_1 + 4);
  }
  return uVar1;
}



/* Address: 0x1006c6948 | FUN_1006c6948 */

void FUN_1006c6948(ulong *param_1,uint param_2)

{
  if (8 < param_2) {
    *param_1 = (ulong)(param_2 - 9);
    param_1[1] = 0;
    param_2 = 9;
  }
  *(char *)(param_1 + 2) = (char)param_2;
  return;
}



/* Address: 0x1006c6960 | FUN_1006c6960 */

undefined1  [16] FUN_1006c6960(void)

{
  return ZEXT816(0x100ef8488);
}



/* Address: 0x1006c6970 | FUN_1006c6970 */

int FUN_1006c6970(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xee < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x11) {
      iVar2 = 4;
    }
    if (param_2 + 0x11 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1006c69ec;
        goto LAB_1006c69d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1006c69d0:
      return ((uint)*param_1 | uVar1 << 8) - 0x11;
    }
  }
LAB_1006c69ec:
  iVar2 = *param_1 - 0x12;
  if (*param_1 < 0x12) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1006c6a00 | FUN_1006c6a00 */

void FUN_1006c6a00(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0x11) {
    uVar3 = 4;
  }
  if (param_3 + 0x11 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xee < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xef) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1006c6a80;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1006c6a80:
      *param_1 = (char)param_2 + '\x11';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xef >> 8) + 1;
    *param_1 = (char)(param_2 - 0xef);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1006c6ab0 | FUN_1006c6ab0 */

undefined1  [16] FUN_1006c6ab0(void)

{
  return ZEXT816(0x100ef8518);
}



/* Address: 0x1006c6ac0 | FUN_1006c6ac0 */

undefined1  [16] FUN_1006c6ac0(void)

{
  return ZEXT816(0x100ef8590);
}



/* Address: 0x1006c6ad0 | FUN_1006c6ad0 */

undefined1  [16] FUN_1006c6ad0(void)

{
  return ZEXT816(0x100ef8610);
}


