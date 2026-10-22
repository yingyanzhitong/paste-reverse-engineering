/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100beb794 | switchD_100beb5ac::caseD_e5 */

undefined1 *
switchD_100beb5ac::caseD_e5(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  undefined1 *puVar11;
  undefined1 *extraout_x8_02;
  byte *extraout_x9;
  byte *extraout_x9_00;
  ulong extraout_x9_01;
  byte *extraout_x9_02;
  char *pcVar12;
  byte *pbVar13;
  long lVar14;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar15;
  code *pcVar16;
  code *unaff_x20;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x30;
  
  uVar9 = (undefined4)((ulong)param_2 >> 0x20);
  uVar8 = (uint)param_2;
  puVar2 = &stack0xffffffffffffffd0;
  puVar10 = &DAT_65707974;
  pcVar16 = (code *)&DAT_e400000000000000;
  param_1 = param_1 & 0xff;
  pbVar13 = &switchD_100beb7d0::switchdataD_100c9f8ce;
  uVar15 = (ulong)(&switchD_100beb7d0::switchdataD_100c9f8ce)[param_1];
  lVar14 = uVar15 * 4 + 0x100beb7d4;
  uVar4 = 0x65707974;
  puVar5 = &DAT_65707974;
  switch(param_1) {
  case 0:
  case 7:
  case 0x87:
    break;
  default:
    pcVar16 = (code *)&DAT_e700000000000000;
    puVar5 = (undefined1 *)0x6168;
  case 0x12:
  case 0x18:
  case 0x1e:
  case 0x24:
  case 0x3a:
  case 0x42:
  case 0x4a:
  case 0x51:
  case 0x92:
  case 0x98:
  case 0xa6:
  case 0xae:
  case 0xc1:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x646e0000);
switchD_100beb7d0_caseD_f2:
    puVar5 = (undefined1 *)((ulong)puVar5 | 0x656c00000000);
switchD_100beb7d0_caseD_70:
    puVar5 = (undefined1 *)((ulong)puVar5 | 0x64000000000000);
switchD_100beb7d0_caseD_2a:
    break;
  case 2:
  case 9:
  case 0x10:
  case 0x16:
  case 0x39:
  case 0x41:
  case 0x89:
  case 0x90:
  case 199:
    puVar5 = (undefined1 *)0x7973;
  case 0x56:
  case 0x5d:
  case 0x6e:
  case 0x74:
  case 0xa7:
  case 0xaf:
  case 0xb3:
  case 0xc0:
  case 0xcb:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x746e0000);
switchD_100beb7d0_caseD_28:
    puVar5 = (undefined1 *)((ulong)puVar5 | 0x656800000000);
switchD_100beb7d0_caseD_6f:
    puVar5 = (undefined1 *)((ulong)puVar5 | 0x6974000000000000);
switchD_100beb7d0_caseD_1d:
    pcVar16 = (code *)0x63;
switchD_100beb7d0_caseD_71:
    pcVar16 = (code *)((ulong)pcVar16 & 0xffffffffffff | 0xe900000000000000);
switchD_100beb7d0_caseD_3b:
    break;
  case 3:
  case 10:
  case 0x11:
  case 0x17:
  case 0x57:
  case 0x5e:
  case 0x85:
  case 0x8a:
  case 0x91:
  case 0xb4:
  case 0xcc:
    puVar5 = (undefined1 *)0x6564;
  case 0x29:
  case 0x31:
  case 0x6c:
  case 0x72:
  case 0x9d:
  case 0xaa:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x697263730000);
switchD_100beb7d0_caseD_1f:
    puVar5 = (undefined1 *)((ulong)puVar5 | 0x7470000000000000);
switchD_100beb7d0_caseD_4d:
    pcVar16 = (code *)0x6f69;
switchD_100beb7d0_caseD_13:
    pcVar16 = (code *)((ulong)pcVar16 | 0x6e0000);
switchD_100beb7d0_caseD_e:
    pcVar16 = (code *)((ulong)pcVar16 & 0xffffffffffff | 0xeb00000000000000);
switchD_100beb7d0_caseD_46:
    break;
  case 4:
  case 0xb:
  case 0x48:
  case 0x4f:
  case 0x84:
  case 0x8b:
  case 0xa5:
  case 0xac:
    uVar4 = 0x6164;
  case 0x38:
  case 0x40:
  case 0x7b:
  case 0x7f:
  case 0xc6:
    puVar5 = (undefined1 *)(ulong)(uVar4 & 0xffff | 0x61740000);
switchD_100beb7d0_caseD_1c:
    break;
  case 5:
  case 0xc:
  case 0x1a:
  case 0x2d:
  case 0x35:
  case 0x80:
  case 0x8c:
  case 0x94:
  case 0xa1:
    puVar5 = (undefined1 *)0x6568;
  case 0x20:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x6c5f706c0000);
switchD_100beb7d0_caseD_cf:
    puVar5 = (undefined1 *)((ulong)puVar5 | 0x6e69000000000000);
switchD_100beb7d0_caseD_2b:
    param_1 = 0xe900000000000063;
switchD_100beb7d0_caseD_5a:
    pcVar16 = (code *)(param_1 | 8);
    break;
  case 6:
  case 0xd:
  case 0x2c:
  case 0x34:
  case 0x8d:
  case 0xf6:
    unaff_x30 = 0x100beb858;
    FUN_100beedb4();
    param_1 = extraout_x8;
    pbVar13 = extraout_x9;
  case 0x54:
  case 0x5b:
  case 0x9a:
  case 0xb1:
    puVar5 = (undefined1 *)((ulong)pbVar13 | param_1);
    break;
  case 0xe:
  case 0x14:
  case 0x36:
  case 0x3e:
  case 0x59:
  case 0x60:
  case 0x8e:
  case 0xb6:
    goto switchD_100beb7d0_caseD_e;
  case 0x13:
  case 0x19:
  case 0x93:
    goto switchD_100beb7d0_caseD_13;
  case 0x1c:
  case 0x22:
  case 0x49:
  case 0x50:
  case 0x96:
  case 0xa9:
  case 0xad:
  case 0xbf:
    goto switchD_100beb7d0_caseD_1c;
  case 0x1d:
  case 0x23:
  case 0x3d:
  case 0x45:
  case 0x4b:
  case 0x52:
  case 0x97:
    goto switchD_100beb7d0_caseD_1d;
  case 0x1f:
  case 0x25:
  case 0x3c:
  case 0x44:
  case 0x99:
    goto switchD_100beb7d0_caseD_1f;
  case 0x26:
  case 0x2e:
    goto switchD_100beb7d0_caseD_26;
  case 0x28:
  case 0x30:
  case 0x9c:
    goto switchD_100beb7d0_caseD_28;
  case 0x2a:
  case 0x32:
  case 0x58:
  case 0x5f:
  case 0x7a:
  case 0x7e:
  case 0x9e:
  case 0xb5:
  case 0xc5:
    goto switchD_100beb7d0_caseD_2a;
  case 0x2b:
  case 0x33:
  case 0x9f:
    goto switchD_100beb7d0_caseD_2b;
  case 0x3b:
  case 0x43:
  case 0x4c:
  case 0x53:
  case 0xa2:
  case 0xbd:
  case 0xce:
    goto switchD_100beb7d0_caseD_3b;
  case 0x46:
    goto switchD_100beb7d0_caseD_46;
  case 0x4d:
  case 0x86:
  case 0xd0:
    goto switchD_100beb7d0_caseD_4d;
  case 0x5a:
  case 0x61:
  case 0xa0:
  case 0xb7:
    goto switchD_100beb7d0_caseD_5a;
  case 0x6f:
  case 0x75:
  case 0x78:
  case 0x7c:
  case 0x82:
  case 0xa8:
  case 0xb0:
  case 0xc2:
  case 0xc3:
  case 0xc9:
    goto switchD_100beb7d0_caseD_6f;
  case 0x70:
  case 0x76:
  case 0xa4:
    goto switchD_100beb7d0_caseD_70;
  case 0x71:
  case 0x77:
  case 0x83:
  case 0xca:
    goto switchD_100beb7d0_caseD_71;
  case 0xcf:
    goto switchD_100beb7d0_caseD_cf;
  case 0xd2:
    goto switchD_100beb7d0_caseD_d2;
  case 0xd3:
  case 0xd9:
    goto switchD_100beb7d0_caseD_d3;
  case 0xd4:
    goto switchD_100beb970_caseD_3a;
  case 0xd5:
  case 0xe2:
    goto switchD_100beb970_caseD_61;
  case 0xd6:
    puVar5 = (undefined1 *)0x6e6168637974;
    goto switchD_100beb970_caseD_61;
  case 0xd7:
  case 0xe3:
    puVar5 = (undefined1 *)0x6f6d;
    goto switchD_100beb878_caseD_e3;
  case 0xd8:
    goto switchD_100beb7d0_caseD_d8;
  case 0xda:
  case 0xdd:
    pbVar13 = (byte *)"SentryTypedSwizzle";
  case 0xde:
    pbVar13 = pbVar13 + 0x8dc;
switchD_100beb7d0_caseD_db:
    lVar14 = 0x100beb974;
    uVar15 = (ulong)pbVar13[param_1];
switchD_100beb7d0_caseD_d3:
                    /* WARNING: Could not recover jumptable at 0x000100beb970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(lVar14 + uVar15 * 4))(&DAT_65707974);
    return puVar10;
  case 0xdb:
    goto switchD_100beb7d0_caseD_db;
  case 0xdc:
    unaff_x30 = 0x100beb978;
    FUN_100beed94();
  case 0xdf:
  case 0xe1:
    goto switchD_100beb970_caseD_0;
  case 0xe0:
    puVar5 = (undefined1 *)0x695f646165707974;
    goto switchD_100beb970_caseD_3a;
  case 0xea:
    goto switchD_100beb7d0_caseD_ea;
  case 0xf2:
    goto switchD_100beb7d0_caseD_f2;
  }
  unaff_x20 = (code *)&DAT_e400000000000000;
switchD_100beb7d0_caseD_26:
  uVar15 = (ulong)uVar8 & 0xff;
  pbVar13 = &switchD_100beb878::switchdataD_100c9f8d5;
  switch(uVar15) {
  case 0:
  case 0x80:
    break;
  default:
    unaff_x20 = (code *)&DAT_e700000000000000;
    puVar10 = (undefined1 *)0x6168;
  case 0xb:
  case 0x11:
  case 0x17:
  case 0x1d:
  case 0x33:
  case 0x3b:
  case 0x43:
  case 0x4a:
  case 0x8b:
  case 0x91:
  case 0x9f:
  case 0xa7:
  case 0xba:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x646e0000);
    goto switchD_100beb878_caseD_eb;
  case 2:
  case 9:
  case 0xf:
  case 0x32:
  case 0x3a:
  case 0x82:
  case 0x89:
  case 0xc0:
    puVar10 = (undefined1 *)0x7973;
  case 0x4f:
  case 0x56:
  case 0x67:
  case 0x6d:
  case 0xa0:
  case 0xa8:
  case 0xac:
  case 0xb9:
  case 0xc4:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x746e0000);
    goto switchD_100beb878_caseD_21;
  case 3:
  case 10:
  case 0x10:
  case 0x50:
  case 0x57:
  case 0x7e:
  case 0x83:
  case 0x8a:
  case 0xad:
  case 0xc5:
    puVar10 = (undefined1 *)0x6564;
  case 0x22:
  case 0x2a:
  case 0x65:
  case 0x6b:
  case 0x96:
  case 0xa3:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff00000000ffff | 0x697263730000);
    goto switchD_100beb878_caseD_18;
  case 4:
  case 0x41:
  case 0x48:
  case 0x7d:
  case 0x84:
  case 0x9e:
  case 0xa5:
    puVar10 = (undefined1 *)0x6164;
  case 0x31:
  case 0x39:
  case 0x74:
  case 0x78:
  case 0xbf:
    puVar10 = (undefined1 *)(ulong)((uint)puVar10 & 0xffff | 0x61740000);
    goto switchD_100beb878_caseD_15;
  case 5:
  case 0x13:
  case 0x26:
  case 0x2e:
  case 0x79:
  case 0x85:
  case 0x8d:
  case 0x9a:
    puVar10 = (undefined1 *)0x6568;
  case 0x19:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff00000000ffff | 0x6c5f706c0000);
    goto switchD_100beb878_caseD_c8;
  case 6:
  case 0x25:
  case 0x2d:
  case 0x86:
  case 0xef:
    FUN_100beedb4();
    uVar15 = extraout_x8_00;
    pbVar13 = extraout_x9_00;
  case 0x4d:
  case 0x54:
  case 0x93:
  case 0xaa:
    puVar10 = (undefined1 *)((ulong)pbVar13 | uVar15);
    break;
  case 7:
  case 0xd:
  case 0x2f:
  case 0x37:
  case 0x52:
  case 0x59:
  case 0x87:
  case 0xaf:
    goto switchD_100beb878_caseD_7;
  case 0xc:
  case 0x12:
  case 0x8c:
    goto switchD_100beb878_caseD_c;
  case 0x15:
  case 0x1b:
  case 0x42:
  case 0x49:
  case 0x8f:
  case 0xa2:
  case 0xa6:
  case 0xb8:
    goto switchD_100beb878_caseD_15;
  case 0x16:
  case 0x1c:
  case 0x36:
  case 0x3e:
  case 0x44:
  case 0x4b:
  case 0x90:
    goto switchD_100beb878_caseD_16;
  case 0x18:
  case 0x1e:
  case 0x35:
  case 0x3d:
  case 0x92:
    goto switchD_100beb878_caseD_18;
  case 0x1f:
  case 0x27:
    goto switchD_100beb878_caseD_1f;
  case 0x21:
  case 0x29:
  case 0x95:
    goto switchD_100beb878_caseD_21;
  case 0x23:
  case 0x2b:
  case 0x51:
  case 0x58:
  case 0x73:
  case 0x77:
  case 0x97:
  case 0xae:
  case 0xbe:
    goto switchD_100beb878_caseD_23;
  case 0x24:
  case 0x2c:
  case 0x98:
    goto switchD_100beb878_caseD_24;
  case 0x34:
  case 0x3c:
  case 0x45:
  case 0x4c:
  case 0x9b:
  case 0xb6:
  case 199:
    goto switchD_100beb878_caseD_34;
  case 0x3f:
    goto switchD_100beb878_caseD_3f;
  case 0x46:
  case 0x7f:
  case 0xc9:
    goto switchD_100beb878_caseD_46;
  case 0x53:
  case 0x5a:
  case 0x99:
  case 0xb0:
    goto switchD_100beb878_caseD_53;
  case 0x68:
  case 0x6e:
  case 0x71:
  case 0x75:
  case 0x7b:
  case 0xa1:
  case 0xa9:
  case 0xbb:
  case 0xbc:
  case 0xc2:
    goto switchD_100beb878_caseD_68;
  case 0x69:
  case 0x6f:
  case 0x9d:
    goto switchD_100beb878_caseD_69;
  case 0x6a:
  case 0x70:
  case 0x7c:
  case 0xc3:
    goto switchD_100beb878_caseD_6a;
  case 200:
    goto switchD_100beb878_caseD_c8;
  case 0xcb:
  case 0xfb:
    unaff_x30 = 0x100beb9cc;
    FUN_100beed04();
    goto switchD_100beb970_caseD_0;
  case 0xcc:
  case 0xd2:
  case 0xfc:
    goto switchD_100beb878_caseD_cc;
  case 0xcd:
  case 0xfd:
    goto switchD_100beb878_caseD_cd;
  case 0xce:
  case 0xdb:
  case 0xfe:
    goto switchD_100beb878_caseD_ce;
  case 0xcf:
  case 0xff:
    goto switchD_100beb878_caseD_cf;
  case 0xd0:
  case 0xdc:
    goto switchD_100beb878_caseD_d0;
  case 0xd1:
    goto switchD_100beb970_caseD_3f;
  case 0xd3:
  case 0xd6:
    goto switchD_100beb970_caseD_18;
  case 0xd4:
    goto switchD_100beb878_caseD_d4;
  case 0xd5:
    goto switchD_100beb878_caseD_d5;
  case 0xd7:
    goto switchD_100beb878_caseD_d7;
  case 0xd8:
  case 0xda:
    goto switchD_100beb878_caseD_d8;
  case 0xd9:
    goto switchD_100beb878_caseD_d9;
  case 0xe3:
switchD_100beb878_caseD_e3:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff00000000ffff | 0x656c75640000);
    goto switchD_100beb970_caseD_3f;
  case 0xeb:
    goto switchD_100beb878_caseD_eb;
  }
  goto switchD_100beb878_caseD_0;
switchD_100beb970_caseD_61:
  puVar5 = (undefined1 *)((ulong)puVar5 | 0x7369000000000000);
  unaff_x30 = 0x100beb9ac;
  FUN_100beed74();
  pcVar16 = (code *)(extraout_x9_01 | extraout_x8_01);
  goto switchD_100beb970_caseD_0;
switchD_100beb970_caseD_3a:
  pcVar16 = (code *)0xe900000000000064;
  goto switchD_100beb970_caseD_0;
switchD_100bebcb0_caseD_aa:
  pbVar13 = (byte *)((ulong)pbVar13 | 0xec00000000000000);
switchD_100bebcb0_caseD_a4:
  UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
  puVar10 = puVar11;
  if (!(bool)in_ZR) {
    puVar10 = (undefined1 *)0x6e6f69676572;
  }
code_r0x000100bebe14:
  if (!(bool)in_ZR) {
    pbVar13 = (byte *)UNRECOVERED_JUMPTABLE;
  }
LAB_100bebe20:
  if (puVar6 == puVar10 && pcVar16 == (code *)pbVar13) {
switchD_100bebcb0_caseD_ac:
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb44();
    unaff_x21 = puVar6;
  }
  goto switchD_100bebcb0_caseD_b0;
code_r0x000100bec190:
  puVar11 = (undefined1 *)((ulong)puVar11 | 0x687370610000);
code_r0x000100bec198:
  puVar11 = (undefined1 *)((ulong)puVar11 | 0x746f000000000000);
code_r0x000100bec19c:
  puVar6 = puVar5;
  pcVar16 = (code *)pbVar13;
  if (!(bool)in_ZR) {
    puVar6 = puVar11;
    pcVar16 = UNRECOVERED_JUMPTABLE;
  }
LAB_100bec1b0:
  if ((uVar8 & 0xff) == 0) {
LAB_100bec1f4:
    unaff_x20 = (code *)&DAT_e600000000000000;
  }
  else {
    in_ZR = (uVar8 & 0xff) == 1;
    puVar5 = (undefined1 *)0x7265747369676572;
    pbVar13 = (byte *)0xe900000000000073;
switchD_100bec0c4_caseD_bb:
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e800000000000000;
switchD_100bec0c4_caseD_ff:
    puVar11 = (undefined1 *)0x6e73;
code_r0x000100bec1dc:
    puVar11 = (undefined1 *)((ulong)puVar11 | 0x687370610000);
code_r0x000100bec1e4:
    puVar10 = puVar5;
    unaff_x20 = (code *)pbVar13;
    if (!(bool)in_ZR) {
      puVar10 = (undefined1 *)((ulong)puVar11 | 0x746f000000000000);
      unaff_x20 = UNRECOVERED_JUMPTABLE;
    }
switchD_100bebe90_caseD_e1:
  }
LAB_100bec1f8:
  in_ZR = false;
  if (puVar6 == puVar10) {
    in_ZR = pcVar16 == unaff_x20;
  }
code_r0x000100bec200:
  if ((bool)in_ZR) {
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb44();
switchD_100bec0c4_caseD_9d:
    unaff_x21 = puVar6;
code_r0x000100bec20c:
  }
  FUN_100b6f838();
  goto code_r0x000100bec218;
code_r0x000100bec060:
  puVar6 = (undefined1 *)(ulong)((uint)puVar6 & 0xffff | 0x79640000);
switchD_100bebe90_caseD_9f:
  goto LAB_100bec0ac;
switchD_100bebe90_caseD_a1:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x65760000);
code_r0x000100bec07c:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x6c00000000);
code_r0x000100bec080:
  goto LAB_100bec0ac;
LAB_100bec094:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff | 0x7974697200000000);
code_r0x000100bec09c:
code_r0x000100bec0a0:
code_r0x000100bec0a4:
code_r0x000100bec0a8:
  goto LAB_100bec0ac;
switchD_100bebcb0_caseD_b0:
  FUN_100b6f838();
  goto switchD_100bebcb0_caseD_ad;
switchD_100bebcb0_caseD_59:
  puVar10 = (undefined1 *)(ulong)((uint)puVar10 & 0xffff | 0x6f0000);
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_a:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x6d670000);
switchD_100bebcb0_caseD_1b:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x6e6500000000);
switchD_100bebcb0_caseD_b:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x74000000000000);
switchD_100bebcb0_caseD_28:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_1f:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x6572000000000000);
switchD_100bebcb0_caseD_65:
  unaff_x20 = (code *)0x7373;
switchD_100bebcb0_caseD_8:
  unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffffffff | 0xea00000000000000);
switchD_100bebcb0_caseD_18:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_f:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x72650000);
switchD_100bebcb0_caseD_43:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x616e00000000);
switchD_100bebcb0_caseD_d:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x656d000000000000);
switchD_100bebcb0_caseD_29:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_c4:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x6c00000000);
  goto switchD_100bebcb0_caseD_42;
switchD_100beb878_caseD_c8:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x6e69000000000000);
switchD_100beb878_caseD_24:
  uVar15 = 0xe900000000000063;
switchD_100beb878_caseD_53:
  unaff_x20 = (code *)(uVar15 | 8);
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_15:
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_18:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x7470000000000000);
switchD_100beb878_caseD_46:
  unaff_x20 = (code *)0x6f69;
switchD_100beb878_caseD_c:
  unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffff0000ffff | 0x6e0000);
switchD_100beb878_caseD_7:
  unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffffffff | 0xeb00000000000000);
switchD_100beb878_caseD_3f:
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_21:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x656800000000);
switchD_100beb878_caseD_68:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x6974000000000000);
switchD_100beb878_caseD_16:
  unaff_x20 = (code *)0x63;
switchD_100beb878_caseD_6a:
  unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffffffff | 0xe900000000000000);
switchD_100beb878_caseD_34:
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_eb:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x656c00000000);
switchD_100beb878_caseD_69:
  puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x64000000000000);
  goto switchD_100beb878_caseD_23;
code_r0x000100bec218:
  FUN_100b6f860();
  puVar6 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
code_r0x000100bec220:
  FUN_100b56e60(puVar6);
  return puVar6;
switchD_100bebcb0_caseD_ad:
  FUN_100b6f860();
  puVar6 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
switchD_100bebcb0_caseD_a5:
  FUN_100b56e60(puVar6);
  return puVar6;
code_r0x000100bec0c0:
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (long)puVar11 * 4;
switchD_100bec0c4_switchD:
                    /* WARNING: Could not recover jumptable at 0x000100bec0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar6;
code_r0x000100bec234:
  FUN_100beefb0();
  puVar10 = &DAT_7a69735f79646f62;
  UNRECOVERED_JUMPTABLE =
       (code *)(&UNK_100bec274 + (ulong)(&BYTE_100c9f922)[(ulong)puVar6 & 0xff] * 4);
code_r0x000100bec264:
                    /* WARNING: Could not recover jumptable at 0x000100bec270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar10);
  return puVar10;
switchD_100beb878_caseD_23:
switchD_100beb878_caseD_0:
  in_ZR = puVar5 == puVar10;
switchD_100beb878_caseD_1f:
  if ((bool)in_ZR && pcVar16 == unaff_x20) {
switchD_100beb7d0_caseD_d8:
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb44();
switchD_100beb7d0_caseD_ea:
    unaff_x21 = puVar5;
  }
switchD_100beb7d0_caseD_d2:
  FUN_100b6f838();
  FUN_100b6f860();
  puVar10 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
  FUN_100b56e60(puVar10);
  return puVar10;
switchD_100bebcb0_caseD_42:
switchD_100bebcb0_caseD_0:
  if (puVar6 == puVar10 && pcVar16 == unaff_x20) {
switchD_100bebcb0_caseD_ea:
    uVar8 = 1;
  }
  else {
    FUN_100beeb44();
    uVar8 = (uint)puVar6;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  puVar6 = (undefined1 *)(ulong)(uVar8 & 1);
switchD_100bebcb0_caseD_e8:
  FUN_100b56e60(puVar6);
  return puVar6;
switchD_100bec0c4_caseD_23:
  puVar10 = (undefined1 *)(ulong)((uint)puVar10 & 0xffff | 0x79640000);
switchD_100bec0c4_caseD_0:
  if (puVar6 == puVar10 && unaff_x20 == pcVar16) {
LAB_100bec130:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb6c();
  }
  FUN_100b6f860();
  FUN_100b6f838();
  unaff_x21 = puVar6;
code_r0x000100bec13c:
  puVar10 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
  FUN_100b56e60(puVar10);
  return puVar10;
switchD_100beb970_caseD_3f:
switchD_100beb970_caseD_0:
  unaff_x20 = (code *)&DAT_e500000000000000;
  puVar11 = (undefined1 *)((ulong)uVar8 & 0xff);
  pbVar13 = &switchD_100beb9e8::switchdataD_100c9f8e2;
  UNRECOVERED_JUMPTABLE =
       (code *)((ulong)(&switchD_100beb9e8::switchdataD_100c9f8e2)[(long)puVar11] * 4 + 0x100beb9ec)
  ;
  bVar3 = (bool)in_ZR;
  puVar6 = puVar5;
  switch(puVar11) {
  case (undefined1 *)0x0:
  case (undefined1 *)0x22:
  case (undefined1 *)0x2a:
  case (undefined1 *)0x45:
  case (undefined1 *)0x4c:
  case (undefined1 *)0x7a:
  case (undefined1 *)0xa2:
    break;
  default:
    FUN_100beed64();
    break;
  case (undefined1 *)0x2:
  case (undefined1 *)0x25:
  case (undefined1 *)0x2d:
  case (undefined1 *)0x75:
  case (undefined1 *)0x7c:
  case (undefined1 *)0xb3:
switchD_100beb878_caseD_cc:
    puVar10 = (undefined1 *)0x656d;
  case (undefined1 *)0x42:
  case (undefined1 *)0x49:
  case (undefined1 *)0x5a:
  case (undefined1 *)0x60:
  case (undefined1 *)0x93:
  case (undefined1 *)0x9b:
  case (undefined1 *)0x9f:
  case (undefined1 *)0xac:
  case (undefined1 *)0xb7:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x68630000);
switchD_100beb9e8_caseD_14:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x6e6100000000);
switchD_100beb878_caseD_d5:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x7369000000000000);
switchD_100beb878_caseD_d8:
    FUN_100beed74();
    puVar11 = extraout_x8_02;
    pbVar13 = extraout_x9_02;
switchD_100beb9e8_caseD_5d:
    unaff_x20 = (code *)((ulong)pbVar13 | (ulong)puVar11);
switchD_100beb9e8_caseD_27:
    break;
  case (undefined1 *)0x3:
  case (undefined1 *)0x43:
  case (undefined1 *)0x4a:
  case (undefined1 *)0x71:
  case (undefined1 *)0x76:
  case (undefined1 *)0x7d:
  case (undefined1 *)0xa0:
  case (undefined1 *)0xb8:
switchD_100beb878_caseD_d9:
    unaff_x20 = (code *)&DAT_e600000000000000;
  case (undefined1 *)0x15:
  case (undefined1 *)0x1d:
  case (undefined1 *)0x58:
  case (undefined1 *)0x5e:
  case (undefined1 *)0x89:
  case (undefined1 *)0x96:
    puVar10 = (undefined1 *)0x6f6d;
switchD_100beb878_caseD_cd:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x75640000);
switchD_100beb9e8_caseD_b:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x656c00000000);
switchD_100beb9e8_caseD_39:
    break;
  case (undefined1 *)0x4:
  case (undefined1 *)0xa:
  case (undefined1 *)0x10:
  case (undefined1 *)0x26:
  case (undefined1 *)0x2e:
  case (undefined1 *)0x36:
  case (undefined1 *)0x3d:
  case (undefined1 *)0x7e:
  case (undefined1 *)0x84:
  case (undefined1 *)0x92:
  case (undefined1 *)0x9a:
  case (undefined1 *)0xad:
    puVar10 = (undefined1 *)0x6874;
  case (undefined1 *)0xde:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x65720000);
switchD_100beb970_caseD_79:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x646100000000);
switchD_100beb970_caseD_18:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x695f000000000000);
switchD_100beb878_caseD_d7:
    unaff_x20 = (code *)0x64;
switchD_100beb878_caseD_d4:
    unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffffffff | 0xe900000000000000);
switchD_100beb9e8_caseD_8:
    break;
  case (undefined1 *)0x5:
  case (undefined1 *)0x7f:
    FUN_100beec94();
    break;
  case (undefined1 *)0x6:
  case (undefined1 *)0x19:
  case (undefined1 *)0x21:
  case (undefined1 *)0x6c:
  case (undefined1 *)0x78:
  case (undefined1 *)0x80:
  case (undefined1 *)0x8d:
    goto switchD_100beb878_caseD_ce;
  case (undefined1 *)0x8:
  case (undefined1 *)0xe:
  case (undefined1 *)0x35:
  case (undefined1 *)0x3c:
  case (undefined1 *)0x82:
  case (undefined1 *)0x95:
  case (undefined1 *)0x99:
  case (undefined1 *)0xab:
    goto switchD_100beb9e8_caseD_8;
  case (undefined1 *)0x9:
  case (undefined1 *)0xf:
  case (undefined1 *)0x29:
  case (undefined1 *)0x31:
  case (undefined1 *)0x37:
  case (undefined1 *)0x3e:
  case (undefined1 *)0x83:
    goto switchD_100beb878_caseD_d8;
  case (undefined1 *)0xb:
  case (undefined1 *)0x11:
  case (undefined1 *)0x28:
  case (undefined1 *)0x30:
  case (undefined1 *)0x85:
    goto switchD_100beb9e8_caseD_b;
  case (undefined1 *)0xc:
    goto switchD_100beb9e8_caseD_c;
  case (undefined1 *)0x12:
  case (undefined1 *)0x1a:
    goto switchD_100beb9e8_caseD_12;
  case (undefined1 *)0x14:
  case (undefined1 *)0x1c:
  case (undefined1 *)0x88:
    goto switchD_100beb9e8_caseD_14;
  case (undefined1 *)0x16:
  case (undefined1 *)0x1e:
  case (undefined1 *)0x44:
  case (undefined1 *)0x4b:
  case (undefined1 *)0x66:
  case (undefined1 *)0x6a:
  case (undefined1 *)0x8a:
  case (undefined1 *)0xa1:
  case (undefined1 *)0xb1:
    goto switchD_100beb970_caseD_18;
  case (undefined1 *)0x17:
  case (undefined1 *)0x1f:
  case (undefined1 *)0x8b:
    goto switchD_100beb9e8_caseD_17;
  case (undefined1 *)0x18:
  case (undefined1 *)0x20:
  case (undefined1 *)0x79:
  case (undefined1 *)0xe2:
    goto switchD_100beb9e8_caseD_18;
  case (undefined1 *)0x24:
  case (undefined1 *)0x2c:
  case (undefined1 *)0x67:
  case (undefined1 *)0x6b:
  case (undefined1 *)0xb2:
    goto switchD_100beb878_caseD_d4;
  case (undefined1 *)0x27:
  case (undefined1 *)0x2f:
  case (undefined1 *)0x38:
  case (undefined1 *)0x3f:
  case (undefined1 *)0x8e:
  case (undefined1 *)0xa9:
  case (undefined1 *)0xba:
    goto switchD_100beb9e8_caseD_27;
  case (undefined1 *)0x32:
    goto switchD_100beb9e8_caseD_32;
  case (undefined1 *)0x34:
  case (undefined1 *)0x3b:
  case (undefined1 *)0x70:
  case (undefined1 *)0x77:
  case (undefined1 *)0x91:
  case (undefined1 *)0x98:
    goto switchD_100beb878_caseD_d7;
  case (undefined1 *)0x39:
  case (undefined1 *)0x72:
  case (undefined1 *)0xbc:
    goto switchD_100beb9e8_caseD_39;
  case (undefined1 *)0x40:
  case (undefined1 *)0x47:
  case (undefined1 *)0x86:
  case (undefined1 *)0x9d:
    goto switchD_100beb9e8_caseD_40;
  case (undefined1 *)0x46:
  case (undefined1 *)0x4d:
  case (undefined1 *)0x8c:
  case (undefined1 *)0xa3:
    goto switchD_100beb9e8_caseD_46;
  case (undefined1 *)0x5b:
  case (undefined1 *)0x61:
  case (undefined1 *)0x64:
  case (undefined1 *)0x68:
  case (undefined1 *)0x6e:
  case (undefined1 *)0x94:
  case (undefined1 *)0x9c:
  case (undefined1 *)0xae:
  case (undefined1 *)0xaf:
  case (undefined1 *)0xb5:
    goto switchD_100beb878_caseD_d5;
  case (undefined1 *)0x5c:
  case (undefined1 *)0x62:
  case (undefined1 *)0x90:
    goto switchD_100beb970_caseD_79;
  case (undefined1 *)0x5d:
  case (undefined1 *)0x63:
  case (undefined1 *)0x6f:
  case (undefined1 *)0xb6:
    goto switchD_100beb9e8_caseD_5d;
  case (undefined1 *)0x73:
    puVar2 = &stack0xffffffffffffffa0;
switchD_100beb9e8_caseD_12:
    *(undefined1 **)(puVar2 + 0x10) = &DAT_e500000000000000;
    *(code **)(puVar2 + 0x18) = pcVar16;
    *(undefined1 **)(puVar2 + 0x20) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
    puVar1 = puVar2 + 0x20;
    puVar6 = &DAT_64695f6775626564;
    pcVar16 = (code *)&DAT_e800000000000000;
    puVar11 = (undefined1 *)((ulong)puVar5 & 0xff);
    pbVar13 = &BYTE_100c9f8e8;
    uVar15 = (ulong)(&BYTE_100c9f8e8)[(long)puVar11];
    UNRECOVERED_JUMPTABLE = (code *)(uVar15 * 4 + 0x100bebab8);
    puVar10 = puVar6;
    pcVar12 = (char *)pbVar13;
    switch(puVar11) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x13:
    case (undefined1 *)0x1b:
    case (undefined1 *)0x66:
    case (undefined1 *)0x72:
    case (undefined1 *)0x7a:
    case (undefined1 *)0x87:
      goto switchD_100beb970_caseD_d1;
    default:
      FUN_100beed94();
      goto switchD_100beb970_caseD_d1;
    case (undefined1 *)0x2:
    case (undefined1 *)0x8:
    case (undefined1 *)0x2f:
    case (undefined1 *)0x36:
    case (undefined1 *)0x7c:
    case (undefined1 *)0x8f:
    case (undefined1 *)0x93:
    case (undefined1 *)0xa5:
      FUN_100beed54();
    case (undefined1 *)0x1f:
    case (undefined1 *)0x27:
    case (undefined1 *)0x6f:
    case (undefined1 *)0x76:
    case (undefined1 *)0xad:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x6973000000000000);
LAB_100bebae0:
code_r0x000100bebae4:
code_r0x000100bebae8:
      goto switchD_100beb970_caseD_d1;
    case (undefined1 *)0x3:
    case (undefined1 *)0x9:
    case (undefined1 *)0x23:
    case (undefined1 *)0x2b:
    case (undefined1 *)0x31:
    case (undefined1 *)0x38:
    case (undefined1 *)0x7d:
      FUN_100beed54();
    case (undefined1 *)0x57:
    case (undefined1 *)0x5d:
    case (undefined1 *)0x69:
    case (undefined1 *)0xb0:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x6461000000000000);
code_r0x000100bebaf4:
switchD_100beb970_caseD_cc:
switchD_100beb970_caseD_d0:
      goto switchD_100beb970_caseD_d1;
    case (undefined1 *)0x4:
    case (undefined1 *)0xa:
    case (undefined1 *)0x20:
    case (undefined1 *)0x28:
    case (undefined1 *)0x30:
    case (undefined1 *)0x37:
    case (undefined1 *)0x78:
    case (undefined1 *)0x7e:
    case (undefined1 *)0x8c:
    case (undefined1 *)0x94:
    case (undefined1 *)0xa7:
      FUN_100beed54();
    case (undefined1 *)0xd8:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x6d76000000000000);
code_r0x000100bebac8:
code_r0x000100bebacc:
code_r0x000100bebad0:
code_r0x000100bebad4:
switchD_100beb970_caseD_d1:
code_r0x000100bebb1c:
      puVar11 = (undefined1 *)((ulong)uVar8 & 0xff);
      pcVar12 = "SentryTypedSwizzle";
switchD_100beb970_caseD_d2:
      pbVar13 = (byte *)(pcVar12 + 0x8ee);
code_r0x000100bebb28:
      UNRECOVERED_JUMPTABLE = (code *)0x100bebb38;
switchD_100beb970_caseD_c6:
      uVar15 = (ulong)pbVar13[(long)puVar11];
switchD_100beb970_caseD_fb:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + uVar15 * 4;
switchD_100beb9e8_caseD_c4:
                    /* WARNING: Could not recover jumptable at 0x000100bebb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return puVar6;
    case (undefined1 *)0x5:
    case (undefined1 *)0xb:
    case (undefined1 *)0x22:
    case (undefined1 *)0x2a:
    case (undefined1 *)0x7f:
      puVar6 = (undefined1 *)0x6f63;
    case (undefined1 *)0x33:
    case (undefined1 *)0x6c:
    case (undefined1 *)0xb6:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x65640000);
code_r0x000100bebb0c:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x665f00000000);
code_r0x000100bebb10:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x6c69000000000000);
switchD_100beb970_caseD_ce:
      FUN_100beefb0(puVar6);
      goto switchD_100beb970_caseD_d1;
    case (undefined1 *)0x6:
      goto code_r0x000100bebb1c;
    case (undefined1 *)0xc:
    case (undefined1 *)0x14:
      goto switchD_100beb970_caseD_c7;
    case (undefined1 *)0xe:
    case (undefined1 *)0x16:
    case (undefined1 *)0x82:
      goto code_r0x000100bebae4;
    case (undefined1 *)0xf:
    case (undefined1 *)0x17:
    case (undefined1 *)0x52:
    case (undefined1 *)0x58:
    case (undefined1 *)0x83:
    case (undefined1 *)0x90:
      goto switchD_100beb970_caseD_d0;
    case (undefined1 *)0x10:
    case (undefined1 *)0x18:
    case (undefined1 *)0x3e:
    case (undefined1 *)0x45:
    case (undefined1 *)0x60:
    case (undefined1 *)0x64:
    case (undefined1 *)0x84:
    case (undefined1 *)0x9b:
    case (undefined1 *)0xab:
      goto code_r0x000100bebacc;
    case (undefined1 *)0x11:
    case (undefined1 *)0x19:
    case (undefined1 *)0x85:
      goto code_r0x000100bebb28;
    case (undefined1 *)0x12:
    case (undefined1 *)0x1a:
    case (undefined1 *)0x73:
    case (undefined1 *)0xdc:
switchD_100beb9e8_caseD_be:
      FUN_100beed64();
    case (undefined1 *)0x3a:
    case (undefined1 *)0x41:
    case (undefined1 *)0x80:
    case (undefined1 *)0x97:
      goto switchD_100beb9e8_caseD_cc;
    case (undefined1 *)0x1c:
    case (undefined1 *)0x24:
    case (undefined1 *)0x3f:
    case (undefined1 *)0x46:
    case (undefined1 *)0x74:
    case (undefined1 *)0x9c:
      goto code_r0x000100bebb10;
    case (undefined1 *)0x1e:
    case (undefined1 *)0x26:
    case (undefined1 *)0x61:
    case (undefined1 *)0x65:
    case (undefined1 *)0xac:
      goto code_r0x000100bebad4;
    case (undefined1 *)0x21:
    case (undefined1 *)0x29:
    case (undefined1 *)0x32:
    case (undefined1 *)0x39:
    case (undefined1 *)0x88:
    case (undefined1 *)0xa3:
    case (undefined1 *)0xb4:
      goto code_r0x000100bebaf4;
    case (undefined1 *)0x2c:
      goto switchD_100beb970_caseD_ce;
    case (undefined1 *)0x2e:
    case (undefined1 *)0x35:
    case (undefined1 *)0x6a:
    case (undefined1 *)0x71:
    case (undefined1 *)0x8b:
    case (undefined1 *)0x92:
      goto code_r0x000100bebad0;
    case (undefined1 *)0x3c:
    case (undefined1 *)0x43:
    case (undefined1 *)0x54:
    case (undefined1 *)0x5a:
    case (undefined1 *)0x8d:
    case (undefined1 *)0x95:
    case (undefined1 *)0x99:
    case (undefined1 *)0xa6:
    case (undefined1 *)0xb1:
      goto LAB_100bebae0;
    case (undefined1 *)0x3d:
    case (undefined1 *)0x44:
    case (undefined1 *)0x6b:
    case (undefined1 *)0x70:
    case (undefined1 *)0x77:
    case (undefined1 *)0x9a:
    case (undefined1 *)0xb2:
      goto switchD_100beb970_caseD_cc;
    case (undefined1 *)0x40:
    case (undefined1 *)0x47:
    case (undefined1 *)0x86:
    case (undefined1 *)0x9d:
      goto switchD_100beb970_caseD_fb;
    case (undefined1 *)0x55:
    case (undefined1 *)0x5b:
    case (undefined1 *)0x5e:
    case (undefined1 *)0x62:
    case (undefined1 *)0x68:
    case (undefined1 *)0x8e:
    case (undefined1 *)0x96:
    case (undefined1 *)0xa8:
    case (undefined1 *)0xa9:
    case (undefined1 *)0xaf:
      goto code_r0x000100bebae8;
    case (undefined1 *)0x56:
    case (undefined1 *)0x5c:
    case (undefined1 *)0x8a:
      goto code_r0x000100bebac8;
    case (undefined1 *)0x6d:
      FUN_100beedd4();
switchD_100beb970_caseD_c7:
      puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x6d76000000000000);
      unaff_x20 = (code *)0xec00000072646461;
      goto switchD_100beb9e8_caseD_cc;
    case (undefined1 *)0x79:
      goto code_r0x000100bebb0c;
    case (undefined1 *)0xb5:
      goto switchD_100beb970_caseD_d2;
    case (undefined1 *)0xb8:
    case (undefined1 *)0xe8:
      pcVar16 = (code *)&DAT_e500000000000000;
      puVar6 = (undefined1 *)0x6c69616d65;
      break;
    case (undefined1 *)0xb9:
    case (undefined1 *)0xbf:
    case (undefined1 *)0xe9:
    case (undefined1 *)0xf2:
      puVar6 = (undefined1 *)0x65726464615f6564;
    case (undefined1 *)0xc2:
      pcVar16 = (code *)0x7373;
code_r0x000100bebc5c:
      pcVar16 = (code *)((ulong)pcVar16 & 0xffffffffffff | 0xea00000000000000);
      break;
    case (undefined1 *)0xba:
    case (undefined1 *)0xea:
    case (undefined1 *)0xf0:
    case (undefined1 *)0xf1:
      goto code_r0x000100bebc70;
    case (undefined1 *)0xbb:
    case (undefined1 *)0xc8:
    case (undefined1 *)0xeb:
    case (undefined1 *)0xf4:
    case (undefined1 *)0xf8:
      puVar6 = (undefined1 *)0x6f6567;
      break;
    case (undefined1 *)0xbc:
    case (undefined1 *)0xec:
      goto code_r0x000100bebc80;
    case (undefined1 *)0xbd:
    case (undefined1 *)0xc9:
    case (undefined1 *)0xed:
    case (undefined1 *)0xf9:
      goto code_r0x000100bebc9c;
    case (undefined1 *)0xbe:
      goto code_r0x000100bebc00;
    case (undefined1 *)0xc0:
    case (undefined1 *)0xc3:
      puVar6 = (undefined1 *)0x6469616e75626564;
    case (undefined1 *)0xc4:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x656d000000000000);
code_r0x000100bebc44:
      break;
    case (undefined1 *)0xc1:
    case (undefined1 *)0xf3:
      goto code_r0x000100bebc44;
    case (undefined1 *)0xc5:
    case (undefined1 *)0xc7:
    case (undefined1 *)0xf5:
    case (undefined1 *)0xf7:
      goto code_r0x000100bebc5c;
    case (undefined1 *)0xc6:
      puVar6 = (undefined1 *)0x61746164;
code_r0x000100bebc70:
      break;
    case (undefined1 *)0xd0:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(&BYTE_100c9f8e8)[(long)puVar11] * 4;
code_r0x000100bebc00:
                    /* WARNING: Could not recover jumptable at 0x000100bebc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return puVar6;
    case (undefined1 *)0xee:
      goto switchD_100beb9e8_caseD_fc;
    case (undefined1 *)0xef:
      pcVar16 = (code *)&DAT_e400000000000000;
      puVar6 = (undefined1 *)0x656d616e;
code_r0x000100bebc80:
      break;
    case (undefined1 *)0xf6:
      break;
    case (undefined1 *)0xfc:
      FUN_100beedd4();
switchD_100beb9e8_caseD_c6:
      puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x6461000000000000);
switchD_100beb9e8_caseD_ca:
      puVar11 = (undefined1 *)0x657a;
switchD_100beb9e8_caseD_c7:
      unaff_x20 = (code *)(((ulong)puVar11 | 0xea00000000000000) + 0xcea);
switchD_100beb9e8_caseD_bf:
      goto switchD_100beb9e8_caseD_cc;
    case (undefined1 *)0xfd:
      goto code_r0x000100bebe14;
    case (undefined1 *)0xfe:
      puVar10 = (undefined1 *)0x69735f6775626564;
      unaff_x20 = (code *)0xea0000000000657a;
switchD_100beb9e8_caseD_cc:
      in_ZR = false;
      if (puVar6 == puVar10) {
        in_ZR = pcVar16 == unaff_x20;
      }
switchD_100beb9e8_caseD_c0:
      if ((bool)in_ZR) {
switchD_100beb9e8_caseD_c2:
        puVar6 = (undefined1 *)0x1;
      }
      else {
switchD_100beb9e8_caseD_f5:
        FUN_100beeb44();
      }
      FUN_100b6f838();
      unaff_x21 = puVar6;
switchD_100beb9e8_caseD_c1:
      FUN_100b6f860();
      puVar6 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
switchD_100beb9e8_caseD_fc:
      FUN_100b56e60();
      return puVar6;
    }
    unaff_x20 = (code *)&SUB_e200000000000000;
    puVar10 = &SUB_00006469;
    puVar11 = (undefined1 *)((ulong)uVar8 & 0xff);
code_r0x000100bebc9c:
    pbVar13 = &switchD_100bebcb0::switchdataD_100c9f8fc;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(ulong)(&switchD_100bebcb0::switchdataD_100c9f8fc)[(long)puVar11] * 4 +
                 0x100bebcb4);
    switch(puVar11) {
    case (undefined1 *)0x0:
      goto switchD_100bebcb0_caseD_0;
    default:
      unaff_x20 = (code *)&DAT_e500000000000000;
      puVar10 = (undefined1 *)0x6d65;
    case (undefined1 *)0xc:
    case (undefined1 *)0x14:
    case (undefined1 *)0x1c:
    case (undefined1 *)0x23:
    case (undefined1 *)0x64:
    case (undefined1 *)0x6a:
    case (undefined1 *)0x78:
    case (undefined1 *)0x80:
    case (undefined1 *)0x93:
      puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x69610000);
      goto switchD_100bebcb0_caseD_c4;
    case (undefined1 *)0x2:
    case (undefined1 *)0x6e:
      unaff_x20 = (code *)&DAT_e800000000000000;
    case (undefined1 *)0x41:
    case (undefined1 *)0x47:
    case (undefined1 *)0x4a:
    case (undefined1 *)0x4e:
    case (undefined1 *)0x54:
    case (undefined1 *)0x7a:
    case (undefined1 *)0x82:
    case (undefined1 *)0x94:
    case (undefined1 *)0x95:
    case (undefined1 *)0x9b:
      puVar10 = (undefined1 *)0x7375;
      goto switchD_100bebcb0_caseD_f;
    case (undefined1 *)0x3:
    case (undefined1 *)0x3e:
    case (undefined1 *)0x44:
    case (undefined1 *)0x6f:
    case (undefined1 *)0x7c:
      puVar10 = (undefined1 *)0x615f7069;
    case (undefined1 *)0xe:
    case (undefined1 *)0x16:
    case (undefined1 *)0x6b:
      puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x646400000000);
      goto switchD_100bebcb0_caseD_1f;
    case (undefined1 *)0x4:
    case (undefined1 *)0x2a:
    case (undefined1 *)0x31:
    case (undefined1 *)0x4c:
    case (undefined1 *)0x50:
    case (undefined1 *)0x70:
    case (undefined1 *)0x87:
    case (undefined1 *)0x97:
      unaff_x20 = (code *)&DAT_e700000000000000;
    case (undefined1 *)0x1a:
    case (undefined1 *)0x21:
    case (undefined1 *)0x56:
    case (undefined1 *)0x5d:
    case (undefined1 *)0x77:
    case (undefined1 *)0x7e:
      puVar10 = (undefined1 *)0x6573;
      goto switchD_100bebcb0_caseD_a;
    case (undefined1 *)0x5:
    case (undefined1 *)0x71:
      unaff_x20 = (code *)&DAT_e400000000000000;
      puVar10 = (undefined1 *)0x616e;
    case (undefined1 *)0x2c:
    case (undefined1 *)0x33:
    case (undefined1 *)0x72:
    case (undefined1 *)0x89:
      puVar10 = (undefined1 *)(ulong)((uint)puVar10 & 0xffff | 0x656d0000);
      goto switchD_100bebcb0_caseD_0;
    case (undefined1 *)0x6:
    case (undefined1 *)0x5f:
    case (undefined1 *)0xc8:
      unaff_x20 = (code *)0xe300000000000000;
    case (undefined1 *)0x26:
    case (undefined1 *)0x2d:
    case (undefined1 *)0x6c:
    case (undefined1 *)0x83:
    case (undefined1 *)0xfc:
      puVar10 = (undefined1 *)0x6567;
      goto switchD_100bebcb0_caseD_59;
    case (undefined1 *)0x7:
    case (undefined1 *)0x52:
    case (undefined1 *)0x5e:
    case (undefined1 *)0x66:
    case (undefined1 *)0x73:
      unaff_x20 = (code *)&DAT_e400000000000000;
      puVar10 = (undefined1 *)0x61746164;
    case (undefined1 *)0xa1:
      goto switchD_100bebcb0_caseD_0;
    case (undefined1 *)0x8:
    case (undefined1 *)0x10:
    case (undefined1 *)0x2b:
    case (undefined1 *)0x32:
    case (undefined1 *)0x60:
    case (undefined1 *)0x88:
      goto switchD_100bebcb0_caseD_8;
    case (undefined1 *)0xa:
    case (undefined1 *)0x12:
    case (undefined1 *)0x4d:
    case (undefined1 *)0x51:
    case (undefined1 *)0x98:
      goto switchD_100bebcb0_caseD_a;
    case (undefined1 *)0xb:
    case (undefined1 *)0x13:
    case (undefined1 *)0x5b:
    case (undefined1 *)0x62:
    case (undefined1 *)0x99:
      goto switchD_100bebcb0_caseD_b;
    case (undefined1 *)0xd:
    case (undefined1 *)0x15:
    case (undefined1 *)0x1e:
    case (undefined1 *)0x25:
    case (undefined1 *)0x74:
    case (undefined1 *)0x8f:
    case (undefined1 *)0xa0:
      goto switchD_100bebcb0_caseD_d;
    case (undefined1 *)0xf:
    case (undefined1 *)0x17:
    case (undefined1 *)0x1d:
    case (undefined1 *)0x24:
    case (undefined1 *)0x69:
      goto switchD_100bebcb0_caseD_f;
    case (undefined1 *)0x18:
      goto switchD_100bebcb0_caseD_18;
    case (undefined1 *)0x1b:
    case (undefined1 *)0x22:
    case (undefined1 *)0x68:
    case (undefined1 *)0x7b:
    case (undefined1 *)0x7f:
    case (undefined1 *)0x91:
      goto switchD_100bebcb0_caseD_1b;
    case (undefined1 *)0x1f:
    case (undefined1 *)0x58:
    case (undefined1 *)0xa2:
    case (undefined1 *)0xed:
      goto switchD_100bebcb0_caseD_1f;
    case (undefined1 *)0x28:
    case (undefined1 *)0x2f:
    case (undefined1 *)0x40:
    case (undefined1 *)0x46:
    case (undefined1 *)0x79:
    case (undefined1 *)0x81:
    case (undefined1 *)0x85:
    case (undefined1 *)0x92:
    case (undefined1 *)0x9d:
      goto switchD_100bebcb0_caseD_28;
    case (undefined1 *)0x29:
    case (undefined1 *)0x30:
    case (undefined1 *)0x57:
    case (undefined1 *)0x5c:
    case (undefined1 *)0x63:
    case (undefined1 *)0x86:
    case (undefined1 *)0x9e:
      goto switchD_100bebcb0_caseD_29;
    case (undefined1 *)0x42:
    case (undefined1 *)0x48:
    case (undefined1 *)0x76:
      goto switchD_100bebcb0_caseD_42;
    case (undefined1 *)0x43:
    case (undefined1 *)0x49:
    case (undefined1 *)0x55:
    case (undefined1 *)0x9c:
      goto switchD_100bebcb0_caseD_43;
    case (undefined1 *)0x59:
      goto switchD_100bebcb0_caseD_59;
    case (undefined1 *)0x65:
      goto switchD_100bebcb0_caseD_65;
    case (undefined1 *)0xa4:
    case (undefined1 *)0xd4:
      goto switchD_100bebcb0_caseD_a4;
    case (undefined1 *)0xa5:
    case (undefined1 *)0xab:
    case (undefined1 *)0xd5:
    case (undefined1 *)0xde:
      goto switchD_100bebcb0_caseD_a5;
    case (undefined1 *)0xa6:
    case (undefined1 *)0xd6:
    case (undefined1 *)0xdc:
    case (undefined1 *)0xdd:
      goto switchD_100bebcb0_caseD_a6;
    case (undefined1 *)0xa7:
    case (undefined1 *)0xb4:
    case (undefined1 *)0xd7:
    case (undefined1 *)0xe0:
    case (undefined1 *)0xe4:
      goto switchD_100bebcb0_caseD_a7;
    case (undefined1 *)0xa8:
    case (undefined1 *)0xd8:
      goto switchD_100bebcb0_caseD_a8;
    case (undefined1 *)0xa9:
    case (undefined1 *)0xb5:
    case (undefined1 *)0xd9:
    case (undefined1 *)0xe5:
      puVar5 = (undefined1 *)((ulong)uVar8 & 0xff);
      pbVar13 = &BYTE_100c9f90c;
      puVar11 = (undefined1 *)(ulong)(&BYTE_100c9f90c)[(long)puVar5];
      UNRECOVERED_JUMPTABLE = (code *)(&UNK_100bebf08 + (long)puVar11 * 4);
      switch(puVar5) {
      case (undefined1 *)0x0:
      case (undefined1 *)0x1b:
      case (undefined1 *)0x22:
      case (undefined1 *)0x50:
      case (undefined1 *)0x78:
        break;
      default:
        FUN_100beeea4();
        break;
      case (undefined1 *)0x2:
      case (undefined1 *)0x3d:
      case (undefined1 *)0x41:
      case (undefined1 *)0x88:
      case (undefined1 *)0xf2:
        FUN_100beee74();
      case (undefined1 *)0xb:
      case (undefined1 *)0x12:
      case (undefined1 *)0x58:
      case (undefined1 *)0x6b:
      case (undefined1 *)0x6f:
      case (undefined1 *)0x81:
        break;
      case (undefined1 *)0x3:
      case (undefined1 *)0x4b:
      case (undefined1 *)0x52:
      case (undefined1 *)0x89:
        pcVar16 = (code *)&DAT_e400000000000000;
      case (undefined1 *)0x18:
      case (undefined1 *)0x1f:
      case (undefined1 *)0x30:
      case (undefined1 *)0x36:
      case (undefined1 *)0x69:
      case (undefined1 *)0x71:
      case (undefined1 *)0x75:
      case (undefined1 *)0x82:
      case (undefined1 *)0x8d:
        puVar10 = (undefined1 *)0x616e;
LAB_100bebf34:
        puVar10 = (undefined1 *)(ulong)((uint)puVar10 & 0xffff | 0x656d0000);
switchD_100bebe90_caseD_e2:
        break;
      case (undefined1 *)0x4:
      case (undefined1 *)0xc:
      case (undefined1 *)0x13:
      case (undefined1 *)0x54:
      case (undefined1 *)0x5a:
      case (undefined1 *)0x68:
      case (undefined1 *)0x70:
      case (undefined1 *)0x83:
        pcVar16 = (code *)&DAT_e500000000000000;
      case (undefined1 *)0xb4:
      case (undefined1 *)0xde:
      case (undefined1 *)0xe6:
      case (undefined1 *)0xe8:
        puVar10 = (undefined1 *)0x6176;
switchD_100bebe90_caseD_1e:
        puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffff0000ffff | 0x756c0000);
switchD_100bebe90_caseD_51:
        puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x6500000000);
code_r0x000100bebf20:
        break;
      case (undefined1 *)0x5:
      case (undefined1 *)0xe:
      case (undefined1 *)0x15:
      case (undefined1 *)0x64:
      case (undefined1 *)0x7f:
      case (undefined1 *)0x90:
        pcVar16 = (code *)&DAT_e400000000000000;
      case (undefined1 *)0x19:
      case (undefined1 *)0x20:
      case (undefined1 *)0x47:
      case (undefined1 *)0x4c:
      case (undefined1 *)0x53:
      case (undefined1 *)0x76:
      case (undefined1 *)0x8e:
        puVar10 = (undefined1 *)0x7974;
code_r0x000100bebf4c:
        puVar10 = (undefined1 *)(ulong)((uint)puVar10 & 0xffff | 0x65700000);
        break;
      case (undefined1 *)0x6:
      case (undefined1 *)0x5b:
        goto switchD_100bebcb0_caseD_ec;
      case (undefined1 *)0x7:
      case (undefined1 *)0xd:
      case (undefined1 *)0x14:
      case (undefined1 *)0x59:
        FUN_100beec78();
      case (undefined1 *)0x33:
      case (undefined1 *)0x39:
      case (undefined1 *)0x45:
      case (undefined1 *)0x8c:
        break;
      case (undefined1 *)0x8:
        goto code_r0x000100bebf64;
      case (undefined1 *)0xa:
      case (undefined1 *)0x11:
      case (undefined1 *)0x46:
      case (undefined1 *)0x4d:
      case (undefined1 *)0x67:
      case (undefined1 *)0x6e:
        goto code_r0x000100bebf20;
      case (undefined1 *)0xf:
      case (undefined1 *)0x48:
      case (undefined1 *)0x92:
      case (undefined1 *)0xdd:
        goto code_r0x000100bebf58;
      case (undefined1 *)0x16:
      case (undefined1 *)0x1d:
      case (undefined1 *)0x5c:
      case (undefined1 *)0x73:
      case (undefined1 *)0xec:
      case (undefined1 *)0xf4:
      case (undefined1 *)0xfc:
        goto code_r0x000100bebf8c;
      case (undefined1 *)0x1a:
      case (undefined1 *)0x21:
      case (undefined1 *)0x3c:
      case (undefined1 *)0x40:
      case (undefined1 *)0x60:
      case (undefined1 *)0x77:
      case (undefined1 *)0x87:
        goto switchD_100bebe90_caseD_51;
      case (undefined1 *)0x1c:
      case (undefined1 *)0x23:
      case (undefined1 *)0x62:
      case (undefined1 *)0x79:
        goto code_r0x000100bebf80;
      case (undefined1 *)0x2e:
      case (undefined1 *)0x34:
      case (undefined1 *)0x5f:
      case (undefined1 *)0x6c:
        goto code_r0x000100bebf4c;
      case (undefined1 *)0x31:
      case (undefined1 *)0x37:
      case (undefined1 *)0x3a:
      case (undefined1 *)0x3e:
      case (undefined1 *)0x44:
      case (undefined1 *)0x6a:
      case (undefined1 *)0x72:
      case (undefined1 *)0x84:
      case (undefined1 *)0x85:
      case (undefined1 *)0x8b:
        goto switchD_100bebe90_caseD_e2;
      case (undefined1 *)0x32:
      case (undefined1 *)0x38:
      case (undefined1 *)0x66:
        goto switchD_100bebe90_caseD_1e;
      case (undefined1 *)0x42:
      case (undefined1 *)0x4e:
      case (undefined1 *)0x56:
      case (undefined1 *)0x63:
      case (undefined1 *)0xf8:
        goto code_r0x000100bebf68;
      case (undefined1 *)0x49:
        *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
        *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
        *(code **)(puVar2 + -0x20) = unaff_x20;
        *(code **)(puVar2 + -0x18) = pcVar16;
        *(undefined1 **)(puVar2 + -0x10) = puVar1;
        *(undefined8 *)(puVar2 + -8) = unaff_x30;
        *(undefined1 **)(puVar2 + -0x40) = puVar6;
        *(ulong *)(puVar2 + -0x38) = CONCAT44(uVar9,uVar8);
        *(undefined1 **)(puVar2 + -0x50) = puVar10;
        *(undefined8 *)(puVar2 + -0x48) = param_4;
      case (undefined1 *)0xda:
      case (undefined1 *)0xee:
      case (undefined1 *)0xf6:
      case (undefined1 *)0xfe:
        FUN_100bc9c68();
        pcVar16 = (code *)CONCAT44(uVar9,uVar8);
        unaff_x21 = puVar6;
code_r0x000100bebfbc:
        FUN_100bc9c68();
        if (unaff_x21 == puVar6 && pcVar16 == (code *)CONCAT44(uVar9,uVar8)) {
          uVar8 = 1;
        }
        else {
          FUN_100beeb44(unaff_x21);
          uVar8 = (uint)unaff_x21;
        }
        FUN_100b6f838();
        FUN_100b6f860();
        return (undefined1 *)(ulong)(uVar8 & 1);
      case (undefined1 *)0x4f:
      case (undefined1 *)0xb8:
code_r0x000100bebf88:
code_r0x000100bebf8c:
        FUN_100b56e60(puVar6);
        return puVar6;
      case (undefined1 *)0x55:
        goto code_r0x000100bebf5c;
      case (undefined1 *)0x5e:
        goto LAB_100bebf34;
      case (undefined1 *)0x61:
        goto LAB_100bebf78;
      case (undefined1 *)0x91:
        goto code_r0x000100bebf74;
      case (undefined1 *)0x94:
      case (undefined1 *)0xc4:
        goto code_r0x000100bec054;
      case (undefined1 *)0x95:
      case (undefined1 *)0x9b:
      case (undefined1 *)0xc5:
      case (undefined1 *)0xce:
        goto code_r0x000100bec09c;
      case (undefined1 *)0x96:
      case (undefined1 *)0xc6:
      case (undefined1 *)0xcc:
      case (undefined1 *)0xcd:
        goto code_r0x000100bec0c0;
      case (undefined1 *)0x97:
      case (undefined1 *)0xa4:
      case (undefined1 *)0xc7:
      case (undefined1 *)0xd0:
      case (undefined1 *)0xd4:
        goto switchD_100bec0c4_caseD_23;
      case (undefined1 *)0x98:
      case (undefined1 *)0xc8:
        goto switchD_100bec0c4_caseD_4;
      case (undefined1 *)0x99:
      case (undefined1 *)0xa5:
      case (undefined1 *)0xc9:
      case (undefined1 *)0xd5:
        puVar10 = (undefined1 *)0x6576656c;
        goto switchD_100bec0c4_caseD_4f;
      case (undefined1 *)0x9a:
        goto switchD_100bebe90_caseD_d3;
      case (undefined1 *)0x9c:
      case (undefined1 *)0x9f:
        goto code_r0x000100bec08c;
      case (undefined1 *)0x9d:
      case (undefined1 *)0xcf:
        goto LAB_100bec094;
      case (undefined1 *)0x9e:
        goto code_r0x000100bec0a8;
      case (undefined1 *)0xa0:
        goto code_r0x000100bec090;
      case (undefined1 *)0xa1:
      case (undefined1 *)0xa3:
      case (undefined1 *)0xd1:
      case (undefined1 *)0xd3:
        goto LAB_100bec0ac;
      case (undefined1 *)0xa2:
        goto code_r0x000100bec0b8;
      case (undefined1 *)0xac:
        goto code_r0x000100bec048;
      case (undefined1 *)0xca:
        goto code_r0x000100bec014;
      case (undefined1 *)0xcb:
        goto switchD_100bec0c4_switchD;
      case (undefined1 *)0xd2:
        FUN_100beee74();
        goto switchD_100bec0c4_caseD_0;
      case (undefined1 *)0xd8:
        goto code_r0x000100bebfbc;
      case (undefined1 *)0xd9:
      case (undefined1 *)0xed:
      case (undefined1 *)0xf5:
      case (undefined1 *)0xfd:
        goto code_r0x000100bec264;
      case (undefined1 *)0xdc:
switchD_100bec0c4_caseD_f1:
        puVar6 = puVar10;
        pcVar16 = (code *)&DAT_e600000000000000;
        goto LAB_100bec1b0;
      case (undefined1 *)0xf0:
        goto code_r0x000100bec13c;
      case (undefined1 *)0xf1:
        goto LAB_100bec1f8;
      case (undefined1 *)0xf9:
        puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff00000000ffff | 0x65696b6f0000);
        goto switchD_100bec0c4_caseD_bc;
      case (undefined1 *)0xfa:
        puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x7473000000000000);
        goto LAB_100bec2f8;
      case (undefined1 *)0xfb:
        goto code_r0x000100bec304;
      }
LAB_100bebf60:
      bVar3 = puVar6 == puVar10;
code_r0x000100bebf64:
      in_ZR = false;
      if (bVar3) {
        in_ZR = unaff_x20 == pcVar16;
      }
code_r0x000100bebf68:
      if ((bool)in_ZR) {
LAB_100bebf78:
        unaff_x21 = (undefined1 *)0x1;
      }
      else {
        FUN_100beeb6c();
        unaff_x21 = puVar6;
code_r0x000100bebf74:
      }
      FUN_100b6f860();
code_r0x000100bebf80:
      FUN_100b6f838();
      puVar6 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
      goto code_r0x000100bebf88;
    case (undefined1 *)0xaa:
      goto switchD_100bebcb0_caseD_aa;
    case (undefined1 *)0xac:
    case (undefined1 *)0xaf:
      goto switchD_100bebcb0_caseD_ac;
    case (undefined1 *)0xad:
    case (undefined1 *)0xdf:
      goto switchD_100bebcb0_caseD_ad;
    case (undefined1 *)0xae:
      *(code **)(puVar2 + 0x10) = unaff_x20;
      *(code **)(puVar2 + 0x18) = pcVar16;
    case (undefined1 *)0xb1:
    case (undefined1 *)0xb3:
    case (undefined1 *)0xe1:
    case (undefined1 *)0xe3:
      *(undefined1 **)(puVar2 + 0x20) = puVar1;
      *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
switchD_100bebcb0_caseD_b2:
      FUN_100beec18();
switchD_100bebcb0_caseD_a6:
      puVar11 = (undefined1 *)((ulong)puVar6 & 0xff);
switchD_100bebcb0_caseD_db:
      pbVar13 = &switchD_100bebe90::switchdataD_100c9f904;
      UNRECOVERED_JUMPTABLE = (code *)0x100bebe94;
switchD_100bebcb0_caseD_a8:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)pbVar13[(long)puVar11] * 4;
switchD_100bebcb0_caseD_a7:
      puVar6 = puVar10;
switchD_100bebcb0_caseD_e2:
                    /* WARNING: Could not recover jumptable at 0x000100bebe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar6);
      return puVar6;
    case (undefined1 *)0xb0:
      goto switchD_100bebcb0_caseD_b0;
    case (undefined1 *)0xb2:
      goto switchD_100bebcb0_caseD_b2;
    case (undefined1 *)0xbc:
switchD_100bebcb0_caseD_bc:
      pbVar13 = (byte *)0x65646f63;
      goto switchD_100bebcb0_caseD_aa;
    case (undefined1 *)0xc4:
    case (undefined1 *)0xee:
    case (undefined1 *)0xf6:
    case (undefined1 *)0xf8:
      goto switchD_100bebcb0_caseD_c4;
    case (undefined1 *)0xda:
      pcVar16 = (code *)pbVar13;
      puVar6 = puVar11;
      if (!(bool)in_ZR) {
        pcVar16 = UNRECOVERED_JUMPTABLE;
        puVar6 = (undefined1 *)(ulong)(&switchD_100bebcb0::switchdataD_100c9f8fc)[(long)puVar11];
      }
      if ((uVar8 & 0xff) != 0) {
        in_ZR = (uVar8 & 0xff) == 1;
        puVar11 = (undefined1 *)0x5f7972746e756f63;
        goto switchD_100bebcb0_caseD_bc;
      }
      pbVar13 = &DAT_e400000000000000;
      goto LAB_100bebe20;
    case (undefined1 *)0xdb:
      goto switchD_100bebcb0_caseD_db;
    case (undefined1 *)0xe2:
      goto switchD_100bebcb0_caseD_e2;
    case (undefined1 *)0xe8:
      goto switchD_100bebcb0_caseD_e8;
    case (undefined1 *)0xe9:
    case (undefined1 *)0xfd:
      *(code **)(puVar2 + 0x10) = unaff_x20;
      *(code **)(puVar2 + 0x18) = pcVar16;
code_r0x000100bec014:
      *(undefined1 **)(puVar2 + 0x20) = puVar1;
      *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
      pcVar16 = (code *)&SUB_e900000000000070;
      unaff_x30 = 0x100bec028;
      FUN_100beec18();
      puVar5 = (undefined1 *)((ulong)puVar6 & 0xff);
      pbVar13 = &BYTE_100c9f914;
      puVar11 = (undefined1 *)(ulong)(&BYTE_100c9f914)[(long)puVar5];
      UNRECOVERED_JUMPTABLE = (code *)((long)puVar11 * 4 + 0x100bec050);
      unaff_x20 = (code *)0x70;
      puVar6 = puVar10;
code_r0x000100bec048:
      unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffffffff | 0xe900000000000000);
      switch(UNRECOVERED_JUMPTABLE) {
      case (code *)0x100bec050:
switchD_100bebe90_caseD_d3:
        FUN_100beee2c();
      case (code *)0x100bec054:
code_r0x000100bec054:
LAB_100bec0ac:
        puVar5 = (undefined1 *)((ulong)uVar8 & 0xff);
code_r0x000100bec0b0:
        pbVar13 = &switchD_100bec0c4::switchdataD_100c9f91b;
code_r0x000100bec0b8:
        UNRECOVERED_JUMPTABLE = (code *)0x100bec0c8;
code_r0x000100bec0bc:
        puVar11 = (undefined1 *)(ulong)pbVar13[(long)puVar5];
        goto code_r0x000100bec0c0;
      case (code *)0x100bec058:
      case (code *)0x100bec05c:
        puVar6 = (undefined1 *)0x6f62;
      case (code *)0x100bec060:
        goto code_r0x000100bec060;
      case (code *)0x100bec064:
        goto switchD_100bebe90_caseD_9f;
      case (code *)0x100bec068:
        FUN_100beee14();
      case (code *)0x100bec06c:
        goto LAB_100bec0ac;
      case (code *)0x100bec070:
      case (code *)0x100bec074:
        puVar6 = (undefined1 *)0x656c;
      case (code *)0x100bec078:
        goto switchD_100bebe90_caseD_a1;
      case (code *)0x100bec07c:
        goto code_r0x000100bec07c;
      case (code *)0x100bec080:
        goto code_r0x000100bec080;
      case (code *)0x100bec084:
        FUN_100beeccc();
      case (code *)0x100bec088:
        goto LAB_100bec0ac;
      case (code *)0x100bec08c:
code_r0x000100bec08c:
        puVar6 = (undefined1 *)0x6573;
      case (code *)0x100bec090:
code_r0x000100bec090:
        puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x65760000);
      case (code *)0x100bec094:
        goto LAB_100bec094;
      case (code *)0x100bec09c:
        goto code_r0x000100bec09c;
      case (code *)0x100bec0a0:
        goto code_r0x000100bec0a0;
      case (code *)0x100bec0a4:
        goto code_r0x000100bec0a4;
      case (code *)0x100bec0a8:
        goto code_r0x000100bec0a8;
      case (code *)0x100bec0ac:
        goto LAB_100bec0ac;
      case (code *)0x100bec0b0:
        goto code_r0x000100bec0b0;
      case (code *)0x100bec0bc:
        goto code_r0x000100bec0bc;
      case (code *)0x100bec0c0:
        goto code_r0x000100bec0c0;
      case (code *)0x100bec0c8:
        FUN_100beeea4();
        break;
      case (code *)0x100bec0d0:
switchD_100bec0c4_caseD_4:
        pcVar16 = (code *)&DAT_e400000000000000;
      case (code *)0x100bec0d4:
        puVar10 = (undefined1 *)0x6f62;
      case (code *)0x100bec0d8:
        goto switchD_100bec0c4_caseD_23;
      case (code *)0x100bec0f4:
switchD_100bec0c4_caseD_4f:
        puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x6c00000000);
        break;
      case (code *)0x100bec104:
        puVar10 = (undefined1 *)0x7974697265766573;
        FUN_100beef9c();
        break;
      case (code *)0x100bec130:
        goto LAB_100bec130;
      case (code *)0x100bec15c:
        puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff00000000ffff | 0x73656d610000);
        if (((ulong)puVar6 & 0xff) == 0) goto switchD_100bec0c4_caseD_f1;
        in_ZR = ((uint)puVar6 & 0xff) == 1;
        puVar5 = (undefined1 *)0x7265747369676572;
        pbVar13 = (byte *)0xe900000000000073;
        UNRECOVERED_JUMPTABLE = (code *)&DAT_e800000000000000;
        puVar11 = (undefined1 *)0x6e73;
      case (code *)0x100bec190:
        goto code_r0x000100bec190;
      case (code *)0x100bec198:
        goto code_r0x000100bec198;
      case (code *)0x100bec19c:
        goto code_r0x000100bec19c;
      case (code *)0x100bec1d4:
        goto switchD_100bec0c4_caseD_bb;
      case (code *)0x100bec1d8:
        goto switchD_100bec0c4_caseD_ff;
      case (code *)0x100bec1dc:
        goto code_r0x000100bec1dc;
      case (code *)0x100bec1e4:
        goto code_r0x000100bec1e4;
      case (code *)0x100bec1f0:
        goto switchD_100bebe90_caseD_e1;
      case (code *)0x100bec1f4:
        goto LAB_100bec1f4;
      case (code *)0x100bec200:
        goto code_r0x000100bec200;
      case (code *)0x100bec208:
        goto switchD_100bec0c4_caseD_9d;
      case (code *)0x100bec20c:
        goto code_r0x000100bec20c;
      case (code *)0x100bec218:
        goto code_r0x000100bec218;
      case (code *)0x100bec220:
        goto code_r0x000100bec220;
      case FUN_100bec228:
        *(undefined8 *)(puVar2 + -0x30) = unaff_x22;
        *(undefined1 **)(puVar2 + -0x28) = unaff_x21;
        *(code **)(puVar2 + -0x20) = unaff_x20;
        *(code **)(puVar2 + -0x18) = pcVar16;
        *(undefined1 **)(puVar2 + -0x10) = puVar2 + 0x20;
        *(undefined8 *)(puVar2 + -8) = unaff_x30;
      case (code *)0x100bec234:
        goto code_r0x000100bec234;
      case (code *)0x100bec284:
switchD_100bec0c4_caseD_bc:
        puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x73000000000000);
LAB_100bec2f8:
        puVar5 = (undefined1 *)((ulong)uVar8 & 0xff);
        pbVar13 = &switchD_100bec310::switchdataD_100c9f929;
code_r0x000100bec304:
                    /* WARNING: Could not recover jumptable at 0x000100bec310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)pbVar13[(long)puVar5] * 4 + 0x100bec314))(puVar6);
        return puVar6;
      case (code *)0x100bec2f0:
        puVar6 = (undefined1 *)0x6c7275;
        goto LAB_100bec2f8;
      case (code *)0x100bec340:
        if (puVar6 != (undefined1 *)0x73726564616568 || unaff_x20 != pcVar16) {
          FUN_100beeb6c();
          unaff_x21 = puVar6;
          goto code_r0x000100bec3ac;
        }
        uVar8 = 1;
LAB_100bec3b4:
        FUN_100b6f860();
        FUN_100b6f838();
        puVar6 = (undefined1 *)(ulong)(uVar8 & 1);
code_r0x000100bec3c4:
        FUN_100b56e60(puVar6);
        return puVar6;
      case (code *)0x100bec3ac:
code_r0x000100bec3ac:
        uVar8 = (uint)unaff_x21;
        goto LAB_100bec3b4;
      case (code *)0x100bec3c4:
        goto code_r0x000100bec3c4;
      case (code *)0x100bec420:
        FUN_100b6f838();
        FUN_100b6f860();
        puVar10 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
        FUN_100b56e60(puVar10);
        return puVar10;
      case (code *)0x100bec44c:
        puVar10 = (undefined1 *)0xe900000000000064;
        lVar14 = 0x657474616d726f66;
        if (((ulong)puVar6 & 0xff) == 0) {
          puVar5 = (undefined1 *)0xe900000000000064;
          lVar7 = lVar14;
        }
        else {
          bVar3 = ((uint)puVar6 & 0xff) != 1;
          lVar7 = 0x6567617373656d;
          if (bVar3) {
            lVar7 = 0x736d61726170;
          }
          puVar5 = &DAT_e700000000000000;
          if (bVar3) {
            puVar5 = &DAT_e600000000000000;
          }
        }
        uVar8 = uVar8 & 0xff;
        if (uVar8 != 0) {
          lVar14 = 0x6567617373656d;
          if (uVar8 != 1) {
            lVar14 = 0x736d61726170;
          }
          puVar10 = &DAT_e700000000000000;
          if (uVar8 != 1) {
            puVar10 = &DAT_e600000000000000;
          }
        }
        if (lVar7 == lVar14 && puVar5 == puVar10) {
          uVar8 = 1;
        }
        else {
          FUN_100beeb6c();
          uVar8 = (uint)lVar7;
        }
        FUN_100b6f860();
        FUN_100b6f838();
        puVar10 = (undefined1 *)(ulong)(uVar8 & 1);
        FUN_100b56e60(puVar10);
        return puVar10;
      }
      break;
    case (undefined1 *)0xea:
    case (undefined1 *)0xfe:
      goto switchD_100bebcb0_caseD_ea;
    case (undefined1 *)0xec:
switchD_100bebcb0_caseD_ec:
      pcVar16 = (code *)&DAT_e400000000000000;
code_r0x000100bebf58:
      puVar10 = (undefined1 *)0x6e75;
code_r0x000100bebf5c:
      puVar10 = (undefined1 *)(ulong)((uint)puVar10 & 0xffff | 0x74690000);
      goto LAB_100bebf60;
    }
    goto switchD_100bec0c4_caseD_0;
  case (undefined1 *)0xbb:
    goto switchD_100beb9e8_caseD_bb;
  case (undefined1 *)0xbe:
  case (undefined1 *)0xee:
    goto switchD_100beb9e8_caseD_be;
  case (undefined1 *)0xbf:
  case (undefined1 *)0xc5:
  case (undefined1 *)0xef:
  case (undefined1 *)0xf8:
    goto switchD_100beb9e8_caseD_bf;
  case (undefined1 *)0xc0:
  case (undefined1 *)0xf0:
  case (undefined1 *)0xf6:
  case (undefined1 *)0xf7:
    goto switchD_100beb9e8_caseD_c0;
  case (undefined1 *)0xc1:
  case (undefined1 *)0xce:
  case (undefined1 *)0xf1:
  case (undefined1 *)0xfa:
  case (undefined1 *)0xfe:
    goto switchD_100beb9e8_caseD_c1;
  case (undefined1 *)0xc2:
  case (undefined1 *)0xf2:
    goto switchD_100beb9e8_caseD_c2;
  case (undefined1 *)0xc3:
  case (undefined1 *)0xcf:
  case (undefined1 *)0xf3:
  case (undefined1 *)0xff:
    switchD_100bec5a8::caseD_1b();
    return puVar5;
  case (undefined1 *)0xc4:
    goto switchD_100beb9e8_caseD_c4;
  case (undefined1 *)0xc6:
  case (undefined1 *)0xc9:
    goto switchD_100beb9e8_caseD_c6;
  case (undefined1 *)0xc7:
  case (undefined1 *)0xf9:
    goto switchD_100beb9e8_caseD_c7;
  case (undefined1 *)0xc8:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffff0000ffffffff | 0x665f00000000);
  case (undefined1 *)0xcb:
  case (undefined1 *)0xcd:
  case (undefined1 *)0xfb:
  case (undefined1 *)0xfd:
    puVar10 = (undefined1 *)((ulong)puVar10 & 0xffffffffffff | 0x6c69000000000000);
    unaff_x20 = (code *)0xe900000000000065;
    goto switchD_100beb9e8_caseD_cc;
  case (undefined1 *)0xca:
    goto switchD_100beb9e8_caseD_ca;
  case (undefined1 *)0xcc:
    goto switchD_100beb9e8_caseD_cc;
  case (undefined1 *)0xd6:
    goto switchD_100beb970_caseD_c6;
  case (undefined1 *)0xf4:
    goto switchD_100beb970_caseD_cc;
  case (undefined1 *)0xf5:
    goto switchD_100beb9e8_caseD_f5;
  case (undefined1 *)0xfc:
    goto switchD_100beb9e8_caseD_fc;
  }
switchD_100beb878_caseD_cf:
  bVar3 = puVar5 == puVar10;
switchD_100beb9e8_caseD_32:
  in_ZR = false;
  if (bVar3) {
    in_ZR = pcVar16 == unaff_x20;
  }
switchD_100beb878_caseD_ce:
  if ((bool)in_ZR) {
switchD_100beb9e8_caseD_17:
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
switchD_100beb9e8_caseD_c:
    FUN_100beeb44();
    unaff_x21 = puVar5;
switchD_100beb9e8_caseD_bb:
  }
switchD_100beb878_caseD_d0:
  FUN_100b6f838();
switchD_100beb9e8_caseD_46:
  FUN_100b6f860();
  puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
switchD_100beb9e8_caseD_18:
switchD_100beb9e8_caseD_40:
  FUN_100b56e60();
  return puVar5;
}



/* Address: 0x100beb934 | FUN_100beb934 */

void FUN_100beb934(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  undefined1 *unaff_x20;
  
  puVar3 = &DAT_65756c6176;
  puVar8 = &DAT_e500000000000000;
  param_1 = param_1 & 0xff;
  pbVar5 = &switchD_100beb970::switchdataD_100c9f8dc;
  uVar7 = (ulong)(&switchD_100beb970::switchdataD_100c9f8dc)[param_1];
  lVar6 = uVar7 * 4 + 0x100beb974;
  puVar2 = puVar3;
  puVar4 = puVar3;
  switch(param_1) {
  case 0:
  case 6:
  case 0x28:
  case 0x30:
  case 0x4b:
  case 0x52:
  case 0x80:
  case 0xa8:
    break;
  default:
switchD_100beb970_caseD_1:
    FUN_100beed94();
    break;
  case 2:
  case 8:
  case 0x2b:
  case 0x33:
  case 0x7b:
  case 0x82:
  case 0xb9:
switchD_100beb970_caseD_2:
    puVar3 = (undefined1 *)0x656d;
  case 0x48:
  case 0x4f:
  case 0x60:
  case 0x66:
  case 0x99:
  case 0xa1:
  case 0xa5:
  case 0xb2:
  case 0xbd:
switchD_100beb970_caseD_48:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffff0000ffff | 0x68630000);
switchD_100beb970_caseD_1a:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffff0000ffffffff | 0x6e6100000000);
switchD_100beb970_caseD_61:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffffffffffff | 0x7369000000000000);
switchD_100beb970_caseD_f:
    FUN_100beed74(puVar3);
switchD_100beb970_caseD_63:
switchD_100beb970_caseD_2d:
    break;
  case 3:
  case 9:
  case 0x49:
  case 0x50:
  case 0x77:
  case 0x7c:
  case 0x83:
  case 0xa6:
  case 0xbe:
switchD_100beb970_caseD_3:
  case 0x1b:
  case 0x23:
  case 0x5e:
  case 100:
  case 0x8f:
  case 0x9c:
switchD_100beb970_caseD_1b:
switchD_100beb970_caseD_11:
switchD_100beb970_caseD_3f:
    break;
  case 4:
  case 10:
  case 0x10:
  case 0x16:
  case 0x2c:
  case 0x34:
  case 0x3c:
  case 0x43:
  case 0x84:
  case 0x8a:
  case 0x98:
  case 0xa0:
  case 0xb3:
switchD_100beb970_caseD_4:
  case 0xe4:
switchD_100beb970_caseD_e4:
switchD_100beb970_caseD_62:
switchD_100beb970_caseD_1c:
switchD_100beb970_caseD_3a:
switchD_100beb970_caseD_2a:
switchD_100beb970_caseD_e:
    break;
  case 5:
  case 0xb:
  case 0x85:
switchD_100beb970_caseD_5:
    FUN_100beed04();
    break;
  case 0xc:
  case 0x1f:
  case 0x27:
  case 0x72:
  case 0x7e:
  case 0x86:
  case 0x93:
    goto switchD_100beb970_caseD_c;
  case 0xe:
  case 0x14:
  case 0x3b:
  case 0x42:
  case 0x88:
  case 0x9b:
  case 0x9f:
  case 0xb1:
    goto switchD_100beb970_caseD_e;
  case 0xf:
  case 0x15:
  case 0x2f:
  case 0x37:
  case 0x3d:
  case 0x44:
  case 0x89:
    goto switchD_100beb970_caseD_f;
  case 0x11:
  case 0x17:
  case 0x2e:
  case 0x36:
  case 0x8b:
    goto switchD_100beb970_caseD_11;
  case 0x12:
    goto switchD_100beb970_caseD_12;
  case 0x18:
  case 0x20:
    goto switchD_100beb970_caseD_18;
  case 0x1a:
  case 0x22:
  case 0x8e:
    goto switchD_100beb970_caseD_1a;
  case 0x1c:
  case 0x24:
  case 0x4a:
  case 0x51:
  case 0x6c:
  case 0x70:
  case 0x90:
  case 0xa7:
  case 0xb7:
    goto switchD_100beb970_caseD_1c;
  case 0x1d:
  case 0x25:
  case 0x91:
    goto switchD_100beb970_caseD_1d;
  case 0x1e:
  case 0x26:
  case 0x7f:
  case 0xe8:
switchD_100beb970_caseD_1e:
    puVar4 = (undefined1 *)0x6874;
  case 0x46:
  case 0x4d:
  case 0x8c:
  case 0xa3:
switchD_100beb970_caseD_46:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffff0000ffff | 0x65720000);
switchD_100beb970_caseD_79:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffff0000ffffffff | 0x646100000000);
switchD_100beb970_caseD_18:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffffffff | 0x695f000000000000);
    unaff_x20 = (undefined1 *)0xe900000000000064;
switchD_100beb878_caseD_cf:
    if (puVar3 == puVar4 && puVar8 == unaff_x20) {
      uVar1 = 1;
    }
    else {
      FUN_100beeb44();
      uVar1 = (uint)puVar3;
    }
    FUN_100b6f838();
    FUN_100b6f860();
    FUN_100b56e60(uVar1 & 1);
    return;
  case 0x2a:
  case 0x32:
  case 0x6d:
  case 0x71:
  case 0xb8:
    goto switchD_100beb970_caseD_2a;
  case 0x2d:
  case 0x35:
  case 0x3e:
  case 0x45:
  case 0x94:
  case 0xaf:
  case 0xc0:
    goto switchD_100beb970_caseD_2d;
  case 0x38:
    goto switchD_100beb970_caseD_38;
  case 0x3a:
  case 0x41:
  case 0x76:
  case 0x7d:
  case 0x97:
  case 0x9e:
    goto switchD_100beb970_caseD_3a;
  case 0x3f:
  case 0x78:
  case 0xc2:
    goto switchD_100beb970_caseD_3f;
  case 0x4c:
  case 0x53:
  case 0x92:
  case 0xa9:
switchD_100beb970_caseD_4c:
    FUN_100beed64();
    goto switchD_100beb878_caseD_cf;
  case 0x61:
  case 0x67:
  case 0x6a:
  case 0x6e:
  case 0x74:
  case 0x9a:
  case 0xa2:
  case 0xb4:
  case 0xb5:
  case 0xbb:
    goto switchD_100beb970_caseD_61;
  case 0x62:
  case 0x68:
  case 0x96:
    goto switchD_100beb970_caseD_62;
  case 99:
  case 0x69:
  case 0x75:
  case 0xbc:
    goto switchD_100beb970_caseD_63;
  case 0x79:
    goto switchD_100beb970_caseD_79;
  case 0xc1:
    goto switchD_100beb970_caseD_c1;
  case 0xc4:
  case 0xf4:
switchD_100beb970_caseD_c4:
    FUN_100beed54();
  case 0xd1:
  case 0xd3:
switchD_100beb970_caseD_d1:
    param_1 = param_2 & 0xff;
    pbVar5 = (byte *)"SentryTypedSwizzle";
switchD_100beb970_caseD_d2:
    pbVar5 = pbVar5 + 0x8ee;
    lVar6 = 0x100bebb38;
switchD_100beb970_caseD_c6:
    uVar7 = (ulong)pbVar5[param_1];
switchD_100beb970_caseD_fb:
                    /* WARNING: Could not recover jumptable at 0x000100bebb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(lVar6 + uVar7 * 4))();
    return;
  case 0xc5:
  case 0xcb:
  case 0xf5:
  case 0xfe:
switchD_100beb970_caseD_c5:
    puVar3 = (undefined1 *)((ulong)puVar3 & 0xffff | 0x6c69665f65640000);
  case 0xce:
switchD_100beb970_caseD_ce:
    FUN_100beefb0(puVar3);
    goto switchD_100beb970_caseD_d1;
  case 0xc6:
  case 0xf6:
  case 0xfc:
  case 0xfd:
    goto switchD_100beb970_caseD_c6;
  case 199:
  case 0xd4:
  case 0xf7:
switchD_100beb970_caseD_c7:
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffffffff | 0x6d76000000000000);
    unaff_x20 = (undefined1 *)0xec00000072646461;
    goto switchD_100beb9e8_caseD_cc;
  case 200:
  case 0xf8:
switchD_100beb970_caseD_c8:
    goto switchD_100beb9e8_caseD_cc;
  case 0xc9:
  case 0xd5:
  case 0xf9:
switchD_100beb970_caseD_c9:
    FUN_100beedd4();
    puVar4 = (undefined1 *)((ulong)puVar4 & 0xffffffffffff | 0x6973000000000000);
    unaff_x20 = (undefined1 *)0xea0000000000657a;
switchD_100beb9e8_caseD_cc:
    if (puVar3 == puVar4 && puVar8 == unaff_x20) {
      uVar1 = 1;
    }
    else {
      FUN_100beeb44();
      uVar1 = (uint)puVar3;
    }
    FUN_100b6f838();
    FUN_100b6f860();
    FUN_100b56e60(uVar1 & 1);
    return;
  case 0xca:
switchD_100beb970_caseD_ca:
    goto switchD_100beb970_caseD_d1;
  case 0xcc:
  case 0xcf:
switchD_100beb970_caseD_cc:
  case 0xd0:
switchD_100beb970_caseD_d0:
switchD_100beb970_caseD_cd:
    goto switchD_100beb970_caseD_d1;
  case 0xcd:
  case 0xff:
    goto switchD_100beb970_caseD_cd;
  case 0xd2:
    goto switchD_100beb970_caseD_d2;
  case 0xdc:
    do {
      puVar2 = puVar3;
      switch(lVar6) {
      case 0x100beb974:
        goto switchD_100beb970_caseD_1;
      case 0x100beb97c:
        goto switchD_100beb970_caseD_4;
      case 0x100beb980:
        goto switchD_100beb970_caseD_e4;
      case 0x100beb984:
        goto switchD_100beb970_caseD_62;
      case 0x100beb988:
        goto switchD_100beb970_caseD_1c;
      case 0x100beb98c:
        goto switchD_100beb970_caseD_3a;
      case 0x100beb990:
        goto switchD_100beb970_caseD_2a;
      case 0x100beb994:
        goto switchD_100beb970_caseD_e;
      case 0x100beb998:
        goto switchD_100beb970_caseD_2;
      case 0x100beb99c:
        goto switchD_100beb970_caseD_48;
      case 0x100beb9a0:
        goto switchD_100beb970_caseD_1a;
      case 0x100beb9a4:
        goto switchD_100beb970_caseD_61;
      case 0x100beb9a8:
        goto switchD_100beb970_caseD_f;
      case 0x100beb9ac:
        goto switchD_100beb970_caseD_63;
      case 0x100beb9b0:
        goto switchD_100beb970_caseD_2d;
      case 0x100beb9b4:
        goto switchD_100beb970_caseD_3;
      case 0x100beb9b8:
        goto switchD_100beb970_caseD_1b;
      case 0x100beb9c0:
        goto switchD_100beb970_caseD_11;
      case 0x100beb9c4:
        goto switchD_100beb970_caseD_3f;
      case 0x100beb9c8:
        goto switchD_100beb970_caseD_5;
      case 0x100beb9cc:
        goto switchD_100beb970_caseD_0;
      case 0x100beb9d0:
        goto switchD_100beb970_caseD_38;
      case 0x100beb9d4:
        goto switchD_100beb970_caseD_c;
      case 0x100beb9d8:
        goto switchD_100beb970_caseD_12;
      case 0x100beb9e0:
        goto switchD_100beb970_caseD_c1;
      case 0x100beb9e4:
        goto switchD_100beb970_caseD_1d;
      case 0x100beb9ec:
        goto switchD_100beb970_caseD_4c;
      case 0x100beb9f4:
        goto switchD_100beb970_caseD_1e;
      case 0x100beb9f8:
        goto switchD_100beb970_caseD_46;
      case 0x100beb9fc:
        goto switchD_100beb970_caseD_79;
      case 0x100beba00:
        goto switchD_100beb970_caseD_18;
      case 0x100beba80:
switchD_100beb970_caseD_fa:
        puVar3 = &DAT_64695f6775626564;
        puVar8 = &DAT_e800000000000000;
        param_1 = (ulong)puVar2 & 0xff;
        pbVar5 = &BYTE_100c9f8e8;
        uVar7 = (ulong)(&BYTE_100c9f8e8)[param_1];
        lVar6 = uVar7 * 4 + 0x100bebab8;
        puVar4 = puVar3;
        break;
      case 0x100bebabc:
        goto switchD_100beb970_caseD_ca;
      case 0x100bebac0:
        goto switchD_100beb970_caseD_c4;
      case 0x100bebadc:
        goto switchD_100beb970_caseD_d1;
      case 0x100bebaf8:
        goto switchD_100beb970_caseD_cc;
      case 0x100bebafc:
        goto switchD_100beb970_caseD_d0;
      case 0x100bebb00:
        goto switchD_100beb970_caseD_cd;
      case 0x100bebb08:
        goto switchD_100beb970_caseD_c5;
      case 0x100bebb14:
        goto switchD_100beb970_caseD_ce;
      case 0x100bebb18:
        goto switchD_100beb970_caseD_d1;
      case 0x100bebb24:
        goto switchD_100beb970_caseD_d2;
      case 0x100bebb2c:
        goto switchD_100beb970_caseD_c6;
      case 0x100bebb30:
        goto switchD_100beb970_caseD_fb;
      case 0x100bebb3c:
        goto switchD_100beb970_caseD_c8;
      case 0x100bebb44:
        goto switchD_100beb970_caseD_c7;
      case 0x100bebb58:
        goto switchD_100beb970_caseD_c9;
      }
    } while( true );
  case 0xfa:
    goto switchD_100beb970_caseD_fa;
  case 0xfb:
    goto switchD_100beb970_caseD_fb;
  }
switchD_100beb970_caseD_0:
switchD_100beb970_caseD_38:
  param_1 = param_2 & 0xff;
switchD_100beb970_caseD_c:
  pbVar5 = (byte *)"SentryTypedSwizzle";
switchD_100beb970_caseD_12:
  pbVar5 = pbVar5 + 0x8e2;
  lVar6 = 0x100beb9ec;
switchD_100beb970_caseD_c1:
  uVar7 = (ulong)pbVar5[param_1];
switchD_100beb970_caseD_1d:
                    /* WARNING: Could not recover jumptable at 0x000100beb9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(lVar6 + uVar7 * 4))();
  return;
}



/* Address: 0x100beba74 | switchD_100beb9e8::caseD_73 */

undefined1 * switchD_100beb9e8::caseD_73(ulong param_1,ulong param_2)

{
  undefined1 in_ZR;
  bool bVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar10;
  undefined1 *puVar11;
  code *pcVar12;
  code *unaff_x20;
  undefined1 *unaff_x21;
  
  uVar4 = (undefined4)(param_2 >> 0x20);
  uVar3 = (uint)param_2;
  puVar5 = &DAT_64695f6775626564;
  pcVar12 = (code *)&DAT_e800000000000000;
  puVar8 = (undefined1 *)(param_1 & 0xff);
  pbVar9 = &BYTE_100c9f8e8;
  uVar10 = (ulong)(&BYTE_100c9f8e8)[(long)puVar8];
  UNRECOVERED_JUMPTABLE_00 = (code *)(uVar10 * 4 + 0x100bebab8);
  puVar6 = puVar5;
  switch(puVar8) {
  case (undefined1 *)0x0:
  case (undefined1 *)0x13:
  case (undefined1 *)0x1b:
  case (undefined1 *)0x66:
  case (undefined1 *)0x72:
  case (undefined1 *)0x7a:
  case (undefined1 *)0x87:
    goto switchD_100beb970_caseD_d1;
  default:
    FUN_100beed94();
    goto switchD_100beb970_caseD_d1;
  case (undefined1 *)0x2:
  case (undefined1 *)0x8:
  case (undefined1 *)0x2f:
  case (undefined1 *)0x36:
  case (undefined1 *)0x7c:
  case (undefined1 *)0x8f:
  case (undefined1 *)0x93:
  case (undefined1 *)0xa5:
    FUN_100beed54();
  case (undefined1 *)0x1f:
  case (undefined1 *)0x27:
  case (undefined1 *)0x6f:
  case (undefined1 *)0x76:
  case (undefined1 *)0xad:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6973000000000000);
LAB_100bebae0:
code_r0x000100bebae4:
code_r0x000100bebae8:
    goto switchD_100beb970_caseD_d1;
  case (undefined1 *)0x3:
  case (undefined1 *)0x9:
  case (undefined1 *)0x23:
  case (undefined1 *)0x2b:
  case (undefined1 *)0x31:
  case (undefined1 *)0x38:
  case (undefined1 *)0x7d:
    FUN_100beed54();
  case (undefined1 *)0x57:
  case (undefined1 *)0x5d:
  case (undefined1 *)0x69:
  case (undefined1 *)0xb0:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6461000000000000);
code_r0x000100bebaf4:
switchD_100beb970_caseD_cc:
switchD_100beb970_caseD_d0:
    goto switchD_100beb970_caseD_d1;
  case (undefined1 *)0x4:
  case (undefined1 *)0xa:
  case (undefined1 *)0x20:
  case (undefined1 *)0x28:
  case (undefined1 *)0x30:
  case (undefined1 *)0x37:
  case (undefined1 *)0x78:
  case (undefined1 *)0x7e:
  case (undefined1 *)0x8c:
  case (undefined1 *)0x94:
  case (undefined1 *)0xa7:
    FUN_100beed54();
  case (undefined1 *)0xd8:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6d76000000000000);
code_r0x000100bebac8:
code_r0x000100bebacc:
code_r0x000100bebad0:
code_r0x000100bebad4:
switchD_100beb970_caseD_d1:
code_r0x000100bebb1c:
    puVar8 = (undefined1 *)((ulong)uVar3 & 0xff);
    pbVar9 = (byte *)"SentryTypedSwizzle";
switchD_100beb970_caseD_d2:
    pbVar9 = pbVar9 + 0x8ee;
code_r0x000100bebb28:
    UNRECOVERED_JUMPTABLE_00 = (code *)0x100bebb38;
    uVar10 = (ulong)pbVar9[(long)puVar8];
switchD_100beb970_caseD_fb:
                    /* WARNING: Could not recover jumptable at 0x000100bebb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(UNRECOVERED_JUMPTABLE_00 + uVar10 * 4))();
    return puVar5;
  case (undefined1 *)0x5:
  case (undefined1 *)0xb:
  case (undefined1 *)0x22:
  case (undefined1 *)0x2a:
  case (undefined1 *)0x7f:
    puVar5 = (undefined1 *)0x6f63;
  case (undefined1 *)0x33:
  case (undefined1 *)0x6c:
  case (undefined1 *)0xb6:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x65640000);
code_r0x000100bebb0c:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x665f00000000);
code_r0x000100bebb10:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6c69000000000000);
switchD_100beb970_caseD_ce:
    FUN_100beefb0(puVar5);
    goto switchD_100beb970_caseD_d1;
  case (undefined1 *)0x6:
    goto code_r0x000100bebb1c;
  case (undefined1 *)0xc:
  case (undefined1 *)0x14:
    goto switchD_100beb970_caseD_c7;
  case (undefined1 *)0xe:
  case (undefined1 *)0x16:
  case (undefined1 *)0x82:
    goto code_r0x000100bebae4;
  case (undefined1 *)0xf:
  case (undefined1 *)0x17:
  case (undefined1 *)0x52:
  case (undefined1 *)0x58:
  case (undefined1 *)0x83:
  case (undefined1 *)0x90:
    goto switchD_100beb970_caseD_d0;
  case (undefined1 *)0x10:
  case (undefined1 *)0x18:
  case (undefined1 *)0x3e:
  case (undefined1 *)0x45:
  case (undefined1 *)0x60:
  case (undefined1 *)0x64:
  case (undefined1 *)0x84:
  case (undefined1 *)0x9b:
  case (undefined1 *)0xab:
    goto code_r0x000100bebacc;
  case (undefined1 *)0x11:
  case (undefined1 *)0x19:
  case (undefined1 *)0x85:
    goto code_r0x000100bebb28;
  case (undefined1 *)0x12:
  case (undefined1 *)0x1a:
  case (undefined1 *)0x73:
  case (undefined1 *)0xdc:
    FUN_100beed64();
  case (undefined1 *)0x3a:
  case (undefined1 *)0x41:
  case (undefined1 *)0x80:
  case (undefined1 *)0x97:
    goto switchD_100beb9e8_caseD_cc;
  case (undefined1 *)0x1c:
  case (undefined1 *)0x24:
  case (undefined1 *)0x3f:
  case (undefined1 *)0x46:
  case (undefined1 *)0x74:
  case (undefined1 *)0x9c:
    goto code_r0x000100bebb10;
  case (undefined1 *)0x1e:
  case (undefined1 *)0x26:
  case (undefined1 *)0x61:
  case (undefined1 *)0x65:
  case (undefined1 *)0xac:
    goto code_r0x000100bebad4;
  case (undefined1 *)0x21:
  case (undefined1 *)0x29:
  case (undefined1 *)0x32:
  case (undefined1 *)0x39:
  case (undefined1 *)0x88:
  case (undefined1 *)0xa3:
  case (undefined1 *)0xb4:
    goto code_r0x000100bebaf4;
  case (undefined1 *)0x2c:
    goto switchD_100beb970_caseD_ce;
  case (undefined1 *)0x2e:
  case (undefined1 *)0x35:
  case (undefined1 *)0x6a:
  case (undefined1 *)0x71:
  case (undefined1 *)0x8b:
  case (undefined1 *)0x92:
    goto code_r0x000100bebad0;
  case (undefined1 *)0x3c:
  case (undefined1 *)0x43:
  case (undefined1 *)0x54:
  case (undefined1 *)0x5a:
  case (undefined1 *)0x8d:
  case (undefined1 *)0x95:
  case (undefined1 *)0x99:
  case (undefined1 *)0xa6:
  case (undefined1 *)0xb1:
    goto LAB_100bebae0;
  case (undefined1 *)0x3d:
  case (undefined1 *)0x44:
  case (undefined1 *)0x6b:
  case (undefined1 *)0x70:
  case (undefined1 *)0x77:
  case (undefined1 *)0x9a:
  case (undefined1 *)0xb2:
    goto switchD_100beb970_caseD_cc;
  case (undefined1 *)0x40:
  case (undefined1 *)0x47:
  case (undefined1 *)0x86:
  case (undefined1 *)0x9d:
    goto switchD_100beb970_caseD_fb;
  case (undefined1 *)0x55:
  case (undefined1 *)0x5b:
  case (undefined1 *)0x5e:
  case (undefined1 *)0x62:
  case (undefined1 *)0x68:
  case (undefined1 *)0x8e:
  case (undefined1 *)0x96:
  case (undefined1 *)0xa8:
  case (undefined1 *)0xa9:
  case (undefined1 *)0xaf:
    goto code_r0x000100bebae8;
  case (undefined1 *)0x56:
  case (undefined1 *)0x5c:
  case (undefined1 *)0x8a:
    goto code_r0x000100bebac8;
  case (undefined1 *)0x6d:
    FUN_100beedd4();
switchD_100beb970_caseD_c7:
    puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x6d76000000000000);
    unaff_x20 = (code *)0xec00000072646461;
    goto switchD_100beb9e8_caseD_cc;
  case (undefined1 *)0x79:
    goto code_r0x000100bebb0c;
  case (undefined1 *)0xb5:
    goto switchD_100beb970_caseD_d2;
  case (undefined1 *)0xb8:
  case (undefined1 *)0xe8:
    pcVar12 = (code *)&DAT_e500000000000000;
    puVar5 = (undefined1 *)0x6c69616d65;
    break;
  case (undefined1 *)0xb9:
  case (undefined1 *)0xbf:
  case (undefined1 *)0xe9:
  case (undefined1 *)0xf2:
    puVar5 = (undefined1 *)0x65726464615f6564;
  case (undefined1 *)0xc2:
    pcVar12 = (code *)0x7373;
code_r0x000100bebc5c:
    pcVar12 = (code *)((ulong)pcVar12 & 0xffffffffffff | 0xea00000000000000);
    break;
  case (undefined1 *)0xba:
  case (undefined1 *)0xea:
  case (undefined1 *)0xf0:
  case (undefined1 *)0xf1:
    goto code_r0x000100bebc70;
  case (undefined1 *)0xbb:
  case (undefined1 *)0xc8:
  case (undefined1 *)0xeb:
  case (undefined1 *)0xf4:
  case (undefined1 *)0xf8:
    puVar5 = (undefined1 *)0x6f6567;
    break;
  case (undefined1 *)0xbc:
  case (undefined1 *)0xec:
    goto code_r0x000100bebc80;
  case (undefined1 *)0xbd:
  case (undefined1 *)0xc9:
  case (undefined1 *)0xed:
  case (undefined1 *)0xf9:
    goto code_r0x000100bebc9c;
  case (undefined1 *)0xbe:
    goto code_r0x000100bebc00;
  case (undefined1 *)0xc0:
  case (undefined1 *)0xc3:
    puVar5 = (undefined1 *)0x6469616e75626564;
  case (undefined1 *)0xc4:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x656d000000000000);
code_r0x000100bebc44:
    break;
  case (undefined1 *)0xc1:
  case (undefined1 *)0xf3:
    goto code_r0x000100bebc44;
  case (undefined1 *)0xc5:
  case (undefined1 *)0xc7:
  case (undefined1 *)0xf5:
  case (undefined1 *)0xf7:
    goto code_r0x000100bebc5c;
  case (undefined1 *)0xc6:
    puVar5 = (undefined1 *)0x61746164;
code_r0x000100bebc70:
    break;
  case (undefined1 *)0xd0:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (ulong)(&BYTE_100c9f8e8)[(long)puVar8] * 4
    ;
code_r0x000100bebc00:
                    /* WARNING: Could not recover jumptable at 0x000100bebc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return puVar5;
  case (undefined1 *)0xee:
    goto switchD_100beb9e8_caseD_fc;
  case (undefined1 *)0xef:
    pcVar12 = (code *)&DAT_e400000000000000;
    puVar5 = (undefined1 *)0x656d616e;
code_r0x000100bebc80:
    break;
  case (undefined1 *)0xf6:
    break;
  case (undefined1 *)0xfc:
    puVar6 = puVar5;
    FUN_100beedd4();
    puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x6461000000000000);
    unaff_x20 = (code *)0xea00000000007264;
    goto switchD_100beb9e8_caseD_cc;
  case (undefined1 *)0xfd:
    goto code_r0x000100bebe14;
  case (undefined1 *)0xfe:
    puVar6 = (undefined1 *)0x69735f6775626564;
    unaff_x20 = (code *)0xea0000000000657a;
switchD_100beb9e8_caseD_cc:
    if (puVar5 == puVar6 && unaff_x20 == (code *)&DAT_e800000000000000) {
      uVar3 = 1;
    }
    else {
      FUN_100beeb44();
      uVar3 = (uint)puVar5;
    }
    FUN_100b6f838();
    FUN_100b6f860();
    puVar5 = (undefined1 *)(ulong)(uVar3 & 1);
switchD_100beb9e8_caseD_fc:
    FUN_100b56e60(puVar5);
    return puVar5;
  }
  unaff_x20 = (code *)&SUB_e200000000000000;
  puVar6 = &SUB_00006469;
  puVar8 = (undefined1 *)(param_2 & 0xff);
code_r0x000100bebc9c:
  pbVar9 = &switchD_100bebcb0::switchdataD_100c9f8fc;
  UNRECOVERED_JUMPTABLE_00 =
       (code *)((long)(ulong)(&switchD_100bebcb0::switchdataD_100c9f8fc)[(long)puVar8] * 4 +
               0x100bebcb4);
  switch(puVar8) {
  case (undefined1 *)0x0:
    goto switchD_100bebcb0_caseD_0;
  default:
    unaff_x20 = (code *)&DAT_e500000000000000;
    puVar6 = (undefined1 *)0x6d65;
  case (undefined1 *)0xc:
  case (undefined1 *)0x14:
  case (undefined1 *)0x1c:
  case (undefined1 *)0x23:
  case (undefined1 *)0x64:
  case (undefined1 *)0x6a:
  case (undefined1 *)0x78:
  case (undefined1 *)0x80:
  case (undefined1 *)0x93:
    puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x69610000);
    goto switchD_100bebcb0_caseD_c4;
  case (undefined1 *)0x2:
  case (undefined1 *)0x6e:
    unaff_x20 = (code *)&DAT_e800000000000000;
  case (undefined1 *)0x41:
  case (undefined1 *)0x47:
  case (undefined1 *)0x4a:
  case (undefined1 *)0x4e:
  case (undefined1 *)0x54:
  case (undefined1 *)0x7a:
  case (undefined1 *)0x82:
  case (undefined1 *)0x94:
  case (undefined1 *)0x95:
  case (undefined1 *)0x9b:
    puVar6 = (undefined1 *)0x7375;
    goto switchD_100bebcb0_caseD_f;
  case (undefined1 *)0x3:
  case (undefined1 *)0x3e:
  case (undefined1 *)0x44:
  case (undefined1 *)0x6f:
  case (undefined1 *)0x7c:
    puVar6 = (undefined1 *)0x615f7069;
  case (undefined1 *)0xe:
  case (undefined1 *)0x16:
  case (undefined1 *)0x6b:
    puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x646400000000);
    goto switchD_100bebcb0_caseD_1f;
  case (undefined1 *)0x4:
  case (undefined1 *)0x2a:
  case (undefined1 *)0x31:
  case (undefined1 *)0x4c:
  case (undefined1 *)0x50:
  case (undefined1 *)0x70:
  case (undefined1 *)0x87:
  case (undefined1 *)0x97:
    unaff_x20 = (code *)&DAT_e700000000000000;
  case (undefined1 *)0x1a:
  case (undefined1 *)0x21:
  case (undefined1 *)0x56:
  case (undefined1 *)0x5d:
  case (undefined1 *)0x77:
  case (undefined1 *)0x7e:
    puVar6 = (undefined1 *)0x6573;
    goto switchD_100bebcb0_caseD_a;
  case (undefined1 *)0x5:
  case (undefined1 *)0x71:
    unaff_x20 = (code *)&DAT_e400000000000000;
    puVar6 = (undefined1 *)0x616e;
  case (undefined1 *)0x2c:
  case (undefined1 *)0x33:
  case (undefined1 *)0x72:
  case (undefined1 *)0x89:
    puVar6 = (undefined1 *)(ulong)((uint)puVar6 & 0xffff | 0x656d0000);
    goto switchD_100bebcb0_caseD_0;
  case (undefined1 *)0x6:
  case (undefined1 *)0x5f:
  case (undefined1 *)0xc8:
    unaff_x20 = (code *)0xe300000000000000;
  case (undefined1 *)0x26:
  case (undefined1 *)0x2d:
  case (undefined1 *)0x6c:
  case (undefined1 *)0x83:
  case (undefined1 *)0xfc:
    puVar6 = (undefined1 *)0x6567;
    goto switchD_100bebcb0_caseD_59;
  case (undefined1 *)0x7:
  case (undefined1 *)0x52:
  case (undefined1 *)0x5e:
  case (undefined1 *)0x66:
  case (undefined1 *)0x73:
    unaff_x20 = (code *)&DAT_e400000000000000;
    puVar6 = (undefined1 *)0x61746164;
  case (undefined1 *)0xa1:
    goto switchD_100bebcb0_caseD_0;
  case (undefined1 *)0x8:
  case (undefined1 *)0x10:
  case (undefined1 *)0x2b:
  case (undefined1 *)0x32:
  case (undefined1 *)0x60:
  case (undefined1 *)0x88:
    goto switchD_100bebcb0_caseD_8;
  case (undefined1 *)0xa:
  case (undefined1 *)0x12:
  case (undefined1 *)0x4d:
  case (undefined1 *)0x51:
  case (undefined1 *)0x98:
    goto switchD_100bebcb0_caseD_a;
  case (undefined1 *)0xb:
  case (undefined1 *)0x13:
  case (undefined1 *)0x5b:
  case (undefined1 *)0x62:
  case (undefined1 *)0x99:
    goto switchD_100bebcb0_caseD_b;
  case (undefined1 *)0xd:
  case (undefined1 *)0x15:
  case (undefined1 *)0x1e:
  case (undefined1 *)0x25:
  case (undefined1 *)0x74:
  case (undefined1 *)0x8f:
  case (undefined1 *)0xa0:
    goto switchD_100bebcb0_caseD_d;
  case (undefined1 *)0xf:
  case (undefined1 *)0x17:
  case (undefined1 *)0x1d:
  case (undefined1 *)0x24:
  case (undefined1 *)0x69:
    goto switchD_100bebcb0_caseD_f;
  case (undefined1 *)0x18:
    goto switchD_100bebcb0_caseD_18;
  case (undefined1 *)0x1b:
  case (undefined1 *)0x22:
  case (undefined1 *)0x68:
  case (undefined1 *)0x7b:
  case (undefined1 *)0x7f:
  case (undefined1 *)0x91:
    goto switchD_100bebcb0_caseD_1b;
  case (undefined1 *)0x1f:
  case (undefined1 *)0x58:
  case (undefined1 *)0xa2:
  case (undefined1 *)0xed:
    goto switchD_100bebcb0_caseD_1f;
  case (undefined1 *)0x28:
  case (undefined1 *)0x2f:
  case (undefined1 *)0x40:
  case (undefined1 *)0x46:
  case (undefined1 *)0x79:
  case (undefined1 *)0x81:
  case (undefined1 *)0x85:
  case (undefined1 *)0x92:
  case (undefined1 *)0x9d:
    goto switchD_100bebcb0_caseD_28;
  case (undefined1 *)0x29:
  case (undefined1 *)0x30:
  case (undefined1 *)0x57:
  case (undefined1 *)0x5c:
  case (undefined1 *)0x63:
  case (undefined1 *)0x86:
  case (undefined1 *)0x9e:
    goto switchD_100bebcb0_caseD_29;
  case (undefined1 *)0x42:
  case (undefined1 *)0x48:
  case (undefined1 *)0x76:
    goto switchD_100bebcb0_caseD_42;
  case (undefined1 *)0x43:
  case (undefined1 *)0x49:
  case (undefined1 *)0x55:
  case (undefined1 *)0x9c:
    goto switchD_100bebcb0_caseD_43;
  case (undefined1 *)0x59:
    goto switchD_100bebcb0_caseD_59;
  case (undefined1 *)0x65:
    goto switchD_100bebcb0_caseD_65;
  case (undefined1 *)0xa4:
  case (undefined1 *)0xd4:
    goto switchD_100bebcb0_caseD_a4;
  case (undefined1 *)0xa5:
  case (undefined1 *)0xab:
  case (undefined1 *)0xd5:
  case (undefined1 *)0xde:
    goto switchD_100bebcb0_caseD_a5;
  case (undefined1 *)0xa6:
  case (undefined1 *)0xd6:
  case (undefined1 *)0xdc:
  case (undefined1 *)0xdd:
    goto switchD_100bebcb0_caseD_a6;
  case (undefined1 *)0xa7:
  case (undefined1 *)0xb4:
  case (undefined1 *)0xd7:
  case (undefined1 *)0xe0:
  case (undefined1 *)0xe4:
    goto switchD_100bebcb0_caseD_a7;
  case (undefined1 *)0xa8:
  case (undefined1 *)0xd8:
    goto switchD_100bebcb0_caseD_a8;
  case (undefined1 *)0xa9:
  case (undefined1 *)0xb5:
  case (undefined1 *)0xd9:
  case (undefined1 *)0xe5:
    puVar8 = (undefined1 *)(param_2 & 0xff);
    pbVar9 = &BYTE_100c9f90c;
    puVar11 = (undefined1 *)(ulong)(&BYTE_100c9f90c)[(long)puVar8];
    UNRECOVERED_JUMPTABLE_00 = (code *)(&UNK_100bebf08 + (long)puVar11 * 4);
    bVar1 = (bool)in_ZR;
    switch(puVar8) {
    case (undefined1 *)0x0:
    case (undefined1 *)0x1b:
    case (undefined1 *)0x22:
    case (undefined1 *)0x50:
    case (undefined1 *)0x78:
      break;
    default:
      FUN_100beeea4();
      break;
    case (undefined1 *)0x2:
    case (undefined1 *)0x3d:
    case (undefined1 *)0x41:
    case (undefined1 *)0x88:
    case (undefined1 *)0xf2:
      FUN_100beee74();
    case (undefined1 *)0xb:
    case (undefined1 *)0x12:
    case (undefined1 *)0x58:
    case (undefined1 *)0x6b:
    case (undefined1 *)0x6f:
    case (undefined1 *)0x81:
      break;
    case (undefined1 *)0x3:
    case (undefined1 *)0x4b:
    case (undefined1 *)0x52:
    case (undefined1 *)0x89:
      pcVar12 = (code *)&DAT_e400000000000000;
    case (undefined1 *)0x18:
    case (undefined1 *)0x1f:
    case (undefined1 *)0x30:
    case (undefined1 *)0x36:
    case (undefined1 *)0x69:
    case (undefined1 *)0x71:
    case (undefined1 *)0x75:
    case (undefined1 *)0x82:
    case (undefined1 *)0x8d:
      puVar6 = (undefined1 *)0x616e;
LAB_100bebf34:
      puVar6 = (undefined1 *)(ulong)((uint)puVar6 & 0xffff | 0x656d0000);
switchD_100bebe90_caseD_e2:
      break;
    case (undefined1 *)0x4:
    case (undefined1 *)0xc:
    case (undefined1 *)0x13:
    case (undefined1 *)0x54:
    case (undefined1 *)0x5a:
    case (undefined1 *)0x68:
    case (undefined1 *)0x70:
    case (undefined1 *)0x83:
      pcVar12 = (code *)&DAT_e500000000000000;
    case (undefined1 *)0xb4:
    case (undefined1 *)0xde:
    case (undefined1 *)0xe6:
    case (undefined1 *)0xe8:
      puVar6 = (undefined1 *)0x6176;
switchD_100bebe90_caseD_1e:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x756c0000);
switchD_100bebe90_caseD_51:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x6500000000);
code_r0x000100bebf20:
      break;
    case (undefined1 *)0x5:
    case (undefined1 *)0xe:
    case (undefined1 *)0x15:
    case (undefined1 *)0x64:
    case (undefined1 *)0x7f:
    case (undefined1 *)0x90:
      pcVar12 = (code *)&DAT_e400000000000000;
    case (undefined1 *)0x19:
    case (undefined1 *)0x20:
    case (undefined1 *)0x47:
    case (undefined1 *)0x4c:
    case (undefined1 *)0x53:
    case (undefined1 *)0x76:
    case (undefined1 *)0x8e:
      puVar6 = (undefined1 *)0x7974;
code_r0x000100bebf4c:
      puVar6 = (undefined1 *)(ulong)((uint)puVar6 & 0xffff | 0x65700000);
      break;
    case (undefined1 *)0x6:
    case (undefined1 *)0x5b:
      goto switchD_100bebcb0_caseD_ec;
    case (undefined1 *)0x7:
    case (undefined1 *)0xd:
    case (undefined1 *)0x14:
    case (undefined1 *)0x59:
      FUN_100beec78();
    case (undefined1 *)0x33:
    case (undefined1 *)0x39:
    case (undefined1 *)0x45:
    case (undefined1 *)0x8c:
      break;
    case (undefined1 *)0x8:
      goto code_r0x000100bebf64;
    case (undefined1 *)0xa:
    case (undefined1 *)0x11:
    case (undefined1 *)0x46:
    case (undefined1 *)0x4d:
    case (undefined1 *)0x67:
    case (undefined1 *)0x6e:
      goto code_r0x000100bebf20;
    case (undefined1 *)0xf:
    case (undefined1 *)0x48:
    case (undefined1 *)0x92:
    case (undefined1 *)0xdd:
      goto code_r0x000100bebf58;
    case (undefined1 *)0x16:
    case (undefined1 *)0x1d:
    case (undefined1 *)0x5c:
    case (undefined1 *)0x73:
    case (undefined1 *)0xec:
    case (undefined1 *)0xf4:
    case (undefined1 *)0xfc:
      goto code_r0x000100bebf8c;
    case (undefined1 *)0x1a:
    case (undefined1 *)0x21:
    case (undefined1 *)0x3c:
    case (undefined1 *)0x40:
    case (undefined1 *)0x60:
    case (undefined1 *)0x77:
    case (undefined1 *)0x87:
      goto switchD_100bebe90_caseD_51;
    case (undefined1 *)0x1c:
    case (undefined1 *)0x23:
    case (undefined1 *)0x62:
    case (undefined1 *)0x79:
      goto code_r0x000100bebf80;
    case (undefined1 *)0x2e:
    case (undefined1 *)0x34:
    case (undefined1 *)0x5f:
    case (undefined1 *)0x6c:
      goto code_r0x000100bebf4c;
    case (undefined1 *)0x31:
    case (undefined1 *)0x37:
    case (undefined1 *)0x3a:
    case (undefined1 *)0x3e:
    case (undefined1 *)0x44:
    case (undefined1 *)0x6a:
    case (undefined1 *)0x72:
    case (undefined1 *)0x84:
    case (undefined1 *)0x85:
    case (undefined1 *)0x8b:
      goto switchD_100bebe90_caseD_e2;
    case (undefined1 *)0x32:
    case (undefined1 *)0x38:
    case (undefined1 *)0x66:
      goto switchD_100bebe90_caseD_1e;
    case (undefined1 *)0x42:
    case (undefined1 *)0x4e:
    case (undefined1 *)0x56:
    case (undefined1 *)0x63:
    case (undefined1 *)0xf8:
      goto code_r0x000100bebf68;
    case (undefined1 *)0x49:
    case (undefined1 *)0xda:
    case (undefined1 *)0xee:
    case (undefined1 *)0xf6:
    case (undefined1 *)0xfe:
      FUN_100bc9c68();
      pcVar12 = (code *)CONCAT44(uVar4,uVar3);
      unaff_x21 = puVar5;
code_r0x000100bebfbc:
      FUN_100bc9c68();
      if (unaff_x21 == puVar5 && pcVar12 == (code *)CONCAT44(uVar4,uVar3)) {
        uVar3 = 1;
      }
      else {
        FUN_100beeb44(unaff_x21);
        uVar3 = (uint)unaff_x21;
      }
      FUN_100b6f838();
      FUN_100b6f860();
      return (undefined1 *)(ulong)(uVar3 & 1);
    case (undefined1 *)0x4f:
    case (undefined1 *)0xb8:
code_r0x000100bebf88:
code_r0x000100bebf8c:
      FUN_100b56e60(puVar5);
      return puVar5;
    case (undefined1 *)0x55:
      goto code_r0x000100bebf5c;
    case (undefined1 *)0x5e:
      goto LAB_100bebf34;
    case (undefined1 *)0x61:
      goto LAB_100bebf78;
    case (undefined1 *)0x91:
      goto code_r0x000100bebf74;
    case (undefined1 *)0x94:
    case (undefined1 *)0xc4:
      goto code_r0x000100bec054;
    case (undefined1 *)0x95:
    case (undefined1 *)0x9b:
    case (undefined1 *)0xc5:
    case (undefined1 *)0xce:
      goto code_r0x000100bec09c;
    case (undefined1 *)0x96:
    case (undefined1 *)0xc6:
    case (undefined1 *)0xcc:
    case (undefined1 *)0xcd:
      goto code_r0x000100bec0c0;
    case (undefined1 *)0x97:
    case (undefined1 *)0xa4:
    case (undefined1 *)0xc7:
    case (undefined1 *)0xd0:
    case (undefined1 *)0xd4:
      goto switchD_100bec0c4_caseD_23;
    case (undefined1 *)0x98:
    case (undefined1 *)0xc8:
      goto switchD_100bec0c4_caseD_4;
    case (undefined1 *)0x99:
    case (undefined1 *)0xa5:
    case (undefined1 *)0xc9:
    case (undefined1 *)0xd5:
      puVar6 = (undefined1 *)0x6576656c;
      goto switchD_100bec0c4_caseD_4f;
    case (undefined1 *)0x9a:
      goto switchD_100bebe90_caseD_d3;
    case (undefined1 *)0x9c:
    case (undefined1 *)0x9f:
      goto code_r0x000100bec08c;
    case (undefined1 *)0x9d:
    case (undefined1 *)0xcf:
      goto LAB_100bec094;
    case (undefined1 *)0x9e:
      goto code_r0x000100bec0a8;
    case (undefined1 *)0xa0:
      goto code_r0x000100bec090;
    case (undefined1 *)0xa1:
    case (undefined1 *)0xa3:
    case (undefined1 *)0xd1:
    case (undefined1 *)0xd3:
      goto LAB_100bec0ac;
    case (undefined1 *)0xa2:
      goto code_r0x000100bec0b8;
    case (undefined1 *)0xac:
      goto code_r0x000100bec048;
    case (undefined1 *)0xca:
      goto code_r0x000100bec014;
    case (undefined1 *)0xcb:
      goto switchD_100bec0c4_switchD;
    case (undefined1 *)0xd2:
      FUN_100beee74();
      goto switchD_100bec0c4_caseD_0;
    case (undefined1 *)0xd8:
      goto code_r0x000100bebfbc;
    case (undefined1 *)0xd9:
    case (undefined1 *)0xed:
    case (undefined1 *)0xf5:
    case (undefined1 *)0xfd:
      goto code_r0x000100bec264;
    case (undefined1 *)0xdc:
switchD_100bec0c4_caseD_f1:
      puVar5 = puVar6;
      pcVar12 = (code *)&DAT_e600000000000000;
      goto LAB_100bec1b0;
    case (undefined1 *)0xf0:
      goto code_r0x000100bec13c;
    case (undefined1 *)0xf1:
      goto LAB_100bec1f8;
    case (undefined1 *)0xf9:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff00000000ffff | 0x65696b6f0000);
      goto switchD_100bec0c4_caseD_bc;
    case (undefined1 *)0xfa:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x7473000000000000);
      goto LAB_100bec2f8;
    case (undefined1 *)0xfb:
      goto code_r0x000100bec304;
    }
LAB_100bebf60:
    bVar1 = puVar5 == puVar6;
code_r0x000100bebf64:
    in_ZR = false;
    if (bVar1) {
      in_ZR = unaff_x20 == pcVar12;
    }
code_r0x000100bebf68:
    if ((bool)in_ZR) {
LAB_100bebf78:
      unaff_x21 = (undefined1 *)0x1;
    }
    else {
      FUN_100beeb6c();
      unaff_x21 = puVar5;
code_r0x000100bebf74:
    }
    FUN_100b6f860();
code_r0x000100bebf80:
    FUN_100b6f838();
    puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
    goto code_r0x000100bebf88;
  case (undefined1 *)0xaa:
    goto switchD_100bebcb0_caseD_aa;
  case (undefined1 *)0xac:
  case (undefined1 *)0xaf:
    goto switchD_100bebcb0_caseD_ac;
  case (undefined1 *)0xad:
  case (undefined1 *)0xdf:
    goto switchD_100bebcb0_caseD_ad;
  case (undefined1 *)0xae:
  case (undefined1 *)0xb1:
  case (undefined1 *)0xb3:
  case (undefined1 *)0xe1:
  case (undefined1 *)0xe3:
switchD_100bebcb0_caseD_b2:
    FUN_100beec18();
switchD_100bebcb0_caseD_a6:
    puVar8 = (undefined1 *)((ulong)puVar5 & 0xff);
switchD_100bebcb0_caseD_db:
    pbVar9 = &switchD_100bebe90::switchdataD_100c9f904;
    UNRECOVERED_JUMPTABLE_00 = (code *)0x100bebe94;
switchD_100bebcb0_caseD_a8:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (ulong)pbVar9[(long)puVar8] * 4;
switchD_100bebcb0_caseD_a7:
    puVar5 = puVar6;
switchD_100bebcb0_caseD_e2:
                    /* WARNING: Could not recover jumptable at 0x000100bebe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(puVar5);
    return puVar5;
  case (undefined1 *)0xb0:
    goto switchD_100bebcb0_caseD_b0;
  case (undefined1 *)0xb2:
    goto switchD_100bebcb0_caseD_b2;
  case (undefined1 *)0xbc:
switchD_100bebcb0_caseD_bc:
    pbVar9 = (byte *)0x65646f63;
    goto switchD_100bebcb0_caseD_aa;
  case (undefined1 *)0xc4:
  case (undefined1 *)0xee:
  case (undefined1 *)0xf6:
  case (undefined1 *)0xf8:
    goto switchD_100bebcb0_caseD_c4;
  case (undefined1 *)0xda:
    pcVar12 = (code *)pbVar9;
    puVar5 = puVar8;
    if (!(bool)in_ZR) {
      pcVar12 = UNRECOVERED_JUMPTABLE_00;
      puVar5 = (undefined1 *)(ulong)(&switchD_100bebcb0::switchdataD_100c9f8fc)[(long)puVar8];
    }
    if ((param_2 & 0xff) != 0) {
      in_ZR = (uVar3 & 0xff) == 1;
      puVar8 = (undefined1 *)0x5f7972746e756f63;
      goto switchD_100bebcb0_caseD_bc;
    }
    pbVar9 = &DAT_e400000000000000;
    goto LAB_100bebe20;
  case (undefined1 *)0xdb:
    goto switchD_100bebcb0_caseD_db;
  case (undefined1 *)0xe2:
    goto switchD_100bebcb0_caseD_e2;
  case (undefined1 *)0xe8:
    goto switchD_100bebcb0_caseD_e8;
  case (undefined1 *)0xe9:
  case (undefined1 *)0xfd:
code_r0x000100bec014:
    pcVar12 = (code *)&SUB_e900000000000070;
    FUN_100beec18();
    puVar8 = (undefined1 *)((ulong)puVar5 & 0xff);
    pbVar9 = &BYTE_100c9f914;
    puVar11 = (undefined1 *)(ulong)(&BYTE_100c9f914)[(long)puVar8];
    UNRECOVERED_JUMPTABLE_00 = (code *)((long)puVar11 * 4 + 0x100bec050);
    unaff_x20 = (code *)0x70;
    puVar5 = puVar6;
code_r0x000100bec048:
    unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffffffff | 0xe900000000000000);
    switch(UNRECOVERED_JUMPTABLE_00) {
    case (code *)0x100bec050:
switchD_100bebe90_caseD_d3:
      FUN_100beee2c();
    case (code *)0x100bec054:
code_r0x000100bec054:
LAB_100bec0ac:
      puVar8 = (undefined1 *)((ulong)uVar3 & 0xff);
code_r0x000100bec0b0:
      pbVar9 = &switchD_100bec0c4::switchdataD_100c9f91b;
code_r0x000100bec0b8:
      UNRECOVERED_JUMPTABLE_00 = (code *)0x100bec0c8;
code_r0x000100bec0bc:
      puVar11 = (undefined1 *)(ulong)pbVar9[(long)puVar8];
      goto code_r0x000100bec0c0;
    case (code *)0x100bec058:
    case (code *)0x100bec05c:
      puVar5 = (undefined1 *)0x6f62;
    case (code *)0x100bec060:
      goto code_r0x000100bec060;
    case (code *)0x100bec064:
      goto switchD_100bebe90_caseD_9f;
    case (code *)0x100bec068:
      FUN_100beee14();
    case (code *)0x100bec06c:
      goto LAB_100bec0ac;
    case (code *)0x100bec070:
    case (code *)0x100bec074:
      puVar5 = (undefined1 *)0x656c;
    case (code *)0x100bec078:
      goto switchD_100bebe90_caseD_a1;
    case (code *)0x100bec07c:
      goto code_r0x000100bec07c;
    case (code *)0x100bec080:
      goto code_r0x000100bec080;
    case (code *)0x100bec084:
      FUN_100beeccc();
    case (code *)0x100bec088:
      goto LAB_100bec0ac;
    case (code *)0x100bec08c:
code_r0x000100bec08c:
      puVar5 = (undefined1 *)0x6573;
    case (code *)0x100bec090:
code_r0x000100bec090:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x65760000);
    case (code *)0x100bec094:
      goto LAB_100bec094;
    case (code *)0x100bec09c:
      goto code_r0x000100bec09c;
    case (code *)0x100bec0a0:
      goto code_r0x000100bec0a0;
    case (code *)0x100bec0a4:
      goto code_r0x000100bec0a4;
    case (code *)0x100bec0a8:
      goto code_r0x000100bec0a8;
    case (code *)0x100bec0ac:
      goto LAB_100bec0ac;
    case (code *)0x100bec0b0:
      goto code_r0x000100bec0b0;
    case (code *)0x100bec0bc:
      goto code_r0x000100bec0bc;
    case (code *)0x100bec0c0:
      goto code_r0x000100bec0c0;
    case (code *)0x100bec0c8:
      FUN_100beeea4();
      break;
    case (code *)0x100bec0d0:
switchD_100bec0c4_caseD_4:
      pcVar12 = (code *)&DAT_e400000000000000;
    case (code *)0x100bec0d4:
      puVar6 = (undefined1 *)0x6f62;
    case (code *)0x100bec0d8:
      goto switchD_100bec0c4_caseD_23;
    case (code *)0x100bec0f4:
switchD_100bec0c4_caseD_4f:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x6c00000000);
      break;
    case (code *)0x100bec104:
      puVar6 = (undefined1 *)0x7974697265766573;
      FUN_100beef9c();
      break;
    case (code *)0x100bec130:
      goto LAB_100bec130;
    case (code *)0x100bec15c:
      puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff00000000ffff | 0x73656d610000);
      if (((ulong)puVar5 & 0xff) == 0) goto switchD_100bec0c4_caseD_f1;
      in_ZR = ((uint)puVar5 & 0xff) == 1;
      puVar8 = (undefined1 *)0x7265747369676572;
      pbVar9 = (byte *)0xe900000000000073;
      UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e800000000000000;
      puVar11 = (undefined1 *)0x6e73;
    case (code *)0x100bec190:
      goto code_r0x000100bec190;
    case (code *)0x100bec198:
      goto code_r0x000100bec198;
    case (code *)0x100bec19c:
      goto code_r0x000100bec19c;
    case (code *)0x100bec1d4:
      goto switchD_100bec0c4_caseD_bb;
    case (code *)0x100bec1d8:
      goto switchD_100bec0c4_caseD_ff;
    case (code *)0x100bec1dc:
      goto code_r0x000100bec1dc;
    case (code *)0x100bec1e4:
      goto code_r0x000100bec1e4;
    case (code *)0x100bec1f0:
      goto switchD_100bebe90_caseD_e1;
    case (code *)0x100bec1f4:
      goto LAB_100bec1f4;
    case (code *)0x100bec200:
      goto code_r0x000100bec200;
    case (code *)0x100bec208:
      goto switchD_100bec0c4_caseD_9d;
    case (code *)0x100bec20c:
      goto code_r0x000100bec20c;
    case (code *)0x100bec218:
      goto code_r0x000100bec218;
    case (code *)0x100bec220:
      goto code_r0x000100bec220;
    case FUN_100bec228:
    case (code *)0x100bec234:
      goto code_r0x000100bec234;
    case (code *)0x100bec284:
switchD_100bec0c4_caseD_bc:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x73000000000000);
LAB_100bec2f8:
      puVar8 = (undefined1 *)((ulong)uVar3 & 0xff);
      pbVar9 = &switchD_100bec310::switchdataD_100c9f929;
code_r0x000100bec304:
                    /* WARNING: Could not recover jumptable at 0x000100bec310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)pbVar9[(long)puVar8] * 4 + 0x100bec314))(puVar5);
      return puVar5;
    case (code *)0x100bec2f0:
      puVar5 = (undefined1 *)0x6c7275;
      goto LAB_100bec2f8;
    case (code *)0x100bec340:
      if (puVar5 != (undefined1 *)0x73726564616568 || unaff_x20 != pcVar12) {
        FUN_100beeb6c();
        unaff_x21 = puVar5;
        goto code_r0x000100bec3ac;
      }
      uVar3 = 1;
LAB_100bec3b4:
      FUN_100b6f860();
      FUN_100b6f838();
      puVar5 = (undefined1 *)(ulong)(uVar3 & 1);
code_r0x000100bec3c4:
      FUN_100b56e60(puVar5);
      return puVar5;
    case (code *)0x100bec3ac:
code_r0x000100bec3ac:
      uVar3 = (uint)unaff_x21;
      goto LAB_100bec3b4;
    case (code *)0x100bec3c4:
      goto code_r0x000100bec3c4;
    case (code *)0x100bec420:
      FUN_100b6f838();
      FUN_100b6f860();
      puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
      FUN_100b56e60(puVar5);
      return puVar5;
    case (code *)0x100bec44c:
      puVar6 = (undefined1 *)0xe900000000000064;
      lVar7 = 0x657474616d726f66;
      if (((ulong)puVar5 & 0xff) == 0) {
        puVar5 = (undefined1 *)0xe900000000000064;
        lVar2 = lVar7;
      }
      else {
        bVar1 = ((uint)puVar5 & 0xff) != 1;
        lVar2 = 0x6567617373656d;
        if (bVar1) {
          lVar2 = 0x736d61726170;
        }
        puVar5 = &DAT_e700000000000000;
        if (bVar1) {
          puVar5 = &DAT_e600000000000000;
        }
      }
      uVar3 = uVar3 & 0xff;
      if (uVar3 != 0) {
        lVar7 = 0x6567617373656d;
        if (uVar3 != 1) {
          lVar7 = 0x736d61726170;
        }
        puVar6 = &DAT_e700000000000000;
        if (uVar3 != 1) {
          puVar6 = &DAT_e600000000000000;
        }
      }
      if (lVar2 == lVar7 && puVar5 == puVar6) {
        uVar3 = 1;
      }
      else {
        FUN_100beeb6c();
        uVar3 = (uint)lVar2;
      }
      FUN_100b6f860();
      FUN_100b6f838();
      puVar5 = (undefined1 *)(ulong)(uVar3 & 1);
      FUN_100b56e60(puVar5);
      return puVar5;
    }
    break;
  case (undefined1 *)0xea:
  case (undefined1 *)0xfe:
    goto switchD_100bebcb0_caseD_ea;
  case (undefined1 *)0xec:
switchD_100bebcb0_caseD_ec:
    pcVar12 = (code *)&DAT_e400000000000000;
code_r0x000100bebf58:
    puVar6 = (undefined1 *)0x6e75;
code_r0x000100bebf5c:
    puVar6 = (undefined1 *)(ulong)((uint)puVar6 & 0xffff | 0x74690000);
    goto LAB_100bebf60;
  }
switchD_100bec0c4_caseD_0:
  if (puVar5 == puVar6 && unaff_x20 == pcVar12) {
LAB_100bec130:
    puVar5 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb6c();
  }
  FUN_100b6f860();
  FUN_100b6f838();
  unaff_x21 = puVar5;
code_r0x000100bec13c:
  puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
  FUN_100b56e60(puVar5);
  return puVar5;
switchD_100bebcb0_caseD_aa:
  pbVar9 = (byte *)((ulong)pbVar9 | 0xec00000000000000);
switchD_100bebcb0_caseD_a4:
  UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e600000000000000;
  puVar6 = puVar8;
  if (!(bool)in_ZR) {
    puVar6 = (undefined1 *)0x6e6f69676572;
  }
code_r0x000100bebe14:
  if (!(bool)in_ZR) {
    pbVar9 = (byte *)UNRECOVERED_JUMPTABLE_00;
  }
LAB_100bebe20:
  if (puVar5 == puVar6 && pcVar12 == (code *)pbVar9) {
switchD_100bebcb0_caseD_ac:
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb44();
    unaff_x21 = puVar5;
  }
  goto switchD_100bebcb0_caseD_b0;
code_r0x000100bec190:
  puVar11 = (undefined1 *)((ulong)puVar11 | 0x687370610000);
code_r0x000100bec198:
  puVar11 = (undefined1 *)((ulong)puVar11 | 0x746f000000000000);
code_r0x000100bec19c:
  puVar5 = puVar8;
  pcVar12 = (code *)pbVar9;
  if (!(bool)in_ZR) {
    puVar5 = puVar11;
    pcVar12 = UNRECOVERED_JUMPTABLE_00;
  }
LAB_100bec1b0:
  if ((uVar3 & 0xff) == 0) {
LAB_100bec1f4:
    unaff_x20 = (code *)&DAT_e600000000000000;
  }
  else {
    in_ZR = (uVar3 & 0xff) == 1;
    puVar8 = (undefined1 *)0x7265747369676572;
    pbVar9 = (byte *)0xe900000000000073;
switchD_100bec0c4_caseD_bb:
    UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e800000000000000;
switchD_100bec0c4_caseD_ff:
    puVar11 = (undefined1 *)0x6e73;
code_r0x000100bec1dc:
    puVar11 = (undefined1 *)((ulong)puVar11 | 0x687370610000);
code_r0x000100bec1e4:
    puVar6 = puVar8;
    unaff_x20 = (code *)pbVar9;
    if (!(bool)in_ZR) {
      puVar6 = (undefined1 *)((ulong)puVar11 | 0x746f000000000000);
      unaff_x20 = UNRECOVERED_JUMPTABLE_00;
    }
switchD_100bebe90_caseD_e1:
  }
LAB_100bec1f8:
  in_ZR = false;
  if (puVar5 == puVar6) {
    in_ZR = pcVar12 == unaff_x20;
  }
code_r0x000100bec200:
  if ((bool)in_ZR) {
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb44();
switchD_100bec0c4_caseD_9d:
    unaff_x21 = puVar5;
code_r0x000100bec20c:
  }
  FUN_100b6f838();
  goto code_r0x000100bec218;
code_r0x000100bec060:
  puVar5 = (undefined1 *)(ulong)((uint)puVar5 & 0xffff | 0x79640000);
switchD_100bebe90_caseD_9f:
  goto LAB_100bec0ac;
switchD_100bebe90_caseD_a1:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x65760000);
code_r0x000100bec07c:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x6c00000000);
code_r0x000100bec080:
  goto LAB_100bec0ac;
LAB_100bec094:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff | 0x7974697200000000);
  goto code_r0x000100bec09c;
switchD_100bec0c4_caseD_23:
  puVar6 = (undefined1 *)(ulong)((uint)puVar6 & 0xffff | 0x79640000);
  goto switchD_100bec0c4_caseD_0;
code_r0x000100bec09c:
code_r0x000100bec0a0:
code_r0x000100bec0a4:
code_r0x000100bec0a8:
  goto LAB_100bec0ac;
switchD_100bebcb0_caseD_b0:
  FUN_100b6f838();
  goto switchD_100bebcb0_caseD_ad;
switchD_100bebcb0_caseD_59:
  puVar6 = (undefined1 *)(ulong)((uint)puVar6 & 0xffff | 0x6f0000);
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_a:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x6d670000);
switchD_100bebcb0_caseD_1b:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x6e6500000000);
switchD_100bebcb0_caseD_b:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x74000000000000);
switchD_100bebcb0_caseD_28:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_1f:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x6572000000000000);
switchD_100bebcb0_caseD_65:
  unaff_x20 = (code *)0x7373;
switchD_100bebcb0_caseD_8:
  unaff_x20 = (code *)((ulong)unaff_x20 & 0xffffffffffff | 0xea00000000000000);
switchD_100bebcb0_caseD_18:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_f:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffff0000ffff | 0x72650000);
switchD_100bebcb0_caseD_43:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x616e00000000);
switchD_100bebcb0_caseD_d:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffffffffffff | 0x656d000000000000);
switchD_100bebcb0_caseD_29:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_c4:
  puVar6 = (undefined1 *)((ulong)puVar6 & 0xffff0000ffffffff | 0x6c00000000);
  goto switchD_100bebcb0_caseD_42;
code_r0x000100bec218:
  FUN_100b6f860();
  puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
code_r0x000100bec220:
  FUN_100b56e60(puVar5);
  return puVar5;
switchD_100bebcb0_caseD_ad:
  FUN_100b6f860();
  puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
switchD_100bebcb0_caseD_a5:
  FUN_100b56e60(puVar5);
  return puVar5;
switchD_100bebcb0_caseD_42:
switchD_100bebcb0_caseD_0:
  if (puVar5 == puVar6 && pcVar12 == unaff_x20) {
switchD_100bebcb0_caseD_ea:
    uVar3 = 1;
  }
  else {
    FUN_100beeb44();
    uVar3 = (uint)puVar5;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  puVar5 = (undefined1 *)(ulong)(uVar3 & 1);
switchD_100bebcb0_caseD_e8:
  FUN_100b56e60(puVar5);
  return puVar5;
code_r0x000100bec0c0:
  UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (long)puVar11 * 4;
switchD_100bec0c4_switchD:
                    /* WARNING: Could not recover jumptable at 0x000100bec0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)();
  return puVar5;
code_r0x000100bec234:
  FUN_100beefb0();
  puVar6 = &DAT_7a69735f79646f62;
  UNRECOVERED_JUMPTABLE_00 =
       (code *)(&UNK_100bec274 + (ulong)(&BYTE_100c9f922)[(ulong)puVar5 & 0xff] * 4);
code_r0x000100bec264:
                    /* WARNING: Could not recover jumptable at 0x000100bec270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(puVar6);
  return puVar6;
}



/* Address: 0x100bebbcc | FUN_100bebbcc */

void FUN_100bebbcc(undefined8 param_1,undefined8 param_2)

{
  switchD_100bec5a8::caseD_1b(param_1,param_2,FUN_100b94b98);
  return;
}



/* Address: 0x100bebbd8 | FUN_100bebbd8 */

void FUN_100bebbd8(void)

{
  long extraout_x8;
  
  FUN_100beef88();
                    /* WARNING: Could not recover jumptable at 0x000100bebc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&BYTE_100c9f8f4)[extraout_x8] * 4 + 0x100bebc04))();
  return;
}



/* Address: 0x100bebd70 | FUN_100bebd70 */

void FUN_100bebd70(char param_1,char param_2)

{
  uint uVar1;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar2;
  
  if (param_1 == '\0') {
    puVar4 = &DAT_e400000000000000;
    lVar2 = 0x79746963;
  }
  else {
    puVar4 = (undefined1 *)0xec00000065646f63;
    lVar2 = 0x5f7972746e756f63;
    if (param_1 != '\x01') {
      puVar4 = &DAT_e600000000000000;
      lVar2 = 0x6e6f69676572;
    }
  }
  if (param_2 == '\0') {
    puVar5 = &DAT_e400000000000000;
    lVar3 = 0x79746963;
  }
  else {
    puVar5 = (undefined1 *)0xec00000065646f63;
    lVar3 = 0x5f7972746e756f63;
    if (param_2 != '\x01') {
      puVar5 = &DAT_e600000000000000;
      lVar3 = 0x6e6f69676572;
    }
  }
  if (lVar2 == lVar3 && puVar4 == puVar5) {
    uVar1 = 1;
  }
  else {
    FUN_100beeb44();
    uVar1 = (uint)lVar2;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar1 & 1);
  return;
}



/* Address: 0x100bebe50 | FUN_100bebe50 */

code * FUN_100bebe50(ulong param_1,code *param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  code *pcVar8;
  code *pcVar9;
  byte *pbVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  code *pcVar12;
  code *pcVar13;
  code *pcVar14;
  code *unaff_x21;
  code *unaff_x22;
  undefined8 uVar15;
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar3 = &stack0xffffffffffffffd0;
  pcVar13 = (code *)&SUB_e900000000000070;
  uVar15 = 0x100bebe6c;
  FUN_100beec18();
  pcVar9 = (code *)(param_1 & 0xff);
  pbVar10 = &switchD_100bebe90::switchdataD_100c9f904;
  uVar11 = (ulong)(byte)pcVar9[0x100c9f904];
  UNRECOVERED_JUMPTABLE = (code *)(uVar11 * 4 + 0x100bebe94);
  pcVar14 = (code *)&SUB_e900000000000070;
  pcVar8 = param_3;
  switch(pcVar9) {
  case (code *)0x0:
  case (code *)0x8:
  case (code *)0x23:
  case (code *)0x2a:
  case (code *)0x58:
  case (code *)0x80:
    break;
  default:
    FUN_100beee2c();
    break;
  case (code *)0x2:
  case (code *)0xa:
  case (code *)0x45:
  case (code *)0x49:
  case (code *)0x90:
  case (code *)0xfa:
    FUN_100beee14();
  case (code *)0x13:
  case (code *)0x1a:
  case (code *)0x60:
  case (code *)0x73:
  case (code *)0x77:
  case (code *)0x89:
    break;
  case (code *)0x3:
  case (code *)0xb:
  case (code *)0x53:
  case (code *)0x5a:
  case (code *)0x91:
  case (code *)0x20:
  case (code *)0x27:
  case (code *)0x38:
  case (code *)0x3e:
  case (code *)0x71:
  case (code *)0x79:
  case (code *)0x7d:
  case (code *)0x8a:
  case (code *)0x95:
    param_3 = (code *)0x616e;
    goto switchD_100bebe90_caseD_66;
  case (code *)0x4:
  case (code *)0xc:
  case (code *)0x14:
  case (code *)0x1b:
  case (code *)0x5c:
  case (code *)0x62:
  case (code *)0x70:
  case (code *)0x78:
  case (code *)0x8b:
  case (code *)0xbc:
  case (code *)0xe6:
  case (code *)0xee:
  case (code *)0xf0:
    param_3 = (code *)0x6176;
    goto switchD_100bebe90_caseD_3a;
  case (code *)0x5:
  case (code *)0xd:
  case (code *)0x16:
  case (code *)0x1d:
  case (code *)0x6c:
  case (code *)0x87:
  case (code *)0x98:
  case (code *)0x21:
  case (code *)0x28:
  case (code *)0x4f:
  case (code *)0x54:
  case (code *)0x5b:
  case (code *)0x7e:
  case (code *)0x96:
    param_3 = (code *)0x7974;
    goto switchD_100bebe90_caseD_36;
  case (code *)0x6:
  case (code *)0xe:
  case (code *)0x63:
  case (code *)0x17:
  case (code *)0x50:
  case (code *)0x9a:
  case (code *)0xe5:
    param_3 = (code *)0x6e75;
    goto switchD_100bebe90_caseD_5d;
  case (code *)0x7:
  case (code *)0xf:
  case (code *)0x15:
  case (code *)0x1c:
  case (code *)0x61:
    FUN_100beeccc();
  case (code *)0x3b:
  case (code *)0x41:
  case (code *)0x4d:
  case (code *)0x94:
    break;
  case (code *)0x10:
    goto switchD_100bebe90_caseD_10;
  case (code *)0x12:
  case (code *)0x19:
  case (code *)0x4e:
  case (code *)0x55:
  case (code *)0x6f:
  case (code *)0x76:
    goto switchD_100bebe90_caseD_12;
  case (code *)0x1e:
  case (code *)0x25:
  case (code *)0x64:
  case (code *)0x7b:
  case (code *)0xf4:
  case (code *)0xfc:
    goto switchD_100bebe90_caseD_1e;
  case (code *)0x22:
  case (code *)0x29:
  case (code *)0x44:
  case (code *)0x48:
  case (code *)0x68:
  case (code *)0x7f:
  case (code *)0x8f:
    goto switchD_100bebe90_caseD_22;
  case (code *)0x24:
  case (code *)0x2b:
  case (code *)0x6a:
  case (code *)0x81:
    goto LAB_100bebf60;
  case (code *)0x36:
  case (code *)0x3c:
  case (code *)0x67:
  case (code *)0x74:
    goto switchD_100bebe90_caseD_36;
  case (code *)0x39:
  case (code *)0x3f:
  case (code *)0x42:
  case (code *)0x46:
  case (code *)0x4c:
  case (code *)0x72:
  case (code *)0x7a:
  case (code *)0x8c:
  case (code *)0x8d:
  case (code *)0x93:
    goto switchD_100bebe90_caseD_39;
  case (code *)0x3a:
  case (code *)0x40:
  case (code *)0x6e:
    goto switchD_100bebe90_caseD_3a;
  case (code *)0x4a:
  case (code *)0x56:
  case (code *)0x5e:
  case (code *)0x6b:
    goto switchD_100bebe90_caseD_4a;
  case (code *)0x51:
    goto switchD_100bebe90_caseD_51;
  case (code *)0x57:
  case (code *)0xc0:
    pcVar8 = (code *)0x6176;
    goto switchD_100bebe90_caseD_1e;
  case (code *)0x5d:
    goto switchD_100bebe90_caseD_5d;
  case (code *)0x66:
    goto switchD_100bebe90_caseD_66;
  case (code *)0x69:
    goto switchD_100bebe90_caseD_69;
  case (code *)0x99:
    goto switchD_100bebe90_caseD_99;
  case (code *)0x9c:
  case (code *)0xcc:
    goto switchD_100bebe90_caseD_9c;
  case (code *)0x9d:
  case (code *)0xa3:
  case (code *)0xcd:
  case (code *)0xd6:
    goto switchD_100bebe90_caseD_9d;
  case (code *)0x9e:
  case (code *)0xce:
  case (code *)0xd4:
  case (code *)0xd5:
    goto switchD_100bebe90_caseD_9e;
  case (code *)0x9f:
  case (code *)0xac:
  case (code *)0xcf:
  case (code *)0xd8:
  case (code *)0xdc:
    goto switchD_100bebe90_caseD_9f;
  case (code *)0xa0:
  case (code *)0xd0:
    param_3 = (code *)0x79646f62;
    goto switchD_100bebe90_caseD_9f;
  case (code *)0xa1:
  case (code *)0xad:
  case (code *)0xd1:
  case (code *)0xdd:
    param_3 = (code *)((ulong)param_3 & 0xffff00000000ffff | 0x6c65760000);
    goto LAB_100bec0ac;
  case (code *)0xa2:
    goto switchD_100bebe90_caseD_a2;
  case (code *)0xa4:
  case (code *)0xa7:
  case (code *)0xa8:
switchD_100bebe90_caseD_a5:
    FUN_100beec18();
    goto switchD_100bebe90_caseD_9d;
  case (code *)0xa5:
  case (code *)0xd7:
    goto switchD_100bebe90_caseD_a5;
  case (code *)0xa6:
    goto switchD_100bebe90_caseD_a6;
  case (code *)0xa9:
  case (code *)0xab:
  case (code *)0xd9:
  case (code *)0xdb:
    goto switchD_100bebe90_caseD_a9;
  case (code *)0xaa:
    goto switchD_100bebe90_caseD_aa;
  case (code *)0xb4:
    goto switchD_100bebe90_caseD_b4;
  case (code *)0xd2:
    FUN_100bc9c68();
    UNRECOVERED_JUMPTABLE = param_3;
    pcVar13 = param_2;
    FUN_100bc9c68();
    unaff_x21 = param_3;
    if (param_3 == UNRECOVERED_JUMPTABLE && param_2 == pcVar13) {
      uVar7 = 1;
      goto LAB_100bebfec;
    }
    goto switchD_100bebe90_caseD_b4;
  case (code *)0xd3:
    uVar15 = 0x100bec054;
    FUN_100beee2c();
    goto LAB_100bec0ac;
  case (code *)0xda:
LAB_100bec0ac:
    pcVar9 = (code *)((ulong)param_2 & 0xff);
    pbVar10 = &switchD_100bec0c4::switchdataD_100c9f91b;
    UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar9[0x100c9f91b] * 4 + 0x100bec0c8);
    puVar4 = &stack0xffffffffffffffd0;
    uVar5 = in_ZR;
    switch(pcVar9) {
    case (code *)0x0:
    case (code *)0x39:
    case (code *)0x83:
    case (code *)0xce:
      break;
    default:
switchD_100bebe90_caseD_f8:
      FUN_100beeea4();
    case (code *)0xf7:
      break;
    case (code *)0x2:
    case (code *)0x37:
    case (code *)0x3e:
    case (code *)0x58:
    case (code *)0x5f:
      FUN_100beee74();
    case (code *)0x2e:
    case (code *)0x32:
    case (code *)0x79:
    case (code *)0xe3:
      break;
    case (code *)0x3:
    case (code *)0x49:
    case (code *)0x5c:
    case (code *)0x60:
    case (code *)0x72:
      pcVar13 = (code *)&DAT_e500000000000000;
    case (code *)0x3c:
    case (code *)0x43:
    case (code *)0x7a:
      pcVar8 = (code *)0x656c;
switchD_100bec0c4_caseD_9:
      pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x65760000);
switchD_100bec0c4_caseD_4f:
      pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x6c00000000);
switchD_100bec0c4_caseD_22:
      break;
    case (code *)0x4:
    case (code *)0x45:
    case (code *)0x4b:
    case (code *)0x59:
    case (code *)0x61:
    case (code *)0x74:
      pcVar13 = (code *)&DAT_e400000000000000;
    case (code *)0xa5:
    case (code *)0xcf:
    case (code *)0xd7:
    case (code *)0xd9:
      pcVar8 = (code *)0x6f62;
switchD_100bec0c4_caseD_23:
      pcVar8 = (code *)(ulong)((uint)pcVar8 & 0xffff | 0x79640000);
switchD_100bec0c4_caseD_b:
      break;
    case (code *)0x5:
    case (code *)0x4a:
      FUN_100beec78();
    case (code *)0x24:
    case (code *)0x2a:
    case (code *)0x36:
    case (code *)0x7d:
      break;
    case (code *)0x6:
    case (code *)0x55:
    case (code *)0x70:
    case (code *)0x81:
      pcVar8 = (code *)0x6573;
    case (code *)0xa:
    case (code *)0x11:
    case (code *)0x38:
    case (code *)0x3d:
    case (code *)0x44:
    case (code *)0x67:
    case (code *)0x7f:
      pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x65760000);
switchD_100bec0c4_caseD_1f:
      pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff | 0x7974697200000000);
switchD_100bec0c4_caseD_4c:
      FUN_100beef9c();
      break;
    case (code *)0x9:
    case (code *)0x10:
    case (code *)0x21:
    case (code *)0x27:
    case (code *)0x5a:
    case (code *)0x62:
    case (code *)0x66:
    case (code *)0x73:
    case (code *)0x7e:
      goto switchD_100bec0c4_caseD_9;
    case (code *)0xb:
    case (code *)0x12:
    case (code *)0x2d:
    case (code *)0x31:
    case (code *)0x51:
    case (code *)0x68:
    case (code *)0x78:
      goto switchD_100bec0c4_caseD_b;
    case (code *)0xc:
    case (code *)0x13:
    case (code *)0x41:
    case (code *)0x69:
      goto switchD_100bec0c4_caseD_c;
    case (code *)0xd:
    case (code *)0x14:
    case (code *)0x53:
    case (code *)0x6a:
      goto switchD_100bec0c4_caseD_d;
    case (code *)0x1f:
    case (code *)0x25:
    case (code *)0x50:
    case (code *)0x5d:
      goto switchD_100bec0c4_caseD_1f;
    case (code *)0x22:
    case (code *)0x28:
    case (code *)0x2b:
    case (code *)0x2f:
    case (code *)0x35:
    case (code *)0x5b:
    case (code *)0x63:
    case (code *)0x75:
    case (code *)0x76:
    case (code *)0x7c:
      goto switchD_100bec0c4_caseD_22;
    case (code *)0x23:
    case (code *)0x29:
    case (code *)0x57:
      goto switchD_100bec0c4_caseD_23;
    case (code *)0x33:
    case (code *)0x3f:
    case (code *)0x47:
    case (code *)0x54:
    case (code *)0xe9:
      goto switchD_100bec0c4_caseD_33;
    case (code *)0x3a:
      goto switchD_100bec0c4_caseD_3a;
    case (code *)0x40:
    case (code *)0xa9:
      puVar2 = &stack0xffffffffffffffa0;
    case (code *)0x7:
    case (code *)0xe:
    case (code *)0x4d:
    case (code *)0x64:
    case (code *)0xdd:
    case (code *)0xe5:
    case (code *)0xed:
      *(undefined1 **)(puVar2 + 0x10) = &SUB_e900000000000070;
      *(undefined1 **)(puVar2 + 0x18) = &SUB_e900000000000070;
      puVar4 = puVar2;
switchD_100bec0c4_caseD_3a:
      *(undefined1 **)(puVar4 + 0x20) = &stack0xfffffffffffffff0;
      *(undefined8 *)(puVar4 + 0x28) = uVar15;
      pcVar8 = (code *)0x73656d617266;
      pcVar9 = (code *)(ulong)((uint)param_3 & 0xff);
      if (((ulong)param_3 & 0xff) == 0) {
switchD_100bec0c4_caseD_f1:
        pcVar13 = (code *)&DAT_e600000000000000;
        param_3 = pcVar8;
      }
      else {
switchD_100bec0c4_caseD_cb:
        in_ZR = (int)pcVar9 == 1;
        pcVar9 = (code *)0x747369676572;
switchD_100bec0c4_caseD_c9:
        pcVar9 = (code *)((ulong)pcVar9 | 0x7265000000000000);
        pbVar10 = (byte *)0x73;
switchD_100bebe90_caseD_f9:
        pcVar13 = (code *)((ulong)pbVar10 | 0xe900000000000000);
        param_3 = pcVar9;
        if (!(bool)in_ZR) {
          pcVar13 = (code *)&DAT_e800000000000000;
          param_3 = (code *)0x746f687370616e73;
        }
      }
      if (((ulong)param_2 & 0xff) == 0) {
        pcVar14 = (code *)&DAT_e600000000000000;
      }
      else {
        in_ZR = ((uint)param_2 & 0xff) == 1;
        pcVar9 = (code *)0x7265747369676572;
        pbVar10 = (byte *)0xe900000000000073;
switchD_100bec0c4_caseD_bb:
        UNRECOVERED_JUMPTABLE = (code *)&DAT_e800000000000000;
switchD_100bec0c4_caseD_ff:
        pcVar8 = pcVar9;
        pcVar14 = (code *)pbVar10;
        if (!(bool)in_ZR) {
          pcVar8 = (code *)0x746f687370616e73;
          pcVar14 = UNRECOVERED_JUMPTABLE;
        }
switchD_100bebe90_caseD_e1:
      }
      if (param_3 == pcVar8 && pcVar13 == pcVar14) {
switchD_100bec0c4_caseD_8b:
        unaff_x21 = (code *)&DAT_00000001;
      }
      else {
        FUN_100beeb44();
switchD_100bec0c4_caseD_9d:
        unaff_x21 = param_3;
      }
switchD_100bec0c4_caseD_85:
      FUN_100b6f838();
      FUN_100b6f860();
      UNRECOVERED_JUMPTABLE = (code *)(ulong)((uint)unaff_x21 & 1);
      FUN_100b56e60(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    case (code *)0x46:
      goto switchD_100bec0c4_caseD_46;
    case (code *)0x4c:
      goto switchD_100bec0c4_caseD_4c;
    case (code *)0x4f:
      goto switchD_100bec0c4_caseD_4f;
    case (code *)0x52:
      goto switchD_100bec0c4_caseD_52;
    case (code *)0x82:
      goto switchD_100bebe90_caseD_e4;
    case (code *)0x85:
    case (code *)0xb5:
      goto switchD_100bec0c4_caseD_85;
    case (code *)0x86:
    case (code *)0x8c:
    case (code *)0xb6:
    case (code *)0xbf:
      goto switchD_100bec0c4_caseD_86;
    case (code *)0x87:
    case (code *)0xb7:
    case (code *)0xbd:
    case (code *)0xbe:
      goto switchD_100bec0c4_caseD_87;
    case (code *)0x88:
    case (code *)0x95:
    case (code *)0xb8:
    case (code *)0xc1:
    case (code *)0xc5:
      goto switchD_100bec0c4_caseD_88;
    case (code *)0x89:
    case (code *)0xb9:
      param_3 = (code *)((ulong)param_3 & 0xffff00000000ffff | 0x646f68740000);
      goto switchD_100bec0c4_caseD_88;
    case (code *)0x8a:
    case (code *)0x96:
    case (code *)0xba:
    case (code *)0xc6:
      goto switchD_100bec0c4_caseD_8a;
    case (code *)0x8b:
      goto switchD_100bec0c4_caseD_8b;
    case (code *)0x8d:
    case (code *)0x90:
      pcVar9 = (code *)((ulong)param_3 & 0xff);
    case (code *)0x91:
      pbVar10 = (byte *)"SentryTypedSwizzle";
switchD_100bec0c4_caseD_8e:
      pbVar10 = pbVar10 + 0x922;
      UNRECOVERED_JUMPTABLE = (code *)&UNK_100bec274;
switchD_100bec0c4_caseD_86:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)pbVar10[(long)pcVar9] * 4;
      param_3 = pcVar8;
switchD_100bec0c4_caseD_8f:
switchD_100bec0c4_caseD_92:
                    /* WARNING: Could not recover jumptable at 0x000100bec270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return param_3;
    case (code *)0x8e:
    case (code *)0xc0:
      goto switchD_100bec0c4_caseD_8e;
    case (code *)0x8f:
      goto switchD_100bec0c4_caseD_8f;
    case (code *)0x92:
    case (code *)0x94:
    case (code *)0xc2:
    case (code *)0xc4:
      goto switchD_100bec0c4_caseD_92;
    case (code *)0x93:
      param_3 = (code *)0x6b6f6f63;
      goto switchD_100bec0c4_caseD_87;
    case (code *)0x9d:
      goto switchD_100bec0c4_caseD_9d;
    case (code *)0xbb:
      goto switchD_100bec0c4_caseD_bb;
    case (code *)0xbc:
      goto switchD_100bec0c4_caseD_bc;
    case (code *)0xc3:
      param_3 = (code *)0x64616568;
    case (code *)0xfd:
      param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x726500000000);
      goto switchD_100bec0c4_caseD_8a;
    case (code *)0xc9:
      goto switchD_100bec0c4_caseD_c9;
    case (code *)0xca:
    case (code *)0xde:
    case (code *)0xe6:
    case (code *)0xee:
      goto switchD_100bec0c4_caseD_ca;
    case (code *)0xcb:
    case (code *)0xdf:
    case (code *)0xe7:
    case (code *)0xef:
      goto switchD_100bec0c4_caseD_cb;
    case (code *)0xcd:
      goto switchD_100bec0c4_caseD_cd;
    case (code *)0xe1:
      goto switchD_100bec0c4_caseD_e1;
    case (code *)0xe2:
      goto switchD_100bec0c4_caseD_e2;
    case (code *)0xea:
    case (code *)0xf2:
      pcVar13 = (code *)0xe900000000000064;
      goto switchD_100bec310_caseD_8f;
    case (code *)0xeb:
    case (code *)0xf3:
      goto switchD_100bec0c4_caseD_eb;
    case (code *)0xec:
    case (code *)0xf4:
      goto switchD_100bec0c4_caseD_ec;
    case (code *)0xf1:
      goto switchD_100bec0c4_caseD_f1;
    case (code *)0xfe:
      goto switchD_100bec0c4_caseD_fe;
    case (code *)0xff:
      goto switchD_100bec0c4_caseD_ff;
    }
    uVar5 = param_3 == pcVar8;
switchD_100bec0c4_caseD_46:
    in_ZR = false;
    if ((bool)uVar5) {
      in_ZR = pcVar13 == (code *)&SUB_e900000000000070;
    }
switchD_100bec0c4_caseD_c:
    if ((bool)in_ZR) {
      unaff_x21 = (code *)&DAT_00000001;
    }
    else {
      FUN_100beeb6c();
switchD_100bec0c4_caseD_33:
      unaff_x21 = param_3;
    }
switchD_100bebe90_caseD_e4:
    FUN_100b6f860();
    goto switchD_100bec0c4_caseD_52;
  case (code *)0xe0:
    pcVar8 = (code *)&DAT_65707974;
    goto LAB_100bebf60;
  case (code *)0xe1:
  case (code *)0xf5:
  case (code *)0xfd:
    goto switchD_100bebe90_caseD_e1;
  case (code *)0xe2:
  case (code *)0xf6:
  case (code *)0xfe:
LAB_100bebf60:
    if (param_3 == pcVar8) {
      uVar7 = 1;
    }
    else {
      FUN_100beeb6c();
      uVar7 = (uint)param_3;
    }
    FUN_100b6f860();
    FUN_100b6f838();
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar7 & 1);
    FUN_100b56e60(UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE;
  case (code *)0xe4:
    goto switchD_100bebe90_caseD_e4;
  case (code *)0xf8:
    goto switchD_100bebe90_caseD_f8;
  case (code *)0xf9:
    goto switchD_100bebe90_caseD_f9;
  }
switchD_100bebe90_caseD_0:
  pcVar9 = (code *)((ulong)param_2 & 0xff);
switchD_100bebe90_caseD_10:
  pbVar10 = (byte *)"SentryTypedSwizzle";
  goto switchD_100bebe90_caseD_4a;
switchD_100bebe90_caseD_b4:
  param_3 = unaff_x21;
switchD_100bebe90_caseD_a2:
  FUN_100beeb44(param_3);
  goto switchD_100bebe90_caseD_9c;
switchD_100bebe90_caseD_9f:
  goto LAB_100bec0ac;
switchD_100bec0c4_caseD_88:
  goto switchD_100bec0c4_caseD_e1;
switchD_100bec310_caseD_f0:
  pcVar9 = (code *)((ulong)param_2 & 0xff);
  switch(UNRECOVERED_JUMPTABLE) {
  case (code *)0x100bec314:
    goto switchD_100bec310_caseD_1;
  case (code *)0x100bec318:
    goto switchD_100bec310_caseD_e9;
  case (code *)0x100bec31c:
    goto switchD_100bec310_caseD_37;
  case (code *)0x100bec320:
    goto switchD_100bec310_caseD_97;
  case (code *)0x100bec324:
    goto switchD_100bec310_caseD_15;
  case (code *)0x100bec328:
    goto switchD_100bec310_caseD_4;
  case (code *)0x100bec32c:
    goto switchD_100bec310_caseD_29;
  case (code *)0x100bec330:
    goto switchD_100bec310_caseD_20;
  case (code *)0x100bec334:
    goto switchD_100bec310_caseD_3b;
  case (code *)0x100bec338:
    goto switchD_100bec310_caseD_2e;
  case (code *)0x100bec33c:
    goto switchD_100bec310_caseD_2;
  case (code *)0x100bec340:
    goto switchD_100bec310_caseD_41;
  case (code *)0x100bec344:
    goto switchD_100bec310_caseD_14;
  case (code *)0x100bec348:
    goto switchD_100bec310_caseD_3c;
  case (code *)0x100bec34c:
    goto switchD_100bec310_caseD_16;
  case (code *)0x100bec350:
    goto switchD_100bec310_caseD_47;
  case (code *)0x100bec354:
    goto switchD_100bec310_caseD_3;
  case (code *)0x100bec358:
    goto switchD_100bec310_caseD_11;
  case (code *)0x100bec360:
    goto switchD_100bec310_caseD_3e;
  case (code *)0x100bec364:
    goto switchD_100bec310_caseD_2b;
  case (code *)0x100bec368:
    goto switchD_100bec0c4_caseD_cd;
  case (code *)0x100bec36c:
    goto switchD_100bec310_caseD_5;
  case (code *)0x100bec374:
    goto switchD_100bec310_caseD_25;
  case (code *)0x100bec380:
    goto switchD_100bec310_caseD_74;
  case (code *)0x100bec384:
    goto switchD_100bec310_caseD_44;
  case (code *)0x100bec38c:
    goto switchD_100bec310_caseD_6;
  case (code *)0x100bec394:
    goto switchD_100bec310_caseD_32;
  case (code *)0x100bec398:
    goto switchD_100bec310_caseD_0;
  case (code *)0x100bec39c:
    goto switchD_100bec310_caseD_2c;
  case (code *)0x100bec3b8:
    goto switchD_100bec0c4_caseD_e2;
  case caseD_bb:
    goto code_r0x000100bec3c8;
  case (code *)0x100bec3f4:
    goto switchD_100bec310_caseD_e3;
  case (code *)0x100bec420:
    goto switchD_100bec310_caseD_ad;
  case (code *)0x100bec424:
    goto switchD_100bec0c4_caseD_ca;
  case (code *)0x100bec454:
    goto switchD_100bec310_caseD_8f;
  case (code *)0x100bec45c:
    goto switchD_100bec310_caseD_7d;
  case (code *)0x100bec460:
    goto switchD_100bec310_caseD_77;
  case (code *)0x100bec498:
    goto switchD_100bec0c4_caseD_eb;
  case (code *)0x100bec49c:
    goto switchD_100bec310_caseD_83;
  case (code *)0x100bec4a0:
    goto switchD_100bec310_caseD_80;
  case (code *)0x100bec4a8:
    goto switchD_100bec310_caseD_78;
  case (code *)0x100bec4b4:
    goto switchD_100bec310_caseD_81;
  case (code *)0x100bec4b8:
    goto switchD_100bec310_caseD_84;
  case (code *)0x100bec4c4:
    goto switchD_100bec0c4_caseD_ec;
  case (code *)0x100bec4cc:
    goto switchD_100bec310_caseD_79;
  case (code *)0x100bec4d0:
    goto switchD_100bec310_caseD_ae;
  case (code *)0x100bec4d4:
    goto switchD_100bec310_caseD_f7;
  case (code *)0x100bec4dc:
    goto switchD_100bec310_caseD_7b;
  case (code *)0x100bec4e4:
    goto switchD_100bec310_caseD_7a;
  case (code *)0x100bec4ec:
    goto switchD_100bec310_caseD_b5;
  case (code *)0x100bec4f4:
    goto switchD_100bec310_caseD_ef;
  case (code *)0x100bec4f8:
    goto switchD_100bec310_caseD_7c;
  case (code *)0x100bec5b4:
    goto switchD_100bec310_caseD_bf;
  case (code *)0x100bec604:
    goto switchD_100bec310_caseD_d4;
  case (code *)0x100bec670:
    goto switchD_100bec310_caseD_bc;
  case (code *)0x100bec688:
    goto switchD_100bec310_caseD_dc;
  case (code *)0x100bec6c8:
    goto switchD_100bec310_caseD_f0;
  case (code *)0x100bec6e4:
    goto switchD_100bec310_caseD_dd;
  case (code *)0x100bec710:
    goto switchD_100bec310_caseD_de;
  }
  goto switchD_100bec310_caseD_d3;
switchD_100bebe90_caseD_9d:
  pcVar9 = (code *)((ulong)param_3 & 0xff);
  pbVar10 = &BYTE_100c9f914;
switchD_100bebe90_caseD_a6:
  UNRECOVERED_JUMPTABLE = (code *)0x100bec050;
  param_3 = pcVar8;
switchD_100bebe90_caseD_a9:
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(byte)pcVar9[(long)pbVar10] * 4;
  goto switchD_100bebe90_caseD_aa;
switchD_100bebe90_caseD_1e:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x756c0000);
switchD_100bebe90_caseD_51:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x6500000000);
  goto LAB_100bebf60;
switchD_100bebe90_caseD_5d:
  param_3 = (code *)(ulong)((uint)param_3 & 0xffff | 0x74690000);
  goto switchD_100bebe90_caseD_0;
switchD_100bebe90_caseD_36:
  param_3 = (code *)(ulong)((uint)param_3 & 0xffff | 0x65700000);
  goto switchD_100bebe90_caseD_0;
switchD_100bebe90_caseD_3a:
  param_3 = (code *)((ulong)param_3 & 0xffffffff0000ffff | 0x756c0000);
switchD_100bebe90_caseD_22:
  param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x6500000000);
switchD_100bebe90_caseD_12:
  goto switchD_100bebe90_caseD_0;
switchD_100bebe90_caseD_66:
  param_3 = (code *)(ulong)((uint)param_3 & 0xffff | 0x656d0000);
switchD_100bebe90_caseD_39:
  goto switchD_100bebe90_caseD_0;
switchD_100bebe90_caseD_4a:
  UNRECOVERED_JUMPTABLE = (code *)&UNK_100bebf08;
  uVar11 = (ulong)(byte)pcVar9[(long)(pbVar10 + 0x90c)];
switchD_100bebe90_caseD_99:
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + uVar11 * 4;
switchD_100bebe90_caseD_69:
                    /* WARNING: Could not recover jumptable at 0x000100bebf04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return param_3;
switchD_100bebe90_caseD_aa:
switchD_100bebe90_caseD_9e:
                    /* WARNING: Could not recover jumptable at 0x000100bec04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_3);
  return param_3;
switchD_100bec0c4_caseD_52:
  FUN_100b6f838();
  param_3 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec0c4_caseD_d:
  FUN_100b56e60();
  return param_3;
switchD_100bebe90_caseD_9c:
  uVar7 = (uint)param_3;
LAB_100bebfec:
  FUN_100b6f838();
  FUN_100b6f860();
  return (code *)(ulong)(uVar7 & 1);
switchD_100bec310_caseD_7d:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x746100000000);
switchD_100bec310_caseD_77:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0x6574000000000000);
  if (((ulong)param_3 & 0xff) == 0) {
switchD_100bec310_caseD_80:
    param_3 = pcVar8;
    pcVar14 = (code *)0x64;
    pcVar8 = param_3;
switchD_100bec310_caseD_78:
    pcVar14 = (code *)((ulong)pcVar14 & 0xffffffffffff | 0xe900000000000000);
  }
  else {
    in_ZR = ((uint)param_3 & 0xff) == 1;
    pcVar9 = (code *)&DAT_e700000000000000;
    pbVar10 = (byte *)0x7373656d;
switchD_100bec0c4_caseD_fe:
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
    param_3 = (code *)((ulong)pbVar10 & 0xffff0000ffffffff | 0x65676100000000);
    if (!(bool)in_ZR) {
      param_3 = (code *)0x736d61726170;
    }
switchD_100bec0c4_caseD_eb:
    pcVar14 = pcVar9;
    if (!(bool)in_ZR) {
      pcVar14 = UNRECOVERED_JUMPTABLE;
    }
switchD_100bec310_caseD_83:
  }
  pcVar9 = (code *)(ulong)((uint)param_2 & 0xff);
  if (((ulong)param_2 & 0xff) != 0) {
switchD_100bec310_caseD_81:
    in_ZR = (int)pcVar9 == 1;
switchD_100bec310_caseD_84:
    pcVar9 = (code *)&DAT_e700000000000000;
    pbVar10 = (byte *)0x7373656d;
switchD_100bec0c4_caseD_ec:
    pbVar10 = (byte *)((ulong)pbVar10 & 0xffff0000ffffffff | 0x65676100000000);
switchD_100bec310_caseD_79:
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
switchD_100bec310_caseD_ae:
    pcVar12 = (code *)0x6170;
switchD_100bec310_caseD_f7:
    pcVar12 = (code *)((ulong)pcVar12 | 0x736d61720000);
switchD_100bec310_caseD_7b:
    pcVar8 = (code *)pbVar10;
    pcVar13 = pcVar9;
    if (!(bool)in_ZR) {
      pcVar8 = pcVar12;
      pcVar13 = UNRECOVERED_JUMPTABLE;
    }
  }
switchD_100bec310_caseD_7a:
  in_ZR = false;
  if (param_3 == pcVar8) {
    in_ZR = pcVar14 == pcVar13;
  }
switchD_100bec310_caseD_b5:
  if ((bool)in_ZR) {
    uVar7 = 1;
  }
  else {
    FUN_100beeb6c();
switchD_100bec310_caseD_ef:
    unaff_x21 = param_3;
switchD_100bec310_caseD_7c:
    uVar7 = (uint)unaff_x21;
  }
  FUN_100b6f860();
  FUN_100b6f838();
  UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar7 & 1);
  FUN_100b56e60(UNRECOVERED_JUMPTABLE);
  return UNRECOVERED_JUMPTABLE;
switchD_100bec0c4_caseD_87:
  param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x656900000000);
switchD_100bec0c4_caseD_bc:
switchD_100bec0c4_caseD_8a:
  param_3 = (code *)((ulong)param_3 & 0xffffffffffff | 0x73000000000000);
switchD_100bec0c4_caseD_e1:
  pcVar9 = (code *)((ulong)param_2 & 0xff);
  pbVar10 = &switchD_100bec310::switchdataD_100c9f929;
  pcVar12 = (code *)(ulong)(byte)pcVar9[0x100c9f929];
  UNRECOVERED_JUMPTABLE = (code *)((long)pcVar12 * 4 + 0x100bec314);
  switch(pcVar9) {
  case (code *)0x0:
  case (code *)0x3f:
  case (code *)0x56:
  case (code *)0xcf:
  case (code *)0xd7:
  case (code *)0xdf:
    goto switchD_100bec310_caseD_0;
  default:
switchD_100bec310_caseD_1:
    pcVar13 = (code *)&DAT_e700000000000000;
  case (code *)0xe9:
switchD_100bec310_caseD_e9:
    pcVar8 = (code *)0x6f63;
switchD_100bec310_caseD_37:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x6b6f0000);
switchD_100bec310_caseD_97:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x656900000000);
switchD_100bec310_caseD_15:
    break;
  case (code *)0x2:
  case (code *)0x13:
  case (code *)0x19:
  case (code *)0x4c:
  case (code *)0x54:
  case (code *)0x58:
  case (code *)0x65:
  case (code *)0x70:
switchD_100bec310_caseD_2:
    pcVar13 = (code *)&DAT_e700000000000000;
  case (code *)0x41:
switchD_100bec310_caseD_41:
    pcVar8 = (code *)0x6568;
switchD_100bec310_caseD_14:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x64610000);
switchD_100bec310_caseD_3c:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x726500000000);
    break;
  case (code *)0x3:
  case (code *)0x2a:
  case (code *)0x2f:
  case (code *)0x36:
  case (code *)0x59:
  case (code *)0x71:
switchD_100bec310_caseD_3:
    pcVar13 = (code *)&DAT_e800000000000000;
  case (code *)0x11:
  case (code *)0x17:
  case (code *)0x42:
  case (code *)0x4f:
switchD_100bec310_caseD_11:
    pcVar8 = (code *)0x67617266;
switchD_100bec310_caseD_3e:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x656d00000000);
switchD_100bec310_caseD_2b:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0x746e000000000000);
switchD_100bec0c4_caseD_cd:
    goto switchD_100bec310_caseD_0;
  case (code *)0x4:
  case (code *)0x1f:
  case (code *)0x23:
  case (code *)0x43:
  case (code *)0x5a:
  case (code *)0x6a:
switchD_100bec310_caseD_4:
    pcVar13 = (code *)&DAT_e600000000000000;
  case (code *)0x29:
  case (code *)0x30:
  case (code *)0x4a:
  case (code *)0x51:
switchD_100bec310_caseD_29:
    pcVar8 = (code *)0x656d;
switchD_100bec310_caseD_20:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x68740000);
switchD_100bec310_caseD_3b:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x646f00000000);
switchD_100bec310_caseD_2e:
    goto switchD_100bec310_caseD_0;
  case (code *)0x5:
  case (code *)0x33:
  case (code *)0x5b:
switchD_100bec310_caseD_5:
    pcVar8 = (code *)0x72657571;
  case (code *)0x25:
  case (code *)0x31:
  case (code *)0x39:
  case (code *)0x46:
  case (code *)0xdb:
switchD_100bec310_caseD_25:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff | 0x74735f7900000000);
    pcVar13 = (code *)0x6972;
switchD_100bec310_caseD_74:
    pcVar13 = (code *)((ulong)pcVar13 | 0x676e0000);
switchD_100bec310_caseD_44:
    pcVar13 = (code *)((ulong)pcVar13 & 0xffffffffffff | 0xec00000000000000);
    goto switchD_100bec310_caseD_0;
  case (code *)0x6:
  case (code *)0x45:
  case (code *)0x5c:
switchD_100bec310_caseD_6:
    pcVar13 = (code *)0xe300000000000000;
    pcVar8 = (code *)0x7275;
  case (code *)0x32:
  case (code *)0x9b:
switchD_100bec310_caseD_32:
    pcVar8 = (code *)(ulong)((uint)pcVar8 & 0xffff | 0x6c0000);
    goto switchD_100bec310_caseD_0;
  case (code *)0x14:
  case (code *)0x1a:
  case (code *)0x1d:
  case (code *)0x21:
  case (code *)0x27:
  case (code *)0x4d:
  case (code *)0x55:
  case (code *)0x67:
  case (code *)0x68:
  case (code *)0x6e:
    goto switchD_100bec310_caseD_14;
  case (code *)0x15:
  case (code *)0x1b:
  case (code *)0x49:
    goto switchD_100bec310_caseD_15;
  case (code *)0x16:
  case (code *)0x1c:
  case (code *)0x28:
  case (code *)0x6f:
    break;
  case (code *)0x20:
  case (code *)0x24:
  case (code *)0x6b:
  case (code *)0xd5:
    goto switchD_100bec310_caseD_20;
  case (code *)0x2b:
  case (code *)0x75:
  case (code *)0xc0:
  case (code *)0xf8:
    goto switchD_100bec310_caseD_2b;
  case (code *)0x2c:
    goto switchD_100bec310_caseD_2c;
  case (code *)0x2e:
  case (code *)0x35:
  case (code *)0x6c:
    goto switchD_100bec310_caseD_2e;
  case (code *)0x37:
  case (code *)0x3d:
  case (code *)0x4b:
  case (code *)0x53:
  case (code *)0x66:
    goto switchD_100bec310_caseD_37;
  case (code *)0x38:
  case (code *)0xf3:
    goto switchD_100bec0c4_caseD_cd;
  case (code *)0x3b:
  case (code *)0x4e:
  case (code *)0x52:
  case (code *)0x64:
    goto switchD_100bec310_caseD_3b;
  case (code *)0x3c:
    goto switchD_100bec310_caseD_3c;
  case (code *)0x3e:
    goto switchD_100bec310_caseD_3e;
  case (code *)0x44:
    goto switchD_100bec310_caseD_44;
  case (code *)0x47:
  case (code *)0x62:
  case (code *)0x73:
    goto switchD_100bec310_caseD_47;
  case (code *)0x74:
    goto switchD_100bec310_caseD_74;
  case (code *)0x77:
  case (code *)0xa7:
    goto switchD_100bec310_caseD_77;
  case (code *)0x78:
  case (code *)0x7e:
  case (code *)0xa8:
  case (code *)0xb1:
    goto switchD_100bec310_caseD_78;
  case (code *)0x79:
  case (code *)0xa9:
  case (code *)0xaf:
  case (code *)0xb0:
    goto switchD_100bec310_caseD_79;
  case (code *)0x7a:
  case (code *)0x87:
  case (code *)0xaa:
  case (code *)0xb3:
  case (code *)0xb7:
    goto switchD_100bec310_caseD_7a;
  case (code *)0x7b:
  case (code *)0xab:
    goto switchD_100bec310_caseD_7b;
  case (code *)0x7c:
  case (code *)0x88:
  case (code *)0xac:
  case (code *)0xb8:
    goto switchD_100bec310_caseD_7c;
  case (code *)0x7d:
    goto switchD_100bec310_caseD_7d;
  case (code *)0x7f:
  case (code *)0x82:
    goto switchD_100bec0c4_caseD_eb;
  case (code *)0x80:
  case (code *)0xb2:
    goto switchD_100bec310_caseD_80;
  case (code *)0x81:
    goto switchD_100bec310_caseD_81;
  case (code *)0x83:
    goto switchD_100bec310_caseD_83;
  case (code *)0x84:
  case (code *)0x86:
  case (code *)0xb4:
  case (code *)0xb6:
    goto switchD_100bec310_caseD_84;
  case (code *)0x85:
    goto switchD_100bec0c4_caseD_ec;
  case (code *)0x8f:
switchD_100bec310_caseD_8f:
    pcVar8 = (code *)0x6d726f66;
    goto switchD_100bec310_caseD_7d;
  case (code *)0x97:
  case (code *)0xc1:
  case (code *)0xc9:
  case (code *)0xcb:
  case (code *)0xf9:
    goto switchD_100bec310_caseD_97;
  case (code *)0xad:
    goto switchD_100bec310_caseD_ad;
  case (code *)0xae:
    goto switchD_100bec310_caseD_ae;
  case (code *)0xb5:
    goto switchD_100bec310_caseD_b5;
  case (code *)0xbb:
code_r0x000100bec3c8:
    in_ZR = ((ulong)param_3 & 1) == 0;
    pcVar9 = (code *)0x65646f63;
    pbVar10 = (byte *)0x6e69616d6f64;
    param_3 = pcVar9;
    if ((bool)in_ZR) {
      param_3 = (code *)pbVar10;
    }
  case (code *)0xe3:
switchD_100bec310_caseD_e3:
    puVar4 = &DAT_e400000000000000;
    if ((bool)in_ZR) {
      puVar4 = &DAT_e600000000000000;
    }
    bVar6 = ((ulong)param_2 & 1) == 0;
    if (bVar6) {
      pcVar9 = (code *)pbVar10;
    }
    puVar1 = &DAT_e400000000000000;
    if (bVar6) {
      puVar1 = &DAT_e600000000000000;
    }
    if (param_3 == pcVar9 && puVar4 == puVar1) {
switchD_100bec0c4_caseD_ca:
      uVar7 = 1;
    }
    else {
      FUN_100beeb44();
      unaff_x21 = param_3;
switchD_100bec310_caseD_ad:
      uVar7 = (uint)unaff_x21;
    }
    FUN_100b6f838();
    FUN_100b6f860();
    UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar7 & 1);
    FUN_100b56e60(UNRECOVERED_JUMPTABLE);
    return UNRECOVERED_JUMPTABLE;
  case (code *)0xbc:
  case (code *)0xd0:
  case (code *)0xd8:
  case (code *)0xe0:
  case (code *)0xf4:
switchD_100bec310_caseD_bc:
    FUN_100beeb44();
LAB_100bec680:
    FUN_100b6f838();
    FUN_100b6f860();
    unaff_x21 = param_3;
  case (code *)0xdc:
  case (code *)0xe4:
switchD_100bec310_caseD_dc:
    param_3 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_cc:
    FUN_100b56e60(param_3);
    return param_3;
  case (code *)0xbd:
  case (code *)0xd1:
  case (code *)0xd9:
  case (code *)0xe1:
  case (code *)0xf5:
    goto switchD_100bec0c4_caseD_e2;
  case (code *)0xbf:
switchD_100bec310_caseD_bf:
    pcVar8 = (code *)(ulong)((uint)pcVar8 & 0xffff | 0x656d0000);
switchD_100bec5a8_caseD_80:
switchD_100bec5a8_caseD_0:
    in_ZR = false;
    if (param_3 == pcVar8) {
      in_ZR = pcVar14 == (code *)&SUB_e900000000000070;
    }
switchD_100bec5a8_caseD_27:
    if ((bool)in_ZR) {
      unaff_x21 = (code *)&DAT_00000001;
      goto switchD_100bec5a8_caseD_e;
    }
switchD_100bec5a8_caseD_14:
    FUN_100beeb44();
switchD_100bec5a8_caseD_21:
    unaff_x21 = param_3;
  case (code *)0xd4:
switchD_100bec310_caseD_d4:
switchD_100bec5a8_caseD_e:
    FUN_100b6f838();
    FUN_100b6f860();
    param_3 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_5d:
switchD_100bec5a8_caseD_2d:
    FUN_100b56e60(param_3);
    return param_3;
  case (code *)0xd3:
switchD_100bec310_caseD_d3:
    param_3 = (code *)0x656d616e;
    pcVar14 = (code *)&SUB_e200000000000000;
    pcVar8 = (code *)&SUB_00006469;
    pbVar10 = &switchD_100bec5a8::switchdataD_100c9f940;
    puVar4 = &stack0xffffffffffffffd0;
    UNRECOVERED_JUMPTABLE = param_3;
    pcVar9 = param_2;
    switch((ulong)param_2 & 0xff) {
    case 0:
    case 0x2b:
    case 0x38:
      goto switchD_100bec5a8_caseD_0;
    default:
      pcVar14 = (code *)&DAT_e400000000000000;
    case 0xd2:
      pcVar8 = (code *)0x616e;
      goto switchD_100bec310_caseD_bf;
    case 2:
    case 0x35:
    case 0x3d:
    case 0x41:
    case 0x4e:
    case 0x59:
      FUN_100beec94();
    case 0x2a:
      goto switchD_100bec5a8_caseD_0;
    case 3:
    case 6:
    case 10:
    case 0x10:
    case 0x36:
    case 0x3e:
    case 0x50:
    case 0x51:
    case 0x57:
      FUN_100beedfc();
    case 0x25:
      goto switchD_100bec5a8_caseD_0;
    case 4:
    case 0x32:
    case 0xec:
      pcVar14 = (code *)&DAT_e700000000000000;
    case 8:
    case 0xc:
    case 0x2c:
    case 0x43:
    case 0x53:
      pcVar8 = (code *)0x7563;
switchD_100bec5a8_caseD_12:
      pcVar8 = (code *)((ulong)pcVar8 | 0x72720000);
switchD_100bec5a8_caseD_9:
      pcVar8 = (code *)((ulong)pcVar8 | 0x6e6500000000);
switchD_100bec5a8_caseD_24:
      pcVar8 = (code *)((ulong)pcVar8 | 0x74000000000000);
switchD_100bec5a8_caseD_17:
      goto switchD_100bec5a8_caseD_0;
    case 5:
    case 0x11:
    case 0x58:
      pcVar14 = (code *)&DAT_e400000000000000;
    case 0x30:
    case 0x4b:
    case 0x5c:
      pcVar8 = (code *)0x616d;
switchD_100bec5a8_caseD_13:
      pcVar8 = (code *)(ulong)((uint)pcVar8 | 0x6e690000);
      goto switchD_100bec5a8_caseD_0;
    case 9:
    case 0xd:
    case 0x54:
    case 0xbe:
    case 0xf6:
      goto switchD_100bec5a8_caseD_9;
    case 0xe:
    case 0x1a:
    case 0x22:
    case 0x2f:
    case 0xc4:
      goto switchD_100bec5a8_caseD_e;
    case 0x12:
    case 0x19:
    case 0x33:
    case 0x3a:
      goto switchD_100bec5a8_caseD_12;
    case 0x13:
    case 0x18:
    case 0x1f:
    case 0x42:
    case 0x5a:
      goto switchD_100bec5a8_caseD_13;
    case 0x14:
    case 0x5e:
    case 0xa9:
    case 0xe1:
      goto switchD_100bec5a8_caseD_14;
    case 0x15:
      goto switchD_100bec5a8_caseD_15;
    case 0x17:
    case 0x1e:
    case 0x55:
    case 0xf0:
    case 0xf8:
      goto switchD_100bec5a8_caseD_17;
    case 0x1b:
    case 0x84:
      puVar3 = &stack0xffffffffffffffa0;
    case 0x28:
    case 0x3f:
    case 0xb8:
    case 0xc0:
    case 200:
      *(undefined1 **)(puVar3 + 0x10) = &SUB_e200000000000000;
      *(undefined1 **)(puVar3 + 0x18) = &SUB_e900000000000070;
      puVar4 = puVar3;
switchD_100bec5a8_caseD_15:
      *(undefined1 **)(puVar4 + 0x20) = &stack0xfffffffffffffff0;
      *(undefined8 *)(puVar4 + 0x28) = uVar15;
      pcVar14 = (code *)&SUB_00006469;
      pcVar13 = param_2;
      (*(code *)&SUB_00006469)();
      pcVar9 = pcVar13;
      unaff_x21 = param_3;
      unaff_x22 = param_2;
switchD_100bec5a8_caseD_a6:
      param_2 = pcVar9;
      (*pcVar14)();
      in_ZR = unaff_x21 == unaff_x22;
switchD_100bec5a8_caseD_a4:
      param_3 = unaff_x21;
      if (!(bool)in_ZR || pcVar13 != param_2) goto switchD_100bec310_caseD_bc;
      param_3 = (code *)&DAT_00000001;
      goto LAB_100bec680;
    case 0x1c:
    case 0x44:
      goto switchD_100bec310_caseD_d4;
    case 0x20:
    case 0x26:
    case 0x34:
    case 0x3c:
    case 0x4f:
      goto switchD_100bec310_caseD_bf;
    case 0x21:
    case 0xdc:
      goto switchD_100bec5a8_caseD_21;
    case 0x24:
    case 0x37:
    case 0x3b:
    case 0x4d:
      goto switchD_100bec5a8_caseD_24;
    case 0x27:
      goto switchD_100bec5a8_caseD_27;
    case 0x2d:
      goto switchD_100bec5a8_caseD_2d;
    case 0x2e:
    case 0x45:
      switchD_100bec5a8::caseD_1b();
      return param_3;
    case 0x5d:
      goto switchD_100bec5a8_caseD_5d;
    case 0x60:
    case 0x90:
      goto switchD_100bec5a8_caseD_60;
    case 0x61:
    case 0x67:
    case 0x91:
    case 0x9a:
    case 0x6a:
      break;
    case 0x62:
    case 0x92:
    case 0x98:
    case 0x99:
      goto switchD_100bec5a8_caseD_62;
    case 99:
    case 0x70:
    case 0x93:
    case 0x9c:
    case 0xa0:
      goto switchD_100bec5a8_caseD_63;
    case 100:
    case 0x94:
      goto switchD_100bec5a8_caseD_64;
    case 0x65:
    case 0x71:
    case 0x95:
    case 0xa1:
      goto switchD_100bec5a8_caseD_65;
    case 0x66:
      goto switchD_100bec5a8_caseD_66;
    case 0x68:
    case 0x6b:
      break;
    case 0x69:
    case 0x9b:
      goto switchD_100bec5a8_caseD_69;
    case 0x6c:
      FUN_100beedfc();
switchD_100bec5a8_caseD_69:
      break;
    case 0x6d:
    case 0x6f:
    case 0x9d:
    case 0x9f:
      break;
    case 0x6e:
      goto switchD_100bec5a8_caseD_6e;
    case 0x78:
      param_3 = (code *)0x6f6e6261;
switchD_100bec5a8_caseD_66:
      param_3 = (code *)((ulong)param_3 | 0x6d7200000000);
switchD_100bec5a8_caseD_60:
      param_3 = (code *)((ulong)param_3 | 0x6c61000000000000);
      goto LAB_100bec6fc;
    case 0x80:
    case 0xaa:
    case 0xb2:
    case 0xb4:
    case 0xe2:
    case 0xea:
      goto switchD_100bec5a8_caseD_80;
    case 0x96:
      pbVar10 = (byte *)((long)&TargetClassDescriptor_100ca0260.NumFields + 2);
    case 0xda:
      pcVar12 = (code *)(ulong)pbVar10[(ulong)param_2 & 0xff];
      UNRECOVERED_JUMPTABLE = (code *)(&UNK_100bec6cc + (long)pcVar12 * 4);
      goto switchD_100bec310_caseD_f0;
    case 0x97:
      unaff_x21 = (code *)&DAT_00000001;
      goto switchD_100bec5a8_caseD_e0;
    case 0x9e:
    case 0xd8:
switchD_100bec5a8_caseD_65:
      unaff_x21 = (code *)0x0;
      bVar6 = ((ulong)param_2 & 1) == 0;
      puVar4 = &DAT_65756c6176;
      if (bVar6) {
        puVar4 = &DAT_65707974;
      }
      puVar1 = &DAT_e500000000000000;
      if (bVar6) {
        puVar1 = &DAT_e400000000000000;
      }
      if (puVar4 == &DAT_65707974 && puVar1 == &DAT_e400000000000000) {
        unaff_x21 = (code *)&DAT_00000001;
      }
      else {
        FUN_100beeb44();
      }
switchD_100bec5a8_caseD_bc:
      FUN_100b6f838();
      FUN_100b6f860();
      UNRECOVERED_JUMPTABLE = (code *)(ulong)((uint)unaff_x21 & 1);
      FUN_100b56e60(UNRECOVERED_JUMPTABLE);
      return UNRECOVERED_JUMPTABLE;
    case 0xa4:
      goto switchD_100bec5a8_caseD_a4;
    case 0xa5:
    case 0xb9:
    case 0xc1:
    case 0xc9:
    case 0xdd:
    case 0xf1:
    case 0xf9:
    case 0xfd:
switchD_100bec5a8_caseD_c5:
      FUN_100beebc0();
      FUN_100beeeec();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return param_3;
    case 0xa6:
    case 0xba:
    case 0xc2:
    case 0xca:
    case 0xde:
    case 0xf2:
    case 0xfa:
      goto switchD_100bec5a8_caseD_a6;
    case 0xa8:
      FUN_100bec940(0x656d616e,param_2 + 0x870);
      return param_3;
    case 0xbc:
      goto switchD_100bec5a8_caseD_bc;
    case 0xbd:
      FUN_100bec940();
      return param_3;
    case 0xc5:
    case 0xcd:
      goto switchD_100bec5a8_caseD_c5;
    case 0xc6:
    case 0xce:
    case 0xfe:
      goto switchD_100bec5a8_caseD_c6;
    case 199:
    case 0xcf:
    case 0xff:
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return param_3;
    case 0xcc:
      goto switchD_100bec5a8_caseD_cc;
    case 0xd9:
      (*(code *)&SUB_e900000000000070)();
      UNRECOVERED_JUMPTABLE = (code *)&stack0xffffffffffffffd8;
      FUN_100beeb94(UNRECOVERED_JUMPTABLE,param_3);
      FUN_100b6f838();
switchD_100bec5a8_caseD_c6:
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return UNRECOVERED_JUMPTABLE;
    case 0xe0:
      goto switchD_100bec5a8_caseD_e0;
    case 0xf4:
      FUN_100bec940(0x656d616e,param_2 + 0xbd4);
      return param_3;
    case 0xf5:
      FUN_100beebc0();
      FUN_100beeef8();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return param_3;
    case 0xfc:
      UNRECOVERED_JUMPTABLE = (code *)0x0;
      FUN_100bed2e8(0,0);
      return UNRECOVERED_JUMPTABLE;
    }
switchD_100bec5a8_caseD_6e:
    FUN_100beeb44();
    unaff_x21 = param_3;
switchD_100bec5a8_caseD_62:
switchD_100bec5a8_caseD_e0:
    FUN_100b6f838();
    FUN_100b6f860();
switchD_100bec5a8_caseD_64:
    param_3 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_63:
    FUN_100b56e60(param_3);
    return param_3;
  case (code *)0xdd:
  case (code *)0xe5:
switchD_100bec310_caseD_dd:
LAB_100bec6fc:
    pbVar10 = &BYTE_100c9f94a;
  case (code *)0xde:
  case (code *)0xe6:
switchD_100bec310_caseD_de:
                    /* WARNING: Could not recover jumptable at 0x000100bec71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bec720 + (ulong)pbVar10[(ulong)param_2 & 0xff] * 4))();
    return param_3;
  case (code *)0xef:
    goto switchD_100bec310_caseD_ef;
  case (code *)0xf0:
    goto switchD_100bec310_caseD_f0;
  case (code *)0xf1:
    goto switchD_100bec0c4_caseD_ca;
  case (code *)0xf7:
    goto switchD_100bec310_caseD_f7;
  }
switchD_100bec310_caseD_16:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0x73000000000000);
switchD_100bec310_caseD_47:
switchD_100bec310_caseD_0:
  in_ZR = param_3 == pcVar8;
switchD_100bec310_caseD_2c:
  if ((bool)in_ZR && pcVar14 == pcVar13) {
    param_3 = (code *)&DAT_00000001;
  }
  else {
    FUN_100beeb6c();
  }
  FUN_100b6f860();
  unaff_x21 = param_3;
switchD_100bec0c4_caseD_e2:
  FUN_100b6f838();
  UNRECOVERED_JUMPTABLE = (code *)(ulong)((uint)unaff_x21 & 1);
  FUN_100b56e60(UNRECOVERED_JUMPTABLE);
  return UNRECOVERED_JUMPTABLE;
}



/* Address: 0x100bebf90 | FUN_100bebf90 */

uint FUN_100bebf90(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  FUN_100bc9c68();
  lVar2 = param_1;
  lVar3 = param_2;
  FUN_100bc9c68();
  if (param_1 == lVar2 && param_2 == lVar3) {
    uVar1 = 1;
  }
  else {
    FUN_100beeb44(param_1);
    uVar1 = (uint)param_1;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  return uVar1 & 1;
}



/* Address: 0x100bec00c | FUN_100bec00c */

void FUN_100bec00c(ulong param_1,code *param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  bool bVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  byte *pbVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  uint uVar13;
  code *unaff_x21;
  code *unaff_x22;
  undefined1 *puVar14;
  undefined8 uVar15;
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar14 = &stack0xfffffffffffffff0;
  pcVar11 = (code *)&SUB_e900000000000070;
  uVar15 = 0x100bec028;
  FUN_100beec18();
  pcVar6 = (code *)(param_1 & 0xff);
  pbVar8 = &BYTE_100c9f914;
  pcVar10 = (code *)(ulong)(byte)pcVar6[0x100c9f914];
  pcVar9 = (code *)((long)pcVar10 * 4 + 0x100bec050);
  pcVar12 = (code *)&SUB_e900000000000070;
  puVar3 = &stack0xffffffffffffffd0;
  puVar1 = &stack0xffffffffffffffd0;
  pcVar5 = param_3;
  switch(pcVar6) {
  case (code *)0x0:
    goto LAB_100bec0ac;
  default:
    FUN_100beee2c();
  case (code *)0xfe:
LAB_100bec0ac:
    pcVar6 = (code *)((ulong)param_2 & 0xff);
code_r0x000100bec0b0:
    pbVar8 = &switchD_100bec0c4::switchdataD_100c9f91b;
    pcVar9 = (code *)0x100bec0c8;
    goto code_r0x000100bec0bc;
  case (code *)0x2:
  case (code *)0x9:
  case (code *)0x3e:
  case (code *)0x45:
  case (code *)0x5f:
  case (code *)0x66:
    FUN_100beee14();
  case (code *)0x35:
  case (code *)0x39:
  case (code *)0x80:
  case (code *)0xea:
    goto LAB_100bec0ac;
  case (code *)0x3:
  case (code *)0xa:
  case (code *)0x50:
  case (code *)0x63:
  case (code *)0x67:
  case (code *)0x79:
  case (code *)0x43:
  case (code *)0x4a:
  case (code *)0x81:
switchD_100bebe90_caseD_a1:
code_r0x000100bec07c:
code_r0x000100bec080:
    goto LAB_100bec0ac;
  case (code *)0x4:
  case (code *)0xb:
  case (code *)0x4c:
  case (code *)0x52:
  case (code *)0x60:
  case (code *)0x68:
  case (code *)0x7b:
  case (code *)0xac:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xe0:
code_r0x000100bec060:
switchD_100bebe90_caseD_9f:
    goto LAB_100bec0ac;
  case (code *)0x5:
  case (code *)0xc:
  case (code *)0x51:
    FUN_100beeccc();
  case (code *)0x2b:
  case (code *)0x31:
  case (code *)0x3d:
  case (code *)0x84:
    goto LAB_100bec0ac;
  case (code *)0x6:
  case (code *)0xd:
  case (code *)0x5c:
  case (code *)0x77:
  case (code *)0x88:
  case (code *)0x11:
  case (code *)0x18:
  case (code *)0x3f:
  case (code *)0x44:
  case (code *)0x4b:
  case (code *)0x6e:
  case (code *)0x86:
LAB_100bec094:
code_r0x000100bec09c:
code_r0x000100bec0a0:
code_r0x000100bec0a4:
code_r0x000100bec0a8:
    goto LAB_100bec0ac;
  case (code *)0x7:
  case (code *)0x40:
  case (code *)0x8a:
  case (code *)0xd5:
    goto code_r0x000100bec0a0;
  case (code *)0xe:
  case (code *)0x15:
  case (code *)0x54:
  case (code *)0x6b:
  case (code *)0xe4:
  case (code *)0xec:
  case (code *)0xf4:
    goto switchD_100bec0c4_caseD_a5;
  case (code *)0x10:
  case (code *)0x17:
  case (code *)0x28:
  case (code *)0x2e:
  case (code *)0x61:
  case (code *)0x69:
  case (code *)0x6d:
  case (code *)0x7a:
  case (code *)0x85:
    goto switchD_100bebe90_caseD_a1;
  case (code *)0x12:
  case (code *)0x19:
  case (code *)0x34:
  case (code *)0x38:
  case (code *)0x58:
  case (code *)0x6f:
  case (code *)0x7f:
    goto switchD_100bebe90_caseD_9f;
  case (code *)0x13:
  case (code *)0x1a:
  case (code *)0x48:
  case (code *)0x70:
    goto code_r0x000100bec0a8;
  case (code *)0x14:
  case (code *)0x1b:
  case (code *)0x5a:
  case (code *)0x71:
    pcVar9 = param_3;
    FUN_100beeea4();
    break;
  case (code *)0x26:
  case (code *)0x2c:
  case (code *)0x57:
  case (code *)0x64:
    goto LAB_100bec094;
  case (code *)0x29:
  case (code *)0x2f:
  case (code *)0x32:
  case (code *)0x36:
  case (code *)0x3c:
  case (code *)0x62:
  case (code *)0x6a:
  case (code *)0x7c:
  case (code *)0x7d:
  case (code *)0x83:
    goto code_r0x000100bec080;
  case (code *)0x2a:
  case (code *)0x30:
  case (code *)0x5e:
    goto code_r0x000100bec060;
  case (code *)0x3a:
  case (code *)0x46:
  case (code *)0x4e:
  case (code *)0x5b:
  case (code *)0xf0:
    goto code_r0x000100bec0b0;
  case (code *)0x41:
    goto switchD_100bec0c4_caseD_23;
  case (code *)0x47:
  case (code *)0xb0:
    pcVar11 = (code *)&DAT_e400000000000000;
    goto switchD_100bec0c4_caseD_a5;
  case (code *)0x4d:
    goto code_r0x000100bec0a4;
  case (code *)0x53:
    goto code_r0x000100bec09c;
  case (code *)0x56:
    goto code_r0x000100bec07c;
  case (code *)0x59:
    goto code_r0x000100bec0c0;
  case (code *)0x89:
    goto code_r0x000100bec0bc;
  case (code *)0x8c:
  case (code *)0xbc:
    goto code_r0x000100bec19c;
  case (code *)0x8d:
  case (code *)0x93:
  case (code *)0xbd:
  case (code *)0xc6:
    goto code_r0x000100bec1e4;
  case (code *)0x8e:
  case (code *)0xbe:
  case (code *)0xc4:
  case (code *)0xc5:
    goto switchD_100bec0c4_caseD_9d;
  case (code *)0x8f:
  case (code *)0x9c:
  case (code *)0xbf:
  case (code *)0xc8:
  case (code *)0xcc:
    goto code_r0x000100bec220;
  case (code *)0x90:
  case (code *)0xc0:
    goto code_r0x000100bec218;
  case (code *)0x91:
  case (code *)0x9d:
  case (code *)0xc1:
  case (code *)0xcd:
    goto code_r0x000100bec234;
  case (code *)0x92:
    goto code_r0x000100bec198;
  case (code *)0x94:
  case (code *)0x97:
    goto switchD_100bec0c4_caseD_bb;
  case (code *)0x95:
  case (code *)0xc7:
    goto code_r0x000100bec1dc;
  case (code *)0x96:
    goto switchD_100bebe90_caseD_e1;
  case (code *)0x98:
    goto switchD_100bec0c4_caseD_ff;
  case (code *)0x99:
  case (code *)0x9b:
  case (code *)0xc9:
  case (code *)0xcb:
    goto LAB_100bec1f4;
  case (code *)0x9a:
    goto code_r0x000100bec200;
  case (code *)0xa4:
code_r0x000100bec190:
    pcVar10 = (code *)((ulong)pcVar10 | 0x687370610000);
    goto code_r0x000100bec198;
  case (code *)0xc2:
    pcVar5 = (code *)((ulong)param_3 & 0xffff00000000ffff | 0x73656d610000);
    if (((ulong)param_3 & 0xff) != 0) {
      in_ZR = ((uint)param_3 & 0xff) == 1;
      pcVar6 = (code *)0x7265747369676572;
      pbVar8 = (byte *)0xe900000000000073;
      pcVar9 = (code *)&DAT_e800000000000000;
      pcVar10 = (code *)0x6e73;
      goto code_r0x000100bec190;
    }
    param_3 = pcVar5;
    pcVar11 = (code *)&DAT_e600000000000000;
    goto LAB_100bec1b0;
  case (code *)0xc3:
    goto code_r0x000100bec20c;
  case (code *)0xca:
    puVar2 = &stack0xffffffffffffffa0;
code_r0x000100bec234:
    puVar14 = puVar2 + 0x20;
    uVar15 = 0x100bec23c;
    FUN_100beefb0();
    pcVar5 = (code *)&DAT_7a69735f79646f62;
    pcVar7 = (code *)((ulong)param_3 & 0xff);
    pbVar8 = &BYTE_100c9f922;
    pcVar6 = (code *)(ulong)(byte)pcVar7[0x100c9f922];
    pcVar9 = (code *)(&UNK_100bec274 + (long)pcVar6 * 4);
    pcVar12 = (code *)0xe900000000000065;
    puVar3 = puVar2;
    param_3 = pcVar5;
    pcVar10 = pcVar5;
    switch(pcVar7) {
    case (code *)0x0:
    case (code *)0x7:
    case (code *)0x46:
    case (code *)0x5d:
    case (code *)0xd6:
    case (code *)0xde:
    case (code *)0xe6:
      goto LAB_100bec2f8;
    default:
      pcVar12 = (code *)&DAT_e700000000000000;
    case (code *)0xf0:
      pcVar10 = (code *)0x6f63;
code_r0x000100bec27c:
      pcVar10 = (code *)((ulong)pcVar10 & 0xffffffff0000ffff | 0x6b6f0000);
switchD_100bec0c4_caseD_87:
      param_3 = (code *)((ulong)pcVar10 & 0xffff0000ffffffff | 0x656900000000);
switchD_100bec0c4_caseD_bc:
      puVar2 = puVar3;
      pcVar10 = pcVar5;
switchD_100bec0c4_caseD_8a:
      pcVar5 = (code *)((ulong)param_3 & 0xffffffffffff | 0x73000000000000);
code_r0x000100bec2b0:
      param_3 = pcVar10;
LAB_100bec2f8:
      pcVar7 = (code *)((ulong)param_2 & 0xff);
switchD_100bec0c4_caseD_e1:
      pbVar8 = &switchD_100bec310::switchdataD_100c9f929;
      pcVar6 = (code *)(ulong)(byte)pcVar7[0x100c9f929];
      pcVar9 = (code *)((long)pcVar6 * 4 + 0x100bec314);
      puVar3 = puVar2;
      switch(pcVar7) {
      case (code *)0x0:
      case (code *)0x3f:
      case (code *)0x56:
      case (code *)0xcf:
      case (code *)0xd7:
      case (code *)0xdf:
        goto switchD_100bec310_caseD_0;
      default:
switchD_100bec310_caseD_1:
        pcVar11 = (code *)&DAT_e700000000000000;
      case (code *)0xe9:
switchD_100bec310_caseD_e9:
        param_3 = (code *)0x6f63;
switchD_100bec310_caseD_37:
        param_3 = (code *)((ulong)param_3 & 0xffffffff0000ffff | 0x6b6f0000);
switchD_100bec310_caseD_97:
        param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x656900000000);
switchD_100bec310_caseD_15:
        break;
      case (code *)0x2:
      case (code *)0x13:
      case (code *)0x19:
      case (code *)0x4c:
      case (code *)0x54:
      case (code *)0x58:
      case (code *)0x65:
      case (code *)0x70:
switchD_100bec310_caseD_2:
        pcVar11 = (code *)&DAT_e700000000000000;
      case (code *)0x41:
switchD_100bec310_caseD_41:
        param_3 = (code *)0x6568;
switchD_100bec310_caseD_14:
        param_3 = (code *)((ulong)param_3 & 0xffffffff0000ffff | 0x64610000);
switchD_100bec310_caseD_3c:
        param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x726500000000);
        break;
      case (code *)0x3:
      case (code *)0x2a:
      case (code *)0x2f:
      case (code *)0x36:
      case (code *)0x59:
      case (code *)0x71:
switchD_100bec310_caseD_3:
        pcVar11 = (code *)&DAT_e800000000000000;
      case (code *)0x11:
      case (code *)0x17:
      case (code *)0x42:
      case (code *)0x4f:
switchD_100bec310_caseD_11:
        param_3 = (code *)0x67617266;
switchD_100bec310_caseD_3e:
        param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x656d00000000);
switchD_100bec310_caseD_2b:
        param_3 = (code *)((ulong)param_3 & 0xffffffffffff | 0x746e000000000000);
switchD_100bec0c4_caseD_cd:
        goto switchD_100bec310_caseD_0;
      case (code *)0x4:
      case (code *)0x1f:
      case (code *)0x23:
      case (code *)0x43:
      case (code *)0x5a:
      case (code *)0x6a:
switchD_100bec310_caseD_4:
        pcVar11 = (code *)&DAT_e600000000000000;
      case (code *)0x29:
      case (code *)0x30:
      case (code *)0x4a:
      case (code *)0x51:
switchD_100bec310_caseD_29:
        param_3 = (code *)0x656d;
switchD_100bec310_caseD_20:
        param_3 = (code *)((ulong)param_3 & 0xffffffff0000ffff | 0x68740000);
switchD_100bec310_caseD_3b:
        param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x646f00000000);
switchD_100bec310_caseD_2e:
        goto switchD_100bec310_caseD_0;
      case (code *)0x5:
      case (code *)0x33:
      case (code *)0x5b:
switchD_100bec310_caseD_5:
        param_3 = (code *)0x72657571;
      case (code *)0x25:
      case (code *)0x31:
      case (code *)0x39:
      case (code *)0x46:
      case (code *)0xdb:
switchD_100bec310_caseD_25:
        param_3 = (code *)((ulong)param_3 & 0xffffffff | 0x74735f7900000000);
        pcVar11 = (code *)0x6972;
switchD_100bec310_caseD_74:
        pcVar11 = (code *)((ulong)pcVar11 | 0x676e0000);
switchD_100bec310_caseD_44:
        pcVar11 = (code *)((ulong)pcVar11 & 0xffffffffffff | 0xec00000000000000);
        goto switchD_100bec310_caseD_0;
      case (code *)0x6:
      case (code *)0x45:
      case (code *)0x5c:
switchD_100bec310_caseD_6:
        pcVar11 = (code *)0xe300000000000000;
        param_3 = (code *)0x7275;
      case (code *)0x32:
      case (code *)0x9b:
switchD_100bec310_caseD_32:
        param_3 = (code *)(ulong)((uint)param_3 & 0xffff | 0x6c0000);
        goto switchD_100bec310_caseD_0;
      case (code *)0x14:
      case (code *)0x1a:
      case (code *)0x1d:
      case (code *)0x21:
      case (code *)0x27:
      case (code *)0x4d:
      case (code *)0x55:
      case (code *)0x67:
      case (code *)0x68:
      case (code *)0x6e:
        goto switchD_100bec310_caseD_14;
      case (code *)0x15:
      case (code *)0x1b:
      case (code *)0x49:
        goto switchD_100bec310_caseD_15;
      case (code *)0x16:
      case (code *)0x1c:
      case (code *)0x28:
      case (code *)0x6f:
        break;
      case (code *)0x20:
      case (code *)0x24:
      case (code *)0x6b:
      case (code *)0xd5:
        goto switchD_100bec310_caseD_20;
      case (code *)0x2b:
      case (code *)0x75:
      case (code *)0xc0:
      case (code *)0xf8:
        goto switchD_100bec310_caseD_2b;
      case (code *)0x2c:
        goto switchD_100bec310_caseD_2c;
      case (code *)0x2e:
      case (code *)0x35:
      case (code *)0x6c:
        goto switchD_100bec310_caseD_2e;
      case (code *)0x37:
      case (code *)0x3d:
      case (code *)0x4b:
      case (code *)0x53:
      case (code *)0x66:
        goto switchD_100bec310_caseD_37;
      case (code *)0x38:
      case (code *)0xf3:
        goto switchD_100bec0c4_caseD_cd;
      case (code *)0x3b:
      case (code *)0x4e:
      case (code *)0x52:
      case (code *)0x64:
        goto switchD_100bec310_caseD_3b;
      case (code *)0x3c:
        goto switchD_100bec310_caseD_3c;
      case (code *)0x3e:
        goto switchD_100bec310_caseD_3e;
      case (code *)0x44:
        goto switchD_100bec310_caseD_44;
      case (code *)0x47:
      case (code *)0x62:
      case (code *)0x73:
        goto switchD_100bec310_caseD_47;
      case (code *)0x74:
        goto switchD_100bec310_caseD_74;
      case (code *)0x77:
      case (code *)0xa7:
        goto switchD_100bec310_caseD_77;
      case (code *)0x78:
      case (code *)0x7e:
      case (code *)0xa8:
      case (code *)0xb1:
        goto switchD_100bec310_caseD_78;
      case (code *)0x79:
      case (code *)0xa9:
      case (code *)0xaf:
      case (code *)0xb0:
        goto switchD_100bec310_caseD_79;
      case (code *)0x7a:
      case (code *)0x87:
      case (code *)0xaa:
      case (code *)0xb3:
      case (code *)0xb7:
        goto switchD_100bec310_caseD_7a;
      case (code *)0x7b:
      case (code *)0xab:
        goto switchD_100bec310_caseD_7b;
      case (code *)0x7c:
      case (code *)0x88:
      case (code *)0xac:
      case (code *)0xb8:
        goto switchD_100bec310_caseD_7c;
      case (code *)0x7d:
        goto switchD_100bec310_caseD_7d;
      case (code *)0x7f:
      case (code *)0x82:
        goto switchD_100bec0c4_caseD_eb;
      case (code *)0x80:
      case (code *)0xb2:
        goto switchD_100bec310_caseD_80;
      case (code *)0x81:
        goto switchD_100bec310_caseD_81;
      case (code *)0x83:
        goto switchD_100bec310_caseD_83;
      case (code *)0x84:
      case (code *)0x86:
      case (code *)0xb4:
      case (code *)0xb6:
        goto switchD_100bec310_caseD_84;
      case (code *)0x85:
        goto switchD_100bec0c4_caseD_ec;
      case (code *)0x8f:
switchD_100bec310_caseD_8f:
        pcVar10 = (code *)0x6f66;
code_r0x000100bec458:
        param_3 = (code *)((ulong)pcVar10 & 0xffffffff0000ffff | 0x6d720000);
        goto switchD_100bec310_caseD_7d;
      case (code *)0x97:
      case (code *)0xc1:
      case (code *)0xc9:
      case (code *)0xcb:
      case (code *)0xf9:
        goto switchD_100bec310_caseD_97;
      case (code *)0xad:
        goto switchD_100bec310_caseD_ad;
      case (code *)0xae:
        goto switchD_100bec310_caseD_ae;
      case (code *)0xb5:
        goto switchD_100bec310_caseD_b5;
      case (code *)0xbb:
switchD_100bec310_caseD_bb:
        *(code **)(puVar3 + -0x30) = unaff_x22;
        *(code **)(puVar3 + -0x28) = unaff_x21;
        *(code **)(puVar3 + -0x20) = pcVar12;
        *(undefined1 **)(puVar3 + -0x18) = &SUB_e900000000000070;
        *(undefined1 **)(puVar3 + -0x10) = puVar14;
        *(undefined8 *)(puVar3 + -8) = uVar15;
        in_ZR = ((ulong)pcVar5 & 1) == 0;
        pcVar7 = (code *)0x65646f63;
        pbVar8 = (byte *)0x6e69616d6f64;
        pcVar5 = pcVar7;
        if ((bool)in_ZR) {
          pcVar5 = (code *)pbVar8;
        }
      case (code *)0xe3:
switchD_100bec310_caseD_e3:
        pcVar9 = (code *)&DAT_e600000000000000;
code_r0x000100bec3f8:
        pcVar6 = (code *)&DAT_e400000000000000;
code_r0x000100bec3fc:
        pcVar11 = pcVar6;
        if ((bool)in_ZR) {
          pcVar11 = pcVar9;
        }
code_r0x000100bec400:
        in_ZR = ((ulong)param_2 & 1) == 0;
        pcVar10 = pcVar7;
        if ((bool)in_ZR) {
          pcVar10 = (code *)pbVar8;
        }
code_r0x000100bec408:
        if ((bool)in_ZR) {
          pcVar6 = pcVar9;
        }
        in_ZR = false;
        if (pcVar5 == pcVar10) {
          in_ZR = pcVar11 == pcVar6;
        }
code_r0x000100bec414:
        if ((bool)in_ZR) {
switchD_100bec0c4_caseD_ca:
          unaff_x21 = (code *)&DAT_00000001;
        }
        else {
code_r0x000100bec418:
          FUN_100beeb44();
          unaff_x21 = pcVar5;
switchD_100bec310_caseD_ad:
        }
        FUN_100b6f838();
code_r0x000100bec42c:
        FUN_100b6f860();
code_r0x000100bec430:
        pcVar5 = (code *)(ulong)((uint)unaff_x21 & 1);
code_r0x000100bec434:
        FUN_100b56e60(pcVar5);
        return;
      case (code *)0xbc:
      case (code *)0xd0:
      case (code *)0xd8:
      case (code *)0xe0:
      case (code *)0xf4:
switchD_100bec310_caseD_bc:
        FUN_100beeb44(pcVar5);
LAB_100bec680:
        FUN_100b6f838();
        FUN_100b6f860();
        unaff_x21 = pcVar5;
      case (code *)0xdc:
      case (code *)0xe4:
switchD_100bec310_caseD_dc:
        pcVar5 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_cc:
        FUN_100b56e60(pcVar5);
        return;
      case (code *)0xbd:
      case (code *)0xd1:
      case (code *)0xd9:
      case (code *)0xe1:
      case (code *)0xf5:
        goto switchD_100bec0c4_caseD_e2;
      case (code *)0xbf:
switchD_100bec310_caseD_bf:
        param_3 = (code *)(ulong)((uint)param_3 & 0xffff | 0x656d0000);
switchD_100bec5a8_caseD_80:
        goto switchD_100bec5a8_caseD_0;
      case (code *)0xd3:
switchD_100bec310_caseD_d3:
        pcVar5 = (code *)0x656d616e;
LAB_100bec588:
        pcVar12 = (code *)&SUB_e200000000000000;
        param_3 = (code *)&SUB_00006469;
        pcVar7 = (code *)((ulong)param_2 & 0xff);
        pbVar8 = &switchD_100bec5a8::switchdataD_100c9f940;
        puVar2 = puVar3;
        switch(pcVar7) {
        case (code *)0x0:
        case (code *)0x2b:
        case (code *)0x38:
          goto switchD_100bec5a8_caseD_0;
        default:
          pcVar12 = (code *)&DAT_e400000000000000;
        case (code *)0xd2:
          param_3 = (code *)0x616e;
          goto switchD_100bec310_caseD_bf;
        case (code *)0x2:
        case (code *)0x35:
        case (code *)0x3d:
        case (code *)0x41:
        case (code *)0x4e:
        case (code *)0x59:
          FUN_100beec94();
        case (code *)0x2a:
          goto switchD_100bec5a8_caseD_0;
        case (code *)0x3:
        case (code *)0x6:
        case (code *)0xa:
        case (code *)0x10:
        case (code *)0x36:
        case (code *)0x3e:
        case (code *)0x50:
        case (code *)0x51:
        case (code *)0x57:
          FUN_100beedfc();
        case (code *)0x25:
          goto switchD_100bec5a8_caseD_0;
        case (code *)0x4:
        case (code *)0x32:
        case (code *)0xec:
          pcVar12 = (code *)&DAT_e700000000000000;
        case (code *)0x8:
        case (code *)0xc:
        case (code *)0x2c:
        case (code *)0x43:
        case (code *)0x53:
          param_3 = (code *)0x7563;
switchD_100bec5a8_caseD_12:
          param_3 = (code *)((ulong)param_3 | 0x72720000);
switchD_100bec5a8_caseD_9:
          param_3 = (code *)((ulong)param_3 | 0x6e6500000000);
switchD_100bec5a8_caseD_24:
          param_3 = (code *)((ulong)param_3 | 0x74000000000000);
          goto switchD_100bec5a8_caseD_17;
        case (code *)0x5:
        case (code *)0x11:
        case (code *)0x58:
          pcVar12 = (code *)&DAT_e400000000000000;
          goto switchD_100bec5a8_caseD_30;
        case (code *)0x9:
        case (code *)0xd:
        case (code *)0x54:
        case (code *)0xbe:
        case (code *)0xf6:
          goto switchD_100bec5a8_caseD_9;
        case (code *)0xe:
        case (code *)0x1a:
        case (code *)0x22:
        case (code *)0x2f:
        case (code *)0xc4:
          goto switchD_100bec5a8_caseD_e;
        case (code *)0x12:
        case (code *)0x19:
        case (code *)0x33:
        case (code *)0x3a:
          goto switchD_100bec5a8_caseD_12;
        case (code *)0x13:
        case (code *)0x18:
        case (code *)0x1f:
        case (code *)0x42:
        case (code *)0x5a:
          goto switchD_100bec5a8_caseD_13;
        case (code *)0x14:
        case (code *)0x5e:
        case (code *)0xa9:
        case (code *)0xe1:
          goto switchD_100bec5a8_caseD_14;
        case (code *)0x15:
          goto switchD_100bec5a8_caseD_15;
        case (code *)0x17:
        case (code *)0x1e:
        case (code *)0x55:
        case (code *)0xf0:
        case (code *)0xf8:
          goto switchD_100bec5a8_caseD_17;
        case (code *)0x1b:
        case (code *)0x84:
          puVar2 = puVar3 + -0x30;
          *(code **)(puVar3 + -0x30) = unaff_x22;
          *(code **)(puVar3 + -0x28) = unaff_x21;
        case (code *)0x28:
        case (code *)0x3f:
        case (code *)0xb8:
        case (code *)0xc0:
        case (code *)0xc8:
          *(undefined1 **)(puVar2 + 0x10) = &SUB_e200000000000000;
          *(undefined1 **)(puVar2 + 0x18) = &SUB_e900000000000070;
switchD_100bec5a8_caseD_15:
          *(undefined1 **)(puVar2 + 0x20) = puVar14;
          *(undefined8 *)(puVar2 + 0x28) = uVar15;
          pcVar12 = (code *)&SUB_00006469;
          unaff_x22 = param_2;
          goto code_r0x000100bec644;
        case (code *)0x1c:
        case (code *)0x44:
          goto switchD_100bec310_caseD_d4;
        case (code *)0x20:
        case (code *)0x26:
        case (code *)0x34:
        case (code *)0x3c:
        case (code *)0x4f:
          goto switchD_100bec310_caseD_bf;
        case (code *)0x21:
        case (code *)0xdc:
          goto switchD_100bec5a8_caseD_21;
        case (code *)0x24:
        case (code *)0x37:
        case (code *)0x3b:
        case (code *)0x4d:
          goto switchD_100bec5a8_caseD_24;
        case (code *)0x27:
          goto switchD_100bec5a8_caseD_27;
        case (code *)0x2d:
          goto switchD_100bec5a8_caseD_2d;
        case (code *)0x2e:
        case (code *)0x45:
          goto code_r0x000100bec628;
        case (code *)0x30:
        case (code *)0x4b:
        case (code *)0x5c:
          goto switchD_100bec5a8_caseD_30;
        case (code *)0x5d:
          goto switchD_100bec5a8_caseD_5d;
        case (code *)0x60:
        case (code *)0x90:
          goto switchD_100bec5a8_caseD_60;
        case (code *)0x61:
        case (code *)0x67:
        case (code *)0x91:
        case (code *)0x9a:
        case (code *)0x6a:
          break;
        case (code *)0x62:
        case (code *)0x92:
        case (code *)0x98:
        case (code *)0x99:
          goto switchD_100bec5a8_caseD_62;
        case (code *)0x63:
        case (code *)0x70:
        case (code *)0x93:
        case (code *)0x9c:
        case (code *)0xa0:
          goto switchD_100bec5a8_caseD_63;
        case (code *)0x64:
        case (code *)0x94:
          goto switchD_100bec5a8_caseD_64;
        case (code *)0x65:
        case (code *)0x71:
        case (code *)0x95:
        case (code *)0xa1:
          goto switchD_100bec5a8_caseD_65;
        case (code *)0x66:
          goto switchD_100bec5a8_caseD_66;
        case (code *)0x68:
        case (code *)0x6b:
          break;
        case (code *)0x69:
        case (code *)0x9b:
          goto switchD_100bec5a8_caseD_69;
        case (code *)0x6c:
          FUN_100beedfc();
switchD_100bec5a8_caseD_69:
          break;
        case (code *)0x6d:
        case (code *)0x6f:
        case (code *)0x9d:
        case (code *)0x9f:
          break;
        case (code *)0x6e:
          goto switchD_100bec5a8_caseD_6e;
        case (code *)0x78:
          pcVar5 = (code *)0x6f6e6261;
switchD_100bec5a8_caseD_66:
          pcVar5 = (code *)((ulong)pcVar5 & 0xffff0000ffffffff | 0x6d7200000000);
switchD_100bec5a8_caseD_60:
          pcVar5 = (code *)((ulong)pcVar5 & 0xffffffffffff | 0x6c61000000000000);
          goto LAB_100bec6fc;
        case (code *)0x80:
        case (code *)0xaa:
        case (code *)0xb2:
        case (code *)0xb4:
        case (code *)0xe2:
        case (code *)0xea:
          goto switchD_100bec5a8_caseD_80;
        case (code *)0x96:
          pbVar8 = (byte *)((long)&TargetClassDescriptor_100ca0260.NumFields + 2);
        case (code *)0xda:
          pcVar6 = (code *)(ulong)pbVar8[(long)pcVar7];
          pcVar9 = (code *)(&UNK_100bec6cc + (long)pcVar6 * 4);
          goto switchD_100bec310_caseD_f0;
        case (code *)0x97:
          unaff_x21 = (code *)&DAT_00000001;
          goto switchD_100bec5a8_caseD_e0;
        case (code *)0x9e:
          goto switchD_100bec5a8_caseD_9e;
        case (code *)0xa4:
          goto switchD_100bec5a8_caseD_a4;
        case (code *)0xa5:
        case (code *)0xb9:
        case (code *)0xc1:
        case (code *)0xc9:
        case (code *)0xdd:
        case (code *)0xf1:
        case (code *)0xf9:
          *(undefined1 **)(puVar3 + -0x20) = &SUB_e200000000000000;
          *(undefined1 **)(puVar3 + -0x18) = &SUB_e900000000000070;
          *(undefined1 **)(puVar3 + -0x10) = puVar14;
          *(undefined8 *)(puVar3 + -8) = uVar15;
        case (code *)0xfd:
switchD_100bec5a8_caseD_c5:
          FUN_100beebc0();
          FUN_100beeeec();
          FUN_100b6fbb4();
          FUN_100b8a7ec();
          return;
        case (code *)0xa6:
        case (code *)0xba:
        case (code *)0xc2:
        case (code *)0xca:
        case (code *)0xde:
        case (code *)0xf2:
        case (code *)0xfa:
          goto switchD_100bec5a8_caseD_a6;
        case (code *)0xa8:
          FUN_100bec940(pcVar5,param_2 + 0x870);
          return;
        case (code *)0xbc:
          goto switchD_100bec5a8_caseD_bc;
        case (code *)0xbd:
          FUN_100bec940();
          return;
        case (code *)0xc5:
        case (code *)0xcd:
          goto switchD_100bec5a8_caseD_c5;
        case (code *)0xc6:
        case (code *)0xce:
        case (code *)0xfe:
          goto switchD_100bec5a8_caseD_c6;
        case (code *)0xc7:
        case (code *)0xcf:
        case (code *)0xff:
          FUN_100b6fbb4();
          FUN_100b8a7ec();
          return;
        case (code *)0xcc:
          goto switchD_100bec5a8_caseD_cc;
        case (code *)0xd8:
          goto switchD_100bec5a8_caseD_d8;
        case (code *)0xd9:
          (*(code *)&SUB_e900000000000070)();
          FUN_100beeb94(puVar3 + 8,pcVar5);
          FUN_100b6f838();
switchD_100bec5a8_caseD_c6:
          FUN_100b6fbb4();
          FUN_100b8a7ec();
          return;
        case (code *)0xe0:
          goto switchD_100bec5a8_caseD_e0;
        case (code *)0xf4:
          FUN_100bec940(pcVar5,param_2 + 0xbd4);
          return;
        case (code *)0xf5:
          FUN_100beebc0();
          FUN_100beeef8();
          FUN_100b6fbb4();
          FUN_100b8a7ec();
          return;
        case (code *)0xfc:
          *(undefined1 **)(puVar3 + -0x10) = puVar14;
          *(undefined8 *)(puVar3 + -8) = uVar15;
          FUN_100bed2e8(0,0);
          return;
        }
switchD_100bec5a8_caseD_6e:
        FUN_100beeb44();
        unaff_x21 = pcVar5;
switchD_100bec5a8_caseD_62:
switchD_100bec5a8_caseD_e0:
        FUN_100b6f838();
        FUN_100b6f860();
switchD_100bec5a8_caseD_64:
        pcVar5 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_63:
        FUN_100b56e60(pcVar5);
        return;
      case (code *)0xd4:
        goto switchD_100bec310_caseD_d4;
      case (code *)0xdd:
      case (code *)0xe5:
switchD_100bec310_caseD_dd:
LAB_100bec6fc:
        pcVar7 = (code *)((ulong)param_2 & 0xff);
        pbVar8 = &BYTE_100c9f94a;
      case (code *)0xde:
      case (code *)0xe6:
switchD_100bec310_caseD_de:
                    /* WARNING: Could not recover jumptable at 0x000100bec71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_100bec720 + (ulong)pbVar8[(long)pcVar7] * 4))(pcVar5);
        return;
      case (code *)0xef:
        goto switchD_100bec310_caseD_ef;
      case (code *)0xf0:
        goto switchD_100bec310_caseD_f0;
      case (code *)0xf1:
        goto switchD_100bec0c4_caseD_ca;
      case (code *)0xf7:
        goto switchD_100bec310_caseD_f7;
      }
switchD_100bec310_caseD_16:
      param_3 = (code *)((ulong)param_3 & 0xffffffffffff | 0x73000000000000);
switchD_100bec310_caseD_47:
switchD_100bec310_caseD_0:
      in_ZR = pcVar5 == param_3;
switchD_100bec310_caseD_2c:
      if ((bool)in_ZR && pcVar12 == pcVar11) {
        unaff_x21 = (code *)&DAT_00000001;
      }
      else {
        FUN_100beeb6c();
        unaff_x21 = pcVar5;
code_r0x000100bec3ac:
      }
LAB_100bec3b4:
      FUN_100b6f860();
      goto switchD_100bec0c4_caseD_e2;
    case (code *)0x2:
    case (code *)0x9:
    case (code *)0x1a:
    case (code *)0x20:
    case (code *)0x53:
    case (code *)0x5b:
    case (code *)0x5f:
    case (code *)0x6c:
    case (code *)0x77:
      pcVar12 = (code *)&DAT_e700000000000000;
    case (code *)0x48:
      pcVar5 = (code *)0x6568;
code_r0x000100bec2a4:
      pcVar5 = (code *)((ulong)pcVar5 & 0xffffffff0000ffff | 0x64610000);
switchD_100bec0c4_caseD_fd:
      param_3 = (code *)((ulong)pcVar5 & 0xffff0000ffffffff | 0x726500000000);
      goto switchD_100bec0c4_caseD_8a;
    case (code *)0x3:
    case (code *)0xa:
    case (code *)0x31:
    case (code *)0x36:
    case (code *)0x3d:
    case (code *)0x60:
    case (code *)0x78:
      pcVar12 = (code *)&DAT_e800000000000000;
    case (code *)0x18:
    case (code *)0x1e:
    case (code *)0x49:
    case (code *)0x56:
      pcVar5 = (code *)0x67617266;
code_r0x000100bec2c0:
      pcVar5 = (code *)((ulong)pcVar5 & 0xffff0000ffffffff | 0x656d00000000);
code_r0x000100bec2c4:
      pcVar5 = (code *)((ulong)pcVar5 & 0xffffffffffff | 0x746e000000000000);
code_r0x000100bec2c8:
      goto LAB_100bec2f8;
    case (code *)0x4:
    case (code *)0xb:
    case (code *)0x26:
    case (code *)0x2a:
    case (code *)0x4a:
    case (code *)0x61:
    case (code *)0x71:
      pcVar12 = (code *)&DAT_e600000000000000;
    case (code *)0x30:
    case (code *)0x37:
    case (code *)0x51:
    case (code *)0x58:
      pcVar5 = (code *)0x656d;
switchD_100bec0c4_caseD_89:
      pcVar5 = (code *)((ulong)pcVar5 & 0xffffffff0000ffff | 0x68740000);
code_r0x000100bec294:
      pcVar5 = (code *)((ulong)pcVar5 & 0xffff0000ffffffff | 0x646f00000000);
switchD_100bec0c4_caseD_88:
      goto LAB_100bec2f8;
    case (code *)0x5:
    case (code *)0xc:
    case (code *)0x3a:
    case (code *)0x62:
      pcVar5 = (code *)0x72657571;
    case (code *)0x2c:
    case (code *)0x38:
    case (code *)0x40:
    case (code *)0x4d:
    case (code *)0xe2:
      pcVar5 = (code *)((ulong)pcVar5 & 0xffffffff | 0x74735f7900000000);
      pcVar12 = (code *)0x6972;
code_r0x000100bec2e0:
      pcVar12 = (code *)((ulong)pcVar12 | 0x676e0000);
code_r0x000100bec2e4:
      pcVar12 = (code *)((ulong)pcVar12 & 0xffffffffffff | 0xec00000000000000);
      goto LAB_100bec2f8;
    case (code *)0x6:
    case (code *)0xd:
    case (code *)0x4c:
    case (code *)0x63:
      pcVar12 = (code *)0xe300000000000000;
      puVar1 = puVar2;
code_r0x000100bec2f0:
      puVar2 = puVar1;
      pcVar5 = (code *)0x7275;
    case (code *)0x39:
    case (code *)0xa2:
      pcVar5 = (code *)(ulong)((uint)pcVar5 & 0xffff | 0x6c0000);
      goto LAB_100bec2f8;
    case (code *)0x1b:
    case (code *)0x21:
    case (code *)0x24:
    case (code *)0x28:
    case (code *)0x2e:
    case (code *)0x54:
    case (code *)0x5c:
    case (code *)0x6e:
    case (code *)0x6f:
    case (code *)0x75:
      goto code_r0x000100bec2a4;
    case (code *)0x1c:
    case (code *)0x22:
    case (code *)0x50:
      goto switchD_100bec0c4_caseD_bc;
    case (code *)0x1d:
    case (code *)0x23:
    case (code *)0x2f:
    case (code *)0x76:
      goto switchD_100bec0c4_caseD_8a;
    case (code *)0x27:
    case (code *)0x2b:
    case (code *)0x72:
    case (code *)0xdc:
      goto switchD_100bec0c4_caseD_89;
    case (code *)0x32:
    case (code *)0x7c:
    case (code *)0xc7:
    case (code *)0xff:
      goto code_r0x000100bec2c4;
    case (code *)0x33:
      goto switchD_100bec0c4_caseD_e1;
    case (code *)0x35:
    case (code *)0x3c:
    case (code *)0x73:
      goto switchD_100bec0c4_caseD_88;
    case (code *)0x3e:
    case (code *)0x44:
    case (code *)0x52:
    case (code *)0x5a:
    case (code *)0x6d:
      goto code_r0x000100bec27c;
    case (code *)0x3f:
    case (code *)0xfa:
      goto code_r0x000100bec2c8;
    case (code *)0x42:
    case (code *)0x55:
    case (code *)0x59:
    case (code *)0x6b:
      goto code_r0x000100bec294;
    case (code *)0x43:
      goto switchD_100bec0c4_caseD_fd;
    case (code *)0x45:
      goto code_r0x000100bec2c0;
    case (code *)0x4b:
      goto code_r0x000100bec2e4;
    case (code *)0x4e:
    case (code *)0x69:
    case (code *)0x7a:
      goto code_r0x000100bec2b0;
    case (code *)0x7b:
      goto code_r0x000100bec2e0;
    case (code *)0x7e:
    case (code *)0xae:
      goto code_r0x000100bec3c0;
    case (code *)0x7f:
    case (code *)0x85:
    case (code *)0xaf:
    case (code *)0xb8:
      goto code_r0x000100bec408;
    case (code *)0x80:
    case (code *)0xb0:
    case (code *)0xb6:
    case (code *)0xb7:
      goto code_r0x000100bec42c;
    case (code *)0x81:
    case (code *)0x8e:
    case (code *)0xb1:
    case (code *)0xba:
    case (code *)0xbe:
      goto code_r0x000100bec444;
    case (code *)0x82:
    case (code *)0xb2:
      puVar3 = puVar2 + -0x30;
      *(code **)(puVar2 + -0x30) = unaff_x22;
      *(code **)(puVar2 + -0x28) = unaff_x21;
      *(undefined8 *)(puVar2 + -0x20) = 0xe900000000000065;
      *(undefined1 **)(puVar2 + -0x18) = &SUB_e900000000000070;
      goto code_r0x000100bec444;
    case (code *)0x83:
    case (code *)0x8f:
    case (code *)0xb3:
    case (code *)0xbf:
      goto code_r0x000100bec458;
    case (code *)0x84:
      goto code_r0x000100bec3bc;
    case (code *)0x86:
    case (code *)0x89:
      goto code_r0x000100bec3f8;
    case (code *)0x87:
    case (code *)0xb9:
      goto code_r0x000100bec400;
    case (code *)0x88:
      goto code_r0x000100bec414;
    case (code *)0x8a:
      goto code_r0x000100bec3fc;
    case (code *)0x8b:
    case (code *)0x8d:
    case (code *)0xbb:
    case (code *)0xbd:
      goto code_r0x000100bec418;
    case (code *)0x8c:
      goto switchD_100bec0c4_caseD_ca;
    case (code *)0x96:
      goto LAB_100bec3b4;
    case (code *)0x9e:
    case (code *)0xc8:
    case (code *)0xd0:
    case (code *)0xd2:
      goto switchD_100bec0c4_caseD_87;
    case (code *)0xb4:
      goto switchD_100bec310_caseD_74;
    case (code *)0xb5:
      goto code_r0x000100bec430;
    case (code *)0xbc:
      goto code_r0x000100bec44c;
    case (code *)0xc2:
      goto switchD_100bec310_caseD_4;
    case (code *)0xc3:
    case (code *)0xd7:
    case (code *)0xdf:
    case (code *)0xe7:
    case (code *)0xfb:
switchD_100bec5a8_caseD_17:
      break;
    case (code *)0xc4:
    case (code *)0xd8:
    case (code *)0xe0:
    case (code *)0xe8:
    case (code *)0xfc:
      goto switchD_100bec310_caseD_e9;
    case (code *)0xc6:
      puVar3 = puVar2 + -0x30;
      *(code **)(puVar2 + -0x30) = unaff_x22;
      *(code **)(puVar2 + -0x28) = unaff_x21;
switchD_100bec5a8_caseD_9e:
      *(code **)(puVar3 + 0x10) = pcVar12;
      *(undefined1 **)(puVar3 + 0x18) = &SUB_e900000000000070;
      *(undefined1 **)(puVar3 + 0x20) = puVar14;
      *(undefined8 *)(puVar3 + 0x28) = uVar15;
switchD_100bec5a8_caseD_d8:
switchD_100bec5a8_caseD_65:
      unaff_x21 = (code *)0x0;
      bVar4 = ((ulong)param_2 & 1) == 0;
      puVar14 = &DAT_65756c6176;
      if (bVar4) {
        puVar14 = &DAT_65707974;
      }
      puVar3 = &DAT_e500000000000000;
      if (bVar4) {
        puVar3 = &DAT_e400000000000000;
      }
      if (puVar14 == &DAT_65707974 && puVar3 == &DAT_e400000000000000) {
        unaff_x21 = (code *)&DAT_00000001;
      }
      else {
        FUN_100beeb44();
      }
      goto switchD_100bec5a8_caseD_bc;
    case (code *)0xda:
      goto switchD_100bec310_caseD_78;
    case (code *)0xdb:
      pcVar5 = (code *)0x74735f79646f62;
      puVar3 = puVar2;
      goto LAB_100bec588;
    case (code *)0xe3:
    case (code *)0xeb:
switchD_100bec5a8_caseD_30:
      param_3 = (code *)0x616d;
switchD_100bec5a8_caseD_13:
      param_3 = (code *)(ulong)((uint)param_3 | 0x6e690000);
      break;
    case (code *)0xe4:
    case (code *)0xec:
code_r0x000100bec644:
      (*param_3)();
      pcVar11 = param_2;
      unaff_x21 = pcVar5;
switchD_100bec5a8_caseD_a6:
      (*pcVar12)();
      in_ZR = unaff_x21 == unaff_x22;
switchD_100bec5a8_caseD_a4:
      pcVar5 = unaff_x21;
      if (!(bool)in_ZR || pcVar11 != param_2) goto switchD_100bec310_caseD_bc;
      pcVar5 = (code *)&DAT_00000001;
      goto LAB_100bec680;
    case (code *)0xe5:
    case (code *)0xed:
      goto switchD_100bec310_caseD_bc;
    case (code *)0xea:
      goto switchD_100bec310_caseD_3;
    case (code *)0xf6:
      goto switchD_100bec310_caseD_8f;
    case (code *)0xf7:
code_r0x000100bec628:
      switchD_100bec5a8::caseD_1b();
      return;
    case (code *)0xf8:
      goto switchD_100bec310_caseD_44;
    case (code *)0xfe:
      goto code_r0x000100bec434;
    }
switchD_100bec5a8_caseD_0:
    in_ZR = false;
    if (pcVar5 == param_3) {
      in_ZR = pcVar12 == (code *)&SUB_e900000000000070;
    }
switchD_100bec5a8_caseD_27:
    if ((bool)in_ZR) {
      unaff_x21 = (code *)&DAT_00000001;
    }
    else {
switchD_100bec5a8_caseD_14:
      FUN_100beeb44();
switchD_100bec5a8_caseD_21:
      unaff_x21 = pcVar5;
switchD_100bec310_caseD_d4:
    }
switchD_100bec5a8_caseD_e:
    FUN_100b6f838();
    FUN_100b6f860();
    pcVar5 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_5d:
switchD_100bec5a8_caseD_2d:
    FUN_100b56e60(pcVar5);
    return;
  case (code *)0xd0:
    pcVar9 = (code *)0x7974697265766573;
    FUN_100beef9c();
    break;
  case (code *)0xd1:
  case (code *)0xe5:
  case (code *)0xed:
  case (code *)0xf5:
    goto code_r0x000100bec3ac;
  case (code *)0xd2:
  case (code *)0xe6:
  case (code *)0xee:
  case (code *)0xf6:
    pcVar9 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x6c00000000);
    break;
  case (code *)0xd4:
    goto code_r0x000100bec2f0;
  case (code *)0xe8:
    goto switchD_100bec0c4_caseD_bc;
  case (code *)0xe9:
    goto switchD_100bec310_caseD_41;
  case (code *)0xf1:
  case (code *)0xf9:
    goto code_r0x000100bec3c4;
  case (code *)0xf2:
  case (code *)0xfa:
    goto switchD_100bec310_caseD_ad;
  case (code *)0xf3:
  case (code *)0xfb:
    goto code_r0x000100bec44c;
  case (code *)0xf8:
    goto LAB_100bec130;
  }
switchD_100bec0c4_caseD_0:
  if (param_3 == pcVar9 && pcVar11 == (code *)&SUB_e900000000000070) {
LAB_100bec130:
    uVar13 = 1;
  }
  else {
    FUN_100beeb6c();
    uVar13 = (uint)param_3;
  }
  FUN_100b6f860();
  FUN_100b6f838();
  FUN_100b56e60(uVar13 & 1);
  return;
code_r0x000100bec444:
  *(undefined1 **)(puVar3 + 0x20) = puVar14;
  *(undefined8 *)(puVar3 + 0x28) = 0x100bec23c;
code_r0x000100bec44c:
  pcVar11 = (code *)0xe900000000000064;
  goto switchD_100bec310_caseD_8f;
switchD_100bec310_caseD_f0:
  switch(pcVar9) {
  case (code *)0x100bec314:
    goto switchD_100bec310_caseD_1;
  case (code *)0x100bec318:
    goto switchD_100bec310_caseD_e9;
  case (code *)0x100bec31c:
    goto switchD_100bec310_caseD_37;
  case (code *)0x100bec320:
    goto switchD_100bec310_caseD_97;
  case (code *)0x100bec324:
    goto switchD_100bec310_caseD_15;
  case (code *)0x100bec328:
    goto switchD_100bec310_caseD_4;
  case (code *)0x100bec32c:
    goto switchD_100bec310_caseD_29;
  case (code *)0x100bec330:
    goto switchD_100bec310_caseD_20;
  case (code *)0x100bec334:
    goto switchD_100bec310_caseD_3b;
  case (code *)0x100bec338:
    goto switchD_100bec310_caseD_2e;
  case (code *)0x100bec33c:
    goto switchD_100bec310_caseD_2;
  case (code *)0x100bec340:
    goto switchD_100bec310_caseD_41;
  case (code *)0x100bec344:
    goto switchD_100bec310_caseD_14;
  case (code *)0x100bec348:
    goto switchD_100bec310_caseD_3c;
  case (code *)0x100bec34c:
    goto switchD_100bec310_caseD_16;
  case (code *)0x100bec350:
    goto switchD_100bec310_caseD_47;
  case (code *)0x100bec354:
    goto switchD_100bec310_caseD_3;
  case (code *)0x100bec358:
    goto switchD_100bec310_caseD_11;
  case (code *)0x100bec360:
    goto switchD_100bec310_caseD_3e;
  case (code *)0x100bec364:
    goto switchD_100bec310_caseD_2b;
  case (code *)0x100bec368:
    goto switchD_100bec0c4_caseD_cd;
  case (code *)0x100bec36c:
    goto switchD_100bec310_caseD_5;
  case (code *)0x100bec374:
    goto switchD_100bec310_caseD_25;
  case (code *)0x100bec380:
    goto switchD_100bec310_caseD_74;
  case (code *)0x100bec384:
    goto switchD_100bec310_caseD_44;
  case (code *)0x100bec38c:
    goto switchD_100bec310_caseD_6;
  case (code *)0x100bec394:
    goto switchD_100bec310_caseD_32;
  case (code *)0x100bec398:
    goto switchD_100bec310_caseD_0;
  case (code *)0x100bec39c:
    goto switchD_100bec310_caseD_2c;
  case (code *)0x100bec3b8:
    goto switchD_100bec0c4_caseD_e2;
  case (code *)0x100bec3c8:
    goto switchD_100bec310_caseD_bb;
  case (code *)0x100bec3f4:
    goto switchD_100bec310_caseD_e3;
  case (code *)0x100bec420:
    goto switchD_100bec310_caseD_ad;
  case (code *)0x100bec424:
    goto switchD_100bec0c4_caseD_ca;
  case (code *)0x100bec454:
    goto switchD_100bec310_caseD_8f;
  case (code *)0x100bec45c:
    goto switchD_100bec310_caseD_7d;
  case (code *)0x100bec460:
    goto switchD_100bec310_caseD_77;
  case (code *)0x100bec498:
    goto switchD_100bec0c4_caseD_eb;
  case (code *)0x100bec49c:
    goto switchD_100bec310_caseD_83;
  case (code *)0x100bec4a0:
    goto switchD_100bec310_caseD_80;
  case (code *)0x100bec4a8:
    goto switchD_100bec310_caseD_78;
  case (code *)0x100bec4b4:
    goto switchD_100bec310_caseD_81;
  case (code *)0x100bec4b8:
    goto switchD_100bec310_caseD_84;
  case (code *)0x100bec4c4:
    goto switchD_100bec0c4_caseD_ec;
  case (code *)0x100bec4cc:
    goto switchD_100bec310_caseD_79;
  case (code *)0x100bec4d0:
    goto switchD_100bec310_caseD_ae;
  case (code *)0x100bec4d4:
    goto switchD_100bec310_caseD_f7;
  case (code *)0x100bec4dc:
    goto switchD_100bec310_caseD_7b;
  case (code *)0x100bec4e4:
    goto switchD_100bec310_caseD_7a;
  case (code *)0x100bec4ec:
    goto switchD_100bec310_caseD_b5;
  case (code *)0x100bec4f4:
    goto switchD_100bec310_caseD_ef;
  case (code *)0x100bec4f8:
    goto switchD_100bec310_caseD_7c;
  case (code *)0x100bec5b4:
    goto switchD_100bec310_caseD_bf;
  case (code *)0x100bec604:
    goto switchD_100bec310_caseD_d4;
  case (code *)0x100bec670:
    goto switchD_100bec310_caseD_bc;
  case (code *)0x100bec688:
    goto switchD_100bec310_caseD_dc;
  case (code *)0x100bec6c8:
    goto switchD_100bec310_caseD_f0;
  case (code *)0x100bec6e4:
    goto switchD_100bec310_caseD_dd;
  case (code *)0x100bec710:
    goto switchD_100bec310_caseD_de;
  }
  goto switchD_100bec310_caseD_d3;
switchD_100bec0c4_caseD_e2:
  FUN_100b6f838();
code_r0x000100bec3bc:
  pcVar5 = (code *)(ulong)((uint)unaff_x21 & 1);
  goto code_r0x000100bec3c0;
switchD_100bec0c4_caseD_a5:
  pcVar5 = (code *)0x6f62;
switchD_100bec0c4_caseD_23:
  pcVar9 = (code *)(ulong)((uint)pcVar5 & 0xffff | 0x79640000);
  goto switchD_100bec0c4_caseD_0;
switchD_100bec5a8_caseD_bc:
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60((uint)unaff_x21 & 1);
  return;
code_r0x000100bec3c0:
code_r0x000100bec3c4:
  FUN_100b56e60(pcVar5);
  return;
code_r0x000100bec0bc:
  pcVar10 = (code *)(ulong)pbVar8[(long)pcVar6];
code_r0x000100bec0c0:
                    /* WARNING: Could not recover jumptable at 0x000100bec0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pcVar9 + (long)pcVar10 * 4))();
  return;
code_r0x000100bec198:
  pcVar10 = (code *)((ulong)pcVar10 | 0x746f000000000000);
code_r0x000100bec19c:
  param_3 = pcVar6;
  pcVar11 = (code *)pbVar8;
  if (!(bool)in_ZR) {
    param_3 = pcVar10;
    pcVar11 = pcVar9;
  }
LAB_100bec1b0:
  if (((ulong)param_2 & 0xff) == 0) {
LAB_100bec1f4:
    pcVar12 = (code *)&DAT_e600000000000000;
  }
  else {
    in_ZR = ((uint)param_2 & 0xff) == 1;
    pcVar6 = (code *)0x7265747369676572;
    pbVar8 = (byte *)0xe900000000000073;
switchD_100bec0c4_caseD_bb:
    pcVar9 = (code *)&DAT_e800000000000000;
switchD_100bec0c4_caseD_ff:
    pcVar10 = (code *)0x6e73;
code_r0x000100bec1dc:
    pcVar10 = (code *)((ulong)pcVar10 | 0x687370610000);
code_r0x000100bec1e4:
    pcVar5 = pcVar6;
    pcVar12 = (code *)pbVar8;
    if (!(bool)in_ZR) {
      pcVar5 = (code *)((ulong)pcVar10 | 0x746f000000000000);
      pcVar12 = pcVar9;
    }
switchD_100bebe90_caseD_e1:
  }
  in_ZR = false;
  if (param_3 == pcVar5) {
    in_ZR = pcVar11 == pcVar12;
  }
code_r0x000100bec200:
  if ((bool)in_ZR) {
    unaff_x21 = (code *)&DAT_00000001;
  }
  else {
    FUN_100beeb44();
switchD_100bec0c4_caseD_9d:
    unaff_x21 = param_3;
code_r0x000100bec20c:
  }
  FUN_100b6f838();
code_r0x000100bec218:
  FUN_100b6f860();
  param_3 = (code *)(ulong)((uint)unaff_x21 & 1);
code_r0x000100bec220:
  FUN_100b56e60(param_3);
  return;
switchD_100bec310_caseD_7d:
  param_3 = (code *)((ulong)param_3 & 0xffff0000ffffffff | 0x746100000000);
switchD_100bec310_caseD_77:
  param_3 = (code *)((ulong)param_3 & 0xffffffffffff | 0x6574000000000000);
  if (((ulong)pcVar5 & 0xff) == 0) {
switchD_100bec310_caseD_80:
    pcVar5 = param_3;
    pcVar12 = (code *)0x64;
    param_3 = pcVar5;
switchD_100bec310_caseD_78:
    pcVar12 = (code *)((ulong)pcVar12 & 0xffffffffffff | 0xe900000000000000);
  }
  else {
    in_ZR = ((uint)pcVar5 & 0xff) == 1;
    pcVar7 = (code *)&DAT_e700000000000000;
    pcVar9 = (code *)&DAT_e600000000000000;
    pcVar5 = (code *)0x6567617373656d;
    if (!(bool)in_ZR) {
      pcVar5 = (code *)0x736d61726170;
    }
switchD_100bec0c4_caseD_eb:
    pcVar12 = pcVar7;
    if (!(bool)in_ZR) {
      pcVar12 = pcVar9;
    }
switchD_100bec310_caseD_83:
  }
  pcVar7 = (code *)(ulong)((uint)param_2 & 0xff);
  if (((ulong)param_2 & 0xff) != 0) {
switchD_100bec310_caseD_81:
    in_ZR = (int)pcVar7 == 1;
switchD_100bec310_caseD_84:
    pcVar7 = (code *)&DAT_e700000000000000;
    pbVar8 = (byte *)0x7373656d;
switchD_100bec0c4_caseD_ec:
    pbVar8 = (byte *)((ulong)pbVar8 & 0xffff0000ffffffff | 0x65676100000000);
switchD_100bec310_caseD_79:
    pcVar9 = (code *)&DAT_e600000000000000;
switchD_100bec310_caseD_ae:
    pcVar6 = (code *)0x6170;
switchD_100bec310_caseD_f7:
    pcVar6 = (code *)((ulong)pcVar6 | 0x736d61720000);
switchD_100bec310_caseD_7b:
    param_3 = (code *)pbVar8;
    pcVar11 = pcVar7;
    if (!(bool)in_ZR) {
      param_3 = pcVar6;
      pcVar11 = pcVar9;
    }
  }
switchD_100bec310_caseD_7a:
  in_ZR = false;
  if (pcVar5 == param_3) {
    in_ZR = pcVar12 == pcVar11;
  }
switchD_100bec310_caseD_b5:
  if ((bool)in_ZR) {
    uVar13 = 1;
  }
  else {
    FUN_100beeb6c();
switchD_100bec310_caseD_ef:
    unaff_x21 = pcVar5;
switchD_100bec310_caseD_7c:
    uVar13 = (uint)unaff_x21;
  }
  FUN_100b6f860();
  FUN_100b6f838();
  FUN_100b56e60(uVar13 & 1);
  return;
}



/* Address: 0x100bec148 | switchD_100bec0c4::caseD_40 */

void switchD_100bec0c4::caseD_40(char param_1,char param_2)

{
  uint uVar1;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar2;
  
  if (param_1 == '\0') {
    puVar4 = &DAT_e600000000000000;
    lVar2 = 0x73656d617266;
  }
  else {
    puVar4 = (undefined1 *)0xe900000000000073;
    lVar2 = 0x7265747369676572;
    if (param_1 != '\x01') {
      puVar4 = &DAT_e800000000000000;
      lVar2 = 0x746f687370616e73;
    }
  }
  if (param_2 == '\0') {
    puVar5 = &DAT_e600000000000000;
    lVar3 = 0x73656d617266;
  }
  else {
    puVar5 = (undefined1 *)0xe900000000000073;
    lVar3 = 0x7265747369676572;
    if (param_2 != '\x01') {
      puVar5 = &DAT_e800000000000000;
      lVar3 = 0x746f687370616e73;
    }
  }
  if (lVar2 == lVar3 && puVar4 == puVar5) {
    uVar1 = 1;
  }
  else {
    FUN_100beeb44();
    uVar1 = (uint)lVar2;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar1 & 1);
  return;
}



/* Address: 0x100bec228 | FUN_100bec228 */

void FUN_100bec228(ulong param_1,code *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 in_ZR;
  bool bVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  byte *pbVar11;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar12;
  code *pcVar13;
  code *unaff_x19;
  code *pcVar14;
  uint uVar15;
  code *unaff_x21;
  code *unaff_x22;
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar3 = &stack0xffffffffffffffd0;
  puVar5 = &stack0xffffffffffffffd0;
  FUN_100beefb0();
  pcVar8 = (code *)&DAT_7a69735f79646f62;
  pcVar10 = (code *)(param_1 & 0xff);
  pbVar11 = &BYTE_100c9f922;
  pcVar12 = (code *)(ulong)(byte)pcVar10[0x100c9f922];
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_100bec274 + (long)pcVar12 * 4);
  pcVar14 = (code *)0xe900000000000065;
  pcVar7 = pcVar8;
  pcVar9 = pcVar8;
  switch(pcVar10) {
  case (code *)0x0:
  case (code *)0x7:
  case (code *)0x46:
  case (code *)0x5d:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xe6:
    goto LAB_100bec2f8;
  default:
    pcVar14 = (code *)&DAT_e700000000000000;
  case (code *)0xf0:
    pcVar7 = (code *)0x6f63;
code_r0x000100bec27c:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffffffff0000ffff | 0x6b6f0000);
switchD_100bec0c4_caseD_87:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffff0000ffffffff | 0x656900000000);
switchD_100bec0c4_caseD_bc:
    break;
  case (code *)0x2:
  case (code *)0x9:
  case (code *)0x1a:
  case (code *)0x20:
  case (code *)0x53:
  case (code *)0x5b:
  case (code *)0x5f:
  case (code *)0x6c:
  case (code *)0x77:
    pcVar14 = (code *)&DAT_e700000000000000;
  case (code *)0x48:
    pcVar7 = (code *)0x6568;
code_r0x000100bec2a4:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffffffff0000ffff | 0x64610000);
switchD_100bec0c4_caseD_fd:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffff0000ffffffff | 0x726500000000);
    break;
  case (code *)0x3:
  case (code *)0xa:
  case (code *)0x31:
  case (code *)0x36:
  case (code *)0x3d:
  case (code *)0x60:
  case (code *)0x78:
    pcVar14 = (code *)&DAT_e800000000000000;
  case (code *)0x18:
  case (code *)0x1e:
  case (code *)0x49:
  case (code *)0x56:
    pcVar7 = (code *)0x67617266;
code_r0x000100bec2c0:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffff0000ffffffff | 0x656d00000000);
code_r0x000100bec2c4:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffffffffffff | 0x746e000000000000);
code_r0x000100bec2c8:
    goto LAB_100bec2f8;
  case (code *)0x4:
  case (code *)0xb:
  case (code *)0x26:
  case (code *)0x2a:
  case (code *)0x4a:
  case (code *)0x61:
  case (code *)0x71:
    pcVar14 = (code *)&DAT_e600000000000000;
  case (code *)0x30:
  case (code *)0x37:
  case (code *)0x51:
  case (code *)0x58:
    pcVar7 = (code *)0x656d;
switchD_100bec0c4_caseD_89:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffffffff0000ffff | 0x68740000);
code_r0x000100bec294:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffff0000ffffffff | 0x646f00000000);
switchD_100bec0c4_caseD_88:
    goto LAB_100bec2f8;
  case (code *)0x5:
  case (code *)0xc:
  case (code *)0x3a:
  case (code *)0x62:
    pcVar7 = (code *)0x72657571;
  case (code *)0x2c:
  case (code *)0x38:
  case (code *)0x40:
  case (code *)0x4d:
  case (code *)0xe2:
    pcVar7 = (code *)((ulong)pcVar7 & 0xffffffff | 0x74735f7900000000);
    pcVar14 = (code *)0x6972;
code_r0x000100bec2e0:
    pcVar14 = (code *)((ulong)pcVar14 | 0x676e0000);
code_r0x000100bec2e4:
    pcVar14 = (code *)((ulong)pcVar14 & 0xffffffffffff | 0xec00000000000000);
    goto LAB_100bec2f8;
  case (code *)0x6:
  case (code *)0xd:
  case (code *)0x4c:
  case (code *)0x63:
    pcVar14 = (code *)0xe300000000000000;
    pcVar7 = (code *)0x7275;
  case (code *)0x39:
  case (code *)0xa2:
    pcVar7 = (code *)(ulong)((uint)pcVar7 & 0xffff | 0x6c0000);
    goto LAB_100bec2f8;
  case (code *)0x1b:
  case (code *)0x21:
  case (code *)0x24:
  case (code *)0x28:
  case (code *)0x2e:
  case (code *)0x54:
  case (code *)0x5c:
  case (code *)0x6e:
  case (code *)0x6f:
  case (code *)0x75:
    goto code_r0x000100bec2a4;
  case (code *)0x1c:
  case (code *)0x22:
  case (code *)0x50:
    goto switchD_100bec0c4_caseD_bc;
  case (code *)0x1d:
  case (code *)0x23:
  case (code *)0x2f:
  case (code *)0x76:
    break;
  case (code *)0x27:
  case (code *)0x2b:
  case (code *)0x72:
  case (code *)0xdc:
    goto switchD_100bec0c4_caseD_89;
  case (code *)0x32:
  case (code *)0x7c:
  case (code *)0xc7:
  case (code *)0xff:
    goto code_r0x000100bec2c4;
  case (code *)0x33:
    goto switchD_100bec0c4_caseD_e1;
  case (code *)0x35:
  case (code *)0x3c:
  case (code *)0x73:
    goto switchD_100bec0c4_caseD_88;
  case (code *)0x3e:
  case (code *)0x44:
  case (code *)0x52:
  case (code *)0x5a:
  case (code *)0x6d:
    goto code_r0x000100bec27c;
  case (code *)0x3f:
  case (code *)0xfa:
    goto code_r0x000100bec2c8;
  case (code *)0x42:
  case (code *)0x55:
  case (code *)0x59:
  case (code *)0x6b:
    goto code_r0x000100bec294;
  case (code *)0x43:
    goto switchD_100bec0c4_caseD_fd;
  case (code *)0x45:
    goto code_r0x000100bec2c0;
  case (code *)0x4b:
    goto code_r0x000100bec2e4;
  case (code *)0x4e:
  case (code *)0x69:
  case (code *)0x7a:
    goto code_r0x000100bec2b0;
  case (code *)0x7b:
    goto code_r0x000100bec2e0;
  case (code *)0x7e:
  case (code *)0xae:
    goto code_r0x000100bec3c0;
  case (code *)0x7f:
  case (code *)0x85:
  case (code *)0xaf:
  case (code *)0xb8:
    goto code_r0x000100bec408;
  case (code *)0x80:
  case (code *)0xb0:
  case (code *)0xb6:
  case (code *)0xb7:
    goto code_r0x000100bec42c;
  case (code *)0x81:
  case (code *)0x8e:
  case (code *)0xb1:
  case (code *)0xba:
  case (code *)0xbe:
    goto code_r0x000100bec444;
  case (code *)0x82:
  case (code *)0xb2:
    puVar2 = &stack0xffffffffffffffa0;
    goto code_r0x000100bec444;
  case (code *)0x83:
  case (code *)0x8f:
  case (code *)0xb3:
  case (code *)0xbf:
    goto code_r0x000100bec458;
  case (code *)0x84:
    goto code_r0x000100bec3bc;
  case (code *)0x86:
  case (code *)0x89:
    goto code_r0x000100bec3f8;
  case (code *)0x87:
  case (code *)0xb9:
    goto code_r0x000100bec400;
  case (code *)0x88:
    goto code_r0x000100bec414;
  case (code *)0x8a:
    goto code_r0x000100bec3fc;
  case (code *)0x8b:
  case (code *)0x8d:
  case (code *)0xbb:
  case (code *)0xbd:
    goto code_r0x000100bec418;
  case (code *)0x8c:
    goto switchD_100bec0c4_caseD_ca;
  case (code *)0x96:
    goto LAB_100bec3b4;
  case (code *)0x9e:
  case (code *)0xc8:
  case (code *)0xd0:
  case (code *)0xd2:
    goto switchD_100bec0c4_caseD_87;
  case (code *)0xb4:
    goto switchD_100bec310_caseD_74;
  case (code *)0xb5:
    goto code_r0x000100bec430;
  case (code *)0xbc:
    goto code_r0x000100bec44c;
  case (code *)0xc2:
    goto switchD_100bec310_caseD_4;
  case (code *)0xc3:
  case (code *)0xd7:
  case (code *)0xdf:
  case (code *)0xe7:
  case (code *)0xfb:
    goto switchD_100bec5a8_caseD_17;
  case (code *)0xc4:
  case (code *)0xd8:
  case (code *)0xe0:
  case (code *)0xe8:
  case (code *)0xfc:
    goto switchD_100bec310_caseD_e9;
  case (code *)0xc6:
    puVar5 = &stack0xffffffffffffffa0;
    goto switchD_100bec5a8_caseD_9e;
  case (code *)0xda:
    goto switchD_100bec310_caseD_78;
  case (code *)0xdb:
    pcVar8 = (code *)0x74735f79646f62;
    goto LAB_100bec588;
  case (code *)0xe3:
  case (code *)0xeb:
    goto switchD_100bec5a8_caseD_30;
  case (code *)0xe4:
  case (code *)0xec:
    goto code_r0x000100bec644;
  case (code *)0xe5:
  case (code *)0xed:
    goto switchD_100bec310_caseD_bc;
  case (code *)0xea:
    goto switchD_100bec310_caseD_3;
  case (code *)0xf6:
    goto switchD_100bec310_caseD_8f;
  case (code *)0xf7:
    goto code_r0x000100bec628;
  case (code *)0xf8:
    goto switchD_100bec310_caseD_44;
  case (code *)0xfe:
    goto code_r0x000100bec434;
  }
  pcVar7 = (code *)((ulong)pcVar7 & 0xffffffffffff | 0x73000000000000);
code_r0x000100bec2b0:
LAB_100bec2f8:
  pcVar10 = (code *)((ulong)param_2 & 0xff);
switchD_100bec0c4_caseD_e1:
  pbVar11 = &switchD_100bec310::switchdataD_100c9f929;
  pcVar13 = (code *)(ulong)(byte)pcVar10[0x100c9f929];
  UNRECOVERED_JUMPTABLE = (code *)((long)pcVar13 * 4 + 0x100bec314);
  pcVar12 = pcVar7;
  switch(pcVar10) {
  case (code *)0x0:
  case (code *)0x3f:
  case (code *)0x56:
  case (code *)0xcf:
  case (code *)0xd7:
  case (code *)0xdf:
    goto switchD_100bec310_caseD_0;
  default:
    unaff_x19 = (code *)&DAT_e700000000000000;
  case (code *)0xe9:
switchD_100bec310_caseD_e9:
    pcVar8 = (code *)0x6f63;
switchD_100bec310_caseD_37:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x6b6f0000);
switchD_100bec310_caseD_97:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x656900000000);
switchD_100bec310_caseD_15:
switchD_100bec310_caseD_16:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0x73000000000000);
switchD_100bec310_caseD_47:
switchD_100bec310_caseD_0:
    in_ZR = pcVar7 == pcVar8;
switchD_100bec310_caseD_2c:
    if ((bool)in_ZR && pcVar14 == unaff_x19) {
      unaff_x21 = (code *)&DAT_00000001;
    }
    else {
      FUN_100beeb6c();
      unaff_x21 = pcVar7;
    }
LAB_100bec3b4:
    FUN_100b6f860();
    goto switchD_100bec0c4_caseD_e2;
  case (code *)0x2:
  case (code *)0x13:
  case (code *)0x19:
  case (code *)0x4c:
  case (code *)0x54:
  case (code *)0x58:
  case (code *)0x65:
  case (code *)0x70:
    unaff_x19 = (code *)&DAT_e700000000000000;
  case (code *)0x41:
    pcVar8 = (code *)0x6568;
switchD_100bec310_caseD_14:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x64610000);
switchD_100bec310_caseD_3c:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x726500000000);
    goto switchD_100bec310_caseD_16;
  case (code *)0x3:
  case (code *)0x2a:
  case (code *)0x2f:
  case (code *)0x36:
  case (code *)0x59:
  case (code *)0x71:
switchD_100bec310_caseD_3:
    unaff_x19 = (code *)&DAT_e800000000000000;
  case (code *)0x11:
  case (code *)0x17:
  case (code *)0x42:
  case (code *)0x4f:
    pcVar8 = (code *)0x67617266;
switchD_100bec310_caseD_3e:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x656d00000000);
switchD_100bec310_caseD_2b:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0x746e000000000000);
switchD_100bec0c4_caseD_cd:
    goto switchD_100bec310_caseD_0;
  case (code *)0x4:
  case (code *)0x1f:
  case (code *)0x23:
  case (code *)0x43:
  case (code *)0x5a:
  case (code *)0x6a:
switchD_100bec310_caseD_4:
    unaff_x19 = (code *)&DAT_e600000000000000;
  case (code *)0x29:
  case (code *)0x30:
  case (code *)0x4a:
  case (code *)0x51:
    pcVar8 = (code *)0x656d;
switchD_100bec310_caseD_20:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x68740000);
switchD_100bec310_caseD_3b:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x646f00000000);
switchD_100bec310_caseD_2e:
    goto switchD_100bec310_caseD_0;
  case (code *)0x5:
  case (code *)0x33:
  case (code *)0x5b:
    pcVar8 = (code *)0x72657571;
  case (code *)0x25:
  case (code *)0x31:
  case (code *)0x39:
  case (code *)0x46:
  case (code *)0xdb:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff | 0x74735f7900000000);
    unaff_x19 = (code *)0x6972;
switchD_100bec310_caseD_74:
    unaff_x19 = (code *)((ulong)unaff_x19 & 0xffffffff0000ffff | 0x676e0000);
switchD_100bec310_caseD_44:
    unaff_x19 = (code *)((ulong)unaff_x19 & 0xffffffffffff | 0xec00000000000000);
    goto switchD_100bec310_caseD_0;
  case (code *)0x6:
  case (code *)0x45:
  case (code *)0x5c:
    unaff_x19 = (code *)0xe300000000000000;
    pcVar8 = (code *)0x7275;
  case (code *)0x32:
  case (code *)0x9b:
    pcVar8 = (code *)(ulong)((uint)pcVar8 & 0xffff | 0x6c0000);
    goto switchD_100bec310_caseD_0;
  case (code *)0x14:
  case (code *)0x1a:
  case (code *)0x1d:
  case (code *)0x21:
  case (code *)0x27:
  case (code *)0x4d:
  case (code *)0x55:
  case (code *)0x67:
  case (code *)0x68:
  case (code *)0x6e:
    goto switchD_100bec310_caseD_14;
  case (code *)0x15:
  case (code *)0x1b:
  case (code *)0x49:
    goto switchD_100bec310_caseD_15;
  case (code *)0x16:
  case (code *)0x1c:
  case (code *)0x28:
  case (code *)0x6f:
    goto switchD_100bec310_caseD_16;
  case (code *)0x20:
  case (code *)0x24:
  case (code *)0x6b:
  case (code *)0xd5:
    goto switchD_100bec310_caseD_20;
  case (code *)0x2b:
  case (code *)0x75:
  case (code *)0xc0:
  case (code *)0xf8:
    goto switchD_100bec310_caseD_2b;
  case (code *)0x2c:
    goto switchD_100bec310_caseD_2c;
  case (code *)0x2e:
  case (code *)0x35:
  case (code *)0x6c:
    goto switchD_100bec310_caseD_2e;
  case (code *)0x37:
  case (code *)0x3d:
  case (code *)0x4b:
  case (code *)0x53:
  case (code *)0x66:
    goto switchD_100bec310_caseD_37;
  case (code *)0x38:
  case (code *)0xf3:
    goto switchD_100bec0c4_caseD_cd;
  case (code *)0x3b:
  case (code *)0x4e:
  case (code *)0x52:
  case (code *)0x64:
    goto switchD_100bec310_caseD_3b;
  case (code *)0x3c:
    goto switchD_100bec310_caseD_3c;
  case (code *)0x3e:
    goto switchD_100bec310_caseD_3e;
  case (code *)0x44:
    goto switchD_100bec310_caseD_44;
  case (code *)0x47:
  case (code *)0x62:
  case (code *)0x73:
    goto switchD_100bec310_caseD_47;
  case (code *)0x74:
    goto switchD_100bec310_caseD_74;
  case (code *)0x77:
  case (code *)0xa7:
    goto switchD_100bec310_caseD_77;
  case (code *)0x78:
  case (code *)0x7e:
  case (code *)0xa8:
  case (code *)0xb1:
    goto switchD_100bec310_caseD_78;
  case (code *)0x79:
  case (code *)0xa9:
  case (code *)0xaf:
  case (code *)0xb0:
    goto switchD_100bec310_caseD_79;
  case (code *)0x7a:
  case (code *)0x87:
  case (code *)0xaa:
  case (code *)0xb3:
  case (code *)0xb7:
    goto switchD_100bec310_caseD_7a;
  case (code *)0x7b:
  case (code *)0xab:
    goto switchD_100bec310_caseD_7b;
  case (code *)0x7c:
  case (code *)0x88:
  case (code *)0xac:
  case (code *)0xb8:
    goto switchD_100bec310_caseD_7c;
  case (code *)0x7d:
    goto switchD_100bec310_caseD_7d;
  case (code *)0x7f:
  case (code *)0x82:
    goto switchD_100bec0c4_caseD_eb;
  case (code *)0x80:
  case (code *)0xb2:
    goto switchD_100bec310_caseD_80;
  case (code *)0x81:
    goto switchD_100bec310_caseD_81;
  case (code *)0x83:
    goto switchD_100bec310_caseD_83;
  case (code *)0x84:
  case (code *)0x86:
  case (code *)0xb4:
  case (code *)0xb6:
    goto switchD_100bec310_caseD_84;
  case (code *)0x85:
    goto switchD_100bec0c4_caseD_ec;
  case (code *)0x8f:
switchD_100bec310_caseD_8f:
    pcVar8 = (code *)0x6f66;
code_r0x000100bec458:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffff0000ffff | 0x6d720000);
    goto switchD_100bec310_caseD_7d;
  case (code *)0x97:
  case (code *)0xc1:
  case (code *)0xc9:
  case (code *)0xcb:
  case (code *)0xf9:
    goto switchD_100bec310_caseD_97;
  case (code *)0xad:
    goto switchD_100bec310_caseD_ad;
  case (code *)0xae:
    goto switchD_100bec310_caseD_ae;
  case (code *)0xb5:
    goto switchD_100bec310_caseD_b5;
  case (code *)0xbb:
    in_ZR = ((ulong)pcVar7 & 1) == 0;
    pcVar10 = (code *)0x65646f63;
    pbVar11 = (byte *)0x6e69616d6f64;
    pcVar7 = pcVar10;
    if ((bool)in_ZR) {
      pcVar7 = (code *)pbVar11;
    }
  case (code *)0xe3:
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
code_r0x000100bec3f8:
    pcVar12 = (code *)&DAT_e400000000000000;
code_r0x000100bec3fc:
    unaff_x19 = pcVar12;
    if ((bool)in_ZR) {
      unaff_x19 = UNRECOVERED_JUMPTABLE;
    }
code_r0x000100bec400:
    in_ZR = ((ulong)param_2 & 1) == 0;
    pcVar8 = pcVar10;
    if ((bool)in_ZR) {
      pcVar8 = (code *)pbVar11;
    }
code_r0x000100bec408:
    if ((bool)in_ZR) {
      pcVar12 = UNRECOVERED_JUMPTABLE;
    }
    in_ZR = false;
    if (pcVar7 == pcVar8) {
      in_ZR = unaff_x19 == pcVar12;
    }
code_r0x000100bec414:
    if ((bool)in_ZR) {
switchD_100bec0c4_caseD_ca:
      unaff_x21 = (code *)&DAT_00000001;
    }
    else {
code_r0x000100bec418:
      FUN_100beeb44();
      unaff_x21 = pcVar7;
switchD_100bec310_caseD_ad:
    }
    FUN_100b6f838();
code_r0x000100bec42c:
    FUN_100b6f860();
code_r0x000100bec430:
    pcVar8 = (code *)(ulong)((uint)unaff_x21 & 1);
code_r0x000100bec434:
    FUN_100b56e60(pcVar8);
    return;
  case (code *)0xbc:
  case (code *)0xd0:
  case (code *)0xd8:
  case (code *)0xe0:
  case (code *)0xf4:
    goto switchD_100bec310_caseD_bc;
  case (code *)0xbd:
  case (code *)0xd1:
  case (code *)0xd9:
  case (code *)0xe1:
  case (code *)0xf5:
    goto switchD_100bec0c4_caseD_e2;
  case (code *)0xbf:
    goto switchD_100bec310_caseD_bf;
  case (code *)0xd3:
    pcVar8 = (code *)0x656d616e;
LAB_100bec588:
    pcVar14 = (code *)&SUB_e200000000000000;
    pcVar9 = (code *)&SUB_00006469;
    pbVar11 = &switchD_100bec5a8::switchdataD_100c9f940;
    puVar4 = &stack0xffffffffffffffd0;
    pcVar12 = pcVar8;
    pcVar7 = unaff_x21;
    switch((ulong)param_2 & 0xff) {
    case 0:
    case 0x2b:
    case 0x38:
      goto switchD_100bec5a8_caseD_0;
    default:
      pcVar14 = (code *)&DAT_e400000000000000;
    case 0xd2:
      pcVar9 = (code *)0x616e;
switchD_100bec310_caseD_bf:
      pcVar9 = (code *)(ulong)((uint)pcVar9 & 0xffff | 0x656d0000);
      pcVar8 = pcVar12;
switchD_100bec5a8_caseD_80:
switchD_100bec5a8_caseD_0:
      in_ZR = false;
      if (pcVar8 == pcVar9) {
        in_ZR = unaff_x19 == pcVar14;
      }
switchD_100bec5a8_caseD_27:
      if ((bool)in_ZR) {
        unaff_x21 = (code *)&DAT_00000001;
      }
      else {
switchD_100bec5a8_caseD_14:
        FUN_100beeb44();
switchD_100bec5a8_caseD_21:
        unaff_x21 = pcVar8;
switchD_100bec310_caseD_d4:
      }
switchD_100bec5a8_caseD_e:
      FUN_100b6f838();
      FUN_100b6f860();
      pcVar8 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_5d:
switchD_100bec5a8_caseD_2d:
      FUN_100b56e60(pcVar8);
      return;
    case 2:
    case 0x35:
    case 0x3d:
    case 0x41:
    case 0x4e:
    case 0x59:
      FUN_100beec94();
    case 0x2a:
      goto switchD_100bec5a8_caseD_0;
    case 3:
    case 6:
    case 10:
    case 0x10:
    case 0x36:
    case 0x3e:
    case 0x50:
    case 0x51:
    case 0x57:
      FUN_100beedfc();
    case 0x25:
      goto switchD_100bec5a8_caseD_0;
    case 4:
    case 0x32:
    case 0xec:
      pcVar14 = (code *)&DAT_e700000000000000;
    case 8:
    case 0xc:
    case 0x2c:
    case 0x43:
    case 0x53:
      pcVar9 = (code *)0x7563;
switchD_100bec5a8_caseD_12:
      pcVar9 = (code *)((ulong)pcVar9 | 0x72720000);
switchD_100bec5a8_caseD_9:
      pcVar9 = (code *)((ulong)pcVar9 | 0x6e6500000000);
switchD_100bec5a8_caseD_24:
      pcVar9 = (code *)((ulong)pcVar9 | 0x74000000000000);
switchD_100bec5a8_caseD_17:
      goto switchD_100bec5a8_caseD_0;
    case 5:
    case 0x11:
    case 0x58:
      pcVar14 = (code *)&DAT_e400000000000000;
    case 0x30:
    case 0x4b:
    case 0x5c:
switchD_100bec5a8_caseD_30:
      pcVar9 = (code *)0x616d;
switchD_100bec5a8_caseD_13:
      pcVar9 = (code *)(ulong)((uint)pcVar9 | 0x6e690000);
      goto switchD_100bec5a8_caseD_0;
    case 9:
    case 0xd:
    case 0x54:
    case 0xbe:
    case 0xf6:
      goto switchD_100bec5a8_caseD_9;
    case 0xe:
    case 0x1a:
    case 0x22:
    case 0x2f:
    case 0xc4:
      goto switchD_100bec5a8_caseD_e;
    case 0x12:
    case 0x19:
    case 0x33:
    case 0x3a:
      goto switchD_100bec5a8_caseD_12;
    case 0x13:
    case 0x18:
    case 0x1f:
    case 0x42:
    case 0x5a:
      goto switchD_100bec5a8_caseD_13;
    case 0x14:
    case 0x5e:
    case 0xa9:
    case 0xe1:
      goto switchD_100bec5a8_caseD_14;
    case 0x15:
      goto switchD_100bec5a8_caseD_15;
    case 0x17:
    case 0x1e:
    case 0x55:
    case 0xf0:
    case 0xf8:
      goto switchD_100bec5a8_caseD_17;
    case 0x1b:
    case 0x84:
      puVar3 = &stack0xffffffffffffffa0;
    case 0x28:
    case 0x3f:
    case 0xb8:
    case 0xc0:
    case 200:
      *(undefined1 **)(puVar3 + 0x10) = &SUB_e200000000000000;
      *(code **)(puVar3 + 0x18) = unaff_x19;
      puVar4 = puVar3;
switchD_100bec5a8_caseD_15:
      *(undefined1 **)(puVar4 + 0x20) = &stack0xfffffffffffffff0;
      *(undefined8 *)(puVar4 + 0x28) = 0x100bec23c;
      pcVar14 = (code *)&SUB_00006469;
      unaff_x22 = param_2;
code_r0x000100bec644:
      (*pcVar9)();
      unaff_x19 = param_2;
      unaff_x21 = pcVar8;
switchD_100bec5a8_caseD_a6:
      (*pcVar14)();
      in_ZR = unaff_x21 == unaff_x22;
      pcVar7 = unaff_x21;
switchD_100bec5a8_caseD_a4:
      if ((bool)in_ZR && unaff_x19 == param_2) {
        pcVar7 = (code *)&DAT_00000001;
      }
      else {
switchD_100bec310_caseD_bc:
        FUN_100beeb44(pcVar7);
      }
      FUN_100b6f838();
      FUN_100b6f860();
      unaff_x21 = pcVar7;
switchD_100bec310_caseD_dc:
      pcVar8 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_cc:
      FUN_100b56e60(pcVar8);
      return;
    case 0x1c:
    case 0x44:
      goto switchD_100bec310_caseD_d4;
    case 0x20:
    case 0x26:
    case 0x34:
    case 0x3c:
    case 0x4f:
      goto switchD_100bec310_caseD_bf;
    case 0x21:
    case 0xdc:
      goto switchD_100bec5a8_caseD_21;
    case 0x24:
    case 0x37:
    case 0x3b:
    case 0x4d:
      goto switchD_100bec5a8_caseD_24;
    case 0x27:
      goto switchD_100bec5a8_caseD_27;
    case 0x2d:
      goto switchD_100bec5a8_caseD_2d;
    case 0x2e:
    case 0x45:
code_r0x000100bec628:
      switchD_100bec5a8::caseD_1b();
      return;
    case 0x5d:
      goto switchD_100bec5a8_caseD_5d;
    case 0x60:
    case 0x90:
      goto switchD_100bec5a8_caseD_60;
    case 0x61:
    case 0x67:
    case 0x91:
    case 0x9a:
      pcVar9 = (code *)0x6d726f6e6261;
    case 0x6a:
      pcVar9 = (code *)((ulong)pcVar9 | 0x6c61000000000000);
      break;
    case 0x62:
    case 0x92:
    case 0x98:
    case 0x99:
      goto switchD_100bec5a8_caseD_62;
    case 99:
    case 0x70:
    case 0x93:
    case 0x9c:
    case 0xa0:
      goto switchD_100bec5a8_caseD_63;
    case 100:
    case 0x94:
      goto switchD_100bec5a8_caseD_64;
    case 0x65:
    case 0x71:
    case 0x95:
    case 0xa1:
      goto switchD_100bec5a8_caseD_65;
    case 0x66:
      goto switchD_100bec5a8_caseD_66;
    case 0x68:
    case 0x6b:
      break;
    case 0x69:
    case 0x9b:
      goto switchD_100bec5a8_caseD_69;
    case 0x6c:
      FUN_100beedfc();
      goto switchD_100bec5a8_caseD_69;
    case 0x6d:
    case 0x6f:
    case 0x9d:
    case 0x9f:
      break;
    case 0x6e:
      goto switchD_100bec5a8_caseD_6e;
    case 0x78:
      pcVar8 = (code *)0x6f6e6261;
      goto switchD_100bec5a8_caseD_66;
    case 0x80:
    case 0xaa:
    case 0xb2:
    case 0xb4:
    case 0xe2:
    case 0xea:
      goto switchD_100bec5a8_caseD_80;
    case 0x96:
      pbVar11 = (byte *)0x100ca0286;
    case 0xda:
      UNRECOVERED_JUMPTABLE = (code *)(&UNK_100bec6cc + (ulong)pbVar11[(ulong)param_2 & 0xff] * 4);
switchD_100bec310_caseD_f0:
                    /* WARNING: Could not recover jumptable at 0x000100bec6c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    case 0x97:
      goto switchD_100bec5a8_caseD_97;
    case 0x9e:
switchD_100bec5a8_caseD_9e:
      *(code **)(puVar5 + 0x10) = pcVar14;
      *(code **)(puVar5 + 0x18) = unaff_x19;
      *(undefined1 **)(puVar5 + 0x20) = &stack0xfffffffffffffff0;
      *(undefined8 *)(puVar5 + 0x28) = 0x100bec23c;
    case 0xd8:
switchD_100bec5a8_caseD_65:
      unaff_x21 = (code *)0x0;
      bVar6 = ((ulong)param_2 & 1) == 0;
      puVar4 = &DAT_65756c6176;
      if (bVar6) {
        puVar4 = &DAT_65707974;
      }
      puVar1 = &DAT_e500000000000000;
      if (bVar6) {
        puVar1 = &DAT_e400000000000000;
      }
      if (puVar4 == &DAT_65707974 && puVar1 == &DAT_e400000000000000) {
        unaff_x21 = (code *)&DAT_00000001;
      }
      else {
        FUN_100beeb44();
      }
switchD_100bec5a8_caseD_bc:
      FUN_100b6f838();
      FUN_100b6f860();
      FUN_100b56e60((uint)unaff_x21 & 1);
      return;
    case 0xa4:
      goto switchD_100bec5a8_caseD_a4;
    case 0xa5:
    case 0xb9:
    case 0xc1:
    case 0xc9:
    case 0xdd:
    case 0xf1:
    case 0xf9:
    case 0xfd:
switchD_100bec5a8_caseD_c5:
      FUN_100beebc0();
      FUN_100beeeec();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case 0xa6:
    case 0xba:
    case 0xc2:
    case 0xca:
    case 0xde:
    case 0xf2:
    case 0xfa:
      goto switchD_100bec5a8_caseD_a6;
    case 0xa8:
      FUN_100bec940(pcVar8,param_2 + 0x870);
      return;
    case 0xbc:
      goto switchD_100bec5a8_caseD_bc;
    case 0xbd:
      FUN_100bec940();
      return;
    case 0xc5:
    case 0xcd:
      goto switchD_100bec5a8_caseD_c5;
    case 0xc6:
    case 0xce:
    case 0xfe:
      goto switchD_100bec5a8_caseD_c6;
    case 199:
    case 0xcf:
    case 0xff:
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case 0xcc:
      goto switchD_100bec5a8_caseD_cc;
    case 0xd9:
      (*unaff_x19)();
      FUN_100beeb94(&stack0xffffffffffffffd8,pcVar8);
      FUN_100b6f838();
      goto switchD_100bec5a8_caseD_c6;
    case 0xe0:
      goto switchD_100bec5a8_caseD_e0;
    case 0xf4:
      FUN_100bec940(pcVar8,param_2 + 0xbd4);
      return;
    case 0xf5:
      FUN_100beebc0();
      FUN_100beeef8();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case 0xfc:
      FUN_100bed2e8(0,0);
      return;
    }
    break;
  case (code *)0xd4:
    goto switchD_100bec310_caseD_d4;
  case (code *)0xdc:
  case (code *)0xe4:
    goto switchD_100bec310_caseD_dc;
  case (code *)0xdd:
  case (code *)0xe5:
    goto LAB_100bec6fc;
  case (code *)0xde:
  case (code *)0xe6:
    goto switchD_100bec310_caseD_de;
  case (code *)0xef:
    goto switchD_100bec310_caseD_ef;
  case (code *)0xf0:
    goto switchD_100bec310_caseD_f0;
  case (code *)0xf1:
    goto switchD_100bec0c4_caseD_ca;
  case (code *)0xf7:
    goto switchD_100bec310_caseD_f7;
  }
switchD_100bec5a8_caseD_6d:
  if (pcVar8 == pcVar9 && unaff_x19 == (code *)&SUB_e200000000000000) {
switchD_100bec5a8_caseD_97:
    unaff_x21 = (code *)&DAT_00000001;
  }
  else {
switchD_100bec5a8_caseD_6e:
    FUN_100beeb44();
    unaff_x21 = pcVar8;
switchD_100bec5a8_caseD_62:
  }
switchD_100bec5a8_caseD_e0:
  FUN_100b6f838();
  FUN_100b6f860();
switchD_100bec5a8_caseD_64:
  pcVar8 = (code *)(ulong)((uint)unaff_x21 & 1);
switchD_100bec5a8_caseD_63:
  FUN_100b56e60(pcVar8);
  return;
code_r0x000100bec444:
  *(undefined1 **)(puVar2 + 0x20) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar2 + 0x28) = 0x100bec23c;
code_r0x000100bec44c:
  unaff_x19 = (code *)0xe900000000000064;
  goto switchD_100bec310_caseD_8f;
switchD_100bec5a8_caseD_69:
  goto switchD_100bec5a8_caseD_6d;
switchD_100bec5a8_caseD_c6:
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100bec0c4_caseD_e2:
  FUN_100b6f838();
code_r0x000100bec3bc:
  pcVar8 = (code *)(ulong)((uint)unaff_x21 & 1);
code_r0x000100bec3c0:
  FUN_100b56e60(pcVar8);
  return;
switchD_100bec5a8_caseD_66:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x6d7200000000);
switchD_100bec5a8_caseD_60:
  pcVar7 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0x6c61000000000000);
LAB_100bec6fc:
  pcVar10 = (code *)((ulong)param_2 & 0xff);
  pbVar11 = &BYTE_100c9f94a;
switchD_100bec310_caseD_de:
                    /* WARNING: Could not recover jumptable at 0x000100bec71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bec720 + (ulong)pbVar11[(long)pcVar10] * 4))(pcVar7);
  return;
switchD_100bec310_caseD_7d:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffff0000ffffffff | 0x746100000000);
switchD_100bec310_caseD_77:
  pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0x6574000000000000);
  if (((ulong)pcVar7 & 0xff) == 0) {
switchD_100bec310_caseD_80:
    pcVar7 = pcVar8;
    pcVar14 = (code *)0x64;
    pcVar8 = pcVar7;
switchD_100bec310_caseD_78:
    pcVar14 = (code *)((ulong)pcVar14 & 0xffffffffffff | 0xe900000000000000);
  }
  else {
    in_ZR = ((uint)pcVar7 & 0xff) == 1;
    pcVar10 = (code *)&DAT_e700000000000000;
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
    pcVar7 = (code *)0x6567617373656d;
    if (!(bool)in_ZR) {
      pcVar7 = (code *)0x736d61726170;
    }
switchD_100bec0c4_caseD_eb:
    pcVar14 = pcVar10;
    if (!(bool)in_ZR) {
      pcVar14 = UNRECOVERED_JUMPTABLE;
    }
switchD_100bec310_caseD_83:
  }
  pcVar10 = (code *)(ulong)((uint)param_2 & 0xff);
  if (((ulong)param_2 & 0xff) != 0) {
switchD_100bec310_caseD_81:
    in_ZR = (int)pcVar10 == 1;
switchD_100bec310_caseD_84:
    pcVar10 = (code *)&DAT_e700000000000000;
    pbVar11 = (byte *)0x7373656d;
switchD_100bec0c4_caseD_ec:
    pbVar11 = (byte *)((ulong)pbVar11 & 0xffff0000ffffffff | 0x65676100000000);
switchD_100bec310_caseD_79:
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
switchD_100bec310_caseD_ae:
    pcVar13 = (code *)0x6170;
switchD_100bec310_caseD_f7:
    pcVar13 = (code *)((ulong)pcVar13 | 0x736d61720000);
switchD_100bec310_caseD_7b:
    pcVar8 = (code *)pbVar11;
    unaff_x19 = pcVar10;
    if (!(bool)in_ZR) {
      pcVar8 = pcVar13;
      unaff_x19 = UNRECOVERED_JUMPTABLE;
    }
  }
switchD_100bec310_caseD_7a:
  in_ZR = false;
  if (pcVar7 == pcVar8) {
    in_ZR = pcVar14 == unaff_x19;
  }
switchD_100bec310_caseD_b5:
  if ((bool)in_ZR) {
    uVar15 = 1;
  }
  else {
    FUN_100beeb6c();
switchD_100bec310_caseD_ef:
    unaff_x21 = pcVar7;
switchD_100bec310_caseD_7c:
    uVar15 = (uint)unaff_x21;
  }
  FUN_100b6f860();
  FUN_100b6f838();
  FUN_100b56e60(uVar15 & 1);
  return;
}



/* Address: 0x100bec3c8 | switchD_100bec310::caseD_bb */

void switchD_100bec310::caseD_bb(ulong param_1,uint param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  
  bVar4 = (param_1 & 1) == 0;
  lVar6 = 0x65646f63;
  if (bVar4) {
    lVar6 = 0x6e69616d6f64;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4) {
    puVar1 = &DAT_e600000000000000;
  }
  bVar4 = (param_2 & 1) == 0;
  lVar2 = 0x65646f63;
  if (bVar4) {
    lVar2 = 0x6e69616d6f64;
  }
  puVar3 = &DAT_e400000000000000;
  if (bVar4) {
    puVar3 = &DAT_e600000000000000;
  }
  if (lVar6 == lVar2 && puVar1 == puVar3) {
    uVar5 = 1;
  }
  else {
    FUN_100beeb44();
    uVar5 = (uint)lVar6;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar5 & 1);
  return;
}



/* Address: 0x100bec43c | switchD_100bec0c4::caseD_ea */

void switchD_100bec0c4::caseD_ea(char param_1,char param_2)

{
  uint uVar1;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar2;
  
  puVar4 = (undefined1 *)0xe900000000000064;
  lVar3 = 0x657474616d726f66;
  if (param_1 == '\0') {
    puVar5 = (undefined1 *)0xe900000000000064;
    lVar2 = lVar3;
  }
  else {
    lVar2 = 0x6567617373656d;
    if (param_1 != '\x01') {
      lVar2 = 0x736d61726170;
    }
    puVar5 = &DAT_e700000000000000;
    if (param_1 != '\x01') {
      puVar5 = &DAT_e600000000000000;
    }
  }
  if (param_2 != '\0') {
    lVar3 = 0x6567617373656d;
    if (param_2 != '\x01') {
      lVar3 = 0x736d61726170;
    }
    puVar4 = &DAT_e700000000000000;
    if (param_2 != '\x01') {
      puVar4 = &DAT_e600000000000000;
    }
  }
  if (lVar2 == lVar3 && puVar5 == puVar4) {
    uVar1 = 1;
  }
  else {
    FUN_100beeb6c();
    uVar1 = (uint)lVar2;
  }
  FUN_100b6f860();
  FUN_100b6f838();
  FUN_100b56e60(uVar1 & 1);
  return;
}



/* Address: 0x100bec514 | thunk_FUN_100bec780 */

void thunk_FUN_100bec780(ulong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  bVar4 = (param_1 & 1) == 0;
  puVar6 = &DAT_65756c6176;
  if (bVar4) {
    puVar6 = &DAT_65707974;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4) {
    puVar1 = &DAT_e400000000000000;
  }
  bVar4 = (param_2 & 1) == 0;
  puVar2 = &DAT_65756c6176;
  if (bVar4) {
    puVar2 = &DAT_65707974;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4) {
    puVar3 = &DAT_e400000000000000;
  }
  if (puVar6 == puVar2 && puVar1 == puVar3) {
    uVar5 = 1;
  }
  else {
    FUN_100beeb44();
    uVar5 = (uint)puVar6;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar5 & 1);
  return;
}



/* Address: 0x100bec518 | FUN_100bec518 */

void FUN_100bec518(void)

{
  long extraout_x8;
  
  FUN_100beef88();
                    /* WARNING: Could not recover jumptable at 0x000100bec540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bec544 + (ulong)(&BYTE_100c9f93a)[extraout_x8] * 4))();
  return;
}



/* Address: 0x100bec620 | FUN_100bec620 */

void FUN_100bec620(undefined8 param_1,undefined8 param_2)

{
  switchD_100bec5a8::caseD_1b(param_1,param_2,FUN_100bcb6a0);
  return;
}



/* Address: 0x100bec62c | switchD_100bec5a8::caseD_1b */

void switchD_100bec5a8::caseD_1b(long param_1,long param_2,code *param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_2;
  (*param_3)();
  lVar3 = lVar2;
  (*param_3)();
  if (param_1 == param_2 && lVar2 == lVar3) {
    uVar1 = 1;
  }
  else {
    FUN_100beeb44(param_1);
    uVar1 = (uint)param_1;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar1 & 1);
  return;
}



/* Address: 0x100bec694 | FUN_100bec694 */

/* WARNING: Removing unreachable block (ram,0x000100bec7a8) */

void FUN_100bec694(ulong param_1,code *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined1 uVar4;
  code *pcVar5;
  code *pcVar6;
  ulong extraout_x8;
  byte *pbVar7;
  code *extraout_x9;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar8;
  code *extraout_x11;
  code *pcVar9;
  undefined1 *unaff_x20;
  uint unaff_w21;
  
  pcVar9 = (code *)&SUB_e200000000000000;
  pcVar5 = (code *)&DAT_00006b6f;
  pcVar6 = (code *)(param_1 & 0xff);
  pbVar7 = &BYTE_100c9f946;
  uVar8 = (ulong)(byte)pcVar6[0x100c9f946];
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_100bec6cc + uVar8 * 4);
  switch(pcVar6) {
  case (code *)0x0:
  case (code *)0x4:
  case (code *)0xa:
  case (code *)0x30:
  case (code *)0x38:
  case (code *)0x4a:
  case (code *)0x4b:
  case (code *)0x51:
    goto LAB_100bec6fc;
  default:
  case (code *)0xcc:
code_r0x000100bec6d4:
code_r0x000100bec6d8:
code_r0x000100bec6dc:
LAB_100bec6fc:
code_r0x000100bec700:
    goto code_r0x000100bec704;
  case (code *)0x2:
  case (code *)0x6:
  case (code *)0x26:
  case (code *)0x3d:
  case (code *)0x4d:
    FUN_100beee5c();
  case (code *)0xc:
  case (code *)0x13:
  case (code *)0x2d:
  case (code *)0x34:
    goto LAB_100bec6fc;
  case (code *)0x3:
  case (code *)0x7:
  case (code *)0x4e:
  case (code *)0xb8:
  case (code *)0xf0:
  case (code *)0x1e:
  case (code *)0x31:
  case (code *)0x35:
  case (code *)0x47:
code_r0x000100bec6f0:
switchD_100bec5a8_caseD_66:
switchD_100bec5a8_caseD_60:
    goto LAB_100bec6fc;
  case (code *)0x8:
  case (code *)0x14:
  case (code *)0x1c:
  case (code *)0x29:
  case (code *)0xbe:
    goto code_r0x000100bec72c;
  case (code *)0xb:
  case (code *)0x52:
    goto code_r0x000100bec704;
  case (code *)0xd:
  case (code *)0x12:
  case (code *)0x19:
  case (code *)0x3c:
  case (code *)0x54:
    goto code_r0x000100bec70c;
  case (code *)0xe:
  case (code *)0x58:
  case (code *)0xa3:
  case (code *)0xdb:
    goto code_r0x000100bec71c;
  case (code *)0xf:
    goto code_r0x000100bec754;
  case (code *)0x11:
  case (code *)0x18:
  case (code *)0x4f:
  case (code *)0xea:
  case (code *)0xf2:
  case (code *)0xfa:
    goto code_r0x000100bec6f0;
  case (code *)0x15:
  case (code *)0x7e:
    goto switchD_100bec5a8_caseD_6a;
  case (code *)0x16:
  case (code *)0x3e:
    goto code_r0x000100bec724;
  case (code *)0x1a:
  case (code *)0x20:
  case (code *)0x2e:
  case (code *)0x36:
  case (code *)0x49:
    goto code_r0x000100bec6d4;
  case (code *)0x1b:
  case (code *)0xd6:
    unaff_x20 = &DAT_e600000000000000;
    goto code_r0x000100bec724;
  case (code *)0x1f:
    goto code_r0x000100bec700;
  case (code *)0x21:
    goto code_r0x000100bec718;
  case (code *)0x22:
  case (code *)0x39:
  case (code *)0xb2:
  case (code *)0xba:
  case (code *)0xc2:
    break;
  case (code *)0x24:
    goto switchD_100bec5a8_caseD_60;
  case (code *)0x25:
  case (code *)0x32:
    goto switchD_100bec310_caseD_de;
  case (code *)0x27:
    unaff_x20 = &DAT_e800000000000000;
    param_3 = (undefined1 *)0x6261;
  case (code *)0x28:
  case (code *)0x3f:
    param_3 = (undefined1 *)((ulong)param_3 & 0xffff00000000ffff | 0x6d726f6e0000);
switchD_100bec5a8_caseD_6a:
    param_3 = (undefined1 *)((ulong)param_3 & 0xffffffffffff | 0x6c61000000000000);
    break;
  case (code *)0x2a:
  case (code *)0x45:
  case (code *)0x56:
    goto code_r0x000100bec708;
  case (code *)0x2c:
  case (code *)0xe6:
    goto code_r0x000100bec6dc;
  case (code *)0x2f:
  case (code *)0x37:
  case (code *)0x3b:
  case (code *)0x48:
  case (code *)0x53:
    goto switchD_100bec5a8_caseD_66;
  case (code *)0x57:
    break;
  case (code *)0x5a:
  case (code *)0x8a:
    FUN_100bed3a0(0,1);
    return;
  case (code *)0x5b:
  case (code *)0x61:
  case (code *)0x8b:
  case (code *)0x94:
    FUN_100bec940(&DAT_00006b6f,switchD_100bb6464::caseD_25);
    return;
  case (code *)0x5c:
  case (code *)0x8c:
  case (code *)0x92:
  case (code *)0x93:
    goto code_r0x000100bec884;
  case (code *)0x5d:
  case (code *)0x6a:
  case (code *)0x8d:
  case (code *)0x96:
  case (code *)0x9a:
    goto switchD_100bec5a8_caseD_bd;
  case (code *)0x5e:
  case (code *)0x8e:
    param_2 = thunk_FUN_100bc9010;
    goto switchD_100bec5a8_caseD_bd;
  case (code *)0x5f:
  case (code *)0x6b:
  case (code *)0x8f:
  case (code *)0x9b:
    goto code_r0x000100bec8b0;
  case (code *)0x60:
    goto code_r0x000100bec814;
  case (code *)0x62:
  case (code *)0x65:
    FUN_100bec940();
    return;
  case (code *)0x63:
  case (code *)0x95:
    goto code_r0x000100bec858;
  case (code *)0x64:
  case (code *)0x67:
  case (code *)0x69:
  case (code *)0x97:
  case (code *)0x99:
    param_2 = (code *)0x1;
    pcVar5 = (code *)0x0;
code_r0x000100bec87c:
    FUN_100bed2e8(pcVar5,param_2);
code_r0x000100bec884:
    return;
  case (code *)0x66:
    param_2 = (code *)&DAT_00006b6f;
    goto code_r0x000100bec858;
  case (code *)0x68:
    goto code_r0x000100bec87c;
  case (code *)0x72:
    param_2 = thunk_FUN_100b8165c;
    goto code_r0x000100bec814;
  case (code *)0x7a:
  case (code *)0xa4:
  case (code *)0xac:
  case (code *)0xae:
  case (code *)0xdc:
  case (code *)0xe4:
    goto code_r0x000100bec6d8;
  case (code *)0x90:
    goto code_r0x000100bec7d8;
  case (code *)0x91:
    param_2 = (code *)&DAT_00006b6f;
  case (code *)0xda:
    FUN_100bed454(0,param_2);
    return;
  case (code *)0x98:
    FUN_100bec940(&DAT_00006b6f,param_2 + 0x6a0);
    return;
  case (code *)0x9e:
    in_ZR = false;
    pcVar6 = (code *)&DAT_65707974;
    pbVar7 = &DAT_65756c6176;
    pcVar5 = (code *)&DAT_65756c6176;
  case (code *)0xc6:
    puVar1 = &DAT_e500000000000000;
    if ((bool)in_ZR) {
      puVar1 = &DAT_e400000000000000;
    }
    bVar3 = ((ulong)param_2 & 1) == 0;
    if (bVar3) {
      pbVar7 = (byte *)pcVar6;
    }
    puVar2 = &DAT_e500000000000000;
    if (bVar3) {
      puVar2 = &DAT_e400000000000000;
    }
    if (pcVar5 == (code *)pbVar7 && puVar1 == puVar2) {
LAB_100bec7dc:
      unaff_w21 = 1;
    }
    else {
      FUN_100beeb44();
      unaff_w21 = (uint)pcVar5;
code_r0x000100bec7d8:
    }
    FUN_100b6f838();
    FUN_100b6f860();
    FUN_100b56e60(unaff_w21 & 1);
    return;
  case (code *)0x9f:
  case (code *)0xb3:
  case (code *)0xbb:
  case (code *)0xc3:
  case (code *)0xd7:
  case (code *)0xeb:
  case (code *)0xf3:
  case (code *)0xfb:
    FUN_100beef24(param_2);
    pcVar6 = (code *)(extraout_x8 & 0xff);
    pbVar7 = (byte *)"SentryTypedSwizzle";
  case (code *)0xf7:
    pbVar7 = pbVar7 + 0x94e;
code_r0x000100beca40:
                    /* WARNING: Could not recover jumptable at 0x000100beca4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)pbVar7[(long)pcVar6] * 4 + 0x100beca50))();
    return;
  case (code *)0xa0:
  case (code *)0xb4:
  case (code *)0xbc:
  case (code *)0xc4:
  case (code *)0xd8:
  case (code *)0xec:
  case (code *)0xf4:
  case (code *)0xfc:
    goto code_r0x000100bec770;
  case (code *)0xa2:
    FUN_100beeb94(&stack0xffffffffffffffd8,param_3);
    FUN_100b6f838();
    FUN_100b6fbb4();
    FUN_100b8a7ec();
    return;
  case (code *)0xb6:
    FUN_100bed664(0);
    return;
  case (code *)0xb7:
    if (((ulong)param_2 & 0xff) == 0) {
      FUN_100beef60();
      goto LAB_100beca10;
    }
    in_ZR = ((uint)param_2 & 0xff) == 1;
    pcVar6 = (code *)0xee006e6f69747065;
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e800000000000000;
  case (code *)0xef:
    pcVar9 = pcVar6;
    if (!(bool)in_ZR) {
      pcVar9 = UNRECOVERED_JUMPTABLE;
    }
LAB_100beca10:
    FUN_100beeb94();
    FUN_100beeb9c(pcVar9);
    return;
  case (code *)0xbf:
  case (code *)0xc7:
    goto code_r0x000100beca40;
  case (code *)0xc0:
  case (code *)0xc8:
  case (code *)0xf8:
    goto switchD_100beca4c_caseD_0;
  case (code *)0xc1:
  case (code *)0xc9:
  case (code *)0xf9:
    uVar4 = ((ulong)param_2 & 0xff) == 0;
    if ((bool)uVar4) {
      FUN_100beede4("MAYBE_JSON_TRUNCATED");
    }
    else {
      FUN_100beec04((uint)param_2 & 0xff);
      FUN_100beebf0();
      FUN_100beecb0();
      pcVar9 = extraout_x9;
      if (!(bool)uVar4) {
        pcVar9 = extraout_x11;
      }
    }
    FUN_100beeb94();
    FUN_100beeb9c(pcVar9);
    return;
  case (code *)0xd2:
    param_2 = (code *)0x100bd6000;
    goto code_r0x000100bec8b0;
  case (code *)0xd3:
    FUN_100beeba4();
switchD_100beca4c_caseD_0:
    FUN_100beeb94();
    FUN_100beeb9c(&SUB_e200000000000000);
    return;
  case (code *)0xd4:
    goto LAB_100bec7dc;
  case (code *)0xee:
    FUN_100b8a7ec();
    return;
  case (code *)0xf6:
    FUN_100beebc0();
    FUN_100beeed4();
    FUN_100b6fbb4();
    FUN_100b8a7ec();
    return;
  case (code *)0xfe:
    FUN_100b8a7ec();
    return;
  case (code *)0xff:
    FUN_100bec8c4(&DAT_00006b6f,switchD_100becff0::caseD_7d);
    return;
  }
switchD_100bec5a8_caseD_6d:
  in_ZR = param_3 == &DAT_00006b6f;
code_r0x000100bec754:
  if ((bool)in_ZR && unaff_x20 == &SUB_e200000000000000) {
    unaff_w21 = 1;
  }
  else {
    FUN_100beeb44();
    unaff_w21 = (uint)pcVar5;
  }
  FUN_100b6f838();
code_r0x000100bec770:
  FUN_100b6f860();
  FUN_100b56e60(unaff_w21 & 1);
  return;
code_r0x000100bec724:
  param_3 = (undefined1 *)0x74697865;
code_r0x000100bec72c:
  param_3 = (undefined1 *)((ulong)param_3 & 0xffff0000ffffffff | 0x646500000000);
  goto switchD_100bec5a8_caseD_6d;
code_r0x000100bec704:
  pcVar6 = (code *)((ulong)param_2 & 0xff);
code_r0x000100bec708:
  pbVar7 = (byte *)"SentryTypedSwizzle";
code_r0x000100bec70c:
  pbVar7 = pbVar7 + 0x94a;
switchD_100bec310_caseD_de:
  UNRECOVERED_JUMPTABLE = (code *)&UNK_100bec720;
  uVar8 = (ulong)pbVar7[(long)pcVar6];
  goto code_r0x000100bec718;
code_r0x000100bec858:
  FUN_100bed504(0,param_2);
  return;
code_r0x000100bec814:
  FUN_100bec940(&DAT_00006b6f,param_2);
  return;
code_r0x000100bec8b0:
  FUN_100bec940(&DAT_00006b6f,param_2 + 0x6ac);
  return;
switchD_100bec5a8_caseD_bd:
  FUN_100bec940(&DAT_00006b6f,param_2);
  return;
code_r0x000100bec718:
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + uVar8 * 4;
code_r0x000100bec71c:
                    /* WARNING: Could not recover jumptable at 0x000100bec71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bec780 | FUN_100bec780 */

void FUN_100bec780(ulong param_1,uint param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  uint uVar5;
  undefined1 *puVar6;
  
  bVar4 = (param_1 & 1) == 0;
  puVar6 = &DAT_65756c6176;
  if (bVar4) {
    puVar6 = &DAT_65707974;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4) {
    puVar1 = &DAT_e400000000000000;
  }
  bVar4 = (param_2 & 1) == 0;
  puVar2 = &DAT_65756c6176;
  if (bVar4) {
    puVar2 = &DAT_65707974;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar4) {
    puVar3 = &DAT_e400000000000000;
  }
  if (puVar6 == puVar2 && puVar1 == puVar3) {
    uVar5 = 1;
  }
  else {
    FUN_100beeb44();
    uVar5 = (uint)puVar6;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar5 & 1);
  return;
}



/* Address: 0x100bec7f4 | FUN_100bec7f4 */

void FUN_100bec7f4(undefined8 param_1)

{
  FUN_100bed338(0,param_1);
  return;
}



/* Address: 0x100bec800 | FUN_100bec800 */

void FUN_100bec800(undefined8 param_1)

{
  FUN_100bec940(param_1,thunk_FUN_100b7e2c0);
  return;
}



/* Address: 0x100bec80c | FUN_100bec80c */

void FUN_100bec80c(undefined8 param_1)

{
  FUN_100bec940(param_1,thunk_FUN_100b8165c);
  return;
}



/* Address: 0x100bec818 | FUN_100bec818 */

void FUN_100bec818(uint param_1)

{
  FUN_100bed3a0(0,param_1 & 1);
  return;
}



/* Address: 0x100bec824 | FUN_100bec824 */

void FUN_100bec824(undefined8 param_1)

{
  FUN_100bec940(param_1,FUN_100b94b98);
  return;
}



/* Address: 0x100bec830 | FUN_100bec830 */

void FUN_100bec830(undefined8 param_1)

{
  FUN_100bed5b8(0,param_1);
  return;
}



/* Address: 0x100bec83c | FUN_100bec83c */

void FUN_100bec83c(undefined8 param_1)

{
  FUN_100bec940(param_1,thunk_FUN_100ba6f0c);
  return;
}



/* Address: 0x100bec848 | FUN_100bec848 */

void FUN_100bec848(undefined8 param_1)

{
  FUN_100bec940(param_1,switchD_100bab490::caseD_85);
  return;
}



/* Address: 0x100bec854 | FUN_100bec854 */

void FUN_100bec854(undefined8 param_1)

{
  FUN_100bed504(0,param_1);
  return;
}



/* Address: 0x100bec860 | FUN_100bec860 */

void FUN_100bec860(undefined8 param_1)

{
  FUN_100bec940(param_1,switchD_100bb6464::caseD_25);
  return;
}



/* Address: 0x100bec86c | switchD_100bec5a8::caseD_fc */

void switchD_100bec5a8::caseD_fc(uint param_1)

{
  FUN_100bed2e8(0,param_1 & 1);
  return;
}



/* Address: 0x100bec888 | FUN_100bec888 */

void FUN_100bec888(undefined8 param_1)

{
  FUN_100bed454(0,param_1);
  return;
}



/* Address: 0x100bec894 | FUN_100bec894 */

void FUN_100bec894(undefined8 param_1)

{
  FUN_100bec940(param_1,thunk_FUN_100bc9010);
  return;
}



/* Address: 0x100bec8a0 | FUN_100bec8a0 */

void FUN_100bec8a0(undefined8 param_1)

{
  FUN_100bec940(param_1,FUN_100bcb6a0);
  return;
}



/* Address: 0x100bec8ac | FUN_100bec8ac */

void FUN_100bec8ac(undefined8 param_1)

{
  FUN_100bec940(param_1,thunk_FUN_100bd5090);
  return;
}



/* Address: 0x100bec8b8 | FUN_100bec8b8 */

void FUN_100bec8b8(undefined8 param_1)

{
  FUN_100bec8c4(param_1,switchD_100becff0::caseD_7d);
  return;
}



/* Address: 0x100bec8c4 | FUN_100bec8c4 */

void FUN_100bec8c4(void)

{
  FUN_100beebc0();
  FUN_100beeef8();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bec8f0 | FUN_100bec8f0 */

void FUN_100bec8f0(undefined8 param_1)

{
  FUN_100bec940(param_1,thunk_FUN_100be09e8);
  return;
}



/* Address: 0x100bec8fc | FUN_100bec8fc */

void FUN_100bec8fc(undefined8 param_1)

{
  FUN_100bed664(0,param_1);
  return;
}



/* Address: 0x100bec908 | switchD_100bec5a8::caseD_a5 */

void switchD_100bec5a8::caseD_a5(void)

{
  FUN_100beebc0();
  FUN_100beeeec();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bec90c | FUN_100bec90c */

void FUN_100bec90c(void)

{
  FUN_100beebc0();
  FUN_100beeeec();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bec934 | FUN_100bec934 */

void FUN_100bec934(undefined8 param_1)

{
  FUN_100bec940(param_1,thunk_FUN_100bea408);
  return;
}



/* Address: 0x100bec940 | FUN_100bec940 */

void FUN_100bec940(undefined8 param_1,code *param_2)

{
  undefined1 auStack_68 [72];
  
  FUN_100beebc0();
  (*param_2)(param_1);
  FUN_100beeb94(auStack_68,param_1);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bec988 | thunk_FUN_100bec98c */

void thunk_FUN_100bec98c(void)

{
  FUN_100bec98c();
  return;
}



/* Address: 0x100bec98c | FUN_100bec98c */

void FUN_100bec98c(void)

{
  FUN_100beebc0();
  FUN_100beeed4();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100bec9b4 | FUN_100bec9b4 */

void FUN_100bec9b4(undefined8 param_1,char param_2)

{
  undefined1 *unaff_x19;
  
  if (param_2 == '\0') {
    FUN_100beef60();
  }
  else {
    unaff_x19 = (undefined1 *)0xee006e6f69747065;
    if (param_2 != '\x01') {
      unaff_x19 = &DAT_e800000000000000;
    }
  }
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100beca20 | FUN_100beca20 */

void FUN_100beca20(Hasher param_1,Hasher param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 in_ZR;
  code *pcVar4;
  ulong extraout_x8;
  code *pcVar5;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  code *extraout_x8_04;
  code *extraout_x8_05;
  char *pcVar6;
  byte *pbVar7;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar8;
  code *unaff_x19;
  undefined8 unaff_x20;
  undefined8 ****ppppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  String SVar12;
  long alStack_50 [2];
  undefined8 ***pppuStack_30;
  undefined8 uStack_28;
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar2 = &stack0xffffffffffffffe0;
  uVar10 = 0x100beca34;
  FUN_100beef24(param_2.unknown);
  pcVar5 = (code *)(extraout_x8 & 0xff);
  pbVar7 = &switchD_100beca4c::switchdataD_100c9f94e;
  UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar5[0x100c9f94e] * 4 + 0x100beca50);
  pcVar4 = (code *)param_2.unknown;
  pcVar6 = (char *)pbVar7;
  uVar11 = uVar10;
  switch(pcVar5) {
  case (code *)0x0:
  case (code *)0xc:
  case (code *)0x14:
  case (code *)0x21:
  case (code *)0xb6:
    goto switchD_100beca4c_caseD_0;
  default:
switchD_100beca4c_caseD_1:
  case (code *)0xc4:
switchD_100beca4c_caseD_12:
switchD_100beca4c_caseD_72:
switchD_100beca4c_caseD_24:
switchD_100beca4c_caseD_1e:
switchD_100beca4c_caseD_0:
    FUN_100beeb94();
switchD_100becb38_caseD_becab8:
switchD_100beca4c_caseD_4f:
    FUN_100beeb9c();
    return;
  case (code *)0x2:
  case (code *)0x28:
  case (code *)0x30:
  case (code *)0x42:
  case (code *)0x43:
  case (code *)0x49:
switchD_100beca4c_caseD_2:
    FUN_100beeba4();
  case (code *)0x17:
    goto switchD_100beca4c_caseD_0;
  case (code *)0x3:
  case (code *)0x4a:
switchD_100beca4c_caseD_3:
    FUN_100beebd4();
  case (code *)0x22:
  case (code *)0x3d:
  case (code *)0x4e:
    goto switchD_100beca4c_caseD_0;
  case (code *)0x4:
  case (code *)0xb:
  case (code *)0x25:
  case (code *)0x2c:
switchD_100beca4c_caseD_4:
  case (code *)0x46:
  case (code *)0xb0:
  case (code *)0xe8:
switchD_100beca4c_caseD_16:
switchD_100beca4c_caseD_9:
switchD_100beca4c_caseD_27:
switchD_100beca4c_caseD_1c:
    goto switchD_100beca4c_caseD_0;
  case (code *)0x5:
  case (code *)0xa:
  case (code *)0x11:
  case (code *)0x34:
  case (code *)0x4c:
switchD_100beca4c_caseD_5:
  case (code *)0x1d:
  case (code *)0x2a:
switchD_100becb38_caseD_beca98:
switchD_100beca4c_caseD_19:
    goto switchD_100beca4c_caseD_0;
  case (code *)0x6:
  case (code *)0x50:
  case (code *)0x9b:
  case (code *)0xd3:
switchD_100beca4c_caseD_6:
  case (code *)0x13:
  case (code *)0xce:
switchD_100beca4c_caseD_e:
    goto switchD_100beca4c_caseD_0;
  case (code *)0x7:
    goto switchD_100beca4c_caseD_7;
  case (code *)0x9:
  case (code *)0x10:
  case (code *)0x47:
  case (code *)0xe2:
  case (code *)0xea:
  case (code *)0xf2:
  case (code *)0xfa:
    goto switchD_100beca4c_caseD_9;
  case (code *)0xd:
  case (code *)0x76:
    goto switchD_100beca4c_caseD_d;
  case (code *)0xe:
  case (code *)0x36:
    goto switchD_100beca4c_caseD_e;
  case (code *)0x12:
  case (code *)0x18:
  case (code *)0x26:
  case (code *)0x2e:
  case (code *)0x41:
    goto switchD_100beca4c_caseD_12;
  case (code *)0x16:
  case (code *)0x29:
  case (code *)0x2d:
  case (code *)0x3f:
    goto switchD_100beca4c_caseD_16;
  case (code *)0x19:
    goto switchD_100beca4c_caseD_19;
  case (code *)0x1a:
  case (code *)0x31:
  case (code *)0xaa:
  case (code *)0xb2:
  case (code *)0xba:
    goto switchD_100beca4c_caseD_1a;
  case (code *)0x1c:
    goto switchD_100beca4c_caseD_1c;
  case (code *)0x1e:
  case (code *)0x35:
  case (code *)0x45:
    goto switchD_100beca4c_caseD_1e;
  case (code *)0x1f:
switchD_100beca4c_caseD_1f:
    pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
    uStack_28 = uVar10;
  case (code *)0x20:
  case (code *)0x37:
switchD_100beca4c_caseD_20:
    in_ZR = ((ulong)param_2.unknown & 0xff) == 0;
    pcVar5 = (code *)(ulong)((uint)param_2.unknown & 0xff);
switchD_100beca4c_caseD_d:
    if ((bool)in_ZR) {
switchD_100becb38_caseD_becaf0:
      pcVar5 = (code *)0x100dc6000;
switchD_100beca4c_caseD_98:
      pcVar5 = pcVar5 + 0xf40;
switchD_100becb38_caseD_becaf8:
      FUN_100beede4(pcVar5);
    }
    else {
switchD_100beca4c_caseD_1a:
      FUN_100beec04(pcVar5);
switchD_100beca4c_caseD_7:
      FUN_100beebf0();
      FUN_100beecb0();
switchD_100becb38_caseD_becae8:
    }
    FUN_100beeb94();
switchD_100becb38_caseD_becb00:
switchD_100beca4c_caseD_96:
    FUN_100beeb9c();
    return;
  case (code *)0x24:
  case (code *)0xde:
    goto switchD_100beca4c_caseD_24;
  case (code *)0x27:
  case (code *)0x2f:
  case (code *)0x33:
  case (code *)0x40:
  case (code *)0x4b:
    goto switchD_100beca4c_caseD_27;
  case (code *)0x4f:
    goto switchD_100beca4c_caseD_4f;
  case (code *)0x52:
  case (code *)0x82:
    unaff_x19 = (code *)0xe90000000000006b;
switchD_100becb38_caseD_becbb8:
    break;
  case (code *)0x53:
  case (code *)0x59:
  case (code *)0x83:
  case (code *)0x8c:
    goto switchD_100beca4c_caseD_53;
  case (code *)0x54:
  case (code *)0x84:
  case (code *)0x8a:
  case (code *)0x8b:
    goto switchD_100becc00_caseD_0;
  case (code *)0x55:
  case (code *)0x62:
  case (code *)0x85:
  case (code *)0x8e:
  case (code *)0x92:
    goto switchD_100beca4c_caseD_55;
  case (code *)0x56:
  case (code *)0x86:
    goto switchD_100beca4c_caseD_56;
  case (code *)0x57:
  case (code *)0x63:
  case (code *)0x87:
  case (code *)0x93:
    goto switchD_100beca4c_caseD_57;
  case (code *)0x58:
    goto switchD_100beca4c_caseD_58;
  case (code *)0x5a:
  case (code *)0x5d:
    puVar1 = &stack0xffffffffffffffc0;
  case (code *)0x5e:
    *(undefined1 **)(puVar1 + 0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar1 + 0x18) = 0x100beca34;
switchD_100beca4c_caseD_5b:
    pcVar5 = (code *)param_2.unknown;
switchD_100beca4c_caseD_53:
    FUN_100beef38(pcVar5);
    pcVar5 = (code *)(extraout_x8_01 & 0xff);
    pbVar7 = (byte *)"SentryTypedSwizzle";
switchD_100beca4c_caseD_5c:
    pbVar7 = pbVar7 + 0x95c;
switchD_100beca4c_caseD_5f:
    UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar5[(long)pbVar7] * 4 + 0x100becc04);
switchD_100beca4c_caseD_60:
                    /* WARNING: Could not recover jumptable at 0x000100becc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  case (code *)0x5b:
  case (code *)0x8d:
    goto switchD_100beca4c_caseD_5b;
  case (code *)0x5c:
    goto switchD_100beca4c_caseD_5c;
  case (code *)0x5f:
  case (code *)0x61:
  case (code *)0x8f:
  case (code *)0x91:
    goto switchD_100beca4c_caseD_5f;
  case (code *)0x60:
    goto switchD_100beca4c_caseD_60;
  case (code *)0x6a:
    goto switchD_100beca4c_caseD_58;
  case (code *)0x72:
  case (code *)0x9c:
  case (code *)0xa4:
  case (code *)0xa6:
  case (code *)0xd4:
  case (code *)0xdc:
    goto switchD_100beca4c_caseD_72;
  case (code *)0x88:
switchD_100beca4c_caseD_88:
    break;
  case (code *)0x89:
  case (code *)0xd2:
switchD_100beca4c_caseD_d2:
switchD_100beca4c_caseD_56:
switchD_100beca4c_caseD_55:
switchD_100becc00_caseD_0:
    FUN_100beeb94();
switchD_100becb38_caseD_becc68:
    FUN_100beeb9c();
    return;
  case (code *)0x90:
    FUN_100beed74();
  case (code *)0xca:
switchD_100beca4c_caseD_57:
switchD_100beca4c_caseD_f7:
    goto switchD_100becc00_caseD_0;
  case (code *)0x96:
    goto switchD_100beca4c_caseD_96;
  case (code *)0x97:
  case (code *)0xab:
  case (code *)0xb3:
  case (code *)0xbb:
  case (code *)0xcf:
  case (code *)0xe3:
  case (code *)0xeb:
  case (code *)0xf3:
  case (code *)0xfb:
switchD_100beca4c_caseD_97:
    goto switchD_100becc00_caseD_47;
  case (code *)0x98:
  case (code *)0xac:
  case (code *)0xb4:
  case (code *)0xbc:
  case (code *)0xd0:
  case (code *)0xe4:
  case (code *)0xec:
  case (code *)0xf4:
  case (code *)0xfc:
    goto switchD_100beca4c_caseD_98;
  case (code *)0x9a:
    goto switchD_100beca4c_caseD_9a;
  case (code *)0xae:
    goto switchD_100beca4c_caseD_ae;
  case (code *)0xaf:
    goto switchD_100beca4c_caseD_af;
  case (code *)0xb7:
  case (code *)0xbf:
    goto switchD_100beca4c_caseD_b7;
  case (code *)0xb8:
  case (code *)0xc0:
  case (code *)0xf0:
    goto switchD_100beca4c_caseD_b8;
  case (code *)0xb9:
  case (code *)0xc1:
  case (code *)0xf1:
  case (code *)0xf9:
    goto switchD_100beca4c_caseD_b9;
  case (code *)0xbe:
switchD_100beca4c_caseD_be:
    ppppuVar9 = (undefined8 ****)&stack0xfffffffffffffff0;
    UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(byte)pcVar5[(long)pcVar6] * 4;
    puVar3 = (undefined1 *)register0x00000008;
    switch(UNRECOVERED_JUMPTABLE) {
    case (code *)0x100beca50:
      goto switchD_100beca4c_caseD_1;
    case (code *)0x100beca58:
      goto switchD_100beca4c_caseD_12;
    case (code *)0x100beca60:
      goto switchD_100beca4c_caseD_24;
    case (code *)0x100beca68:
      goto switchD_100beca4c_caseD_4;
    case (code *)0x100beca70:
      goto switchD_100beca4c_caseD_16;
    case (code *)0x100beca78:
      goto switchD_100beca4c_caseD_27;
    case (code *)0x100beca80:
      goto switchD_100beca4c_caseD_2;
    case (code *)0x100beca88:
      goto switchD_100beca4c_caseD_3;
    case (code *)0x100beca90:
      goto switchD_100beca4c_caseD_5;
    case (code *)0x100beca98:
      goto switchD_100becb38_caseD_beca98;
    case (code *)0x100becaa0:
      goto switchD_100beca4c_caseD_6;
    case (code *)0x100becaa8:
      goto switchD_100beca4c_caseD_e;
    case (code *)0x100becab0:
      goto switchD_100beca4c_caseD_0;
    case (code *)0x100becab8:
      goto switchD_100becb38_caseD_becab8;
    case (code *)0x100becac0:
      goto switchD_100beca4c_caseD_1f;
    case (code *)0x100becac8:
      goto switchD_100beca4c_caseD_20;
    case (code *)0x100becad0:
      goto switchD_100beca4c_caseD_d;
    case (code *)0x100becad8:
      goto switchD_100beca4c_caseD_7;
    case (code *)0x100becae8:
      goto switchD_100becb38_caseD_becae8;
    case (code *)0x100becaf0:
      goto switchD_100becb38_caseD_becaf0;
    case (code *)0x100becaf8:
      goto switchD_100becb38_caseD_becaf8;
    case (code *)0x100becb00:
      goto switchD_100becb38_caseD_becb00;
    case (code *)0x100becb10:
      uVar10 = 0x100becb20;
      FUN_100beebd4(param_2.unknown);
      pcVar5 = (code *)(extraout_x8_00 & 0xff);
      pcVar6 = "SentryTypedSwizzle";
      break;
    case (code *)0x100becb30:
      goto switchD_100beca4c_caseD_be;
    case (code *)0x100becb40:
switchD_100becb38_caseD_becb50:
      goto switchD_100beca4c_caseD_f8;
    case (code *)0x100becb50:
      goto switchD_100becb38_caseD_becb50;
    case (code *)0x100becb58:
      goto switchD_100beca4c_caseD_88;
    case (code *)0x100becb60:
      goto switchD_100beca4c_caseD_cc;
    case (code *)0x100becb98:
      goto switchD_100beca4c_caseD_58;
    case (code *)0x100becbb8:
      goto switchD_100becb38_caseD_becbb8;
    case (code *)0x100becc10:
      goto switchD_100beca4c_caseD_d2;
    case (code *)0x100becc68:
      goto switchD_100becb38_caseD_becc68;
    case (code *)0x100becc70:
      goto switchD_100beca4c_caseD_f6;
    case (code *)0x100beccd0:
      goto switchD_100becca8_caseD_33;
    case (code *)0x100becce0:
      goto switchD_100becca8_caseD_3;
    case (code *)0x100becce8:
      goto switchD_100becca8_caseD_e;
    case (code *)0x100becd38:
      goto switchD_100becb38_caseD_becd38;
    case (code *)0x100becd58:
      goto switchD_100becb38_caseD_becd58;
    case (code *)0x100becd60:
      goto switchD_100becca8_caseD_82;
    case (code *)0x100becd68:
      goto switchD_100becca8_caseD_fe;
    case (code *)0x100becd78:
      goto switchD_100becb38_caseD_becd78;
    case (code *)0x100becd90:
      goto switchD_100becb38_caseD_becd90;
    case (code *)0x100becd98:
      goto switchD_100beca4c_caseD_97;
    case (code *)0x100becdb0:
      goto switchD_100becca8_caseD_74;
    case (code *)0x100becdc0:
      goto switchD_100beca4c_caseD_ef;
    case (code *)0x100becdc8:
    case (code *)0x100becdd0:
      goto switchD_100becc00_caseD_47;
    case (code *)0x100becde0:
      goto switchD_100becb38_caseD_becde0;
    case (code *)0x100becdf0:
      goto switchD_100becb38_caseD_becdf0;
    case (code *)0x100bece00:
      goto switchD_100becb38_caseD_bece00;
    case (code *)0x100bece10:
      goto switchD_100becb38_caseD_bece10;
    case (code *)0x100bece18:
      goto switchD_100becb38_caseD_bece18;
    case (code *)0x100bece28:
      goto switchD_100becb38_caseD_bece28;
    case (code *)0x100bece90:
      goto switchD_100bece7c_caseD_2;
    case (code *)0x100beceb8:
      goto switchD_100bece7c_caseD_0;
    case (code *)0x100becf18:
      goto switchD_100becb38_caseD_becf18;
    case (code *)0x100becf90:
      goto switchD_100bece7c_caseD_aa;
    case (code *)0x100becfd0:
      goto switchD_100becb38_caseD_becfd0;
    case (code *)0x100bed010:
      goto switchD_100becff0_caseD_15;
    case (code *)0x100bed030:
      goto switchD_100bece7c_caseD_3e;
    case (code *)0x100bed0a8:
      goto switchD_100becff0_caseD_65;
    case (code *)0x100bed108:
      goto switchD_100becb38_caseD_bed108;
    case (code *)0x100bed130:
      goto switchD_100becb38_caseD_bed130;
    case (code *)0x100bed138:
      goto switchD_100becb38_caseD_bed138;
    case (code *)0x100bed1b8:
      goto LAB_100bed1d0;
    case FUN_100bed1ec:
      goto switchD_100bece7c_caseD_cd;
    case (code *)0x100bed248:
      goto switchD_100becb38_caseD_bed248;
    }
    pcVar6 = pcVar6 + 0x955;
    UNRECOVERED_JUMPTABLE = (code *)0x100becb3c;
    goto switchD_100beca4c_caseD_be;
  case (code *)0xcb:
    goto switchD_100beca4c_caseD_cb;
  case (code *)0xcc:
switchD_100beca4c_caseD_cc:
    unaff_x19 = (code *)0xe900000000000063;
    break;
  case (code *)0xe6:
    goto switchD_100beca4c_caseD_e6;
  case (code *)0xe7:
    goto switchD_100becca8_caseD_aa;
  case (code *)0xee:
    goto switchD_100beca4c_caseD_ee;
  case (code *)0xef:
  case (code *)0xff:
switchD_100beca4c_caseD_ef:
    FUN_100beed84();
switchD_100beca4c_caseD_b7:
    goto switchD_100becc00_caseD_47;
  case (code *)0xf6:
switchD_100beca4c_caseD_f6:
    unaff_x19 = (code *)&DAT_e800000000000000;
    pcVar4 = (code *)0x6564;
    pcVar5 = (code *)param_2.unknown;
    uVar11 = uVar10;
switchD_100beca4c_caseD_ae:
    param_2.unknown = (undefined *)((ulong)pcVar4 & 0xffff | 0x64695f6775620000);
    pcVar5 = (code *)((ulong)pcVar5 & 0xff);
    pbVar7 = &switchD_100becca8::switchdataD_100c9f962;
    UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar5[0x100c9f962] * 4 + 0x100beccac);
    ppppuVar9 = (undefined8 ****)&stack0xfffffffffffffff0;
    uVar10 = uVar11;
    switch(pcVar5) {
    case (code *)0x0:
    case (code *)0xd:
    case (code *)0xa2:
      goto switchD_100becca8_caseD_0;
    default:
      FUN_100beebd4();
    case (code *)0xb0:
    case (code *)0xf0:
switchD_100becca8_caseD_0:
      FUN_100beeb94();
switchD_100beca4c_caseD_ee:
switchD_100becca8_caseD_3b:
      FUN_100beeb9c();
      return;
    case (code *)0x2:
    case (code *)0x15:
    case (code *)0x19:
    case (code *)0x2b:
      FUN_100beedc4();
    case (code *)0x33:
    case (code *)0xce:
    case (code *)0xd6:
    case (code *)0xde:
    case (code *)0xe6:
switchD_100becca8_caseD_33:
switchD_100becca8_caseD_13:
switchD_100becca8_caseD_8:
switchD_100becca8_caseD_14:
      goto switchD_100becca8_caseD_0;
    case (code *)0x3:
switchD_100becca8_caseD_3:
    case (code *)0x36:
switchD_100becca8_caseD_e:
switchD_100becca8_caseD_20:
      FUN_100beedc4();
switchD_100beca4c_caseD_9a:
      goto switchD_100becca8_caseD_0;
    case (code *)0x4:
    case (code *)0x12:
    case (code *)0x1a:
    case (code *)0x2d:
switchD_100beca4c_caseD_e6:
    case (code *)0x5e:
    case (code *)0x88:
    case (code *)0x90:
    case (code *)0x92:
    case (code *)0xc0:
    case (code *)0xc8:
switchD_100becca8_caseD_10:
switchD_100becca8_caseD_a:
      FUN_100beedc4();
switchD_100becca8_caseD_11:
switchD_100becca8_caseD_32:
      goto switchD_100becca8_caseD_0;
    case (code *)0x5:
      FUN_100beefb0();
    case (code *)0x3c:
    case (code *)0x87:
    case (code *)0xbf:
    case (code *)0xff:
switchD_100becca8_caseD_ba:
switchD_100becca8_caseD_22:
      goto switchD_100becca8_caseD_0;
    case (code *)0x6:
    case (code *)0x1d:
    case (code *)0x96:
    case (code *)0x9e:
    case (code *)0xa6:
      goto switchD_100beca4c_caseD_fe;
    case (code *)0x8:
      goto switchD_100becca8_caseD_8;
    case (code *)0x9:
    case (code *)0x16:
      goto switchD_100beca4c_caseD_9a;
    case (code *)0xa:
    case (code *)0x21:
    case (code *)0x31:
      goto switchD_100becca8_caseD_a;
    case (code *)0xb:
    case (code *)0xc:
    case (code *)0x23:
      FUN_100bed1ec();
      return;
    case (code *)0xe:
    case (code *)0x29:
    case (code *)0x3a:
      goto switchD_100becca8_caseD_e;
    case (code *)0x10:
    case (code *)0xca:
      goto switchD_100becca8_caseD_10;
    case (code *)0x11:
    case (code *)0x18:
      goto switchD_100becca8_caseD_11;
    case (code *)0x13:
    case (code *)0x1b:
    case (code *)0x1f:
    case (code *)0x2c:
    case (code *)0x37:
      goto switchD_100becca8_caseD_13;
    case (code *)0x14:
    case (code *)0x1c:
    case (code *)0x2e:
    case (code *)0x2f:
    case (code *)0x35:
      goto switchD_100becca8_caseD_14;
    case (code *)0x20:
    case (code *)0x38:
      goto switchD_100becca8_caseD_20;
    case (code *)0x22:
      goto switchD_100becca8_caseD_22;
    case (code *)0x32:
    case (code *)0x9c:
    case (code *)0xd4:
      goto switchD_100becca8_caseD_32;
    case (code *)0x3b:
      goto switchD_100becca8_caseD_3b;
    case (code *)0x3e:
    case (code *)0x6e:
      goto switchD_100becca8_caseD_3e;
    case (code *)0x3f:
    case (code *)0x45:
    case (code *)0x6f:
    case (code *)0x78:
      goto switchD_100becca8_caseD_3f;
    case (code *)0x40:
    case (code *)0x70:
    case (code *)0x76:
    case (code *)0x77:
      goto switchD_100becca8_caseD_40;
    case (code *)0x41:
    case (code *)0x4e:
    case (code *)0x71:
    case (code *)0x7a:
    case (code *)0x7e:
      goto switchD_100bece7c_switchD;
    case (code *)0x42:
    case (code *)0x72:
      goto switchD_100becca8_caseD_42;
    case (code *)0x43:
    case (code *)0x4f:
    case (code *)0x73:
    case (code *)0x7f:
switchD_100bece7c_caseD_2:
      FUN_100beee8c();
      break;
    case (code *)0x44:
      goto switchD_100becca8_caseD_44;
    case (code *)0x46:
    case (code *)0x49:
      goto switchD_100becca8_caseD_46;
    case (code *)0x47:
    case (code *)0x79:
      goto switchD_100becca8_caseD_47;
    case (code *)0x48:
      goto switchD_100beca4c_caseD_b9;
    case (code *)0x4a:
      goto switchD_100becca8_caseD_4a;
    case (code *)0x4b:
    case (code *)0x4d:
    case (code *)0x7b:
    case (code *)0x7d:
      pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
      uStack_28 = uVar11;
    case (code *)0x4c:
      FUN_100beeba4(param_2.unknown);
      pcVar5 = extraout_x8_03;
switchD_100becca8_caseD_40:
      pcVar5 = (code *)((ulong)pcVar5 & 0xff);
switchD_100becca8_caseD_75:
      pbVar7 = (byte *)"SentryTypedSwizzle";
switchD_100becca8_caseD_be:
      pbVar7 = pbVar7 + 0x970;
      UNRECOVERED_JUMPTABLE = (code *)0x100bece80;
switchD_100becca8_caseD_42:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(byte)pcVar5[(long)pbVar7] * 4;
switchD_100bece7c_switchD:
                    /* WARNING: Could not recover jumptable at 0x000100bece7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    case (code *)0x56:
switchD_100becb38_caseD_becdf0:
      in_ZR = ((ulong)param_2.unknown & 0xff) == 0;
      goto switchD_100becca8_caseD_44;
    case (code *)0x62:
      goto switchD_100beca4c_caseD_fe;
    case (code *)0x74:
switchD_100becca8_caseD_74:
    case (code *)0xb8:
    case (code *)0xf8:
switchD_100becc00_caseD_47:
      FUN_100beeb94();
switchD_100becb38_caseD_becde0:
      FUN_100beeb9c();
      return;
    case (code *)0x75:
      goto switchD_100becca8_caseD_75;
    case (code *)0x7c:
      break;
    case (code *)0x82:
      goto switchD_100becca8_caseD_82;
    case (code *)0x83:
    case (code *)0x97:
    case (code *)0x9f:
    case (code *)0xa7:
    case (code *)0xbb:
    case (code *)0xcf:
    case (code *)0xd7:
    case (code *)0xdf:
    case (code *)0xe7:
      goto switchD_100bece7c_caseD_3c;
    case (code *)0x84:
    case (code *)0x98:
    case (code *)0xa0:
    case (code *)0xa8:
    case (code *)0xbc:
    case (code *)0xd0:
    case (code *)0xd8:
    case (code *)0xe0:
    case (code *)0xe8:
    case (code *)0xfc:
switchD_100becb38_caseD_becd58:
      goto switchD_100becca8_caseD_82;
    case (code *)0x86:
      goto switchD_100becca8_caseD_86;
    case (code *)0x9a:
      goto switchD_100bece7c_caseD_94;
    case (code *)0x9b:
      goto switchD_100becca8_caseD_9b;
    case (code *)0xa3:
    case (code *)0xab:
      goto switchD_100bece7c_caseD_3a;
    case (code *)0xa4:
    case (code *)0xac:
    case (code *)0xdc:
    case (code *)0xec:
      goto switchD_100becca8_caseD_a4;
    case (code *)0xa5:
    case (code *)0xad:
    case (code *)0xdd:
    case (code *)0xe5:
    case (code *)0xed:
      goto switchD_100becff0_caseD_65;
    case (code *)0xaa:
switchD_100becca8_caseD_aa:
switchD_100becb38_caseD_becd90:
      goto switchD_100becc00_caseD_47;
    case (code *)0xb6:
      break;
    case (code *)0xb7:
    case (code *)0xf7:
      goto switchD_100becff0_caseD_0;
    case (code *)0xba:
      goto switchD_100becca8_caseD_ba;
    case (code *)0xbe:
      goto switchD_100becca8_caseD_be;
    case (code *)0xd2:
      goto switchD_100becca8_caseD_d2;
    case (code *)0xd3:
      goto switchD_100becca8_caseD_d3;
    case (code *)0xda:
      goto switchD_100becca8_caseD_da;
    case (code *)0xdb:
    case (code *)0xeb:
      goto switchD_100bece7c_caseD_3a;
    case (code *)0xe2:
      puVar2 = &stack0xffffffffffffffc0;
      ppppuVar9 = &pppuStack_30;
      uVar10 = 0x100becee0;
      pppuStack_30 = (undefined8 ***)&stack0xfffffffffffffff0;
      uStack_28 = uVar11;
      FUN_100beeba4(param_2.unknown);
      pcVar5 = extraout_x8_04;
switchD_100bece7c_caseD_94:
      pcVar5 = (code *)((ulong)pcVar5 & 0xff);
      uVar8 = (ulong)(byte)pcVar5[0x100c9f978];
      UNRECOVERED_JUMPTABLE = (code *)(&UNK_100becefc + uVar8 * 4);
      puVar3 = puVar2;
      switch(pcVar5) {
      case (code *)0x0:
        break;
      default:
        FUN_100beeebc();
      case (code *)0x9a:
      case (code *)0xda:
      case (code *)0xf4:
        break;
      case (code *)0x2:
        FUN_100beee8c();
      case (code *)0x1c:
      case (code *)0x86:
      case (code *)0xbe:
switchD_100becb38_caseD_becf18:
        break;
      case (code *)0x3:
      case (code *)0x15:
        FUN_100beef24();
      case (code *)0x1d:
      case (code *)0xb8:
      case (code *)0xc0:
      case (code *)0xc8:
      case (code *)0xd0:
        break;
      case (code *)0x4:
      case (code *)0x17:
      case (code *)0x48:
      case (code *)0x72:
      case (code *)0x7a:
      case (code *)0x7c:
      case (code *)0xaa:
      case (code *)0xb2:
      case (code *)0xea:
      case (code *)0xf2:
        goto LAB_100becf0c;
      case (code *)0x5:
      case (code *)0x9:
      case (code *)0x16:
      case (code *)0x21:
        FUN_100beec5c();
        break;
      case (code *)0x6:
      case (code *)0x18:
      case (code *)0x19:
      case (code *)0x1f:
        FUN_100beef9c();
      case (code *)0x20:
        goto LAB_100becf38;
      case (code *)0x7:
      case (code *)0x80:
      case (code *)0x88:
      case (code *)0x90:
        goto code_r0x000100becf80;
      case (code *)0xa:
      case (code *)0x22:
        goto code_r0x000100becf3c;
      case (code *)0xb:
      case (code *)0x1b:
        goto switchD_100becca8_caseD_d2;
      case (code *)0xd:
        goto switchD_100becc00_caseD_e1;
      case (code *)0x13:
      case (code *)0x24:
        goto LAB_100becf38;
      case (code *)0x25:
        goto code_r0x000100becf68;
      case (code *)0x26:
      case (code *)0x71:
      case (code *)0xa9:
      case (code *)0xe9:
        goto switchD_100becca8_caseD_86;
      case (code *)0x28:
      case (code *)0x58:
        goto switchD_100bece7c_caseD_34;
      case (code *)0x2a:
      case (code *)0x5a:
      case (code *)0x60:
      case (code *)0x61:
        goto switchD_100bece7c_caseD_8c;
      case (code *)0x2b:
      case (code *)0x38:
      case (code *)0x5b:
      case (code *)0x64:
      case (code *)0x68:
        *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
        *(code **)(puVar2 + -0x18) = unaff_x19;
        *(undefined8 *****)(puVar2 + -0x10) = ppppuVar9;
        *(undefined8 *)(puVar2 + -8) = uVar10;
      case (code *)0x66:
        in_ZR = ((ulong)param_2.unknown & 0xff) == 0;
        pcVar5 = (code *)(ulong)((uint)param_2.unknown & 0xff);
code_r0x000100bed0dc:
        if ((bool)in_ZR) {
          FUN_100beed28();
        }
        else {
code_r0x000100bed0e0:
          in_ZR = (int)pcVar5 == 1;
          pcVar5 = (code *)&DAT_e700000000000000;
code_r0x000100bed0e8:
          UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
switchD_100becb38_caseD_bed108:
          unaff_x19 = pcVar5;
          if (!(bool)in_ZR) {
            unaff_x19 = UNRECOVERED_JUMPTABLE;
          }
        }
        FUN_100beeb94();
code_r0x000100bed11c:
        FUN_100beeb9c(unaff_x19);
        return;
      case (code *)0x2c:
      case (code *)0x5c:
        goto code_r0x000100bed0c4;
      case (code *)0x2d:
      case (code *)0x39:
      case (code *)0x5d:
      case (code *)0x69:
        goto code_r0x000100bed0e0;
      case (code *)0x2e:
        goto switchD_100becff0_caseD_1f;
      case (code *)0x30:
      case (code *)0x33:
        goto code_r0x000100bed080;
      case (code *)0x31:
      case (code *)0x63:
        *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
        *(code **)(puVar2 + -0x18) = unaff_x19;
        *(undefined8 *****)(puVar2 + -0x10) = ppppuVar9;
        *(undefined8 *)(puVar2 + -8) = uVar10;
      case (code *)0x29:
      case (code *)0x2f:
      case (code *)0x59:
      case (code *)0x62:
code_r0x000100bed09c:
switchD_100bece7c_caseD_d4:
switchD_100becff0_caseD_65:
code_r0x000100bed0ac:
switchD_100bece7c_caseD_8c:
code_r0x000100bed0b8:
code_r0x000100bed0bc:
        FUN_100beeb94();
code_r0x000100bed0c4:
        FUN_100beeb9c();
        return;
      case (code *)0x32:
        goto code_r0x000100bed09c;
      case (code *)0x34:
        goto code_r0x000100bed084;
      case (code *)0x35:
      case (code *)0x37:
      case (code *)0x65:
      case (code *)0x67:
        goto switchD_100bece7c_caseD_d4;
      case (code *)0x36:
        goto code_r0x000100bed0ac;
      case (code *)0x40:
        goto switchD_100becff0_caseD_1f;
      case (code *)0x4c:
        goto code_r0x000100becf7c;
      case (code *)0x5e:
switchD_100bece7c_caseD_3c:
      case (code *)0xa2:
      case (code *)0xe2:
      case (code *)0xfc:
switchD_100becff0_caseD_15:
switchD_100becff0_caseD_0:
        FUN_100beeb94();
switchD_100becca8_caseD_a4:
code_r0x000100bed080:
code_r0x000100bed084:
        FUN_100beeb9c();
        return;
      case (code *)0x5f:
        goto code_r0x000100bed0b8;
      case (code *)0x6c:
        goto code_r0x000100becfb0;
      case (code *)0x6d:
      case (code *)0x81:
      case (code *)0x89:
      case (code *)0x91:
      case (code *)0xa5:
      case (code *)0xb9:
      case (code *)0xc1:
      case (code *)0xc9:
      case (code *)0xd1:
        goto switchD_100becff0_caseD_b5;
      case (code *)0x6e:
      case (code *)0x82:
      case (code *)0x8a:
      case (code *)0x92:
      case (code *)0xa6:
      case (code *)0xba:
      case (code *)0xc2:
      case (code *)0xca:
      case (code *)0xd2:
      case (code *)0xe6:
      case (code *)0xfa:
        goto LAB_100becfa0;
      case (code *)0x70:
        goto LAB_100bed1d0;
      case (code *)0x84:
switchD_100becb38_caseD_bed130:
        in_ZR = ((ulong)param_2.unknown & 1) == 0;
switchD_100becb38_caseD_bed138:
        unaff_x19 = (code *)&DAT_e500000000000000;
        if ((bool)in_ZR) {
          unaff_x19 = (code *)&DAT_e400000000000000;
        }
        FUN_100beeb94();
      case (code *)0xbc:
        FUN_100beeb9c(unaff_x19);
        return;
      case (code *)0x85:
        *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
        *(code **)(puVar2 + -0x18) = unaff_x19;
switchD_100bece7c_caseD_cd:
        *(undefined8 *****)(puVar3 + -0x10) = ppppuVar9;
        *(undefined8 *)(puVar3 + -8) = uVar10;
        pcVar5 = (code *)param_2.unknown;
        (*param_3)();
        SVar12.bridgeObject = pcVar5;
        SVar12.str = param_2.unknown;
        Swift::String::hash(param_1,SVar12);
        FUN_100beeb9c(pcVar5);
        return;
      case (code *)0x8c:
        goto code_r0x000100becf5c;
      case (code *)0x8d:
      case (code *)0x95:
        FUN_100beee44();
        goto LAB_100bed28c;
      case (code *)0x8e:
      case (code *)0x96:
      case (code *)0xc6:
      case (code *)0xd6:
        FUN_100bed61c();
        return;
      case (code *)0x8f:
      case (code *)0x97:
      case (code *)0xc7:
      case (code *)0xcf:
      case (code *)0xd7:
      case (code *)0xff:
        goto code_r0x000100bed2f8;
      case (code *)0x94:
        goto code_r0x000100becfdc;
      case (code *)0xa0:
        goto code_r0x000100bed0dc;
      case (code *)0xa1:
      case (code *)0xe1:
        Swift::Hasher::_combine((__uint64)param_1.unknown,param_2);
        FUN_100b56e88();
        return;
      case (code *)0xa4:
        puVar3 = puVar2 + -0x20;
        *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
        *(code **)(puVar2 + -0x18) = unaff_x19;
      case (code *)0xc:
        *(undefined8 *****)(puVar3 + 0x10) = ppppuVar9;
        *(undefined8 *)(puVar3 + 0x18) = uVar10;
code_r0x000100becf5c:
        if (((ulong)param_2.unknown & 0xff) == 0) {
LAB_100becfa0:
          FUN_100beef4c();
        }
        else {
code_r0x000100becf68:
switchD_100becca8_caseD_da:
switchD_100becc00_caseD_e1:
code_r0x000100becf7c:
code_r0x000100becf80:
switchD_100bece7c_caseD_66:
switchD_100bece7c_caseD_aa:
switchD_100becca8_caseD_9b:
        }
        FUN_100beeb94();
code_r0x000100becfb0:
        FUN_100beeb9c();
        return;
      case (code *)0xa8:
        goto code_r0x000100bed0bc;
      case (code *)0xb4:
        goto LAB_100becf0c;
      case (code *)0xbd:
        *(undefined8 *)(puVar2 + -0x20) = unaff_x20;
        *(code **)(puVar2 + -0x18) = unaff_x19;
        *(undefined8 *****)(puVar2 + -0x10) = ppppuVar9;
        *(undefined8 *)(puVar2 + -8) = uVar10;
        pcVar5 = (code *)((ulong)param_2.unknown & 0xff);
        pcVar6 = "SentryTypedSwizzle";
switchD_100becb38_caseD_bed248:
        UNRECOVERED_JUMPTABLE = (code *)&UNK_100bed25c;
        uVar8 = (ulong)(byte)pcVar5[(long)(pcVar6 + 0x991)];
      case (code *)0xe5:
      case (code *)0xf9:
        UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + uVar8 * 4;
switchD_100becff0_caseD_b5:
                    /* WARNING: Could not recover jumptable at 0x000100bed258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      case (code *)0xc4:
        FUN_100beee44();
LAB_100bed1d0:
        FUN_100beeb94();
switchD_100bece7c_caseD_75:
        FUN_100beeb9c();
        return;
      case (code *)0xc5:
      case (code *)0xd5:
LAB_100bed28c:
        FUN_100beeb94();
        FUN_100beeb9c(unaff_x19);
        return;
      case (code *)0xcc:
        goto code_r0x000100bed11c;
      case (code *)0xcd:
      case (code *)0xfd:
        goto code_r0x000100bed0e8;
      case (code *)0xce:
      case (code *)0xfe:
        goto switchD_100becff0_caseD_0;
      case (code *)0xd4:
      case (code *)0xe0:
        goto switchD_100bece7c_caseD_75;
      case (code *)0xe4:
        *(undefined8 *****)(puVar2 + 0x60) = ppppuVar9;
        *(undefined8 *)(puVar2 + 0x68) = uVar10;
        goto code_r0x000100bed2f8;
      case (code *)0xe8:
        FUN_100beefb0(param_2.unknown);
        pcVar5 = extraout_x8_05;
switchD_100becb38_caseD_becfd0:
switchD_100becca8_caseD_d3:
        pcVar5 = (code *)((ulong)pcVar5 & 0xff);
        goto code_r0x000100becfdc;
      case (code *)0xf8:
        switchD_100becff0::caseD_88();
        return;
      }
      goto switchD_100bece7c_caseD_f0;
    case (code *)0xe3:
      FUN_100beed84();
      break;
    case (code *)0xe4:
      goto switchD_100beca4c_caseD_b8;
    case (code *)0xea:
    case (code *)0xf6:
      goto switchD_100bece7c_caseD_66;
    case (code *)0xfa:
      goto switchD_100bece7c_caseD_d4;
    case (code *)0xfb:
      goto switchD_100bece7c_caseD_3e;
    case (code *)0xfe:
switchD_100becca8_caseD_fe:
switchD_100becb38_caseD_becd78:
      goto switchD_100becc00_caseD_47;
    }
switchD_100bece7c_caseD_0:
    FUN_100beeb94();
    FUN_100beeb9c(unaff_x19);
    return;
  case (code *)0xf7:
    goto switchD_100beca4c_caseD_f7;
  case (code *)0xf8:
    break;
  case (code *)0xfe:
    goto switchD_100beca4c_caseD_fe;
  }
switchD_100beca4c_caseD_f8:
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
switchD_100bece7c_caseD_3a:
switchD_100bece7c_caseD_3e:
  goto switchD_100becff0_caseD_0;
switchD_100becff0_caseD_1f:
switchD_100bece7c_caseD_34:
  goto switchD_100becff0_caseD_0;
LAB_100becf38:
code_r0x000100becf3c:
  goto switchD_100bece7c_caseD_f0;
LAB_100becf0c:
  goto switchD_100becca8_caseD_d2;
switchD_100becca8_caseD_82:
  goto switchD_100becc00_caseD_47;
switchD_100beca4c_caseD_58:
  goto switchD_100beca4c_caseD_f8;
code_r0x000100becfdc:
                    /* WARNING: Could not recover jumptable at 0x000100becff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)pcVar5[0x100c9f97f] * 4 + 0x100becff4))();
  return;
code_r0x000100bed2f8:
  FUN_100beeb60();
  FUN_100beeb54(&DAT_e400000000000000);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100beca4c_caseD_fe:
  FUN_100beef04();
  pcVar5 = extraout_x8_02;
switchD_100becb38_caseD_becd38:
  pbVar7 = &BYTE_100c9f968;
switchD_100beca4c_caseD_af:
                    /* WARNING: Could not recover jumptable at 0x000100becd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)pcVar5[(long)pbVar7] * 4 + 0x100becd50))();
  return;
switchD_100becca8_caseD_44:
  if ((bool)in_ZR) {
switchD_100becca8_caseD_4a:
switchD_100becca8_caseD_47:
  }
  else {
switchD_100becca8_caseD_3e:
switchD_100becb38_caseD_bece00:
switchD_100beca4c_caseD_cb:
switchD_100becb38_caseD_bece10:
switchD_100becb38_caseD_bece18:
switchD_100beca4c_caseD_b8:
switchD_100becb38_caseD_bece28:
switchD_100becca8_caseD_46:
  }
switchD_100becca8_caseD_3f:
  FUN_100beeb94();
switchD_100beca4c_caseD_b9:
  FUN_100beeb9c();
  return;
switchD_100becca8_caseD_d2:
switchD_100bece7c_caseD_f0:
  FUN_100beeb94();
switchD_100becca8_caseD_86:
  FUN_100beeb9c();
  return;
}



/* Address: 0x100becac0 | switchD_100beca4c::caseD_1f */

void switchD_100beca4c::caseD_1f(undefined8 param_1,char param_2)

{
  undefined1 uVar1;
  undefined8 extraout_x9;
  undefined8 extraout_x11;
  undefined8 unaff_x19;
  
  uVar1 = param_2 == '\0';
  if ((bool)uVar1) {
    FUN_100beede4("MAYBE_JSON_TRUNCATED");
  }
  else {
    FUN_100beec04(param_2);
    FUN_100beebf0();
    FUN_100beecb0();
    unaff_x19 = extraout_x9;
    if (!(bool)uVar1) {
      unaff_x19 = extraout_x11;
    }
  }
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100becb0c | FUN_100becb0c */

void FUN_100becb0c(Hasher param_1,char *param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  ulong extraout_x8;
  char *pcVar5;
  ulong extraout_x8_00;
  long extraout_x8_01;
  char *extraout_x8_02;
  char *extraout_x8_03;
  char *extraout_x8_04;
  char *extraout_x8_05;
  char *pcVar6;
  byte *pbVar7;
  char *pcVar8;
  undefined *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar10;
  char *unaff_x19;
  char *unaff_x20;
  undefined1 *puVar11;
  undefined8 uVar12;
  String SVar13;
  
  puVar11 = &stack0xfffffffffffffff0;
  uVar12 = 0x100becb20;
  FUN_100beebd4(param_2);
  pcVar5 = (char *)(extraout_x8 & 0xff);
  pbVar7 = &BYTE_100c9f955;
  puVar9 = (undefined *)((ulong)(byte)pcVar5[0x100c9f955] * 4 + 0x100becb3c);
  puVar3 = &stack0xffffffffffffffe0;
  puVar2 = &stack0xffffffffffffffe0;
  puVar4 = &stack0xffffffffffffffe0;
  puVar1 = &stack0xffffffffffffffe0;
  switch(pcVar5) {
  case (char *)0x0:
    goto switchD_100beca4c_caseD_f8;
  default:
LAB_100becb3c:
    unaff_x19 = &DAT_e700000000000000;
  case (char *)0xbd:
  case (char *)0xfd:
    goto LAB_100becb44;
  case (char *)0x2:
  case (char *)0x9:
  case (char *)0x40:
  case (char *)0xdb:
  case (char *)0xe3:
  case (char *)0xeb:
  case (char *)0xf3:
  case (char *)0x20:
  case (char *)0x28:
  case (char *)0x2c:
  case (char *)0x39:
  case (char *)0x44:
LAB_100becb64:
    goto LAB_100becb68;
  case (char *)0x3:
  case (char *)0xa:
  case (char *)0x2d:
  case (char *)0x45:
LAB_100becb7c:
    unaff_x19 = (char *)0x6f69;
  case (char *)0x16:
  case (char *)0x23:
    unaff_x19 = (char *)((ulong)unaff_x19 & 0xffffffff0000ffff | 0x6e0000);
code_r0x000100becb84:
    unaff_x19 = (char *)((ulong)unaff_x19 & 0xffffffffffff | 0xeb00000000000000);
    goto LAB_100becb88;
  case (char *)0x4:
  case (char *)0x1e:
  case (char *)0x25:
LAB_100becb54:
  case (char *)0x3f:
  case (char *)0xa9:
  case (char *)0xe1:
    goto switchD_100beca4c_caseD_88;
  case (char *)0x5:
  case (char *)0xd:
  case (char *)0x1a:
  case (char *)0xaf:
switchD_100beca4c_caseD_52:
    pcVar5 = (char *)0xe900000000000063;
code_r0x000100becba4:
    unaff_x19 = (char *)((ulong)pcVar5 | 8);
  case (char *)0x48:
    goto LAB_100becbac;
  case (char *)0x6:
  case (char *)0x6f:
LAB_100becbbc:
    FUN_100beedb4();
  case (char *)0x13:
  case (char *)0x2a:
  case (char *)0xa3:
  case (char *)0xab:
  case (char *)0xb3:
    goto switchD_100beca4c_caseD_f8;
  case (char *)0x7:
  case (char *)0x2f:
    goto LAB_100becb94;
  case (char *)0xb:
  case (char *)0x11:
  case (char *)0x1f:
  case (char *)0x27:
  case (char *)0x3a:
    goto LAB_100becb44;
  case (char *)0xc:
  case (char *)0xc7:
    goto switchD_100beca4c_caseD_6a;
  case (char *)0xf:
  case (char *)0x22:
  case (char *)0x26:
  case (char *)0x38:
    goto switchD_100beca4c_caseD_88;
  case (char *)0x10:
    goto LAB_100becb70;
  case (char *)0x12:
    goto LAB_100becb88;
  case (char *)0x15:
    goto LAB_100becb68;
  case (char *)0x17:
  case (char *)0x2e:
  case (char *)0x3e:
    goto switchD_100becb38_caseD_becb50;
  case (char *)0x18:
    goto LAB_100becbac;
  case (char *)0x19:
  case (char *)0x30:
    goto LAB_100becbb4;
  case (char *)0x1b:
  case (char *)0x36:
  case (char *)0x47:
    goto LAB_100becb78;
  case (char *)0x1d:
  case (char *)0xd7:
    goto LAB_100becb4c;
  case (char *)0x21:
  case (char *)0x29:
  case (char *)0x3b:
  case (char *)0x3c:
  case (char *)0x42:
    goto LAB_100becb6c;
  case (char *)0x43:
    goto LAB_100becb74;
  case (char *)0x49:
  case (char *)0x94:
  case (char *)0xcc:
    goto LAB_100becb8c;
  case (char *)0x4b:
  case (char *)0x7b:
switchD_100becc00_caseD_c:
    param_2 = (char *)((ulong)param_2 & 0xffffffff | 0x64695f6700000000);
    pbVar7 = &switchD_100becca8::switchdataD_100c9f962;
    pcVar8 = (char *)0x100beccac;
    uVar10 = (ulong)(byte)pcVar5[0x100c9f962];
code_r0x000100becca4:
    pcVar8 = pcVar8 + uVar10 * 4;
    puVar3 = puVar4;
    pcVar6 = (char *)pbVar7;
    switch(pcVar8) {
    case (char *)0x100beccac:
      FUN_100beebd4();
    case "\x17":
      goto switchD_100becca8_caseD_b0;
    case (char *)0x100beccb4:
    case (char *)0x100beccb8:
switchD_100becca8_caseD_10:
      goto switchD_100becca8_caseD_a;
    case (char *)0x100beccbc:
      goto switchD_100becca8_caseD_10;
    case "A\b":
      goto switchD_100becca8_caseD_a;
    case (char *)0x100beccc4:
      goto switchD_100becca8_caseD_11;
    case "\x11":
      goto switchD_100becca8_caseD_32;
    case ">\b":
      FUN_100beedc4();
    case (char *)0x100beccd0:
      goto switchD_100becca8_caseD_33;
    case (char *)0x100beccd4:
      goto switchD_100becca8_caseD_13;
    case (char *)0x100beccd8:
      goto switchD_100becca8_caseD_8;
    case "\f":
      goto switchD_100becca8_caseD_14;
    case (char *)0x100becce0:
      goto switchD_100becca8_caseD_3;
    case (char *)0x100becce4:
      goto switchD_100becca8_caseD_36;
    case (char *)0x100becce8:
      goto switchD_100becca8_caseD_e;
    case "6\b":
      goto switchD_100becca8_caseD_20;
    case (char *)0x100beccf0:
      goto switchD_100beca4c_caseD_9a;
    case (char *)0x100beccf8:
      goto switchD_100becca8_caseD_5;
    case (char *)0x100beccfc:
      goto switchD_100becca8_caseD_3c;
    case (char *)0x100becd00:
      goto switchD_100becca8_caseD_ba;
    case (char *)0x100becd04:
      goto switchD_100becca8_caseD_22;
    case (char *)0x100becd0c:
      goto switchD_100becca8_caseD_0;
    case (char *)0x100becd18:
      goto switchD_100becca8_caseD_3b;
    case (char *)0x100becd1c:
      goto code_r0x000100becd1c;
    case "2\x01":
      goto switchD_100becca8_caseD_c;
    case (char *)0x100becd2c:
      goto switchD_100becca8_caseD_62;
    case (char *)0x100becd30:
      goto switchD_100beca4c_caseD_fe;
    case (char *)0x100becd50:
code_r0x000100becd54:
      goto LAB_100becd5c;
    case "\x1d":
      goto switchD_100becca8_caseD_82;
    case (char *)0x100becd6c:
      goto LAB_100becd70;
    case (char *)0x100becd8c:
      goto switchD_100becc00_caseD_47;
    case (char *)0x100becdb8:
    case "\x06":
switchD_100becca8_caseD_b8:
      goto switchD_100becc00_caseD_47;
    case (char *)0x100becdec:
      in_ZR = ((ulong)param_2 & 0xff) == 0;
switchD_100becca8_caseD_44:
      if (!(bool)in_ZR) {
switchD_100becca8_caseD_3e:
        goto LAB_100becdfc;
      }
switchD_100becca8_caseD_4a:
switchD_100becca8_caseD_47:
      goto switchD_100becca8_caseD_3f;
    case "":
      goto switchD_100becca8_caseD_44;
    case "\x1f\x05":
      goto switchD_100becca8_caseD_3e;
    case (char *)0x100bece20:
      goto switchD_100beca4c_caseD_b8;
    case "\x04":
      goto switchD_100becca8_caseD_46;
    case (char *)0x100bece34:
      goto switchD_100becca8_caseD_4a;
    case (char *)0x100bece38:
      goto switchD_100becca8_caseD_47;
    case "U\a":
      goto switchD_100becca8_caseD_3f;
    case "T\a":
      goto switchD_100beca4c_caseD_b9;
    case (char *)0x100bece50:
      puVar3 = puVar4 + -0x20;
      *(char **)(puVar4 + -0x20) = unaff_x20;
      *(char **)(puVar4 + -0x18) = unaff_x19;
      goto code_r0x000100bece54;
    case (char *)0x100bece5c:
      goto switchD_100becca8_caseD_4c;
    case (char *)0x100bece64:
switchD_100becca8_caseD_40:
      pcVar5 = (char *)((ulong)pcVar5 & 0xff);
switchD_100becca8_caseD_75:
      pcVar6 = "SentryTypedSwizzle";
      puVar4 = puVar3;
switchD_100becca8_caseD_be:
      pbVar7 = (byte *)(pcVar6 + 0x970);
      pcVar8 = "\x0f\b";
switchD_100becca8_caseD_42:
      uVar10 = (ulong)(byte)pcVar5[(long)pbVar7];
      pcVar8 = pcVar8 + uVar10 * 4;
switchD_100bece7c_switchD:
      puVar3 = puVar4;
      switch(pcVar8) {
      case "\x0f\b":
        FUN_100beeebc();
      case "\x0e":
        goto switchD_100bece7c_caseD_a2;
      case ",\b":
        FUN_100beef38();
      case "\f":
        goto switchD_100bece7c_caseD_50;
      case (char *)0x100bece90:
        goto switchD_100bece7c_caseD_2;
      case "\n":
        goto switchD_100bece7c_caseD_13;
      case (char *)0x100bece98:
        goto switchD_100bece7c_caseD_3;
      case "\b":
        goto switchD_100bece7c_caseD_24;
      case "o\a":
        FUN_100beec5c();
      case "\x06":
        goto switchD_100bece7c_caseD_0;
      case "K\a":
        FUN_100beebd4();
        goto LAB_100beceac;
      case (char *)0x100beceb0:
        goto switchD_100bece7c_caseD_6;
      case (char *)0x100beceb8:
        goto switchD_100bece7c_caseD_28;
      case "6\a":
        goto switchD_100bece7c_caseD_0;
      case (char *)0x100becec0:
        goto switchD_100bece7c_caseD_12;
      case (char *)0x100becec4:
        goto switchD_100bece7c_caseD_8;
      case (char *)0x100beced0:
        goto switchD_100bece7c_caseD_2e;
      case (char *)0x100beced4:
        goto switchD_100bece7c_caseD_ac;
      case (char *)0x100beced8:
switchD_100bece7c_caseD_14:
        pcVar5 = param_2;
code_r0x000100becedc:
        uVar12 = 0x100becee0;
        FUN_100beeba4(pcVar5);
        pcVar5 = extraout_x8_03;
switchD_100bece7c_caseD_94:
        pcVar5 = (char *)((ulong)pcVar5 & 0xff);
        pbVar7 = &BYTE_100c9f978;
        goto switchD_100bece7c_caseD_2d;
      case (char *)0x100becee0:
        goto switchD_100bece7c_caseD_94;
      case (char *)0x100beceec:
        goto switchD_100bece7c_caseD_2d;
      case (char *)0x100becef8:
        goto switchD_100bece7c_caseD_15;
      case "\x10":
switchD_100bece7c_caseD_54:
        break;
      case (char *)0x100becf04:
switchD_100bece7c_caseD_f:
        goto LAB_100becf0c;
      case "N\a":
        FUN_100beec5c();
        break;
      case (char *)0x100becf34:
        goto LAB_100becf38;
      case "":
        if (!(bool)in_ZR) {
          in_ZR = (int)pcVar5 == 1;
          pcVar5 = (char *)0x73;
          goto switchD_100becca8_caseD_da;
        }
        FUN_100beef4c();
        goto LAB_100becfa4;
      case (char *)0x100becf8c:
        goto switchD_100bece7c_caseD_66;
      case (char *)0x100becf90:
        goto switchD_100bece7c_caseD_aa;
      case (char *)0x100becfc0:
        uVar12 = 0x100becfc8;
        FUN_100beefb0(param_2);
        pcVar5 = extraout_x8_04;
switchD_100bece7c_caseD_36:
        param_2 = (char *)0x6f62;
switchD_100bece7c_caseD_30:
        param_2 = (char *)((ulong)param_2 & 0xffff | 0x7a69735f79640000);
        goto switchD_100becca8_caseD_d3;
      case (char *)0x100becfc8:
        goto switchD_100bece7c_caseD_36;
      case (char *)0x100becfcc:
        goto switchD_100bece7c_caseD_30;
      case (char *)0x100becff4:
        goto switchD_100bece7c_caseD_d6;
      case "\n":
        goto switchD_100bece7c_caseD_38;
      case (char *)0x100bed008:
        goto switchD_100bece7c_caseD_3c;
      case (char *)0x100bed00c:
        goto switchD_100bece7c_caseD_39;
      case (char *)0x100bed014:
        goto switchD_100bece7c_caseD_31;
      case (char *)0x100bed020:
        goto switchD_100bece7c_caseD_3a;
      case (char *)0x100bed024:
        goto switchD_100bece7c_caseD_3d;
      case "\x12":
        goto switchD_100bece7c_caseD_3e;
      case (char *)0x100bed038:
        goto switchD_100bece7c_caseD_32;
      case (char *)0x100bed03c:
        goto switchD_100bece7c_caseD_67;
      case (char *)0x100bed040:
        goto switchD_100bece7c_caseD_b0;
      case "\f":
        goto switchD_100bece7c_caseD_34;
      case (char *)0x100bed050:
        goto switchD_100bece7c_caseD_33;
      case (char *)0x100bed058:
        goto switchD_100bece7c_caseD_6e;
      case (char *)0x100bed060:
        goto switchD_100bece7c_caseD_a8;
      case (char *)0x100bed064:
        goto switchD_100bece7c_caseD_35;
      case (char *)0x100bed06c:
        goto switchD_100bece7c_caseD_d5;
      case (char *)0x100bed0a0:
        goto switchD_100bece7c_caseD_d4;
      case (char *)0x100bed0b4:
        goto switchD_100bece7c_caseD_8c;
      case (char *)0x100bed0e4:
        goto switchD_100bece7c_caseD_c4;
      case (char *)0x100bed120:
        goto switchD_100bece7c_caseD_78;
      case (char *)0x100bed140:
        goto code_r0x000100bed158;
      case (char *)0x100bed160:
        goto switchD_100bece7c_caseD_dc;
      case (char *)0x100bed170:
        *(undefined1 **)(puVar4 + 0x10) = puVar11;
        *(undefined8 *)(puVar4 + 0x18) = uVar12;
        goto switchD_100becff0_caseD_29;
      case (char *)0x100bed1ac:
        goto switchD_100bece7c_caseD_c5;
      case (char *)0x100bed1d8:
        goto switchD_100bece7c_caseD_ed;
      case "p\x06":
        goto switchD_100bece7c_caseD_75;
      case (char *)0x100bed1f0:
        *(undefined1 **)(puVar4 + 0x10) = puVar11;
        *(undefined8 *)(puVar4 + 0x18) = uVar12;
switchD_100bece7c_caseD_95:
        unaff_x20 = param_2;
        (*param_3)();
        goto switchD_100becff0_caseD_c5;
      case (char *)0x100bed1f4:
        goto switchD_100bece7c_caseD_95;
      case (char *)0x100bed234:
        goto switchD_100bece7c_caseD_a9;
      case (char *)0x100bed250:
        goto switchD_100bece7c_caseD_96;
      case "\x06":
LAB_100bed28c:
        FUN_100beeb94();
        goto switchD_100becff0_caseD_69;
      case (char *)0x100bed27c:
        goto LAB_100bed28c;
      }
      goto switchD_100bece7c_caseD_f0;
    case (char *)0x100bece68:
      goto switchD_100becca8_caseD_75;
    case (char *)0x100bece6c:
      goto switchD_100becca8_caseD_be;
    case (char *)0x100bece74:
      goto switchD_100becca8_caseD_42;
    case (char *)0x100bece7c:
      goto switchD_100bece7c_switchD;
    case "\x0e":
switchD_100bece7c_caseD_a2:
      goto switchD_100bece7c_caseD_0;
    case "\f":
switchD_100bece7c_caseD_50:
      goto switchD_100bece7c_caseD_0;
    case (char *)0x100bece90:
switchD_100bece7c_caseD_2:
      FUN_100beee8c();
switchD_100bece7c_caseD_13:
      goto switchD_100bece7c_caseD_0;
    case (char *)0x100bece98:
      goto switchD_100bece7c_caseD_3;
    case (char *)0x100bececc:
      goto switchD_100becca8_caseD_e2;
    case (char *)0x100becee0:
      goto switchD_100bece7c_caseD_94;
    case "\f":
      goto switchD_100becca8_caseD_d2;
    case "\x14\a":
      goto switchD_100becca8_caseD_86;
    case (char *)0x100becf6c:
switchD_100becca8_caseD_da:
      pcVar5 = (char *)((ulong)pcVar5 | 0xe900000000000000);
code_r0x000100becf7c:
      pcVar8 = &DAT_e800000000000000;
    case (char *)0x100becf8c:
switchD_100bece7c_caseD_66:
switchD_100bece7c_caseD_aa:
      unaff_x19 = pcVar5;
      if (!(bool)in_ZR) {
        unaff_x19 = pcVar8;
      }
switchD_100becca8_caseD_9b:
LAB_100becfa4:
      FUN_100beeb94();
      FUN_100beeb9c(unaff_x19);
      return;
    case "\x02":
      goto switchD_100becca8_caseD_9b;
    case (char *)0x100becfd8:
switchD_100becca8_caseD_d3:
      pcVar5 = (char *)((ulong)pcVar5 & 0xff);
      pbVar7 = &switchD_100becff0::switchdataD_100c9f97f;
      UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar5[0x100c9f97f] * 4 + 0x100becff4);
      pcVar8 = (char *)pbVar7;
      switch(pcVar5) {
      case (char *)0x0:
      case (char *)0x79:
      case (char *)0x81:
      case (char *)0x89:
        goto switchD_100becff0_caseD_0;
      default:
switchD_100bece7c_caseD_d6:
        unaff_x19 = &DAT_e700000000000000;
      case (char *)0x93:
      case (char *)0xd3:
      case (char *)0xed:
      case (char *)0xfb:
        goto switchD_100becff0_caseD_10;
      case (char *)0x2:
      case (char *)0xf:
      case (char *)0x1a:
        goto switchD_100becff0_caseD_2;
      case (char *)0x3:
      case (char *)0x1b:
        unaff_x19 = &DAT_e800000000000000;
switchD_100bece7c_caseD_32:
switchD_100bece7c_caseD_67:
switchD_100bece7c_caseD_b0:
      case (char *)0x1f:
      case (char *)0x6a:
      case (char *)0xa2:
      case (char *)0xe2:
        goto switchD_100bece7c_caseD_34;
      case (char *)0x4:
      case (char *)0x14:
        goto switchD_100bece7c_caseD_3c;
      case (char *)0x5:
        unaff_x19 = (char *)0x6972;
switchD_100bece7c_caseD_33:
        unaff_x19 = (char *)((ulong)unaff_x19 & 0xffffffff0000ffff | 0x676e0000);
      case (char *)0x85:
        unaff_x19 = (char *)((ulong)unaff_x19 & 0xffffffffffff | 0xec00000000000000);
switchD_100bece7c_caseD_6e:
switchD_100bece7c_caseD_a8:
switchD_100bece7c_caseD_35:
        goto switchD_100becff0_caseD_0;
      case (char *)0x6:
switchD_100bece7c_caseD_d5:
        unaff_x19 = (char *)0xe300000000000000;
      case (char *)0x45:
        goto switchD_100becff0_caseD_0;
      case (char *)0xc:
      case (char *)0x1d:
        goto switchD_100bece7c_caseD_3e;
      case (char *)0xe:
        goto switchD_100bece7c_caseD_31;
      case (char *)0x10:
        goto switchD_100becff0_caseD_10;
      case (char *)0x11:
      case (char *)0x12:
      case (char *)0x18:
        goto switchD_100bece7c_caseD_3d;
      case (char *)0x15:
      case (char *)0x7f:
      case (char *)0xb7:
        goto switchD_100becff0_caseD_15;
      case (char *)0x16:
      case (char *)0xb1:
      case (char *)0xb9:
      case (char *)0xc1:
      case (char *)0xc9:
        goto switchD_100becff0_caseD_16;
      case (char *)0x19:
        goto switchD_100becff0_caseD_19;
      case (char *)0x1e:
        goto switchD_100bece7c_caseD_a8;
      case (char *)0x21:
      case (char *)0x51:
        goto code_r0x000100bed158;
      case (char *)0x22:
      case (char *)0x28:
      case (char *)0x52:
      case (char *)0x5b:
        goto switchD_100becff0_caseD_22;
      case (char *)0x23:
      case (char *)0x53:
      case (char *)0x59:
      case (char *)0x5a:
        goto switchD_100bece7c_caseD_c5;
      case (char *)0x24:
      case (char *)0x31:
      case (char *)0x54:
      case (char *)0x5d:
      case (char *)0x61:
      case (char *)0x5f:
        break;
      case (char *)0x25:
      case (char *)0x55:
        FUN_100beee44();
        break;
      case (char *)0x26:
      case (char *)0x32:
      case (char *)0x56:
      case (char *)0x62:
        goto switchD_100bece7c_caseD_ed;
      case (char *)0x27:
        goto switchD_100becff0_caseD_27;
      case (char *)0x29:
      case (char *)0x2c:
switchD_100becff0_caseD_29:
        FUN_100beef04();
        pcVar5 = extraout_x8_05;
      case (char *)0x2d:
        pcVar8 = "SentryTypedSwizzle";
      case (char *)0x2a:
      case (char *)0x5c:
        goto switchD_100becff0_caseD_2a;
      case (char *)0x2b:
switchD_100becff0_caseD_2b:
        FUN_100beed84();
      case (char *)0x2e:
      case (char *)0x30:
      case (char *)0x5e:
      case (char *)0x60:
        break;
      case (char *)0x2f:
        goto switchD_100bece7c_caseD_c5;
      case (char *)0x39:
        goto switchD_100becff0_caseD_27;
      case (char *)0x41:
      case (char *)0x6b:
      case (char *)0x73:
      case (char *)0x75:
      case (char *)0xa3:
      case (char *)0xab:
      case (char *)0xe3:
      case (char *)0xeb:
        goto switchD_100becff0_caseD_41;
      case (char *)0x58:
        goto switchD_100becff0_caseD_58;
      case (char *)0x65:
        goto switchD_100becff0_caseD_65;
      case (char *)0x66:
      case (char *)0x7a:
      case (char *)0x82:
      case (char *)0x8a:
      case (char *)0x9e:
      case (char *)0xb2:
      case (char *)0xba:
      case (char *)0xc2:
      case (char *)0xca:
        goto switchD_100becff0_caseD_66;
      case (char *)0x67:
      case (char *)0x7b:
      case (char *)0x83:
      case (char *)0x8b:
      case (char *)0x9f:
      case (char *)0xb3:
      case (char *)0xbb:
      case (char *)0xc3:
      case (char *)0xcb:
      case (char *)0xdf:
      case (char *)0xf3:
        goto switchD_100bece7c_caseD_d4;
      case (char *)0x69:
switchD_100becff0_caseD_69:
        FUN_100beeb9c();
        return;
      case (char *)0x7d:
        *(char **)(puVar4 + -0x20) = unaff_x20;
        *(char **)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = puVar11;
        *(undefined8 *)(puVar4 + -8) = uVar12;
switchD_100bece7c_caseD_a9:
        pcVar5 = (char *)((ulong)param_2 & 0xff);
        pbVar7 = &BYTE_100c9f991;
        pcVar8 = &UNK_100bed25c;
switchD_100bece7c_caseD_96:
        UNRECOVERED_JUMPTABLE = (code *)(pcVar8 + (ulong)(byte)pcVar5[(long)pbVar7] * 4);
      case (char *)0xb5:
                    /* WARNING: Could not recover jumptable at 0x000100bed258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      case (char *)0x7e:
        FUN_100bed2e8();
        return;
      case (char *)0x86:
      case (char *)0x8e:
        goto switchD_100becff0_caseD_86;
      case (char *)0x87:
      case (char *)0x8f:
      case (char *)0xbf:
      case (char *)0xcf:
        goto code_r0x000100bed3d8;
      case (char *)0x88:
      case (char *)0x90:
      case (char *)0xc0:
      case (char *)0xc8:
      case (char *)0xd0:
      case (char *)0xf8:
        *(char **)(puVar4 + -0x20) = unaff_x20;
        *(char **)(puVar4 + -0x18) = unaff_x19;
        *(undefined1 **)(puVar4 + -0x10) = puVar11;
        *(undefined8 *)(puVar4 + -8) = uVar12;
        FUN_100beebcc();
        FUN_100beeef8();
        FUN_100b6fbb4();
        FUN_100b8a7ec();
        return;
      case (char *)0x8d:
        if (((ulong)param_2 & 0xff) == 0) {
          FUN_100beed28();
          goto LAB_100bed118;
        }
switchD_100bece7c_caseD_c4:
code_r0x000100bed0fc:
      case (char *)0x57:
        goto switchD_100becff0_caseD_9b;
      case (char *)0x99:
        goto switchD_100becff0_caseD_99;
      case (char *)0x9a:
      case (char *)0xda:
        *(undefined1 **)(puVar4 + 0x60) = puVar11;
        *(undefined8 *)(puVar4 + 0x68) = uVar12;
        FUN_100beeb60();
      case (char *)0xf1:
code_r0x000100bed3d8:
        FUN_100beeb54(&DAT_e600000000000000);
        FUN_100b6f838();
        FUN_100b6fbb4();
switchD_100becff0_caseD_dd:
        FUN_100b8a7ec();
        return;
      case (char *)0x9b:
      case (char *)0xdb:
      case (char *)0xf5:
        goto switchD_100becff0_caseD_9b;
      case (char *)0x9d:
        goto switchD_100bece7c_caseD_34;
      case (char *)0xa1:
        FUN_100beece8();
        break;
      case (char *)0xad:
        goto switchD_100bece7c_caseD_38;
      case (char *)0xb6:
        FUN_100beeb54();
        FUN_100b6f838();
        FUN_100b6fbb4();
code_r0x000100bed334:
        FUN_100b8a7ec();
        return;
      case (char *)0xbd:
switchD_100becff0_caseD_bd:
        FUN_100b56e88();
        return;
      case (char *)0xbe:
      case (char *)0xce:
        goto switchD_100becff0_caseD_be;
      case (char *)0xc5:
switchD_100becff0_caseD_c5:
        SVar13.bridgeObject = unaff_x20;
        SVar13.str = param_2;
        Swift::String::hash(param_1,SVar13);
code_r0x000100bed21c:
code_r0x000100bed224:
        FUN_100beeb9c();
        return;
      case (char *)0xc6:
      case (char *)0xf6:
        FUN_100bed1ec();
        return;
      case (char *)0xc7:
      case (char *)0xf7:
        goto switchD_100becff0_caseD_c7;
      case (char *)0xcd:
      case (char *)0xd9:
        FUN_100bed61c();
        return;
      case (char *)0xdd:
        goto switchD_100becff0_caseD_dd;
      case (char *)0xde:
      case (char *)0xf2:
        in_ZR = ((ulong)unaff_x19 & 0xff) == 0;
        goto switchD_100becff0_caseD_66;
      case (char *)0xe1:
        goto switchD_100bece7c_caseD_8c;
      }
      break;
    case "\n":
      goto switchD_100bece7c_caseD_38;
    case (char *)0x100bed008:
switchD_100bece7c_caseD_3c:
      unaff_x19 = &DAT_e600000000000000;
switchD_100bece7c_caseD_39:
switchD_100becff0_caseD_15:
switchD_100bece7c_caseD_31:
switchD_100becff0_caseD_16:
      goto switchD_100becff0_caseD_0;
    case (char *)0x100bed01c:
switchD_100becff0_caseD_2:
      unaff_x19 = &DAT_e700000000000000;
switchD_100bece7c_caseD_3a:
switchD_100bece7c_caseD_3d:
switchD_100becff0_caseD_19:
switchD_100bece7c_caseD_3e:
switchD_100becff0_caseD_0:
      FUN_100beeb94();
switchD_100becca8_caseD_a4:
      FUN_100beeb9c(unaff_x19);
      return;
    case (char *)0x100bed020:
      goto switchD_100bece7c_caseD_3a;
    case (char *)0x100bed060:
      goto switchD_100bece7c_caseD_a8;
    case (char *)0x100bed07c:
      goto switchD_100becca8_caseD_a4;
    case (char *)0x100bed0a0:
switchD_100bece7c_caseD_d4:
switchD_100becff0_caseD_65:
      pcVar5 = &DAT_e600000000000000;
switchD_100bece7c_caseD_8c:
      unaff_x19 = &DAT_e400000000000000;
      if ((bool)in_ZR) {
        unaff_x19 = pcVar5;
      }
code_r0x000100bed0bc:
      FUN_100beeb94();
      FUN_100beeb9c(unaff_x19);
      return;
    case (char *)0x100bed0a8:
      goto switchD_100becff0_caseD_65;
    }
    goto LAB_100bed1d0;
  case (char *)0x4c:
  case (char *)0x52:
  case (char *)0x7c:
  case (char *)0x85:
switchD_100becca8_caseD_33:
switchD_100becca8_caseD_13:
switchD_100becca8_caseD_8:
  case (char *)0x55:
switchD_100becca8_caseD_14:
    break;
  case (char *)0x4d:
  case (char *)0x7d:
  case (char *)0x83:
  case (char *)0x84:
    goto LAB_100beccf4;
  case (char *)0x4e:
  case (char *)0x5b:
  case (char *)0x7e:
  case (char *)0x87:
  case (char *)0x8b:
    break;
  case (char *)0x4f:
  case (char *)0x7f:
    goto switchD_100becca8_caseD_22;
  case (char *)0x50:
  case (char *)0x5c:
  case (char *)0x80:
  case (char *)0x8c:
    goto LAB_100becd20;
  case (char *)0x51:
    goto switchD_100beca4c_caseD_ae;
  case (char *)0x53:
  case (char *)0x56:
switchD_100becca8_caseD_a:
    FUN_100beedc4();
  case (char *)0x57:
switchD_100becca8_caseD_11:
  case (char *)0x54:
  case (char *)0x86:
    goto switchD_100becca8_caseD_32;
  case (char *)0x58:
  case (char *)0x5a:
  case (char *)0x88:
  case (char *)0x8a:
switchD_100becca8_caseD_3:
switchD_100becca8_caseD_36:
switchD_100becca8_caseD_e:
  case (char *)0x59:
switchD_100becca8_caseD_20:
    FUN_100beedc4();
switchD_100beca4c_caseD_9a:
    goto LAB_100beccf4;
  case (char *)0x63:
    unaff_x19 = &DAT_e800000000000000;
    param_2 = (char *)0x6564;
    puVar2 = &stack0xffffffffffffffe0;
    goto switchD_100beca4c_caseD_ae;
  case (char *)0x6b:
  case (char *)0x95:
  case (char *)0x9d:
  case (char *)0x9f:
  case (char *)0xcd:
  case (char *)0xd5:
    goto LAB_100becb48;
  case (char *)0x81:
switchD_100becc00_caseD_f:
  case (char *)0xc5:
LAB_100becc4c:
switchD_100becc00_caseD_0:
    FUN_100beeb94();
    FUN_100beeb9c(unaff_x19);
    return;
  case (char *)0x82:
switchD_100becca8_caseD_5:
    FUN_100beefb0();
  case (char *)0xcb:
switchD_100becca8_caseD_3c:
switchD_100becca8_caseD_ba:
    goto switchD_100becca8_caseD_22;
  case (char *)0x89:
    goto switchD_100becc00_caseD_be;
  case (char *)0x8f:
    goto switchD_100beca4c_caseD_5c;
  case (char *)0x90:
  case (char *)0xa4:
  case (char *)0xac:
  case (char *)0xb4:
  case (char *)0xc8:
  case (char *)0xdc:
  case (char *)0xe4:
  case (char *)0xec:
  case (char *)0xf4:
switchD_100bece7c_caseD_3:
    FUN_100beed84();
switchD_100bece7c_caseD_24:
    goto switchD_100bece7c_caseD_0;
  case (char *)0x91:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xb5:
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xe5:
  case (char *)0xed:
  case (char *)0xf5:
LAB_100becbe0:
    pcVar5 = param_2;
switchD_100beca4c_caseD_53:
    FUN_100beef38(pcVar5);
    pcVar5 = (char *)(extraout_x8_00 & 0xff);
code_r0x000100becbec:
    pbVar7 = (byte *)"SentryTypedSwizzle";
    goto switchD_100beca4c_caseD_5c;
  case (char *)0x93:
    goto switchD_100becc00_caseD_82;
  case (char *)0xa7:
LAB_100becd70:
    goto switchD_100becc00_caseD_47;
  case (char *)0xa8:
    goto LAB_100bece2c;
  case (char *)0xb0:
  case (char *)0xb8:
switchD_100bece7c_caseD_6:
code_r0x000100beceb4:
switchD_100bece7c_caseD_28:
    goto switchD_100bece7c_caseD_0;
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xe9:
  case (char *)0xf9:
LAB_100becf0c:
switchD_100becca8_caseD_d2:
    goto switchD_100bece7c_caseD_f0;
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xea:
  case (char *)0xf2:
  case (char *)0xfa:
LAB_100becf38:
switchD_100bece7c_caseD_f0:
    FUN_100beeb94();
switchD_100becca8_caseD_86:
    FUN_100beeb9c();
    return;
  case (char *)0xb7:
switchD_100becc00_caseD_17:
    unaff_x19 = (char *)0xe900000000000064;
    goto switchD_100becc00_caseD_0;
  case (char *)0xc3:
code_r0x000100becd1c:
    goto LAB_100becd20;
  case (char *)0xc4:
    goto LAB_100becef0;
  case (char *)0xdf:
    goto switchD_100becc00_caseD_47;
  case (char *)0xe0:
    goto switchD_100becca8_caseD_75;
  case (char *)0xe7:
LAB_100becdfc:
  case (char *)0xf7:
switchD_100beca4c_caseD_b8:
switchD_100becc00_caseD_e8:
LAB_100bece2c:
switchD_100becca8_caseD_46:
    goto switchD_100becca8_caseD_3f;
  case (char *)0xe8:
  case (char *)0xf8:
LAB_100beceac:
switchD_100bece7c_caseD_0:
    FUN_100beeb94();
switchD_100bece7c_caseD_12:
switchD_100bece7c_caseD_8:
    FUN_100beeb9c();
    return;
  case (char *)0xef:
LAB_100becd5c:
switchD_100becca8_caseD_82:
switchD_100becc00_caseD_47:
    FUN_100beeb94();
switchD_100becc00_caseD_82:
    FUN_100beeb9c();
    return;
  case (char *)0xf0:
    puVar4 = &stack0xffffffffffffffc0;
switchD_100becca8_caseD_62:
    *(undefined1 **)(puVar4 + 0x10) = puVar11;
    *(undefined8 *)(puVar4 + 0x18) = uVar12;
switchD_100beca4c_caseD_fe:
    FUN_100beef04();
                    /* WARNING: Could not recover jumptable at 0x000100becd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&BYTE_100c9f968)[extraout_x8_01] * 4 + 0x100becd50))();
    return;
  case (char *)0xf1:
switchD_100becca8_caseD_b0:
  }
switchD_100becca8_caseD_0:
  FUN_100beeb94();
switchD_100becc00_caseD_be:
switchD_100becca8_caseD_3b:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_27:
  goto code_r0x000100bed158;
switchD_100bece7c_caseD_c5:
  goto switchD_100becff0_caseD_58;
switchD_100bece7c_caseD_34:
  goto switchD_100becff0_caseD_0;
switchD_100becff0_caseD_10:
switchD_100becff0_caseD_41:
switchD_100bece7c_caseD_38:
  goto switchD_100becff0_caseD_19;
switchD_100bece7c_caseD_15:
  do {
    puVar4 = puVar3;
    puVar2 = puVar3;
    switch(pcVar8) {
    case (char *)0x100becb3c:
      goto LAB_100becb3c;
    case (char *)0x100becb44:
      goto LAB_100becb44;
    case (char *)0x100becb4c:
      goto LAB_100becb4c;
    case (char *)0x100becb54:
      goto LAB_100becb54;
    case "\x1a":
      goto switchD_100beca4c_caseD_88;
    case (char *)0x100becb64:
      goto LAB_100becb64;
    case (char *)0x100becb6c:
      goto LAB_100becb6c;
    case (char *)0x100becb74:
      goto LAB_100becb74;
    case (char *)0x100becb7c:
      goto LAB_100becb7c;
    case (char *)0x100becb84:
      goto code_r0x000100becb84;
    case (char *)0x100becb8c:
      goto LAB_100becb8c;
    case (char *)0x100becb94:
      goto LAB_100becb94;
    case (char *)0x100becb9c:
      goto switchD_100beca4c_caseD_52;
    case (char *)0x100becba4:
      goto code_r0x000100becba4;
    case (char *)0x100becbac:
      goto LAB_100becbac;
    case (char *)0x100becbb4:
      goto LAB_100becbb4;
    case "~\b":
      goto LAB_100becbbc;
    case (char *)0x100becbc4:
      goto switchD_100beca4c_caseD_f8;
    case (char *)0x100becbd4:
      *(char **)(puVar3 + -0x20) = unaff_x20;
      *(char **)(puVar3 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar3 + -0x10) = puVar11;
      *(undefined8 *)(puVar3 + -8) = uVar12;
    case (char *)0x100becbdc:
      goto LAB_100becbe0;
    case (char *)0x100becbe4:
      goto switchD_100beca4c_caseD_53;
    case (char *)0x100becbec:
      goto code_r0x000100becbec;
    case (char *)0x100becbfc:
      goto code_r0x000100becbfc;
    case (char *)0x100becc14:
    case (char *)0x100becc1c:
      goto switchD_100becc00_caseD_17;
    case (char *)0x100becc2c:
      unaff_x19 = (char *)((ulong)pbVar7 | (ulong)pcVar5);
    case (char *)0x100becc3c:
      goto switchD_100becc00_caseD_0;
    case (char *)0x100becc44:
      unaff_x19 = &DAT_e600000000000000;
      goto switchD_100becc00_caseD_f;
    case (char *)0x100becc4c:
      goto LAB_100becc4c;
    case (char *)0x100becc84:
      goto switchD_100beca4c_caseD_ae;
    case (char *)0x100becca4:
      goto code_r0x000100becca4;
    case (char *)0x100beccfc:
      goto switchD_100becca8_caseD_3c;
    case (char *)0x100becd54:
      goto code_r0x000100becd54;
    case (char *)0x100becd5c:
      goto LAB_100becd5c;
    case "\x06":
      goto switchD_100becca8_caseD_b8;
    case (char *)0x100becdcc:
    case (char *)0x100becdd4:
      goto switchD_100becc00_caseD_47;
    case (char *)0x100bece24:
      goto switchD_100becc00_caseD_e8;
    case (char *)0x100bece44:
      goto code_r0x000100bece44;
    case "T\a":
      goto switchD_100beca4c_caseD_b9;
    case (char *)0x100bece54:
      goto code_r0x000100bece54;
    case (char *)0x100bece64:
      goto switchD_100becca8_caseD_40;
    case (char *)0x100bece7c:
      goto switchD_100bece7c_switchD;
    case "\x0e":
      goto switchD_100bece7c_caseD_a2;
    case "\b":
      goto switchD_100bece7c_caseD_24;
    case "\x04":
      goto LAB_100beceac;
    case (char *)0x100beceb4:
      goto code_r0x000100beceb4;
    case "6\a":
      goto switchD_100bece7c_caseD_0;
    case (char *)0x100bececc:
      goto switchD_100becca8_caseD_e2;
    case "2\a":
      goto code_r0x000100becedc;
    case (char *)0x100beceec:
switchD_100bece7c_caseD_2d:
      puVar9 = &UNK_100becefc;
      puVar1 = puVar4;
LAB_100becef0:
      puVar3 = puVar1;
      uVar10 = (ulong)(byte)pcVar5[(long)pbVar7];
      pcVar8 = puVar9 + uVar10 * 4;
      break;
    case (char *)0x100becefc:
      FUN_100beeebc();
      goto switchD_100bece7c_caseD_54;
    case (char *)0x100becf04:
      goto switchD_100bece7c_caseD_f;
    case (char *)0x100becf14:
      FUN_100beee8c();
      goto switchD_100bece7c_caseD_f0;
    case (char *)0x100becf7c:
      goto code_r0x000100becf7c;
    case (char *)0x100becfa4:
      goto LAB_100becfa4;
    case "\n":
      goto switchD_100bece7c_caseD_38;
    case (char *)0x100bed07c:
      goto switchD_100becca8_caseD_a4;
    case (char *)0x100bed0bc:
      goto code_r0x000100bed0bc;
    case (char *)0x100bed0fc:
      goto code_r0x000100bed0fc;
    case (char *)0x100bed11c:
      goto code_r0x000100bed11c;
    case (char *)0x100bed194:
      goto switchD_100becff0_caseD_2b;
    case (char *)0x100bed1f4:
      goto switchD_100bece7c_caseD_95;
    case (char *)0x100bed21c:
      goto code_r0x000100bed21c;
    case "^\x06":
      goto code_r0x000100bed224;
    case (char *)0x100bed2a4:
      Swift::Hasher::_combine((__uint64)param_2,(Hasher)param_2);
      goto switchD_100becff0_caseD_bd;
    case (char *)0x100bed2dc:
      FUN_100bed61c();
      return;
    case (char *)0x100bed334:
      goto code_r0x000100bed334;
    }
  } while( true );
switchD_100beca4c_caseD_ae:
  param_2 = (char *)((ulong)param_2 & 0xffffffff0000ffff | 0x75620000);
  puVar4 = puVar2;
  goto switchD_100becc00_caseD_c;
code_r0x000100bece54:
  *(undefined1 **)(puVar3 + 0x10) = puVar11;
  *(undefined8 *)(puVar3 + 0x18) = uVar12;
  puVar11 = puVar3 + 0x10;
switchD_100becca8_caseD_4c:
  uVar12 = 0x100bece64;
  FUN_100beeba4(param_2);
  pcVar5 = extraout_x8_02;
  goto switchD_100becca8_caseD_40;
switchD_100becca8_caseD_e2:
  puVar4 = puVar3 + -0x20;
  *(char **)(puVar3 + -0x20) = unaff_x20;
  *(char **)(puVar3 + -0x18) = unaff_x19;
switchD_100bece7c_caseD_2e:
  *(undefined1 **)(puVar4 + 0x10) = puVar11;
  *(undefined8 *)(puVar4 + 0x18) = uVar12;
switchD_100bece7c_caseD_ac:
  puVar11 = puVar4 + 0x10;
  goto switchD_100bece7c_caseD_14;
switchD_100becca8_caseD_3f:
  FUN_100beeb94();
code_r0x000100bece44:
  goto switchD_100beca4c_caseD_b9;
switchD_100becca8_caseD_22:
  goto switchD_100becca8_caseD_0;
switchD_100becca8_caseD_32:
  goto switchD_100becca8_caseD_0;
LAB_100beccf4:
  goto switchD_100becca8_caseD_0;
LAB_100becbac:
LAB_100becbb4:
  goto switchD_100beca4c_caseD_f8;
switchD_100beca4c_caseD_88:
  goto switchD_100beca4c_caseD_f8;
LAB_100becb88:
LAB_100becb8c:
switchD_100beca4c_caseD_6a:
LAB_100becb94:
  goto switchD_100beca4c_caseD_f8;
LAB_100becb68:
LAB_100becb6c:
LAB_100becb70:
  unaff_x19 = (char *)0x63;
LAB_100becb74:
  unaff_x19 = (char *)((ulong)unaff_x19 & 0xffffffffffff | 0xe900000000000000);
LAB_100becb78:
  goto switchD_100beca4c_caseD_f8;
LAB_100becb44:
LAB_100becb48:
LAB_100becb4c:
  goto switchD_100becb38_caseD_becb50;
switchD_100becff0_caseD_58:
LAB_100bed1d0:
  FUN_100beeb94();
switchD_100becff0_caseD_99:
switchD_100bece7c_caseD_ed:
switchD_100bece7c_caseD_75:
  FUN_100beeb9c();
  return;
LAB_100becd20:
switchD_100becca8_caseD_c:
  FUN_100bed1ec();
  return;
switchD_100becff0_caseD_66:
  if ((bool)in_ZR) {
    FUN_100beed28();
  }
  else {
switchD_100becff0_caseD_be:
switchD_100becff0_caseD_86:
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
code_r0x000100bed158:
  FUN_100beeb94();
switchD_100bece7c_caseD_dc:
switchD_100becff0_caseD_c7:
  FUN_100beeb9c();
  return;
switchD_100becb38_caseD_becb50:
switchD_100beca4c_caseD_f8:
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
switchD_100becff0_caseD_2a:
  pbVar7 = (byte *)(pcVar8 + 0x98b);
  UNRECOVERED_JUMPTABLE = (code *)0x100bed194;
switchD_100becff0_caseD_22:
                    /* WARNING: Could not recover jumptable at 0x000100bed190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(UNRECOVERED_JUMPTABLE + (ulong)(byte)pcVar5[(long)pbVar7] * 4))();
  return;
switchD_100becff0_caseD_9b:
LAB_100bed118:
  FUN_100beeb94();
code_r0x000100bed11c:
switchD_100bece7c_caseD_78:
  FUN_100beeb9c();
  return;
switchD_100beca4c_caseD_5c:
  pcVar8 = (char *)0x100becc04;
  uVar10 = (ulong)(byte)pcVar5[(long)(pbVar7 + 0x95c)];
code_r0x000100becbfc:
                    /* WARNING: Could not recover jumptable at 0x000100becc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(pcVar8 + uVar10 * 4))();
  return;
switchD_100beca4c_caseD_b9:
  FUN_100beeb9c();
  return;
}



/* Address: 0x100becbd4 | switchD_100beca4c::caseD_5a */

void switchD_100beca4c::caseD_5a(Hasher param_1,code *param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  code *pcVar2;
  ulong extraout_x8;
  code *pcVar3;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  byte *pbVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar5;
  code *unaff_x19;
  code *unaff_x20;
  String SVar6;
  
  puVar1 = &stack0xffffffffffffffe0;
  FUN_100beef38(param_2);
  pcVar3 = (code *)(extraout_x8 & 0xff);
  uVar5 = (ulong)(byte)pcVar3[0x100c9f95c];
  UNRECOVERED_JUMPTABLE_00 = (code *)(uVar5 * 4 + 0x100becc04);
  pcVar2 = param_2;
  switch(pcVar3) {
  case (code *)0x0:
  case (code *)0x28:
    goto switchD_100becc00_caseD_0;
  default:
    FUN_100beebd4();
  case (code *)0xb6:
  case (code *)0xf6:
switchD_100becc00_caseD_0:
    FUN_100beeb94();
switchD_100becc00_caseD_6:
    FUN_100beeb9c();
    return;
  case (code *)0x2:
  case (code *)0x39:
  case (code *)0xd4:
  case (code *)0xdc:
  case (code *)0xe4:
  case (code *)0xec:
    FUN_100beed74();
  case (code *)0x19:
  case (code *)0x21:
  case (code *)0x25:
  case (code *)0x32:
  case (code *)0x3d:
switchD_100beca4c_caseD_ca:
switchD_100beca4c_caseD_57:
switchD_100becc00_caseD_9:
switchD_100beca4c_caseD_f7:
switchD_100becc00_caseD_14:
    goto switchD_100becc00_caseD_0;
  case (code *)0x3:
  case (code *)0x26:
  case (code *)0x3e:
  case (code *)0xf:
  case (code *)0x1c:
switchD_100becc00_caseD_b:
switchD_100becc00_caseD_42:
    goto switchD_100becc00_caseD_0;
  case (code *)0x4:
  case (code *)0xa:
  case (code *)0x18:
  case (code *)0x20:
  case (code *)0x33:
  case (code *)0x64:
  case (code *)0x8e:
  case (code *)0x96:
  case (code *)0x98:
  case (code *)0xc6:
  case (code *)0xce:
switchD_100becc00_caseD_16:
switchD_100beca4c_caseD_56:
switchD_100becc00_caseD_17:
switchD_100beca4c_caseD_55:
switchD_100becc00_caseD_8:
    goto switchD_100becc00_caseD_0;
  case (code *)0x5:
  case (code *)0xc0:
    FUN_100beece8();
    goto switchD_100becc00_caseD_0;
  case (code *)0x6:
  case (code *)0x13:
  case (code *)0xa8:
    goto switchD_100becc00_caseD_6;
  case (code *)0x8:
  case (code *)0x1b:
  case (code *)0x1f:
  case (code *)0x31:
    goto switchD_100becc00_caseD_8;
  case (code *)0x9:
    goto switchD_100becc00_caseD_9;
  case (code *)0xb:
    goto switchD_100becc00_caseD_b;
  case (code *)0xc:
  case (code *)0x23:
  case (code *)0x9c:
  case (code *)0xa4:
  case (code *)0xac:
    goto switchD_100becc00_caseD_c;
  case (code *)0xe:
    goto switchD_100beca4c_caseD_ca;
  case (code *)0x10:
  case (code *)0x27:
  case (code *)0x37:
    goto switchD_100beca4c_caseD_56;
  case (code *)0x11:
    goto switchD_100becc00_caseD_11;
  case (code *)0x12:
  case (code *)0x29:
    goto switchD_100becc00_caseD_12;
  case (code *)0x14:
  case (code *)0x2f:
  case (code *)0x40:
    goto switchD_100becc00_caseD_14;
  case (code *)0x16:
  case (code *)0xd0:
    goto switchD_100becc00_caseD_16;
  case (code *)0x17:
  case (code *)0x1e:
    goto switchD_100becc00_caseD_17;
  case (code *)0x1a:
  case (code *)0x22:
  case (code *)0x34:
  case (code *)0x35:
  case (code *)0x3b:
    goto switchD_100beca4c_caseD_57;
  case (code *)0x38:
  case (code *)0xa2:
  case (code *)0xda:
    goto switchD_100beca4c_caseD_55;
  case (code *)0x3c:
    goto switchD_100beca4c_caseD_f7;
  case (code *)0x41:
switchD_100becc00_caseD_11:
    pcVar3 = param_2;
switchD_100becc00_caseD_12:
switchD_100beca4c_caseD_ae:
switchD_100becc00_caseD_c:
    UNRECOVERED_JUMPTABLE_00 =
         (code *)((ulong)(&switchD_100becca8::switchdataD_100c9f962)[(ulong)pcVar3 & 0xff] * 4 +
                 0x100beccac);
switchD_100becca8_switchD:
                    /* WARNING: Could not recover jumptable at 0x000100becca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case (code *)0x42:
  case (code *)0x8d:
  case (code *)0xc5:
    goto switchD_100becc00_caseD_42;
  case (code *)0x44:
  case (code *)0x74:
    break;
  case (code *)0x45:
  case (code *)0x4b:
  case (code *)0x75:
  case (code *)0x7e:
  case (code *)0x4e:
switchD_100becc00_caseD_51:
    break;
  case (code *)0x46:
  case (code *)0x76:
  case (code *)0x7c:
  case (code *)0x7d:
    goto switchD_100becca8_caseD_b8;
  case (code *)0x47:
  case (code *)0x54:
  case (code *)0x77:
  case (code *)0x80:
  case (code *)0x84:
    break;
  case (code *)0x48:
  case (code *)0x78:
    break;
  case (code *)0x49:
  case (code *)0x55:
  case (code *)0x79:
  case (code *)0x85:
    goto switchD_100becc00_caseD_49;
  case (code *)0x4a:
    goto switchD_100becc00_caseD_4a;
  case (code *)0x4c:
  case (code *)0x4f:
  case (code *)0x50:
switchD_100becb38_caseD_becd90:
    break;
  case (code *)0x4d:
  case (code *)0x7f:
    goto switchD_100becb38_caseD_becd90;
  case (code *)0x51:
  case (code *)0x53:
  case (code *)0x81:
  case (code *)0x83:
    goto switchD_100becc00_caseD_51;
  case (code *)0x52:
switchD_100becca8_caseD_b8:
    break;
  case (code *)0x5c:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (ulong)(byte)pcVar3[0x100c9f95c] * 4;
switchD_100becc00_caseD_4a:
                    /* WARNING: Could not recover jumptable at 0x000100becd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case (code *)0x68:
    goto switchD_100beca4c_caseD_ae;
  case (code *)0x7a:
    goto switchD_100beca4c_caseD_ee;
  case (code *)0x7b:
    FUN_100beed84();
  case (code *)0xc4:
    break;
  case (code *)0x82:
    goto switchD_100becc00_caseD_82;
  case (code *)0x88:
    FUN_100beedc4();
    goto switchD_100becca8_caseD_0;
  case (code *)0x89:
  case (code *)0x9d:
  case (code *)0xa5:
  case (code *)0xad:
  case (code *)0xc1:
  case (code *)0xd5:
  case (code *)0xdd:
  case (code *)0xe5:
  case (code *)0xed:
switchD_100bece7c_caseD_9c:
    if ((bool)in_ZR) {
      FUN_100beef4c();
      goto LAB_100becfa4;
    }
    in_ZR = (int)pcVar3 == 1;
    pcVar3 = (code *)0xe900000000000073;
  case (code *)0xe1:
  case (code *)0xf1:
switchD_100becc00_caseD_a9:
    UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e800000000000000;
switchD_100bece7c_caseD_66:
switchD_100bece7c_caseD_aa:
    unaff_x19 = pcVar3;
    if (!(bool)in_ZR) {
      unaff_x19 = UNRECOVERED_JUMPTABLE_00;
    }
LAB_100becfa4:
    FUN_100beeb94();
    FUN_100beeb9c(unaff_x19);
    return;
  case (code *)0x8a:
  case (code *)0x9e:
  case (code *)0xa6:
  case (code *)0xae:
  case (code *)0xc2:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xe6:
  case (code *)0xee:
    goto switchD_100becca8_switchD;
  case (code *)0x8c:
    goto switchD_100bece7c_caseD_25;
  case (code *)0xa0:
    goto switchD_100becca8_caseD_47;
  case (code *)0xa1:
    goto switchD_100becc00_caseD_a1;
  case (code *)0xa9:
  case (code *)0xb1:
    goto switchD_100becc00_caseD_a9;
  case (code *)0xaa:
  case (code *)0xb2:
  case (code *)0xe2:
  case (code *)0xf2:
    goto switchD_100becc00_caseD_aa;
  case (code *)0xab:
  case (code *)0xb3:
  case (code *)0xe3:
  case (code *)0xeb:
  case (code *)0xf3:
    goto switchD_100becff0_caseD_41;
  case (code *)0xb0:
    FUN_100beedc4();
switchD_100becca8_caseD_0:
    FUN_100beeb94();
switchD_100beca4c_caseD_ee:
switchD_100becc00_caseD_be:
    FUN_100beeb9c();
    return;
  case (code *)0xbc:
    puVar1 = &stack0xffffffffffffffc0;
switchD_100becc00_caseD_49:
    *(undefined1 **)(puVar1 + 0x10) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar1 + 0x18) = 0x100becbe8;
switchD_100becb38_caseD_becdf0:
    if (((ulong)param_2 & 0xff) == 0) {
      unaff_x19 = (code *)&DAT_e400000000000000;
switchD_100becca8_caseD_47:
    }
    else {
      in_ZR = ((uint)param_2 & 0xff) == 1;
      pcVar3 = (code *)0xec00000065646f63;
      UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e600000000000000;
switchD_100becc00_caseD_e8:
      unaff_x19 = pcVar3;
      if (!(bool)in_ZR) {
        unaff_x19 = UNRECOVERED_JUMPTABLE_00;
      }
    }
    FUN_100beeb94();
    FUN_100beeb9c(unaff_x19);
    return;
  case (code *)0xbd:
  case (code *)0xfd:
switchD_100bece7c_caseD_48:
    FUN_100beefb0(param_2);
    pcVar3 = extraout_x8_01;
switchD_100bece7c_caseD_36:
    param_2 = (code *)0x6f62;
switchD_100bece7c_caseD_30:
    pcVar2 = (code *)((ulong)param_2 & 0xffff00000000ffff | 0x735f79640000);
switchD_100becc00_caseD_aa:
    param_2 = (code *)((ulong)pcVar2 & 0xffffffffffff | 0x7a69000000000000);
    pcVar3 = (code *)((ulong)pcVar3 & 0xff);
    pbVar4 = &switchD_100becff0::switchdataD_100c9f97f;
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)(byte)pcVar3[0x100c9f97f] * 4 + 0x100becff4);
    switch(pcVar3) {
    case (code *)0x0:
    case (code *)0x79:
    case (code *)0x81:
    case (code *)0x89:
      goto switchD_100becff0_caseD_0;
    default:
switchD_100bece7c_caseD_d6:
      unaff_x19 = (code *)&DAT_e700000000000000;
    case (code *)0x93:
    case (code *)0xd3:
    case (code *)0xed:
    case (code *)0xfb:
      goto switchD_100becff0_caseD_10;
    case (code *)0x2:
    case (code *)0xf:
    case (code *)0x1a:
      unaff_x19 = (code *)&DAT_e700000000000000;
switchD_100bece7c_caseD_3a:
    case (code *)0x11:
    case (code *)0x12:
    case (code *)0x18:
switchD_100bece7c_caseD_3d:
      goto switchD_100becff0_caseD_19;
    case (code *)0x3:
    case (code *)0x1b:
      unaff_x19 = (code *)&DAT_e800000000000000;
switchD_100bece7c_caseD_32:
switchD_100bece7c_caseD_67:
switchD_100bece7c_caseD_b0:
    case (code *)0x1f:
    case (code *)0x6a:
    case (code *)0xa2:
    case (code *)0xe2:
      goto switchD_100bece7c_caseD_34;
    case (code *)0x4:
    case (code *)0x14:
switchD_100bece7c_caseD_3c:
      unaff_x19 = (code *)&DAT_e600000000000000;
switchD_100bece7c_caseD_39:
    case (code *)0x15:
    case (code *)0x7f:
    case (code *)0xb7:
      goto switchD_100bece7c_caseD_31;
    case (code *)0x5:
      unaff_x19 = (code *)0x6972;
switchD_100bece7c_caseD_33:
      unaff_x19 = (code *)((ulong)unaff_x19 & 0xffffffff0000ffff | 0x676e0000);
    case (code *)0x85:
      unaff_x19 = (code *)((ulong)unaff_x19 & 0xffffffffffff | 0xec00000000000000);
switchD_100bece7c_caseD_6e:
      goto switchD_100bece7c_caseD_a8;
    case (code *)0x6:
switchD_100bece7c_caseD_d5:
      unaff_x19 = (code *)0xe300000000000000;
    case (code *)0x45:
      goto switchD_100becff0_caseD_0;
    case (code *)0xc:
    case (code *)0x1d:
      goto switchD_100bece7c_caseD_3e;
    case (code *)0xe:
      goto switchD_100bece7c_caseD_31;
    case (code *)0x10:
      goto switchD_100becff0_caseD_10;
    case (code *)0x16:
    case (code *)0xb1:
    case (code *)0xb9:
    case (code *)0xc1:
    case (code *)0xc9:
      goto switchD_100becff0_caseD_16;
    case (code *)0x19:
      goto switchD_100becff0_caseD_19;
    case (code *)0x1e:
      goto switchD_100bece7c_caseD_a8;
    case (code *)0x21:
    case (code *)0x51:
      goto code_r0x000100bed158;
    case (code *)0x22:
    case (code *)0x28:
    case (code *)0x52:
    case (code *)0x5b:
      goto switchD_100becff0_caseD_22;
    case (code *)0x23:
    case (code *)0x53:
    case (code *)0x59:
    case (code *)0x5a:
      goto switchD_100bece7c_caseD_c5;
    case (code *)0x24:
    case (code *)0x31:
    case (code *)0x54:
    case (code *)0x5d:
    case (code *)0x61:
    case (code *)0x5f:
      break;
    case (code *)0x25:
    case (code *)0x55:
      FUN_100beee44();
      break;
    case (code *)0x26:
    case (code *)0x32:
    case (code *)0x56:
    case (code *)0x62:
      goto switchD_100bece7c_caseD_ed;
    case (code *)0x27:
      goto switchD_100becff0_caseD_27;
    case (code *)0x29:
    case (code *)0x2c:
switchD_100becff0_caseD_29:
      FUN_100beef04();
      pcVar3 = extraout_x8_02;
    case (code *)0x2d:
      pbVar4 = (byte *)"SentryTypedSwizzle";
    case (code *)0x2a:
    case (code *)0x5c:
      goto switchD_100becff0_caseD_2a;
    case (code *)0x2b:
      FUN_100beed84();
    case (code *)0x2e:
    case (code *)0x30:
    case (code *)0x5e:
    case (code *)0x60:
      break;
    case (code *)0x2f:
      goto switchD_100bece7c_caseD_c5;
    case (code *)0x39:
      goto switchD_100becff0_caseD_27;
    case (code *)0x41:
    case (code *)0x6b:
    case (code *)0x73:
    case (code *)0x75:
    case (code *)0xa3:
    case (code *)0xab:
    case (code *)0xe3:
    case (code *)0xeb:
      goto switchD_100becff0_caseD_41;
    case (code *)0x57:
switchD_100becff0_caseD_57:
    case (code *)0x9b:
    case (code *)0xdb:
    case (code *)0xf5:
LAB_100bed118:
      FUN_100beeb94();
switchD_100bece7c_caseD_78:
      FUN_100beeb9c();
      return;
    case (code *)0x58:
      goto switchD_100becff0_caseD_58;
    case (code *)0x65:
      goto switchD_100becff0_caseD_65;
    case (code *)0x66:
    case (code *)0x7a:
    case (code *)0x82:
    case (code *)0x8a:
    case (code *)0x9e:
    case (code *)0xb2:
    case (code *)0xba:
    case (code *)0xc2:
    case (code *)0xca:
      goto switchD_100becff0_caseD_66;
    case (code *)0x67:
    case (code *)0x7b:
    case (code *)0x83:
    case (code *)0x8b:
    case (code *)0x9f:
    case (code *)0xb3:
    case (code *)0xbb:
    case (code *)0xc3:
    case (code *)0xcb:
    case (code *)0xdf:
    case (code *)0xf3:
switchD_100bece7c_caseD_d4:
      goto switchD_100becff0_caseD_65;
    case (code *)0x69:
switchD_100becff0_caseD_69:
      FUN_100beeb9c();
      return;
    case (code *)0x7d:
switchD_100bece7c_caseD_a9:
      pcVar3 = (code *)((ulong)param_2 & 0xff);
      pbVar4 = &BYTE_100c9f991;
      UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_100bed25c;
switchD_100bece7c_caseD_96:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (ulong)(byte)pcVar3[(long)pbVar4] * 4;
    case (code *)0xb5:
                    /* WARNING: Could not recover jumptable at 0x000100bed258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    case (code *)0x7e:
      FUN_100bed2e8();
      return;
    case (code *)0x86:
    case (code *)0x8e:
      goto switchD_100becff0_caseD_86;
    case (code *)0x87:
    case (code *)0x8f:
    case (code *)0xbf:
    case (code *)0xcf:
      goto code_r0x000100bed3d8;
    case (code *)0x88:
    case (code *)0x90:
    case (code *)0xc0:
    case (code *)0xc8:
    case (code *)0xd0:
    case (code *)0xf8:
      FUN_100beebcc();
      FUN_100beeef8();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case (code *)0x8d:
      if (((ulong)pcVar2 & 0xff) != 0) {
switchD_100bece7c_caseD_c4:
        goto switchD_100becff0_caseD_57;
      }
      FUN_100beed28();
      goto LAB_100bed118;
    case (code *)0x99:
      goto switchD_100becff0_caseD_99;
    case (code *)0x9a:
    case (code *)0xda:
      FUN_100beeb60();
    case (code *)0xf1:
code_r0x000100bed3d8:
      FUN_100beeb54(&DAT_e600000000000000);
      FUN_100b6f838();
      FUN_100b6fbb4();
switchD_100becff0_caseD_dd:
      FUN_100b8a7ec();
      return;
    case (code *)0x9d:
      goto switchD_100bece7c_caseD_34;
    case (code *)0xa1:
      FUN_100beece8();
      break;
    case (code *)0xad:
      goto switchD_100bece7c_caseD_38;
    case (code *)0xb6:
      FUN_100beeb54();
      FUN_100b6f838();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case (code *)0xbd:
      FUN_100b56e88();
      return;
    case (code *)0xbe:
    case (code *)0xce:
      goto switchD_100becff0_caseD_be;
    case (code *)0xc5:
switchD_100becff0_caseD_c5:
      SVar6.bridgeObject = unaff_x20;
      SVar6.str = (char *)param_2;
      Swift::String::hash(param_1,SVar6);
      FUN_100beeb9c(unaff_x20);
      return;
    case (code *)0xc6:
    case (code *)0xf6:
      FUN_100bed1ec();
      return;
    case (code *)0xc7:
    case (code *)0xf7:
      goto switchD_100becff0_caseD_c7;
    case (code *)0xcd:
    case (code *)0xd9:
      FUN_100bed61c();
      return;
    case (code *)0xdd:
      goto switchD_100becff0_caseD_dd;
    case (code *)0xde:
    case (code *)0xf2:
      in_ZR = ((ulong)unaff_x19 & 0xff) == 0;
      goto switchD_100becff0_caseD_66;
    case (code *)0xe1:
      goto switchD_100bece7c_caseD_8c;
    }
    goto LAB_100bed1d0;
  case (code *)0xbe:
  case (code *)0xfe:
    goto switchD_100becc00_caseD_be;
  case (code *)0xd8:
    pbVar4 = &switchD_100bece7c::switchdataD_100c9f970;
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)(byte)pcVar3[0x100c9f970] * 4 + 0x100bece80);
    switch(pcVar3) {
    case (code *)0x0:
    case (code *)0x1b:
    case (code *)0x2c:
      break;
    default:
      FUN_100beeebc();
    case (code *)0xa2:
    case (code *)0xe2:
    case (code *)0xfc:
      break;
    case (code *)0x2:
    case (code *)0xbc:
      FUN_100beee8c();
    case (code *)0x13:
    case (code *)0x23:
      break;
    case (code *)0x3:
    case (code *)0xa:
      FUN_100beed84();
    case (code *)0x24:
    case (code *)0x8e:
    case (code *)0xc6:
      break;
    case (code *)0x4:
    case (code *)0xc:
    case (code *)0x1f:
      FUN_100beef38();
    case (code *)0x50:
    case (code *)0x7a:
    case (code *)0x82:
    case (code *)0x84:
    case (code *)0xb2:
    case (code *)0xba:
    case (code *)0xf2:
    case (code *)0xfa:
      break;
    case (code *)0x5:
    case (code *)0xd:
    case (code *)0x11:
    case (code *)0x1e:
    case (code *)0x29:
      FUN_100beebd4();
      break;
    case (code *)0x6:
    case (code *)0xe:
    case (code *)0x20:
    case (code *)0x21:
    case (code *)0x27:
    case (code *)0x28:
      break;
    case (code *)0x7:
    case (code *)0xb:
    case (code *)0x1d:
      FUN_100beec5c();
    case (code *)0x25:
    case (code *)0xc0:
    case (code *)0xc8:
    case (code *)0xd0:
    case (code *)0xd8:
switchD_100bece7c_caseD_25:
      break;
    case (code *)0x8:
      goto switchD_100bece7c_caseD_8;
    case (code *)0xf:
    case (code *)0x88:
    case (code *)0x90:
    case (code *)0x98:
      unaff_x19 = (code *)&DAT_e400000000000000;
    case (code *)0xf0:
switchD_100bece7c_caseD_f0:
      FUN_100beeb94();
      FUN_100beeb9c(unaff_x19);
      return;
    case (code *)0x12:
    case (code *)0x2a:
      goto switchD_100bece7c_caseD_12;
    case (code *)0x14:
      goto switchD_100bece7c_caseD_14;
    case (code *)0x15:
      goto switchD_100bece7c_caseD_15;
    case (code *)0x2d:
      goto switchD_100bece7c_caseD_2d;
    case (code *)0x2e:
    case (code *)0x79:
    case (code *)0xb1:
    case (code *)0xf1:
    case (code *)0xac:
switchD_100bece7c_caseD_14:
      FUN_100beeba4(param_2);
      pcVar3 = extraout_x8_00;
switchD_100bece7c_caseD_94:
      pcVar3 = (code *)((ulong)pcVar3 & 0xff);
switchD_100becc00_caseD_f0:
      pbVar4 = &BYTE_100c9f978;
switchD_100bece7c_caseD_2d:
      UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_100becefc;
      uVar5 = (ulong)(byte)pcVar3[(long)pbVar4];
switchD_100becc00_caseD_a1:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + uVar5 * 4;
switchD_100bece7c_caseD_15:
                    /* WARNING: Could not recover jumptable at 0x000100becef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    case (code *)0x30:
    case (code *)0x60:
      goto switchD_100bece7c_caseD_30;
    case (code *)0x31:
    case (code *)0x37:
    case (code *)0x61:
    case (code *)0x6a:
      goto switchD_100bece7c_caseD_31;
    case (code *)0x32:
    case (code *)0x62:
    case (code *)0x68:
    case (code *)0x69:
      goto switchD_100bece7c_caseD_32;
    case (code *)0x33:
    case (code *)0x40:
    case (code *)0x63:
    case (code *)0x6c:
    case (code *)0x70:
      goto switchD_100bece7c_caseD_33;
    case (code *)0x34:
    case (code *)0x64:
      goto switchD_100bece7c_caseD_34;
    case (code *)0x35:
    case (code *)0x41:
    case (code *)0x65:
    case (code *)0x71:
      goto switchD_100bece7c_caseD_35;
    case (code *)0x36:
      goto switchD_100bece7c_caseD_36;
    case (code *)0x38:
    case (code *)0x3b:
      goto switchD_100bece7c_caseD_38;
    case (code *)0x39:
    case (code *)0x6b:
      goto switchD_100bece7c_caseD_39;
    case (code *)0x3a:
      goto switchD_100bece7c_caseD_3a;
    case (code *)0x3c:
      goto switchD_100bece7c_caseD_3c;
    case (code *)0x3d:
    case (code *)0x3f:
    case (code *)0x6d:
    case (code *)0x6f:
      goto switchD_100bece7c_caseD_3d;
    case (code *)0x3e:
      goto switchD_100bece7c_caseD_3e;
    case (code *)0x48:
      goto switchD_100bece7c_caseD_48;
    case (code *)0x54:
      goto switchD_100bece7c_caseD_f0;
    case (code *)0x66:
      goto switchD_100bece7c_caseD_66;
    case (code *)0x67:
      goto switchD_100bece7c_caseD_67;
    case (code *)0x6e:
      goto switchD_100bece7c_caseD_6e;
    case (code *)0x74:
      goto switchD_100bece7c_caseD_74;
    case (code *)0x75:
    case (code *)0x89:
    case (code *)0x91:
    case (code *)0x99:
    case (code *)0xad:
    case (code *)0xc1:
    case (code *)0xc9:
    case (code *)0xd1:
    case (code *)0xd9:
      goto switchD_100bece7c_caseD_75;
    case (code *)0x76:
    case (code *)0x8a:
    case (code *)0x92:
    case (code *)0x9a:
    case (code *)0xae:
    case (code *)0xc2:
    case (code *)0xca:
    case (code *)0xd2:
    case (code *)0xda:
    case (code *)0xee:
      FUN_100beec5c();
      goto switchD_100bece7c_caseD_f0;
    case (code *)0x78:
      goto switchD_100bece7c_caseD_78;
    case (code *)0x8c:
      goto switchD_100bece7c_caseD_8c;
    case (code *)0x8d:
      goto switchD_100becff0_caseD_29;
    case (code *)0x94:
      goto switchD_100bece7c_caseD_94;
    case (code *)0x95:
    case (code *)0x9d:
      goto switchD_100bece7c_caseD_95;
    case (code *)0x96:
    case (code *)0x9e:
    case (code *)0xce:
    case (code *)0xde:
      goto switchD_100bece7c_caseD_96;
    case (code *)0x97:
    case (code *)0x9f:
    case (code *)0xcf:
    case (code *)0xd7:
    case (code *)0xdf:
      goto LAB_100bed28c;
    case (code *)0x9c:
      goto switchD_100bece7c_caseD_9c;
    case (code *)0xa8:
      goto switchD_100bece7c_caseD_a8;
    case (code *)0xa9:
    case (code *)0xe9:
      goto switchD_100bece7c_caseD_a9;
    case (code *)0xaa:
    case (code *)0xea:
      goto switchD_100bece7c_caseD_aa;
    case (code *)0xb0:
      goto switchD_100bece7c_caseD_b0;
    case (code *)0xc4:
      goto switchD_100bece7c_caseD_c4;
    case (code *)0xc5:
      goto switchD_100bece7c_caseD_c5;
    case (code *)0xcc:
      goto code_r0x000100bed158;
    case (code *)0xcd:
    case (code *)0xdd:
switchD_100bece7c_caseD_95:
      unaff_x20 = param_2;
      (*param_3)();
      goto switchD_100becff0_caseD_c5;
    case (code *)0xd4:
      goto switchD_100bece7c_caseD_d4;
    case (code *)0xd5:
      goto switchD_100bece7c_caseD_d5;
    case (code *)0xd6:
      goto switchD_100bece7c_caseD_d6;
    case (code *)0xdc:
    case (code *)0xe8:
      goto switchD_100bece7c_caseD_dc;
    case (code *)0xec:
LAB_100bed28c:
      FUN_100beeb94();
      goto switchD_100becff0_caseD_69;
    case (code *)0xed:
      goto switchD_100bece7c_caseD_ed;
    }
    FUN_100beeb94();
switchD_100bece7c_caseD_12:
switchD_100bece7c_caseD_8:
    FUN_100beeb9c();
    return;
  case (code *)0xd9:
switchD_100bece7c_caseD_74:
    goto switchD_100bece7c_caseD_f0;
  case (code *)0xe0:
    goto switchD_100bece7c_caseD_8;
  case (code *)0xe8:
    goto switchD_100becc00_caseD_e8;
  case (code *)0xe9:
    goto switchD_100becb38_caseD_becdf0;
  case (code *)0xea:
    break;
  case (code *)0xf0:
  case (code *)0xfc:
    goto switchD_100becc00_caseD_f0;
  }
  FUN_100beeb94();
switchD_100becc00_caseD_82:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_27:
  goto code_r0x000100bed158;
switchD_100bece7c_caseD_c5:
switchD_100becff0_caseD_58:
LAB_100bed1d0:
  FUN_100beeb94();
switchD_100becff0_caseD_99:
  goto switchD_100bece7c_caseD_ed;
switchD_100bece7c_caseD_a8:
switchD_100bece7c_caseD_35:
  goto switchD_100becff0_caseD_0;
switchD_100bece7c_caseD_31:
switchD_100becff0_caseD_16:
  goto switchD_100becff0_caseD_0;
switchD_100bece7c_caseD_34:
  goto switchD_100becff0_caseD_0;
switchD_100becff0_caseD_10:
switchD_100becff0_caseD_41:
  goto switchD_100bece7c_caseD_38;
switchD_100bece7c_caseD_ed:
switchD_100bece7c_caseD_75:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_65:
  pcVar3 = (code *)&DAT_e600000000000000;
switchD_100bece7c_caseD_8c:
  UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e400000000000000;
  if ((bool)in_ZR) {
    UNRECOVERED_JUMPTABLE_00 = pcVar3;
  }
  FUN_100beeb94();
  FUN_100beeb9c(UNRECOVERED_JUMPTABLE_00);
  return;
switchD_100becff0_caseD_2a:
  pbVar4 = pbVar4 + 0x98b;
  UNRECOVERED_JUMPTABLE_00 = (code *)0x100bed194;
switchD_100becff0_caseD_22:
                    /* WARNING: Could not recover jumptable at 0x000100bed190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(UNRECOVERED_JUMPTABLE_00 + (ulong)(byte)pcVar3[(long)pbVar4] * 4))();
  return;
code_r0x000100bed158:
  FUN_100beeb94();
switchD_100bece7c_caseD_dc:
switchD_100becff0_caseD_c7:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_66:
  if ((bool)in_ZR) {
    FUN_100beed28();
  }
  else {
switchD_100becff0_caseD_be:
switchD_100becff0_caseD_86:
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100bece7c_caseD_38:
switchD_100becff0_caseD_19:
switchD_100bece7c_caseD_3e:
switchD_100becff0_caseD_0:
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100becc6c | FUN_100becc6c */

void FUN_100becc6c(Hasher param_1,ulong param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  code *pcVar3;
  Hasher HVar4;
  code *pcVar5;
  long extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  code *extraout_x8_03;
  byte *pbVar6;
  code *UNRECOVERED_JUMPTABLE_00;
  ulong uVar7;
  code *pcVar8;
  Hasher unaff_x20;
  undefined8 ****ppppuVar9;
  undefined8 unaff_x30;
  String SVar10;
  long alStack_50 [2];
  undefined8 ***pppuStack_30;
  
  puVar1 = &stack0xffffffffffffffe0;
  ppppuVar9 = (undefined8 ****)&stack0xfffffffffffffff0;
  pcVar8 = (code *)&DAT_e800000000000000;
  HVar4.unknown = &DAT_64695f6775626564;
  pcVar5 = (code *)(param_2 & 0xff);
  pbVar6 = &switchD_100becca8::switchdataD_100c9f962;
  uVar7 = (ulong)(byte)pcVar5[0x100c9f962];
  UNRECOVERED_JUMPTABLE_00 = (code *)(uVar7 * 4 + 0x100beccac);
  puVar2 = &stack0xffffffffffffffe0;
  pcVar3 = (code *)param_1.unknown;
  switch(pcVar5) {
  case (code *)0x0:
  case (code *)0xd:
  case (code *)0xa2:
    goto switchD_100becca8_caseD_0;
  default:
    FUN_100beebd4();
  case (code *)0xb0:
  case (code *)0xf0:
switchD_100becca8_caseD_0:
    param_1.unknown = pcVar8;
    FUN_100beeb94();
switchD_100becca8_caseD_3b:
    FUN_100beeb9c(param_1.unknown);
    return;
  case (code *)0x2:
  case (code *)0x15:
  case (code *)0x19:
  case (code *)0x2b:
    FUN_100beedc4();
  case (code *)0x33:
  case (code *)0xce:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xe6:
switchD_100becca8_caseD_13:
    pcVar8 = (code *)0x657a;
switchD_100becca8_caseD_8:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0xea00000000000000);
switchD_100becca8_caseD_14:
    goto switchD_100becca8_caseD_0;
  case (code *)0x3:
    pcVar5 = (code *)0x657a;
  case (code *)0x36:
    pcVar5 = (code *)((ulong)pcVar5 | 0xea00000000000000);
switchD_100becca8_caseD_e:
    pcVar8 = pcVar5 + 0xcea;
switchD_100becca8_caseD_20:
    FUN_100beedc4();
switchD_100beca4c_caseD_9a:
    goto switchD_100becca8_caseD_0;
  case (code *)0x4:
  case (code *)0x12:
  case (code *)0x1a:
  case (code *)0x2d:
    pcVar8 = (code *)0x6461;
  case (code *)0x5e:
  case (code *)0x88:
  case (code *)0x90:
  case (code *)0x92:
  case (code *)0xc0:
  case (code *)0xc8:
    pcVar8 = (code *)((ulong)pcVar8 | 0x72640000);
switchD_100becca8_caseD_10:
    pcVar8 = (code *)((ulong)pcVar8 & 0xffffffffffff | 0xec00000000000000);
switchD_100becca8_caseD_a:
    FUN_100beedc4();
switchD_100becca8_caseD_11:
switchD_100becca8_caseD_32:
    goto switchD_100becca8_caseD_0;
  case (code *)0x5:
    FUN_100beefb0();
  case (code *)0x3c:
  case (code *)0x87:
  case (code *)0xbf:
  case (code *)0xff:
switchD_100becca8_caseD_ba:
switchD_100becca8_caseD_22:
    goto switchD_100becca8_caseD_0;
  case (code *)0x6:
  case (code *)0x1d:
  case (code *)0x96:
  case (code *)0x9e:
  case (code *)0xa6:
    goto switchD_100beca4c_caseD_fe;
  case (code *)0x8:
    goto switchD_100becca8_caseD_8;
  case (code *)0x9:
  case (code *)0x16:
    goto switchD_100beca4c_caseD_9a;
  case (code *)0xa:
  case (code *)0x21:
  case (code *)0x31:
    goto switchD_100becca8_caseD_a;
  case (code *)0xb:
    param_3 = FUN_100b94b98;
  case (code *)0xc:
  case (code *)0x23:
    FUN_100bed1ec(param_1.unknown,&DAT_64695f6775626564,param_3);
    return;
  case (code *)0xe:
  case (code *)0x29:
  case (code *)0x3a:
    goto switchD_100becca8_caseD_e;
  case (code *)0x10:
  case (code *)0xca:
    goto switchD_100becca8_caseD_10;
  case (code *)0x11:
  case (code *)0x18:
    goto switchD_100becca8_caseD_11;
  case (code *)0x13:
  case (code *)0x1b:
  case (code *)0x1f:
  case (code *)0x2c:
  case (code *)0x37:
    goto switchD_100becca8_caseD_13;
  case (code *)0x14:
  case (code *)0x1c:
  case (code *)0x2e:
  case (code *)0x2f:
  case (code *)0x35:
    goto switchD_100becca8_caseD_14;
  case (code *)0x20:
  case (code *)0x38:
    goto switchD_100becca8_caseD_20;
  case (code *)0x22:
    goto switchD_100becca8_caseD_22;
  case (code *)0x32:
  case (code *)0x9c:
  case (code *)0xd4:
    goto switchD_100becca8_caseD_32;
  case (code *)0x3b:
    goto switchD_100becca8_caseD_3b;
  case (code *)0x3e:
  case (code *)0x6e:
    goto switchD_100becca8_caseD_3e;
  case (code *)0x3f:
  case (code *)0x45:
  case (code *)0x6f:
  case (code *)0x78:
    goto switchD_100becca8_caseD_3f;
  case (code *)0x40:
  case (code *)0x70:
  case (code *)0x76:
  case (code *)0x77:
    goto switchD_100becca8_caseD_40;
  case (code *)0x41:
  case (code *)0x4e:
  case (code *)0x71:
  case (code *)0x7a:
  case (code *)0x7e:
    goto switchD_100bece7c_switchD;
  case (code *)0x42:
  case (code *)0x72:
    goto switchD_100becca8_caseD_42;
  case (code *)0x43:
  case (code *)0x4f:
  case (code *)0x73:
  case (code *)0x7f:
    FUN_100beee8c();
    break;
  case (code *)0x44:
    goto switchD_100becca8_caseD_44;
  case (code *)0x46:
  case (code *)0x49:
    goto switchD_100becca8_caseD_46;
  case (code *)0x47:
  case (code *)0x79:
    goto switchD_100becca8_caseD_47;
  case (code *)0x48:
    goto switchD_100beca4c_caseD_b9;
  case (code *)0x4a:
    goto switchD_100becca8_caseD_4a;
  case (code *)0x4b:
  case (code *)0x4d:
  case (code *)0x7b:
  case (code *)0x7d:
    pppuStack_30 = ppppuVar9;
  case (code *)0x4c:
    FUN_100beeba4(&DAT_64695f6775626564);
    pcVar5 = extraout_x8_00;
switchD_100becca8_caseD_40:
    pcVar5 = (code *)((ulong)pcVar5 & 0xff);
switchD_100becca8_caseD_75:
    pbVar6 = (byte *)"SentryTypedSwizzle";
switchD_100becca8_caseD_be:
    pbVar6 = pbVar6 + 0x970;
    UNRECOVERED_JUMPTABLE_00 = (code *)0x100bece80;
switchD_100becca8_caseD_42:
    UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (ulong)pbVar6[(long)pcVar5] * 4;
switchD_100bece7c_switchD:
                    /* WARNING: Could not recover jumptable at 0x000100bece7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case (code *)0x56:
    in_ZR = false;
    pcVar5 = (code *)0x64;
    goto switchD_100becca8_caseD_44;
  case (code *)0x62:
    goto switchD_100beca4c_caseD_fe;
  case (code *)0x74:
    HVar4.unknown = (byte *)0x61746564;
  case (code *)0xb8:
  case (code *)0xf8:
switchD_100becc00_caseD_47:
    FUN_100beeb94(param_1.unknown,HVar4.unknown);
    FUN_100beeb9c(pcVar8);
    return;
  case (code *)0x75:
    goto switchD_100becca8_caseD_75;
  case (code *)0x7c:
    break;
  case (code *)0x82:
    goto switchD_100becca8_caseD_82;
  case (code *)0x83:
  case (code *)0x97:
  case (code *)0x9f:
  case (code *)0xa7:
  case (code *)0xbb:
  case (code *)0xcf:
  case (code *)0xd7:
  case (code *)0xdf:
  case (code *)0xe7:
    goto switchD_100bece7c_caseD_3c;
  case (code *)0x84:
  case (code *)0x98:
  case (code *)0xa0:
  case (code *)0xa8:
  case (code *)0xbc:
  case (code *)0xd0:
  case (code *)0xd8:
  case (code *)0xe0:
  case (code *)0xe8:
  case (code *)0xfc:
    pcVar8 = (code *)&DAT_e500000000000000;
    HVar4.unknown = (byte *)0x6c69616d65;
    goto switchD_100becca8_caseD_82;
  case (code *)0x86:
    goto switchD_100becca8_caseD_86;
  case (code *)0x9a:
    goto switchD_100bece7c_caseD_94;
  case (code *)0x9b:
    goto switchD_100becca8_caseD_9b;
  case (code *)0xa3:
  case (code *)0xab:
    goto switchD_100bece7c_caseD_3a;
  case (code *)0xa4:
  case (code *)0xac:
  case (code *)0xdc:
  case (code *)0xec:
    goto switchD_100becca8_caseD_a4;
  case (code *)0xa5:
  case (code *)0xad:
  case (code *)0xdd:
  case (code *)0xe5:
  case (code *)0xed:
    goto switchD_100becff0_caseD_65;
  case (code *)0xaa:
    HVar4.unknown = (byte *)0x656d5f6775626564;
    goto switchD_100becc00_caseD_47;
  case (code *)0xb6:
    break;
  case (code *)0xb7:
  case (code *)0xf7:
    goto switchD_100bece7c_caseD_a8;
  case (code *)0xba:
    goto switchD_100becca8_caseD_ba;
  case (code *)0xbe:
    goto switchD_100becca8_caseD_be;
  case (code *)0xd2:
    goto switchD_100becca8_caseD_d2;
  case (code *)0xd3:
    goto switchD_100becca8_caseD_d3;
  case (code *)0xda:
    goto switchD_100becca8_caseD_da;
  case (code *)0xdb:
  case (code *)0xeb:
    goto switchD_100becff0_caseD_2;
  case (code *)0xe2:
    puVar1 = &stack0xffffffffffffffc0;
    unaff_x30 = 0x100becee0;
    pppuStack_30 = ppppuVar9;
    FUN_100beeba4(&DAT_64695f6775626564);
    pcVar5 = extraout_x8_01;
    ppppuVar9 = &pppuStack_30;
switchD_100bece7c_caseD_94:
    pcVar5 = (code *)((ulong)pcVar5 & 0xff);
    uVar7 = (ulong)(byte)pcVar5[0x100c9f978];
    UNRECOVERED_JUMPTABLE_00 = (code *)(&UNK_100becefc + uVar7 * 4);
    puVar2 = puVar1;
    switch(pcVar5) {
    case (code *)0x0:
      break;
    default:
      FUN_100beeebc();
    case (code *)0x9a:
    case (code *)0xda:
    case (code *)0xf4:
      break;
    case (code *)0x2:
      FUN_100beee8c();
    case (code *)0x1c:
    case (code *)0x86:
    case (code *)0xbe:
      break;
    case (code *)0x3:
    case (code *)0x15:
      FUN_100beef24();
    case (code *)0x1d:
    case (code *)0xb8:
    case (code *)0xc0:
    case (code *)0xc8:
    case (code *)0xd0:
      break;
    case (code *)0x4:
    case (code *)0x17:
    case (code *)0x48:
    case (code *)0x72:
    case (code *)0x7a:
    case (code *)0x7c:
    case (code *)0xaa:
    case (code *)0xb2:
    case (code *)0xea:
    case (code *)0xf2:
LAB_100becf0c:
switchD_100becca8_caseD_d2:
      break;
    case (code *)0x5:
    case (code *)0x9:
    case (code *)0x16:
    case (code *)0x21:
      FUN_100beec5c();
      break;
    case (code *)0x6:
    case (code *)0x18:
    case (code *)0x19:
    case (code *)0x1f:
      FUN_100beef9c();
    case (code *)0x20:
LAB_100becf38:
code_r0x000100becf3c:
      break;
    case (code *)0x7:
    case (code *)0x80:
    case (code *)0x88:
    case (code *)0x90:
      goto code_r0x000100becf80;
    case (code *)0xa:
    case (code *)0x22:
      goto code_r0x000100becf3c;
    case (code *)0xb:
    case (code *)0x1b:
      goto switchD_100becca8_caseD_d2;
    case (code *)0xc:
      goto code_r0x000100becf54;
    case (code *)0xd:
      goto switchD_100becc00_caseD_e1;
    case (code *)0x13:
    case (code *)0x24:
      goto LAB_100becf38;
    case (code *)0x25:
      goto code_r0x000100becf68;
    case (code *)0x26:
    case (code *)0x71:
    case (code *)0xa9:
    case (code *)0xe9:
      goto switchD_100becca8_caseD_86;
    case (code *)0x28:
    case (code *)0x58:
      goto switchD_100bece7c_caseD_34;
    case (code *)0x29:
    case (code *)0x2f:
    case (code *)0x59:
    case (code *)0x62:
      goto code_r0x000100bed090;
    case (code *)0x2a:
    case (code *)0x5a:
    case (code *)0x60:
    case (code *)0x61:
      goto switchD_100bece7c_caseD_8c;
    case (code *)0x2b:
    case (code *)0x38:
    case (code *)0x5b:
    case (code *)0x64:
    case (code *)0x68:
      *(undefined **)(puVar1 + -0x20) = unaff_x20.unknown;
      *(undefined1 **)(puVar1 + -0x18) = &DAT_e800000000000000;
      *(undefined8 *****)(puVar1 + -0x10) = ppppuVar9;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
    case (code *)0x66:
switchD_100becff0_caseD_8d:
      in_ZR = ((ulong)HVar4.unknown & 0xff) == 0;
      pcVar5 = (code *)(ulong)((uint)HVar4.unknown & 0xff);
code_r0x000100bed0dc:
      if (!(bool)in_ZR) {
code_r0x000100bed0e0:
        in_ZR = (int)pcVar5 == 1;
        pcVar5 = (code *)&DAT_e700000000000000;
code_r0x000100bed0e8:
        UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e600000000000000;
switchD_100becff0_caseD_57:
        goto switchD_100becff0_caseD_9b;
      }
      FUN_100beed28();
      goto LAB_100bed118;
    case (code *)0x2c:
    case (code *)0x5c:
      goto code_r0x000100bed0c4;
    case (code *)0x2d:
    case (code *)0x39:
    case (code *)0x5d:
    case (code *)0x69:
      goto code_r0x000100bed0e0;
    case (code *)0x2e:
      goto switchD_100becff0_caseD_1f;
    case (code *)0x30:
    case (code *)0x33:
      goto code_r0x000100bed080;
    case (code *)0x31:
    case (code *)0x63:
      *(undefined **)(puVar1 + -0x20) = unaff_x20.unknown;
      *(undefined1 **)(puVar1 + -0x18) = &DAT_e800000000000000;
      *(undefined8 *****)(puVar1 + -0x10) = ppppuVar9;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
      goto code_r0x000100bed090;
    case (code *)0x32:
      goto code_r0x000100bed09c;
    case (code *)0x34:
      goto code_r0x000100bed084;
    case (code *)0x35:
    case (code *)0x37:
    case (code *)0x65:
    case (code *)0x67:
      goto switchD_100bece7c_caseD_d4;
    case (code *)0x36:
      goto code_r0x000100bed0ac;
    case (code *)0x40:
      goto switchD_100bece7c_caseD_67;
    case (code *)0x4c:
      goto code_r0x000100becf7c;
    case (code *)0x5e:
      goto switchD_100bece7c_caseD_3c;
    case (code *)0x5f:
      goto code_r0x000100bed0b8;
    case (code *)0x6c:
      goto code_r0x000100becfb0;
    case (code *)0x6d:
    case (code *)0x81:
    case (code *)0x89:
    case (code *)0x91:
    case (code *)0xa5:
    case (code *)0xb9:
    case (code *)0xc1:
    case (code *)0xc9:
    case (code *)0xd1:
      goto switchD_100becff0_caseD_b5;
    case (code *)0x6e:
    case (code *)0x82:
    case (code *)0x8a:
    case (code *)0x92:
    case (code *)0xa6:
    case (code *)0xba:
    case (code *)0xc2:
    case (code *)0xca:
    case (code *)0xd2:
    case (code *)0xe6:
    case (code *)0xfa:
      goto LAB_100becfa0;
    case (code *)0x70:
      goto switchD_100becff0_caseD_2f;
    case (code *)0x84:
      goto switchD_100becff0_caseD_39;
    case (code *)0x85:
      *(undefined **)(puVar1 + -0x20) = unaff_x20.unknown;
      *(undefined1 **)(puVar1 + -0x18) = &DAT_e800000000000000;
      *(undefined8 *****)(puVar1 + -0x10) = ppppuVar9;
      *(undefined8 *)(puVar1 + -8) = unaff_x30;
      unaff_x20.unknown = HVar4.unknown;
      (*param_3)();
      goto switchD_100becff0_caseD_c5;
    case (code *)0x8c:
      goto code_r0x000100becf5c;
    case (code *)0x8d:
    case (code *)0x95:
      FUN_100beee44();
      goto LAB_100bed28c;
    case (code *)0x8e:
    case (code *)0x96:
    case (code *)0xc6:
    case (code *)0xd6:
      goto switchD_100becff0_caseD_cd;
    case (code *)0x8f:
    case (code *)0x97:
    case (code *)0xc7:
    case (code *)0xcf:
    case (code *)0xd7:
    case (code *)0xff:
      goto code_r0x000100bed2f8;
    case (code *)0x94:
      goto code_r0x000100becfdc;
    case (code *)0xa0:
      goto code_r0x000100bed0dc;
    case (code *)0xa1:
    case (code *)0xe1:
      Swift::Hasher::_combine((__uint64)param_1.unknown,HVar4);
      goto switchD_100becff0_caseD_bd;
    case (code *)0xa2:
    case (code *)0xe2:
    case (code *)0xfc:
      goto switchD_100bece7c_caseD_39;
    case (code *)0xa4:
      puVar2 = puVar1 + -0x20;
      *(undefined **)(puVar1 + -0x20) = unaff_x20.unknown;
      *(undefined1 **)(puVar1 + -0x18) = &DAT_e800000000000000;
      goto code_r0x000100becf54;
    case (code *)0xa8:
      goto code_r0x000100bed0bc;
    case (code *)0xb4:
      goto LAB_100becf0c;
    case (code *)0xbc:
      goto switchD_100bece7c_caseD_dc;
    case (code *)0xbd:
      goto switchD_100becff0_caseD_7d;
    case (code *)0xc4:
      goto switchD_100becff0_caseD_25;
    case (code *)0xc5:
    case (code *)0xd5:
LAB_100bed28c:
      FUN_100beeb94();
switchD_100becff0_caseD_69:
      FUN_100beeb9c();
      return;
    case (code *)0xcc:
      goto code_r0x000100bed11c;
    case (code *)0xcd:
    case (code *)0xfd:
      goto code_r0x000100bed0e8;
    case (code *)0xce:
    case (code *)0xfe:
      goto code_r0x000100bed070;
    case (code *)0xd4:
    case (code *)0xe0:
      goto switchD_100bece7c_caseD_75;
    case (code *)0xe4:
      *(undefined8 *****)(puVar1 + 0x60) = ppppuVar9;
      *(undefined8 *)(puVar1 + 0x68) = unaff_x30;
      goto code_r0x000100bed2f8;
    case (code *)0xe5:
    case (code *)0xf9:
      goto code_r0x000100bed254;
    case (code *)0xe8:
      ppppuVar9 = (undefined8 ****)(puVar1 + 0x10);
      unaff_x30 = 0x100becfc8;
      FUN_100beefb0(HVar4.unknown);
      HVar4.unknown = &DAT_7a69735f79646f62;
      pcVar5 = extraout_x8_02;
switchD_100becca8_caseD_d3:
      puVar1 = puVar2;
      pcVar5 = (code *)((ulong)pcVar5 & 0xff);
code_r0x000100becfdc:
      pbVar6 = &switchD_100becff0::switchdataD_100c9f97f;
      UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)(byte)pcVar5[0x100c9f97f] * 4 + 0x100becff4);
      switch(pcVar5) {
      case (code *)0x0:
      case (code *)0x79:
      case (code *)0x81:
      case (code *)0x89:
        goto switchD_100becff0_caseD_0;
      default:
      case (code *)0x93:
      case (code *)0xd3:
      case (code *)0xed:
      case (code *)0xfb:
switchD_100becff0_caseD_10:
switchD_100becff0_caseD_41:
switchD_100bece7c_caseD_38:
switchD_100becff0_caseD_19:
switchD_100bece7c_caseD_3e:
        goto switchD_100becff0_caseD_0;
      case (code *)0x2:
      case (code *)0xf:
      case (code *)0x1a:
switchD_100becff0_caseD_2:
switchD_100bece7c_caseD_3a:
      case (code *)0x11:
      case (code *)0x12:
      case (code *)0x18:
        goto switchD_100becff0_caseD_19;
      case (code *)0x3:
      case (code *)0x1b:
switchD_100bece7c_caseD_67:
      case (code *)0x1f:
      case (code *)0x6a:
      case (code *)0xa2:
      case (code *)0xe2:
switchD_100becff0_caseD_1f:
        goto switchD_100bece7c_caseD_34;
      case (code *)0x4:
      case (code *)0x14:
switchD_100bece7c_caseD_3c:
switchD_100bece7c_caseD_39:
      case (code *)0x15:
      case (code *)0x7f:
      case (code *)0xb7:
        goto switchD_100bece7c_caseD_31;
      case (code *)0x5:
      case (code *)0x85:
switchD_100bece7c_caseD_a8:
        goto switchD_100becff0_caseD_0;
      case (code *)0x6:
code_r0x000100bed070:
      case (code *)0x45:
        goto switchD_100becff0_caseD_0;
      case (code *)0xc:
      case (code *)0x1d:
        goto switchD_100bece7c_caseD_3e;
      case (code *)0xe:
        goto switchD_100bece7c_caseD_31;
      case (code *)0x10:
        goto switchD_100becff0_caseD_10;
      case (code *)0x16:
      case (code *)0xb1:
      case (code *)0xb9:
      case (code *)0xc1:
      case (code *)0xc9:
        goto switchD_100becff0_caseD_16;
      case (code *)0x19:
        goto switchD_100becff0_caseD_19;
      case (code *)0x1e:
        goto switchD_100bece7c_caseD_a8;
      case (code *)0x21:
      case (code *)0x51:
        goto switchD_100bece7c_caseD_cc;
      case (code *)0x22:
      case (code *)0x28:
      case (code *)0x52:
      case (code *)0x5b:
        goto switchD_100becff0_caseD_22;
      case (code *)0x24:
      case (code *)0x31:
      case (code *)0x54:
      case (code *)0x5d:
      case (code *)0x61:
      case (code *)0x5f:
        break;
      case (code *)0x25:
      case (code *)0x55:
switchD_100becff0_caseD_25:
        FUN_100beee44();
        break;
      case (code *)0x26:
      case (code *)0x32:
      case (code *)0x56:
      case (code *)0x62:
        goto switchD_100bece7c_caseD_ed;
      case (code *)0x29:
      case (code *)0x2c:
        FUN_100beef04();
        pcVar5 = extraout_x8_03;
      case (code *)0x2d:
        pbVar6 = (byte *)"SentryTypedSwizzle";
switchD_100becff0_caseD_2a:
        pbVar6 = pbVar6 + 0x98b;
        UNRECOVERED_JUMPTABLE_00 = (code *)0x100bed194;
switchD_100becff0_caseD_22:
                    /* WARNING: Could not recover jumptable at 0x000100bed190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(UNRECOVERED_JUMPTABLE_00 + (ulong)(byte)pcVar5[(long)pbVar6] * 4))();
        return;
      case (code *)0x2a:
      case (code *)0x5c:
        goto switchD_100becff0_caseD_2a;
      case (code *)0x2b:
        FUN_100beed84();
      case (code *)0x2e:
      case (code *)0x30:
      case (code *)0x5e:
      case (code *)0x60:
        break;
      case (code *)0x2f:
switchD_100becff0_caseD_2f:
      case (code *)0x23:
      case (code *)0x53:
      case (code *)0x59:
      case (code *)0x5a:
        goto switchD_100becff0_caseD_58;
      case (code *)0x39:
switchD_100becff0_caseD_39:
      case (code *)0x27:
        goto switchD_100bece7c_caseD_cc;
      case (code *)0x41:
      case (code *)0x6b:
      case (code *)0x73:
      case (code *)0x75:
      case (code *)0xa3:
      case (code *)0xab:
      case (code *)0xe3:
      case (code *)0xeb:
        goto switchD_100becff0_caseD_41;
      case (code *)0x57:
        goto switchD_100becff0_caseD_57;
      case (code *)0x58:
        goto switchD_100becff0_caseD_58;
      case (code *)0x65:
        goto switchD_100becff0_caseD_65;
      case (code *)0x66:
      case (code *)0x7a:
      case (code *)0x82:
      case (code *)0x8a:
      case (code *)0x9e:
      case (code *)0xb2:
      case (code *)0xba:
      case (code *)0xc2:
      case (code *)0xca:
        goto switchD_100becff0_caseD_66;
      case (code *)0x67:
      case (code *)0x7b:
      case (code *)0x83:
      case (code *)0x8b:
      case (code *)0x9f:
      case (code *)0xb3:
      case (code *)0xbb:
      case (code *)0xc3:
      case (code *)0xcb:
      case (code *)0xdf:
      case (code *)0xf3:
        goto switchD_100becff0_caseD_67;
      case (code *)0x69:
        goto switchD_100becff0_caseD_69;
      case (code *)0x7d:
switchD_100becff0_caseD_7d:
        *(undefined **)(puVar1 + -0x20) = unaff_x20.unknown;
        *(undefined1 **)(puVar1 + -0x18) = &DAT_e800000000000000;
        *(undefined8 *****)(puVar1 + -0x10) = ppppuVar9;
        *(undefined8 *)(puVar1 + -8) = unaff_x30;
        UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_100bed25c;
        uVar7 = (ulong)(&BYTE_100c9f991)[(ulong)HVar4.unknown & 0xff];
code_r0x000100bed254:
        UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + uVar7 * 4;
      case (code *)0xb5:
switchD_100becff0_caseD_b5:
                    /* WARNING: Could not recover jumptable at 0x000100bed258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE_00)();
        return;
      case (code *)0x7e:
        FUN_100bed2e8();
        return;
      case (code *)0x86:
      case (code *)0x8e:
        goto switchD_100becff0_caseD_86;
      case (code *)0x87:
      case (code *)0x8f:
      case (code *)0xbf:
      case (code *)0xcf:
        goto switchD_100becff0_caseD_87;
      case (code *)0x88:
      case (code *)0x90:
      case (code *)0xc0:
      case (code *)0xc8:
      case (code *)0xd0:
      case (code *)0xf8:
        *(undefined **)(puVar1 + -0x20) = unaff_x20.unknown;
        *(undefined1 **)(puVar1 + -0x18) = &DAT_e800000000000000;
        *(undefined8 *****)(puVar1 + -0x10) = ppppuVar9;
        *(undefined8 *)(puVar1 + -8) = unaff_x30;
        FUN_100beebcc();
        FUN_100beeef8();
        FUN_100b6fbb4();
        FUN_100b8a7ec();
        return;
      case (code *)0x8d:
        goto switchD_100becff0_caseD_8d;
      case (code *)0x99:
        goto switchD_100becff0_caseD_99;
      case (code *)0x9a:
      case (code *)0xda:
        *(undefined8 *****)(puVar1 + 0x60) = ppppuVar9;
        *(undefined8 *)(puVar1 + 0x68) = unaff_x30;
        FUN_100beeb60();
      case (code *)0xf1:
switchD_100becff0_caseD_87:
        FUN_100beeb54(&DAT_e600000000000000);
        FUN_100b6f838();
        FUN_100b6fbb4();
switchD_100becff0_caseD_dd:
        FUN_100b8a7ec();
        return;
      case (code *)0x9b:
      case (code *)0xdb:
      case (code *)0xf5:
        goto switchD_100becff0_caseD_9b;
      case (code *)0x9d:
        goto switchD_100bece7c_caseD_34;
      case (code *)0xa1:
        FUN_100beece8();
        break;
      case (code *)0xad:
        goto switchD_100bece7c_caseD_38;
      case (code *)0xb6:
        goto switchD_100becff0_caseD_b6;
      case (code *)0xbd:
switchD_100becff0_caseD_bd:
        FUN_100b56e88();
        return;
      case (code *)0xbe:
      case (code *)0xce:
        goto switchD_100becff0_caseD_be;
      case (code *)0xc5:
switchD_100becff0_caseD_c5:
        SVar10.bridgeObject = unaff_x20.unknown;
        SVar10.str = HVar4.unknown;
        Swift::String::hash(param_1,SVar10);
        FUN_100beeb9c(unaff_x20.unknown);
        return;
      case (code *)0xc6:
      case (code *)0xf6:
        FUN_100bed1ec();
        return;
      case (code *)0xc7:
      case (code *)0xf7:
        goto switchD_100becff0_caseD_c7;
      case (code *)0xcd:
      case (code *)0xd9:
switchD_100becff0_caseD_cd:
        FUN_100bed61c();
        return;
      case (code *)0xdd:
        goto switchD_100becff0_caseD_dd;
      case (code *)0xde:
      case (code *)0xf2:
        in_ZR = true;
        goto switchD_100becff0_caseD_66;
      case (code *)0xe1:
        goto switchD_100bece7c_caseD_8c;
      }
      goto LAB_100bed1d0;
    case (code *)0xf8:
      switchD_100becff0::caseD_88();
      return;
    }
    FUN_100beeb94();
switchD_100becca8_caseD_86:
    FUN_100beeb9c();
    return;
  case (code *)0xe3:
    FUN_100beed84();
    break;
  case (code *)0xe4:
    goto switchD_100beca4c_caseD_b8;
  case (code *)0xea:
  case (code *)0xf6:
    goto switchD_100bece7c_caseD_66;
  case (code *)0xfa:
    goto switchD_100bece7c_caseD_d4;
  case (code *)0xfb:
    goto switchD_100bece7c_caseD_38;
  case (code *)0xfe:
    HVar4.unknown = (byte *)0x746e656d676564;
    goto switchD_100becc00_caseD_47;
  }
  FUN_100beeb94();
  FUN_100beeb9c(&DAT_e800000000000000);
  return;
switchD_100becff0_caseD_58:
LAB_100bed1d0:
  FUN_100beeb94();
switchD_100becff0_caseD_99:
  goto switchD_100bece7c_caseD_ed;
code_r0x000100bed090:
switchD_100becff0_caseD_67:
code_r0x000100bed09c:
switchD_100bece7c_caseD_d4:
switchD_100becff0_caseD_65:
code_r0x000100bed0ac:
  goto switchD_100bece7c_caseD_8c;
switchD_100bece7c_caseD_34:
  goto switchD_100becff0_caseD_0;
switchD_100bece7c_caseD_31:
  goto switchD_100becff0_caseD_16;
switchD_100becca8_caseD_82:
  goto switchD_100becc00_caseD_47;
switchD_100beca4c_caseD_fe:
  FUN_100beef04();
                    /* WARNING: Could not recover jumptable at 0x000100becd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&BYTE_100c9f968)[extraout_x8] * 4 + 0x100becd50))();
  return;
switchD_100becca8_caseD_44:
  if ((bool)in_ZR) {
switchD_100becca8_caseD_4a:
    pcVar8 = (code *)&DAT_e400000000000000;
switchD_100becca8_caseD_47:
    HVar4.unknown = (byte *)0x79746963;
  }
  else {
switchD_100becca8_caseD_3e:
    in_ZR = (int)pcVar5 == 1;
    pcVar5 = (code *)0xec00000065646f63;
    pbVar6 = (byte *)0x5f7972746e756f63;
    UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e600000000000000;
    uVar7 = 0x6572;
switchD_100beca4c_caseD_b8:
    HVar4.unknown = pbVar6;
    pcVar8 = pcVar5;
    if (!(bool)in_ZR) {
      HVar4.unknown = (byte *)(uVar7 | 0x6e6f69670000);
      pcVar8 = UNRECOVERED_JUMPTABLE_00;
    }
switchD_100becca8_caseD_46:
  }
switchD_100becca8_caseD_3f:
  pcVar3 = pcVar8;
  FUN_100beeb94(param_1.unknown,HVar4.unknown);
switchD_100beca4c_caseD_b9:
  FUN_100beeb9c(pcVar3);
  return;
switchD_100bece7c_caseD_ed:
switchD_100bece7c_caseD_75:
  FUN_100beeb9c();
  return;
switchD_100bece7c_caseD_8c:
code_r0x000100bed0b8:
code_r0x000100bed0bc:
  FUN_100beeb94();
code_r0x000100bed0c4:
  FUN_100beeb9c();
  return;
code_r0x000100becf54:
  *(undefined8 *****)(puVar2 + 0x10) = ppppuVar9;
  *(undefined8 *)(puVar2 + 0x18) = unaff_x30;
code_r0x000100becf5c:
  if (((ulong)HVar4.unknown & 0xff) == 0) {
LAB_100becfa0:
    FUN_100beef4c();
  }
  else {
code_r0x000100becf68:
switchD_100becca8_caseD_da:
switchD_100becc00_caseD_e1:
code_r0x000100becf7c:
code_r0x000100becf80:
switchD_100bece7c_caseD_66:
switchD_100becca8_caseD_9b:
  }
  FUN_100beeb94();
code_r0x000100becfb0:
  FUN_100beeb9c();
  return;
code_r0x000100bed2f8:
  FUN_100beeb60();
  pcVar5 = (code *)&DAT_e400000000000000;
switchD_100becff0_caseD_b6:
  FUN_100beeb54(pcVar5);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100bece7c_caseD_cc:
  FUN_100beeb94();
switchD_100bece7c_caseD_dc:
switchD_100becff0_caseD_c7:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_66:
  if ((bool)in_ZR) {
    FUN_100beed28();
  }
  else {
switchD_100becff0_caseD_be:
switchD_100becff0_caseD_86:
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100becff0_caseD_16:
switchD_100becff0_caseD_0:
  FUN_100beeb94();
switchD_100becca8_caseD_a4:
code_r0x000100bed080:
code_r0x000100bed084:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_9b:
  pcVar8 = pcVar5;
  if (!(bool)in_ZR) {
    pcVar8 = UNRECOVERED_JUMPTABLE_00;
  }
LAB_100bed118:
  FUN_100beeb94();
code_r0x000100bed11c:
  FUN_100beeb9c(pcVar8);
  return;
}



/* Address: 0x100becd1c | switchD_100becca8::caseD_b */

void switchD_100becca8::caseD_b(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed1ec(param_1,param_2,FUN_100b94b98);
  return;
}



/* Address: 0x100becd28 | FUN_100becd28 */

void FUN_100becd28(void)

{
  long extraout_x8;
  
  FUN_100beef04();
                    /* WARNING: Could not recover jumptable at 0x000100becd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&BYTE_100c9f968)[extraout_x8] * 4 + 0x100becd50))();
  return;
}



/* Address: 0x100becde4 | switchD_100becc00::caseD_bc */

void switchD_100becc00::caseD_bc(undefined8 param_1,char param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  if (param_2 == '\0') {
    puVar2 = &DAT_e400000000000000;
    uVar1 = 0x79746963;
  }
  else {
    puVar2 = (undefined1 *)0xec00000065646f63;
    uVar1 = 0x5f7972746e756f63;
    if (param_2 != '\x01') {
      puVar2 = &DAT_e600000000000000;
      uVar1 = 0x6e6f69676572;
    }
  }
  FUN_100beeb94(param_1,uVar1);
  FUN_100beeb9c(puVar2);
  return;
}



/* Address: 0x100bece50 | switchD_100becca8::caseD_4b */

void switchD_100becca8::caseD_4b(Hasher param_1,char *param_2,code *param_3)

{
  undefined1 in_ZR;
  char *pcVar1;
  ulong extraout_x8;
  code *pcVar2;
  code *extraout_x8_00;
  code *extraout_x8_01;
  code *extraout_x8_02;
  char *pcVar3;
  byte *pbVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  code *unaff_x19;
  char *unaff_x20;
  String SVar5;
  
  FUN_100beeba4(param_2);
  pcVar2 = (code *)(extraout_x8 & 0xff);
  pbVar4 = &switchD_100bece7c::switchdataD_100c9f970;
  UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)(byte)pcVar2[0x100c9f970] * 4 + 0x100bece80);
  pcVar1 = param_2;
  switch(pcVar2) {
  case (code *)0x0:
  case (code *)0x1b:
  case (code *)0x2c:
    break;
  default:
    FUN_100beeebc();
  case (code *)0xa2:
  case (code *)0xe2:
  case (code *)0xfc:
    break;
  case (code *)0x2:
  case (code *)0xbc:
    FUN_100beee8c();
  case (code *)0x13:
  case (code *)0x23:
    break;
  case (code *)0x3:
  case (code *)0xa:
    FUN_100beed84();
  case (code *)0x24:
  case (code *)0x8e:
  case (code *)0xc6:
    break;
  case (code *)0x4:
  case (code *)0xc:
  case (code *)0x1f:
    FUN_100beef38();
  case (code *)0x50:
  case (code *)0x7a:
  case (code *)0x82:
  case (code *)0x84:
  case (code *)0xb2:
  case (code *)0xba:
  case (code *)0xf2:
  case (code *)0xfa:
    break;
  case (code *)0x5:
  case (code *)0xd:
  case (code *)0x11:
  case (code *)0x1e:
  case (code *)0x29:
    FUN_100beebd4();
    break;
  case (code *)0x6:
  case (code *)0xe:
  case (code *)0x20:
  case (code *)0x21:
  case (code *)0x27:
  case (code *)0x28:
    break;
  case (code *)0x7:
  case (code *)0xb:
  case (code *)0x1d:
    FUN_100beec5c();
  case (code *)0x25:
  case (code *)0xc0:
  case (code *)0xc8:
  case (code *)0xd0:
  case (code *)0xd8:
    break;
  case (code *)0x8:
    goto switchD_100bece7c_caseD_8;
  case (code *)0xf:
  case (code *)0x88:
  case (code *)0x90:
  case (code *)0x98:
    unaff_x19 = (code *)&DAT_e400000000000000;
  case (code *)0xf0:
switchD_100bece7c_caseD_f0:
    FUN_100beeb94();
    FUN_100beeb9c(unaff_x19);
    return;
  case (code *)0x12:
  case (code *)0x2a:
    goto switchD_100bece7c_caseD_12;
  case (code *)0x14:
    goto switchD_100bece7c_caseD_14;
  case (code *)0x15:
    goto switchD_100bece7c_caseD_15;
  case (code *)0x2d:
    goto switchD_100bece7c_caseD_2d;
  case (code *)0x2e:
  case (code *)0x79:
  case (code *)0xb1:
  case (code *)0xf1:
  case (code *)0xac:
switchD_100bece7c_caseD_14:
    FUN_100beeba4(param_2);
    pcVar2 = extraout_x8_00;
switchD_100bece7c_caseD_94:
    pcVar2 = (code *)((ulong)pcVar2 & 0xff);
    pbVar4 = &BYTE_100c9f978;
switchD_100bece7c_caseD_2d:
    UNRECOVERED_JUMPTABLE_00 = (code *)(&UNK_100becefc + (ulong)(byte)pcVar2[(long)pbVar4] * 4);
switchD_100bece7c_caseD_15:
                    /* WARNING: Could not recover jumptable at 0x000100becef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  case (code *)0x30:
  case (code *)0x60:
    goto switchD_100bece7c_caseD_30;
  case (code *)0x31:
  case (code *)0x37:
  case (code *)0x61:
  case (code *)0x6a:
    goto switchD_100bece7c_caseD_31;
  case (code *)0x32:
  case (code *)0x62:
  case (code *)0x68:
  case (code *)0x69:
    goto switchD_100bece7c_caseD_32;
  case (code *)0x33:
  case (code *)0x40:
  case (code *)0x63:
  case (code *)0x6c:
  case (code *)0x70:
    goto switchD_100bece7c_caseD_33;
  case (code *)0x34:
  case (code *)0x64:
    goto switchD_100bece7c_caseD_34;
  case (code *)0x35:
  case (code *)0x41:
  case (code *)0x65:
  case (code *)0x71:
    goto switchD_100bece7c_caseD_35;
  case (code *)0x36:
    goto switchD_100bece7c_caseD_36;
  case (code *)0x38:
  case (code *)0x3b:
    goto switchD_100bece7c_caseD_38;
  case (code *)0x39:
  case (code *)0x6b:
    goto switchD_100bece7c_caseD_39;
  case (code *)0x3a:
    goto switchD_100bece7c_caseD_3a;
  case (code *)0x3c:
    goto switchD_100bece7c_caseD_3c;
  case (code *)0x3d:
  case (code *)0x3f:
  case (code *)0x6d:
  case (code *)0x6f:
    goto switchD_100bece7c_caseD_3d;
  case (code *)0x3e:
    goto switchD_100bece7c_caseD_3e;
  case (code *)0x48:
    FUN_100beefb0(param_2);
    pcVar2 = extraout_x8_01;
switchD_100bece7c_caseD_36:
    pcVar1 = (char *)0x6f62;
switchD_100bece7c_caseD_30:
    param_2 = (char *)((ulong)pcVar1 & 0xffff | 0x7a69735f79640000);
    pcVar2 = (code *)((ulong)pcVar2 & 0xff);
    pbVar4 = &switchD_100becff0::switchdataD_100c9f97f;
    UNRECOVERED_JUMPTABLE_00 = (code *)((ulong)(byte)pcVar2[0x100c9f97f] * 4 + 0x100becff4);
    pcVar3 = (char *)pbVar4;
    switch(pcVar2) {
    case (code *)0x0:
    case (code *)0x79:
    case (code *)0x81:
    case (code *)0x89:
      goto switchD_100becff0_caseD_0;
    default:
switchD_100bece7c_caseD_d6:
      unaff_x19 = (code *)&DAT_e700000000000000;
    case (code *)0x93:
    case (code *)0xd3:
    case (code *)0xed:
    case (code *)0xfb:
      goto switchD_100becff0_caseD_10;
    case (code *)0x2:
    case (code *)0xf:
    case (code *)0x1a:
      unaff_x19 = (code *)&DAT_e700000000000000;
switchD_100bece7c_caseD_3a:
    case (code *)0x11:
    case (code *)0x12:
    case (code *)0x18:
switchD_100bece7c_caseD_3d:
      goto switchD_100becff0_caseD_19;
    case (code *)0x3:
    case (code *)0x1b:
      unaff_x19 = (code *)&DAT_e800000000000000;
switchD_100bece7c_caseD_32:
switchD_100bece7c_caseD_67:
switchD_100bece7c_caseD_b0:
    case (code *)0x1f:
    case (code *)0x6a:
    case (code *)0xa2:
    case (code *)0xe2:
      goto switchD_100bece7c_caseD_34;
    case (code *)0x4:
    case (code *)0x14:
switchD_100bece7c_caseD_3c:
      unaff_x19 = (code *)&DAT_e600000000000000;
switchD_100bece7c_caseD_39:
    case (code *)0x15:
    case (code *)0x7f:
    case (code *)0xb7:
      goto switchD_100bece7c_caseD_31;
    case (code *)0x5:
      unaff_x19 = (code *)0x6972;
switchD_100bece7c_caseD_33:
      unaff_x19 = (code *)((ulong)unaff_x19 & 0xffffffff0000ffff | 0x676e0000);
    case (code *)0x85:
      unaff_x19 = (code *)((ulong)unaff_x19 & 0xffffffffffff | 0xec00000000000000);
switchD_100bece7c_caseD_6e:
      goto switchD_100bece7c_caseD_a8;
    case (code *)0x6:
switchD_100bece7c_caseD_d5:
      unaff_x19 = (code *)0xe300000000000000;
    case (code *)0x45:
      goto switchD_100becff0_caseD_0;
    case (code *)0xc:
    case (code *)0x1d:
      goto switchD_100bece7c_caseD_3e;
    case (code *)0xe:
      goto switchD_100bece7c_caseD_31;
    case (code *)0x10:
      goto switchD_100becff0_caseD_10;
    case (code *)0x16:
    case (code *)0xb1:
    case (code *)0xb9:
    case (code *)0xc1:
    case (code *)0xc9:
      goto switchD_100becff0_caseD_16;
    case (code *)0x19:
      goto switchD_100becff0_caseD_19;
    case (code *)0x1e:
      goto switchD_100bece7c_caseD_a8;
    case (code *)0x21:
    case (code *)0x51:
      goto code_r0x000100bed158;
    case (code *)0x22:
    case (code *)0x28:
    case (code *)0x52:
    case (code *)0x5b:
      goto switchD_100becff0_caseD_22;
    case (code *)0x23:
    case (code *)0x53:
    case (code *)0x59:
    case (code *)0x5a:
      goto switchD_100bece7c_caseD_c5;
    case (code *)0x24:
    case (code *)0x31:
    case (code *)0x54:
    case (code *)0x5d:
    case (code *)0x61:
    case (code *)0x5f:
      break;
    case (code *)0x25:
    case (code *)0x55:
      FUN_100beee44();
      break;
    case (code *)0x26:
    case (code *)0x32:
    case (code *)0x56:
    case (code *)0x62:
      goto switchD_100bece7c_caseD_ed;
    case (code *)0x27:
      goto switchD_100becff0_caseD_27;
    case (code *)0x29:
    case (code *)0x2c:
switchD_100becff0_caseD_29:
      FUN_100beef04();
      pcVar2 = extraout_x8_02;
    case (code *)0x2d:
      pcVar3 = "SentryTypedSwizzle";
    case (code *)0x2a:
    case (code *)0x5c:
      goto switchD_100becff0_caseD_2a;
    case (code *)0x2b:
      FUN_100beed84();
    case (code *)0x2e:
    case (code *)0x30:
    case (code *)0x5e:
    case (code *)0x60:
      break;
    case (code *)0x2f:
      goto switchD_100bece7c_caseD_c5;
    case (code *)0x39:
      goto switchD_100becff0_caseD_27;
    case (code *)0x41:
    case (code *)0x6b:
    case (code *)0x73:
    case (code *)0x75:
    case (code *)0xa3:
    case (code *)0xab:
    case (code *)0xe3:
    case (code *)0xeb:
      goto switchD_100becff0_caseD_41;
    case (code *)0x57:
switchD_100becff0_caseD_57:
    case (code *)0x9b:
    case (code *)0xdb:
    case (code *)0xf5:
LAB_100bed118:
      FUN_100beeb94();
switchD_100bece7c_caseD_78:
      FUN_100beeb9c();
      return;
    case (code *)0x58:
      goto switchD_100becff0_caseD_58;
    case (code *)0x65:
      goto switchD_100becff0_caseD_65;
    case (code *)0x66:
    case (code *)0x7a:
    case (code *)0x82:
    case (code *)0x8a:
    case (code *)0x9e:
    case (code *)0xb2:
    case (code *)0xba:
    case (code *)0xc2:
    case (code *)0xca:
      goto switchD_100becff0_caseD_66;
    case (code *)0x67:
    case (code *)0x7b:
    case (code *)0x83:
    case (code *)0x8b:
    case (code *)0x9f:
    case (code *)0xb3:
    case (code *)0xbb:
    case (code *)0xc3:
    case (code *)0xcb:
    case (code *)0xdf:
    case (code *)0xf3:
switchD_100bece7c_caseD_d4:
      goto switchD_100becff0_caseD_65;
    case (code *)0x69:
switchD_100becff0_caseD_69:
      FUN_100beeb9c();
      return;
    case (code *)0x7d:
switchD_100bece7c_caseD_a9:
      pcVar2 = (code *)((ulong)param_2 & 0xff);
      pbVar4 = &BYTE_100c9f991;
      UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_100bed25c;
switchD_100bece7c_caseD_96:
      UNRECOVERED_JUMPTABLE_00 = UNRECOVERED_JUMPTABLE_00 + (ulong)(byte)pcVar2[(long)pbVar4] * 4;
    case (code *)0xb5:
                    /* WARNING: Could not recover jumptable at 0x000100bed258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    case (code *)0x7e:
      FUN_100bed2e8();
      return;
    case (code *)0x86:
    case (code *)0x8e:
      goto switchD_100becff0_caseD_86;
    case (code *)0x87:
    case (code *)0x8f:
    case (code *)0xbf:
    case (code *)0xcf:
      goto code_r0x000100bed3d8;
    case (code *)0x88:
    case (code *)0x90:
    case (code *)0xc0:
    case (code *)0xc8:
    case (code *)0xd0:
    case (code *)0xf8:
      FUN_100beebcc();
      FUN_100beeef8();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case (code *)0x8d:
      if (((ulong)pcVar1 & 0xff) != 0) {
switchD_100bece7c_caseD_c4:
        goto switchD_100becff0_caseD_57;
      }
      FUN_100beed28();
      goto LAB_100bed118;
    case (code *)0x99:
      goto switchD_100becff0_caseD_99;
    case (code *)0x9a:
    case (code *)0xda:
      FUN_100beeb60();
    case (code *)0xf1:
code_r0x000100bed3d8:
      FUN_100beeb54(&DAT_e600000000000000);
      FUN_100b6f838();
      FUN_100b6fbb4();
switchD_100becff0_caseD_dd:
      FUN_100b8a7ec();
      return;
    case (code *)0x9d:
      goto switchD_100bece7c_caseD_34;
    case (code *)0xa1:
      FUN_100beece8();
      break;
    case (code *)0xad:
      goto switchD_100bece7c_caseD_38;
    case (code *)0xb6:
      FUN_100beeb54();
      FUN_100b6f838();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case (code *)0xbd:
      FUN_100b56e88();
      return;
    case (code *)0xbe:
    case (code *)0xce:
      goto switchD_100becff0_caseD_be;
    case (code *)0xc5:
switchD_100becff0_caseD_c5:
      SVar5.bridgeObject = unaff_x20;
      SVar5.str = param_2;
      Swift::String::hash(param_1,SVar5);
      FUN_100beeb9c(unaff_x20);
      return;
    case (code *)0xc6:
    case (code *)0xf6:
      FUN_100bed1ec();
      return;
    case (code *)0xc7:
    case (code *)0xf7:
      goto switchD_100becff0_caseD_c7;
    case (code *)0xcd:
    case (code *)0xd9:
      FUN_100bed61c();
      return;
    case (code *)0xdd:
      goto switchD_100becff0_caseD_dd;
    case (code *)0xde:
    case (code *)0xf2:
      in_ZR = ((ulong)unaff_x19 & 0xff) == 0;
      goto switchD_100becff0_caseD_66;
    case (code *)0xe1:
      goto switchD_100bece7c_caseD_8c;
    }
    goto LAB_100bed1d0;
  case (code *)0x54:
    goto switchD_100bece7c_caseD_f0;
  case (code *)0x66:
    goto switchD_100bece7c_caseD_66;
  case (code *)0x67:
    goto switchD_100bece7c_caseD_67;
  case (code *)0x6e:
    goto switchD_100bece7c_caseD_6e;
  case (code *)0x74:
    goto switchD_100bece7c_caseD_f0;
  case (code *)0x75:
  case (code *)0x89:
  case (code *)0x91:
  case (code *)0x99:
  case (code *)0xad:
  case (code *)0xc1:
  case (code *)0xc9:
  case (code *)0xd1:
  case (code *)0xd9:
    goto switchD_100bece7c_caseD_75;
  case (code *)0x76:
  case (code *)0x8a:
  case (code *)0x92:
  case (code *)0x9a:
  case (code *)0xae:
  case (code *)0xc2:
  case (code *)0xca:
  case (code *)0xd2:
  case (code *)0xda:
  case (code *)0xee:
    FUN_100beec5c();
    goto switchD_100bece7c_caseD_f0;
  case (code *)0x78:
    goto switchD_100bece7c_caseD_78;
  case (code *)0x8c:
    goto switchD_100bece7c_caseD_8c;
  case (code *)0x8d:
    goto switchD_100becff0_caseD_29;
  case (code *)0x94:
    goto switchD_100bece7c_caseD_94;
  case (code *)0x95:
  case (code *)0x9d:
    goto switchD_100bece7c_caseD_95;
  case (code *)0x96:
  case (code *)0x9e:
  case (code *)0xce:
  case (code *)0xde:
    goto switchD_100bece7c_caseD_96;
  case (code *)0x97:
  case (code *)0x9f:
  case (code *)0xcf:
  case (code *)0xd7:
  case (code *)0xdf:
    goto LAB_100bed28c;
  case (code *)0x9c:
    if ((bool)in_ZR) {
      FUN_100beef4c();
      goto LAB_100becfa4;
    }
    in_ZR = (int)pcVar2 == 1;
    pcVar2 = (code *)0xe900000000000073;
    UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e800000000000000;
switchD_100bece7c_caseD_66:
switchD_100bece7c_caseD_aa:
    unaff_x19 = pcVar2;
    if (!(bool)in_ZR) {
      unaff_x19 = UNRECOVERED_JUMPTABLE_00;
    }
LAB_100becfa4:
    FUN_100beeb94();
    FUN_100beeb9c(unaff_x19);
    return;
  case (code *)0xa8:
    goto switchD_100bece7c_caseD_a8;
  case (code *)0xa9:
  case (code *)0xe9:
    goto switchD_100bece7c_caseD_a9;
  case (code *)0xaa:
  case (code *)0xea:
    goto switchD_100bece7c_caseD_aa;
  case (code *)0xb0:
    goto switchD_100bece7c_caseD_b0;
  case (code *)0xc4:
    goto switchD_100bece7c_caseD_c4;
  case (code *)0xc5:
    goto switchD_100bece7c_caseD_c5;
  case (code *)0xcc:
    goto code_r0x000100bed158;
  case (code *)0xcd:
  case (code *)0xdd:
switchD_100bece7c_caseD_95:
    unaff_x20 = param_2;
    (*param_3)();
    goto switchD_100becff0_caseD_c5;
  case (code *)0xd4:
    goto switchD_100bece7c_caseD_d4;
  case (code *)0xd5:
    goto switchD_100bece7c_caseD_d5;
  case (code *)0xd6:
    goto switchD_100bece7c_caseD_d6;
  case (code *)0xdc:
  case (code *)0xe8:
    goto switchD_100bece7c_caseD_dc;
  case (code *)0xec:
LAB_100bed28c:
    FUN_100beeb94();
    goto switchD_100becff0_caseD_69;
  case (code *)0xed:
    goto switchD_100bece7c_caseD_ed;
  }
  FUN_100beeb94();
switchD_100bece7c_caseD_12:
switchD_100bece7c_caseD_8:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_27:
  goto code_r0x000100bed158;
switchD_100bece7c_caseD_c5:
switchD_100becff0_caseD_58:
LAB_100bed1d0:
  FUN_100beeb94();
switchD_100becff0_caseD_99:
  goto switchD_100bece7c_caseD_ed;
switchD_100bece7c_caseD_a8:
switchD_100bece7c_caseD_35:
  goto switchD_100becff0_caseD_0;
switchD_100bece7c_caseD_31:
switchD_100becff0_caseD_16:
  goto switchD_100becff0_caseD_0;
switchD_100bece7c_caseD_34:
  goto switchD_100becff0_caseD_0;
switchD_100becff0_caseD_10:
switchD_100becff0_caseD_41:
  goto switchD_100bece7c_caseD_38;
switchD_100bece7c_caseD_ed:
switchD_100bece7c_caseD_75:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_65:
  pcVar2 = (code *)&DAT_e600000000000000;
switchD_100bece7c_caseD_8c:
  UNRECOVERED_JUMPTABLE_00 = (code *)&DAT_e400000000000000;
  if ((bool)in_ZR) {
    UNRECOVERED_JUMPTABLE_00 = pcVar2;
  }
  FUN_100beeb94();
  FUN_100beeb9c(UNRECOVERED_JUMPTABLE_00);
  return;
switchD_100becff0_caseD_2a:
  pbVar4 = (byte *)(pcVar3 + 0x98b);
  UNRECOVERED_JUMPTABLE_00 = (code *)0x100bed194;
switchD_100becff0_caseD_22:
                    /* WARNING: Could not recover jumptable at 0x000100bed190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(UNRECOVERED_JUMPTABLE_00 + (ulong)(byte)pcVar2[(long)pbVar4] * 4))();
  return;
code_r0x000100bed158:
  FUN_100beeb94();
switchD_100bece7c_caseD_dc:
switchD_100becff0_caseD_c7:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_66:
  if ((bool)in_ZR) {
    FUN_100beed28();
  }
  else {
switchD_100becff0_caseD_be:
switchD_100becff0_caseD_86:
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100bece7c_caseD_38:
switchD_100becff0_caseD_19:
switchD_100bece7c_caseD_3e:
switchD_100becff0_caseD_0:
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100bececc | switchD_100becca8::caseD_e2 */

void switchD_100becca8::caseD_e2(Hasher param_1,Hasher param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  ulong extraout_x8;
  code *pcVar2;
  ulong extraout_x8_00;
  code *extraout_x8_01;
  byte *pbVar3;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar4;
  code *unaff_x19;
  Hasher unaff_x20;
  String SVar5;
  
  puVar1 = &stack0xffffffffffffffe0;
  FUN_100beeba4(param_2.unknown);
  pcVar2 = (code *)(extraout_x8 & 0xff);
  uVar4 = (ulong)(byte)pcVar2[0x100c9f978];
  UNRECOVERED_JUMPTABLE = (code *)(&UNK_100becefc + uVar4 * 4);
  switch(pcVar2) {
  case (code *)0x0:
    break;
  default:
    FUN_100beeebc();
  case (code *)0x9a:
  case (code *)0xda:
  case (code *)0xf4:
    break;
  case (code *)0x2:
    FUN_100beee8c();
  case (code *)0x1c:
  case (code *)0x86:
  case (code *)0xbe:
    break;
  case (code *)0x3:
  case (code *)0x15:
    FUN_100beef24();
  case (code *)0x1d:
  case (code *)0xb8:
  case (code *)0xc0:
  case (code *)0xc8:
  case (code *)0xd0:
    break;
  case (code *)0x4:
  case (code *)0x17:
  case (code *)0x48:
  case (code *)0x72:
  case (code *)0x7a:
  case (code *)0x7c:
  case (code *)0xaa:
  case (code *)0xb2:
  case (code *)0xea:
  case (code *)0xf2:
LAB_100becf0c:
switchD_100becca8_caseD_d2:
    break;
  case (code *)0x5:
  case (code *)0x9:
  case (code *)0x16:
  case (code *)0x21:
    FUN_100beec5c();
    break;
  case (code *)0x6:
  case (code *)0x18:
  case (code *)0x19:
  case (code *)0x1f:
    FUN_100beef9c();
  case (code *)0x20:
LAB_100becf38:
code_r0x000100becf3c:
    break;
  case (code *)0x7:
  case (code *)0x80:
  case (code *)0x88:
  case (code *)0x90:
    goto code_r0x000100becf80;
  case (code *)0xa:
  case (code *)0x22:
    goto code_r0x000100becf3c;
  case (code *)0xb:
  case (code *)0x1b:
    goto switchD_100becca8_caseD_d2;
  case (code *)0xc:
    goto code_r0x000100becf54;
  case (code *)0xd:
    goto switchD_100becc00_caseD_e1;
  case (code *)0x13:
  case (code *)0x24:
    goto LAB_100becf38;
  case (code *)0x25:
    goto code_r0x000100becf68;
  case (code *)0x26:
  case (code *)0x71:
  case (code *)0xa9:
  case (code *)0xe9:
    goto switchD_100becca8_caseD_86;
  case (code *)0x28:
  case (code *)0x58:
    goto switchD_100bece7c_caseD_34;
  case (code *)0x29:
  case (code *)0x2f:
  case (code *)0x59:
  case (code *)0x62:
    goto code_r0x000100bed090;
  case (code *)0x2a:
  case (code *)0x5a:
  case (code *)0x60:
  case (code *)0x61:
    goto switchD_100bece7c_caseD_8c;
  case (code *)0x2b:
  case (code *)0x38:
  case (code *)0x5b:
  case (code *)0x64:
  case (code *)0x68:
  case (code *)0x66:
switchD_100becff0_caseD_8d:
    in_ZR = ((ulong)param_2.unknown & 0xff) == 0;
    pcVar2 = (code *)(ulong)((uint)param_2.unknown & 0xff);
code_r0x000100bed0dc:
    if (!(bool)in_ZR) {
code_r0x000100bed0e0:
      in_ZR = (int)pcVar2 == 1;
      pcVar2 = (code *)&DAT_e700000000000000;
code_r0x000100bed0e8:
      UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
switchD_100becff0_caseD_57:
      goto switchD_100becff0_caseD_9b;
    }
    FUN_100beed28();
    goto LAB_100bed118;
  case (code *)0x2c:
  case (code *)0x5c:
    goto code_r0x000100bed0c4;
  case (code *)0x2d:
  case (code *)0x39:
  case (code *)0x5d:
  case (code *)0x69:
    goto code_r0x000100bed0e0;
  case (code *)0x2e:
    goto switchD_100becff0_caseD_1f;
  case (code *)0x30:
  case (code *)0x33:
    goto code_r0x000100bed080;
  case (code *)0x31:
  case (code *)0x63:
    goto code_r0x000100bed090;
  case (code *)0x32:
    goto code_r0x000100bed09c;
  case (code *)0x34:
    goto code_r0x000100bed084;
  case (code *)0x35:
  case (code *)0x37:
  case (code *)0x65:
  case (code *)0x67:
    goto switchD_100bece7c_caseD_d4;
  case (code *)0x36:
    goto code_r0x000100bed0ac;
  case (code *)0x40:
    goto switchD_100bece7c_caseD_67;
  case (code *)0x4c:
    goto code_r0x000100becf7c;
  case (code *)0x5e:
    goto switchD_100bece7c_caseD_3c;
  case (code *)0x5f:
    goto code_r0x000100bed0b8;
  case (code *)0x6c:
    goto code_r0x000100becfb0;
  case (code *)0x6d:
  case (code *)0x81:
  case (code *)0x89:
  case (code *)0x91:
  case (code *)0xa5:
  case (code *)0xb9:
  case (code *)0xc1:
  case (code *)0xc9:
  case (code *)0xd1:
    goto switchD_100becff0_caseD_b5;
  case (code *)0x6e:
  case (code *)0x82:
  case (code *)0x8a:
  case (code *)0x92:
  case (code *)0xa6:
  case (code *)0xba:
  case (code *)0xc2:
  case (code *)0xca:
  case (code *)0xd2:
  case (code *)0xe6:
  case (code *)0xfa:
    goto LAB_100becfa0;
  case (code *)0x70:
    goto switchD_100becff0_caseD_2f;
  case (code *)0x84:
    goto switchD_100becff0_caseD_39;
  case (code *)0x85:
    unaff_x20.unknown = param_2.unknown;
    (*param_3)();
    goto switchD_100becff0_caseD_c5;
  case (code *)0x8c:
    goto code_r0x000100becf5c;
  case (code *)0x8d:
  case (code *)0x95:
    FUN_100beee44();
    goto LAB_100bed28c;
  case (code *)0x8e:
  case (code *)0x96:
  case (code *)0xc6:
  case (code *)0xd6:
    goto switchD_100becff0_caseD_cd;
  case (code *)0x8f:
  case (code *)0x97:
  case (code *)0xc7:
  case (code *)0xcf:
  case (code *)0xd7:
  case (code *)0xff:
    goto code_r0x000100bed2f8;
  case (code *)0x94:
    goto code_r0x000100becfdc;
  case (code *)0xa0:
    goto code_r0x000100bed0dc;
  case (code *)0xa1:
  case (code *)0xe1:
    Swift::Hasher::_combine((__uint64)param_1.unknown,param_2);
    goto switchD_100becff0_caseD_bd;
  case (code *)0xa2:
  case (code *)0xe2:
  case (code *)0xfc:
    goto switchD_100bece7c_caseD_39;
  case (code *)0xa4:
    puVar1 = &stack0xffffffffffffffc0;
    goto code_r0x000100becf54;
  case (code *)0xa8:
    goto code_r0x000100bed0bc;
  case (code *)0xb4:
    goto LAB_100becf0c;
  case (code *)0xbc:
    goto switchD_100bece7c_caseD_dc;
  case (code *)0xbd:
    goto switchD_100becff0_caseD_7d;
  case (code *)0xc4:
    goto switchD_100becff0_caseD_25;
  case (code *)0xc5:
  case (code *)0xd5:
LAB_100bed28c:
    FUN_100beeb94();
switchD_100becff0_caseD_69:
    FUN_100beeb9c();
    return;
  case (code *)0xcc:
    goto code_r0x000100bed11c;
  case (code *)0xcd:
  case (code *)0xfd:
    goto code_r0x000100bed0e8;
  case (code *)0xce:
  case (code *)0xfe:
    goto code_r0x000100bed070;
  case (code *)0xd4:
  case (code *)0xe0:
    goto switchD_100bece7c_caseD_75;
  case (code *)0xe4:
    goto code_r0x000100bed2f8;
  case (code *)0xe5:
  case (code *)0xf9:
    goto code_r0x000100bed254;
  case (code *)0xe8:
    FUN_100beefb0(param_2.unknown);
    param_2.unknown = &DAT_7a69735f79646f62;
    pcVar2 = (code *)(extraout_x8_00 & 0xff);
code_r0x000100becfdc:
    pbVar3 = &switchD_100becff0::switchdataD_100c9f97f;
    UNRECOVERED_JUMPTABLE = (code *)((ulong)(byte)pcVar2[0x100c9f97f] * 4 + 0x100becff4);
    switch(pcVar2) {
    case (code *)0x0:
    case (code *)0x79:
    case (code *)0x81:
    case (code *)0x89:
      goto switchD_100becff0_caseD_0;
    default:
    case (code *)0x93:
    case (code *)0xd3:
    case (code *)0xed:
    case (code *)0xfb:
switchD_100becff0_caseD_10:
switchD_100becff0_caseD_41:
switchD_100bece7c_caseD_38:
switchD_100becff0_caseD_19:
switchD_100bece7c_caseD_3e:
      goto switchD_100becff0_caseD_0;
    case (code *)0x2:
    case (code *)0xf:
    case (code *)0x1a:
    case (code *)0x11:
    case (code *)0x12:
    case (code *)0x18:
      goto switchD_100becff0_caseD_19;
    case (code *)0x3:
    case (code *)0x1b:
switchD_100bece7c_caseD_67:
    case (code *)0x1f:
    case (code *)0x6a:
    case (code *)0xa2:
    case (code *)0xe2:
switchD_100becff0_caseD_1f:
      goto switchD_100bece7c_caseD_34;
    case (code *)0x4:
    case (code *)0x14:
switchD_100bece7c_caseD_3c:
switchD_100bece7c_caseD_39:
    case (code *)0x15:
    case (code *)0x7f:
    case (code *)0xb7:
      goto switchD_100bece7c_caseD_31;
    case (code *)0x5:
    case (code *)0x85:
switchD_100bece7c_caseD_a8:
      goto switchD_100becff0_caseD_0;
    case (code *)0x6:
code_r0x000100bed070:
    case (code *)0x45:
      goto switchD_100becff0_caseD_0;
    case (code *)0xc:
    case (code *)0x1d:
      goto switchD_100bece7c_caseD_3e;
    case (code *)0xe:
      goto switchD_100bece7c_caseD_31;
    case (code *)0x10:
      goto switchD_100becff0_caseD_10;
    case (code *)0x16:
    case (code *)0xb1:
    case (code *)0xb9:
    case (code *)0xc1:
    case (code *)0xc9:
      goto switchD_100becff0_caseD_16;
    case (code *)0x19:
      goto switchD_100becff0_caseD_19;
    case (code *)0x1e:
      goto switchD_100bece7c_caseD_a8;
    case (code *)0x21:
    case (code *)0x51:
      goto code_r0x000100bed158;
    case (code *)0x22:
    case (code *)0x28:
    case (code *)0x52:
    case (code *)0x5b:
      goto switchD_100becff0_caseD_22;
    case (code *)0x24:
    case (code *)0x31:
    case (code *)0x54:
    case (code *)0x5d:
    case (code *)0x61:
    case (code *)0x5f:
      break;
    case (code *)0x25:
    case (code *)0x55:
switchD_100becff0_caseD_25:
      FUN_100beee44();
      break;
    case (code *)0x26:
    case (code *)0x32:
    case (code *)0x56:
    case (code *)0x62:
      goto switchD_100bece7c_caseD_ed;
    case (code *)0x29:
    case (code *)0x2c:
      FUN_100beef04();
      pcVar2 = extraout_x8_01;
    case (code *)0x2d:
      pbVar3 = (byte *)"SentryTypedSwizzle";
switchD_100becff0_caseD_2a:
      pbVar3 = pbVar3 + 0x98b;
      UNRECOVERED_JUMPTABLE = (code *)0x100bed194;
switchD_100becff0_caseD_22:
                    /* WARNING: Could not recover jumptable at 0x000100bed190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(UNRECOVERED_JUMPTABLE + (ulong)(byte)pcVar2[(long)pbVar3] * 4))();
      return;
    case (code *)0x2a:
    case (code *)0x5c:
      goto switchD_100becff0_caseD_2a;
    case (code *)0x2b:
      FUN_100beed84();
    case (code *)0x2e:
    case (code *)0x30:
    case (code *)0x5e:
    case (code *)0x60:
      break;
    case (code *)0x2f:
switchD_100becff0_caseD_2f:
    case (code *)0x23:
    case (code *)0x53:
    case (code *)0x59:
    case (code *)0x5a:
      goto switchD_100becff0_caseD_58;
    case (code *)0x39:
switchD_100becff0_caseD_39:
    case (code *)0x27:
      goto code_r0x000100bed158;
    case (code *)0x41:
    case (code *)0x6b:
    case (code *)0x73:
    case (code *)0x75:
    case (code *)0xa3:
    case (code *)0xab:
    case (code *)0xe3:
    case (code *)0xeb:
      goto switchD_100becff0_caseD_41;
    case (code *)0x57:
      goto switchD_100becff0_caseD_57;
    case (code *)0x58:
      goto switchD_100becff0_caseD_58;
    case (code *)0x65:
      goto switchD_100becff0_caseD_65;
    case (code *)0x66:
    case (code *)0x7a:
    case (code *)0x82:
    case (code *)0x8a:
    case (code *)0x9e:
    case (code *)0xb2:
    case (code *)0xba:
    case (code *)0xc2:
    case (code *)0xca:
      goto switchD_100becff0_caseD_66;
    case (code *)0x67:
    case (code *)0x7b:
    case (code *)0x83:
    case (code *)0x8b:
    case (code *)0x9f:
    case (code *)0xb3:
    case (code *)0xbb:
    case (code *)0xc3:
    case (code *)0xcb:
    case (code *)0xdf:
    case (code *)0xf3:
      goto switchD_100becff0_caseD_67;
    case (code *)0x69:
      goto switchD_100becff0_caseD_69;
    case (code *)0x7d:
switchD_100becff0_caseD_7d:
      UNRECOVERED_JUMPTABLE = (code *)&UNK_100bed25c;
      uVar4 = (ulong)(&BYTE_100c9f991)[(ulong)param_2.unknown & 0xff];
code_r0x000100bed254:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + uVar4 * 4;
    case (code *)0xb5:
switchD_100becff0_caseD_b5:
                    /* WARNING: Could not recover jumptable at 0x000100bed258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    case (code *)0x7e:
      FUN_100bed2e8();
      return;
    case (code *)0x86:
    case (code *)0x8e:
      goto switchD_100becff0_caseD_86;
    case (code *)0x87:
    case (code *)0x8f:
    case (code *)0xbf:
    case (code *)0xcf:
      goto code_r0x000100bed3d8;
    case (code *)0x88:
    case (code *)0x90:
    case (code *)0xc0:
    case (code *)0xc8:
    case (code *)0xd0:
    case (code *)0xf8:
      FUN_100beebcc();
      FUN_100beeef8();
      FUN_100b6fbb4();
      FUN_100b8a7ec();
      return;
    case (code *)0x8d:
      goto switchD_100becff0_caseD_8d;
    case (code *)0x99:
      goto switchD_100becff0_caseD_99;
    case (code *)0x9a:
    case (code *)0xda:
      FUN_100beeb60();
    case (code *)0xf1:
code_r0x000100bed3d8:
      FUN_100beeb54(&DAT_e600000000000000);
      FUN_100b6f838();
      FUN_100b6fbb4();
switchD_100becff0_caseD_dd:
      FUN_100b8a7ec();
      return;
    case (code *)0x9b:
    case (code *)0xdb:
    case (code *)0xf5:
      goto switchD_100becff0_caseD_9b;
    case (code *)0x9d:
      goto switchD_100bece7c_caseD_34;
    case (code *)0xa1:
      FUN_100beece8();
      break;
    case (code *)0xad:
      goto switchD_100bece7c_caseD_38;
    case (code *)0xb6:
      goto switchD_100becff0_caseD_b6;
    case (code *)0xbd:
switchD_100becff0_caseD_bd:
      FUN_100b56e88();
      return;
    case (code *)0xbe:
    case (code *)0xce:
      goto switchD_100becff0_caseD_be;
    case (code *)0xc5:
switchD_100becff0_caseD_c5:
      SVar5.bridgeObject = unaff_x20.unknown;
      SVar5.str = param_2.unknown;
      Swift::String::hash(param_1,SVar5);
      FUN_100beeb9c(unaff_x20.unknown);
      return;
    case (code *)0xc6:
    case (code *)0xf6:
      FUN_100bed1ec();
      return;
    case (code *)0xc7:
    case (code *)0xf7:
      goto switchD_100becff0_caseD_c7;
    case (code *)0xcd:
    case (code *)0xd9:
switchD_100becff0_caseD_cd:
      FUN_100bed61c();
      return;
    case (code *)0xdd:
      goto switchD_100becff0_caseD_dd;
    case (code *)0xde:
    case (code *)0xf2:
      in_ZR = ((ulong)unaff_x19 & 0xff) == 0;
      goto switchD_100becff0_caseD_66;
    case (code *)0xe1:
      goto switchD_100bece7c_caseD_8c;
    }
    goto LAB_100bed1d0;
  case (code *)0xf8:
    switchD_100becff0::caseD_88();
    return;
  }
  FUN_100beeb94();
switchD_100becca8_caseD_86:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_58:
LAB_100bed1d0:
  FUN_100beeb94();
switchD_100becff0_caseD_99:
  goto switchD_100bece7c_caseD_ed;
switchD_100bece7c_caseD_31:
switchD_100becff0_caseD_16:
  goto switchD_100becff0_caseD_0;
code_r0x000100bed090:
switchD_100becff0_caseD_67:
code_r0x000100bed09c:
switchD_100bece7c_caseD_d4:
switchD_100becff0_caseD_65:
code_r0x000100bed0ac:
  goto switchD_100bece7c_caseD_8c;
switchD_100bece7c_caseD_ed:
switchD_100bece7c_caseD_75:
  FUN_100beeb9c();
  return;
switchD_100bece7c_caseD_8c:
code_r0x000100bed0b8:
code_r0x000100bed0bc:
  FUN_100beeb94();
code_r0x000100bed0c4:
  FUN_100beeb9c();
  return;
code_r0x000100becf54:
  *(undefined1 **)(puVar1 + 0x10) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar1 + 0x18) = 0x100becee0;
code_r0x000100becf5c:
  if (((ulong)param_2.unknown & 0xff) == 0) {
LAB_100becfa0:
    FUN_100beef4c();
  }
  else {
code_r0x000100becf68:
switchD_100becc00_caseD_e1:
code_r0x000100becf7c:
code_r0x000100becf80:
  }
  FUN_100beeb94();
code_r0x000100becfb0:
  FUN_100beeb9c();
  return;
code_r0x000100bed2f8:
  FUN_100beeb60();
  pcVar2 = (code *)&DAT_e400000000000000;
switchD_100becff0_caseD_b6:
  FUN_100beeb54(pcVar2);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
code_r0x000100bed158:
  FUN_100beeb94();
switchD_100bece7c_caseD_dc:
switchD_100becff0_caseD_c7:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_66:
  if ((bool)in_ZR) {
    FUN_100beed28();
  }
  else {
switchD_100becff0_caseD_be:
switchD_100becff0_caseD_86:
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100bece7c_caseD_34:
switchD_100becff0_caseD_0:
  FUN_100beeb94();
code_r0x000100bed080:
code_r0x000100bed084:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_9b:
  unaff_x19 = pcVar2;
  if (!(bool)in_ZR) {
    unaff_x19 = UNRECOVERED_JUMPTABLE;
  }
LAB_100bed118:
  FUN_100beeb94();
code_r0x000100bed11c:
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100becf50 | FUN_100becf50 */

void FUN_100becf50(undefined8 param_1,char param_2)

{
  undefined1 *unaff_x19;
  
  if (param_2 == '\0') {
    FUN_100beef4c();
  }
  else {
    unaff_x19 = (undefined1 *)0xe900000000000073;
    if (param_2 != '\x01') {
      unaff_x19 = &DAT_e800000000000000;
    }
  }
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100becfb4 | FUN_100becfb4 */

void FUN_100becfb4(Hasher param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  char *pcVar5;
  char *pcVar6;
  ulong extraout_x8;
  undefined *puVar7;
  undefined *extraout_x8_00;
  byte *pbVar8;
  undefined *puVar9;
  undefined *unaff_x19;
  void *unaff_x20;
  undefined1 *puVar10;
  String SVar11;
  long alStack_40 [4];
  
  puVar2 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xfffffffffffffff0;
  FUN_100beefb0(param_2);
  pcVar5 = &DAT_7a69735f79646f62;
  puVar7 = (undefined *)(extraout_x8 & 0xff);
  pbVar8 = &switchD_100becff0::switchdataD_100c9f97f;
  puVar9 = (undefined *)
           ((ulong)(&switchD_100becff0::switchdataD_100c9f97f)[(long)puVar7] * 4 + 0x100becff4);
  puVar1 = &stack0xffffffffffffffe0;
  puVar3 = &stack0xffffffffffffffe0;
  puVar4 = &stack0xffffffffffffffe0;
  pcVar6 = pcVar5;
  switch(puVar7) {
  case (undefined *)0x0:
  case (undefined *)0x79:
  case (undefined *)0x81:
  case (undefined *)0x89:
    goto switchD_100becff0_caseD_0;
  default:
switchD_100bece7c_caseD_d6:
    unaff_x19 = &DAT_e700000000000000;
  case (undefined *)0x93:
  case (undefined *)0xd3:
  case (undefined *)0xed:
  case (undefined *)0xfb:
switchD_100becff0_caseD_93:
    goto switchD_100becff0_caseD_10;
  case (undefined *)0x2:
  case (undefined *)0xf:
  case (undefined *)0x1a:
switchD_100becff0_caseD_2:
    unaff_x19 = &DAT_e700000000000000;
  case (undefined *)0x11:
  case (undefined *)0x12:
  case (undefined *)0x18:
switchD_100bece7c_caseD_3d:
    goto switchD_100becff0_caseD_19;
  case (undefined *)0x3:
  case (undefined *)0x1b:
switchD_100becff0_caseD_3:
    unaff_x19 = &DAT_e800000000000000;
  case (undefined *)0x1f:
  case (undefined *)0x6a:
  case (undefined *)0xa2:
  case (undefined *)0xe2:
switchD_100becff0_caseD_1f:
    goto switchD_100bece7c_caseD_34;
  case (undefined *)0x4:
  case (undefined *)0x14:
switchD_100bece7c_caseD_3c:
    unaff_x19 = &DAT_e600000000000000;
  case (undefined *)0x15:
  case (undefined *)0x7f:
  case (undefined *)0xb7:
switchD_100becff0_caseD_15:
    goto switchD_100bece7c_caseD_31;
  case (undefined *)0x5:
switchD_100becff0_caseD_5:
    unaff_x19 = (undefined *)0x676e6972;
  case (undefined *)0x85:
switchD_100becff0_caseD_85:
    unaff_x19 = (undefined *)((ulong)unaff_x19 & 0xffffffffffff | 0xec00000000000000);
    goto switchD_100bece7c_caseD_a8;
  case (undefined *)0x6:
switchD_100bece7c_caseD_d5:
    unaff_x19 = (undefined *)0xe300000000000000;
  case (undefined *)0x45:
switchD_100becff0_caseD_45:
    goto switchD_100becff0_caseD_0;
  case (undefined *)0xc:
  case (undefined *)0x1d:
    goto switchD_100bece7c_caseD_3e;
  case (undefined *)0xe:
    goto switchD_100bece7c_caseD_31;
  case (undefined *)0x10:
    goto switchD_100becff0_caseD_10;
  case (undefined *)0x16:
  case (undefined *)0xb1:
  case (undefined *)0xb9:
  case (undefined *)0xc1:
  case (undefined *)0xc9:
    goto switchD_100becff0_caseD_16;
  case (undefined *)0x19:
    goto switchD_100becff0_caseD_19;
  case (undefined *)0x1e:
    goto switchD_100bece7c_caseD_a8;
  case (undefined *)0x21:
  case (undefined *)0x51:
    goto code_r0x000100bed158;
  case (undefined *)0x22:
  case (undefined *)0x28:
  case (undefined *)0x52:
  case (undefined *)0x5b:
    goto switchD_100becff0_caseD_22;
  case (undefined *)0x23:
  case (undefined *)0x53:
  case (undefined *)0x59:
  case (undefined *)0x5a:
    goto switchD_100bece7c_caseD_c5;
  case (undefined *)0x24:
  case (undefined *)0x31:
  case (undefined *)0x54:
  case (undefined *)0x5d:
  case (undefined *)0x61:
switchD_100becff0_caseD_24:
  case (undefined *)0x5f:
switchD_100becff0_caseD_5f:
    break;
  case (undefined *)0x25:
  case (undefined *)0x55:
switchD_100becff0_caseD_25:
    FUN_100beee44();
    break;
  case (undefined *)0x26:
  case (undefined *)0x32:
  case (undefined *)0x56:
  case (undefined *)0x62:
    goto switchD_100bece7c_caseD_ed;
  case (undefined *)0x27:
    goto switchD_100becff0_caseD_27;
  case (undefined *)0x29:
  case (undefined *)0x2c:
switchD_100becff0_caseD_29:
    FUN_100beef04();
    puVar7 = extraout_x8_00;
  case (undefined *)0x2d:
switchD_100becff0_caseD_2d:
    pbVar8 = (byte *)"SentryTypedSwizzle";
  case (undefined *)0x2a:
  case (undefined *)0x5c:
    goto switchD_100becff0_caseD_2a;
  case (undefined *)0x2b:
switchD_100becff0_caseD_2b:
    FUN_100beed84();
  case (undefined *)0x2e:
  case (undefined *)0x30:
  case (undefined *)0x5e:
  case (undefined *)0x60:
switchD_100becff0_caseD_2e:
    break;
  case (undefined *)0x2f:
switchD_100becff0_caseD_2f:
    goto switchD_100bece7c_caseD_c5;
  case (undefined *)0x39:
switchD_100becff0_caseD_39:
    goto switchD_100becff0_caseD_27;
  case (undefined *)0x41:
  case (undefined *)0x6b:
  case (undefined *)0x73:
  case (undefined *)0x75:
  case (undefined *)0xa3:
  case (undefined *)0xab:
  case (undefined *)0xe3:
  case (undefined *)0xeb:
    goto switchD_100becff0_caseD_41;
  case (undefined *)0x57:
    goto switchD_100becff0_caseD_57;
  case (undefined *)0x58:
    goto switchD_100becff0_caseD_58;
  case (undefined *)0x65:
    goto switchD_100becff0_caseD_65;
  case (undefined *)0x66:
  case (undefined *)0x7a:
  case (undefined *)0x82:
  case (undefined *)0x8a:
  case (undefined *)0x9e:
  case (undefined *)0xb2:
  case (undefined *)0xba:
  case (undefined *)0xc2:
  case (undefined *)0xca:
    goto switchD_100becff0_caseD_66;
  case (undefined *)0x67:
  case (undefined *)0x7b:
  case (undefined *)0x83:
  case (undefined *)0x8b:
  case (undefined *)0x9f:
  case (undefined *)0xb3:
  case (undefined *)0xbb:
  case (undefined *)0xc3:
  case (undefined *)0xcb:
  case (undefined *)0xdf:
  case (undefined *)0xf3:
switchD_100becff0_caseD_67:
    goto switchD_100becff0_caseD_65;
  case (undefined *)0x69:
switchD_100becff0_caseD_69:
    FUN_100beeb9c();
    return;
  case (undefined *)0x7d:
    do {
      puVar2 = puVar1 + -0x20;
      *(void **)(puVar1 + -0x20) = unaff_x20;
      *(undefined **)(puVar1 + -0x18) = unaff_x19;
      *(undefined1 **)(puVar1 + -0x10) = puVar10;
      *(undefined8 *)(puVar1 + -8) = 0x100becfc8;
      puVar10 = puVar1 + -0x10;
      unaff_x19 = &SUB_e200000000000000;
      pcVar5 = &DAT_00006b6f;
      puVar7 = (undefined *)((ulong)pcVar6 & 0xff);
      pbVar8 = &BYTE_100c9f991;
      puVar9 = &UNK_100bed25c + (ulong)(&BYTE_100c9f991)[(long)puVar7] * 4;
switchD_100becff0_caseD_b5:
      puVar1 = puVar2;
      puVar3 = puVar2;
      puVar4 = puVar2;
      pcVar6 = pcVar5;
      switch(puVar9) {
      case (undefined *)0x100becff4:
        goto switchD_100bece7c_caseD_d6;
      case (undefined *)0x100becff8:
        goto switchD_100becff0_caseD_93;
      case (undefined *)0x100becffc:
        goto switchD_100becff0_caseD_10;
      case (undefined *)0x100bed000:
        goto switchD_100becff0_caseD_41;
      case (undefined *)0x100bed004:
        goto switchD_100bece7c_caseD_38;
      case (undefined *)0x100bed008:
        goto switchD_100bece7c_caseD_3c;
      case (undefined *)0x100bed010:
        goto switchD_100becff0_caseD_15;
      case (undefined *)0x100bed014:
        goto switchD_100bece7c_caseD_31;
      case (undefined *)0x100bed018:
        goto switchD_100becff0_caseD_16;
      case (undefined *)0x100bed01c:
        goto switchD_100becff0_caseD_2;
      case (undefined *)0x100bed024:
        goto switchD_100bece7c_caseD_3d;
      case (undefined *)0x100bed02c:
        goto switchD_100becff0_caseD_19;
      case (undefined *)0x100bed030:
        goto switchD_100bece7c_caseD_3e;
      case (undefined *)0x100bed034:
        goto switchD_100becff0_caseD_3;
      case (undefined *)0x100bed044:
        goto switchD_100becff0_caseD_1f;
      case (undefined *)0x100bed048:
        goto switchD_100bece7c_caseD_34;
      case (undefined *)0x100bed04c:
        goto switchD_100becff0_caseD_5;
      case (undefined *)0x100bed054:
        goto switchD_100becff0_caseD_85;
      case (undefined *)0x100bed060:
        goto switchD_100bece7c_caseD_a8;
      case (undefined *)0x100bed06c:
        goto switchD_100bece7c_caseD_d5;
      case (undefined *)0x100bed074:
        goto switchD_100becff0_caseD_45;
      case (undefined *)0x100bed078:
        goto switchD_100becff0_caseD_0;
      case (undefined *)0x100bed098:
        goto switchD_100becff0_caseD_67;
      case (undefined *)0x100bed0a8:
        goto switchD_100becff0_caseD_65;
      case (undefined *)0x100bed0b4:
        goto switchD_100bece7c_caseD_8c;
      case (undefined *)0x100bed0d4:
        goto switchD_100becff0_caseD_8d;
      case (undefined *)0x100bed100:
        goto switchD_100becff0_caseD_57;
      case (undefined *)0x100bed104:
        goto switchD_100becff0_caseD_9b;
      case (undefined *)0x100bed134:
        goto switchD_100becff0_caseD_39;
      case (undefined *)0x100bed13c:
        goto switchD_100becff0_caseD_27;
      case (undefined *)0x100bed140:
        goto code_r0x000100bed158;
      case (undefined *)0x100bed168:
        goto switchD_100becff0_caseD_c7;
      case (undefined *)0x100bed178:
        goto switchD_100becff0_caseD_29;
      case (undefined *)0x100bed17c:
        goto switchD_100becff0_caseD_2d;
      case (undefined *)0x100bed180:
        goto switchD_100becff0_caseD_2a;
      case (undefined *)0x100bed188:
        goto switchD_100becff0_caseD_22;
      case (undefined *)0x100bed194:
        goto switchD_100becff0_caseD_2b;
      case (undefined *)0x100bed198:
        goto switchD_100becff0_caseD_2e;
      case (undefined *)0x100bed1a4:
        goto switchD_100becff0_caseD_2f;
      case (undefined *)0x100bed1ac:
        goto switchD_100bece7c_caseD_c5;
      case (undefined *)0x100bed1b0:
        goto switchD_100becff0_caseD_58;
      case (undefined *)0x100bed1b4:
        goto switchD_100becff0_caseD_a1;
      case (undefined *)0x100bed1bc:
        goto switchD_100becff0_caseD_25;
      case (undefined *)0x100bed1c4:
        goto switchD_100becff0_caseD_24;
      case (undefined *)0x100bed1cc:
        goto switchD_100becff0_caseD_5f;
      case (undefined *)0x100bed1d4:
        goto switchD_100becff0_caseD_99;
      case (undefined *)0x100bed1d8:
        goto switchD_100bece7c_caseD_ed;
      case (undefined *)0x100bed1e0:
        goto switchD_100becff0_caseD_c6;
      case (undefined *)0x100bed214:
        goto switchD_100becff0_caseD_c5;
      case (undefined *)0x100bed258:
        goto switchD_100becff0_caseD_b5;
      case (undefined *)0x100bed25c:
        FUN_100beeb94();
      case (undefined *)0x100bed294:
        goto switchD_100becff0_caseD_69;
      case (undefined *)0x100bed2b4:
        goto switchD_100becff0_caseD_bd;
      case (undefined *)0x100bed2d4:
        goto switchD_100becff0_caseD_cd;
      case (undefined *)0x100bed2e4:
        goto switchD_100becff0_caseD_7e;
      case (undefined *)0x100bed320:
        goto switchD_100becff0_caseD_b6;
      case (undefined *)0x100bed34c:
        goto switchD_100becff0_caseD_de;
      case (undefined *)0x100bed350:
        goto switchD_100becff0_caseD_66;
      case (undefined *)0x100bed364:
        goto switchD_100becff0_caseD_be;
      case (undefined *)0x100bed368:
        goto switchD_100becff0_caseD_86;
      case (undefined *)0x100bed3a8:
        goto switchD_100becff0_caseD_9a;
      case (undefined *)0x100bed3b8:
        goto switchD_100becff0_caseD_f1;
      case (undefined *)0x100bed3c4:
        goto code_r0x000100bed3d8;
      case (undefined *)0x100bed3e8:
        goto switchD_100becff0_caseD_dd;
      case (undefined *)0x100bed3f0:
        goto switchD_100becff0_caseD_88;
      }
    } while( true );
  case (undefined *)0x7e:
switchD_100becff0_caseD_7e:
    FUN_100bed2e8();
    return;
  case (undefined *)0x86:
  case (undefined *)0x8e:
    goto switchD_100becff0_caseD_86;
  case (undefined *)0x87:
  case (undefined *)0x8f:
  case (undefined *)0xbf:
  case (undefined *)0xcf:
    goto code_r0x000100bed3d8;
  case (undefined *)0x88:
  case (undefined *)0x90:
  case (undefined *)0xc0:
  case (undefined *)0xc8:
  case (undefined *)0xd0:
  case (undefined *)0xf8:
switchD_100becff0_caseD_88:
    *(void **)(puVar4 + -0x20) = unaff_x20;
    *(undefined **)(puVar4 + -0x18) = unaff_x19;
    *(undefined1 **)(puVar4 + -0x10) = puVar10;
    *(undefined8 *)(puVar4 + -8) = 0x100becfc8;
    FUN_100beebcc();
    FUN_100beeef8();
    FUN_100b6fbb4();
    FUN_100b8a7ec();
    return;
  case (undefined *)0x8d:
switchD_100becff0_caseD_8d:
    if (((ulong)pcVar5 & 0xff) == 0) {
      FUN_100beed28();
      goto LAB_100bed118;
    }
    in_ZR = ((uint)pcVar5 & 0xff) == 1;
    puVar7 = &DAT_e700000000000000;
    puVar9 = &DAT_e600000000000000;
    goto switchD_100becff0_caseD_57;
  case (undefined *)0x99:
    goto switchD_100becff0_caseD_99;
  case (undefined *)0x9a:
  case (undefined *)0xda:
switchD_100becff0_caseD_9a:
    *(undefined1 **)(puVar3 + 0x60) = puVar10;
    *(undefined8 *)(puVar3 + 0x68) = 0x100becfc8;
    FUN_100beeb60();
  case (undefined *)0xf1:
switchD_100becff0_caseD_f1:
code_r0x000100bed3d8:
    FUN_100beeb54(&DAT_e600000000000000);
    FUN_100b6f838();
    FUN_100b6fbb4();
switchD_100becff0_caseD_dd:
    FUN_100b8a7ec();
    return;
  case (undefined *)0x9b:
  case (undefined *)0xdb:
  case (undefined *)0xf5:
    goto switchD_100becff0_caseD_9b;
  case (undefined *)0x9d:
    goto switchD_100bece7c_caseD_34;
  case (undefined *)0xa1:
switchD_100becff0_caseD_a1:
    FUN_100beece8();
    break;
  case (undefined *)0xad:
    goto switchD_100bece7c_caseD_38;
  case (undefined *)0xb5:
    goto switchD_100becff0_caseD_b5;
  case (undefined *)0xb6:
switchD_100becff0_caseD_b6:
    FUN_100beeb54();
    FUN_100b6f838();
    FUN_100b6fbb4();
    FUN_100b8a7ec();
    return;
  case (undefined *)0xbd:
switchD_100becff0_caseD_bd:
    FUN_100b56e88();
    return;
  case (undefined *)0xbe:
  case (undefined *)0xce:
    goto switchD_100becff0_caseD_be;
  case (undefined *)0xc5:
switchD_100becff0_caseD_c5:
    SVar11.bridgeObject = unaff_x20;
    SVar11.str = pcVar5;
    Swift::String::hash(param_1,SVar11);
    FUN_100beeb9c();
    return;
  case (undefined *)0xc6:
  case (undefined *)0xf6:
switchD_100becff0_caseD_c6:
    FUN_100bed1ec();
    return;
  case (undefined *)0xc7:
  case (undefined *)0xf7:
    goto switchD_100becff0_caseD_c7;
  case (undefined *)0xcd:
  case (undefined *)0xd9:
switchD_100becff0_caseD_cd:
    FUN_100bed61c();
    return;
  case (undefined *)0xdd:
    goto switchD_100becff0_caseD_dd;
  case (undefined *)0xde:
  case (undefined *)0xf2:
switchD_100becff0_caseD_de:
    in_ZR = ((ulong)unaff_x19 & 0xff) == 0;
    goto switchD_100becff0_caseD_66;
  case (undefined *)0xe1:
    goto switchD_100bece7c_caseD_8c;
  }
LAB_100bed1d0:
  FUN_100beeb94();
switchD_100becff0_caseD_99:
switchD_100bece7c_caseD_ed:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_57:
  goto switchD_100becff0_caseD_9b;
switchD_100becff0_caseD_27:
  goto code_r0x000100bed158;
switchD_100bece7c_caseD_c5:
switchD_100becff0_caseD_58:
  goto LAB_100bed1d0;
switchD_100bece7c_caseD_a8:
  goto switchD_100becff0_caseD_0;
switchD_100bece7c_caseD_31:
switchD_100becff0_caseD_16:
  goto switchD_100becff0_caseD_0;
switchD_100bece7c_caseD_34:
  goto switchD_100becff0_caseD_0;
switchD_100becff0_caseD_10:
switchD_100becff0_caseD_41:
  goto switchD_100bece7c_caseD_38;
switchD_100becff0_caseD_9b:
  unaff_x19 = puVar7;
  if (!(bool)in_ZR) {
    unaff_x19 = puVar9;
  }
LAB_100bed118:
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
switchD_100becff0_caseD_65:
  puVar7 = &DAT_e600000000000000;
switchD_100bece7c_caseD_8c:
  puVar9 = &DAT_e400000000000000;
  if ((bool)in_ZR) {
    puVar9 = puVar7;
  }
  FUN_100beeb94();
  FUN_100beeb9c(puVar9);
  return;
switchD_100becff0_caseD_2a:
  pbVar8 = pbVar8 + 0x98b;
  puVar9 = (undefined *)0x100bed194;
switchD_100becff0_caseD_22:
                    /* WARNING: Could not recover jumptable at 0x000100bed190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(puVar9 + (ulong)pbVar8[(long)puVar7] * 4))();
  return;
code_r0x000100bed158:
  FUN_100beeb94();
switchD_100becff0_caseD_c7:
  FUN_100beeb9c();
  return;
switchD_100becff0_caseD_66:
  if ((bool)in_ZR) {
    FUN_100beed28();
  }
  else {
switchD_100becff0_caseD_be:
switchD_100becff0_caseD_86:
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
switchD_100bece7c_caseD_38:
switchD_100becff0_caseD_19:
switchD_100bece7c_caseD_3e:
switchD_100becff0_caseD_0:
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100bed088 | FUN_100bed088 */

void FUN_100bed088(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  bVar3 = (param_2 & 1) == 0;
  uVar1 = 0x65646f63;
  if (bVar3) {
    uVar1 = 0x6e69616d6f64;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar3) {
    puVar2 = &DAT_e600000000000000;
  }
  FUN_100beeb94(param_1,uVar1);
  FUN_100beeb9c(puVar2);
  return;
}



/* Address: 0x100bed0cc | FUN_100bed0cc */

void FUN_100bed0cc(undefined8 param_1,char param_2)

{
  undefined1 *unaff_x19;
  
  if (param_2 == '\0') {
    FUN_100beed28();
  }
  else {
    unaff_x19 = &DAT_e700000000000000;
    if (param_2 != '\x01') {
      unaff_x19 = &DAT_e600000000000000;
    }
  }
  FUN_100beeb94();
  FUN_100beeb9c(unaff_x19);
  return;
}



/* Address: 0x100bed128 | FUN_100bed128 */

void FUN_100bed128(undefined8 param_1,ulong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  
  bVar3 = (param_2 & 1) == 0;
  puVar1 = &DAT_65756c6176;
  if (bVar3) {
    puVar1 = &DAT_65707974;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3) {
    puVar2 = &DAT_e400000000000000;
  }
  FUN_100beeb94(param_1,puVar1);
  FUN_100beeb9c(puVar2);
  return;
}



/* Address: 0x100bed16c | FUN_100bed16c */

void FUN_100bed16c(void)

{
  long extraout_x8;
  
  FUN_100beef04();
                    /* WARNING: Could not recover jumptable at 0x000100bed190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(&BYTE_100c9f98b)[extraout_x8] * 4 + 0x100bed194))();
  return;
}



/* Address: 0x100bed1e0 | switchD_100becff0::caseD_c6 */

void switchD_100becff0::caseD_c6(undefined8 param_1,undefined8 param_2)

{
  FUN_100bed1ec(param_1,param_2,FUN_100bcb6a0);
  return;
}



/* Address: 0x100bed1ec | FUN_100bed1ec */

void FUN_100bed1ec(Hasher param_1,char *param_2,code *param_3)

{
  char *pcVar1;
  String SVar2;
  
  pcVar1 = param_2;
  (*param_3)();
  SVar2.bridgeObject = pcVar1;
  SVar2.str = param_2;
  Swift::String::hash(param_1,SVar2);
  FUN_100beeb9c(pcVar1);
  return;
}



/* Address: 0x100bed228 | switchD_100becff0::caseD_7d */

/* WARNING: Removing unreachable block (ram,0x000100bed354) */

void switchD_100becff0::caseD_7d(undefined1 *param_1,ulong param_2,code *param_3)

{
  undefined1 *puVar1;
  undefined1 in_ZR;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined8 unaff_x30;
  undefined1 auStack_90 [80];
  
  puVar1 = &stack0xffffffffffffffe0;
  puVar6 = &SUB_e200000000000000;
  puVar2 = &DAT_00006b6f;
  puVar3 = (undefined1 *)(param_2 & 0xff);
  pbVar4 = &BYTE_100c9f991;
  uVar5 = (ulong)(&BYTE_100c9f991)[(long)puVar3];
  switch(puVar3) {
  case (undefined1 *)0x0:
  case (undefined1 *)0x6:
    break;
  default:
    puVar6 = &DAT_e600000000000000;
  case (undefined1 *)0x81:
  case (undefined1 *)0xc1:
  case (undefined1 *)0xdb:
  case (undefined1 *)0xe9:
    goto code_r0x000100bed268;
  case (undefined1 *)0x2:
    FUN_100beee44();
    break;
  case (undefined1 *)0x3:
  case (undefined1 *)0x6d:
  case (undefined1 *)0xa5:
    puVar6 = &DAT_e800000000000000;
  case (undefined1 *)0x4:
  case (undefined1 *)0x9f:
  case (undefined1 *)0xa7:
  case (undefined1 *)0xaf:
  case (undefined1 *)0xb7:
    goto code_r0x000100bed284;
  case (undefined1 *)0x7:
    goto switchD_100becff0_caseD_69;
  case (undefined1 *)0x8:
    goto code_r0x000100bed284;
  case (undefined1 *)0x9:
  case (undefined1 *)0xef:
  case (undefined1 *)0xd:
  case (undefined1 *)0x58:
  case (undefined1 *)0x90:
  case (undefined1 *)0xd0:
    param_1 = &DAT_00006b6f;
    goto code_r0x000100bed2b0;
  case (undefined1 *)0xb:
    goto code_r0x000100bed298;
  case (undefined1 *)0xc:
    caseD_88();
    return;
  case (undefined1 *)0x10:
  case (undefined1 *)0x16:
  case (undefined1 *)0x40:
  case (undefined1 *)0x49:
  case (undefined1 *)0x19:
    goto code_r0x000100bed400;
  case (undefined1 *)0x11:
  case (undefined1 *)0x41:
  case (undefined1 *)0x47:
  case (undefined1 *)0x48:
    goto code_r0x000100bed414;
  case (undefined1 *)0x12:
  case (undefined1 *)0x1f:
  case (undefined1 *)0x42:
  case (undefined1 *)0x4b:
  case (undefined1 *)0x4f:
    puVar1 = auStack_90;
  case (undefined1 *)0x4d:
    *(undefined1 **)(puVar1 + 0x60) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar1 + 0x68) = unaff_x30;
    goto code_r0x000100bed43c;
  case (undefined1 *)0x14:
  case (undefined1 *)0x20:
  case (undefined1 *)0x44:
  case (undefined1 *)0x50:
    goto code_r0x000100bed440;
  case (undefined1 *)0x15:
  case (undefined1 *)0xf:
  case (undefined1 *)0x3f:
  case (undefined1 *)0xff:
    FUN_100beeb60();
    goto code_r0x000100bed3d0;
  case (undefined1 *)0x17:
  case (undefined1 *)0x1a:
    goto code_r0x000100bed3e0;
  case (undefined1 *)0x18:
  case (undefined1 *)0x4a:
    goto switchD_100becff0_caseD_dd;
  case (undefined1 *)0x1b:
    goto code_r0x000100bed3e4;
  case (undefined1 *)0x1c:
  case (undefined1 *)0x1e:
  case (undefined1 *)0x4c:
  case (undefined1 *)0x4e:
    goto code_r0x000100bed400;
  case (undefined1 *)0x1d:
    goto code_r0x000100bed40c;
  case (undefined1 *)0x27:
    goto code_r0x000100bed39c;
  case (undefined1 *)0x2f:
  case (undefined1 *)0x59:
  case (undefined1 *)0x61:
  case (undefined1 *)0x63:
  case (undefined1 *)0x91:
  case (undefined1 *)0x99:
  case (undefined1 *)0xd1:
  case (undefined1 *)0xd9:
    goto code_r0x000100bed268;
  case (undefined1 *)0x33:
    param_3 = param_3 + 0xdfc;
  case (undefined1 *)0x67:
  case (undefined1 *)0x6f:
  case (undefined1 *)0x77:
    FUN_100bed61c(param_1,&DAT_00006b6f,param_3);
    return;
  case (undefined1 *)0x45:
  case (undefined1 *)0x89:
  case (undefined1 *)0xc9:
  case (undefined1 *)0xe3:
  case (undefined1 *)0xf1:
LAB_100bed38c:
    FUN_100beeb54();
    FUN_100b6f838();
    FUN_100b6fbb4();
code_r0x000100bed39c:
    FUN_100b8a7ec();
    return;
  case (undefined1 *)0x46:
    goto code_r0x000100bed418;
  case (undefined1 *)0x54:
  case (undefined1 *)0x68:
  case (undefined1 *)0x70:
  case (undefined1 *)0x78:
  case (undefined1 *)0x8c:
  case (undefined1 *)0xa0:
  case (undefined1 *)0xa8:
  case (undefined1 *)0xb0:
  case (undefined1 *)0xb8:
    FUN_100beeb60();
  case (undefined1 *)0xac:
  case (undefined1 *)0xbc:
    in_ZR = true;
    puVar3 = (undefined1 *)0x0;
    goto code_r0x000100bed5d0;
  case (undefined1 *)0x55:
  case (undefined1 *)0x69:
  case (undefined1 *)0x71:
  case (undefined1 *)0x79:
  case (undefined1 *)0x8d:
  case (undefined1 *)0xa1:
  case (undefined1 *)0xa9:
  case (undefined1 *)0xb1:
  case (undefined1 *)0xb9:
  case (undefined1 *)0xcd:
  case (undefined1 *)0xe1:
    puVar3 = &DAT_65707974;
    pbVar4 = (byte *)0x756c6176;
  case (undefined1 *)0x53:
    puVar2 = (undefined1 *)((ulong)pbVar4 & 0xffff0000ffffffff | 0x6500000000);
    if ((bool)in_ZR) {
      puVar2 = puVar3;
    }
    puVar3 = &DAT_e400000000000000;
    goto code_r0x000100bed31c;
  case (undefined1 *)0x6c:
    goto code_r0x000100bed54c;
  case (undefined1 *)0x73:
    FUN_100beebcc();
    FUN_100beeeec();
    FUN_100b6fbb4();
  case (undefined1 *)0x57:
    FUN_100b8a7ec();
    return;
  case (undefined1 *)0x74:
  case (undefined1 *)0x7c:
    goto code_r0x000100bed5d0;
  case (undefined1 *)0x76:
  case (undefined1 *)0x7e:
  case (undefined1 *)0xae:
  case (undefined1 *)0xb6:
  case (undefined1 *)0xbe:
  case (undefined1 *)0xe6:
    goto code_r0x000100bed658;
  case (undefined1 *)0x7b:
    FUN_100beeb60();
    FUN_100beed28();
    goto LAB_100bed38c;
  case (undefined1 *)0x87:
    goto code_r0x000100bed43c;
  case (undefined1 *)0x88:
  case (undefined1 *)0xc8:
    param_3 = (code *)0x100b81000;
  case (undefined1 *)0xf0:
    FUN_100bed61c(param_1,&DAT_00006b6f,param_3 + 0xbd4);
    return;
  case (undefined1 *)0x8b:
    goto code_r0x000100bed2b0;
  case (undefined1 *)0x8f:
    param_3 = switchD_100bab490::caseD_85;
  case (undefined1 *)0x13:
  case (undefined1 *)0x43:
    FUN_100bed61c(param_1,&DAT_00006b6f,param_3);
    return;
  case (undefined1 *)0x9b:
    goto code_r0x000100bed26c;
  case (undefined1 *)0xa3:
    goto code_r0x000100bed4c0;
  case (undefined1 *)0xa4:
    FUN_100bed61c(param_1,&DAT_00006b6f,FUN_100b94b98);
    return;
  case (undefined1 *)0xab:
    if ((bool)in_ZR) {
      pbVar4 = (byte *)0x79746963;
      goto LAB_100bed568;
    }
    in_ZR = (int)puVar3 == 1;
    puVar3 = (undefined1 *)0xec00000065646f63;
    pbVar4 = (byte *)0x72746e756f63;
  case (undefined1 *)0xbb:
  case (undefined1 *)0xc7:
    pbVar4 = (byte *)((ulong)pbVar4 | 0x5f79000000000000);
    uVar5 = 0x69676572;
    goto code_r0x000100bed54c;
  case (undefined1 *)0xb3:
    pbVar4 = (byte *)0x7265747369676572;
  case (undefined1 *)0x6b:
    if (!(bool)in_ZR) {
      pbVar4 = (byte *)0x746f687370616e73;
    }
    FUN_100beeb54(param_1,pbVar4);
    FUN_100b6f838();
    FUN_100b6fbb4();
    goto code_r0x000100bed4c0;
  case (undefined1 *)0xb4:
  case (undefined1 *)0xe4:
    goto code_r0x000100bed448;
  case (undefined1 *)0xb5:
  case (undefined1 *)0xe5:
    goto code_r0x000100bed3d0;
  case (undefined1 *)0xcb:
    goto code_r0x000100bed650;
  case (undefined1 *)0xcc:
  case (undefined1 *)0xe0:
    FUN_100bed61c();
    return;
  case (undefined1 *)0xcf:
    goto code_r0x000100bed31c;
  case (undefined1 *)0xdf:
  case (undefined1 *)0x75:
  case (undefined1 *)0x7d:
  case (undefined1 *)0xad:
  case (undefined1 *)0xbd:
    FUN_100beebcc();
    puVar2 = &DAT_00006b6f;
    (*param_3)(&DAT_00006b6f);
    param_1 = &stack0xffffffffffffffe8;
    goto code_r0x000100bed650;
  }
LAB_100bed28c:
  param_1 = puVar6;
  FUN_100beeb94();
switchD_100becff0_caseD_69:
  goto code_r0x000100bed298;
code_r0x000100bed650:
  FUN_100beeb94(param_1,puVar2);
  FUN_100b6f838();
  goto code_r0x000100bed658;
code_r0x000100bed43c:
code_r0x000100bed440:
  FUN_100beebcc();
  FUN_100beeed4();
  goto code_r0x000100bed448;
code_r0x000100bed400:
  FUN_100beebcc();
code_r0x000100bed40c:
  FUN_100beeef8();
  FUN_100b6fbb4();
code_r0x000100bed414:
  goto code_r0x000100bed418;
code_r0x000100bed3d0:
  FUN_100beeb54(&DAT_e600000000000000);
code_r0x000100bed3e0:
  FUN_100b6f838();
code_r0x000100bed3e4:
  FUN_100b6fbb4();
  goto switchD_100becff0_caseD_dd;
code_r0x000100bed284:
  goto LAB_100bed28c;
code_r0x000100bed268:
code_r0x000100bed26c:
  goto LAB_100bed28c;
code_r0x000100bed658:
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
code_r0x000100bed4c0:
  FUN_100b8a7ec();
  return;
code_r0x000100bed31c:
  FUN_100beeb54(puVar3,param_1,puVar2);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
code_r0x000100bed448:
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
code_r0x000100bed418:
  FUN_100b8a7ec();
  return;
switchD_100becff0_caseD_dd:
  FUN_100b8a7ec();
  return;
code_r0x000100bed2b0:
  Swift::Hasher::_combine((__uint64)param_1,(Hasher)0x6b6f);
  FUN_100b56e88();
  return;
code_r0x000100bed298:
  FUN_100beeb9c(param_1);
  return;
code_r0x000100bed5d0:
  if ((bool)in_ZR) {
    FUN_100beede4("MAYBE_JSON_TRUNCATED");
  }
  else {
    FUN_100beec04(puVar3);
    FUN_100beebf0();
    FUN_100beecb0();
  }
  FUN_100beeb54();
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
code_r0x000100bed54c:
  if (!(bool)in_ZR) {
    pbVar4 = (byte *)(uVar5 | 0x6e6f00000000);
  }
LAB_100bed568:
  FUN_100beeb54(puVar3,param_1,pbVar4);
  FUN_100b6f838();
  FUN_100b6fbb4();
  FUN_100b8a7ec();
  return;
}


