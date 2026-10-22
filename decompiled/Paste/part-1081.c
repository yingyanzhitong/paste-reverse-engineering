/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b815fc | FUN_100b815fc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b81630 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100b815fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x100b81658 | thunk_FUN_100b815fc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b81630 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100b815fc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x100b8165c | FUN_100b8165c */

/* WARNING: Removing unreachable block (ram,0x000100b81a94) */
/* WARNING: Removing unreachable block (ram,0x000100b81acc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100b8165c(ulong param_1,undefined8 param_2,uint param_3,undefined8 param_4,char *param_5)

{
  bool in_CY;
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  undefined8 *unaff_x21;
  char *unaff_x22;
  char *unaff_x23;
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
  undefined4 in_stack_00000004;
  char *in_stack_00000008;
  undefined1 auStack_30 [16];
  
  puVar4 = &DAT_e500000000000000;
  pcVar1 = &DAT_6c6576656c;
  puVar7 = (undefined8 *)(param_1 & 0xff);
  uVar5 = 0xc9a5b0;
  uVar9 = (uint)*(byte *)(puVar7 + 0x201934b6) * 4 + 0xb8168c;
  uVar8 = uVar5;
  switch(puVar7) {
  default:
    puVar4 = &DAT_e800000000000000;
  case (undefined8 *)0x44:
  case (undefined8 *)0x52:
  case (undefined8 *)0x78:
  case (undefined8 *)0x86:
  case (undefined8 *)0xa0:
  case (undefined8 *)0xae:
  case (undefined8 *)0xe6:
    pcVar1 = (char *)0x65746163;
switchD_100b81688_caseD_3a:
    SVar10.str = (char *)((ulong)pcVar1 & 0xffff0000ffffffff | 0x79726f6700000000);
    SVar10.bridgeObject = puVar4;
    return SVar10;
  case (undefined8 *)0x2:
  case (undefined8 *)0x9:
    puVar4 = &SUB_e900000000000070;
  case (undefined8 *)0xa:
    pcVar1 = (char *)0x6974;
  case (undefined8 *)0xe:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffff0000ffff | 0x656d0000);
switchD_100b81688_caseD_c:
    SVar12.str = (char *)((ulong)pcVar1 & 0xffff0000ffffffff | 0x6d61747300000000);
    SVar12.bridgeObject = puVar4;
    return SVar12;
  case (undefined8 *)0x3:
    puVar4 = &DAT_e400000000000000;
  case (undefined8 *)0x10:
    SVar13.bridgeObject = puVar4;
    SVar13.str = &DAT_65707974;
    return SVar13;
  case (undefined8 *)0x4:
    puVar4 = &DAT_e700000000000000;
  case (undefined8 *)0xd2:
    pcVar1 = (char *)0x7373656d;
  case (undefined8 *)0x7:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffff0000ffffffff | 0x676100000000);
switchD_100b81688_caseD_b:
    SVar11.str = (char *)((ulong)pcVar1 | 0x65000000000000);
    SVar11.bridgeObject = puVar4;
    return SVar11;
  case (undefined8 *)0x5:
    SVar14.bridgeObject = &DAT_e400000000000000;
    SVar14.str = (char *)0x61746164;
    return SVar14;
  case (undefined8 *)0x6:
  case (undefined8 *)0xf:
    puVar4 = &DAT_e600000000000000;
    pcVar1 = (char *)0x6e696769726f;
  case (undefined8 *)0x0:
    SVar15.bridgeObject = puVar4;
    SVar15.str = pcVar1;
    return SVar15;
  case (undefined8 *)0xb:
    goto switchD_100b81688_caseD_b;
  case (undefined8 *)0xc:
    goto switchD_100b81688_caseD_c;
  case (undefined8 *)0x20:
  case (undefined8 *)0x5c:
    unaff_x19 = puVar7;
switchD_100b81688_caseD_2a:
    thunk_FUN_100b815fc();
    *(char *)unaff_x19 = (char)pcVar1;
    SVar19.bridgeObject = puVar4;
    SVar19.str = pcVar1;
    return SVar19;
  case (undefined8 *)0x22:
  case (undefined8 *)0x2b:
  case (undefined8 *)0x32:
  case (undefined8 *)0x63:
    goto switchD_100b81688_caseD_22;
  case (undefined8 *)0x23:
  case (undefined8 *)0x2f:
  case (undefined8 *)0x90:
  case (undefined8 *)0x29:
  case (undefined8 *)0x30:
  case (undefined8 *)0x25:
  case (undefined8 *)0x2c:
  case (undefined8 *)0x24:
  case (undefined8 *)0x2e:
  case (undefined8 *)0x5e:
switchD_100b81688_caseD_22:
    SVar21 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar21;
  case (undefined8 *)0x2a:
  case (undefined8 *)0x5a:
  case (undefined8 *)0x8e:
  case (undefined8 *)0xb6:
  case (undefined8 *)0xee:
    goto switchD_100b81688_caseD_2a;
  case (undefined8 *)0x34:
    DAT_101045570 = &DAT_6c6576656c;
  case (undefined8 *)0xf4:
switchD_100b81688_caseD_d0:
    SVar24.bridgeObject = &DAT_e500000000000000;
    SVar24.str = &DAT_6c6576656c;
    return SVar24;
  case (undefined8 *)0x35:
  case (undefined8 *)0x49:
  case (undefined8 *)0x69:
  case (undefined8 *)0x7d:
  case (undefined8 *)0x91:
  case (undefined8 *)0xa5:
  case (undefined8 *)0xb9:
  case (undefined8 *)0xcd:
  case (undefined8 *)0xd5:
  case (undefined8 *)0xdd:
  case (undefined8 *)0xf1:
    break;
  case (undefined8 *)0x36:
  case (undefined8 *)0x4a:
  case (undefined8 *)0x6a:
  case (undefined8 *)0x7e:
  case (undefined8 *)0x92:
  case (undefined8 *)0xa6:
  case (undefined8 *)0xba:
  case (undefined8 *)0xce:
  case (undefined8 *)0xd6:
  case (undefined8 *)0xde:
  case (undefined8 *)0xf2:
  case (undefined8 *)0xb4:
    pcVar1 = (char *)CONCAT35(uRam0000006c65766571,
                              CONCAT23(uRam0000006c6576656f,
                                       CONCAT12(uRam0000006c6576656e,
                                                CONCAT11(DAT_6c6576656d,DAT_6c6576656c))));
    puVar4 = _DAT_6c65766574;
    FUN_100b815fc(pcVar1,_DAT_6c65766574);
    *(char *)puVar7 = (char)pcVar1;
switchD_100b81688_caseD_f0:
    SVar17.bridgeObject = puVar4;
    SVar17.str = pcVar1;
    return SVar17;
  case (undefined8 *)0x38:
  case (undefined8 *)0x6c:
    FUN_100bed610();
    SVar16.bridgeObject = puVar4;
    SVar16.str = pcVar1;
    return SVar16;
  case (undefined8 *)0x3a:
  case (undefined8 *)0x42:
  case (undefined8 *)0x6e:
  case (undefined8 *)0x76:
  case (undefined8 *)0x96:
  case (undefined8 *)0x9e:
  case (undefined8 *)0xbe:
  case (undefined8 *)0xc6:
  case (undefined8 *)0xc8:
  case (undefined8 *)0xf6:
  case (undefined8 *)0xfe:
    goto switchD_100b81688_caseD_3a;
  case (undefined8 *)0x4f:
  case (undefined8 *)0x83:
  case (undefined8 *)0xab:
  case (undefined8 *)0xdb:
  case (undefined8 *)0xe3:
    DAT_6c6576656d = 0;
    SVar28.bridgeObject = &DAT_e500000000000000;
    SVar28.str = &DAT_6c6576656c;
    return SVar28;
  case (undefined8 *)0x58:
    FUN_100b80dd8();
    if (unaff_x21 == (undefined8 *)0x0) {
      *puVar7 = pcVar1;
    }
  case (undefined8 *)0x48:
    SVar23.bridgeObject = puVar4;
    SVar23.str = pcVar1;
    return SVar23;
  case (undefined8 *)0x59:
  case (undefined8 *)0x8c:
  case (undefined8 *)0x8d:
    goto switchD_100b81688_caseD_59;
  case (undefined8 *)0x61:
  case (undefined8 *)0x5f:
    unaff_x19 = unaff_x21;
  case (undefined8 *)0x31:
  case (undefined8 *)0x28:
  case (undefined8 *)0x7c:
    pcVar1 = (char *)&DAT_101045000;
  case (undefined8 *)0x60:
    pcVar1 = pcVar1 + 0x580;
  case (undefined8 *)0x2d:
  case (undefined8 *)0x5d:
    FUN_100b6730c(pcVar1);
  case (undefined8 *)0xd9:
  case (undefined8 *)0xe1:
    unaff_x22 = pcVar1;
  case (undefined8 *)0x81:
  case (undefined8 *)0xa9:
    puVar7 = (undefined8 *)0x5;
  case (undefined8 *)0x21:
  case (undefined8 *)0x26:
  case (undefined8 *)0x4d:
    in_stack_00000004._3_1_ = SUB81(puVar7,0);
  case (undefined8 *)0x65:
    pcVar1 = (char *)&DAT_101045000;
  case (undefined8 *)0xec:
    pcVar1 = pcVar1 + 0x568;
  case (undefined8 *)0x27:
    FUN_100b6730c(pcVar1);
    param_5 = pcVar1;
    switchD_100b81688::caseD_d8();
    unaff_x23 = pcVar1;
  case (undefined8 *)0x64:
  case (undefined8 *)0x68:
    pcVar1 = unaff_x22;
    puVar7 = &stack0x00000008;
    puVar4 = (undefined1 *)((long)&stack0x00000004 + 3);
    unaff_x22 = pcVar1;
switchD_100b81688_caseD_a8:
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (puVar7,pcVar1,puVar4,unaff_x23,unaff_x22,param_5);
    if (unaff_x19 != (undefined8 *)0x0) {
      in_stack_00000008 = pcVar1;
    }
    SVar22.bridgeObject = puVar4;
    SVar22.str = in_stack_00000008;
    return SVar22;
  case (undefined8 *)0x80:
  case (undefined8 *)0xe0:
    if (in_CY) {
      in_CY = false;
      uVar8 = 4;
      uVar9 = 2;
      break;
    }
    goto LAB_100b81a28;
  case (undefined8 *)0xa4:
    FUN_100b818d4();
    SVar21 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar21;
  case (undefined8 *)0xa8:
    goto switchD_100b81688_caseD_a8;
  case (undefined8 *)0xb5:
  case (undefined8 *)0xed:
    goto switchD_100b81688_caseD_b5;
  case (undefined8 *)0xb8:
  case (undefined8 *)0x62:
    FUN_10044b1fc();
    *(char *)puVar7 = (char)pcVar1;
    SVar20.bridgeObject = puVar4;
    SVar20.str = pcVar1;
    return SVar20;
  case (undefined8 *)0xbc:
    goto switchD_100b81688_caseD_bc;
  case (undefined8 *)0xbd:
  case (undefined8 *)0xf5:
  case (undefined8 *)0x39:
  case (undefined8 *)0x6d:
  case (undefined8 *)0x95:
    pcVar1 = (char *)(ulong)*unaff_x20;
    FUN_100b8165c();
    *puVar7 = pcVar1;
    puVar7[1] = puVar4;
switchD_100b81688_caseD_cc:
    SVar18.bridgeObject = puVar4;
    SVar18.str = pcVar1;
    return SVar18;
  case (undefined8 *)0xcc:
  case (undefined8 *)0xd4:
  case (undefined8 *)0xdc:
    goto switchD_100b81688_caseD_cc;
  case (undefined8 *)0xd0:
    goto switchD_100b81688_caseD_d0;
  case (undefined8 *)0xd1:
    puVar7 = (undefined8 *)(ulong)(param_3 + 6);
    uVar5 = 0xffff00;
  case (undefined8 *)0x4e:
  case (undefined8 *)0x82:
  case (undefined8 *)0xaa:
  case (undefined8 *)0xda:
  case (undefined8 *)0xe2:
    uVar9 = 2;
    if (uVar5 <= (uint)puVar7) {
      uVar9 = 4;
    }
    if ((uint)puVar7 >> 8 < 0xff) {
      uVar9 = 1;
    }
    uVar5 = 0;
    if (0xf9 < param_3) {
      uVar5 = uVar9;
    }
                    /* WARNING: Could not recover jumptable at 0x000100b81a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&BYTE_100c9a5bc)[uVar5] * 4 + 0x100b81a88))();
    SVar27.bridgeObject = puVar4;
    SVar27.str = pcVar1;
    return SVar27;
  case (undefined8 *)0xd8:
    if (DAT_101045588 != (char *)0x0) {
      SVar21.bridgeObject = &DAT_e500000000000000;
      SVar21.str = DAT_101045588;
      return SVar21;
    }
    register0x00000008 = (BADSPACEBASE *)auStack_30;
  case (undefined8 *)0x4c:
    puVar2 = &DAT_101045580;
    FUN_100b6734c(&DAT_101045580);
    puVar3 = &DAT_101045590;
    FUN_100003a00(&DAT_101045590,FUN_100bd31c0,&TargetProtocolConformanceDescriptor_100c9e2c8);
    *(undefined **)register0x00000008 =
         PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
    *(undefined **)((long)register0x00000008 + 8) = puVar3;
    pcVar1 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
    _swift_getWitnessTable
              (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,puVar2
               ,register0x00000008);
    DAT_101045588 = pcVar1;
    SVar25.bridgeObject = puVar2;
    SVar25.str = pcVar1;
    return SVar25;
  case (undefined8 *)0xf0:
    goto switchD_100b81688_caseD_f0;
  }
  uVar5 = uVar9;
  if (in_CY) {
    uVar5 = uVar8;
  }
  puVar7 = (undefined8 *)0x0;
switchD_100b81688_caseD_59:
  in_CY = 0xfe < (uint)puVar7;
switchD_100b81688_caseD_b5:
  if (!in_CY) {
    uVar5 = 1;
  }
  puVar7 = (undefined8 *)(ulong)uVar5;
  if (uVar5 == 4) {
    uVar5 = CONCAT22(uRam0000006c6576656f,CONCAT11(uRam0000006c6576656e,DAT_6c6576656d));
joined_r0x000100b81a0c:
    if (uVar5 != 0) {
LAB_100b81a10:
      iVar6 = ((uint)DAT_6c6576656c | uVar5 << 8) - 7;
      goto LAB_100b81a34;
    }
  }
  else {
switchD_100b81688_caseD_bc:
    if ((int)puVar7 != 2) {
      uVar5 = (uint)DAT_6c6576656d;
      goto joined_r0x000100b81a0c;
    }
    uVar5 = (uint)CONCAT11(uRam0000006c6576656e,DAT_6c6576656d);
    if (CONCAT11(uRam0000006c6576656e,DAT_6c6576656d) != 0) goto LAB_100b81a10;
  }
LAB_100b81a28:
  iVar6 = DAT_6c6576656c - 7;
  if (DAT_6c6576656c < 7) {
    iVar6 = -1;
  }
LAB_100b81a34:
  SVar26.str = (char *)(ulong)(iVar6 + 1);
  SVar26.bridgeObject = &DAT_e500000000000000;
  return SVar26;
}



/* Address: 0x100b8170c | FUN_100b8170c */

void FUN_100b8170c(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100beb570(*param_1,*param_2);
  return;
}



/* Address: 0x100b81718 | FUN_100b81718 */

void FUN_100b81718(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec80c(*unaff_x20);
  return;
}



/* Address: 0x100b81720 | FUN_100b81720 */

void FUN_100b81720(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100beca20(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b81728 | FUN_100b81728 */

void FUN_100b81728(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed610(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b81730 | switchD_100b81688::caseD_36 */

void switchD_100b81688::caseD_36(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b815fc(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100b8175c | FUN_100b8175c */

void FUN_100b8175c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100b8165c();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100b81784 | FUN_100b81784 */

void FUN_100b81784(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b8165c(*unaff_x20);
  return;
}



/* Address: 0x100b8178c | FUN_100b8178c */

void FUN_100b8178c(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100b815fc();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b817b0 | switchD_100b81688::caseD_b8 */

void switchD_100b81688::caseD_b8(undefined1 *param_1,undefined1 param_2)

{
  FUN_10044b1fc();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b817d4 | FUN_100b817d4 */

String FUN_100b817d4(void)

{
  String SVar1;
  
  FUN_100b818d4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b817fc | FUN_100b817fc */

String FUN_100b817fc(void)

{
  String SVar1;
  
  FUN_100b818d4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b81824 | FUN_100b81824 */

void FUN_100b81824(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_39;
  undefined1 local_38 [8];
  
  puVar1 = &DAT_101045580;
  FUN_100b6730c(&DAT_101045580);
  local_39 = 5;
  puVar2 = &DAT_101045568;
  FUN_100b6730c(&DAT_101045568);
  puVar3 = puVar2;
  switchD_100b81688::caseD_d8();
  Swift::KeyedDecodingContainer::_decodeIfPresent(local_38,puVar1,&local_39,puVar2,puVar1,puVar3);
  return;
}



/* Address: 0x100b818ac | switchD_100b81688::caseD_58 */

void switchD_100b81688::caseD_58(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100b80dd8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100b818d4 | FUN_100b818d4 */

void FUN_100b818d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045570 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a708;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a708,&DAT_100f37870);
  DAT_101045570 = pTVar1;
  return;
}



/* Address: 0x100b81914 | FUN_100b81914 */

void FUN_100b81914(void)

{
  long unaff_x20;
  
  FUN_100b81824(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b8192c | switchD_100b81688::caseD_d8 */

void switchD_100b81688::caseD_d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_101045588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101045580;
  FUN_100b6734c(&DAT_101045580);
  puVar2 = &DAT_101045590;
  FUN_100003a00(&DAT_101045590,FUN_100bd31c0,&TargetProtocolConformanceDescriptor_100c9e2c8);
  local_30 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
  puVar3 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,puVar1,
             &local_30);
  DAT_101045588 = puVar3;
  return;
}



/* Address: 0x100b819b4 | FUN_100b819b4 */

int FUN_100b819b4(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = -1;
    goto LAB_100b81a34;
  }
  if (param_2 < 0xfa) {
LAB_100b81a28:
    iVar2 = *param_1 - 7;
    if (*param_1 < 7) {
      iVar2 = -1;
    }
  }
  else {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
joined_r0x000100b81a0c:
      if (uVar1 == 0) goto LAB_100b81a28;
    }
    else {
      if (iVar2 != 2) {
        uVar1 = (uint)param_1[1];
        goto joined_r0x000100b81a0c;
      }
      uVar1 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) == 0) goto LAB_100b81a28;
    }
    iVar2 = ((uint)*param_1 | uVar1 << 8) - 7;
  }
LAB_100b81a34:
  return iVar2 + 1;
}



/* Address: 0x100b81a3c | switchD_100b81688::caseD_d1 */

void switchD_100b81688::caseD_d1(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 6) {
    uVar2 = 4;
  }
  if (param_3 + 6 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xf9 < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfa) {
                    /* WARNING: Could not recover jumptable at 0x000100b81a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&BYTE_100c9a5bc)[uVar1] * 4 + 0x100b81a88))();
    return;
  }
  *param_1 = (char)param_2 + '\x06';
                    /* WARNING: Could not recover jumptable at 0x000100b81ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b81abc + (ulong)(&BYTE_100c9a5b7)[uVar1] * 4))();
  return;
}



/* Address: 0x100b81af8 | FUN_100b81af8 */

undefined1  [16] FUN_100b81af8(void)

{
  return ZEXT816(0x100f37870);
}



/* Address: 0x100b81b08 | thunk_FUN_100b81b0c */

void thunk_FUN_100b81b0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045598 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a6e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a6e0,&DAT_100f37870);
  DAT_101045598 = pTVar1;
  return;
}



/* Address: 0x100b81b0c | FUN_100b81b0c */

void FUN_100b81b0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045598 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9a6e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9a6e0,&DAT_100f37870);
  DAT_101045598 = pTVar1;
  return;
}



/* Address: 0x100b81b4c | thunk_FUN_100b81b50 */

void thunk_FUN_100b81b50(void)

{
  undefined *puVar1;
  
  if (DAT_1010455a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a640;
  _swift_getWitnessTable(&DAT_100c9a640,&DAT_100f37870);
  DAT_1010455a0 = puVar1;
  return;
}



/* Address: 0x100b81b50 | FUN_100b81b50 */

void FUN_100b81b50(void)

{
  undefined *puVar1;
  
  if (DAT_1010455a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a640;
  _swift_getWitnessTable(&DAT_100c9a640,&DAT_100f37870);
  DAT_1010455a0 = puVar1;
  return;
}



/* Address: 0x100b81b90 | thunk_FUN_100b81b94 */

void thunk_FUN_100b81b94(void)

{
  undefined *puVar1;
  
  if (DAT_1010455a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a618;
  _swift_getWitnessTable(&DAT_100c9a618,&DAT_100f37870);
  DAT_1010455a8 = puVar1;
  return;
}



/* Address: 0x100b81b94 | FUN_100b81b94 */

void FUN_100b81b94(void)

{
  undefined *puVar1;
  
  if (DAT_1010455a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9a618;
  _swift_getWitnessTable(&DAT_100c9a618,&DAT_100f37870);
  DAT_1010455a8 = puVar1;
  return;
}



/* Address: 0x100b81bd4 | thunk_FUN_100b8165c */

void thunk_FUN_100b8165c(void)

{
  FUN_100b8165c();
  return;
}



/* Address: 0x100b81bd8 | FUN_100b81bd8 */

void FUN_100b81bd8(void)

{
  return;
}



/* Address: 0x100b81bec | FUN_100b81bec */

void FUN_100b81bec(void)

{
  (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b81bf8 | FUN_100b81bf8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b81bf8(void)

{
  return 0;
}



/* Address: 0x100b81c04 | FUN_100b81c04 */

void FUN_100b81c04(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b81c10 | FUN_100b81c10 */

void FUN_100b81c10(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry26SentryExtraContextProvider::crashWrapper) = param_1;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry26SentryExtraContextProvider::processInfoWrapper) = param_2
  ;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100b81c74 | FUN_100b81c74 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b81d1c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b81c74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x20) = 0x656369766564;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e600000000000000;
  puVar2 = puVar1;
  FUN_100b81d34();
  puVar3 = &DAT_101044968;
  FUN_100b6730c();
  *(undefined **)(puVar1 + 0x30) = puVar2;
  *(undefined **)(puVar1 + 0x48) = puVar3;
  *(undefined8 *)(puVar1 + 0x50) = 0x707061;
  *(undefined8 *)(puVar1 + 0x58) = 0xe300000000000000;
  puVar2 = puVar3;
  FUN_100b82070();
  *(undefined **)(puVar1 + 0x78) = puVar3;
  *(undefined **)(puVar1 + 0x60) = puVar2;
  Swift::Dictionary::_init
            (puVar2,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Any_100eae0c0 + 8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  return;
}



/* Address: 0x100b81d34 | FUN_100b81d34 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b81e5c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100b81d34(void)

{
  undefined1 *puVar1;
  byte bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  long unaff_x20;
  ID self;
  String SVar10;
  String SVar11;
  ID local_100;
  undefined1 *puStack_f8;
  undefined *local_e8;
  ID local_e0 [17];
  undefined *local_58;
  
  puVar6 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar6 + 0x20) = SVar10;
  IVar3 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry26SentryExtraContextProvider::crashWrapper),
                        "freeMemorySize");
  puVar4 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar4,"initWithUnsignedLongLong:",IVar3);
  uVar5 = 0;
  FUN_100b7f4fc();
  *(ID *)(puVar6 + 0x30) = IVar3;
  *(undefined8 *)(puVar6 + 0x48) = uVar5;
  *(undefined8 *)(puVar6 + 0x50) = 0x6f737365636f7270;
  *(undefined8 *)(puVar6 + 0x58) = 0xef746e756f635f72;
  self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryExtraContextProvider::processInfoWrapper);
  IVar3 = _objc_msgSend(self,"processorCount");
  puVar4 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar4,"initWithInteger:",IVar3);
  *(undefined8 *)(puVar6 + 0x78) = uVar5;
  *(ID *)(puVar6 + 0x60) = IVar3;
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar9 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  puVar4 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  local_58 = (undefined *)
             Swift::Dictionary::_init(IVar3,PTR___type_metadata_for_Swift_String_100eac208);
  pcVar8 = "thermalState";
  IVar3 = _objc_msgSend(self,"thermalState");
  switch(IVar3) {
  case 0:
    local_100 = 0x6c616e696d6f6e;
    goto LAB_100b81ec4;
  case 1:
    local_100 = 0x72696166;
    puStack_f8 = &DAT_e400000000000000;
    break;
  case 2:
    local_100 = 0x73756f69726573;
LAB_100b81ec4:
    puStack_f8 = &DAT_e700000000000000;
    break;
  case 3:
    local_100 = 0x6c61636974697263;
    puStack_f8 = &DAT_e800000000000000;
    break;
  default:
    FUN_100b84dac(0);
    local_100 = 0;
    puStack_f8 = (undefined1 *)0xe000000000000000;
    Swift::_StringGuts::grow(0x27,(_StringGuts)pcVar8);
    SVar10.bridgeObject = (void *)0x8000000100dcad10;
    SVar10.str = (char *)0xd000000000000025;
    SVar11.bridgeObject = puVar4;
    SVar11.str = pcVar9;
    Swift::String::append(SVar10,SVar11);
    uVar7 = 0;
    local_e0[0] = IVar3;
    FUN_100b67678(0);
    Swift::__print_unlocked
              (local_e0,&local_100,uVar7,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    puVar1 = puStack_f8;
    FUN_100b84df8(3,local_100,puStack_f8,0xd000000000000062,0x8000000100dcad40,0x35);
    _swift_bridgeObjectRelease(puVar1);
    goto LAB_100b81f28;
  }
  local_e8 = puVar6;
  FUN_100b78fe8(&local_100,0x5f6c616d72656874,0xed00006574617473);
LAB_100b81f28:
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xc,0,0);
  if ((bVar2 & 1) != 0) {
    IVar3 = _objc_msgSend(self,"isLowPowerModeEnabled");
    puVar6 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    local_100 = _objc_msgSend((ID)puVar6,"initWithBool:",IVar3);
    local_e8 = (undefined *)uVar5;
    FUN_100b78fe8(&local_100,0x65776f705f776f6c,0xee0065646f6d5f72);
  }
  return local_58;
}



/* Address: 0x100b82070 | FUN_100b82070 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b82120 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100b82070(void)

{
  undefined *puVar1;
  ID IVar2;
  undefined *self;
  undefined8 uVar3;
  long unaff_x20;
  String SVar4;
  
  puVar1 = &DAT_1010448c8;
  FUN_100b6730c();
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar1 + 0x20) = SVar4;
  IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry26SentryExtraContextProvider::crashWrapper),
                        "appMemorySize");
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"initWithUnsignedLongLong:",IVar2);
  uVar3 = 0;
  FUN_100b7f4fc();
  *(undefined8 *)(puVar1 + 0x48) = uVar3;
  *(ID *)(puVar1 + 0x30) = IVar2;
  Swift::Dictionary::_init
            (uVar3,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Any_100eae0c0 + 8,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  return;
}



/* Address: 0x100b82134 | _TtC6Sentry26SentryExtraContextProvider::getExtraContext */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryExtraContextProvider::getExtraContext(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100b81c74(param_1);
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return (ID)pNVar1;
}



/* Address: 0x100b82198 | FUN_100b82198 */

void FUN_100b82198(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryExtraContextProvider",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b821c4);
  (*pcVar1)();
}



/* Address: 0x100b821c4 | _TtC6Sentry26SentryExtraContextProvider::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryExtraContextProvider::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b82198();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + crashWrapper));
  IVar1 = *(ID *)(param_1 + processInfoWrapper);
  _swift_unknownObjectRelease();
  return IVar1;
}



/* Address: 0x100b821d0 | _TtC6Sentry26SentryExtraContextProvider::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryExtraContextProvider::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + crashWrapper));
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + processInfoWrapper));
  return;
}



/* Address: 0x100b82208 | FUN_100b82208 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b82208(void)

{
  return ZEXT816(0x100fa0458);
}



/* Address: 0x100b82228 | FUN_100b82228 */

void FUN_100b82228(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccdc60);
  return;
}



/* Address: 0x100b82234 | FUN_100b82234 */

void FUN_100b82234(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_18 = local_20;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x68);
  return;
}



/* Address: 0x100b82278 | FUN_100b82278 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b82278(void)

{
  _objc_msgSend((ID)&objc::class_t::SentryCoreDataSwizzlingHelper,"stop");
  return;
}



/* Address: 0x100b8229c | FUN_100b8229c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b8229c(undefined8 param_1)

{
  FUN_100b82278(param_1);
  return 0;
}



/* Address: 0x100b822c4 | FUN_100b822c4 */

void FUN_100b822c4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryCoreDataTrackingIntegration",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b822f0);
  (*pcVar1)();
}



/* Address: 0x100b822f0 | FUN_100b822f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b822f0(void)

{
  FUN_100b822c4();
  return 0;
}



/* Address: 0x100b822fc | FUN_100b822fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b822fc(void)

{
  return 0;
}



/* Address: 0x100b82334 | FUN_100b82334 */

void FUN_100b82334(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100b82340 | FUN_100b82340 */

void FUN_100b82340(void)

{
  _swift_getObjectType();
  FUN_100b6730c(&DAT_1010447d8);
  FUN_100b824a8();
  return;
}



/* Address: 0x100b82370 | _TtC6Sentry15SwiftDescriptor::getObjectClassName: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry15SwiftDescriptor::getObjectClassName_(ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  
  _swift_unknownObjectRetain(param_3);
  FUN_100b82340(param_3);
  _swift_unknownObjectRelease(param_3);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return (ID)pNVar1;
}



/* Address: 0x100b823d0 | FUN_100b823d0 */

void FUN_100b823d0(void)

{
  _swift_errorRetain();
  FUN_100b6730c(&DAT_101044978);
  FUN_100b824a8();
  return;
}



/* Address: 0x100b82400 | _TtC6Sentry15SwiftDescriptor::getSwiftErrorDescription: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry15SwiftDescriptor::getSwiftErrorDescription_(ID param_1,SEL param_2,ID param_3)

{
  NSString *pNVar1;
  
  FUN_100b823d0(param_3);
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100b82468 | _TtC6Sentry15SwiftDescriptor::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SwiftDescriptor::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100b82488 | FUN_100b82488 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b82488(void)

{
  return ZEXT816(0x100fa0520);
}



/* Address: 0x100b824a8 | FUN_100b824a8 */

String FUN_100b824a8(undefined8 param_1)

{
  String SVar1;
  
  SVar1 = Swift::String::_init(&stack0x00000008,param_1);
  return SVar1;
}



/* Address: 0x100b824b4 | FUN_100b824b4 */

void FUN_100b824b4(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100b824f4(param_1,param_2);
  return;
}



/* Address: 0x100b824f4 | FUN_100b824f4 */

ID FUN_100b824f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ID IVar2;
  long unaff_x20;
  
  FUN_100b69e00();
  lVar1 = _TtC6Sentry12SentryLogger::delegate;
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC6Sentry12SentryLogger::delegate,0);
  _swift_unknownObjectWeakAssign(unaff_x20 + lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry12SentryLogger::dateProvider) = param_2;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  _swift_unknownObjectRelease(param_1);
  return IVar2;
}



/* Address: 0x100b82584 | _TtC6Sentry12SentryLogger::initWithDelegate:dateProvider: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry12SentryLogger::initWithDelegate_dateProvider_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  _swift_unknownObjectRetain(param_3);
  _swift_unknownObjectRetain(param_4);
  FUN_100b824f4(param_3,param_4);
  return param_3;
}



/* Address: 0x100b825d0 | FUN_100b825d0 */

void FUN_100b825d0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b69e00();
  _swift_unknownObjectWeakInit(unaff_x20 + _TtC6Sentry12SentryLogger::delegate,0);
  *(undefined8 *)(unaff_x20 + _TtC6Sentry12SentryLogger::dateProvider) = param_1;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x100b82638 | FUN_100b82638 */

void FUN_100b82638(undefined8 param_1,undefined8 param_2)

{
  FUN_100b82c20(param_1,param_2,0);
  return;
}



/* Address: 0x100b82640 | FUN_100b82640 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b82640(undefined8 param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  char *pcVar1;
  ulong *puVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  Date DVar8;
  ID self;
  char *pcVar9;
  _NativeDictionary _Var10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  ID IVar15;
  _StringGuts capacity;
  undefined1 *puVar16;
  undefined *puVar17;
  _NativeDictionary _Var18;
  long lVar19;
  ulong uVar20;
  long unaff_x20;
  char *pcVar21;
  undefined8 uVar22;
  char *pcVar23;
  String SVar24;
  String SVar25;
  undefined1 auStack_e0 [8];
  undefined1 *local_d8;
  undefined8 local_d0;
  ID IStack_c8;
  undefined1 local_90 [8];
  char *local_88;
  char *local_80;
  undefined *local_78;
  char *local_68;
  
  _Var18.unknown = param_3;
  DVar8 = Foundation::Date::typeMetadataAccessor();
  puVar16 = auStack_e0 +
            -(*(long *)(*(long *)(DVar8.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  uVar12 = param_2[1];
  pcVar4 = (char *)param_2[2];
  lVar19 = param_2[3];
  uVar22 = param_2[4];
  self = unaff_x20 + _TtC6Sentry12SentryLogger::delegate;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    pcVar23 = param_3;
    _swift_bridgeObjectRetain();
    FUN_100b82e38();
    _swift_bridgeObjectRelease(param_3);
    pcVar9 = pcVar4;
    local_68 = pcVar23;
    thunk_FUN_100b6cd50();
    if (pcVar9 != (char *)0x0) {
      FUN_100b69598(0);
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar22);
      FUN_100b67fb8(lVar19,uVar22);
      local_d8 = puVar16;
      local_d0 = uVar12;
      IStack_c8 = self;
      if (lVar19 == 0) {
        _swift_bridgeObjectRetain(pcVar23);
        puVar16 = (undefined1 *)0x8000000100dcae50;
        _Var10.unknown = (undefined *)0xd000000000000017;
        FUN_100071370();
        capacity.unknown = puVar16;
        _swift_release(pcVar23);
        if (((ulong)puVar16 & 1) != 0) {
          param_4 = pcVar23;
          _swift_isUniquelyReferenced_nonNull_native();
          local_88 = pcVar23;
          FUN_100b6730c(&DAT_1010456f8);
          capacity.unknown = local_90;
          Swift::_NativeDictionary::uncheckedRemove
                    ((Bucket)&local_80,SUB81(capacity.unknown,0),_Var10);
          _swift_bridgeObjectRelease(local_78);
          local_68 = local_88;
          _Var18.unknown = _Var10.unknown;
        }
      }
      else {
        _Var18.unknown = (char *)0x8000000100dcae50;
        capacity.unknown = (undefined1 *)0xd000000000000017;
        FUN_100bd5914();
      }
      pcVar11 = pcVar4;
      _swift_bridgeObjectRetain();
      pcVar21 = (char *)0x0;
      do {
        pcVar1 = pcVar21 + 1;
        if (SCARRY8((long)pcVar21,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100b82a7c);
          (*pcVar6)();
        }
        uVar12 = *(undefined8 *)(pcVar11 + (long)pcVar21 * 8 + 0x20);
        local_80 = (char *)0x0;
        local_78 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x1b,capacity);
        _swift_bridgeObjectRelease(local_78);
        local_80 = (char *)0xd000000000000019;
        local_78 = (undefined *)0x8000000100dcae70;
        local_88 = pcVar21;
        SVar24 = Swift::CustomStringConvertible::get_description();
        SVar25.bridgeObject = param_4;
        SVar25.str = _Var18.unknown;
        Swift::String::append(SVar24,SVar25);
        _swift_bridgeObjectRelease(SVar24.bridgeObject);
        pcVar23 = local_68;
        puVar5 = local_78;
        pcVar11 = local_80;
        pcVar13 = local_68;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80 = pcVar23;
        pcVar14 = pcVar11;
        puVar17 = puVar5;
        FUN_100071370();
        lVar19 = *(long *)(pcVar23 + 0x10);
        uVar20 = (ulong)~(uint)puVar17 & 1;
        capacity.unknown = (undefined *)(lVar19 + uVar20);
        if (SCARRY8(lVar19,uVar20)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100b82a80);
          (*pcVar6)();
        }
        _Var18.unknown = &DAT_1010456f8;
        FUN_100b6730c();
        bVar7 = Swift::_NativeDictionary::ensureUnique
                          (SUB81(pcVar13,0),(__int64)capacity.unknown,_Var18);
        if ((bVar7) &&
           (pcVar14 = pcVar11, capacity.unknown = puVar5, FUN_100071370(),
           ((uint)puVar17 & 1) != ((uint)capacity.unknown & 1))) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100b82a94);
          (*pcVar6)();
        }
        pcVar23 = local_80;
        if (((ulong)puVar17 & 1) == 0) {
          *(ulong *)(local_80 + ((ulong)pcVar14 >> 6) * 8 + 0x40) =
               *(ulong *)(local_80 + ((ulong)pcVar14 >> 6) * 8 + 0x40) |
               1L << ((ulong)pcVar14 & 0x3f);
          puVar2 = (ulong *)(*(long *)(local_80 + 0x30) + (long)pcVar14 * 0x10);
          *puVar2 = (ulong)pcVar11;
          puVar2[1] = (ulong)puVar5;
          *(undefined8 *)(*(long *)(local_80 + 0x38) + (long)pcVar14 * 8) = uVar12;
          if (SCARRY8(*(long *)(local_80 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100b82a84);
            (*pcVar6)();
          }
          *(long *)(local_80 + 0x10) = *(long *)(local_80 + 0x10) + 1;
        }
        else {
          *(undefined8 *)(*(long *)(local_80 + 0x38) + (long)pcVar14 * 8) = uVar12;
          _swift_bridgeObjectRelease(puVar5);
        }
        local_68 = pcVar23;
        pcVar21 = pcVar21 + 1;
        pcVar11 = pcVar4;
      } while (pcVar1 != pcVar9);
      _swift_bridgeObjectRelease();
      self = IStack_c8;
      uVar12 = local_d0;
      puVar16 = local_d8;
    }
    DVar8.unknown =
         (undefined *)
         _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry12SentryLogger::dateProvider),"date");
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar8);
    IVar15 = _objc_msgSend((ID)&objc::class_t::SentryId,"empty");
    FUN_100bd5fac(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar12);
    FUN_100bd4adc(puVar16,IVar15,0,param_1,uVar3,uVar12,pcVar23,0);
    _objc_msgSend(self,"captureLog:",puVar16);
    _swift_unknownObjectRelease(self);
  }
  return;
}



/* Address: 0x100b82a94 | FUN_100b82a94 */

void FUN_100b82a94(undefined8 param_1,undefined8 param_2)

{
  FUN_100b82c6c(param_1,param_2,0);
  return;
}


