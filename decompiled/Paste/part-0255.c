/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100314b8c | FUN_100314b8c */

void FUN_100314b8c(undefined8 param_1)

{
  if (DAT_100fbf580 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cac0cc);
  return;
}



/* Address: 0x100314bc4 | FUN_100314bc4 */

void FUN_100314bc4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte *local_98;
  byte *pbStack_90;
  long local_88;
  long local_80;
  byte *pbStack_78;
  byte *local_70;
  byte *pbStack_68;
  byte *local_60;
  byte *pbStack_58;
  byte *local_50;
  byte *pbStack_48;
  byte *local_40;
  byte *pbStack_38;
  
  local_98 = &BYTE_100c40c10;
  pbStack_90 = &BYTE_100c40c28;
  puVar2 = &DAT_100fbf590;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fbf590,PTR_typeMetadataAccessor_100ea6e88);
  if (puVar2 < (undefined *)0x40) {
    local_88 = *(long *)(lVar1 + -8) + 0x40;
    puVar3 = &DAT_100fbf598;
    lVar1 = 0x13f;
    FUN_1001a1320(0x13f,&DAT_100fbf598,PTR_typeMetadataAccessor_100ea71a8);
    if (puVar3 < (undefined8 *)0x40) {
      local_80 = *(long *)(lVar1 + -8) + 0x40;
      pbStack_78 = &BYTE_100c40c10;
      local_70 = &BYTE_100c40c40;
      pbStack_68 = &BYTE_100c40c40;
      local_60 = &BYTE_100c40c58;
      pbStack_58 = &BYTE_100c40c40;
      local_50 = &BYTE_100c40c70;
      pbStack_48 = &BYTE_100c40c28;
      local_40 = &BYTE_100c40c40;
      pbStack_38 = &BYTE_100c40c28;
      _swift_initStructMetadata(param_1,0x100,0xd,&local_98,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x100314cac | FUN_100314cac */

String FUN_100314cac(ulong param_1,undefined8 param_2,undefined1 *param_3,char *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  URL UVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  long extraout_x8;
  char *unaff_x19;
  AttributedString unaff_x20;
  char *pcVar14;
  long unaff_x21;
  long unaff_x22;
  char *unaff_x23;
  char *unaff_x24;
  char *unaff_x25;
  char *unaff_x26;
  long unaff_x27;
  undefined1 *unaff_x29;
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
  undefined1 auStack_70 [16];
  
  puVar12 = &DAT_e400000000000000;
  uVar5 = 0x65707974;
  pcVar6 = &DAT_65707974;
  puVar13 = (undefined1 *)(param_1 & 0xff);
  pcVar9 = pcVar6;
  pcVar14 = unaff_x20.unknown;
  switch(puVar13) {
  case (undefined1 *)0x0:
    goto switchD_100314cd4_caseD_0;
  default:
    puVar12 = (undefined1 *)0x6874;
  case (undefined1 *)0xa8:
  case (undefined1 *)0xb6:
  case (undefined1 *)0xd0:
  case (undefined1 *)0xde:
    puVar12 = (undefined1 *)((ulong)puVar12 & 0xffffffffffff | 0xea00000000000000);
  case (undefined1 *)0x33:
  case (undefined1 *)0x63:
  case (undefined1 *)0x7b:
    pcVar6 = (char *)0x6574;
  case (undefined1 *)0xa6:
  case (undefined1 *)0xce:
    pcVar6 = (char *)((ulong)pcVar6 & 0xffffffff0000ffff | 0x676e654c74780000);
switchD_100314cd4_caseD_9e:
    SVar15.bridgeObject = puVar12;
    SVar15.str = pcVar6;
    return SVar15;
  case (undefined1 *)0x2:
    SVar19.bridgeObject = &DAT_e400000000000000;
    SVar19.str = (char *)0x74786574;
    return SVar19;
  case (undefined1 *)0x3:
    puVar12 = (undefined1 *)0xe300000000000000;
    uVar5 = 0x7275;
  case (undefined1 *)0x9a:
  case (undefined1 *)0xae:
  case (undefined1 *)0xc2:
  case (undefined1 *)0xd6:
    SVar20.str = (char *)(ulong)(uVar5 & 0xffff | 0x6c0000);
    SVar20.bridgeObject = puVar12;
    return SVar20;
  case (undefined1 *)0x4:
  case (undefined1 *)0x20:
  case (undefined1 *)0x28:
  case (undefined1 *)0x40:
  case (undefined1 *)0x50:
  case (undefined1 *)0x58:
    puVar12 = &DAT_e700000000000000;
  case (undefined1 *)0x68:
    pcVar6 = (char *)0x6d614e6c7275;
switchD_100314cd4_caseD_bc:
    SVar17.str = (char *)((ulong)pcVar6 | 0x65000000000000);
    SVar17.bridgeObject = puVar12;
    return SVar17;
  case (undefined1 *)0x5:
    SVar22.bridgeObject = (void *)0xeb00000000617461;
    SVar22.str = (char *)0x446e6f63496c7275;
    return SVar22;
  case (undefined1 *)0x6:
    puVar12 = (undefined1 *)0x61746144;
  case (undefined1 *)0xf4:
    puVar12 = (undefined1 *)((ulong)puVar12 & 0xffffffffffff | 0xec00000000000000);
    pcVar6 = (char *)0x6567616d496c7275;
switchD_100314cd4_caseD_9c:
    SVar23.bridgeObject = puVar12;
    SVar23.str = pcVar6;
    return SVar23;
  case (undefined1 *)0x7:
    pcVar6 = (char *)0x7a69536567616d69;
    goto LAB_100314d90;
  case (undefined1 *)0x8:
    puVar12 = (undefined1 *)0xe900000000000061;
  case (undefined1 *)0xb1:
  case (undefined1 *)0xd9:
    SVar25.bridgeObject = puVar12;
    SVar25.str = (char *)0x7461446567616d69;
    return SVar25;
  case (undefined1 *)0x9:
    puVar12 = (undefined1 *)0xe900000000000073;
    pcVar6 = (char *)0x656c6966;
  case (undefined1 *)0x4a:
  case (undefined1 *)0x7a:
    pcVar6 = (char *)((ulong)pcVar6 | 0x615000000000);
switchD_100314cd4_caseD_32:
    SVar18.str = (char *)((ulong)pcVar6 | 0x6874000000000000);
    SVar18.bridgeObject = puVar12;
    return SVar18;
  case (undefined1 *)0xa:
    puVar12 = (undefined1 *)0x6c61;
  case (undefined1 *)0xbe:
  case (undefined1 *)0xe6:
  case (undefined1 *)0xea:
    puVar12 = (undefined1 *)((ulong)puVar12 & 0xffffffffffff | 0xee00657a69530000);
    pcVar6 = (char *)0x5473656c6966;
switchD_100314cd4_caseD_d8:
    SVar24.str = (char *)((ulong)pcVar6 | 0x746f000000000000);
    SVar24.bridgeObject = puVar12;
    return SVar24;
  case (undefined1 *)0xb:
  case (undefined1 *)0x14:
  case (undefined1 *)0x30:
  case (undefined1 *)0x48:
  case (undefined1 *)0x60:
  case (undefined1 *)0x78:
  case (undefined1 *)0x90:
    puVar12 = (undefined1 *)0x6567;
  case (undefined1 *)0x80:
  case (undefined1 *)0x88:
    puVar12 = (undefined1 *)((ulong)puVar12 | 0x61440000);
    goto switchD_100314cd4_caseD_38;
  case (undefined1 *)0xc:
    pcVar6 = (char *)0x6f6c6f63;
  case (undefined1 *)0x70:
  case (undefined1 *)0xc4:
    pcVar6 = (char *)((ulong)pcVar6 | 0x646f437200000000);
LAB_100314d90:
    puVar12 = (undefined1 *)0xe900000000000065;
switchD_100314cd4_caseD_0:
    SVar21.bridgeObject = puVar12;
    SVar21.str = pcVar6;
    return SVar21;
  case (undefined1 *)0x10:
    goto switchD_100314cd4_caseD_10;
  case (undefined1 *)0x11:
  case (undefined1 *)0xf5:
  case (undefined1 *)0x1d:
    FUN_100316bb8();
switchD_100314cd4_caseD_1c:
    SVar27 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar27;
  case (undefined1 *)0x12:
  case (undefined1 *)0x64:
  case (undefined1 *)0xf2:
  case (undefined1 *)0xf6:
    goto switchD_100314cd4_caseD_12;
  case (undefined1 *)0x18:
    FUN_100314cac();
    SVar26.bridgeObject = puVar12;
    SVar26.str = pcVar6;
    return SVar26;
  case (undefined1 *)0x19:
    unaff_x29 = &stack0xfffffffffffffff0;
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    pcVar14 = pcVar6;
    unaff_x22 = unaff_x21;
    unaff_x24 = unaff_x20.unknown;
  case (undefined1 *)0x37:
  case (undefined1 *)0x97:
    pcVar6 = (char *)0x100fbf000;
switchD_100314cd4_caseD_ff:
    pcVar6 = pcVar6 + 0x640;
    FUN_1000037f0(pcVar6,&DAT_100c40d10);
switchD_100314cd4_caseD_b0:
    unaff_x27 = *(long *)(pcVar6 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(unaff_x27 + 0x40) + 0xfU & 0xfffffffffffffff0);
    unaff_x23 = (char *)((long)register0x00000008 + -extraout_x8);
    FUN_100004640(pcVar14,*(undefined8 *)(pcVar14 + 0x18));
    FUN_100316bb8();
    unaff_x19 = pcVar6;
switchD_100314cd4_caseD_99:
    Swift::Encoder::_container();
switchD_100314cd4_caseD_d4:
    uVar10 = *(undefined8 *)unaff_x24;
    uVar2 = *(undefined8 *)(unaff_x24 + 8);
    unaff_x29[-0x41] = 0;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar10,uVar2,unaff_x29 + -0x41,unaff_x19);
    if (unaff_x22 == 0) {
      pcVar6 = *(char **)(unaff_x24 + 0x10);
      puVar12 = (undefined1 *)(ulong)(byte)unaff_x24[0x18];
      puVar13 = &DAT_00000001;
      unaff_x22 = 0;
switchD_100314cd4_caseD_c0:
      unaff_x29[-0x42] = (char)puVar13;
      Swift::KeyedEncodingContainer::_encodeIfPresent(pcVar6,puVar12,unaff_x29 + -0x42,unaff_x19);
      if (unaff_x22 == 0) {
        pcVar6 = (char *)0x0;
        FUN_100314b8c();
        unaff_x22 = 0;
        unaff_x25 = pcVar6;
switchD_100314cd4_caseD_9d:
        unaff_x26 = (char *)(long)*(int *)(pcVar6 + 0x18);
switchD_100314cd4_caseD_ac:
        unaff_x29[-0x43] = 2;
        unaff_x20 = Foundation::AttributedString::typeMetadataAccessor();
        pcVar6 = &DAT_100fbf648;
        FUN_100003a00(&DAT_100fbf648,PTR_typeMetadataAccessor_100ea6e88,
                      PTR_Foundation__Foundation__AttributedString_>Swift__Encodable_100ea6e98);
switchD_100314cd4_caseD_98:
        Swift::KeyedEncodingContainer::_encodeIfPresent
                  (unaff_x24 + (long)unaff_x26,unaff_x29 + -0x43,unaff_x19,unaff_x20.unknown,pcVar6)
        ;
        if (unaff_x22 == 0) {
          iVar4 = *(int *)(unaff_x25 + 0x1c);
          unaff_x29[-0x44] = 3;
          UVar7 = Foundation::URL::typeMetadataAccessor();
          puVar8 = &DAT_100fbf650;
          FUN_100003a00(&DAT_100fbf650,PTR_typeMetadataAccessor_100ea71a8,
                        PTR_Foundation__Foundation__URL_>Swift__Encodable_100ea71b8);
          Swift::KeyedEncodingContainer::_encodeIfPresent
                    (unaff_x24 + iVar4,unaff_x29 + -0x44,unaff_x19,UVar7.unknown,puVar8);
          pcVar6 = *(char **)(unaff_x24 + *(int *)(unaff_x25 + 0x20));
          puVar12 = *(undefined1 **)(unaff_x24 + *(int *)(unaff_x25 + 0x20) + 8);
          unaff_x29[-0x45] = 4;
          param_3 = unaff_x29 + -0x45;
          unaff_x22 = 0;
switchD_100314cd4_caseD_e8:
          unaff_x21 = unaff_x22;
          param_4 = unaff_x19;
          pcVar9 = pcVar6;
          unaff_x19 = param_4;
switchD_100314cd4_caseD_bd:
          Swift::KeyedEncodingContainer::_encodeIfPresent(pcVar9,puVar12,param_3,param_4);
          if (unaff_x21 == 0) {
            iVar4 = *(int *)(unaff_x25 + 0x24);
            unaff_x29[-0x46] = 5;
            FUN_100316c38();
            pcVar6 = unaff_x24 + iVar4;
            unaff_x22 = 0;
            param_4 = PTR___type_metadata_for_Foundation_Data_100ea7300;
            unaff_x26 = pcVar9;
switchD_100314cd4_caseD_10:
            Swift::KeyedEncodingContainer::_encodeIfPresent
                      (pcVar6,unaff_x29 + -0x46,unaff_x19,param_4,unaff_x26);
            bVar1 = unaff_x22 == 0;
            unaff_x22 = 0;
            if (bVar1) {
switchD_100314cd4_caseD_34:
              puVar13 = (undefined1 *)(long)*(int *)(unaff_x25 + 0x28);
              goto switchD_100314cd4_caseD_35;
            }
          }
        }
      }
    }
    break;
  case (undefined1 *)0x1a:
    goto switchD_100314cd4_caseD_1a;
  case (undefined1 *)0x1b:
    goto switchD_100314cd4_caseD_1b;
  case (undefined1 *)0x1c:
    goto switchD_100314cd4_caseD_1c;
  case (undefined1 *)0x32:
  case (undefined1 *)0x62:
  case (undefined1 *)0x92:
    goto switchD_100314cd4_caseD_32;
  case (undefined1 *)0x34:
  case (undefined1 *)0x94:
    goto switchD_100314cd4_caseD_34;
  case (undefined1 *)0x35:
  case (undefined1 *)0x36:
  case (undefined1 *)0x95:
  case (undefined1 *)0x96:
  case (undefined1 *)0xb3:
  case (undefined1 *)0xdb:
    goto switchD_100314cd4_caseD_35;
  case (undefined1 *)0x38:
    goto switchD_100314cd4_caseD_38;
  case (undefined1 *)0x98:
    goto switchD_100314cd4_caseD_98;
  case (undefined1 *)0x99:
  case (undefined1 *)0xad:
  case (undefined1 *)0xc1:
  case (undefined1 *)0xd5:
    goto switchD_100314cd4_caseD_99;
  case (undefined1 *)0x9c:
    goto switchD_100314cd4_caseD_9c;
  case (undefined1 *)0x9d:
  case (undefined1 *)0xc5:
    goto switchD_100314cd4_caseD_9d;
  case (undefined1 *)0x9e:
  case (undefined1 *)0xc6:
    goto switchD_100314cd4_caseD_9e;
  case (undefined1 *)0xac:
    goto switchD_100314cd4_caseD_ac;
  case (undefined1 *)0xb0:
    goto switchD_100314cd4_caseD_b0;
  case (undefined1 *)0xbc:
    goto switchD_100314cd4_caseD_bc;
  case (undefined1 *)0xbd:
  case (undefined1 *)0xe5:
  case (undefined1 *)0xe9:
    goto switchD_100314cd4_caseD_bd;
  case (undefined1 *)0xc0:
    goto switchD_100314cd4_caseD_c0;
  case (undefined1 *)0xd4:
    goto switchD_100314cd4_caseD_d4;
  case (undefined1 *)0xd8:
    goto switchD_100314cd4_caseD_d8;
  case (undefined1 *)0xe4:
  case (undefined1 *)0xb2:
  case (undefined1 *)0xda:
    FUN_100316bb8();
switchD_100314cd4_caseD_1a:
switchD_100314cd4_caseD_f0:
switchD_100314cd4_caseD_1b:
    SVar27 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar27;
  case (undefined1 *)0xe8:
    goto switchD_100314cd4_caseD_e8;
  case (undefined1 *)0xf0:
    goto switchD_100314cd4_caseD_f0;
  case (undefined1 *)0xf1:
    FUN_100316f08(&DAT_65707974,&DAT_e400000000000000);
    *puVar13 = (char)pcVar6;
    SVar27.bridgeObject = puVar12;
    SVar27.str = pcVar6;
    return SVar27;
  case (undefined1 *)0xfc:
    goto switchD_100314cd4_caseD_fc;
  case (undefined1 *)0xff:
    goto switchD_100314cd4_caseD_ff;
  }
LAB_1003152a0:
  (**(code **)(unaff_x27 + 8))(unaff_x23,unaff_x19);
  SVar28.bridgeObject = unaff_x19;
  SVar28.str = unaff_x23;
  return SVar28;
switchD_100314cd4_caseD_35:
  unaff_x29[-0x47] = 6;
  Swift::KeyedEncodingContainer::_encodeIfPresent
            (unaff_x24 + (long)puVar13,unaff_x29 + -0x47,unaff_x19,
             PTR___type_metadata_for_Foundation_Data_100ea7300,unaff_x26);
  if (unaff_x22 == 0) {
    iVar4 = *(int *)(unaff_x25 + 0x2c);
    unaff_x29[-0x48] = 7;
    uVar10 = 0;
    FUN_1002fbb30(0);
    puVar8 = &DAT_100fbf660;
    FUN_100003a00(&DAT_100fbf660,FUN_1002fbb30,
                  PTR_CoreGraphics____C__CGSize_>Swift__Encodable_100eaf288);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x24 + iVar4,unaff_x29 + -0x48,unaff_x19,uVar10,puVar8);
    iVar4 = *(int *)(unaff_x25 + 0x30);
    unaff_x29[-0x51] = 8;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x24 + iVar4,unaff_x29 + -0x51,unaff_x19,
               PTR___type_metadata_for_Foundation_Data_100ea7300,unaff_x26);
    iVar4 = *(int *)(unaff_x25 + 0x34);
    unaff_x29[-0x52] = 9;
    puVar8 = &DAT_100fbedd8;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    puVar11 = &DAT_100fc1a60;
    FUN_100316c78(&DAT_100fc1a60,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x24 + iVar4,unaff_x29 + -0x52,unaff_x19,puVar8,puVar11);
    uVar10 = *(undefined8 *)(unaff_x24 + *(int *)(unaff_x25 + 0x38));
    cVar3 = (unaff_x24 + *(int *)(unaff_x25 + 0x38))[8];
    unaff_x29[-0x53] = 10;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar10,cVar3,unaff_x29 + -0x53,unaff_x19);
    iVar4 = *(int *)(unaff_x25 + 0x3c);
    unaff_x29[-0x54] = 0xb;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x24 + iVar4,unaff_x29 + -0x54,unaff_x19,
               PTR___type_metadata_for_Foundation_Data_100ea7300,unaff_x26);
    uVar10 = *(undefined8 *)(unaff_x24 + *(int *)(unaff_x25 + 0x40));
    cVar3 = (unaff_x24 + *(int *)(unaff_x25 + 0x40))[8];
    unaff_x29[-0x55] = 0xc;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar10,cVar3,unaff_x29 + -0x55,unaff_x19);
  }
  goto LAB_1003152a0;
switchD_100314cd4_caseD_38:
  puVar12 = (undefined1 *)((ulong)puVar12 & 0xffffffffffff | 0xee00617400000000);
switchD_100314cd4_caseD_12:
  pcVar6 = (char *)0x6966;
switchD_100314cd4_caseD_fc:
  SVar16.str = (char *)((ulong)pcVar6 & 0xffffffff0000ffff | 0x616d4973656c0000);
  SVar16.bridgeObject = puVar12;
  return SVar16;
}



/* Address: 0x100314e20 | FUN_100314e20 */

void FUN_100314e20(void)

{
  undefined1 *unaff_x20;
  
  FUN_100314cac(*unaff_x20);
  return;
}



/* Address: 0x100314e28 | FUN_100314e28 */

void FUN_100314e28(undefined1 *param_1,undefined1 param_2)

{
  FUN_100316f08();
  *param_1 = param_2;
  return;
}



/* Address: 0x100314e4c | FUN_100314e4c */

void FUN_100314e4c(undefined1 *param_1)

{
  *param_1 = 0xd;
  return;
}



/* Address: 0x100314e58 | FUN_100314e58 */

String FUN_100314e58(void)

{
  String SVar1;
  
  FUN_100316bb8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100314e80 | FUN_100314e80 */

String FUN_100314e80(void)

{
  String SVar1;
  
  FUN_100316bb8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100314ea8 | switchD_100314cd4::caseD_19 */

void switchD_100314cd4::caseD_19(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  AttributedString AVar5;
  undefined *puVar6;
  URL UVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_70 [11];
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100fbf640;
  FUN_1000037f0(&DAT_100fbf640,&DAT_100c40d10);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100316bb8();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encodeIfPresent(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[2],*(undefined1 *)(unaff_x20 + 3),&local_52,puVar3);
    lVar4 = 0;
    FUN_100314b8c();
    iVar2 = *(int *)(lVar4 + 0x18);
    local_53 = 2;
    AVar5 = Foundation::AttributedString::typeMetadataAccessor();
    puVar6 = &DAT_100fbf648;
    FUN_100003a00(&DAT_100fbf648,PTR_typeMetadataAccessor_100ea6e88,
                  PTR_Foundation__Foundation__AttributedString_>Swift__Encodable_100ea6e98);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_53,puVar3,AVar5.unknown,puVar6);
    iVar2 = *(int *)(lVar4 + 0x1c);
    local_54 = 3;
    UVar7 = Foundation::URL::typeMetadataAccessor();
    puVar6 = &DAT_100fbf650;
    FUN_100003a00(&DAT_100fbf650,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Encodable_100ea71b8);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_54,puVar3,UVar7.unknown,puVar6);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x20));
    uVar8 = *puVar1;
    local_55 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar8,puVar1[1],&local_55,puVar3);
    iVar2 = *(int *)(lVar4 + 0x24);
    local_56 = 5;
    FUN_100316c38();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_56,puVar3,
               PTR___type_metadata_for_Foundation_Data_100ea7300,uVar8);
    local_57 = 6;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28),&local_57,puVar3,
               PTR___type_metadata_for_Foundation_Data_100ea7300,uVar8);
    iVar2 = *(int *)(lVar4 + 0x2c);
    local_58 = 7;
    uVar9 = 0;
    FUN_1002fbb30(0);
    puVar6 = &DAT_100fbf660;
    FUN_100003a00(&DAT_100fbf660,FUN_1002fbb30,
                  PTR_CoreGraphics____C__CGSize_>Swift__Encodable_100eaf288);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_58,puVar3,uVar9,puVar6);
    local_61 = 8;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x30),&local_61,puVar3,
               PTR___type_metadata_for_Foundation_Data_100ea7300,uVar8);
    iVar2 = *(int *)(lVar4 + 0x34);
    local_62 = 9;
    puVar6 = &DAT_100fbedd8;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    puVar10 = &DAT_100fc1a60;
    FUN_100316c78(&DAT_100fc1a60,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar2,&local_62,puVar3,puVar6,puVar10);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x38));
    local_63 = 10;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (*puVar1,*(undefined1 *)(puVar1 + 1),&local_63,puVar3);
    local_64 = 0xb;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c),&local_64,puVar3,
               PTR___type_metadata_for_Foundation_Data_100ea7300,uVar8);
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x40));
    local_65 = 0xc;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (*puVar1,*(undefined1 *)(puVar1 + 1),&local_65,puVar3);
  }
  (**(code **)(lVar11 + 8))(auStack_70 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x1003152d4 | FUN_1003152d4 */

/* WARNING: Removing unreachable block (ram,0x000100315820) */
/* WARNING: Removing unreachable block (ram,0x00010031586c) */
/* WARNING: Removing unreachable block (ram,0x0001003159a8) */
/* WARNING: Removing unreachable block (ram,0x000100315588) */
/* WARNING: Removing unreachable block (ram,0x000100315598) */

void FUN_1003152d4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  undefined8 *puVar17;
  undefined8 *local_120 [5];
  long local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined1 local_80;
  undefined7 uStack_7f;
  long lStack_78;
  undefined1 local_70;
  undefined1 local_51;
  
  puVar8 = &DAT_100fc1a40;
  local_120[4] = (undefined8 *)param_1;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100fbf520;
  local_c8 = (long)local_120 - extraout_x8;
  FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = ((long)local_120 - extraout_x8) - extraout_x8_00;
  puVar8 = &DAT_100fbf608;
  local_b0 = lVar16;
  FUN_1000037f0(&DAT_100fbf608,&DAT_100c40d08);
  local_b8 = *(long *)(puVar8 + -8);
  local_a8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = lVar16 - extraout_x8_01;
  lVar9 = 0;
  FUN_100314b8c();
  lVar10 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar17 = (undefined8 *)(lVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = 0;
  *(undefined1 *)(puVar17 + 3) = 1;
  iVar7 = *(int *)(lVar10 + 0x18);
  local_c0 = (undefined *)Foundation::AttributedString::typeMetadataAccessor();
  local_d8 = (long)iVar7;
  (**(code **)(*(long *)(local_c0 + -8) + 0x38))((long)puVar17 + (long)iVar7,1,1);
  iVar7 = *(int *)(lVar9 + 0x1c);
  local_d0 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_e0 = (long)iVar7;
  (**(code **)(*(long *)(local_d0 + -8) + 0x38))((long)puVar17 + (long)iVar7,1,1);
  puVar1 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x20));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x24));
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  puVar3 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x28));
  local_e8 = puVar3;
  puVar3[1] = 0xf000000000000000;
  *puVar3 = 0;
  puVar3 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x2c));
  *puVar3 = 0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 2) = 1;
  puVar4 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x30));
  local_f0 = puVar4;
  puVar4[1] = 0xf000000000000000;
  *puVar4 = 0;
  local_f8 = (long)*(int *)(lVar9 + 0x34);
  *(undefined8 *)((long)puVar17 + local_f8) = 0;
  puVar4 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x38));
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 1;
  puVar5 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x3c));
  puVar5[1] = 0xf000000000000000;
  *puVar5 = 0;
  puVar6 = (undefined8 *)((long)puVar17 + (long)*(int *)(lVar9 + 0x40));
  *puVar6 = 0;
  *(undefined1 *)(puVar6 + 1) = 1;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100316bb8();
  Swift::Decoder::_container();
  puVar8 = local_a8;
  lVar9 = local_b0;
  lVar10 = local_b8;
  if (unaff_x21 == 0) {
    local_80 = 0;
    puVar11 = &local_80;
    puVar12 = local_a8;
    local_120[0] = puVar6;
    local_120[1] = puVar5;
    local_120[2] = puVar4;
    local_120[3] = puVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    *puVar17 = puVar11;
    puVar17[1] = puVar12;
    local_80 = 1;
    puVar11 = &local_80;
    puVar12 = puVar8;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar17[2] = puVar11;
    *(char *)(puVar17 + 3) = (char)puVar12;
    local_80 = 2;
    puVar12 = &DAT_100fbf618;
    FUN_100003a00(&DAT_100fbf618,PTR_typeMetadataAccessor_100ea6e88,
                  PTR_Foundation__Foundation__AttributedString_>Swift__Decodable_100ea6ea0);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (lVar9,local_c0,&local_80,puVar8,local_c0,puVar12);
    FUN_1001a7c4c(lVar9,(long)puVar17 + local_d8,&DAT_100fbf520,&BYTE_100c40c00);
    local_80 = 3;
    puVar12 = &DAT_100fbf620;
    FUN_100003a00(&DAT_100fbf620,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0);
    lVar9 = local_c8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_c8,local_d0,&local_80,puVar8,local_d0,puVar12);
    FUN_1001a7c4c(lVar9,(long)puVar17 + local_e0,&DAT_100fc1a40,&DAT_100c40660);
    local_80 = 4;
    puVar11 = &local_80;
    puVar12 = puVar8;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    *puVar1 = puVar11;
    puVar1[1] = puVar12;
    local_51 = 5;
    FUN_100316bf8();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_80,PTR___type_metadata_for_Foundation_Data_100ea7300,&local_51,puVar8,
               PTR___type_metadata_for_Foundation_Data_100ea7300,puVar11);
    lVar9 = lStack_78;
    puVar1 = local_120[3];
    uVar13 = CONCAT71(uStack_7f,local_80);
    FUN_10003bf18(*local_120[3],local_120[3][1]);
    *puVar1 = uVar13;
    puVar1[1] = lVar9;
    local_51 = 6;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_80,PTR___type_metadata_for_Foundation_Data_100ea7300,&local_51,puVar8,
               PTR___type_metadata_for_Foundation_Data_100ea7300,puVar11);
    puVar1 = local_e8;
    uVar13 = CONCAT71(uStack_7f,local_80);
    local_b0 = lStack_78;
    FUN_10003bf18(*local_e8,local_e8[1]);
    lVar9 = local_b0;
    *puVar1 = uVar13;
    puVar1[1] = lVar9;
    uVar13 = 0;
    FUN_1002fbb30(0);
    local_51 = 7;
    puVar12 = &DAT_100fbf630;
    FUN_100003a00(&DAT_100fbf630,FUN_1002fbb30,
                  PTR_CoreGraphics____C__CGSize_>Swift__Decodable_100eaf298);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_80,uVar13,&local_51,puVar8,uVar13,puVar12);
    uVar13 = CONCAT71(uStack_7f,local_80);
    puVar3[1] = lStack_78;
    *puVar3 = uVar13;
    *(undefined1 *)(puVar3 + 2) = local_70;
    local_51 = 8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_80,PTR___type_metadata_for_Foundation_Data_100ea7300,&local_51,puVar8,
               PTR___type_metadata_for_Foundation_Data_100ea7300,puVar11);
    lVar9 = lStack_78;
    puVar1 = local_f0;
    uVar13 = CONCAT71(uStack_7f,local_80);
    FUN_10003bf18(*local_f0,local_f0[1]);
    *puVar1 = uVar13;
    puVar1[1] = lVar9;
    puVar12 = &DAT_100fbedd8;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    local_51 = 9;
    puVar14 = &DAT_100fbf638;
    FUN_100316c78(&DAT_100fbf638,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_80,puVar12,&local_51,puVar8,puVar12,puVar14);
    *(ulong *)((long)puVar17 + local_f8) = CONCAT71(uStack_7f,local_80);
    local_80 = 10;
    puVar15 = &local_80;
    puVar8 = local_a8;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar1 = local_120[2];
    *local_120[2] = puVar15;
    *(char *)(puVar1 + 1) = (char)puVar8;
    local_51 = 0xb;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_80,PTR___type_metadata_for_Foundation_Data_100ea7300,&local_51,local_a8,
               PTR___type_metadata_for_Foundation_Data_100ea7300,puVar11);
    puVar1 = local_120[1];
    uVar13 = CONCAT71(uStack_7f,local_80);
    FUN_10003bf18(*local_120[1],local_120[1][1]);
    *puVar1 = uVar13;
    puVar1[1] = lStack_78;
    local_80 = 0xc;
    puVar11 = &local_80;
    puVar8 = local_a8;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar10 + 8))(lVar16,local_a8);
    puVar1 = local_120[0];
    *local_120[0] = puVar11;
    *(char *)(puVar1 + 1) = (char)puVar8;
    FUN_1000c495c(puVar17,local_120[4],FUN_100314b8c);
    FUN_100004594(param_2);
  }
  else {
    FUN_100004594(param_2);
  }
  FUN_10005241c(puVar17,FUN_100314b8c);
  return;
}



/* Address: 0x100315a10 | FUN_100315a10 */

void FUN_100315a10(void)

{
  FUN_1003152d4();
  return;
}



/* Address: 0x100315a24 | FUN_100315a24 */

void FUN_100315a24(void)

{
  switchD_100314cd4::caseD_19();
  return;
}



/* Address: 0x100315a38 | FUN_100315a38 */

void FUN_100315a38(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  URL UVar13;
  undefined8 uVar14;
  AttributedString AVar15;
  _StringComparisonResult expecting;
  undefined8 uVar16;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  undefined *puVar18;
  long extraout_x12;
  undefined1 *puVar19;
  long lVar20;
  long lVar21;
  undefined1 *puVar22;
  long lVar23;
  code *pcVar24;
  long lVar25;
  
  puVar11 = &DAT_100fbf520;
  FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar19 = &stack0xffffffffffffff90 + -extraout_x8;
  puVar11 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar21 = (long)puVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar21 - extraout_x12;
  puVar22 = (undefined1 *)param_2[1];
  if (puVar22 == (undefined1 *)0x0) {
LAB_100315ef0:
    lVar20 = 0;
    if ((char)param_2[3] != '\x01') {
      lVar20 = param_2[2];
    }
    lVar21 = 0;
    FUN_100314b8c();
    FUN_100011090((long)param_2 + (long)*(int *)(lVar21 + 0x18),puVar19,&DAT_100fbf520,
                  &BYTE_100c40c00);
    lVar21 = 0;
    FUN_10031a030();
    iVar9 = *(int *)(lVar21 + 0x14);
    AVar15 = Foundation::AttributedString::typeMetadataAccessor();
    lVar21 = *(long *)(AVar15.unknown + -8);
    pcVar24 = *(code **)(lVar21 + 0x30);
    puVar22 = puVar19;
    (*pcVar24)(puVar19,1,AVar15.unknown);
    if ((int)puVar22 == 1) {
      Foundation::AttributedString::init();
      puVar22 = puVar19;
      (*pcVar24)(puVar19,1,AVar15.unknown);
      if ((int)puVar22 != 1) {
        FUN_100005808(puVar19,&DAT_100fbf520,&BYTE_100c40c00);
      }
    }
    else {
      (**(code **)(lVar21 + 0x20))((long)param_1 + (long)iVar9,puVar19,AVar15.unknown);
    }
    *param_1 = lVar20;
    FUN_10005241c(param_2,FUN_100314b8c);
    uVar14 = 0;
    FUN_100317b10(0);
    uVar16 = 0;
  }
  else {
    lVar23 = *param_2;
    if ((lVar23 != 0x6b6e696c) || (puVar22 != &DAT_e400000000000000)) {
      expecting.value = (__int8)lVar23;
      bVar10 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)0x6b6e696c,(_StringGuts)0xe400000000000000,expecting);
      if (!bVar10) {
        if (((lVar23 == 0x6567616d69) && (puVar22 == &DAT_e500000000000000)) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x6567616d69,(_StringGuts)0xe500000000000000,expecting)
           , bVar10)) {
          lVar21 = 0;
          FUN_100314b8c();
          plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar21 + 0x2c));
          bVar10 = (char)plVar2[2] != '\x01';
          lVar20 = 0;
          if (bVar10) {
            lVar20 = *plVar2;
          }
          lVar23 = 0;
          if (bVar10) {
            lVar23 = plVar2[1];
          }
          plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar21 + 0x30));
          uVar8 = plVar2[1];
          uVar17 = uVar8 >> 0x3c;
          lVar21 = 0;
          if (uVar17 < 0xf) {
            lVar21 = *plVar2;
          }
          uVar3 = 0xc000000000000000;
          if (uVar17 < 0xf) {
            uVar3 = uVar8;
          }
          FUN_10011da54();
          FUN_10005241c(param_2,FUN_100314b8c);
          *param_1 = lVar20;
          param_1[1] = lVar23;
          param_1[2] = lVar21;
          param_1[3] = uVar3;
          uVar14 = 0;
          FUN_100317b10(0);
          uVar16 = 2;
LAB_100315d74:
          _swift_storeEnumTagMultiPayload(param_1,uVar14,uVar16);
          return;
        }
        if (((lVar23 == 0x726f6c6f63) && (puVar22 == &DAT_e500000000000000)) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x726f6c6f63,(_StringGuts)0xe500000000000000,expecting)
           , bVar10)) {
          lVar20 = 0;
          FUN_100314b8c();
          plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar20 + 0x40));
          lVar20 = 0;
          if ((char)plVar2[1] != '\x01') {
            lVar20 = *plVar2;
          }
          FUN_10005241c(param_2,FUN_100314b8c);
          *param_1 = lVar20;
          uVar14 = 0;
          FUN_100317b10(0);
          uVar16 = 3;
          goto LAB_100315d74;
        }
        if (((lVar23 == 0x73656c6966) && (puVar22 == &DAT_e500000000000000)) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x73656c6966,(_StringGuts)0xe500000000000000,expecting)
           , bVar10)) {
          lVar20 = 0;
          FUN_100314b8c();
          puVar18 = *(undefined **)((long)param_2 + (long)*(int *)(lVar20 + 0x34));
          puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (puVar18 != (undefined *)0x0) {
            puVar11 = puVar18;
          }
          plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar20 + 0x38));
          lVar21 = 0;
          if ((char)plVar2[1] != '\x01') {
            lVar21 = *plVar2;
          }
          plVar2 = (long *)((long)param_2 + (long)*(int *)(lVar20 + 0x3c));
          lVar23 = *plVar2;
          uVar8 = plVar2[1];
          lVar20 = 0;
          if (uVar8 >> 0x3c < 0xf) {
            lVar20 = lVar23;
          }
          uVar17 = 0xc000000000000000;
          if (uVar8 >> 0x3c < 0xf) {
            uVar17 = uVar8;
          }
          _swift_bridgeObjectRetain(puVar18);
          FUN_10011da54(lVar23,uVar8);
          FUN_10005241c(param_2,FUN_100314b8c);
          *param_1 = (long)puVar11;
          param_1[1] = lVar21;
          param_1[2] = lVar20;
          param_1[3] = uVar17;
          uVar14 = 0;
          FUN_100317b10(0);
          uVar16 = 4;
          goto LAB_100315d74;
        }
        goto LAB_100315ef0;
      }
    }
    lVar12 = 0;
    FUN_100314b8c();
    FUN_100011090((long)param_2 + (long)*(int *)(lVar12 + 0x1c),lVar20,&DAT_100fc1a40,&DAT_100c40660
                 );
    UVar13 = Foundation::URL::typeMetadataAccessor();
    lVar25 = *(long *)(UVar13.unknown + -8);
    pcVar24 = *(code **)(lVar25 + 0x30);
    lVar23 = lVar20;
    (*pcVar24)(lVar20,1,UVar13.unknown);
    if ((int)lVar23 == 1) {
      Foundation::URL::_init();
      lVar23 = lVar21;
      (*pcVar24)(lVar21,1,UVar13.unknown);
      if ((int)lVar23 == 1) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x100316004);
        (*pcVar24)();
      }
      (**(code **)(lVar25 + 0x20))(param_1,lVar21,UVar13.unknown);
      lVar21 = lVar20;
      (*pcVar24)(lVar20,1,UVar13.unknown);
      if ((int)lVar21 != 1) {
        FUN_100005808(lVar20,&DAT_100fc1a40,&DAT_100c40660);
      }
    }
    else {
      (**(code **)(lVar25 + 0x20))(param_1,lVar20,UVar13.unknown);
    }
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x20));
    uVar14 = *puVar1;
    uVar5 = puVar1[1];
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x24));
    uVar16 = *puVar1;
    uVar6 = puVar1[1];
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x28));
    uVar4 = *puVar1;
    uVar7 = puVar1[1];
    lVar20 = 0;
    FUN_1003187b8();
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar20 + 0x14));
    *puVar1 = uVar14;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar20 + 0x18));
    *puVar1 = uVar16;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar20 + 0x1c));
    *puVar1 = uVar4;
    puVar1[1] = uVar7;
    _swift_bridgeObjectRetain(uVar5);
    FUN_10011da54(uVar16,uVar6);
    FUN_10011da54(uVar4,uVar7);
    FUN_10005241c(param_2,FUN_100314b8c);
    uVar14 = 0;
    FUN_100317b10(0);
    uVar16 = 1;
  }
  _swift_storeEnumTagMultiPayload(param_1,uVar14,uVar16);
  return;
}



/* Address: 0x100316004 | FUN_100316004 */

void FUN_100316004(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  AttributedString AVar18;
  URL UVar19;
  undefined8 *puVar20;
  long extraout_x8;
  long lVar21;
  long extraout_x8_00;
  undefined8 *puVar22;
  long extraout_x8_01;
  undefined8 uVar23;
  long alStack_e0 [2];
  undefined8 *local_d0 [2];
  long local_c0;
  code *local_b8;
  code *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 *local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined8 *local_70;
  undefined8 local_68;
  
  lVar17 = 0;
  local_68 = param_2;
  FUN_1003187b8();
  local_78 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  lVar21 = (long)alStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0;
  local_80 = lVar21;
  FUN_10031a030();
  local_88 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  puVar22 = (undefined8 *)(lVar21 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar17 = 0;
  local_90 = puVar22;
  FUN_100317b10();
  local_70 = (undefined8 *)lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar17 + -8) + 0x40));
  puVar22 = (undefined8 *)((long)puVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  lVar17 = 0;
  FUN_100314b8c();
  iVar16 = *(int *)(lVar17 + 0x18);
  AVar18 = Foundation::AttributedString::typeMetadataAccessor();
  local_a0 = *(long *)(AVar18.unknown + -8);
  local_b0 = *(code **)(local_a0 + 0x38);
  local_98 = (long)iVar16;
  (*local_b0)((long)param_1 + (long)iVar16,1,1,AVar18.unknown);
  iVar16 = *(int *)(lVar17 + 0x1c);
  UVar19 = Foundation::URL::typeMetadataAccessor();
  local_c0 = *(long *)(UVar19.unknown + -8);
  local_b8 = *(code **)(local_c0 + 0x38);
  local_a8 = (long)iVar16;
  (*local_b8)((long)param_1 + (long)iVar16,1,1,UVar19.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x20));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x24));
  puVar2[1] = 0xf000000000000000;
  *puVar2 = 0;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x28));
  puVar3[1] = 0xf000000000000000;
  *puVar3 = 0;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x2c));
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 1;
  local_d0[0] = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x30));
  local_d0[0][1] = 0xf000000000000000;
  *local_d0[0] = 0;
  alStack_e0[1] = (long)*(int *)(lVar17 + 0x34);
  *(undefined8 *)((long)param_1 + alStack_e0[1]) = 0;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x38));
  *puVar5 = 0;
  *(undefined1 *)(puVar5 + 1) = 1;
  local_d0[1] = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x3c));
  local_d0[1][1] = 0xf000000000000000;
  *local_d0[1] = 0;
  puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x40));
  *puVar6 = 0;
  *(undefined1 *)(puVar6 + 1) = 1;
  FUN_1000c495c(local_68,puVar22,FUN_100317b10);
  puVar20 = puVar22;
  _swift_getEnumCaseMultiPayload(puVar22,local_70);
  lVar15 = local_78;
  lVar14 = local_80;
  lVar13 = local_88;
  puVar12 = local_90;
  lVar11 = local_98;
  lVar21 = local_a0;
  lVar17 = local_a8;
  iVar16 = (int)puVar20;
  if (iVar16 < 2) {
    local_d0[0] = puVar1;
    local_d0[1] = puVar2;
    local_70 = puVar3;
    if (iVar16 == 0) {
      FUN_1000523d8(puVar22,local_90,FUN_10031a030);
      FUN_10005241c(local_68,FUN_100317b10);
      param_1[1] = &DAT_e400000000000000;
      *param_1 = 0x74786574;
      param_1[2] = *puVar12;
      *(undefined1 *)(param_1 + 3) = 0;
      FUN_100005808((long)param_1 + lVar11,&DAT_100fbf520,&BYTE_100c40c00);
      (**(code **)(lVar21 + 0x20))
                ((long)param_1 + lVar11,(long)puVar12 + (long)*(int *)(lVar13 + 0x14),AVar18.unknown
                );
      (*local_b0)((long)param_1 + lVar11,0,1,AVar18.unknown);
    }
    else {
      FUN_1000523d8(puVar22,local_80,FUN_1003187b8);
      FUN_10005241c(local_68,FUN_100317b10);
      param_1[1] = &DAT_e400000000000000;
      *param_1 = 0x6b6e696c;
      FUN_100005808((long)param_1 + lVar17,&DAT_100fc1a40,&DAT_100c40660);
      (**(code **)(local_c0 + 0x20))((long)param_1 + lVar17,lVar14,UVar19.unknown);
      (*local_b8)((long)param_1 + lVar17,0,1,UVar19.unknown);
      puVar2 = local_d0[1];
      puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar15 + 0x14));
      uVar23 = *puVar1;
      local_d0[0][1] = puVar1[1];
      *local_d0[0] = uVar23;
      puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar15 + 0x18));
      uVar23 = *puVar1;
      uVar7 = puVar1[1];
      FUN_10003bf18(*local_d0[1],local_d0[1][1]);
      puVar3 = local_70;
      *puVar2 = uVar23;
      puVar2[1] = uVar7;
      puVar1 = (undefined8 *)(lVar14 + *(int *)(lVar15 + 0x1c));
      uVar23 = *puVar1;
      uVar7 = puVar1[1];
      FUN_10003bf18(*local_70,local_70[1]);
      *puVar3 = uVar23;
      puVar3[1] = uVar7;
    }
  }
  else if (iVar16 == 2) {
    uVar23 = *puVar22;
    uVar8 = puVar22[1];
    uVar7 = puVar22[2];
    uVar9 = puVar22[3];
    FUN_10005241c(local_68,FUN_100317b10);
    puVar1 = local_d0[0];
    param_1[1] = &DAT_e500000000000000;
    *param_1 = 0x6567616d69;
    *puVar4 = uVar23;
    puVar4[1] = uVar8;
    *(undefined1 *)(puVar4 + 2) = 0;
    FUN_10003bf18(*local_d0[0],local_d0[0][1]);
    *puVar1 = uVar7;
    puVar1[1] = uVar9;
  }
  else if (iVar16 == 3) {
    uVar23 = *puVar22;
    FUN_10005241c(local_68,FUN_100317b10);
    param_1[1] = &DAT_e500000000000000;
    *param_1 = 0x726f6c6f63;
    *puVar6 = uVar23;
    *(undefined1 *)(puVar6 + 1) = 0;
  }
  else {
    uVar23 = *puVar22;
    uVar8 = puVar22[1];
    uVar7 = puVar22[2];
    uVar9 = puVar22[3];
    FUN_10005241c(local_68,FUN_100317b10);
    puVar1 = local_d0[1];
    param_1[1] = &DAT_e500000000000000;
    *param_1 = 0x73656c6966;
    *(undefined8 *)((long)param_1 + alStack_e0[1]) = uVar23;
    *puVar5 = uVar8;
    *(undefined1 *)(puVar5 + 1) = 0;
    uVar8 = *local_d0[1];
    uVar10 = local_d0[1][1];
    _swift_bridgeObjectRetain(uVar23);
    FUN_10011da54(uVar7,uVar9);
    FUN_10003bf18(uVar8,uVar10);
    _swift_bridgeObjectRelease(uVar23);
    FUN_10003bf18(uVar7,uVar9);
    *puVar1 = uVar7;
    puVar1[1] = uVar9;
  }
  return;
}



/* Address: 0x100316490 | FUN_100316490 */

/* WARNING: Removing unreachable block (ram,0x0001003166cc) */
/* WARNING: Removing unreachable block (ram,0x000100316800) */
/* WARNING: Removing unreachable block (ram,0x000100316754) */

void FUN_100316490(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  Data DVar4;
  Data DVar5;
  AttributedString AVar6;
  URL UVar7;
  PropertyListDecoder *pPVar8;
  long extraout_x8;
  long extraout_x8_00;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long local_80 [4];
  
  puVar3 = &DAT_100fbf668;
  local_80[2] = param_1;
  FUN_1000037f0(&DAT_100fbf668,&DAT_100c40d18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar13 = (long)local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80[1] = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12;
  DVar4.unknown = (undefined *)0x0;
  FUN_100314b8c();
  lVar11 = *(long *)(DVar4.unknown + -8);
  DVar5.unknown = DVar4.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80[0] = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar10 = (undefined8 *)(lVar9 - extraout_x12_01);
  *puVar10 = 0;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *(undefined1 *)(puVar10 + 3) = 1;
  iVar2 = *(int *)(DVar5.unknown + 0x18);
  AVar6 = Foundation::AttributedString::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar6.unknown + -8) + 0x38))((long)puVar10 + (long)iVar2,1,1,AVar6.unknown)
  ;
  iVar2 = *(int *)(DVar4.unknown + 0x1c);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar7.unknown + -8) + 0x38))((long)puVar10 + (long)iVar2,1,1,UVar7.unknown)
  ;
  iVar2 = *(int *)(DVar4.unknown + 0x20);
  *(undefined8 *)((long)puVar10 + (long)iVar2) = 0;
  ((undefined8 *)((long)puVar10 + (long)iVar2))[1] = 0;
  iVar2 = *(int *)(DVar4.unknown + 0x24);
  ((undefined8 *)((long)puVar10 + (long)iVar2))[1] = 0xf000000000000000;
  *(undefined8 *)((long)puVar10 + (long)iVar2) = 0;
  iVar2 = *(int *)(DVar4.unknown + 0x28);
  ((undefined8 *)((long)puVar10 + (long)iVar2))[1] = 0xf000000000000000;
  *(undefined8 *)((long)puVar10 + (long)iVar2) = 0;
  puVar1 = (undefined8 *)((long)puVar10 + (long)*(int *)(DVar4.unknown + 0x2c));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 1;
  iVar2 = *(int *)(DVar4.unknown + 0x30);
  ((undefined8 *)((long)puVar10 + (long)iVar2))[1] = 0xf000000000000000;
  *(undefined8 *)((long)puVar10 + (long)iVar2) = 0;
  *(undefined8 *)((long)puVar10 + (long)*(int *)(DVar4.unknown + 0x34)) = 0;
  iVar2 = *(int *)(DVar4.unknown + 0x38);
  *(undefined8 *)((long)puVar10 + (long)iVar2) = 0;
  *(undefined1 *)((undefined8 *)((long)puVar10 + (long)iVar2) + 1) = 1;
  iVar2 = *(int *)(DVar4.unknown + 0x3c);
  ((undefined8 *)((long)puVar10 + (long)iVar2))[1] = 0xf000000000000000;
  *(undefined8 *)((long)puVar10 + (long)iVar2) = 0;
  iVar2 = *(int *)(DVar4.unknown + 0x40);
  *(undefined8 *)((long)puVar10 + (long)iVar2) = 0;
  *(undefined1 *)((undefined8 *)((long)puVar10 + (long)iVar2) + 1) = 1;
  pPVar8 = Foundation::PropertyListDecoder::typeMetadataAccessor();
  _swift_allocObject(pPVar8,*(undefined4 *)(pPVar8 + 0x30),*(undefined2 *)(pPVar8 + 0x34));
  pPVar8 = Foundation::PropertyListDecoder::init(pPVar8);
  FUN_100003a00(&DAT_100fbf670,FUN_100314b8c,&DAT_100c40cb0);
  Foundation::PropertyListDecoder::_decode(pPVar8,DVar4);
  FUN_10005241c(puVar10,FUN_100314b8c);
  FUN_10003bf2c(param_2,param_3);
  _swift_release(pPVar8);
  pcVar12 = *(code **)(lVar11 + 0x38);
  (*pcVar12)(lVar13,0,1,DVar4.unknown);
  FUN_1000523d8(lVar13,lVar9,FUN_100314b8c);
  FUN_1000523d8(lVar9,puVar10,FUN_100314b8c);
  lVar13 = local_80[2];
  FUN_1000523d8(puVar10,local_80[2],FUN_100314b8c);
  (*pcVar12)(lVar13,0,1,DVar4.unknown);
  return;
}



/* Address: 0x1003168a8 | FUN_1003168a8 */

/* WARNING: Removing unreachable block (ram,0x000100316a3c) */
/* WARNING: Removing unreachable block (ram,0x000100316ab4) */
/* WARNING: Removing unreachable block (ram,0x000100316ac8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100316aac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1003168a8(void)

{
  byte *pbVar1;
  PropertyListEncoder *pPVar2;
  Data DVar3;
  JSONEncoder *this;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_f8 [31];
  char local_d9;
  long local_d8 [7];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pbVar1 = &BYTE_100c40cd8;
  _swift_getKeyPath(&BYTE_100c40cd8);
  FUN_1000037f0(&DAT_100fbf5f8,&DAT_100c40d00);
  _swift_initStackObject();
  FUN_1000da6e0(pbVar1);
  FUN_1000da768(local_d8);
  _swift_beginAccess(local_d8[0] + 0x10,auStack_f8,0,0);
  uVar8 = *(undefined8 *)(local_d8[0] + 0x18);
  uVar6 = *(undefined8 *)(local_d8[0] + 0x10);
  uStack_88 = *(undefined8 *)(local_d8[0] + 0x28);
  uVar9 = *(undefined8 *)(local_d8[0] + 0x20);
  uStack_78 = *(undefined8 *)(local_d8[0] + 0x38);
  uVar7 = *(undefined8 *)(local_d8[0] + 0x30);
  uVar5 = *(undefined8 *)(local_d8[0] + 0x40);
  local_a0 = uVar6;
  uStack_98 = uVar8;
  local_90 = uVar9;
  local_80 = uVar7;
  local_70 = uVar5;
  _swift_retain(uVar6);
  _swift_retain(uVar8);
  _swift_retain(uVar9);
  _swift_retain(uVar7);
  _swift_retain(uVar5);
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(&local_d9);
  _swift_release(uVar5);
  _swift_release(uVar7);
  _swift_release(uVar9);
  _swift_release(uVar8);
  _swift_release(uVar6);
  _swift_release(local_d8[0]);
  if (local_d9 == '\x01') {
    pPVar2 = Foundation::PropertyListEncoder::typeMetadataAccessor();
    _swift_allocObject(pPVar2,*(undefined4 *)(pPVar2 + 0x30),*(undefined2 *)(pPVar2 + 0x34));
    pPVar2 = Foundation::PropertyListEncoder::init(pPVar2);
    Foundation::PropertyListEncoder::set_outputFormat(pPVar2,(NSPropertyListFormat)0xc8);
    uVar5 = 0;
    FUN_100314b8c(0);
    FUN_100003a00(&DAT_100fbf600,FUN_100314b8c,&DAT_100c40c88);
    DVar3 = Foundation::PropertyListEncoder::_encode();
  }
  else {
    this = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
    pPVar2 = (PropertyListEncoder *)Foundation::JSONEncoder::init(this);
    uVar5 = 0;
    FUN_100314b8c(0);
    puVar4 = &DAT_100fbf600;
    FUN_100003a00(&DAT_100fbf600,FUN_100314b8c,&DAT_100c40c88);
    DVar3 = Foundation::JSONEncoder::_encode((JSONEncoder *)pPVar2,puVar4,uVar5,puVar4);
  }
  _swift_release(pbVar1);
  _swift_release(pPVar2);
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = DVar3.unknown;
  return auVar10;
}



/* Address: 0x100316b18 | FUN_100316b18 */

void FUN_100316b18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100376f64(0);
  FUN_1000d80e0(param_1,"PasteCore/DI+PasteCore.swift",0x1c,2,0x43,0x13,FUN_1002fd760,0,uVar1);
  return;
}



/* Address: 0x100316b68 | FUN_100316b68 */

void FUN_100316b68(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100376f64(0);
  FUN_1000d80e0(param_1,"PasteCore/DI+PasteCore.swift",0x1c,2,0x43,0x13,FUN_1002fd760,0,uVar1);
  return;
}



/* Address: 0x100316bb8 | FUN_100316bb8 */

void FUN_100316bb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbf610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40de4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40de4,&DAT_100eca530);
  DAT_100fbf610 = pTVar1;
  return;
}



/* Address: 0x100316bf8 | FUN_100316bf8 */

void FUN_100316bf8(void)

{
  undefined *puVar1;
  
  if (DAT_100fbf628 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Decodable_100ea7318,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fbf628 = puVar1;
  return;
}



/* Address: 0x100316c38 | FUN_100316c38 */

void FUN_100316c38(void)

{
  undefined *puVar1;
  
  if (DAT_100fbf658 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Encodable_100ea7308;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Encodable_100ea7308,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fbf658 = puVar1;
  return;
}



/* Address: 0x100316c78 | FUN_100316c78 */

void FUN_100316c78(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fbedd8;
    FUN_100005c24(&DAT_100fbedd8,&DAT_100c42ed0);
    local_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100316ce0 | FUN_100316ce0 */

void FUN_100316ce0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100316cec | FUN_100316cec */

int FUN_100316cec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf3 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 0xc) {
      iVar2 = 4;
    }
    if (param_2 + 0xc >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100316d68;
        goto LAB_100316d4c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100316d4c:
      return ((uint)*param_1 | uVar1 << 8) - 0xc;
    }
  }
LAB_100316d68:
  iVar2 = *param_1 - 0xd;
  if (*param_1 < 0xd) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100316d7c | FUN_100316d7c */

void FUN_100316d7c(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 0xc) {
    uVar3 = 4;
  }
  if (param_3 + 0xc >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf3 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf4) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100316dfc;
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
LAB_100316dfc:
      *param_1 = (char)param_2 + '\f';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf4 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf4);
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



/* Address: 0x100316e2c | FUN_100316e2c */

undefined1  [16] FUN_100316e2c(void)

{
  return ZEXT816(0x100eca530);
}



/* Address: 0x100316e3c | thunk_FUN_100316e40 */

void thunk_FUN_100316e40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbf678 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40dbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40dbc,&DAT_100eca530);
  DAT_100fbf678 = pTVar1;
  return;
}



/* Address: 0x100316e40 | FUN_100316e40 */

void FUN_100316e40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbf678 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40dbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40dbc,&DAT_100eca530);
  DAT_100fbf678 = pTVar1;
  return;
}



/* Address: 0x100316e80 | thunk_FUN_100316e84 */

void thunk_FUN_100316e84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbf680 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40d54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40d54,&DAT_100eca530);
  DAT_100fbf680 = pTVar1;
  return;
}



/* Address: 0x100316e84 | FUN_100316e84 */

void FUN_100316e84(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbf680 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40d54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40d54,&DAT_100eca530);
  DAT_100fbf680 = pTVar1;
  return;
}



/* Address: 0x100316ec4 | thunk_FUN_100316ec8 */

void thunk_FUN_100316ec8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbf688 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40d2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40d2c,&DAT_100eca530);
  DAT_100fbf688 = pTVar1;
  return;
}



/* Address: 0x100316ec8 | FUN_100316ec8 */

void FUN_100316ec8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbf688 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40d2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40d2c,&DAT_100eca530);
  DAT_100fbf688 = pTVar1;
  return;
}



/* Address: 0x100316f08 | FUN_100316f08 */

undefined4 FUN_100316f08(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_65707974 || param_2 != &DAT_e400000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65707974,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x676e654c74786574) &&
          (param_2 == (undefined1 *)0xea00000000006874)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x676e654c74786574,(_StringGuts)0xea00000000006874,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x74786574) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x74786574,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0x6c7275) && (param_2 == (undefined1 *)0xe300000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6c7275,(_StringGuts)0xe300000000000000,expecting), bVar1
         )) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0x656d614e6c7275) && (param_2 == &DAT_e700000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d614e6c7275,(_StringGuts)0xe700000000000000,expecting
                            ), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 == (undefined1 *)0x446e6f63496c7275) &&
          (param_2 == (undefined1 *)0xeb00000000617461)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x446e6f63496c7275,(_StringGuts)0xeb00000000617461,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 5;
      }
      if (((param_1 == (undefined1 *)0x6567616d496c7275) &&
          (param_2 == (undefined1 *)0xec00000061746144)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6567616d496c7275,(_StringGuts)0xec00000061746144,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 6;
      }
      if (((param_1 == (undefined1 *)0x7a69536567616d69) &&
          (param_2 == (undefined1 *)0xe900000000000065)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7a69536567616d69,(_StringGuts)0xe900000000000065,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 7;
      }
      if (((param_1 == (undefined1 *)0x7461446567616d69) &&
          (param_2 == (undefined1 *)0xe900000000000061)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7461446567616d69,(_StringGuts)0xe900000000000061,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 8;
      }
      if (((param_1 == (undefined1 *)0x68746150656c6966) &&
          (param_2 == (undefined1 *)0xe900000000000073)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x68746150656c6966,(_StringGuts)0xe900000000000073,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 9;
      }
      if (((param_1 == (undefined1 *)0x746f5473656c6966) &&
          (param_2 == (undefined1 *)0xee00657a69536c61)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x746f5473656c6966,(_StringGuts)0xee00657a69536c61,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 10;
      }
      if (((param_1 != (undefined1 *)0x616d4973656c6966) ||
          (param_2 != (undefined1 *)0xee00617461446567)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x616d4973656c6966,(_StringGuts)0xee00617461446567,
                             expecting), !bVar1)) {
        if ((param_1 == (undefined1 *)0x646f43726f6c6f63) &&
           (param_2 == (undefined1 *)0xe900000000000065)) {
          _swift_bridgeObjectRelease(0xe900000000000065);
          return 0xc;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x646f43726f6c6f63,(_StringGuts)0xe900000000000065,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 0xc;
        }
        return 0xd;
      }
      _swift_bridgeObjectRelease(param_2);
      return 0xb;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x10031734c | FUN_10031734c */

long * FUN_10031734c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  URL UVar6;
  long *plVar7;
  AttributedString AVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar10 = *(long *)(param_3 + -8);
  uVar4 = *(uint *)(lVar10 + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    plVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar5 = (int)plVar7;
    if (iVar5 < 2) {
      if (iVar5 == 0) {
        *param_1 = *param_2;
        lVar10 = 0;
        FUN_10031a030();
        iVar5 = *(int *)(lVar10 + 0x14);
        AVar8 = Foundation::AttributedString::typeMetadataAccessor();
        (**(code **)(*(long *)(AVar8.unknown + -8) + 0x10))
                  ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,AVar8.unknown);
        uVar9 = 0;
      }
      else {
        if (iVar5 != 1) {
LAB_100317460:
          plVar7 = _memcpy(param_1,param_2,*(size_t *)(lVar10 + 0x40));
          return plVar7;
        }
        UVar6 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar6.unknown + -8) + 0x10))(param_1,param_2,UVar6.unknown);
        lVar10 = 0;
        FUN_1003187b8();
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x14));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
        uVar9 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar9;
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x18));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x18));
        uVar11 = puVar2[1];
        _swift_bridgeObjectRetain();
        if (uVar11 >> 0x3c < 0xf) {
          uVar9 = *puVar2;
          FUN_1001037b4(uVar9,uVar11);
          *puVar1 = uVar9;
          puVar1[1] = uVar11;
        }
        else {
          uVar9 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar9;
        }
        puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar10 + 0x1c));
        puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x1c));
        uVar11 = puVar2[1];
        if (uVar11 >> 0x3c < 0xf) {
          uVar9 = *puVar2;
          FUN_1001037b4(uVar9,uVar11);
          *puVar1 = uVar9;
          puVar1[1] = uVar11;
        }
        else {
          uVar9 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar9;
        }
        uVar9 = 1;
      }
    }
    else if (iVar5 == 2) {
      lVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar10;
      lVar10 = param_2[2];
      lVar3 = param_2[3];
      FUN_1001037b4(lVar10,lVar3);
      param_1[2] = lVar10;
      param_1[3] = lVar3;
      uVar9 = 2;
    }
    else {
      if (iVar5 != 4) goto LAB_100317460;
      lVar10 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar10;
      uVar11 = param_2[3];
      _swift_bridgeObjectRetain();
      if (uVar11 >> 0x3c < 0xf) {
        lVar10 = param_2[2];
        FUN_1001037b4(lVar10,uVar11);
        param_1[2] = lVar10;
        param_1[3] = uVar11;
      }
      else {
        lVar10 = param_2[2];
        param_1[3] = param_2[3];
        param_1[2] = lVar10;
      }
      uVar9 = 4;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar9);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar11 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar10 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100317594 | FUN_100317594 */

void FUN_100317594(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  URL UVar3;
  long lVar4;
  undefined8 uVar5;
  AttributedString AVar6;
  ulong uVar7;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      lVar4 = 0;
      FUN_10031a030();
      iVar1 = *(int *)(lVar4 + 0x14);
      AVar6 = Foundation::AttributedString::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100317694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(AVar6.unknown + -8) + 8))((long)param_1 + (long)iVar1,AVar6.unknown);
      return;
    }
    if (iVar1 == 1) {
      UVar3 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1,UVar3.unknown);
      lVar4 = 0;
      FUN_1003187b8();
      _swift_bridgeObjectRelease(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x14) + 8));
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x18));
      if ((ulong)puVar2[1] >> 0x3c < 0xf) {
        FUN_10003bf2c(*puVar2);
      }
      param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x1c));
      uVar7 = param_1[1];
      if (uVar7 >> 0x3c < 0xf) {
        uVar5 = *param_1;
        goto LAB_1003176a4;
      }
    }
  }
  else {
    if (iVar1 == 2) {
      uVar5 = param_1[2];
      uVar7 = param_1[3];
LAB_1003176a4:
      FUN_10003bf2c(uVar5,uVar7);
      return;
    }
    if (iVar1 == 4) {
      _swift_bridgeObjectRelease(*param_1);
      uVar7 = param_1[3];
      if (uVar7 >> 0x3c < 0xf) {
        uVar5 = param_1[2];
        goto LAB_1003176a4;
      }
    }
  }
  return;
}



/* Address: 0x1003176b0 | FUN_1003176b0 */

undefined8 * FUN_1003176b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  undefined8 *puVar6;
  AttributedString AVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  puVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar3 = (int)puVar6;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      *param_1 = *param_2;
      lVar5 = 0;
      FUN_10031a030();
      iVar3 = *(int *)(lVar5 + 0x14);
      AVar7 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar7.unknown + -8) + 0x10))
                ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,AVar7.unknown);
      uVar8 = 0;
    }
    else {
      if (iVar3 != 1) {
LAB_100317798:
        puVar6 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar6;
      }
      UVar4 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
      lVar5 = 0;
      FUN_1003187b8();
      puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x14));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x14));
      uVar8 = puVar1[1];
      *puVar6 = *puVar1;
      puVar6[1] = uVar8;
      puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
      uVar9 = puVar1[1];
      _swift_bridgeObjectRetain();
      if (uVar9 >> 0x3c < 0xf) {
        uVar8 = *puVar1;
        FUN_1001037b4(uVar8,uVar9);
        *puVar6 = uVar8;
        puVar6[1] = uVar9;
      }
      else {
        uVar8 = *puVar1;
        puVar6[1] = puVar1[1];
        *puVar6 = uVar8;
      }
      puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c));
      param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x1c));
      uVar9 = param_2[1];
      if (uVar9 >> 0x3c < 0xf) {
        uVar8 = *param_2;
        FUN_1001037b4(uVar8,uVar9);
        *puVar6 = uVar8;
        puVar6[1] = uVar9;
      }
      else {
        uVar8 = *param_2;
        puVar6[1] = param_2[1];
        *puVar6 = uVar8;
      }
      uVar8 = 1;
    }
  }
  else if (iVar3 == 2) {
    uVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    uVar8 = param_2[2];
    uVar2 = param_2[3];
    FUN_1001037b4(uVar8,uVar2);
    param_1[2] = uVar8;
    param_1[3] = uVar2;
    uVar8 = 2;
  }
  else {
    if (iVar3 != 4) goto LAB_100317798;
    uVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar8;
    uVar9 = param_2[3];
    _swift_bridgeObjectRetain();
    if (uVar9 >> 0x3c < 0xf) {
      uVar8 = param_2[2];
      FUN_1001037b4(uVar8,uVar9);
      param_1[2] = uVar8;
      param_1[3] = uVar9;
    }
    else {
      uVar8 = param_2[2];
      param_1[3] = param_2[3];
      param_1[2] = uVar8;
    }
    uVar8 = 4;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar8);
  return param_1;
}



/* Address: 0x1003178d0 | FUN_1003178d0 */

undefined8 * FUN_1003178d0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  URL UVar4;
  long lVar5;
  undefined8 *puVar6;
  AttributedString AVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  if (param_1 != param_2) {
    FUN_10009eff8(param_1);
    puVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar3 = (int)puVar6;
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        *param_1 = *param_2;
        lVar5 = 0;
        FUN_10031a030();
        iVar3 = *(int *)(lVar5 + 0x14);
        AVar7 = Foundation::AttributedString::typeMetadataAccessor();
        (**(code **)(*(long *)(AVar7.unknown + -8) + 0x10))
                  ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,AVar7.unknown);
        uVar8 = 0;
      }
      else {
        if (iVar3 != 1) {
LAB_1003179d8:
          puVar6 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
          return puVar6;
        }
        UVar4 = Foundation::URL::typeMetadataAccessor();
        (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
        lVar5 = 0;
        FUN_1003187b8();
        puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x14));
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x14));
        *puVar6 = *puVar1;
        puVar6[1] = puVar1[1];
        puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
        puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
        uVar9 = puVar1[1];
        _swift_bridgeObjectRetain();
        if (uVar9 >> 0x3c < 0xf) {
          uVar8 = *puVar1;
          FUN_1001037b4(uVar8,uVar9);
          *puVar6 = uVar8;
          puVar6[1] = uVar9;
        }
        else {
          uVar8 = *puVar1;
          puVar6[1] = puVar1[1];
          *puVar6 = uVar8;
        }
        puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c));
        param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x1c));
        uVar9 = param_2[1];
        if (uVar9 >> 0x3c < 0xf) {
          uVar8 = *param_2;
          FUN_1001037b4(uVar8,uVar9);
          *puVar6 = uVar8;
          puVar6[1] = uVar9;
        }
        else {
          uVar8 = *param_2;
          puVar6[1] = param_2[1];
          *puVar6 = uVar8;
        }
        uVar8 = 1;
      }
    }
    else if (iVar3 == 2) {
      uVar8 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar8;
      uVar8 = param_2[2];
      uVar2 = param_2[3];
      FUN_1001037b4(uVar8,uVar2);
      param_1[2] = uVar8;
      param_1[3] = uVar2;
      uVar8 = 2;
    }
    else {
      if (iVar3 != 4) goto LAB_1003179d8;
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      uVar9 = param_2[3];
      _swift_bridgeObjectRetain();
      if (uVar9 >> 0x3c < 0xf) {
        uVar8 = param_2[2];
        FUN_1001037b4(uVar8,uVar9);
        param_1[2] = uVar8;
        param_1[3] = uVar9;
      }
      else {
        uVar8 = param_2[2];
        param_1[3] = param_2[3];
        param_1[2] = uVar8;
      }
      uVar8 = 4;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar8);
  }
  return param_1;
}



/* Address: 0x100317b10 | FUN_100317b10 */

void FUN_100317b10(undefined8 param_1)

{
  if (DAT_100fbf700 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100cac118);
  return;
}



/* Address: 0x100317b48 | FUN_100317b48 */

undefined8 * FUN_100317b48(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  AttributedString AVar4;
  URL UVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar6 == 1) {
    UVar5 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x20))(param_1,param_2,UVar5.unknown);
    lVar3 = 0;
    FUN_1003187b8();
    puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x14));
    uVar7 = *puVar6;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
    puVar2[1] = puVar6[1];
    *puVar2 = uVar7;
    puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
    uVar7 = *puVar6;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
    puVar2[1] = puVar6[1];
    *puVar2 = uVar7;
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x1c));
    uVar7 = *param_2;
    puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c));
    puVar6[1] = param_2[1];
    *puVar6 = uVar7;
    uVar7 = 1;
  }
  else {
    if ((int)puVar6 != 0) {
      puVar6 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar6;
    }
    *param_1 = *param_2;
    lVar3 = 0;
    FUN_10031a030();
    iVar1 = *(int *)(lVar3 + 0x14);
    AVar4 = Foundation::AttributedString::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar4.unknown + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,AVar4.unknown);
    uVar7 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  return param_1;
}



/* Address: 0x100317c50 | FUN_100317c50 */

undefined8 * FUN_100317c50(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  AttributedString AVar4;
  URL UVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    FUN_10009eff8(param_1);
    puVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar6 == 1) {
      UVar5 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar5.unknown + -8) + 0x20))(param_1,param_2,UVar5.unknown);
      lVar3 = 0;
      FUN_1003187b8();
      puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x14));
      uVar7 = *puVar6;
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x14));
      puVar2[1] = puVar6[1];
      *puVar2 = uVar7;
      puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x18));
      uVar7 = *puVar6;
      puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x18));
      puVar2[1] = puVar6[1];
      *puVar2 = uVar7;
      param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar3 + 0x1c));
      uVar7 = *param_2;
      puVar6 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c));
      puVar6[1] = param_2[1];
      *puVar6 = uVar7;
      uVar7 = 1;
    }
    else {
      if ((int)puVar6 != 0) {
        puVar6 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar6;
      }
      *param_1 = *param_2;
      lVar3 = 0;
      FUN_10031a030();
      iVar1 = *(int *)(lVar3 + 0x14);
      AVar4 = Foundation::AttributedString::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar4.unknown + -8) + 0x20))
                ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,AVar4.unknown);
      uVar7 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  return param_1;
}



/* Address: 0x100317d68 | FUN_100317d68 */

void FUN_100317d68(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10031a030();
  if (param_2 < 0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1003187b8();
    if (param_2 < 0x40) {
      local_40 = *(long *)(lVar1 + -8) + 0x40;
      puStack_38 = &DAT_100c40e50;
      local_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
      puStack_28 = &DAT_100c40e68;
      _swift_initEnumMetadataMultiPayload(param_1,0x100,5,&local_48);
    }
  }
  return;
}



/* Address: 0x100317e08 | FUN_100317e08 */

undefined1  [16] FUN_100317e08(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  FUN_10011da54(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Address: 0x100317e38 | FUN_100317e38 */

undefined1  [16] FUN_100317e38(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  FUN_10011da54(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Address: 0x100317e68 | FUN_100317e68 */

void FUN_100317e68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  return;
}



/* Address: 0x100317e78 | FUN_100317e78 */

void FUN_100317e78(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  if (*(ulong *)(param_1 + 0x18) >> 0x3c < 0xf) {
    FUN_10003bf2c(*(undefined8 *)(param_1 + 0x10));
  }
  if (0xe < *(ulong *)(param_1 + 0x28) >> 0x3c) {
    return;
  }
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100317ed4 | FUN_100317ed4 */

undefined8 * FUN_100317ed4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[2];
    FUN_1001037b4(uVar1,uVar2);
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
  }
  uVar2 = param_2[5];
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[4];
    FUN_1001037b4(uVar1,uVar2);
    param_1[4] = uVar1;
    param_1[5] = uVar2;
  }
  else {
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
  }
  return param_1;
}



/* Address: 0x100317f6c | FUN_100317f6c */

undefined8 * FUN_100317f6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[3];
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_2[2];
      FUN_1001037b4(uVar2,uVar4);
      uVar3 = param_1[2];
      uVar1 = param_1[3];
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      FUN_10003bf2c(uVar3,uVar1);
      goto LAB_100318018;
    }
    FUN_10031275c(param_1 + 2);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[2];
    FUN_1001037b4(uVar3,uVar4);
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    goto LAB_100318018;
  }
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
LAB_100318018:
  uVar4 = param_2[5];
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_2[4];
      FUN_1001037b4(uVar2,uVar4);
      uVar3 = param_1[4];
      uVar1 = param_1[5];
      param_1[4] = uVar2;
      param_1[5] = uVar4;
      FUN_10003bf2c(uVar3,uVar1);
      return param_1;
    }
    FUN_10031275c(param_1 + 4);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    FUN_1001037b4(uVar3,uVar4);
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    return param_1;
  }
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  return param_1;
}



/* Address: 0x1003180a0 | FUN_1003180a0 */

void FUN_1003180a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003180b4 | FUN_1003180b4 */

undefined8 * FUN_1003180b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[2];
      param_1[2] = param_2[2];
      param_1[3] = uVar3;
      FUN_10003bf2c(uVar2);
      goto LAB_10031811c;
    }
    FUN_10031275c(param_1 + 2);
  }
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
LAB_10031811c:
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[4];
      param_1[4] = param_2[4];
      param_1[5] = uVar3;
      FUN_10003bf2c(uVar2);
      return param_1;
    }
    FUN_10031275c(param_1 + 4);
  }
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  return param_1;
}



/* Address: 0x100318170 | FUN_100318170 */

int FUN_100318170(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1003181cc | FUN_1003181cc */

void FUN_1003181cc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
  }
  return;
}



/* Address: 0x10031822c | FUN_10031822c */

undefined1  [16] FUN_10031822c(void)

{
  return ZEXT816(0x100eca660);
}



/* Address: 0x10031823c | FUN_10031823c */

undefined1  [16] FUN_10031823c(void)

{
  return ZEXT816(0x100eca690);
}



/* Address: 0x10031824c | FUN_10031824c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_10031824c(ID param_1,undefined8 param_2,code *param_3)

{
  undefined1 auVar1 [16];
  ID IVar2;
  char **ppcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong extraout_x1;
  void *pvVar6;
  void *pvVar7;
  void *pvVar8;
  String SVar9;
  char *local_90;
  void *pvStack_88;
  undefined8 local_80;
  void *pvStack_78;
  undefined8 local_70;
  void *pvStack_68;
  
  ppcVar3 = &local_90;
  if (param_1 != 0) {
    IVar2 = objc_stub::title(param_1);
    if (IVar2 == 0) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = extraout_x1;
      SVar9 = (String)(auVar1 << 0x40);
      pvVar8 = (void *)0x0;
    }
    else {
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar8 = SVar9.bridgeObject;
    }
    uVar4 = 0;
    pvVar6 = SVar9.bridgeObject;
    FUN_10031836c();
    uVar5 = uVar4;
    pvVar7 = pvVar6;
    FUN_100318468();
    local_90 = SVar9.str;
    pvStack_88 = pvVar8;
    local_80 = uVar4;
    pvStack_78 = pvVar6;
    local_70 = uVar5;
    pvStack_68 = pvVar7;
    (*param_3)(&local_90);
    _swift_bridgeObjectRelease(pvVar8);
    FUN_10003bf18(uVar4,pvVar6);
    FUN_10003bf18(uVar5,pvVar7);
    return (undefined1 *)0x0;
  }
  pvStack_88 = (void *)0x1;
  local_90 = (char *)0x0;
  pvStack_78 = (void *)0x0;
  local_80 = 0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  (*param_3)(&local_90);
  return (undefined1 *)ppcVar3;
}



/* Address: 0x10031836c | FUN_10031836c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10031836c(void)

{
  NSString *pNVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  undefined1 auVar6 [16];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::valueForKeyPath_(unaff_x20,pNVar1);
  if (IVar2 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_10030e660(&local_50);
  }
  else {
    uVar3 = 0;
    FUN_10030b7b4(0);
    puVar4 = local_78;
    puVar5 = &local_50;
    _swift_dynamicCast(puVar4,puVar5,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      FUN_1003c89c8();
      goto LAB_100318454;
    }
  }
  puVar4 = (undefined1 *)0x0;
  puVar5 = (undefined8 *)0xf000000000000000;
LAB_100318454:
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Address: 0x100318468 | FUN_100318468 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100318468(void)

{
  NSString *pNVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  ID unaff_x20;
  undefined1 auVar6 [16];
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::valueForKeyPath_(unaff_x20,pNVar1);
  if (IVar2 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_10030e660(&local_50);
  }
  else {
    uVar3 = 0;
    FUN_10030b7b4(0);
    puVar4 = local_78;
    puVar5 = &local_50;
    _swift_dynamicCast(puVar4,puVar5,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar3,6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (FUN_1003c9f3c(0x4080000000000000,0x4080000000000000), puVar4 != (undefined1 *)0x0)) {
      FUN_1003c89c8();
      goto LAB_100318580;
    }
  }
  puVar4 = (undefined1 *)0x0;
  puVar5 = (undefined8 *)0xf000000000000000;
LAB_100318580:
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Address: 0x100318594 | FUN_100318594 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100318594(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2,param_3);
  _swift_release(uVar2);
  return 0;
}



/* Address: 0x10031860c | FUN_10031860c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10031860c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  URL self;
  NSURL *pNVar2;
  void *aBlock;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  puVar1 = &_OBJC_CLASS___LPMetadataProvider;
  _objc_allocWithZone();
  self.unknown = (undefined *)objc_stub::init(puVar1);
  pNVar2 = Foundation::URL::_bridgeToObjectiveC(self);
  puVar1 = &DAT_100eca6c0;
  _swift_allocObject(&DAT_100eca6c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  local_50 = FUN_100318720;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100318594;
  puStack_58 = &DAT_100eca6d8;
  local_48 = puVar1;
  aBlock = __Block_copy(&local_70);
  puVar1 = local_48;
  _swift_retain(param_3);
  _swift_release(puVar1);
  objc_stub::startFetchingMetadataForURL_completionHandler_((ID)self.unknown,pNVar2,aBlock);
  __Block_release(aBlock);
  return 0;
}



/* Address: 0x1003186fc | FUN_1003186fc */

void FUN_1003186fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100318720 | FUN_100318720 */

void FUN_100318720(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10031824c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100318728 | FUN_100318728 */

void FUN_100318728(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10031873c | FUN_10031873c */

void FUN_10031873c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100318744 | FUN_100318744 */

void FUN_100318744(undefined8 param_1)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100318778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10031877c | FUN_10031877c */

undefined1  [16] FUN_10031877c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1003187b8();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x14));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}


