/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100422c60 | FUN_100422c60 */

undefined1  [16] FUN_100422c60(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100422c88 | FUN_100422c88 */

void FUN_100422c88(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100424764();
  iVar1 = *(int *)(lVar2 + 0x24);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100422cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x100422cd4 | FUN_100422cd4 */

void FUN_100422cd4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100424764();
  iVar1 = *(int *)(lVar2 + 0x24);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100422d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x28))(unaff_x20 + iVar1,param_1,DVar3.unknown);
  return;
}



/* Address: 0x100422d20 | FUN_100422d20 */

undefined1  [16] FUN_100422d20(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x24);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100422d48 | FUN_100422d48 */

undefined1  [16] FUN_100422d48(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_100424764();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x28));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100422d84 | FUN_100422d84 */

void FUN_100422d84(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100424764();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x28));
  _swift_bridgeObjectRelease(puVar1[1]);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x100422dc8 | FUN_100422dc8 */

undefined1  [16] FUN_100422dc8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x28);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100422df0 | FUN_100422df0 */

void FUN_100422df0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x2c),param_1,&DAT_100fc5a30,&DAT_100c49370);
  return;
}



/* Address: 0x100422e34 | FUN_100422e34 */

void FUN_100422e34(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  FUN_10041812c(param_1,unaff_x20 + *(int *)(lVar1 + 0x2c));
  return;
}



/* Address: 0x100422e64 | FUN_100422e64 */

undefined1  [16] FUN_100422e64(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x2c);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100422e8c | FUN_100422e8c */

void FUN_100422e8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  FUN_1000f8cac(unaff_x20 + *(int *)(lVar1 + 0x30),param_1,&DAT_100fc5a30,&DAT_100c49370);
  return;
}



/* Address: 0x100422ed0 | FUN_100422ed0 */

void FUN_100422ed0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  FUN_10041812c(param_1,unaff_x20 + *(int *)(lVar1 + 0x30));
  return;
}



/* Address: 0x100422f00 | FUN_100422f00 */

undefined1  [16] FUN_100422f00(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x30);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100422f28 | FUN_100422f28 */

undefined1 FUN_100422f28(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x34));
}



/* Address: 0x100422f48 | FUN_100422f48 */

void FUN_100422f48(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x34)) = param_1;
  return;
}



/* Address: 0x100422f74 | FUN_100422f74 */

undefined1  [16] FUN_100422f74(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x34);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100422f9c | FUN_100422f9c */

undefined1 FUN_100422f9c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x38));
}



/* Address: 0x100422fbc | FUN_100422fbc */

void FUN_100422fbc(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x38)) = param_1;
  return;
}



/* Address: 0x100422fe8 | FUN_100422fe8 */

undefined1  [16] FUN_100422fe8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x38);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100423010 | FUN_100423010 */

undefined1 FUN_100423010(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x3c));
}



/* Address: 0x100423030 | FUN_100423030 */

void FUN_100423030(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_100424764();
  *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x3c)) = param_1;
  return;
}



/* Address: 0x10042305c | FUN_10042305c */

undefined1  [16] FUN_10042305c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_100424764();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x3c);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x100423084 | FUN_100423084 */

void FUN_100423084(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined4 param_15)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  code *pcVar7;
  
  lVar4 = 0;
  FUN_100424764();
  iVar2 = *(int *)(lVar4 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x28));
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar5.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x38);
  (*pcVar7)((long)param_1 + (long)iVar2,1,1,DVar5.unknown);
  iVar3 = *(int *)(lVar4 + 0x30);
  (*pcVar7)((long)param_1 + (long)iVar3,1,1,DVar5.unknown);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  pcVar7 = *(code **)(lVar6 + 0x20);
  (*pcVar7)((long)param_1 + (long)*(int *)(lVar4 + 0x20),param_9,DVar5.unknown);
  (*pcVar7)((long)param_1 + (long)*(int *)(lVar4 + 0x24),param_10,DVar5.unknown);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  FUN_10041812c(param_13,(long)param_1 + (long)iVar2);
  FUN_10041812c(param_14,(long)param_1 + (long)iVar3);
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x34)) = (undefined1)param_15;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x38)) = param_15._1_1_;
  *(undefined1 *)((long)param_1 + (long)*(int *)(lVar4 + 0x3c)) = param_15._2_1_;
  return;
}



/* Address: 0x1004231f8 | FUN_1004231f8 */

String FUN_1004231f8(ulong param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                    undefined *param_5)

{
  bool bVar1;
  undefined8 uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  char *pcVar6;
  undefined8 uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 *unaff_x19;
  byte *unaff_x20;
  byte *pbVar12;
  long unaff_x21;
  byte *unaff_x22;
  byte *unaff_x23;
  long unaff_x24;
  long unaff_x25;
  Date unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar13;
  undefined8 unaff_x30;
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
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  puVar9 = (undefined8 *)0xe900000000000064;
  pbVar5 = (byte *)0x49746375646f7270;
  pcVar11 = (char *)(param_1 & 0xff);
  pbVar8 = pbVar5;
  puVar10 = puVar9;
  pbVar12 = unaff_x20;
  puVar13 = unaff_x29;
  switch(pcVar11) {
  case (char *)0x0:
  case (char *)0x2c:
  case (char *)0x34:
    goto switchD_10042322c_caseD_0;
  default:
    puVar9 = (undefined8 *)&DAT_e800000000000000;
  case (char *)0xbe:
  case (char *)0xd8:
  case (char *)0xe6:
    pbVar5 = (byte *)0x6e617571;
  case (char *)0x96:
  case (char *)0xd6:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffff0000ffffffff | 0x697400000000);
switchD_10042322c_caseD_8c:
    SVar14.str = (char *)((ulong)pbVar5 & 0xffffffffffff | 0x7974000000000000);
    SVar14.bridgeObject = puVar9;
    return SVar14;
  case (char *)0x2:
  case (char *)0xf:
    puVar9 = (undefined8 *)0xed000064496e6f69;
    pbVar5 = (byte *)0x6e617274;
  case (char *)0x58:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffff | 0x7463617300000000);
switchD_10042322c_caseD_13:
    SVar18.bridgeObject = puVar9;
    SVar18.str = (char *)pbVar5;
    return SVar18;
  case (char *)0x3:
    pcVar11 = "cancellation_date";
  case (char *)0x42:
  case (char *)0x52:
  case (char *)0x62:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
  case (char *)0xb6:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xfa:
    puVar9 = (undefined8 *)((ulong)(pcVar11 + 0x300) | 0x8000000000000000);
    pbVar5 = (byte *)0xd000000000000015;
switchD_10042322c_caseD_11:
    SVar19.bridgeObject = puVar9;
    SVar19.str = (char *)pbVar5;
    return SVar19;
  case (char *)0x4:
    puVar9 = (undefined8 *)0xec00000065746144;
  case (char *)0x15:
  case (char *)0x64:
    pbVar5 = (byte *)0x6573616863727570;
switchD_10042322c_caseD_5c:
    SVar16.bridgeObject = puVar9;
    SVar16.str = (char *)pbVar5;
    return SVar16;
  case (char *)0x5:
    pcVar6 = (char *)0xd000000000000014;
    pcVar11 = "originalPurchaseDate";
    goto LAB_100423350;
  case (char *)0x6:
    pcVar11 = "cancellation_date";
  case (char *)0x14:
    puVar9 = (undefined8 *)((ulong)(pcVar11 + 0x340) | 0x8000000000000000);
  case (char *)0x40:
  case (char *)0xa8:
    pcVar11 = (char *)0xd000000000000014;
switchD_10042322c_caseD_c6:
    SVar21.str = pcVar11 + -2;
    SVar21.bridgeObject = puVar9;
    return SVar21;
  case (char *)0x7:
    puVar9 = (undefined8 *)0x8000000100da6360;
    pcVar11 = (char *)0x14;
  case (char *)0xc:
    pcVar11 = (char *)((ulong)pcVar11 | 0xd000000000000000);
switchD_10042322c_caseD_12:
    SVar20.bridgeObject = puVar9;
    SVar20.str = pcVar11 + 6;
    return SVar20;
  case (char *)0x8:
  case (char *)0x71:
    puVar9 = (undefined8 *)0x8000000100da6380;
    pcVar11 = (char *)0x14;
  case (char *)0x50:
  case (char *)0x72:
    pcVar11 = (char *)((ulong)pcVar11 | 0xd000000000000000);
switchD_10042322c_caseD_a0:
    SVar23.str = pcVar11 + -4;
    SVar23.bridgeObject = puVar9;
    return SVar23;
  case (char *)0x9:
  case (char *)0xe:
    puVar9 = (undefined8 *)0xed0000646f697265;
    pbVar5 = (byte *)0x7369;
  case (char *)0x21:
  case (char *)0x29:
  case (char *)0x31:
  case (char *)0xa1:
    SVar17.str = (char *)((ulong)pbVar5 & 0xffff | 0x506c616972540000);
    SVar17.bridgeObject = puVar9;
    return SVar17;
  case (char *)0xa:
  case (char *)0xb0:
    pbVar5 = (byte *)0x14;
  case (char *)0xdc:
    pcVar6 = (char *)((ulong)pbVar5 & 0xffffffffffff | 0xd000000000000000);
    pcVar11 = "isInIntroOfferPeriod";
LAB_100423350:
    SVar22.bridgeObject = (void *)((ulong)(pcVar11 + -0x20) | 0x8000000000000000);
    SVar22.str = pcVar6;
    return SVar22;
  case (char *)0xb:
  case (char *)0x3a:
  case (char *)0x3e:
  case (char *)0x4a:
  case (char *)0x4e:
  case (char *)0x5a:
  case (char *)0x8e:
  case (char *)0xce:
  case (char *)0xf2:
  case (char *)0xf6:
    puVar9 = (undefined8 *)0x6465;
  case (char *)0x10:
    puVar9 = (undefined8 *)((ulong)puVar9 & 0xffffffffffff | 0xea00000000000000);
    pbVar5 = (byte *)0x7369;
  case (char *)0x24:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffff00000000ffff | 0x726770550000);
  case (char *)0x22:
  case (char *)0x2a:
  case (char *)0x32:
  case (char *)0xa2:
    pbVar5 = (byte *)((ulong)pbVar5 & 0xffffffffffff | 0x6461000000000000);
switchD_10042322c_caseD_0:
    SVar15.bridgeObject = puVar9;
    SVar15.str = (char *)pbVar5;
    return SVar15;
  case (char *)0x11:
    goto switchD_10042322c_caseD_11;
  case (char *)0x12:
    goto switchD_10042322c_caseD_12;
  case (char *)0x13:
    goto switchD_10042322c_caseD_13;
  case (char *)0x20:
    goto switchD_10042322c_caseD_20;
  case (char *)0x28:
  case (char *)0x48:
    goto switchD_10042322c_caseD_28;
  case (char *)0x30:
    goto switchD_10042322c_caseD_30;
  case (char *)0x38:
    goto switchD_10042322c_caseD_38;
  case (char *)0x39:
  case (char *)0x3d:
  case (char *)0x49:
  case (char *)0x4d:
  case (char *)0xf1:
    goto switchD_10042322c_caseD_39;
  case (char *)0x3c:
    goto switchD_10042322c_caseD_3c;
  case (char *)0x41:
  case (char *)0x51:
  case (char *)0x61:
    goto switchD_10042322c_caseD_41;
  case (char *)0x4c:
    goto switchD_10042322c_caseD_4c;
  case (char *)0x59:
  case (char *)0xcd:
  case (char *)0xf5:
    goto switchD_10042322c_caseD_59;
  case (char *)0x5c:
    goto switchD_10042322c_caseD_5c;
  case (char *)0x60:
    SVar25.bridgeObject = (void *)0xe900000000000064;
    SVar25.str = (char *)0x49746375646f7270;
    return SVar25;
  case (char *)0x70:
    pbVar5 = (byte *)(ulong)*unaff_x20;
  case (char *)0x79:
  case (char *)0xec:
    FUN_1004231f8(pbVar5);
    SVar24.bridgeObject = puVar9;
    SVar24.str = (char *)pbVar5;
    return SVar24;
  case (char *)0x73:
  case (char *)0x7b:
  case (char *)0x7e:
  case (char *)0x7f:
switchD_10042322c_caseD_76:
    FUN_100424778(0x49746375646f7270,0xe900000000000064);
switchD_10042322c_caseD_39:
switchD_10042322c_caseD_59:
switchD_10042322c_caseD_81:
    SVar26 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar26;
  case (char *)0x74:
    break;
  case (char *)0x75:
  case (char *)0x77:
  case (char *)0x7c:
  case (char *)0x83:
switchD_10042322c_caseD_82:
    FUN_100424778(0x49746375646f7270,0xe900000000000064);
switchD_10042322c_caseD_7a:
switchD_10042322c_caseD_7d:
switchD_10042322c_caseD_78:
    SVar26 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar26;
  case (char *)0x76:
    goto switchD_10042322c_caseD_76;
  case (char *)0x78:
  case (char *)0x80:
    goto switchD_10042322c_caseD_78;
  case (char *)0x7a:
    goto switchD_10042322c_caseD_7a;
  case (char *)0x7d:
    goto switchD_10042322c_caseD_7d;
  case (char *)0x81:
  case (char *)0x88:
  case (char *)0x8d:
    goto switchD_10042322c_caseD_81;
  case (char *)0x82:
    goto switchD_10042322c_caseD_82;
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xb5:
  case (char *)0xc9:
  case (char *)0xdd:
    goto switchD_10042322c_caseD_89;
  case (char *)0x8c:
  case (char *)0x98:
  case (char *)0xf0:
    goto switchD_10042322c_caseD_8c;
  case (char *)0x9c:
  case (char *)0xa4:
  case (char *)0xac:
  case (char *)0xb4:
    SVar26.bridgeObject = (void *)0xe900000000000064;
    SVar26.str = (char *)0x49746375646f7270;
    return SVar26;
  case (char *)0xa0:
  case (char *)0xc8:
    goto switchD_10042322c_caseD_a0;
  case (char *)0xa9:
  case (char *)0xb1:
  case (char *)0xb9:
  case (char *)0xe1:
    goto switchD_10042322c_caseD_a9;
  case (char *)0xaa:
  case (char *)0xb2:
  case (char *)0xba:
  case (char *)0xe2:
    goto switchD_10042322c_caseD_aa;
  case (char *)0xab:
  case (char *)0xb3:
  case (char *)0xbb:
  case (char *)0xe3:
    goto switchD_10042322c_caseD_ab;
  case (char *)0xb8:
    goto switchD_10042322c_caseD_b8;
  case (char *)0xc4:
    goto switchD_10042322c_caseD_c4;
  case (char *)0xc5:
    goto switchD_10042322c_caseD_c5;
  case (char *)0xc6:
  case (char *)0xee:
    goto switchD_10042322c_caseD_c6;
  case (char *)0xcc:
    goto switchD_10042322c_caseD_cc;
  case (char *)0xe0:
    goto switchD_10042322c_caseD_e0;
  case (char *)0xed:
    goto switchD_10042322c_caseD_ed;
  case (char *)0xf4:
    goto switchD_10042322c_caseD_f4;
  case (char *)0xf8:
    goto switchD_10042322c_caseD_f8;
  case (char *)0xf9:
    goto switchD_10042322c_caseD_f9;
  }
  puVar13 = &stack0x00000050;
  register0x00000008 = (BADSPACEBASE *)&stack0xfffffffffffffff0;
  in_stack_00000050 = unaff_x29;
  in_stack_00000058 = unaff_x30;
switchD_10042322c_caseD_aa:
  unaff_x19 = (undefined8 *)&DAT_100fc5fc0;
  FUN_1000f7830(&DAT_100fc5fc0,&BYTE_100c49728);
  unaff_x28 = unaff_x19[-1];
  unaff_x22 = (byte *)((long)register0x00000008 +
                      -(*(long *)(unaff_x28 + 0x40) + 0xfU & 0xfffffffffffffff0));
  pbVar12 = pbVar5;
  unaff_x23 = unaff_x20;
  unaff_x24 = unaff_x21;
switchD_10042322c_caseD_b8:
  FUN_100004640(pbVar12,*(undefined8 *)(pbVar12 + 0x18));
switchD_10042322c_caseD_a9:
  unaff_x21 = unaff_x24;
  FUN_100424778();
  Swift::Encoder::_container();
  uVar7 = *(undefined8 *)unaff_x23;
  uVar2 = *(undefined8 *)(unaff_x23 + 8);
  *(undefined1 *)((long)puVar13 + -0x41) = 0;
  Swift::KeyedEncodingContainer::_encode(uVar7,uVar2,(long)puVar13 + -0x41,unaff_x19);
switchD_10042322c_caseD_f9:
  bVar1 = unaff_x21 == 0;
  unaff_x21 = 0;
  puVar9 = unaff_x19;
  pbVar5 = unaff_x22;
  if (bVar1) {
switchD_10042322c_caseD_41:
    uVar7 = *(undefined8 *)(unaff_x23 + 0x10);
    *(undefined1 *)((long)puVar13 + -0x42) = 1;
    Swift::KeyedEncodingContainer::_encode(uVar7,(long)puVar13 + -0x42,unaff_x19);
switchD_10042322c_caseD_20:
    bVar1 = unaff_x21 != 0;
    unaff_x21 = 0;
    puVar9 = unaff_x19;
    pbVar5 = unaff_x22;
    if (bVar1) goto LAB_100423500;
switchD_10042322c_caseD_89:
    pbVar5 = *(byte **)(unaff_x23 + 0x18);
    puVar9 = *(undefined8 **)(unaff_x23 + 0x20);
switchD_10042322c_caseD_28:
    *(undefined1 *)((long)puVar13 + -0x43) = 2;
    Swift::KeyedEncodingContainer::_encode(pbVar5,puVar9,(long)puVar13 + -0x43,unaff_x19);
switchD_10042322c_caseD_30:
    puVar9 = unaff_x19;
    pbVar5 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_100423500;
    pbVar5 = *(byte **)(unaff_x23 + 0x28);
    puVar9 = *(undefined8 **)(unaff_x23 + 0x30);
    *(undefined1 *)((long)puVar13 + -0x44) = 3;
    unaff_x21 = 0;
switchD_10042322c_caseD_cc:
    Swift::KeyedEncodingContainer::_encode(pbVar5,puVar9,(long)puVar13 + -0x44,unaff_x19);
    puVar9 = unaff_x19;
    pbVar5 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_100423500;
    unaff_x25 = 0;
    FUN_100424764();
    unaff_x20 = (byte *)(long)*(int *)(unaff_x25 + 0x20);
    *(undefined1 *)((long)puVar13 + -0x45) = 4;
    unaff_x24 = 0;
switchD_10042322c_caseD_e0:
    unaff_x26 = Foundation::Date::typeMetadataAccessor();
    unaff_x27 = &DAT_100fc5fd0;
    FUN_1000e8c70(&DAT_100fc5fd0,PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encode
              (unaff_x23 + (long)unaff_x20,(long)puVar13 + -0x45,unaff_x19,unaff_x26.unknown,
               unaff_x27);
    puVar9 = unaff_x19;
    pbVar5 = unaff_x22;
    if (unaff_x24 != 0) goto LAB_100423500;
    iVar4 = *(int *)(unaff_x25 + 0x24);
    *(undefined1 *)((long)puVar13 + -0x46) = 5;
    pbVar5 = unaff_x23 + iVar4;
    unaff_x21 = 0;
switchD_10042322c_caseD_c5:
    puVar9 = (undefined8 *)((long)puVar13 + -0x46);
switchD_10042322c_caseD_ed:
    param_3 = unaff_x19;
    unaff_x19 = param_3;
switchD_10042322c_caseD_3c:
    Swift::KeyedEncodingContainer::_encode(pbVar5,puVar9,param_3,unaff_x26.unknown,unaff_x27);
    puVar9 = unaff_x19;
    pbVar5 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_100423500;
    pbVar5 = *(byte **)(unaff_x23 + *(int *)(unaff_x25 + 0x28));
    puVar9 = *(undefined8 **)(unaff_x23 + *(int *)(unaff_x25 + 0x28) + 8);
    unaff_x21 = 0;
switchD_10042322c_caseD_f8:
    param_4 = unaff_x19;
    *(undefined1 *)((long)puVar13 + -0x47) = 6;
    param_3 = (undefined8 *)((long)puVar13 + -0x47);
    unaff_x19 = param_4;
switchD_10042322c_caseD_4c:
    Swift::KeyedEncodingContainer::_encodeIfPresent(pbVar5,puVar9,param_3,param_4);
    puVar9 = unaff_x19;
    pbVar5 = unaff_x22;
    if (unaff_x21 != 0) goto LAB_100423500;
    iVar4 = *(int *)(unaff_x25 + 0x2c);
    *(undefined1 *)(puVar13 + -9) = 7;
    pbVar5 = unaff_x23 + iVar4;
    puVar9 = puVar13 + -9;
    unaff_x21 = 0;
switchD_10042322c_caseD_c4:
    param_5 = unaff_x27;
    param_4 = (undefined8 *)unaff_x26.unknown;
    param_3 = unaff_x19;
    pbVar8 = pbVar5;
    puVar10 = puVar9;
    unaff_x19 = param_3;
    unaff_x26.unknown = (undefined *)param_4;
    unaff_x27 = param_5;
switchD_10042322c_caseD_ab:
    pbVar5 = unaff_x22;
    puVar9 = unaff_x19;
    Swift::KeyedEncodingContainer::_encodeIfPresent(pbVar8,puVar10,param_3,param_4,param_5);
    if (unaff_x21 != 0) goto LAB_100423500;
    iVar4 = *(int *)(unaff_x25 + 0x30);
    *(undefined1 *)((long)puVar13 + -0x51) = 8;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x23 + iVar4,(long)puVar13 + -0x51,puVar9,unaff_x26.unknown,unaff_x27);
    bVar3 = unaff_x23[*(int *)(unaff_x25 + 0x34)];
    *(undefined1 *)((long)puVar13 + -0x52) = 9;
    Swift::KeyedEncodingContainer::_encode(bVar3,(long)puVar13 + -0x52,puVar9);
    bVar3 = unaff_x23[*(int *)(unaff_x25 + 0x38)];
    *(undefined1 *)((long)puVar13 + -0x53) = 10;
    Swift::KeyedEncodingContainer::_encode(bVar3,(long)puVar13 + -0x53,puVar9);
    bVar3 = unaff_x23[*(int *)(unaff_x25 + 0x3c)];
    *(undefined1 *)((long)puVar13 + -0x54) = 0xb;
    Swift::KeyedEncodingContainer::_encode(bVar3,(long)puVar13 + -0x54,puVar9);
    (**(code **)(unaff_x28 + 8))(pbVar5,puVar9);
  }
  else {
LAB_100423500:
    (**(code **)(unaff_x28 + 8))(pbVar5,puVar9);
  }
switchD_10042322c_caseD_f4:
switchD_10042322c_caseD_38:
  SVar27.bridgeObject = puVar9;
  SVar27.str = (char *)pbVar5;
  return SVar27;
}



/* Address: 0x10042337c | switchD_10042322c::caseD_70 */

void switchD_10042322c::caseD_70(void)

{
  undefined1 *unaff_x20;
  
  FUN_1004231f8(*unaff_x20);
  return;
}



/* Address: 0x100423384 | FUN_100423384 */

void FUN_100423384(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004247b8();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004233a8 | FUN_1004233a8 */

void FUN_1004233a8(undefined1 *param_1)

{
  *param_1 = 0xc;
  return;
}



/* Address: 0x1004233b4 | switchD_10042322c::caseD_73 */

String switchD_10042322c::caseD_73(void)

{
  String SVar1;
  
  FUN_100424778();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004233dc | FUN_1004233dc */

String FUN_1004233dc(void)

{
  String SVar1;
  
  FUN_100424778();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100423404 | FUN_100423404 */

void FUN_100423404(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_70 [12];
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
  
  puVar3 = &DAT_100fc5fc0;
  FUN_1000f7830(&DAT_100fc5fc0,&BYTE_100c49728);
  lVar8 = *(long *)(puVar3 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100424778();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar3);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],&local_52,puVar3);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[3],unaff_x20[4],&local_53,puVar3);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[5],unaff_x20[6],&local_54,puVar3);
    lVar4 = 0;
    FUN_100424764();
    iVar2 = *(int *)(lVar4 + 0x20);
    local_55 = 4;
    DVar5 = Foundation::Date::typeMetadataAccessor();
    puVar6 = &DAT_100fc5fd0;
    FUN_1000e8c70(&DAT_100fc5fd0,PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar2,&local_55,puVar3,DVar5.unknown,puVar6);
    local_56 = 5;
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x24),&local_56,puVar3,DVar5.unknown,puVar6)
    ;
    puVar1 = (undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x28));
    local_57 = 6;
    Swift::KeyedEncodingContainer::_encodeIfPresent(*puVar1,puVar1[1],&local_57,puVar3);
    local_58 = 7;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x2c),&local_58,puVar3,DVar5.unknown,puVar6)
    ;
    local_61 = 8;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)*(int *)(lVar4 + 0x30),&local_61,puVar3,DVar5.unknown,puVar6)
    ;
    local_62 = 9;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x34)),&local_62,puVar3);
    local_63 = 10;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x38)),&local_63,puVar3);
    local_64 = 0xb;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined1 *)((long)unaff_x20 + (long)*(int *)(lVar4 + 0x3c)),&local_64,puVar3);
    (**(code **)(lVar8 + 8))(auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar3);
  }
  else {
    (**(code **)(lVar8 + 8))(auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0),puVar3);
  }
  return;
}



/* Address: 0x1004236f8 | FUN_1004236f8 */

/* WARNING: Removing unreachable block (ram,0x0001004239fc) */
/* WARNING: Removing unreachable block (ram,0x000100423958) */
/* WARNING: Removing unreachable block (ram,0x0001004239a8) */
/* WARNING: Removing unreachable block (ram,0x000100423bec) */
/* WARNING: Removing unreachable block (ram,0x0001004238b0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010042394c */
/* WARNING: Removing unreachable block (ram,0x000100423cf8) */
/* WARNING: Removing unreachable block (ram,0x000100423b08) */
/* WARNING: Removing unreachable block (ram,0x000100423b74) */
/* WARNING: Removing unreachable block (ram,0x000100423da4) */
/* WARNING: Removing unreachable block (ram,0x000100423db8) */
/* WARNING: Removing unreachable block (ram,0x000100423a7c) */
/* WARNING: Removing unreachable block (ram,0x000100423c14) */
/* WARNING: Removing unreachable block (ram,0x000100423c28) */
/* WARNING: Removing unreachable block (ram,0x000100423c34) */
/* WARNING: Removing unreachable block (ram,0x000100423c60) */
/* WARNING: Removing unreachable block (ram,0x000100423c64) */
/* WARNING: Removing unreachable block (ram,0x000100423c74) */
/* WARNING: Removing unreachable block (ram,0x000100423ca4) */
/* WARNING: Removing unreachable block (ram,0x000100423c7c) */
/* WARNING: Removing unreachable block (ram,0x000100423c3c) */
/* WARNING: Removing unreachable block (ram,0x000100423c5c) */
/* WARNING: Removing unreachable block (ram,0x000100423c88) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004236f8(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  bool bVar5;
  undefined *puVar6;
  Date DVar7;
  long lVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long unaff_x21;
  long lVar16;
  String *pSVar17;
  long lVar18;
  String SVar19;
  String SStack_f0;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  String *local_78;
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
  
  puVar6 = &DAT_100fc5a30;
  local_c0 = param_1;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  uVar12 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b8 = (long)&SStack_f0 - uVar12;
  lVar13 = local_b8 - uVar12;
  local_b0 = lVar13;
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar18 = *(long *)(DVar7.unknown + -8);
  uVar12 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_a8 = (undefined *)(lVar13 - uVar12);
  lVar14 = (long)local_a8 - uVar12;
  puVar6 = &DAT_100fc5fd8;
  local_98 = lVar14;
  FUN_1000f7830(&DAT_100fc5fd8,&BYTE_100c49730);
  lVar16 = *(long *)(puVar6 + -8);
  lVar14 = lVar14 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_a0 = puVar6;
  FUN_100424764();
  pSVar17 = (String *)
            (lVar14 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_80 = (long)*(int *)(lVar8 + 0x2c);
  pcVar15 = *(code **)(lVar18 + 0x38);
  (*pcVar15)((long)&pSVar17->str + local_80,1,1,DVar7.unknown);
  local_88 = (long)*(int *)(lVar8 + 0x30);
  local_78 = pSVar17;
  (*pcVar15)((long)&pSVar17->str + local_88,1,1,DVar7.unknown);
  local_90 = param_2;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100424778();
  Swift::Decoder::_container();
  pSVar17 = local_78;
  lVar4 = local_80;
  lVar13 = local_98;
  puVar3 = local_a0;
  puVar6 = local_a8;
  if (unaff_x21 == 0) {
    local_51 = 0;
    local_d0 = lVar18;
    local_c8 = lVar8;
    SVar19 = Swift::KeyedDecodingContainer::_decode(&local_51,local_a0);
    pSVar17 = local_78;
    *local_78 = SVar19;
    local_52 = 1;
    pcVar9 = (char *)Swift::KeyedDecodingContainer::_decode(&local_51,puVar3);
    pSVar17[1].str = pcVar9;
    local_53 = 2;
    SVar19 = Swift::KeyedDecodingContainer::_decode(&local_53,puVar3);
    local_d8 = DVar7.unknown;
    *(String *)&pSVar17[1].bridgeObject = SVar19;
    local_54 = 3;
    SVar19 = Swift::KeyedDecodingContainer::_decode(&local_54,puVar3);
    *(String *)&pSVar17[2].bridgeObject = SVar19;
    local_55 = 4;
    puVar10 = &DAT_100fc5fe0;
    FUN_1000e8c70(&DAT_100fc5fe0,PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    puVar2 = local_d8;
    local_e0 = puVar10;
    Swift::KeyedDecodingContainer::_decode(lVar13,local_d8,&local_55,puVar3,local_d8);
    lVar13 = local_c8;
    SStack_f0.bridgeObject = *(void **)(local_d0 + 0x20);
    (*SStack_f0.bridgeObject)((long)&pSVar17->str + (long)*(int *)(local_c8 + 0x20),local_98,puVar2)
    ;
    puVar10 = local_e0;
    local_56 = 5;
    local_98 = lVar14;
    Swift::KeyedDecodingContainer::_decode(puVar6,puVar2,&local_56,puVar3,puVar2,local_e0);
    (*SStack_f0.bridgeObject)((long)&local_78->str + (long)*(int *)(lVar13 + 0x24),puVar6,puVar2);
    local_57 = 6;
    puVar11 = &local_57;
    puVar6 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    pSVar17 = local_78;
    puVar1 = (undefined8 *)((long)&local_78->str + (long)*(int *)(lVar13 + 0x28));
    *puVar1 = puVar11;
    puVar1[1] = puVar6;
    local_58 = 7;
    local_a8 = puVar6;
    Swift::KeyedDecodingContainer::_decodeIfPresent(local_b0,puVar2,&local_58,puVar3,puVar2,puVar10)
    ;
    FUN_10041812c(local_b0,(long)&pSVar17->str + local_80);
    lVar13 = local_b8;
    local_61 = 8;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_b8,local_d8,&local_61,puVar3,local_d8,puVar10);
    FUN_10041812c(lVar13,(long)&pSVar17->str + local_88);
    local_62 = 9;
    bVar5 = Swift::KeyedDecodingContainer::_decode(&local_62,puVar3);
    *(bool *)((long)&local_78->str + (long)*(int *)(local_c8 + 0x34)) = bVar5;
    local_63 = 10;
    bVar5 = Swift::KeyedDecodingContainer::_decode(&local_63,local_a0);
    *(bool *)((long)&local_78->str + (long)*(int *)(local_c8 + 0x38)) = bVar5;
    local_64 = 0xb;
    bVar5 = Swift::KeyedDecodingContainer::_decode(&local_64,local_a0);
    (**(code **)(lVar16 + 8))(local_98,local_a0);
    pSVar17 = local_78;
    *(bool *)((long)&local_78->str + (long)*(int *)(local_c8 + 0x3c)) = bVar5;
    FUN_10041817c(local_78,local_c0);
    FUN_100004594(local_90);
    FUN_10005241c(pSVar17,FUN_100424764);
  }
  else {
    FUN_100004594(local_90);
    _swift_bridgeObjectRelease(0);
    FUN_1000fb4c4((long)&pSVar17->str + lVar4,&DAT_100fc5a30,&DAT_100c49370);
    FUN_1000fb4c4((long)&pSVar17->str + local_88,&DAT_100fc5a30,&DAT_100c49370);
  }
  return;
}



/* Address: 0x100423e40 | FUN_100423e40 */

void FUN_100423e40(undefined8 param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x24);
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100423e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x100423e84 | FUN_100423e84 */

void FUN_100423e84(void)

{
  FUN_1004236f8();
  return;
}



/* Address: 0x100423e98 | FUN_100423e98 */

void FUN_100423e98(void)

{
  FUN_100423404();
  return;
}



/* Address: 0x100423eac | FUN_100423eac */

undefined8 FUN_100423eac(ulong param_1)

{
  return *(undefined8 *)(&DAT_100c49e10 + (param_1 & 0xff) * 8);
}



/* Address: 0x100423ec0 | FUN_100423ec0 */

void FUN_100423ec0(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
                    /* WARNING: Load size is inaccurate */
  HVar2.unknown = (&DAT_100c49e10)[(ulong)bVar1 * 8];
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100423f0c | FUN_100423f0c */

void FUN_100423f0c(undefined8 param_1,Hasher param_2)

{
  byte *unaff_x20;
  
  Swift::Hasher::_combine(*(__uint64 *)(&DAT_100c49e10 + (ulong)*unaff_x20 * 8),param_2);
  return;
}



/* Address: 0x100423f40 | FUN_100423f40 */

void FUN_100423f40(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
                    /* WARNING: Load size is inaccurate */
  HVar2.unknown = (&DAT_100c49e10)[(ulong)bVar1 * 8];
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100423f88 | FUN_100423f88 */

void FUN_100423f88(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100424624();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100423fb0 | FUN_100423fb0 */

void FUN_100423fb0(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&DAT_100c49e10 + (ulong)*unaff_x20 * 8);
  return;
}



/* Address: 0x100423fc8 | thunk_FUN_100424ba0 */

void thunk_FUN_100424ba0(void)

{
  FUN_100424ba0();
  return;
}



/* Address: 0x100423fcc | FUN_100423fcc */

undefined1  [16] FUN_100423fcc(ulong param_1,undefined8 param_2,byte *param_3)

{
  byte *pbVar1;
  undefined1 in_ZR;
  Hasher into;
  Hasher into_00;
  ulong uVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *in_x12;
  byte *in_x13;
  byte *in_x14;
  char *in_x15;
  ulong in_x16;
  Hasher unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined1 auStack_70 [80];
  
  pbVar3 = &DAT_e800000000000000;
  into.unknown = (byte *)0x797469746e617571;
  pcVar5 = (char *)(param_1 & 0xff);
  pbVar6 = (byte *)(ulong)*(byte *)((long)pcVar5 + 0x100c4970c);
  pbVar1 = (byte *)((long)pbVar6 * 4 + 0x100424000);
  uVar4 = (uint)pcVar5;
  into_00.unknown = into.unknown;
  switch(pcVar5) {
  case (char *)0x0:
    goto switchD_100423ffc_caseD_0;
  default:
    pbVar3 = &SUB_00006469;
  case (char *)0xb2:
  case (char *)0xcc:
  case (char *)0xda:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0xea00000000000000);
    into.unknown = (byte *)0x7270;
  case (char *)0x8a:
  case (char *)0xca:
    into.unknown = (undefined *)((ulong)into.unknown & 0xffffffff0000ffff | 0x646f0000);
  case (char *)0x80:
  case (char *)0x8c:
  case (char *)0xe4:
    into.unknown = (undefined *)((ulong)into.unknown & 0xffffffff | 0x5f74637500000000);
  case (char *)0x2e:
  case (char *)0x32:
  case (char *)0x3e:
  case (char *)0x42:
  case (char *)0x4e:
  case (char *)0x82:
  case (char *)0xc2:
  case (char *)0xe6:
  case (char *)0xea:
  case (char *)0xfa:
    auVar7._8_8_ = pbVar3;
    auVar7._0_8_ = into.unknown;
    return auVar7;
  case (char *)0x2:
    pbVar3 = (byte *)0xee0064695f6e6f69;
    into.unknown = (byte *)0x7274;
  case (char *)0x15:
  case (char *)0x1d:
  case (char *)0x25:
  case (char *)0x95:
    auVar9._0_8_ = (ulong)into.unknown & 0xffff | 0x746361736e610000;
    auVar9._8_8_ = pbVar3;
    return auVar9;
  case (char *)0x3:
    pbVar3 = (byte *)0x8000000100da5f00;
    pcVar5 = (char *)0xd000000000000016;
  case (char *)0x4c:
    auVar10._0_8_ = (ulong)pcVar5 | 1;
    auVar10._8_8_ = pbVar3;
    return auVar10;
  case (char *)0x4:
    pbVar3 = (byte *)0x7461645f;
  case (char *)0x18:
    pbVar3 = (byte *)((ulong)pbVar3 & 0xffffffffffff | 0xed00006500000000);
  case (char *)0x16:
  case (char *)0x1e:
  case (char *)0x26:
  case (char *)0x96:
    into.unknown = (byte *)0x7570;
  case (char *)0x20:
  case (char *)0x28:
    auVar8._0_8_ = (ulong)into.unknown & 0xffff | 0x6573616863720000;
    auVar8._8_8_ = pbVar3;
    return auVar8;
  case (char *)0x5:
    into.unknown = (byte *)0xd000000000000016;
    pcVar5 = "original_purchase_date";
    break;
  case (char *)0x6:
    auVar13._8_8_ = 0xec00000065746164;
    auVar13._0_8_ = 0x5f73657269707865;
    return auVar13;
  case (char *)0x7:
    pcVar5 = "cancellation_date";
  case (char *)0x36:
  case (char *)0x46:
  case (char *)0x56:
  case (char *)0x7e:
  case (char *)0x92:
  case (char *)0x9a:
  case (char *)0xa2:
  case (char *)0xaa:
  case (char *)0xbe:
  case (char *)0xd2:
  case (char *)0xee:
  case (char *)0xf6:
    pcVar5 = (char *)((long)pcVar5 + -0x20);
  case (char *)0xf4:
    auVar11._8_8_ = (ulong)pcVar5 | 0x8000000000000000;
    auVar11._0_8_ = 0xd000000000000011;
    return auVar11;
  case (char *)0x8:
    pcVar5 = "is should not happen...";
  case (char *)0x34:
  case (char *)0x9c:
    pbVar3 = (byte *)((ulong)pcVar5 | 0x8000000000000000);
    pcVar5 = (char *)0x16;
  case (char *)0xba:
  case (char *)0xe2:
    into.unknown = (undefined *)(((ulong)pcVar5 | 0xd000000000000000) + 5);
  case (char *)0xa4:
    auVar14._8_8_ = pbVar3;
    auVar14._0_8_ = into.unknown;
    return auVar14;
  case (char *)0x9:
  case (char *)0x58:
    into.unknown = (byte *)0xd000000000000016;
    pcVar5 = "web_order_line_item_id";
  case (char *)0x50:
    break;
  case (char *)0x69:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
  case (char *)0x6b:
  case (char *)0x70:
  case (char *)0x77:
    *(byte **)((long)register0x00000008 + 0x50) = unaff_x20;
    *(undefined **)((long)register0x00000008 + 0x58) = unaff_x19.unknown;
  case (char *)0x76:
    *(undefined8 *)((long)register0x00000008 + 0x60) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + 0x68) = unaff_x30;
    unaff_x19.unknown = (undefined *)(ulong)*unaff_x20;
  case (char *)0x6e:
  case (char *)0x71:
    Swift::Hasher::init(0x797469746e617571);
  case (char *)0x6c:
  case (char *)0x74:
    FUN_100423fcc();
    into_00.unknown = (undefined *)((long)register0x00000008 + 8);
    param_3 = unaff_x19.unknown;
    unaff_x19.unknown = pbVar3;
  case (char *)0x68:
    into.unknown = unaff_x19.unknown;
    pbVar3 = param_3;
    SVar25.bridgeObject = into.unknown;
    SVar25.str = (char *)pbVar3;
    Swift::String::hash(into_00,SVar25);
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
  case (char *)0xd6:
    _swift_bridgeObjectRelease();
    auVar17._0_8_ = Swift::Hasher::_finalize(into);
    auVar17._8_8_ = pbVar3;
    return auVar17;
  case (char *)0x90:
  case (char *)0x98:
  case (char *)0xa0:
  case (char *)0xa8:
  case (char *)0x54:
    unaff_x19.unknown = into.unknown;
  case (char *)0x67:
  case (char *)0x6f:
  case (char *)0x72:
    into.unknown = (undefined *)(ulong)*unaff_x20;
    FUN_100423fcc();
  case (char *)0x73:
    param_3 = into.unknown;
    unaff_x20 = pbVar3;
  case (char *)0x6a:
    into.unknown = unaff_x19.unknown;
    pbVar3 = param_3;
  case (char *)0x2d:
  case (char *)0x31:
  case (char *)0x3d:
  case (char *)0x41:
  case (char *)0xe5:
    param_3 = unaff_x20;
    unaff_x20 = param_3;
  case (char *)0x4d:
  case (char *)0xc1:
  case (char *)0xe9:
  case (char *)0xf9:
    SVar24.bridgeObject = param_3;
    SVar24.str = (char *)pbVar3;
    Swift::String::hash(into,SVar24);
  case (char *)0x75:
  case (char *)0x7c:
  case (char *)0x81:
    _swift_bridgeObjectRelease(unaff_x20);
    auVar16._8_8_ = pbVar3;
    auVar16._0_8_ = unaff_x20;
    return auVar16;
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xd5:
    uVar2 = (ulong)*unaff_x20;
    FUN_100423fcc();
    *(ulong *)pcVar5 = uVar2;
    *(byte **)((long)pcVar5 + 8) = pbVar3;
    auVar19._8_8_ = pbVar3;
    auVar19._0_8_ = uVar2;
    return auVar19;
  case (char *)0xac:
    auVar18._8_8_ = &DAT_e800000000000000;
    auVar18._0_8_ = 0x797469746e617571;
    return auVar18;
  case (char *)0xb9:
    in_x13 = (byte *)((ulong)in_x13 & 0xffffffff0000ffff | 0x645f0000);
  case (char *)0xe1:
    in_x13 = (byte *)((ulong)in_x13 & 0xffff0000ffffffff | 0x746100000000);
  case (char *)0x30:
    in_x13 = (byte *)((ulong)in_x13 & 0xffffffffffff | 0xef65000000000000);
    in_x14 = (byte *)0x6974617269707865;
    in_x15 = &DAT_e600000000000000;
    in_x16 = 0x615f6e69;
  case (char *)0xec:
    if (!(bool)in_ZR) {
      in_x13 = (byte *)in_x15;
      in_x14 = (byte *)(in_x16 & 0xffff0000ffffffff | 0x707000000000);
    }
    in_ZR = uVar4 == 3;
  case (char *)0x40:
    if (!(bool)in_ZR) {
      pbVar6 = in_x13;
      in_x12 = in_x14;
    }
    in_x13 = (byte *)0xd000000000000013;
    in_x14 = (byte *)0x8000000100da62e0;
  case (char *)0xb8:
    in_x15 = "version_external_identifier";
  case (char *)0x9f:
  case (char *)0xa7:
  case (char *)0xaf:
  case (char *)0xd7:
    if (uVar4 != 1) {
      in_x14 = (byte *)((ulong)in_x15 | 0x8000000000000000);
      in_x13 = in_x13 + 9;
    }
    pbVar3 = &switchD_100423ffc::switchdataD_100c4970c;
    if (uVar4 != 0) {
      pbVar3 = in_x14;
      pbVar1 = in_x13;
    }
    if (uVar4 < 3) {
      pbVar6 = pbVar3;
      in_x12 = pbVar1;
    }
    SVar26.bridgeObject = pbVar6;
    SVar26.str = (char *)in_x12;
    Swift::String::hash((Hasher)0x797469746e617571,SVar26);
    _swift_bridgeObjectRelease(pbVar6);
    auVar22._8_8_ = in_x12;
    auVar22._0_8_ = pbVar6;
    return auVar22;
  case (char *)0xd0:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    unaff_x19.unknown = (byte *)(ulong)*unaff_x20;
  case (char *)0x65:
    param_3 = unaff_x19.unknown;
    Swift::Hasher::init(0);
    FUN_100423fcc();
  case (char *)0x44:
  case (char *)0x66:
    unaff_x19.unknown = pbVar3;
  case (char *)0x94:
  case (char *)0xbc:
    pbVar3 = param_3;
    into.unknown = (undefined *)((long)register0x00000008 + 8);
  case (char *)0x64:
    param_3 = unaff_x19.unknown;
    unaff_x19.unknown = param_3;
  case (char *)0x6d:
  case (char *)0xe0:
    SVar23.bridgeObject = param_3;
    SVar23.str = (char *)pbVar3;
    Swift::String::hash(into,SVar23);
    _swift_bridgeObjectRelease();
    auVar15._0_8_ = Swift::Hasher::_finalize(unaff_x19);
    auVar15._8_8_ = pbVar3;
    return auVar15;
  case (char *)0xd4:
    uVar2 = (ulong)*unaff_x20;
    FUN_100421f20(uVar2);
    auVar21._8_8_ = pbVar3;
    auVar21._0_8_ = uVar2;
    return auVar21;
  case (char *)0xed:
    pbVar6 = (byte *)((ulong)pbVar6 | 0x74610000);
  case (char *)0x35:
  case (char *)0x45:
  case (char *)0x55:
    pbVar6 = (byte *)((ulong)pbVar6 | 0xed00006500000000);
    in_x12 = (byte *)0x697461657263;
  case (char *)0xf8:
    in_x12 = (byte *)((ulong)in_x12 & 0xffffffffffff | 0x6e6f000000000000);
    in_ZR = uVar4 == 4;
  case (char *)0x14:
    in_x13 = (byte *)0x6e6f;
  case (char *)0x7d:
  case (char *)0x91:
  case (char *)0x99:
  case (char *)0xa1:
  case (char *)0xa9:
  case (char *)0xbd:
  case (char *)0xd1:
  case (char *)0xf5:
    in_x13 = (byte *)((ulong)in_x13 & 0xffffffff0000ffff | 0x645f0000);
  case (char *)0x1c:
  case (char *)0x3c:
    in_x13 = (byte *)((ulong)in_x13 & 0xffffffff | 0xef65746100000000);
    in_x14 = (byte *)0x6974617269707865;
  case (char *)0x24:
    if (!(bool)in_ZR) {
      in_x13 = &DAT_e600000000000000;
      in_x14 = (byte *)0x7070615f6e69;
    }
  case (char *)0xe8:
    if (uVar4 != 3) {
      pbVar6 = in_x13;
      in_x12 = in_x14;
    }
    in_x13 = (byte *)0x13;
  case (char *)0x2c:
    in_x13 = (byte *)((ulong)in_x13 & 0xffffffffffff | 0xd000000000000000);
    in_x14 = (byte *)0x8000000100da62e0;
    in_x15 = "version_external_identifier";
  case (char *)0xc0:
    if (uVar4 != 1) {
      in_x14 = (byte *)((ulong)in_x15 | 0x8000000000000000);
      in_x13 = in_x13 + 9;
    }
    pbVar3 = &switchD_100423ffc::switchdataD_100c4970c;
    if (uVar4 != 0) {
      pbVar3 = in_x14;
      pbVar1 = in_x13;
    }
    if (uVar4 < 3) {
      pbVar6 = pbVar3;
      in_x12 = pbVar1;
    }
    auVar20._8_8_ = pbVar6;
    auVar20._0_8_ = in_x12;
    return auVar20;
  }
  pbVar3 = (byte *)((ulong)((long)pcVar5 + -0x20) | 0x8000000000000000);
switchD_100423ffc_caseD_0:
  auVar12._8_8_ = pbVar3;
  auVar12._0_8_ = into.unknown;
  return auVar12;
}



/* Address: 0x100424114 | switchD_100423ffc::caseD_d0 */

void switchD_100423ffc::caseD_d0(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_100423fcc();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100424174 | switchD_100423ffc::caseD_90 */

void switchD_100423ffc::caseD_90(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_100423fcc();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1004241b4 | switchD_100423ffc::caseD_69 */

void switchD_100423ffc::caseD_69(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_100423fcc();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100424210 | FUN_100424210 */

void FUN_100424210(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100424ba0(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10042423c | FUN_10042423c */

void FUN_10042423c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100423fcc();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100424264 | thunk_FUN_100424c04 */

void thunk_FUN_100424c04(void)

{
  FUN_100424c04();
  return;
}



/* Address: 0x100424268 | FUN_100424268 */

undefined1  [16] FUN_100424268(byte param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  puVar6 = (undefined1 *)0xef657461645f6e6f;
  uVar3 = 0x6974617269707865;
  if (param_1 != 4) {
    puVar6 = &DAT_e600000000000000;
    uVar3 = 0x7070615f6e69;
  }
  puVar1 = (undefined1 *)0xed0000657461645f;
  uVar4 = 0x6e6f697461657263;
  if (param_1 != 3) {
    puVar1 = puVar6;
    uVar4 = uVar3;
  }
  pcVar2 = "original_application_version";
  uVar3 = 0xd000000000000013;
  if (param_1 != 1) {
    pcVar2 = "version_external_identifier";
    uVar3 = 0xd00000000000001c;
  }
  puVar6 = (undefined1 *)0xe900000000000064;
  uVar5 = 0x695f656c646e7562;
  if (param_1 != 0) {
    puVar6 = (undefined1 *)((ulong)pcVar2 | 0x8000000000000000);
    uVar5 = uVar3;
  }
  if (param_1 < 3) {
    puVar1 = puVar6;
    uVar4 = uVar5;
  }
  auVar7._8_8_ = puVar1;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Address: 0x100424340 | switchD_100423ffc::caseD_d4 */

void switchD_100423ffc::caseD_d4(void)

{
  undefined1 *unaff_x20;
  
  FUN_100421f20(*unaff_x20);
  return;
}



/* Address: 0x100424348 | FUN_100424348 */

void FUN_100424348(Hasher param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  String SVar8;
  
  bVar2 = *unaff_x20;
  puVar7 = (undefined1 *)0xef657461645f6e6f;
  pcVar3 = (char *)0x6974617269707865;
  if (bVar2 != 4) {
    puVar7 = &DAT_e600000000000000;
    pcVar3 = (char *)0x7070615f6e69;
  }
  puVar1 = (undefined1 *)0xed0000657461645f;
  pcVar4 = (char *)0x6e6f697461657263;
  if (bVar2 != 3) {
    puVar1 = puVar7;
    pcVar4 = pcVar3;
  }
  pcVar3 = "original_application_version";
  pcVar5 = (char *)0xd000000000000013;
  if (bVar2 != 1) {
    pcVar3 = "version_external_identifier";
    pcVar5 = (char *)0xd00000000000001c;
  }
  puVar7 = (undefined1 *)0xe900000000000064;
  pcVar6 = (char *)0x695f656c646e7562;
  if (bVar2 != 0) {
    puVar7 = (undefined1 *)((ulong)pcVar3 | 0x8000000000000000);
    pcVar6 = pcVar5;
  }
  if (bVar2 < 3) {
    puVar1 = puVar7;
    pcVar4 = pcVar6;
  }
  SVar8.bridgeObject = puVar1;
  SVar8.str = pcVar4;
  Swift::String::hash(param_1,SVar8);
  _swift_bridgeObjectRelease(puVar1);
  return;
}



/* Address: 0x100424440 | FUN_100424440 */

void FUN_100424440(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100422040(param_1,*unaff_x20);
  return;
}



/* Address: 0x100424448 | FUN_100424448 */

void FUN_100424448(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100424c04(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100424474 | FUN_100424474 */

void FUN_100424474(undefined8 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  puVar7 = (undefined1 *)0xef657461645f6e6f;
  uVar4 = 0x6974617269707865;
  if (bVar2 != 4) {
    puVar7 = &DAT_e600000000000000;
    uVar4 = 0x7070615f6e69;
  }
  puVar1 = (undefined1 *)0xed0000657461645f;
  uVar5 = 0x6e6f697461657263;
  if (bVar2 != 3) {
    puVar1 = puVar7;
    uVar5 = uVar4;
  }
  pcVar3 = "original_application_version";
  uVar4 = 0xd000000000000013;
  if (bVar2 != 1) {
    pcVar3 = "version_external_identifier";
    uVar4 = 0xd00000000000001c;
  }
  puVar7 = (undefined1 *)0xe900000000000064;
  uVar6 = 0x695f656c646e7562;
  if (bVar2 != 0) {
    puVar7 = (undefined1 *)((ulong)pcVar3 | 0x8000000000000000);
    uVar6 = uVar4;
  }
  if (bVar2 < 3) {
    puVar1 = puVar7;
    uVar5 = uVar6;
  }
  *param_1 = uVar5;
  param_1[1] = puVar1;
  return;
}



/* Address: 0x100424550 | FUN_100424550 */

bool FUN_100424550(int param_1)

{
  return param_1 != 0xad;
}



/* Address: 0x10042455c | FUN_10042455c */

undefined8 FUN_10042455c(void)

{
  return 0xad;
}



/* Address: 0x100424564 | FUN_100424564 */

void FUN_100424564(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)0xad;
  Swift::Hasher::_combine(0xad,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004245a4 | FUN_1004245a4 */

void FUN_1004245a4(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine(0xad,param_2);
  return;
}



/* Address: 0x1004245c8 | FUN_1004245c8 */

void FUN_1004245c8(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = (undefined *)0xad;
  Swift::Hasher::_combine(0xad,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100424604 | FUN_100424604 */

void FUN_100424604(undefined8 param_1,int *param_2)

{
  *(bool *)param_1 = *param_2 != 0xad;
  return;
}



/* Address: 0x100424618 | FUN_100424618 */

void FUN_100424618(undefined4 *param_1)

{
  *param_1 = 0xad;
  return;
}



/* Address: 0x100424624 | FUN_100424624 */

undefined8 FUN_100424624(long param_1)

{
  if (param_1 < 0x520b) {
    if (param_1 < 0) {
      if (param_1 == -2) {
        return 0;
      }
      if (param_1 == -1) {
        return 1;
      }
    }
    else {
      if (param_1 == 0) {
        return 2;
      }
      if (param_1 == 21000) {
        return 3;
      }
      if (param_1 == 0x520a) {
        return 4;
      }
    }
  }
  else if (param_1 < 0x520e) {
    if (param_1 == 0x520b) {
      return 5;
    }
    if (param_1 == 0x520c) {
      return 6;
    }
    if (param_1 == 0x520d) {
      return 7;
    }
  }
  else {
    if (param_1 == 0x520e) {
      return 8;
    }
    if (param_1 == 0x520f) {
      return 9;
    }
    if (param_1 == 0x5210) {
      return 10;
    }
  }
  return 0xb;
}



/* Address: 0x100424714 | FUN_100424714 */

undefined8 FUN_100424714(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100424764 | FUN_100424764 */

void FUN_100424764(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc6190,&TargetStructDescriptor_100cb00ac);
  return;
}


