/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bab638 | switchD_100bab490::caseD_63 */

void switchD_100bab490::caseD_63(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046780 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9befc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9befc,&DAT_100f39a40);
  DAT_101046780 = pTVar1;
  return;
}



/* Address: 0x100bab678 | switchD_100bab490::caseD_25 */

void switchD_100bab490::caseD_25(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_101046788 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101044b60;
  FUN_100b6734c(&DAT_101044b60);
  local_20 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
  puStack_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
  puVar2 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,puVar1,
             &local_20);
  DAT_101046788 = puVar2;
  return;
}



/* Address: 0x100bab6d8 | FUN_100bab6d8 */

void FUN_100bab6d8(char *param_1,uint param_2,uint param_3)

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
                    /* WARNING: Could not recover jumptable at 0x000100bab720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bab724 + (ulong)(&BYTE_100c9bdac)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x06';
                    /* WARNING: Could not recover jumptable at 0x000100bab754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bab758 + (ulong)(&BYTE_100c9bda7)[uVar1] * 4))();
  return;
}



/* Address: 0x100bab794 | switchD_100bab490::caseD_98 */

undefined1  [16] switchD_100bab490::caseD_98(void)

{
  return ZEXT816(0x100f39a40);
}



/* Address: 0x100bab7a4 | switchD_100bab490::caseD_84 */

void switchD_100bab490::caseD_84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046790 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9bed4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bed4,&DAT_100f39a40);
  DAT_101046790 = pTVar1;
  return;
}



/* Address: 0x100bab7a8 | FUN_100bab7a8 */

void FUN_100bab7a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101046790 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9bed4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bed4,&DAT_100f39a40);
  DAT_101046790 = pTVar1;
  return;
}



/* Address: 0x100bab7e8 | thunk_FUN_100bab7ec */

void thunk_FUN_100bab7ec(void)

{
  undefined *puVar1;
  
  if (DAT_101046798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9be34;
  _swift_getWitnessTable(&DAT_100c9be34,&DAT_100f39a40);
  DAT_101046798 = puVar1;
  return;
}



/* Address: 0x100bab7ec | FUN_100bab7ec */

void FUN_100bab7ec(void)

{
  undefined *puVar1;
  
  if (DAT_101046798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9be34;
  _swift_getWitnessTable(&DAT_100c9be34,&DAT_100f39a40);
  DAT_101046798 = puVar1;
  return;
}



/* Address: 0x100bab82c | thunk_FUN_100bab830 */

void thunk_FUN_100bab830(void)

{
  undefined *puVar1;
  
  if (DAT_1010467a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9be0c;
  _swift_getWitnessTable(&DAT_100c9be0c,&DAT_100f39a40);
  DAT_1010467a0 = puVar1;
  return;
}



/* Address: 0x100bab830 | FUN_100bab830 */

void FUN_100bab830(void)

{
  undefined *puVar1;
  
  if (DAT_1010467a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9be0c;
  _swift_getWitnessTable(&DAT_100c9be0c,&DAT_100f39a40);
  DAT_1010467a0 = puVar1;
  return;
}



/* Address: 0x100bab870 | switchD_100bab490::caseD_85 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bab77c) */
/* WARNING: Removing unreachable block (ram,0x000100bab730) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String switchD_100bab490::caseD_85
                 (TargetProtocolConformanceDescriptor *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined *puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  uint uVar7;
  char *unaff_x19;
  TargetProtocolConformanceDescriptor *unaff_x20;
  code *unaff_x21;
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
  
code_r0x000100bab870:
  pcVar4 = (char *)0xe900000000000065;
  pTVar2 = (TargetProtocolConformanceDescriptor *)&DAT_7a69735f79646f62;
  pcVar6 = (char *)((ulong)param_1 & 0xff);
  param_1 = pTVar2;
  switch(pcVar6) {
  case (char *)0x0:
    goto switchD_100bab490_caseD_0;
  default:
    pcVar4 = &DAT_e700000000000000;
  case (char *)0x48:
  case (char *)0x56:
  case (char *)0x7c:
  case (char *)0x8a:
  case (char *)0xa4:
  case (char *)0xb2:
  case (char *)0xea:
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x6b6f6f63;
  case (char *)0x3e:
  case (char *)0x46:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xc2:
  case (char *)0xca:
  case (char *)0xcc:
  case (char *)0xfa:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffff0000ffffffff | 0x656900000000);
    break;
  case (char *)0x2:
  case (char *)0xb:
    pcVar4 = &DAT_e700000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x6568;
  case (char *)0x9:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffffffff0000ffff | 0x64610000);
  case (char *)0xf4:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffff0000ffffffff | 0x726500000000);
    break;
  case (char *)0x3:
  case (char *)0xc:
    pcVar4 = &DAT_e800000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x656d67617266;
  case (char *)0x10:
  case (char *)0x5c:
    SVar10.str = (char *)((ulong)pTVar2 & 0xffffffffffff | 0x746e000000000000);
    SVar10.bridgeObject = pcVar4;
    return SVar10;
  case (char *)0x4:
    pcVar4 = &DAT_e600000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x656d;
  case (char *)0xd6:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             ((ulong)pTVar2 & 0xffff00000000ffff | 0x646f68740000);
switchD_100bab490_caseD_7:
    SVar8.bridgeObject = pcVar4;
    SVar8.str = (char *)pTVar2;
    return SVar8;
  case (char *)0x5:
    pcVar4 = (char *)0xec000000676e6972;
  case (char *)0xd0:
  case (char *)0xd8:
  case (char *)0xe0:
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x72657571;
switchD_100bab490_caseD_f:
    SVar11.str = (char *)((ulong)pTVar2 & 0xffffffff | 0x74735f7900000000);
    SVar11.bridgeObject = pcVar4;
    return SVar11;
  case (char *)0x6:
    pcVar4 = (char *)0xe300000000000000;
    pTVar2 = (TargetProtocolConformanceDescriptor *)0x7275;
  case (char *)0x50:
    pTVar2 = (TargetProtocolConformanceDescriptor *)(ulong)((uint)pTVar2 & 0xffff | 0x6c0000);
switchD_100bab490_caseD_0:
    SVar12.bridgeObject = pcVar4;
    SVar12.str = (char *)pTVar2;
    return SVar12;
  case (char *)0x7:
    goto switchD_100bab490_caseD_7;
  case (char *)0xa:
    break;
  case (char *)0xe:
    goto switchD_100bab490_caseD_e;
  case (char *)0xf:
    goto switchD_100bab490_caseD_f;
  case (char *)0x20:
    goto switchD_100bab490_caseD_20;
  case (char *)0x21:
  case (char *)0x27:
  case (char *)0x2a:
  case (char *)0x2e:
  case (char *)0x35:
  case (char *)0x67:
    goto switchD_100bab490_caseD_21;
  case (char *)0x22:
  case (char *)0x64:
    goto switchD_100bab490_caseD_22;
  case (char *)0x23:
  case (char *)0x2c:
  case (char *)0xac:
    goto switchD_100bab490_caseD_23;
  case (char *)0x24:
    goto switchD_100bab490_caseD_24;
  case (char *)0x25:
  case (char *)0x38:
  case (char *)0x68:
    if (DAT_101046788 != (char *)0x0) {
      SVar22.bridgeObject = (void *)0xe900000000000065;
      SVar22.str = DAT_101046788;
      return SVar22;
    }
    puVar3 = &DAT_101044b60;
    FUN_100b6734c(&DAT_101044b60);
    pcVar4 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
    _swift_getWitnessTable
              (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,puVar3
               ,&stack0xffffffffffffffe0);
    DAT_101046788 = pcVar4;
    SVar23.bridgeObject = puVar3;
    SVar23.str = pcVar4;
    return SVar23;
  case (char *)0x28:
    goto switchD_100bab490_caseD_28;
  case (char *)0x29:
    goto switchD_100bab490_caseD_29;
  case (char *)0x2b:
  case (char *)0x69:
    goto switchD_100bab490_caseD_2b;
  case (char *)0x2f:
    goto switchD_100bab490_caseD_2f;
  case (char *)0x30:
  case (char *)0x61:
    goto switchD_100bab490_caseD_30;
  case (char *)0x31:
  case (char *)0x62:
    goto switchD_100bab490_caseD_31;
  case (char *)0x33:
    goto switchD_100bab490_caseD_33;
  case (char *)0x34:
switchD_100bab490_caseD_34:
    SVar20.bridgeObject = (void *)0xe900000000000065;
    SVar20.str = (char *)pTVar2;
    return SVar20;
  case (char *)0x39:
  case (char *)0x4d:
  case (char *)0x6d:
  case (char *)0x81:
  case (char *)0x95:
  case (char *)0xa9:
  case (char *)0xbd:
  case (char *)0xd1:
  case (char *)0xd9:
  case (char *)0xe1:
  case (char *)0xf5:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             &TargetProtocolConformanceDescriptor_100c9aff4.Flags;
  case (char *)0x5d:
  case (char *)0x91:
  case (char *)0xb9:
    pTVar2 = (TargetProtocolConformanceDescriptor *)&pTVar2[0xe3].TypeRef;
switchD_100bab490_caseD_f1:
    puVar3 = &DAT_100f39a40;
    _swift_getWitnessTable(pTVar2,&DAT_100f39a40);
    DAT_101046798 = pTVar2;
    SVar28.bridgeObject = puVar3;
    SVar28.str = (char *)pTVar2;
    return SVar28;
  case (char *)0x3a:
  case (char *)0x4e:
  case (char *)0x6e:
  case (char *)0x82:
  case (char *)0x96:
  case (char *)0xaa:
  case (char *)0xbe:
  case (char *)0xd2:
  case (char *)0xda:
  case (char *)0xe2:
  case (char *)0xf6:
    pvVar5 = (void *)(ulong)*(byte *)&unaff_x20->Protocol;
    FUN_100bed41c(&DAT_7a69735f79646f62,pvVar5);
    SVar14.bridgeObject = pvVar5;
    SVar14.str = (char *)pTVar2;
    return SVar14;
  case (char *)0x3c:
  case (char *)0x70:
  case (char *)0xe4:
    SVar29.str = *(char **)(pcVar6 + 0x7a0);
    if (SVar29.str != (char *)0x0) {
      SVar29.bridgeObject = (void *)0xe900000000000065;
      return SVar29;
    }
    pTVar2 = (TargetProtocolConformanceDescriptor *)&DAT_100c9be0c;
    pcVar4 = "";
  case (char *)0x52:
  case (char *)0x86:
  case (char *)0xae:
  case (char *)0xde:
  case (char *)0xe6:
    pcVar4 = pcVar4 + 0xa40;
    _swift_getWitnessTable(pTVar2,pcVar4);
    DAT_1010467a0 = pTVar2;
switchD_100bab490_caseD_dd:
    SVar30.bridgeObject = pcVar4;
    SVar30.str = (char *)pTVar2;
    return SVar30;
  case (char *)0x3d:
  case (char *)0x71:
  case (char *)0x99:
  case (char *)0xc1:
  case (char *)0xf9:
    pTVar2 = (TargetProtocolConformanceDescriptor *)
             CONCAT35(uRam7a69735f79646f67,CONCAT41(_DAT_7a69735f79646f63,DAT_7a69735f79646f62));
    pcVar4 = _DAT_7a69735f79646f6a;
    unaff_x19 = pcVar6;
  case (char *)0xa8:
    FUN_100bab3fc(pTVar2,pcVar4);
    *unaff_x19 = (char)pTVar2;
    SVar15.bridgeObject = pcVar4;
    SVar15.str = (char *)pTVar2;
    return SVar15;
  case (char *)0x51:
    pTVar2 = _DAT_7a69735f79646f8a;
    unaff_x19 = pcVar4;
    unaff_x20 = _DAT_7a69735f79646f8a;
    unaff_x21 = _DAT_7a69735f79646f82;
  case (char *)0x53:
  case (char *)0x87:
  case (char *)0xaf:
  case (char *)0xdf:
  case (char *)0xe7:
    _swift_retain(pTVar2);
    (*unaff_x21)();
    _swift_release(unaff_x20);
    FUN_100b78d38(unaff_x19);
    SVar31.bridgeObject = pcVar4;
    SVar31.str = unaff_x19;
    return SVar31;
  case (char *)0x60:
  case (char *)0x2d:
  case (char *)0x5e:
  case (char *)0x92:
  case (char *)0xba:
  case (char *)0xf2:
    thunk_FUN_100bab3fc();
    *pcVar6 = (char)pTVar2;
switchD_100bab490_caseD_80:
    SVar17.bridgeObject = pcVar4;
    SVar17.str = (char *)pTVar2;
    return SVar17;
  case (char *)0x63:
    pTVar2 = DAT_101046780;
    if (DAT_101046780 != (TargetProtocolConformanceDescriptor *)0x0)
    goto switchD_100bab490_caseD_34;
  case (char *)0x4c:
switchD_100bab490_caseD_22:
switchD_100bab490_caseD_30:
    pTVar2 = &TargetProtocolConformanceDescriptor_100c9befc;
switchD_100bab490_caseD_28:
    pcVar4 = "";
switchD_100bab490_caseD_24:
    pcVar4 = pcVar4 + 0xa40;
switchD_100bab490_caseD_2b:
    _swift_getWitnessTable(pTVar2,pcVar4);
switchD_100bab490_caseD_23:
    pcVar6 = (char *)&DAT_101046000;
switchD_100bab490_caseD_29:
    *(TargetProtocolConformanceDescriptor **)(pcVar6 + 0x780) = pTVar2;
    SVar21.bridgeObject = pcVar4;
    SVar21.str = (char *)pTVar2;
    return SVar21;
  case (char *)0x65:
    goto switchD_100bab490_caseD_65;
  case (char *)0x66:
    caseD_63();
  case (char *)0x26:
switchD_100bab490_caseD_20:
    SVar18 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar18;
  case (char *)0x6c:
    caseD_63();
    SVar18 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar18;
  case (char *)0x80:
    goto switchD_100bab490_caseD_80;
  case (char *)0x84:
  case (char *)0xdc:
    if (DAT_101046790 != (TargetProtocolConformanceDescriptor *)0x0) {
      SVar26.bridgeObject = (void *)0xe900000000000065;
      SVar26.str = (char *)DAT_101046790;
      return SVar26;
    }
    pTVar2 = &TargetProtocolConformanceDescriptor_100c9bed4;
    pcVar4 = "\x01\x02";
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9bed4,&DAT_100f39a40);
    DAT_101046790 = pTVar2;
  case (char *)0xd5:
    SVar27.bridgeObject = pcVar4;
    SVar27.str = (char *)pTVar2;
    return SVar27;
  case (char *)0x85:
  case (char *)0xad:
    goto code_r0x000100bab870;
  case (char *)0x90:
  case (char *)0xf8:
  case (char *)0x32:
switchD_100bab490_caseD_33:
    unaff_x19 = pcVar6;
switchD_100bab490_caseD_2f:
    FUN_100baae80();
switchD_100bab490_caseD_31:
    if (unaff_x21 == (code *)0x0) {
switchD_100bab490_caseD_21:
      *(TargetProtocolConformanceDescriptor **)unaff_x19 = pTVar2;
    }
switchD_100bab490_caseD_65:
    SVar19.bridgeObject = pcVar4;
    SVar19.str = (char *)pTVar2;
    return SVar19;
  case (char *)0x94:
    SVar16.bridgeObject = (void *)0xe900000000000065;
    SVar16.str = &DAT_7a69735f79646f62;
    return SVar16;
  case (char *)0x98:
    return (String)ZEXT816(0x100f39a40);
  case (char *)0xb8:
    _DAT_7a69735f79646f63 = 0;
    DAT_7a69735f79646f62 = 0x6b;
    SVar25.bridgeObject = (void *)0xe900000000000065;
    SVar25.str = &DAT_7a69735f79646f62;
    return SVar25;
  case (char *)0xbc:
    pcVar6 = (char *)(ulong)*(byte *)&unaff_x20->Protocol;
    FUN_100bec848(pcVar6);
    SVar13.bridgeObject = pcVar4;
    SVar13.str = pcVar6;
    return SVar13;
  case (char *)0xc0:
    uVar7 = 0xc9bda0;
    if ((uint)pcVar6 < 0xff) {
      uVar7 = 1;
    }
    uVar1 = 0;
    if (0xf9 < param_3) {
      uVar1 = uVar7;
    }
                    /* WARNING: Could not recover jumptable at 0x000100bab720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bab724 + (ulong)(&BYTE_100c9bdac)[uVar1] * 4))();
    SVar24.bridgeObject = pcVar4;
    SVar24.str = (char *)pTVar2;
    return SVar24;
  case (char *)0xd4:
                    /* WARNING: Could not recover jumptable at 0x000100bab754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bab758 +
              (ulong)(byte)pcVar6[(ulong)(byte)pcVar6[0x100c9bda0] * 4 + 0x100bab494] * 4))();
    SVar18.bridgeObject = pcVar4;
    SVar18.str = (char *)pTVar2;
    return SVar18;
  case (char *)0xdd:
  case (char *)0xe5:
    goto switchD_100bab490_caseD_dd;
  case (char *)0xf1:
    goto switchD_100bab490_caseD_f1;
  }
  pTVar2 = (TargetProtocolConformanceDescriptor *)
           ((ulong)pTVar2 & 0xffffffffffff | 0x73000000000000);
switchD_100bab490_caseD_e:
  SVar9.bridgeObject = pcVar4;
  SVar9.str = (char *)pTVar2;
  return SVar9;
}



/* Address: 0x100bab874 | switchD_100bab490::caseD_51 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void switchD_100bab490::caseD_51(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
  FUN_100b78d38(param_2);
  return;
}



/* Address: 0x100bab8b8 | FUN_100bab8b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bab8b8(void)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"isEnabled");
  return;
}



/* Address: 0x100bab8e0 | _TtC6Sentry9SentrySDK::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentrySDK::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100bab900 | _TtC6Sentry9SentrySDK::span */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentrySDK::span(ID param_1,SEL param_2)

{
  FUN_100bab914();
  return param_1;
}



/* Address: 0x100bab914 | FUN_100bab914 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bab914(void)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"span");
  return IVar1;
}



/* Address: 0x100bab940 | _TtC6Sentry9SentrySDK::isEnabled */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry9SentrySDK::isEnabled(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bab8b8();
  return uVar1 & 1;
}



/* Address: 0x100bab958 | _TtC6Sentry9SentrySDK::logger */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry9SentrySDK::logger(ID param_1,SEL param_2)

{
  FUN_100bab96c();
  return param_1;
}



/* Address: 0x100bab96c | FUN_100bab96c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bab96c(void)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_48 [24];
  
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"isEnabled");
  if ((IVar1 & 1) == 0) {
    FUN_100b84dac(0);
    FUN_100bad8c8("Logs called before SentrySDK.start() will not be sent to Sentry.");
    FUN_100bad864();
    FUN_100b84df8();
  }
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  IVar1 = _objc_msgSend(IVar1,"_swiftLogger");
  FUN_100bad7d4(IVar1);
  lVar2 = 0;
  FUN_100b82e0c();
  lVar3 = lVar2;
  FUN_100b6fbdc();
  _swift_dynamicCastClass();
  if (lVar3 == 0) {
    FUN_100b6f868();
    lVar4 = 0;
    FUN_100b84dac(0);
    FUN_100bad8c8("Unable to access configured logger. Logs will not be sent to Sentry.");
    FUN_100bad864();
    FUN_100b84df8();
    FUN_100bad85c();
    FUN_100bad844();
    lVar3 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
    FUN_100b78ca0(lVar4 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_48);
    FUN_100bad89c();
    FUN_100b6f868();
    _objc_allocWithZone(lVar2);
    FUN_100b825d0(lVar3);
  }
  return;
}



/* Address: 0x100baba9c | FUN_100baba9c */

void FUN_100baba9c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0;
  FUN_100b78b14();
  FUN_100b75404();
  puVar2 = &DAT_1010467f8;
  FUN_100b6730c();
  DAT_1010467c0 = puVar2;
  DAT_1010467c8 = &PTR_PTR_100f3b830;
  DAT_1010467a8 = uVar1;
  return;
}



/* Address: 0x100babaec | FUN_100babaec */

void FUN_100babaec(void)

{
  undefined1 auStack_38 [24];
  
  if (DAT_101042de0 != -1) {
    _swift_once(&DAT_101042de0,FUN_100baba9c);
  }
  FUN_100b78ca0(&DAT_1010467a8,auStack_38);
  FUN_100b6fbdc();
  FUN_100076688();
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100babb4c | FUN_100babb4c */

void FUN_100babb4c(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  if (DAT_101042de0 != -1) {
    _swift_once(&DAT_101042de0,FUN_100baba9c);
  }
  FUN_100bad8a8(&DAT_1010467a8,auStack_38);
  FUN_100b6fbdc();
  FUN_10008820c();
  _swift_endAccess(auStack_38);
  FUN_100004594(param_1);
  FUN_100b6f9fc();
  return;
}



/* Address: 0x100babbbc | FUN_100babbbc */

undefined1  [16] FUN_100babbbc(void)

{
  undefined1 auVar1 [16];
  
  if (DAT_101042de0 != -1) {
    _swift_once(&DAT_101042de0,FUN_100baba9c);
  }
  FUN_100b6fbdc();
  FUN_100bad8a8();
  auVar1._8_8_ = &DAT_1010467a8;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x100babc1c | FUN_100babc1c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100babc1c(long param_1)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  ID self;
  bool bVar4;
  Dictionary<undefined,undefined> DVar5;
  long lVar6;
  ulong uVar7;
  String SVar8;
  undefined1 auStack_58 [24];
  
  FUN_100bad85c();
  FUN_100bad844();
  FUN_100b75288(param_1);
  FUN_100b6f868();
  FUN_100b75404();
  self = _TtC6Sentry25SentryDependencyContainer::processInfoWrapper;
  FUN_100b78ca0(param_1 + _TtC6Sentry25SentryDependencyContainer::processInfoWrapper,auStack_58);
  FUN_100bad89c();
  FUN_100b6f868();
  _objc_msgSend(self,"environment");
  _swift_unknownObjectRelease(self);
  DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100b6fce4();
  if (*(long *)(DVar5.unknown + 0x10) != 0) {
    _swift_bridgeObjectRetain(DVar5.unknown);
    uVar7 = 0;
    lVar6 = -0x2fffffffffffffe6;
    FUN_100071370();
    if ((uVar7 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(DVar5.unknown + 0x38) + lVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      _swift_bridgeObjectRetain(_Var3.unknown);
      _swift_bridgeObjectRelease_n(DVar5.unknown,2);
      if (_Var2.unknown == (undefined *)0x31 && _Var3.unknown == (undefined *)0xe100000000000000) {
        FUN_100b6f980();
LAB_100babd8c:
        SVar8.bridgeObject = (void *)0x8000000100dcdec0;
        SVar8.str = (char *)0xd000000000000045;
        Foundation::_NSLog(SVar8);
        return;
      }
      bVar4 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x31);
      FUN_100b6f980();
      if (bVar4) goto LAB_100babd8c;
      goto LAB_100babd6c;
    }
    FUN_100b6f860();
  }
  FUN_100b6f860();
LAB_100babd6c:
  FUN_100ba9f60(&objc::class_t::SentrySDKInternal,"startWithOptions:");
  return;
}



/* Address: 0x100babdc4 | FUN_100babdc4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100babdc4(undefined8 param_1)

{
  FUN_100bad85c();
  FUN_100bad844();
  FUN_100b75288(param_1);
  return 0;
}



/* Address: 0x100babe00 | _TtC6Sentry9SentrySDK::startWithOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::startWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100babc1c(param_3);
  return;
}



/* Address: 0x100babe2c | FUN_100babe2c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100babe2c(undefined8 param_1,void *param_2)

{
  ID IVar1;
  
  IVar1 = 0;
  FUN_100b93bc4();
  _objc_allocWithZone();
  IVar1 = _objc_msgSend(IVar1,"init");
  (**(code **)((long)param_2 + 0x10))(param_2,IVar1);
  FUN_100babc1c(IVar1);
  __Block_release(param_2);
  return;
}



/* Address: 0x100babe88 | FUN_100babe88 */

void FUN_100babe88(code *param_1)

{
  ID IVar1;
  
  IVar1 = 0;
  FUN_100b93bc4();
  _objc_allocWithZone();
  IVar1 = _objc_msgSend(IVar1,"init");
  (*param_1)();
  FUN_100babc1c(IVar1);
  FUN_100b78d38(IVar1);
  return;
}



/* Address: 0x100babed4 | _TtC6Sentry9SentrySDK::startWithConfigureOptions: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry9SentrySDK::startWithConfigureOptions_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  __Block_copy((void *)param_3);
  _swift_getObjCClassMetadata(param_1);
  FUN_100babe2c();
  return;
}



/* Address: 0x100babf08 | FUN_100babf08 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100babf08(void)

{
  FUN_100ba9f60(&objc::class_t::SentrySDKInternal,"captureEvent:");
  FUN_100bad810();
  return;
}



/* Address: 0x100babf3c | _TtC6Sentry9SentrySDK::captureEvent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentrySDK::captureEvent_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100babf08();
  return param_3;
}



/* Address: 0x100babf74 | FUN_100babf74 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100babf74(void)

{
  FUN_100b6fe18();
  FUN_100bad7e0(&objc::class_t::SentrySDKInternal,"captureEvent:withScope:");
  FUN_100bad810();
  return;
}



/* Address: 0x100babfa8 | _TtC6Sentry9SentrySDK::captureEvent:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureEvent_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100babf74(param_3,param_4);
  return param_3;
}



/* Address: 0x100bac008 | FUN_100bac008 */

void FUN_100bac008(void)

{
  FUN_100baca40();
  return;
}



/* Address: 0x100bac01c | _TtC6Sentry9SentrySDK::captureEvent:withScopeBlock: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureEvent_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  FUN_100bac794();
  return param_1;
}



/* Address: 0x100bac038 | FUN_100bac038 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bac038(undefined8 param_1,uint param_2)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)self,"initWithBool:",(ulong)(param_2 & 1));
  FUN_100ba9f60(param_1,"setAttachAllThreadsOverride:");
  FUN_100b6faa8();
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"captureEvent:",param_1);
  FUN_100bad810();
  return;
}



/* Address: 0x100bac0a8 | _TtC6Sentry9SentrySDK::captureEvent:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry9SentrySDK::captureEvent_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_100bac038(param_3,param_4);
  return param_3;
}



/* Address: 0x100bac0e8 | FUN_100bac0e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bac0e8(void)

{
  ID IVar1;
  ID unaff_x23;
  
  FUN_100bad8b4();
  FUN_100bad824(&objc::class_t::SentrySDKInternal);
  FUN_100bad834();
  IVar1 = _objc_msgSend(unaff_x23,"startTransactionWithName:operation:");
  FUN_100b6f934();
  FUN_100b6faa8();
  FUN_100b5e408(IVar1);
  return;
}



/* Address: 0x100bac150 | _TtC6Sentry9SentrySDK::startTransactionWithName:operation: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::startTransactionWithName_operation_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bac0e8(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bac1bc | FUN_100bac1bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bac1bc(void)

{
  ID IVar1;
  
  FUN_100bad8e8();
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_100bad800();
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,
                        "startTransactionWithName:operation:bindToScope:");
  FUN_100b6fce4();
  FUN_100b6f868();
  FUN_100b5e408(IVar1);
  return;
}



/* Address: 0x100bac238 | _TtC6Sentry9SentrySDK::startTransactionWithName:operation:bindToScope: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID _TtC6Sentry9SentrySDK::startTransactionWithName_operation_bindToScope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100bac1bc(pcVar1,SVar2.bridgeObject,SVar3.str,SVar3.bridgeObject,param_5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return (ID)pcVar1;
}



/* Address: 0x100bac2ac | FUN_100bac2ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bac2ac(void)

{
  FUN_100ba9f60(&objc::class_t::SentrySDKInternal,"startTransactionWithContext:");
  FUN_100bad810();
  return;
}



/* Address: 0x100bac2e0 | _TtC6Sentry9SentrySDK::startTransactionWithContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentrySDK::startTransactionWithContext_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bac2ac();
  return param_3;
}



/* Address: 0x100bac318 | FUN_100bac318 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bac318(undefined8 param_1,uint param_2)

{
  _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"startTransactionWithContext:bindToScope:",
                param_1,(ulong)(param_2 & 1));
  FUN_100bad810();
  return;
}



/* Address: 0x100bac358 | _TtC6Sentry9SentrySDK::startTransactionWithContext:bindToScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry9SentrySDK::startTransactionWithContext_bindToScope_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_100bac318(param_3,param_4);
  return param_3;
}



/* Address: 0x100bac398 | FUN_100bac398 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bac398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  class_t *pcVar1;
  ID IVar2;
  
  pcVar1 = &objc::class_t::SentrySDKInternal;
  FUN_100b81bec(PTR___type_metadata_for_Any_100eae0c0,&objc::class_t::SentrySDKInternal,
                PTR___type_metadata_for_Swift_String_100eac208,param_3,
                PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  IVar2 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,
                        "startTransactionWithContext:bindToScope:customSamplingContext:",param_1,
                        (ulong)((uint)param_2 & 1),pcVar1);
  FUN_100bad7d4(IVar2);
  FUN_100b56e60(param_2);
  return;
}



/* Address: 0x100bac418 | _TtC6Sentry9SentrySDK::startTransactionWithContext:bindToScope:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x24 bytes */

ID _TtC6Sentry9SentrySDK::startTransactionWithContext_bindToScope_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,bool param_4,ID param_5)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bac398(param_3,param_4,DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return param_3;
}



/* Address: 0x100bac498 | FUN_100bac498 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bac498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100b6fe18();
  FUN_100b81bec(PTR___type_metadata_for_Any_100eae0c0,&objc::class_t::SentrySDKInternal,
                PTR___type_metadata_for_Swift_String_100eac208,param_3,
                PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  FUN_100bad7e0(&objc::class_t::SentrySDKInternal,
                "startTransactionWithContext:customSamplingContext:");
  FUN_100bad7d4();
  FUN_100b56e60();
  return;
}



/* Address: 0x100bac504 | _TtC6Sentry9SentrySDK::startTransactionWithContext:customSamplingContext: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::startTransactionWithContext_customSamplingContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  FUN_100bac498(param_3,DVar1.unknown);
  _swift_bridgeObjectRelease(DVar1.unknown);
  return param_3;
}



/* Address: 0x100bac57c | FUN_100bac57c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

class_t * FUN_100bac57c(void)

{
  Foundation::__convertErrorToNSError();
  FUN_100ba9f60(&objc::class_t::SentrySDKInternal,"captureError:");
  FUN_100bad7d4();
  return &objc::class_t::SentrySDKInternal;
}



/* Address: 0x100bac5d4 | _TtC6Sentry9SentrySDK::captureError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentrySDK::captureError_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bac57c();
  return param_3;
}



/* Address: 0x100bac60c | FUN_100bac60c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bac60c(void)

{
  class_t *pcVar1;
  
  FUN_100b6fe18();
  pcVar1 = &objc::class_t::SentrySDKInternal;
  Foundation::__convertErrorToNSError();
  FUN_100bad7e0(&objc::class_t::SentrySDKInternal,"captureError:withScope:");
  FUN_100b6f868();
  FUN_100b56e60(pcVar1);
  return;
}



/* Address: 0x100bac668 | _TtC6Sentry9SentrySDK::captureError:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureError_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bac60c(param_3,param_4);
  return param_3;
}



/* Address: 0x100bac6c8 | FUN_100bac6c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bac6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100bad8dc();
  Foundation::__convertErrorToNSError();
  FUN_100b97e5c(switchD_100bab490::caseD_51);
  _swift_retain(param_3);
  _swift_release(param_3);
  FUN_100bad884(&objc::class_t::SentrySDKInternal,"captureError:withScopeBlock:");
  FUN_100bad818();
  FUN_100b6f934();
  FUN_100bad7ec(param_3);
  return;
}



/* Address: 0x100bac778 | _TtC6Sentry9SentrySDK::captureError:withScopeBlock: */

/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureError_withScopeBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  FUN_100bac794();
  return param_1;
}



/* Address: 0x100bac794 | FUN_100bac794 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8
FUN_100bac794(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,long param_5,
             undefined8 param_6,code *param_7)

{
  void *pvVar1;
  
  pvVar1 = __Block_copy(param_4);
  _swift_allocObject(param_5,0x18,7);
  *(void **)(param_5 + 0x10) = pvVar1;
  (*param_7)(param_3,param_6,param_5);
  FUN_100b6fce4();
  _swift_release(param_5);
  return param_3;
}



/* Address: 0x100bac81c | FUN_100bac81c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bac81c(undefined8 param_1,uint param_2)

{
  ID self;
  NSError *pNVar1;
  undefined *self_00;
  
  self = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,"currentHub");
  Foundation::__convertErrorToNSError();
  pNVar1 = Foundation::__convertErrorToNSError();
  FUN_100b6fce4();
  _objc_msgSend(self,"scope");
  self_00 = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  _objc_msgSend((ID)self_00,"initWithBool:",(ulong)(param_2 & 1));
  FUN_100bad890(self,"captureError:withScope:attachAllThreads:",pNVar1);
  FUN_100b6faa8();
  FUN_100b6f934();
  FUN_100b6fce4();
  FUN_100b6f868();
  FUN_100b5e408(self);
  return;
}



/* Address: 0x100bac8ec | _TtC6Sentry9SentrySDK::captureError:attachAllThreads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry9SentrySDK::captureError_attachAllThreads_
             (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  FUN_100bac81c(param_3,param_4);
  return param_3;
}



/* Address: 0x100bac92c | FUN_100bac92c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bac92c(void)

{
  FUN_100ba9f60(&objc::class_t::SentrySDKInternal,"captureException:");
  FUN_100bad810();
  return;
}



/* Address: 0x100bac960 | _TtC6Sentry9SentrySDK::captureException: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry9SentrySDK::captureException_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bac92c();
  return param_3;
}



/* Address: 0x100bac998 | FUN_100bac998 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bac998(void)

{
  FUN_100b6fe18();
  FUN_100bad7e0(&objc::class_t::SentrySDKInternal,"captureException:withScope:");
  FUN_100bad810();
  return;
}



/* Address: 0x100bac9cc | _TtC6Sentry9SentrySDK::captureException:withScope: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry9SentrySDK::captureException_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100bac998(param_3,param_4);
  return param_3;
}



/* Address: 0x100baca2c | FUN_100baca2c */

void FUN_100baca2c(void)

{
  FUN_100baca40();
  return;
}



/* Address: 0x100baca40 | FUN_100baca40 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100baca40(void)

{
  ID IVar1;
  undefined8 *in_x4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  
  FUN_100bad8e8();
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = switchD_100bab490::caseD_51;
  __Block_copy(&local_70);
  _swift_retain();
  FUN_100bad87c();
  IVar1 = _objc_msgSend((ID)&objc::class_t::SentrySDKInternal,(SEL)*in_x4);
  FUN_100bad818(IVar1);
  FUN_100bad7ec(in_x4);
  return;
}


