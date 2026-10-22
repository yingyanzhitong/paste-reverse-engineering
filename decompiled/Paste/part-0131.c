/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001934b4 | thunk_FUN_10000862c */

void thunk_FUN_10000862c(void)

{
  thunk_FUN_10000862c();
  return;
}



/* Address: 0x1001934b8 | FUN_1001934b8 */

void FUN_1001934b8(void)

{
  FUN_1001934e0();
  return;
}



/* Address: 0x1001934dc | thunk_FUN_100193964 */

void thunk_FUN_100193964(void)

{
  FUN_100193964();
  return;
}



/* Address: 0x1001934e0 | FUN_1001934e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1001934e0(ulong param_1,undefined8 param_2,byte *param_3)

{
  char *pcVar1;
  byte *pbVar2;
  undefined8 uVar3;
  Hasher HVar4;
  undefined8 uVar5;
  char *pcVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
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
  String SVar32;
  String SVar33;
  
  HVar4.unknown = (byte *)0xed000064656c6c61;
  pcVar1 = &DAT_74736e695f707061;
  pcVar6 = (char *)(param_1 & 0xff);
  pbVar2 = HVar4.unknown;
  switch(pcVar6) {
  default:
    HVar4.unknown = (byte *)0x6863;
  case (char *)0x2c:
  case (char *)0x3a:
  case (char *)0x7a:
  case (char *)0x98:
  case (char *)0xa0:
  case (char *)0xa8:
  case (char *)0xb2:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffff0000ffff | 0xec00000064650000);
  case (char *)0x2a:
  case (char *)0x52:
  case (char *)0x92:
  case (char *)0x94:
  case (char *)0xe0:
    pcVar1 = (char *)0x7061;
  case (char *)0x54:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffff00000000ffff | 0x616c5f700000);
  case (char *)0xfc:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffffffff | 0x6e75000000000000);
  case (char *)0x22:
  case (char *)0x4a:
  case (char *)0x8a:
    auVar7._8_8_ = HVar4.unknown;
    auVar7._0_8_ = pcVar1;
    return auVar7;
  case (char *)0x2:
  case (char *)0xc9:
    auVar15._8_8_ = 0xeb00000000646574;
    auVar15._0_8_ = 0x616470755f707061;
    return auVar15;
  case (char *)0x3:
    HVar4.unknown = (byte *)0x6e75;
  case (char *)0x6c:
    auVar17._8_8_ = (ulong)HVar4.unknown & 0xffff | 0xee00646568630000;
    auVar17._0_8_ = 0x616c65725f707061;
    return auVar17;
  case (char *)0x4:
    auVar10._8_8_ = 0x8000000100d97710;
    auVar10._0_8_ = 0xd00000000000001b;
    return auVar10;
  case (char *)0x5:
    pcVar6 = "mcp_client_connected";
    break;
  case (char *)0x6:
    auVar21._8_8_ = 0xed0000646573755f;
    auVar21._0_8_ = 0x6c6f6f745f70636d;
    return auVar21;
  case (char *)0x7:
    pcVar6 = "not initialize alternative signal stack";
  case (char *)0xc2:
  case (char *)0xcf:
    pcVar6 = pcVar6 + 0x6e0;
LAB_100193798:
    auVar24._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar24._0_8_ = 0xd000000000000022;
    return auVar24;
  case (char *)0x8:
    pcVar6 = "enable_pasteboard_access_cancelled";
    goto LAB_100193798;
  case (char *)0x9:
    HVar4.unknown = (byte *)0x8000000100d97660;
    pcVar6 = &DAT_00000012;
  case (char *)0x30:
    auVar12._8_8_ = HVar4.unknown;
    auVar12._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) + 0xe;
    return auVar12;
  case (char *)0xa:
    pcVar6 = "enable_accessibility_access_presented";
    goto LAB_100193778;
  case (char *)0xb:
    pcVar6 = "not initialize alternative signal stack";
  case (char *)0x58:
  case (char *)0x60:
  case (char *)0x68:
  case (char *)0x70:
    pcVar6 = pcVar6 + 0x620;
LAB_100193778:
    auVar23._8_8_ = (ulong)(pcVar6 + -0x20) | 0x8000000000000000;
    auVar23._0_8_ = 0xd000000000000025;
    return auVar23;
  case (char *)0xc:
    pcVar6 = "not initialize alternative signal stack";
  case (char *)0x44:
    pcVar6 = pcVar6 + 0x5d0;
  case (char *)0x65:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0xa5:
  case (char *)0xad:
    HVar4.unknown = (undefined *)((ulong)pcVar6 | 0x8000000000000000);
  case (char *)0x1e:
  case (char *)0x32:
  case (char *)0x46:
  case (char *)0x5a:
  case (char *)0x62:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0x86:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xaa:
    auVar11._8_8_ = HVar4.unknown;
    auVar11._0_8_ = 0xd000000000000023;
    return auVar11;
  case (char *)0xd:
    auVar20._8_8_ = 0x8000000100d975b0;
    auVar20._0_8_ = 0xd00000000000001a;
    return auVar20;
  case (char *)0xe:
    HVar4.unknown = (byte *)0x8000000100d973f0;
  case (char *)0x48:
  case (char *)0xf4:
    auVar9._8_8_ = HVar4.unknown;
    auVar9._0_8_ = 0xd000000000000013;
    return auVar9;
  case (char *)0xf:
  case (char *)0xce:
    HVar4.unknown = (byte *)0x77656976;
  case (char *)0x40:
  case (char *)0xf1:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffff0000ffffffff | 0x646500000000);
  case (char *)0x5d:
  case (char *)0x9d:
  case (char *)0xf9:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffffffffffff | 0xee00000000000000);
    pcVar1 = (char *)0x77796170;
  case (char *)0x89:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffff0000ffffffff | 0x6c6100000000);
  case (char *)0x21:
  case (char *)0x49:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffffffff | 0x5f6c000000000000);
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0xa6:
  case (char *)0xae:
    auVar16._8_8_ = HVar4.unknown;
    auVar16._0_8_ = pcVar1;
    return auVar16;
  case (char *)0x10:
    pcVar6 = "device_model_identifier";
  case (char *)0x5e:
  case (char *)0x9e:
  case (char *)0xf2:
  case (char *)0xfa:
    HVar4.unknown = (undefined *)((ulong)pcVar6 | 0x8000000000000000);
    pcVar6 = &DAT_00000012;
  case (char *)0x84:
    auVar8._0_8_ = ((ulong)pcVar6 | 0xd000000000000000) - 2;
    auVar8._8_8_ = HVar4.unknown;
    return auVar8;
  case (char *)0x11:
  case (char *)0xc7:
    pcVar1 = (char *)0xd000000000000012;
  case (char *)0xcb:
  case (char *)0xd1:
    pcVar6 = "checkout_cancelled";
LAB_1001936fc:
    HVar4.unknown = (undefined *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
switchD_10019351c_caseD_c4:
    auVar19._8_8_ = HVar4.unknown;
    auVar19._0_8_ = pcVar1;
    return auVar19;
  case (char *)0x12:
    HVar4.unknown = (byte *)0x656c6961665f;
  case (char *)0xf0:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffffffffffff | 0xef64000000000000);
    pcVar1 = (char *)0x6863;
  case (char *)0x74:
  case (char *)0x80:
    auVar22._0_8_ = (ulong)pcVar1 & 0xffff | 0x74756f6b63650000;
    auVar22._8_8_ = HVar4.unknown;
    return auVar22;
  case (char *)0x13:
    auVar26._8_8_ = 0xed00006465747261;
    auVar26._0_8_ = 0x74735f6c61697274;
    return auVar26;
  case (char *)0x14:
    pcVar1 = (char *)0x7274;
  case (char *)0xc6:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffff | 0x6e655f6c61690000);
  case (char *)0xc3:
    HVar4.unknown = (byte *)0x6564;
  case (char *)0xd0:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffffffff0000ffff | 0x640000);
  case (char *)0xc1:
  case (char *)0xcc:
    auVar18._8_8_ = (ulong)HVar4.unknown & 0xffffffffffff | 0xeb00000000000000;
    auVar18._0_8_ = pcVar1;
    return auVar18;
  case (char *)0x15:
  case (char *)0xc8:
    pcVar1 = &DAT_00000012;
  case (char *)0xc5:
  case (char *)0xcd:
  case (char *)0xf8:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffffffff | 0xd000000000000000);
    pcVar6 = "not initialize alternative signal stack";
  case (char *)0xca:
    pcVar6 = pcVar6 + 0x510;
    goto LAB_1001936fc;
  case (char *)0x16:
    pcVar6 = "purchase_completed";
  case (char *)0x35:
    HVar4.unknown = (undefined *)((ulong)pcVar6 | 0x8000000000000000);
    pcVar1 = (char *)0xd000000000000016;
  case (char *)0x9c:
    auVar25._8_8_ = HVar4.unknown;
    auVar25._0_8_ = pcVar1;
    return auVar25;
  case (char *)0x17:
    pcVar6 = "subscription_expired";
    break;
  case (char *)0x18:
  case (char *)0x20:
    HVar4.unknown = (byte *)0x7473;
  case (char *)0x1c:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffff00000000ffff | 0x657472610000);
  case (char *)0x36:
    HVar4.unknown = (undefined *)((ulong)HVar4.unknown & 0xffffffffffff | 0xef64000000000000);
    pcVar1 = (char *)0x6572;
  case (char *)0xc0:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffff0000ffff | 0x74730000);
  case (char *)0x42:
  case (char *)0x82:
  case (char *)0xba:
    auVar14._0_8_ = (ulong)pcVar1 & 0xffffffff | 0x5f65726f00000000;
    auVar14._8_8_ = HVar4.unknown;
    return auVar14;
  case (char *)0x19:
    HVar4.unknown = (byte *)0x8000000100d97550;
    pcVar1 = (char *)0xd000000000000011;
  case (char *)0x0:
    auVar13._8_8_ = HVar4.unknown;
    auVar13._0_8_ = pcVar1;
    return auVar13;
  case (char *)0x1d:
  case (char *)0x31:
  case (char *)0x45:
  case (char *)0x59:
  case (char *)0x61:
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0x85:
  case (char *)0x99:
  case (char *)0xa1:
  case (char *)0xa9:
    goto switchD_10019351c_caseD_1d;
  case (char *)0x41:
  case (char *)0x81:
  case (char *)0xb9:
  case (char *)0x37:
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x77:
  case (char *)0xa7:
  case (char *)0xaf:
    uVar3 = _DAT_74736e695f707061;
    uVar5 = _DAT_74736e695f707069;
    FUN_100193964(_DAT_74736e695f707061,_DAT_74736e695f707069);
    *pcVar6 = (char)uVar3;
    auVar31._8_8_ = uVar5;
    auVar31._0_8_ = uVar3;
    return auVar31;
  case (char *)0x5c:
    SVar33.bridgeObject = (void *)0xed000064656c6c61;
    SVar33.str = (char *)param_3;
    Swift::String::hash((Hasher)&stack0x00000008,SVar33);
    _swift_bridgeObjectRelease();
    auVar30._0_8_ = Swift::Hasher::_finalize(HVar4);
    auVar30._8_8_ = param_3;
    return auVar30;
  case (char *)0x88:
    auVar28._8_8_ = 0xed000064656c6c61;
    auVar28._0_8_ = &DAT_74736e695f707061;
    return auVar28;
  case (char *)0xa4:
switchD_10019351c_caseD_a4:
    auVar27._8_8_ = HVar4.unknown;
    auVar27._0_8_ = pcVar1;
    return auVar27;
  case (char *)0xb8:
    pbVar2 = (byte *)(ulong)*unaff_x20;
    FUN_1001934e0();
    param_3 = HVar4.unknown;
    unaff_x20 = HVar4.unknown;
  case (char *)0xac:
    SVar32.bridgeObject = param_3;
    SVar32.str = (char *)pbVar2;
    Swift::String::hash((Hasher)0x74736e695f707061,SVar32);
    _swift_bridgeObjectRelease(unaff_x20);
    auVar29._8_8_ = pbVar2;
    auVar29._0_8_ = unaff_x20;
    return auVar29;
  case (char *)0xc4:
    goto switchD_10019351c_caseD_c4;
  }
  HVar4.unknown = (undefined *)((ulong)(pcVar6 + -0x20) | 0x8000000000000000);
  pcVar6 = (char *)0xd000000000000012;
switchD_10019351c_caseD_1d:
  pcVar1 = pcVar6 + 2;
  goto switchD_10019351c_caseD_a4;
}



/* Address: 0x100193814 | FUN_100193814 */

void FUN_100193814(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_1001934e0();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100193874 | FUN_100193874 */

void FUN_100193874(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_1001934e0();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1001938b4 | FUN_1001938b4 */

void FUN_1001938b4(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_1001934e0();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100193910 | FUN_100193910 */

void FUN_100193910(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100193964(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10019393c | FUN_10019393c */

void FUN_10019393c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_1001934e0();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100193964 | FUN_100193964 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001939a8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100193964(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb3560,&DAT_100c313c0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCaseWithCache(param_1,param_1,param_2,&DAT_100fb3568);
  _swift_bridgeObjectRelease(param_2);
  if (0x19 < uVar1) {
    uVar1 = 0x1a;
  }
  return uVar1;
}



/* Address: 0x1001939d0 | thunk_FUN_1001939d4 */

void thunk_FUN_1001939d4(void)

{
  undefined *puVar1;
  
  if (DAT_100fb32c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c310cc;
  _swift_getWitnessTable(&DAT_100c310cc,&DAT_100ebcbf8);
  DAT_100fb32c0 = puVar1;
  return;
}



/* Address: 0x1001939d4 | FUN_1001939d4 */

void FUN_1001939d4(void)

{
  undefined *puVar1;
  
  if (DAT_100fb32c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c310cc;
  _swift_getWitnessTable(&DAT_100c310cc,&DAT_100ebcbf8);
  DAT_100fb32c0 = puVar1;
  return;
}



/* Address: 0x100193a14 | FUN_100193a14 */

void FUN_100193a14(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100193a20 | FUN_100193a20 */

void FUN_100193a20(void)

{
  return;
}



/* Address: 0x100193a24 | FUN_100193a24 */

int FUN_100193a24(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xe6 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0x19) {
      iVar2 = 4;
    }
    if (param_2 + 0x19 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100193aa0;
        goto LAB_100193a84;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100193a84:
      return ((uint)*param_1 | uVar1 << 8) - 0x19;
    }
  }
LAB_100193aa0:
  iVar2 = *param_1 - 0x1a;
  if (*param_1 < 0x1a) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100193ab4 | FUN_100193ab4 */

void FUN_100193ab4(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0x19) {
    uVar3 = 4;
  }
  if (param_3 + 0x19 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xe6 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xe7) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100193b34;
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
LAB_100193b34:
      *param_1 = (char)param_2 + '\x19';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xe7 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xe7);
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



/* Address: 0x100193b64 | FUN_100193b64 */

undefined1  [16] FUN_100193b64(void)

{
  return ZEXT816(0x100ebcbf8);
}



/* Address: 0x100193b74 | thunk_FUN_1001940b0 */

void thunk_FUN_1001940b0(void)

{
  FUN_1001940b0();
  return;
}



/* Address: 0x100193b78 | FUN_100193b78 */

undefined * FUN_100193b78(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x73726f727265;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e600000000000000;
  pcVar2 = FUN_100193c84;
  FUN_100193cd8(FUN_100193c84,0,param_1,PTR___type_metadata_for_Swift_String_100eac208,
                PTR___type_metadata_for_Swift_Never_100eadc38,param_2,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  puVar3 = &DAT_100fb3578;
  FUN_1000037f0(&DAT_100fb3578,&BYTE_100c311a8);
  *(undefined **)(puVar1 + 0x48) = puVar3;
  FUN_1001944bc();
  *(undefined **)(puVar1 + 0x50) = puVar3;
  *(code **)(puVar1 + 0x30) = pcVar2;
  puVar3 = puVar1;
  FUN_10019072c(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  return puVar3;
}



/* Address: 0x100193c84 | FUN_100193c84 */

void FUN_100193c84(String *param_1,undefined8 *param_2)

{
  String SVar1;
  undefined1 local_48 [24];
  undefined1 auStack_28 [8];
  
  _swift_getErrorValue(*param_2,auStack_28,local_48);
  SVar1 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  *param_1 = SVar1;
  return;
}



/* Address: 0x100193cd8 | FUN_100193cd8 */

void FUN_100193cd8(code *param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  long lVar8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  code *local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined1 auStack_80 [32];
  undefined *local_58;
  
  local_e8 = *(long *)(param_5 + -8);
  lVar5 = param_6;
  local_e0 = param_5;
  local_d8 = param_8;
  local_a8 = param_1;
  local_a0 = param_2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_e8 + 0x40));
  lVar7 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  local_98 = lVar7;
  _swift_getAssociatedTypeWitness(0,*(undefined8 *)(lVar5 + 8));
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  local_c8 = lVar7;
  local_b8 = param_4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar7 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  local_d0 = lVar7;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  local_c0 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = Swift::Collection::get_count();
  if (lVar5 == 0) {
    Swift::Array<undefined>::_allocateUninitialized(0,local_b8);
  }
  else {
    local_f0 = lVar4;
    local_58 = (undefined *)Swift::ContiguousArray::init();
    local_b0 = (undefined *)Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::reserveCapacity(lVar5,(ContiguousArray)local_b0);
    local_90 = lVar7 - extraout_x8_02;
    Swift::Collection::_get_startIndex();
    lVar7 = local_c8;
    lVar4 = local_d0;
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100193fdc);
      (*pcVar2)();
    }
    do {
      pcVar2 = (code *)auStack_80;
      __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                (pcVar2,local_90,param_3,param_6);
      (**(code **)(lVar8 + 0x10))(lVar7);
      (*pcVar2)(auStack_80,0);
      (*local_a8)(lVar4,lVar7,local_98);
      if (unaff_x21 != 0) {
        (**(code **)(lVar8 + 8))(lVar7,lVar3);
        (**(code **)(local_c0 + 8))(local_90,local_f0);
        _swift_release(local_58);
        (**(code **)(local_e8 + 0x20))(local_d8,local_98,local_e0);
        return;
      }
      (**(code **)(lVar8 + 8))(lVar7,lVar3);
      Swift::ContiguousArray::append(lVar4,local_b0);
      Swift::Collection::_formIndex();
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    (**(code **)(local_c0 + 8))(local_90,local_f0);
    puVar1 = local_b0;
    puVar6 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130;
    _swift_getWitnessTable
              (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,local_b0);
    Swift::Array<undefined>::_init(&local_58,local_b8,puVar1,puVar6);
  }
  return;
}



/* Address: 0x100193fdc | FUN_100193fdc */

undefined * FUN_100193fdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  String SVar3;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x726f727265;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e500000000000000;
  SVar3 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(String *)(puVar1 + 0x30) = SVar3;
  puVar2 = puVar1;
  FUN_10019072c(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  return puVar2;
}



/* Address: 0x1001940b0 | FUN_1001940b0 */

ulong FUN_1001940b0(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong local_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong local_70;
  
  uVar8 = *(ulong *)(param_2 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_2);
  lVar12 = 0;
  uVar13 = uVar13 & uVar8;
  while( true ) {
    while (uVar8 = uVar13, uVar8 != 0) {
      uVar13 = uVar8 - 1 & uVar8;
      if (*(long *)(param_2 + 0x10) != 0) {
        uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        puVar9 = (ulong *)(*(long *)(param_2 + 0x30) + LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 0x10
                          + lVar12 * 0x400);
        uVar8 = *puVar9;
        uVar2 = puVar9[1];
        _swift_bridgeObjectRetain(param_2);
        _swift_bridgeObjectRetain(uVar2);
        uVar5 = uVar8;
        uVar6 = uVar2;
        FUN_100071370(uVar8);
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(uVar2);
        }
        else {
          FUN_100194524(*(long *)(param_2 + 0x38) + uVar5 * 0x28,&local_b8);
          _swift_bridgeObjectRelease(param_2);
          uStack_88 = uStack_b0;
          local_90 = local_b8;
          uStack_78 = uStack_a0;
          uStack_80 = local_a8;
          local_70 = local_98;
          FUN_100194524(&local_90,&local_b8);
          uStack_108 = uStack_b0;
          local_110 = local_b8;
          local_f8 = uStack_a0;
          uStack_100 = local_a8;
          local_f0 = local_98;
          if (uStack_a0 == 1) {
            FUN_100005808(&local_110,&DAT_100fb3588,&DAT_100c31270);
            _swift_bridgeObjectRetain(param_1);
            uVar5 = uVar2;
            FUN_100071370();
            _swift_bridgeObjectRelease(param_1);
            if ((uVar5 & 1) == 0) {
              FUN_100005808(&local_90,&DAT_100fb32b0,&DAT_100c31a50);
              _swift_bridgeObjectRelease(uVar2);
              local_e0 = 0;
              uStack_d8 = 0;
              local_d0 = 0;
              uStack_c0 = 0;
              local_c8 = 1;
            }
            else {
              uVar5 = param_1;
              _swift_isUniquelyReferenced_nonNull_native();
              local_110 = param_1;
              if ((int)uVar5 == 0) {
                FUN_100199974();
              }
              param_1 = local_110;
              _swift_bridgeObjectRelease
                        (*(undefined8 *)(*(long *)(local_110 + 0x30) + uVar8 * 0x10 + 8));
              puVar9 = (ulong *)(*(long *)(param_1 + 0x38) + uVar8 * 0x28);
              uStack_c0 = puVar9[4];
              uStack_d8 = puVar9[1];
              local_e0 = *puVar9;
              local_c8 = puVar9[3];
              local_d0 = puVar9[2];
              FUN_1001977c8(uVar8,param_1);
              _swift_bridgeObjectRelease(uVar2);
              FUN_100005808(&local_90,&DAT_100fb32b0,&DAT_100c31a50);
            }
            FUN_100005808(&local_e0,&DAT_100fb3588,&DAT_100c31270);
          }
          else {
            uStack_d8 = uStack_b0;
            local_e0 = local_b8;
            local_c8 = uStack_a0;
            local_d0 = local_a8;
            uStack_c0 = local_98;
            uVar5 = param_1;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar6 = uVar8;
            uVar7 = uVar2;
            local_110 = param_1;
            FUN_100071370();
            uVar11 = (ulong)~(uint)uVar7 & 1;
            lVar1 = *(long *)(param_1 + 0x10) + uVar11;
            if (SCARRY8(*(long *)(param_1 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1001944a8);
              (*pcVar3)();
            }
            if (*(long *)(param_1 + 0x18) < lVar1) {
              FUN_10019a350(lVar1,uVar5);
              uVar6 = uVar8;
              uVar5 = uVar2;
              FUN_100071370();
              if (((uint)uVar7 & 1) != ((uint)uVar5 & 1)) {
                Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1001944bc);
                (*pcVar3)();
              }
            }
            else if ((uVar5 & 1) == 0) {
              FUN_100199974();
            }
            param_1 = local_110;
            if ((uVar7 & 1) == 0) {
              lVar1 = local_110 + (uVar6 >> 6) * 8;
              *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar6 & 0x3f);
              puVar9 = (ulong *)(*(long *)(local_110 + 0x30) + uVar6 * 0x10);
              *puVar9 = uVar8;
              puVar9[1] = uVar2;
              puVar9 = (ulong *)(*(long *)(local_110 + 0x38) + uVar6 * 0x28);
              puVar9[4] = uStack_c0;
              puVar9[1] = uStack_d8;
              *puVar9 = local_e0;
              puVar9[3] = local_c8;
              puVar9[2] = local_d0;
              FUN_100005808(&local_90,&DAT_100fb32b0,&DAT_100c31a50);
              if (SCARRY8(*(long *)(param_1 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1001944ac);
                (*pcVar3)();
              }
              *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
            }
            else {
              FUN_100193160(&local_e0,*(long *)(local_110 + 0x38) + uVar6 * 0x28);
              _swift_bridgeObjectRelease(uVar2);
              FUN_100005808(&local_90,&DAT_100fb32b0,&DAT_100c31a50);
            }
          }
        }
      }
    }
    bVar4 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001944a4);
      (*pcVar3)();
    }
    if ((long)(uVar10 + 0x3f >> 6) <= lVar12) break;
    uVar13 = ((ulong *)(param_2 + 0x40))[lVar12];
  }
  _swift_release(param_2);
  return param_1;
}



/* Address: 0x1001944bc | FUN_1001944bc */

void FUN_1001944bc(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined **local_18;
  
  if (DAT_100fb3580 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb3578;
  FUN_100005c24(&DAT_100fb3578,&BYTE_100c311a8);
  local_18 = &PTR_PTR_100ebcc60;
  pTVar2 = &TargetProtocolConformanceDescriptor_100c311e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c311e8,puVar1,&local_18);
  DAT_100fb3580 = pTVar2;
  return;
}



/* Address: 0x100194524 | FUN_100194524 */

undefined8 FUN_100194524(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb32b0;
  FUN_1000037f0(&DAT_100fb32b0,&DAT_100c31a50);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100194574 | FUN_100194574 */

char * FUN_100194574(void)

{
  return "items_count";
}



/* Address: 0x100194580 | FUN_100194580 */

undefined * FUN_100194580(void)

{
  return &DAT_100c312e0;
}



/* Address: 0x10019458c | FUN_10019458c */

undefined * FUN_10019458c(void)

{
  return &DAT_100ebcca8;
}



/* Address: 0x100194598 | FUN_100194598 */

undefined * FUN_100194598(void)

{
  return &DAT_100ebccb8;
}



/* Address: 0x1001945a4 | FUN_1001945a4 */

undefined * FUN_1001945a4(void)

{
  return &DAT_100ebccc8;
}



/* Address: 0x1001945b0 | FUN_1001945b0 */

undefined * FUN_1001945b0(void)

{
  return &DAT_100ebccd8;
}



/* Address: 0x1001945bc | FUN_1001945bc */

char * FUN_1001945bc(void)

{
  return "placement";
}



/* Address: 0x1001945c8 | FUN_1001945c8 */

undefined1  [16] FUN_1001945c8(byte param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0x756e656d;
  if (param_1 != 3) {
    uVar1 = 0x726568746f;
  }
  puVar2 = &DAT_e400000000000000;
  if (param_1 != 3) {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x73676e6974746573;
  if (param_1 != 2) {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e800000000000000;
  if (param_1 != 2) {
    puVar4 = puVar2;
  }
  puVar2 = (undefined1 *)0xea0000000000676e;
  uVar1 = 0x696472616f626e6f;
  if (param_1 != 0) {
    puVar2 = (undefined1 *)0xec00000065746167;
    uVar1 = 0x5f65727574616566;
  }
  if (param_1 < 2) {
    puVar4 = puVar2;
    uVar3 = uVar1;
  }
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x100194664 | FUN_100194664 */

char * FUN_100194664(void)

{
  return "reason";
}



/* Address: 0x100194670 | FUN_100194670 */

undefined1  [16] FUN_100194670(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x6465727265666564;
    if (param_1 != '\x01') {
      uVar1 = 0x676e69646e6570;
    }
    puVar2 = &DAT_e800000000000000;
    if (param_1 != '\x01') {
      puVar2 = &DAT_e700000000000000;
    }
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = &DAT_e500000000000000;
  auVar4._0_8_ = 0x726f727265;
  return auVar4;
}



/* Address: 0x1001946c4 | FUN_1001946c4 */

char * FUN_1001946c4(void)

{
  return "trial_type";
}



/* Address: 0x1001946d0 | FUN_1001946d0 */

undefined1  [16] FUN_1001946d0(char param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x616e616d5f707061;
  if (param_1 != '\x01') {
    uVar1 = 0x74696b65726f7473;
  }
  uVar2 = 0xeb00000000646567;
  if (param_1 != '\x01') {
    uVar2 = 0xee006f72746e695f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100194720 | FUN_100194720 */

char * FUN_100194720(void)

{
  return "trial_days";
}



/* Address: 0x10019472c | FUN_10019472c */

undefined1  [16] FUN_10019472c(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = (undefined1 *)0x8000000100d974b0;
  uVar1 = 0xd000000000000017;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e700000000000000;
    uVar1 = 0x64657269707865;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10019476c | FUN_10019476c */

char * FUN_10019476c(void)

{
  return "source";
}



/* Address: 0x100194778 | FUN_100194778 */

undefined1  [16] FUN_100194778(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = &DAT_e800000000000000;
    auVar4._0_8_ = 0x74696b65726f7473;
    return auVar4;
  }
  puVar2 = (undefined1 *)0xeb0000000079656b;
  uVar1 = 0x5f65736e6563696c;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e700000000000000;
    uVar1 = 0x65726f74736572;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1001947d8 | FUN_1001947d8 */

undefined * FUN_1001947d8(void)

{
  return &DAT_100ebcce8;
}



/* Address: 0x1001947e4 | FUN_1001947e4 */

char * FUN_1001947e4(void)

{
  return "expires_at";
}



/* Address: 0x1001947f0 | FUN_1001947f0 */

char * FUN_1001947f0(void)

{
  return "found";
}



/* Address: 0x1001947fc | FUN_1001947fc */

char * FUN_1001947fc(void)

{
  return "channel";
}



/* Address: 0x100194808 | FUN_100194808 */

undefined1  [16] FUN_100194808(char param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if (param_1 == '\0') {
    auVar3._8_8_ = 0xe900000000000065;
    auVar3._0_8_ = 0x726f74735f707061;
    return auVar3;
  }
  uVar1 = 0x746365726964;
  if (param_1 != '\x01') {
    uVar1 = 0x707061746573;
  }
  auVar2._8_8_ = &DAT_e600000000000000;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x10019485c | FUN_10019485c */

char * FUN_10019485c(void)

{
  return "variant";
}



/* Address: 0x100194868 | FUN_100194868 */

undefined * FUN_100194868(void)

{
  return &DAT_100c31300;
}



/* Address: 0x100194874 | FUN_100194874 */

undefined1  [16] FUN_100194874(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 != '\0') {
    uVar1 = 0x6c61756e6e61;
    if (param_1 != '\x01') {
      uVar1 = 0x656d69746566696c;
    }
    puVar2 = &DAT_e600000000000000;
    if (param_1 != '\x01') {
      puVar2 = &DAT_e800000000000000;
    }
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = uVar1;
    return auVar3;
  }
  auVar4._8_8_ = &DAT_e700000000000000;
  auVar4._0_8_ = 0x796c68746e6f6d;
  return auVar4;
}



/* Address: 0x1001948c8 | FUN_1001948c8 */

char * FUN_1001948c8(void)

{
  return "product_id";
}



/* Address: 0x1001948d4 | FUN_1001948d4 */

char * FUN_1001948d4(void)

{
  return "offer_type";
}



/* Address: 0x1001948e0 | FUN_1001948e0 */

undefined1  [16] FUN_1001948e0(byte param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  puVar4 = (undefined1 *)0xed000065646f635f;
  uVar2 = 0x746e756f63736964;
  if (param_1 != 2) {
    puVar4 = &DAT_e400000000000000;
    uVar2 = 0x656e6f6e;
  }
  puVar1 = (undefined1 *)0xec00000079726f74;
  uVar3 = 0x6375646f72746e69;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)0xeb000000006c616e;
    uVar3 = 0x6f69746f6d6f7270;
  }
  if (param_1 < 2) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Address: 0x100194970 | FUN_100194970 */

char * FUN_100194970(void)

{
  return "offer_id";
}



/* Address: 0x10019497c | FUN_10019497c */

undefined * FUN_10019497c(void)

{
  return &DAT_100ebcc88;
}



/* Address: 0x100194988 | FUN_100194988 */

undefined * FUN_100194988(void)

{
  return &DAT_100ebcc98;
}



/* Address: 0x100194994 | FUN_100194994 */

char * FUN_100194994(void)

{
  return "screen";
}



/* Address: 0x1001949a0 | FUN_1001949a0 */

undefined1  [16] FUN_1001949a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x6e6565726373;
  return auVar1;
}



/* Address: 0x1001949b4 | FUN_1001949b4 */

char * FUN_1001949b4(void)

{
  return "result";
}



/* Address: 0x1001949c0 | FUN_1001949c0 */

undefined1  [16] FUN_1001949c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x746c75736572;
  return auVar1;
}



/* Address: 0x1001949d4 | FUN_1001949d4 */

undefined1  [16] FUN_1001949d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d97570;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Address: 0x1001949f0 | FUN_1001949f0 */

undefined1  [16] FUN_1001949f0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d97590;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Address: 0x100194a0c | FUN_100194a0c */

char * FUN_100194a0c(void)

{
  return "client_name";
}



/* Address: 0x100194a18 | FUN_100194a18 */

undefined1  [16] FUN_100194a18(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000656d61;
  auVar1._0_8_ = 0x6e5f746e65696c63;
  return auVar1;
}



/* Address: 0x100194a38 | FUN_100194a38 */

char * FUN_100194a38(void)

{
  return "method";
}


