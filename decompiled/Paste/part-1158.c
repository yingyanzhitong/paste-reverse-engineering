/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bea190 | FUN_100bea190 */

undefined1  [16] FUN_100bea190(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  FUN_100beb3dc();
  auVar1._8_8_ = unaff_x20 + *(int *)(param_1 + 0x18);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100bea1b0 | FUN_100bea1b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bea1b0(long param_1)

{
  long unaff_x20;
  
  FUN_100beb3e8();
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x1c));
}



/* Address: 0x100bea1e0 | FUN_100bea1e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bea1e0(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = param_1;
  FUN_100beb3e8();
  *(long *)(unaff_x20 + *(int *)(lVar1 + 0x1c)) = param_1;
  FUN_100b56e60(0);
  return;
}



/* Address: 0x100bea210 | FUN_100bea210 */

undefined1  [16] FUN_100bea210(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  FUN_100beb3dc();
  auVar1._8_8_ = unaff_x20 + *(int *)(param_1 + 0x1c);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100bea230 | FUN_100bea230 */

void FUN_100bea230(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  long unaff_x20;
  
  FUN_100beb3e8();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x20));
  uVar2 = *(undefined1 *)(puVar1 + 1);
  *param_1 = *puVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return;
}



/* Address: 0x100bea268 | FUN_100bea268 */

void FUN_100bea268(undefined8 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  FUN_100beb3e8();
  iVar2 = *(int *)(param_1 + 4);
  *(undefined8 *)(unaff_x20 + iVar2) = uVar3;
  *(undefined1 *)((undefined8 *)(unaff_x20 + iVar2) + 1) = uVar1;
  FUN_100b56e60();
  return;
}



/* Address: 0x100bea29c | FUN_100bea29c */

undefined1  [16] FUN_100bea29c(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  FUN_100beb3dc();
  auVar1._8_8_ = unaff_x20 + *(int *)(param_1 + 0x20);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100bea2bc | FUN_100bea2bc */

void FUN_100bea2bc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  FUN_100beb3e8();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  FUN_100bcd830();
  return;
}



/* Address: 0x100bea2ec | FUN_100bea2ec */

void FUN_100bea2ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  FUN_100beb3e8();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)((long)param_1 + 0x24));
  FUN_100bcd840(*puVar1,puVar1[1]);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  FUN_100b56e60();
  return;
}



/* Address: 0x100bea320 | FUN_100bea320 */

undefined1  [16] FUN_100bea320(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  FUN_100beb3dc();
  auVar1._8_8_ = unaff_x20 + *(int *)(param_1 + 0x24);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100bea340 | FUN_100bea340 */

void FUN_100bea340(long param_1)

{
  long unaff_x20;
  
  FUN_100beb3dc();
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x28)));
  return;
}



/* Address: 0x100bea358 | FUN_100bea358 */

void FUN_100bea358(long param_1)

{
  int iVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = param_1;
  FUN_100beb3e8();
  iVar1 = *(int *)(lVar2 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + iVar1));
  *(long *)(unaff_x20 + iVar1) = param_1;
  FUN_100b56e60();
  return;
}



/* Address: 0x100bea388 | FUN_100bea388 */

undefined1  [16] FUN_100bea388(long param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  FUN_100beb3dc();
  auVar1._8_8_ = unaff_x20 + *(int *)(param_1 + 0x28);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100bea3a8 | FUN_100bea3a8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bea3dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bea3a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Address: 0x100bea404 | thunk_FUN_100bea3a8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bea3dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong thunk_FUN_100bea3a8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (7 < uVar1) {
    uVar1 = 8;
  }
  return uVar1;
}



/* Address: 0x100bea408 | FUN_100bea408 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100bea408(ulong param_1,undefined8 param_2,undefined8 *param_3,byte *param_4)

{
  byte bVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  byte *unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  byte *unaff_x23;
  long unaff_x25;
  byte *unaff_x26;
  undefined8 *unaff_x27;
  byte *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
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
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  SVar22.bridgeObject = unaff_x27;
  SVar22.str = (char *)unaff_x28;
  puVar5 = (undefined8 *)&SUB_e900000000000070;
  pbVar2 = &DAT_6d617473656d6974;
  SVar23.bridgeObject = &SUB_e900000000000070;
  SVar23.str = &DAT_6d617473656d6974;
  puVar7 = (undefined1 *)(param_1 & 0xff);
  pbVar4 = pbVar2;
  switch(puVar7) {
  case (undefined1 *)0x0:
  case (undefined1 *)0x10:
    goto switchD_100bea43c_caseD_0;
  default:
    puVar5 = (undefined8 *)&DAT_e800000000000000;
  case (undefined1 *)0x24:
  case (undefined1 *)0x32:
  case (undefined1 *)0x4e:
  case (undefined1 *)0x5b:
  case (undefined1 *)0x63:
  case (undefined1 *)0x6b:
  case (undefined1 *)0x73:
  case (undefined1 *)0x7b:
  case (undefined1 *)0x83:
  case (undefined1 *)0x8b:
  case (undefined1 *)0xba:
    pbVar2 = (byte *)0x7274;
  case (undefined1 *)0x4a:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x63610000);
switchD_100bea43c_caseD_1a:
    SVar10.str = (char *)((ulong)pbVar2 & 0xffffffff | 0x64695f6500000000);
    SVar10.bridgeObject = puVar5;
    return SVar10;
  case (undefined1 *)0x2:
  case (undefined1 *)0x4c:
    puVar5 = (undefined8 *)&DAT_e700000000000000;
  case (undefined1 *)0xa:
    pbVar2 = (byte *)0x6e617073;
  case (undefined1 *)0xb:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x695f00000000);
  case (undefined1 *)0xf:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffffffff | 0x64000000000000);
switchD_100bea43c_caseD_d:
    SVar12.bridgeObject = puVar5;
    SVar12.str = (char *)pbVar2;
    return SVar12;
  case (undefined1 *)0x3:
    puVar5 = (undefined8 *)&DAT_e400000000000000;
    pbVar2 = (byte *)0x656d616e;
  case (undefined1 *)0x11:
  case (undefined1 *)0x64:
    SVar13.bridgeObject = puVar5;
    SVar13.str = (char *)pbVar2;
    return SVar13;
  case (undefined1 *)0x4:
    puVar5 = (undefined8 *)&DAT_e500000000000000;
  case (undefined1 *)0xb8:
  case (undefined1 *)0xd0:
  case (undefined1 *)0xe8:
    pbVar2 = (byte *)0x6176;
  case (undefined1 *)0x18:
  case (undefined1 *)0xc0:
  case (undefined1 *)0xc8:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffffffff0000ffff | 0x756c0000);
  case (undefined1 *)0x8:
  case (undefined1 *)0x28:
  case (undefined1 *)0xd8:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff0000ffffffff | 0x6500000000);
switchD_100bea43c_caseD_c:
    SVar11.bridgeObject = puVar5;
    SVar11.str = (char *)pbVar2;
    return SVar11;
  case (undefined1 *)0x5:
  case (undefined1 *)0x74:
    SVar15.bridgeObject = &DAT_e400000000000000;
    SVar15.str = &DAT_65707974;
    return SVar15;
  case (undefined1 *)0x6:
  case (undefined1 *)0x7c:
  case (undefined1 *)0xea:
    puVar5 = (undefined8 *)&DAT_e400000000000000;
  case (undefined1 *)0xd2:
    SVar16.bridgeObject = puVar5;
    SVar16.str = (char *)0x74696e75;
    return SVar16;
  case (undefined1 *)0x7:
  case (undefined1 *)0x14:
    puVar5 = (undefined8 *)0x7365;
  case (undefined1 *)0x41:
    puVar5 = (undefined8 *)((ulong)puVar5 & 0xffffffffffff | 0xea00000000000000);
  case (undefined1 *)0x19:
    pbVar2 = (byte *)0x7461;
  case (undefined1 *)0x6c:
    pbVar2 = (byte *)((ulong)pbVar2 & 0xffff | 0x7475626972740000);
switchD_100bea43c_caseD_0:
    SVar14.bridgeObject = puVar5;
    SVar14.str = (char *)pbVar2;
    return SVar14;
  case (undefined1 *)0xc:
    goto switchD_100bea43c_caseD_c;
  case (undefined1 *)0xd:
  case (undefined1 *)0x5c:
  case (undefined1 *)0xa8:
  case (undefined1 *)0xb0:
  case (undefined1 *)0xe0:
  case (undefined1 *)0xf0:
  case (undefined1 *)0xf8:
    goto switchD_100bea43c_caseD_d;
  case (undefined1 *)0x15:
  case (undefined1 *)0x29:
    goto switchD_100bea43c_caseD_15;
  case (undefined1 *)0x16:
  case (undefined1 *)0x2a:
  case (undefined1 *)0x3e:
  case (undefined1 *)0x46:
    pvVar6 = (void *)(ulong)*unaff_x20;
    switchD_100becca8::caseD_4b(&DAT_6d617473656d6974,pvVar6);
    SVar19.bridgeObject = pvVar6;
    SVar19.str = (char *)pbVar2;
    return SVar19;
  case (undefined1 *)0x1a:
  case (undefined1 *)0x22:
  case (undefined1 *)0x42:
    goto switchD_100bea43c_caseD_1a;
  case (undefined1 *)0x2c:
    goto switchD_100bea43c_caseD_2c;
  case (undefined1 *)0x2d:
  case (undefined1 *)0x51:
    goto switchD_100bea43c_caseD_2d;
  case (undefined1 *)0x2e:
  case (undefined1 *)0x52:
    goto switchD_100bea43c_caseD_2e;
  case (undefined1 *)0x2f:
  case (undefined1 *)0x53:
  case (undefined1 *)0x59:
  case (undefined1 *)0x5a:
  case (undefined1 *)0x61:
  case (undefined1 *)0x62:
  case (undefined1 *)0x69:
  case (undefined1 *)0x6a:
  case (undefined1 *)0x71:
  case (undefined1 *)0x72:
  case (undefined1 *)0x79:
  case (undefined1 *)0x7a:
  case (undefined1 *)0x81:
  case (undefined1 *)0x82:
  case (undefined1 *)0x89:
  case (undefined1 *)0x8a:
  case (undefined1 *)0xbc:
  case (undefined1 *)0xbd:
  case (undefined1 *)0xbe:
  case (undefined1 *)0xd5:
  case (undefined1 *)0xd6:
    goto switchD_100bea43c_caseD_2f;
  case (undefined1 *)0x38:
    goto switchD_100bea43c_caseD_38;
  case (undefined1 *)0x39:
    goto switchD_100bea43c_caseD_39;
  case (undefined1 *)0x3a:
  case (undefined1 *)0x56:
    thunk_FUN_100bea3a8();
    *puVar7 = (char)pbVar2;
    SVar20.bridgeObject = puVar5;
    SVar20.str = (char *)pbVar2;
    return SVar20;
  case (undefined1 *)0x3c:
  case (undefined1 *)0xec:
    break;
  case (undefined1 *)0x3d:
    goto switchD_100bea43c_caseD_3d;
  case (undefined1 *)0x40:
    goto switchD_100bea43c_caseD_40;
  case (undefined1 *)0x44:
    goto switchD_100bea43c_caseD_44;
  case (undefined1 *)0x45:
    goto switchD_100bea43c_caseD_45;
  case (undefined1 *)0x50:
    goto switchD_100bea43c_caseD_50;
  case (undefined1 *)0x54:
    goto switchD_100bea43c_caseD_54;
  case (undefined1 *)0x55:
    goto switchD_100bea43c_caseD_55;
  case (undefined1 *)0x58:
  case (undefined1 *)0x60:
  case (undefined1 *)0x68:
  case (undefined1 *)0x70:
  case (undefined1 *)0x78:
  case (undefined1 *)0x80:
  case (undefined1 *)0x88:
  case (undefined1 *)0xd4:
    goto switchD_100bea43c_caseD_58;
  case (undefined1 *)0x84:
    pvVar6 = (void *)(ulong)SUB_e900000000000070;
    pcVar3 = (char *)(ulong)DAT_6d617473656d6974;
    FUN_100bebe50(pcVar3,pvVar6);
    SVar17.bridgeObject = pvVar6;
    SVar17.str = pcVar3;
    return SVar17;
  case (undefined1 *)0x8c:
    FUN_100bec934();
    SVar18.bridgeObject = puVar5;
    SVar18.str = (char *)pbVar2;
    return SVar18;
  case (undefined1 *)0x99:
    goto switchD_100bea43c_caseD_99;
  case (undefined1 *)0x9a:
  case (undefined1 *)0x9f:
    goto switchD_100bea43c_caseD_9a;
  case (undefined1 *)0x9b:
  case (undefined1 *)0xa0:
    goto switchD_100bea43c_caseD_9b;
  case (undefined1 *)0x9c:
    goto switchD_100bea43c_caseD_9c;
  case (undefined1 *)0x9d:
    FUN_10040325c();
    *puVar7 = (char)pbVar2;
  case (undefined1 *)0x97:
switchD_100bea43c_caseD_54:
    SVar21.bridgeObject = puVar5;
    SVar21.str = (char *)pbVar2;
    return SVar21;
  case (undefined1 *)0xa1:
    goto switchD_100bea43c_caseD_a1;
  case (undefined1 *)0xa2:
    FUN_100bea8e4();
  case (undefined1 *)0x98:
  case (undefined1 *)0x9e:
switchD_100bea43c_caseD_a1:
    SVar22 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar22;
  case (undefined1 *)0xbf:
  case (undefined1 *)0xd7:
    goto switchD_100bea43c_caseD_bf;
  }
switchD_100bea43c_caseD_3c:
  FUN_100bcd830();
switchD_100bea43c_caseD_58:
  FUN_100bea924();
switchD_100bea43c_caseD_2f:
  FUN_100beb404(unaff_x29 + -0xc,(long)unaff_x29 + -0x41,unaff_x19,&DAT_100f3b528,pbVar2);
  Swift::KeyedEncodingContainer::_encodeIfPresent();
  pbVar2 = (byte *)unaff_x29[-0xc];
  puVar5 = (undefined8 *)unaff_x29[-0xb];
  FUN_100bcd840(pbVar2,puVar5);
  if (unaff_x21 == 0) {
    unaff_x29[-0xc] = *(undefined8 *)(unaff_x26 + *(int *)(unaff_x25 + 0x28));
    *(undefined1 *)((long)unaff_x29 + -0x41) = 7;
    FUN_100b6730c(&DAT_101048828);
    FUN_100bea964();
    puVar5 = (undefined8 *)((long)unaff_x29 + -0x41);
    FUN_100beb3f0(unaff_x29 + -0xc,puVar5);
    bVar1 = (unaff_x26 + *(int *)(unaff_x25 + 0x20))[8];
    unaff_x29[-0xc] = *(undefined8 *)(unaff_x26 + *(int *)(unaff_x25 + 0x20));
    *(byte *)(unaff_x29 + -0xb) = bVar1;
    FUN_100b98184(unaff_x23);
    pbVar2 = unaff_x23;
  }
LAB_100bea8d8:
  uVar9 = *(undefined8 *)(unaff_x29[-0xd] + 8);
  goto LAB_100bea6c0;
switchD_100bea43c_caseD_99:
  in_stack_00000050 = unaff_x29;
  in_stack_00000058 = unaff_x30;
switchD_100bea43c_caseD_50:
  unaff_x29 = &stack0x00000050;
switchD_100bea43c_caseD_9b:
  unaff_x28 = unaff_x20;
switchD_100bea43c_caseD_9a:
  pbVar4 = &DAT_101048810;
  FUN_100b6730c();
  unaff_x19 = pbVar4;
  unaff_x23 = pbVar2;
switchD_100bea43c_caseD_9c:
  unaff_x25 = *(long *)(pbVar4 + -8);
switchD_100bea43c_caseD_bf:
switchD_100bea43c_caseD_2c:
  unaff_x26 = unaff_x28;
  FUN_100004640(unaff_x23,*(undefined8 *)(unaff_x23 + 0x18));
  FUN_100bea8e4();
  Swift::Encoder::_container();
  *(undefined1 *)(unaff_x29 + -0xc) = 0;
  Foundation::Date::typeMetadataAccessor();
  FUN_100003a00(&DAT_101047de0,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
  puVar5 = unaff_x29 + -0xc;
  pbVar2 = unaff_x26;
  FUN_100beb3f0(unaff_x26,puVar5);
  if (unaff_x21 == 0) {
    unaff_x29[-0xd] = unaff_x25;
    unaff_x25 = 0;
    FUN_100bea018();
    _objc_msgSend(*(ID *)(unaff_x26 + *(int *)(unaff_x25 + 0x18)),"sentryIdString");
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
switchD_100bea43c_caseD_2d:
    *(undefined1 *)(unaff_x29 + -0xc) = 1;
    FUN_100beb404(SVar22.str,SVar22.bridgeObject,unaff_x29 + -0xc,unaff_x19);
    Swift::KeyedEncodingContainer::_encode();
    if (unaff_x21 == 0) {
      FUN_100b6fb14();
      unaff_x29[-0xe] = unaff_x25;
      if (*(ID *)(unaff_x26 + *(int *)(unaff_x25 + 0x1c)) == 0) {
        SVar22 = (String)ZEXT816(0);
      }
      else {
        _objc_msgSend(*(ID *)(unaff_x26 + *(int *)(unaff_x25 + 0x1c)),"sentrySpanIdString");
        SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      pbVar2 = (byte *)SVar22.str;
      *(undefined1 *)(unaff_x29 + -0xc) = 2;
      param_3 = unaff_x29 + -0xc;
      unaff_x27 = SVar22.bridgeObject;
switchD_100bea43c_caseD_45:
      puVar5 = unaff_x27;
switchD_100bea43c_caseD_3d:
      param_4 = unaff_x19;
      unaff_x19 = param_4;
switchD_100bea43c_caseD_15:
      FUN_100beb404(pbVar2,puVar5,param_3,param_4);
      Swift::KeyedEncodingContainer::_encodeIfPresent();
      SVar22.bridgeObject = puVar5;
      SVar22.str = (char *)pbVar2;
      lVar8 = unaff_x29[-0xd];
      if (unaff_x21 == 0) {
        FUN_100b6fb14();
        unaff_x25 = unaff_x29[-0xe];
switchD_100bea43c_caseD_39:
        puVar7 = (undefined1 *)(long)*(int *)(unaff_x25 + 0x14);
switchD_100bea43c_caseD_55:
        pbVar2 = *(byte **)(unaff_x26 + (long)puVar7);
        puVar5 = *(undefined8 **)(unaff_x26 + (long)puVar7 + 8);
        puVar7 = (undefined1 *)0x3;
switchD_100bea43c_caseD_38:
        *(char *)(unaff_x29 + -0xc) = (char)puVar7;
        FUN_100beb404(pbVar2,puVar5,unaff_x29 + -0xc,unaff_x19);
switchD_100bea43c_caseD_2e:
        Swift::KeyedEncodingContainer::_encode();
        if (unaff_x21 == 0) {
          pbVar2 = *(byte **)(unaff_x26 + *(int *)(unaff_x25 + 0x24));
          uVar9 = *(undefined8 *)(unaff_x26 + *(int *)(unaff_x25 + 0x24) + 8);
          unaff_x29[-0xc] = pbVar2;
          unaff_x29[-0xb] = uVar9;
          puVar7 = (undefined1 *)0x6;
switchD_100bea43c_caseD_44:
          *(char *)((long)unaff_x29 + -0x41) = (char)puVar7;
          goto switchD_100bea43c_caseD_3c;
        }
        goto LAB_100bea8d8;
      }
    }
    else {
      lVar8 = unaff_x29[-0xd];
    }
    FUN_100beb410(*(undefined8 *)(lVar8 + 8));
    SVar23 = SVar22;
switchD_100bea43c_caseD_40:
    FUN_100b6fb14();
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x25 + 8);
LAB_100bea6c0:
    FUN_100beb410(uVar9);
    SVar23.bridgeObject = puVar5;
    SVar23.str = (char *)pbVar2;
  }
  return SVar23;
}



/* Address: 0x100bea4d0 | switchD_100bea43c::caseD_84 */

void switchD_100bea43c::caseD_84(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bebe50(*param_1,*param_2);
  return;
}



/* Address: 0x100bea4dc | FUN_100bea4dc */

void FUN_100bea4dc(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec934(*unaff_x20);
  return;
}



/* Address: 0x100bea4e4 | switchD_100bea43c::caseD_16 */

void switchD_100bea43c::caseD_16(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100becca8::caseD_4b(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bea4ec | FUN_100bea4ec */

void FUN_100bea4ec(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed4d0(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bea4f4 | FUN_100bea4f4 */

void FUN_100bea4f4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bea3a8(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bea520 | FUN_100bea520 */

void FUN_100bea520(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bea408();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bea548 | FUN_100bea548 */

void FUN_100bea548(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bea408(*unaff_x20);
  return;
}



/* Address: 0x100bea550 | switchD_100bea43c::caseD_3a */

void switchD_100bea43c::caseD_3a(undefined1 *param_1,undefined1 param_2)

{
  thunk_FUN_100bea3a8();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bea574 | switchD_100bea43c::caseD_9d */

void switchD_100bea43c::caseD_9d(undefined1 *param_1,undefined1 param_2)

{
  FUN_10040325c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bea598 | FUN_100bea598 */

String FUN_100bea598(void)

{
  String SVar1;
  
  FUN_100bea8e4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bea5c0 | FUN_100bea5c0 */

String FUN_100bea5c0(void)

{
  String SVar1;
  
  FUN_100bea8e4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bea5e8 | FUN_100bea5e8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100bea738) */
/* WARNING: Removing unreachable block (ram,0x000100bea7b8) */

void FUN_100bea5e8(long param_1)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  ID self;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long unaff_x21;
  long lVar7;
  String SVar8;
  ulong local_70;
  ulong local_68;
  undefined1 local_51;
  
  puVar3 = &DAT_101048810;
  FUN_100b6730c();
  lVar7 = *(long *)(puVar3 + -8);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100bea8e4();
  Swift::Encoder::_container();
  local_70 = local_70 & 0xffffffffffffff00;
  Foundation::Date::typeMetadataAccessor();
  FUN_100003a00(&DAT_101047de0,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
  FUN_100beb3f0();
  if (unaff_x21 == 0) {
    lVar4 = 0;
    FUN_100bea018();
    _objc_msgSend(*(ID *)(unaff_x20 + *(int *)(lVar4 + 0x18)),"sentryIdString");
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    local_70._0_1_ = 1;
    FUN_100beb404(SVar8.str,SVar8.bridgeObject,&local_70,puVar3);
    Swift::KeyedEncodingContainer::_encode();
    FUN_100b6fb14();
    self = *(ID *)(unaff_x20 + *(int *)(lVar4 + 0x1c));
    if (self == 0) {
      SVar8 = (String)ZEXT816(0);
    }
    else {
      _objc_msgSend(self,"sentrySpanIdString");
      SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    local_70._0_1_ = 2;
    FUN_100beb404(SVar8.str,SVar8.bridgeObject,&local_70,puVar3);
    Swift::KeyedEncodingContainer::_encodeIfPresent();
    FUN_100b6fb14();
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x14));
    local_70 = CONCAT71(local_70._1_7_,3);
    FUN_100beb404(*puVar1,puVar1[1],&local_70,puVar3);
    Swift::KeyedEncodingContainer::_encode();
    puVar2 = (ulong *)(unaff_x20 + *(int *)(lVar4 + 0x24));
    uVar5 = *puVar2;
    local_68 = puVar2[1];
    local_51 = 6;
    local_70 = uVar5;
    FUN_100bcd830();
    FUN_100bea924();
    FUN_100beb404(&local_70,&local_51,puVar3,&DAT_100f3b528,uVar5);
    Swift::KeyedEncodingContainer::_encodeIfPresent();
    FUN_100bcd840(local_70,local_68);
    local_70 = *(ulong *)(unaff_x20 + *(int *)(lVar4 + 0x28));
    local_51 = 7;
    FUN_100b6730c(&DAT_101048828);
    FUN_100bea964();
    FUN_100beb3f0(&local_70,&local_51);
    puVar2 = (ulong *)(unaff_x20 + *(int *)(lVar4 + 0x20));
    local_70 = *puVar2;
    local_68 = CONCAT71(local_68._1_7_,(char)puVar2[1]);
    FUN_100b98184(param_1);
    uVar6 = *(undefined8 *)(lVar7 + 8);
  }
  else {
    uVar6 = *(undefined8 *)(lVar7 + 8);
  }
  FUN_100beb410(uVar6);
  return;
}



/* Address: 0x100bea8e4 | FUN_100bea8e4 */

void FUN_100bea8e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048818 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f86c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f86c,&DAT_100f3cf80);
  DAT_101048818 = pTVar1;
  return;
}



/* Address: 0x100bea924 | FUN_100bea924 */

void FUN_100bea924(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048820 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d9bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d9bc,&DAT_100f3b528);
  DAT_101048820 = pTVar1;
  return;
}



/* Address: 0x100bea964 | FUN_100bea964 */

void FUN_100bea964(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_101048830 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101048828;
  FUN_100b6734c();
  puVar2 = puVar1;
  FUN_100bea9d4();
  local_30 = PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210;
  puVar3 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68,puVar1,
             &local_30);
  DAT_101048830 = puVar3;
  return;
}



/* Address: 0x100bea9d4 | FUN_100bea9d4 */

void FUN_100bea9d4(void)

{
  byte *pbVar1;
  
  if (DAT_101048838 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9cdcc;
  _swift_getWitnessTable(&BYTE_100c9cdcc,&DAT_100f3aad0);
  DAT_101048838 = pbVar1;
  return;
}



/* Address: 0x100beaa14 | FUN_100beaa14 */

void FUN_100beaa14(void)

{
  FUN_100bea5e8();
  return;
}



/* Address: 0x100beaa28 | FUN_100beaa28 */

void FUN_100beaa28(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101048840;
  FUN_100003a00(&DAT_101048840,FUN_100bea018,&DAT_100c9f67c);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x100beaa64 | FUN_100beaa64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_100beaa64(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  Date DVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    DVar5 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar5.unknown + -8) + 0x10))(param_1,param_2,DVar5.unknown);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar8 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar8;
    *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
    iVar3 = *(int *)(param_3 + 0x20);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    *puVar1 = *puVar2;
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar7 = puVar2[1];
    _swift_bridgeObjectRetain();
    if ((uVar7 < 0x18) || (uVar7 == 0x18)) {
      uVar8 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar8;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = uVar7;
      _swift_bridgeObjectRetain(uVar7);
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar7 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100beab8c | FUN_100beab8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100beab8c(long param_1,long param_2)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 8))(param_1,DVar1.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  if (0x18 < *(ulong *)(param_1 + *(int *)(param_2 + 0x24) + 8)) {
    _swift_bridgeObjectRelease();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28)));
  return;
}



/* Address: 0x100beac10 | FUN_100beac10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long FUN_100beac10(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Date DVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x10))(param_1,param_2,DVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar5 = puVar2[1];
  _swift_bridgeObjectRetain();
  if ((uVar5 < 0x18) || (uVar5 == 0x18)) {
    uVar6 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar6;
  }
  else {
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    _swift_bridgeObjectRetain(uVar5);
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x28)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x28));
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100bead0c | FUN_100bead0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100bead0c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Date DVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x18))(param_1,param_2,DVar3.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar6 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  uVar6 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar6;
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar7 = puVar1[1];
  uVar4 = puVar2[1];
  if (uVar7 == 0x18) {
    if ((0x17 < uVar4) && (uVar4 != 0x18)) {
LAB_100beae54:
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      goto LAB_100beae10;
    }
  }
  else if (uVar4 == 0x18) {
    FUN_100beaea0(puVar1);
  }
  else if (uVar7 < 0x18) {
    if (0x17 < uVar4) goto LAB_100beae54;
  }
  else {
    if (0x17 < uVar4) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar7);
      goto LAB_100beae10;
    }
    FUN_10000caac(puVar1);
  }
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
LAB_100beae10:
  lVar5 = (long)*(int *)(param_3 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Address: 0x100beaea0 | FUN_100beaea0 */

undefined8 FUN_100beaea0(undefined8 param_1)

{
  FUN_1006c6f98();
  return param_1;
}



/* Address: 0x100beaed4 | FUN_100beaed4 */

long FUN_100beaed4(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  undefined8 uVar5;
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x20))(param_1,param_2,DVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  iVar1 = *(int *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_1 + iVar1);
  puVar3 = (undefined8 *)(param_2 + iVar1);
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  iVar1 = *(int *)(param_3 + 0x28);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x24));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  *(undefined8 *)(param_1 + iVar1) = *(undefined8 *)(param_2 + iVar1);
  return param_1;
}



/* Address: 0x100beaf70 | FUN_100beaf70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100beaf70(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Date DVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x28))(param_1,param_2,DVar4.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar6 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x18)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x1c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  iVar3 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x20));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  if (puVar1[1] != 0x18) {
    uVar7 = puVar2[1];
    if (uVar7 == 0x18) {
      FUN_100beaea0(puVar1);
    }
    else if (0x17 < (ulong)puVar1[1]) {
      if (0x17 < uVar7) {
        *puVar1 = *puVar2;
        puVar1[1] = uVar7;
        _swift_bridgeObjectRelease();
        goto LAB_100beb05c;
      }
      FUN_10000caac(puVar1);
    }
  }
  uVar6 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar6;
LAB_100beb05c:
  lVar8 = (long)*(int *)(param_3 + 0x28);
  uVar6 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = *(undefined8 *)(param_2 + lVar8);
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}



/* Address: 0x100beb098 | FUN_100beb098 */

void FUN_100beb098(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100beb0a4 | FUN_100beb0a4 */

ulong FUN_100beb0a4(ulong param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_100b7982c();
  if (*(int *)(*(long *)(uVar1 - 8) + 0x54) == (int)param_2) {
    FUN_1000c9ff0(param_1,param_2,uVar1);
    return param_1;
  }
  uVar1 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)((int)uVar1 + 1);
}



/* Address: 0x100beb11c | FUN_100beb11c */

void FUN_100beb11c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100beb128 | FUN_100beb128 */

void FUN_100beb128(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100b7982c();
  if (*(int *)(*(long *)(lVar1 + -8) + 0x54) == param_3) {
    FUN_1000c9ffc(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = (ulong)((int)param_2 - 1);
  FUN_100b56e60();
  return;
}



/* Address: 0x100beb194 | FUN_100beb194 */

undefined1  [16] FUN_100beb194(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_58;
  byte *pbStack_50;
  undefined *local_48;
  byte *pbStack_40;
  byte *local_38;
  byte *pbStack_30;
  undefined *local_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_58 = *(long *)(DVar1.unknown + -8) + 0x40;
    pbStack_50 = &BYTE_100c9f710;
    local_48 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
    pbStack_40 = &BYTE_100c9f728;
    local_38 = &BYTE_100c9f740;
    pbStack_30 = &BYTE_100c9f758;
    local_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x100beb240 | FUN_100beb240 */

void FUN_100beb240(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 7) {
    uVar2 = 4;
  }
  if (param_3 + 7 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xf8 < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xf9) {
                    /* WARNING: Could not recover jumptable at 0x000100beb288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100beb28c + (ulong)(&BYTE_100c9f675)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\a';
                    /* WARNING: Could not recover jumptable at 0x000100beb2bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100beb2c0 + (ulong)(&BYTE_100c9f670)[uVar1] * 4))();
  return;
}



/* Address: 0x100beb2fc | FUN_100beb2fc */

undefined1  [16] FUN_100beb2fc(void)

{
  return ZEXT816(0x100f3cf80);
}



/* Address: 0x100beb30c | thunk_FUN_100beb310 */

void thunk_FUN_100beb310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010488f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f844;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f844,&DAT_100f3cf80);
  DAT_1010488f0 = pTVar1;
  return;
}



/* Address: 0x100beb310 | FUN_100beb310 */

void FUN_100beb310(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010488f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f844;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f844,&DAT_100f3cf80);
  DAT_1010488f0 = pTVar1;
  return;
}



/* Address: 0x100beb350 | thunk_FUN_100beb354 */

void thunk_FUN_100beb354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010488f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f7a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f7a4,&DAT_100f3cf80);
  DAT_1010488f8 = pTVar1;
  return;
}



/* Address: 0x100beb354 | FUN_100beb354 */

void FUN_100beb354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010488f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f7a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f7a4,&DAT_100f3cf80);
  DAT_1010488f8 = pTVar1;
  return;
}



/* Address: 0x100beb394 | thunk_FUN_100beb398 */

void thunk_FUN_100beb398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f77c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f77c,&DAT_100f3cf80);
  DAT_101048900 = pTVar1;
  return;
}



/* Address: 0x100beb398 | FUN_100beb398 */

void FUN_100beb398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048900 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9f77c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9f77c,&DAT_100f3cf80);
  DAT_101048900 = pTVar1;
  return;
}



/* Address: 0x100beb3d8 | thunk_FUN_100bea408 */

void thunk_FUN_100bea408(void)

{
  FUN_100bea408();
  return;
}



/* Address: 0x100beb3dc | FUN_100beb3dc */

void FUN_100beb3dc(void)

{
  FUN_100bea018(0);
  return;
}



/* Address: 0x100beb3e8 | FUN_100beb3e8 */

void FUN_100beb3e8(void)

{
  FUN_100bea018(0);
  return;
}



/* Address: 0x100beb3f0 | FUN_100beb3f0 */

void FUN_100beb3f0(void)

{
  Swift::KeyedEncodingContainer::_encode();
  return;
}



/* Address: 0x100beb404 | FUN_100beb404 */

void FUN_100beb404(void)

{
  return;
}



/* Address: 0x100beb410 | FUN_100beb410 */

void FUN_100beb410(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100beb418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100beb41c | FUN_100beb41c */

void FUN_100beb41c(void)

{
  uint uVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar2 = SVar3.str;
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar3 == SVar4) {
    uVar1 = 1;
  }
  else {
    FUN_100beeb44(pcVar2,SVar4.bridgeObject,SVar4.str);
    uVar1 = (uint)pcVar2;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  FUN_100b56e60(uVar1 & 1);
  return;
}



/* Address: 0x100beb480 | FUN_100beb480 */

void FUN_100beb480(char param_1,char param_2)

{
  uint uVar1;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar2;
  
  if (param_1 == '\0') {
    puVar4 = &DAT_e600000000000000;
    lVar2 = 0x6c616e676973;
  }
  else {
    puVar4 = (undefined1 *)0xee006e6f69747065;
    lVar2 = 0x6378655f6863616d;
    if (param_1 != '\x01') {
      puVar4 = &DAT_e800000000000000;
      lVar2 = 0x726f7272655f736e;
    }
  }
  if (param_2 == '\0') {
    puVar5 = &DAT_e600000000000000;
    lVar3 = 0x6c616e676973;
  }
  else {
    puVar5 = (undefined1 *)0xee006e6f69747065;
    lVar3 = 0x6378655f6863616d;
    if (param_2 != '\x01') {
      puVar5 = &DAT_e800000000000000;
      lVar3 = 0x726f7272655f736e;
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



/* Address: 0x100beb570 | FUN_100beb570 */

undefined1 * FUN_100beb570(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 in_ZR;
  bool bVar3;
  uint uVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined1 *extraout_x8;
  ulong extraout_x8_00;
  undefined1 *extraout_x8_01;
  byte *extraout_x9;
  byte *extraout_x9_00;
  byte *extraout_x9_01;
  byte *pbVar12;
  undefined1 *puVar13;
  undefined1 *extraout_x10;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar14;
  ulong uVar15;
  char *in_x12;
  uint in_w13;
  byte *pbVar16;
  code *pcVar17;
  byte *unaff_x20;
  code *pcVar18;
  undefined1 *unaff_x21;
  undefined8 unaff_x22;
  undefined8 unaff_x30;
  undefined1 *puStack_40;
  
  uVar8 = (undefined4)(param_2 >> 0x20);
  uVar7 = (uint)param_2;
  puStack_40 = &stack0xfffffffffffffff0;
  puVar9 = &DAT_6c6576656c;
  pbVar16 = &DAT_e500000000000000;
  puVar11 = (undefined1 *)(param_1 & 0xff);
  pbVar12 = &switchD_100beb5ac::switchdataD_100c9f8c0;
  pcVar14 = (char *)(ulong)(&switchD_100beb5ac::switchdataD_100c9f8c0)[(long)puVar11];
  puVar13 = (undefined1 *)((long)pcVar14 * 4 + 0x100beb5b0);
  puVar5 = puVar9;
  switch(puVar11) {
  case (undefined1 *)0x0:
    break;
  default:
    puVar9 = (undefined1 *)0x6163;
  case (undefined1 *)0x20:
  case (undefined1 *)0x26:
  case (undefined1 *)0x2c:
  case (undefined1 *)0x32:
  case (undefined1 *)0x48:
  case (undefined1 *)0x50:
  case (undefined1 *)0x58:
  case (undefined1 *)0x5f:
  case (undefined1 *)0xa0:
  case (undefined1 *)0xa6:
  case (undefined1 *)0xb4:
  case (undefined1 *)0xbc:
  case (undefined1 *)0xcf:
    puVar9 = (undefined1 *)((ulong)puVar9 & 0xffff00000000ffff | 0x6f6765740000);
switchD_100beb5ac_caseD_7e:
    puVar9 = (undefined1 *)((ulong)puVar9 | 0x7972000000000000);
switchD_100beb5ac_caseD_38:
    break;
  case (undefined1 *)0x2:
  case (undefined1 *)0x9:
  case (undefined1 *)0x7d:
  case (undefined1 *)0x83:
  case (undefined1 *)0x86:
  case (undefined1 *)0x8a:
  case (undefined1 *)0x90:
  case (undefined1 *)0xb6:
  case (undefined1 *)0xbe:
  case (undefined1 *)0xd0:
  case (undefined1 *)0xd1:
  case (undefined1 *)0xd7:
    puVar9 = (undefined1 *)0x6974;
  case (undefined1 *)0x2b:
  case (undefined1 *)0x31:
  case (undefined1 *)0x4b:
  case (undefined1 *)0x53:
  case (undefined1 *)0x59:
  case (undefined1 *)0x60:
  case (undefined1 *)0xa5:
    puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffff0000ffff | 0x656d0000);
switchD_100beb5ac_caseD_7f:
    puVar9 = (undefined1 *)((ulong)puVar9 & 0xffff0000ffffffff | 0x747300000000);
switchD_100beb5ac_caseD_49:
    puVar9 = (undefined1 *)((ulong)puVar9 | 0x6d61000000000000);
switchD_100beb5ac_caseD_a:
switchD_100beb5ac_caseD_37:
switchD_100beb5ac_caseD_c:
    break;
  case (undefined1 *)0x3:
  case (undefined1 *)0x2d:
  case (undefined1 *)0x33:
  case (undefined1 *)0x4a:
  case (undefined1 *)0x52:
  case (undefined1 *)0xa7:
    FUN_100beed94();
  case (undefined1 *)0x5b:
  case (undefined1 *)0x94:
  case (undefined1 *)0xde:
    break;
  case (undefined1 *)0x4:
  case (undefined1 *)0xb:
  case (undefined1 *)0x12:
  case (undefined1 *)0x19:
  case (undefined1 *)0x56:
  case (undefined1 *)0x5d:
  case (undefined1 *)0x92:
  case (undefined1 *)0x99:
  case (undefined1 *)0xb3:
  case (undefined1 *)0xba:
  case (undefined1 *)0x46:
  case (undefined1 *)0x4e:
  case (undefined1 *)0x89:
  case (undefined1 *)0x8d:
  case (undefined1 *)0xd4:
    puVar9 = (undefined1 *)0x656d;
switchD_100beb5ac_caseD_2a:
    puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffff0000ffff | 0x73730000);
switchD_100beb5ac_caseD_10:
    puVar9 = (undefined1 *)((ulong)puVar9 & 0xffff0000ffffffff | 0x676100000000);
switchD_100beb5ac_caseD_64:
    puVar9 = (undefined1 *)((ulong)puVar9 | 0x65000000000000);
switchD_100beb5ac_caseD_36:
    break;
  case (undefined1 *)0x5:
  case (undefined1 *)0x21:
  case (undefined1 *)0x27:
  case (undefined1 *)0xa1:
  case (undefined1 *)0xd:
  case (undefined1 *)0x1c:
  case (undefined1 *)0x22:
  case (undefined1 *)0x44:
  case (undefined1 *)0x4c:
  case (undefined1 *)0x67:
  case (undefined1 *)0x6e:
  case (undefined1 *)0x9c:
  case (undefined1 *)0xc4:
    puVar9 = (undefined1 *)0x6164;
switchD_100beb5ac_caseD_54:
    puVar9 = (undefined1 *)(ulong)((uint)puVar9 & 0xffff | 0x61740000);
switchD_100beb5ac_caseD_13:
    break;
  case (undefined1 *)0x6:
  case (undefined1 *)0x2e:
  case (undefined1 *)0x7:
    puVar9 = (undefined1 *)0x726f;
switchD_100beb5ac_caseD_dd:
    puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffff0000ffff | 0x67690000);
switchD_100beb5ac_caseD_39:
    puVar9 = (undefined1 *)((ulong)puVar9 & 0xffff0000ffffffff | 0x6e6900000000);
    break;
  case (undefined1 *)0xa:
  case (undefined1 *)0x11:
  case (undefined1 *)0x18:
  case (undefined1 *)0x1f:
  case (undefined1 *)0x25:
  case (undefined1 *)0x65:
  case (undefined1 *)0x6c:
  case (undefined1 *)0x93:
  case (undefined1 *)0x98:
  case (undefined1 *)0x9f:
  case (undefined1 *)0xc2:
  case (undefined1 *)0xda:
    goto switchD_100beb5ac_caseD_a;
  case (undefined1 *)0xc:
    goto switchD_100beb5ac_caseD_c;
  case (undefined1 *)0xe:
  case (undefined1 *)0x15:
  case (undefined1 *)0x95:
    goto switchD_100beb5ac_caseD_e;
  case (undefined1 *)0x10:
  case (undefined1 *)0x17:
  case (undefined1 *)0x1e:
  case (undefined1 *)0x24:
  case (undefined1 *)0x47:
  case (undefined1 *)0x4f:
  case (undefined1 *)0x97:
  case (undefined1 *)0x9e:
  case (undefined1 *)0xd5:
    goto switchD_100beb5ac_caseD_10;
  case (undefined1 *)0x13:
  case (undefined1 *)0x1a:
  case (undefined1 *)0x28:
  case (undefined1 *)0x3b:
  case (undefined1 *)0x43:
  case (undefined1 *)0x8e:
  case (undefined1 *)0x9a:
  case (undefined1 *)0xa2:
  case (undefined1 *)0xaf:
    goto switchD_100beb5ac_caseD_13;
  case (undefined1 *)0x14:
  case (undefined1 *)0x1b:
  case (undefined1 *)0x3a:
  case (undefined1 *)0x42:
  case (undefined1 *)0x9b:
    goto switchD_100beb5ac_caseD_14;
  case (undefined1 *)0x2a:
  case (undefined1 *)0x30:
  case (undefined1 *)0x57:
  case (undefined1 *)0x5e:
  case (undefined1 *)0xa4:
  case (undefined1 *)0xb7:
  case (undefined1 *)0xbb:
  case (undefined1 *)0xcd:
    goto switchD_100beb5ac_caseD_2a;
  case (undefined1 *)0x34:
  case (undefined1 *)0x3c:
    goto switchD_100beb5ac_caseD_34;
  case (undefined1 *)0x36:
  case (undefined1 *)0x3e:
  case (undefined1 *)0xaa:
    goto switchD_100beb5ac_caseD_36;
  case (undefined1 *)0x37:
  case (undefined1 *)0x3f:
  case (undefined1 *)0x7a:
  case (undefined1 *)0x80:
  case (undefined1 *)0xab:
  case (undefined1 *)0xb8:
    goto switchD_100beb5ac_caseD_37;
  case (undefined1 *)0x38:
  case (undefined1 *)0x40:
  case (undefined1 *)0x66:
  case (undefined1 *)0x6d:
  case (undefined1 *)0x88:
  case (undefined1 *)0x8c:
  case (undefined1 *)0xac:
  case (undefined1 *)0xc3:
  case (undefined1 *)0xd3:
    goto switchD_100beb5ac_caseD_38;
  case (undefined1 *)0x39:
  case (undefined1 *)0x41:
  case (undefined1 *)0xad:
    goto switchD_100beb5ac_caseD_39;
  case (undefined1 *)0x49:
  case (undefined1 *)0x51:
  case (undefined1 *)0x5a:
  case (undefined1 *)0x61:
  case (undefined1 *)0xb0:
  case (undefined1 *)0xcb:
  case (undefined1 *)0xdc:
    goto switchD_100beb5ac_caseD_49;
  case (undefined1 *)0x54:
    goto switchD_100beb5ac_caseD_54;
  case (undefined1 *)0x62:
  case (undefined1 *)0x69:
  case (undefined1 *)0xa8:
  case (undefined1 *)0xbf:
    goto switchD_100beb5ac_caseD_62;
  case (undefined1 *)0x64:
  case (undefined1 *)0x6b:
  case (undefined1 *)0x7c:
  case (undefined1 *)0x82:
  case (undefined1 *)0xb5:
  case (undefined1 *)0xbd:
  case (undefined1 *)0xc1:
  case (undefined1 *)0xce:
  case (undefined1 *)0xd9:
    goto switchD_100beb5ac_caseD_64;
  case (undefined1 *)0x68:
  case (undefined1 *)0x6f:
  case (undefined1 *)0xae:
  case (undefined1 *)0xc5:
    goto switchD_100beb5ac_caseD_68;
  case (undefined1 *)0x7e:
  case (undefined1 *)0x84:
  case (undefined1 *)0xb2:
    goto switchD_100beb5ac_caseD_7e;
  case (undefined1 *)0x7f:
  case (undefined1 *)0x85:
  case (undefined1 *)0x91:
  case (undefined1 *)0xd8:
    goto switchD_100beb5ac_caseD_7f;
  case (undefined1 *)0xdd:
    goto switchD_100beb5ac_caseD_dd;
  case (undefined1 *)0xe0:
    goto switchD_100beb5ac_caseD_e0;
  case (undefined1 *)0xe1:
  case (undefined1 *)0xe7:
    goto switchD_100beb5ac_caseD_e1;
  case (undefined1 *)0xe2:
    goto switchD_100beb5ac_caseD_e2;
  case (undefined1 *)0xe3:
  case (undefined1 *)0xf0:
    goto switchD_100beb5ac_caseD_e3;
  case (undefined1 *)0xe4:
    goto switchD_100beb5ac_caseD_e4;
  case (undefined1 *)0xe5:
  case (undefined1 *)0xf1:
    puVar2 = &stack0xffffffffffffffa0;
    uVar4 = 0x65707974;
    puVar5 = &DAT_65707974;
    puVar13 = (undefined1 *)0x7470697263737974;
    pcVar17 = (code *)&DAT_eb000000006e6f69;
    pcVar18 = (code *)&DAT_e400000000000000;
    param_2 = param_2 & 0xff;
    pbVar12 = &switchD_100beb878::switchdataD_100c9f8d5;
    switch(param_2) {
    case 0:
    case 0x80:
      break;
    default:
      pcVar18 = (code *)&DAT_e700000000000000;
      puVar5 = (undefined1 *)0x6168;
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
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x646e0000);
      goto switchD_100beb878_caseD_eb;
    case 2:
    case 9:
    case 0xf:
    case 0x32:
    case 0x3a:
    case 0x82:
    case 0x89:
    case 0xc0:
      puVar5 = (undefined1 *)0x7973;
    case 0x4f:
    case 0x56:
    case 0x67:
    case 0x6d:
    case 0xa0:
    case 0xa8:
    case 0xac:
    case 0xb9:
    case 0xc4:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x746e0000);
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
      puVar5 = (undefined1 *)0x6564;
    case 0x22:
    case 0x2a:
    case 0x65:
    case 0x6b:
    case 0x96:
    case 0xa3:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x697263730000);
      goto switchD_100beb878_caseD_18;
    case 4:
    case 0x41:
    case 0x48:
    case 0x7d:
    case 0x84:
    case 0x9e:
    case 0xa5:
      uVar4 = 0x6164;
    case 0x31:
    case 0x39:
    case 0x74:
    case 0x78:
    case 0xbf:
      puVar5 = (undefined1 *)(ulong)(uVar4 & 0xffff | 0x61740000);
      goto switchD_100beb878_caseD_15;
    case 5:
    case 0x13:
    case 0x26:
    case 0x2e:
    case 0x79:
    case 0x85:
    case 0x8d:
    case 0x9a:
      puVar5 = (undefined1 *)0x6568;
    case 0x19:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x6c5f706c0000);
      goto switchD_100beb878_caseD_c8;
    case 6:
    case 0x25:
    case 0x2d:
    case 0x86:
    case 0xef:
      FUN_100beedb4();
      param_2 = extraout_x8_00;
      pbVar12 = extraout_x9_00;
    case 0x4d:
    case 0x54:
    case 0x93:
    case 0xaa:
      puVar5 = (undefined1 *)((ulong)pbVar12 | param_2);
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
      puVar13 = (undefined1 *)0x7470656c75647974;
      goto switchD_100beb970_caseD_3f;
    case 0xeb:
      goto switchD_100beb878_caseD_eb;
    }
    goto switchD_100beb878_caseD_0;
  case (undefined1 *)0xe8:
  case (undefined1 *)0xeb:
    goto switchD_100beb5ac_caseD_e8;
  case (undefined1 *)0xe9:
    goto switchD_100beb5ac_caseD_e9;
  case (undefined1 *)0xea:
    goto switchD_100beb5ac_caseD_ea;
  case (undefined1 *)0xec:
    goto switchD_100beb5ac_caseD_ec;
  case (undefined1 *)0xed:
  case (undefined1 *)0xef:
    goto switchD_100beb5ac_caseD_ed;
  case (undefined1 *)0xee:
    goto switchD_100beb5ac_caseD_ee;
  case (undefined1 *)0xf8:
    puVar11 = (undefined1 *)0xd000000000000010;
  case (undefined1 *)0xe6:
    FUN_100beebf0(puVar11);
    puVar11 = extraout_x8;
    pbVar12 = extraout_x9;
    puVar13 = extraout_x10;
switchD_100beb5ac_caseD_e0:
    pcVar14 = "BODY_PARSE_ERROR";
    in_x12 = "MAYBE_JSON_TRUNCATED";
    uVar4 = (uint)puVar9;
    if (((ulong)puVar9 & 0xff) == 0) {
      pbVar16 = (byte *)0x8000000100dc6f20;
switchD_100beb5ac_caseD_e8:
      puVar9 = puVar11 + 4;
    }
    else {
      puVar9 = puVar13;
      pbVar16 = pbVar12;
      if ((uVar4 & 0xff) != 1) {
        puVar9 = puVar11;
        pbVar16 = (byte *)0x8000000100dc6f50;
      }
    }
switchD_100beb5ac_caseD_ec:
    in_w13 = uVar7 & 0xff;
    in_ZR = in_w13 == 0;
switchD_100beb5ac_caseD_e9:
    if ((bool)in_ZR) {
      unaff_x20 = (byte *)((ulong)(in_x12 + -0x20) | 0x8000000000000000);
switchD_100beb5ac_caseD_ee:
      puVar5 = puVar11 + 4;
    }
    else {
      pcVar14 = pcVar14 + -0x20;
switchD_100beb5ac_caseD_e1:
      pcVar14 = (char *)((ulong)pcVar14 | 0x8000000000000000);
      in_ZR = in_w13 == 1;
      puVar5 = puVar13;
      if (!(bool)in_ZR) {
        puVar5 = puVar11;
      }
switchD_100beb5ac_caseD_ea:
      unaff_x20 = pbVar12;
      if (!(bool)in_ZR) {
        unaff_x20 = (byte *)pcVar14;
      }
switchD_100beb5ac_caseD_ed:
    }
    in_ZR = puVar9 == puVar5;
switchD_100beb5ac_caseD_e2:
    if ((bool)in_ZR && pbVar16 == unaff_x20) {
      unaff_x21 = (undefined1 *)0x1;
    }
    else {
      FUN_100beeb44();
      unaff_x21 = puVar9;
switchD_100beb5ac_caseD_e4:
    }
switchD_100beb5ac_caseD_e3:
    FUN_100b6f838();
    FUN_100b6f860();
    puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
    FUN_100b56e60(puVar5);
    return puVar5;
  }
switchD_100beb5ac_caseD_68:
  puVar11 = (undefined1 *)((ulong)uVar7 & 0xff);
  pbVar12 = (byte *)"SentryTypedSwizzle";
  goto switchD_100beb5ac_caseD_14;
switchD_100bebcb0_caseD_aa:
  pbVar12 = (byte *)((ulong)pbVar12 | 0xec00000000000000);
switchD_100bebcb0_caseD_a4:
  UNRECOVERED_JUMPTABLE = (code *)&DAT_e600000000000000;
  puVar5 = puVar11;
  if (!(bool)in_ZR) {
    puVar5 = (undefined1 *)0x6e6f69676572;
  }
code_r0x000100bebe14:
  if (!(bool)in_ZR) {
    pbVar12 = (byte *)UNRECOVERED_JUMPTABLE;
  }
LAB_100bebe20:
  if (puVar9 == puVar5 && pcVar17 == (code *)pbVar12) {
switchD_100bebcb0_caseD_ac:
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb44();
    unaff_x21 = puVar9;
  }
  goto switchD_100bebcb0_caseD_b0;
code_r0x000100bec190:
  puVar11 = (undefined1 *)((ulong)puVar11 | 0x687370610000);
code_r0x000100bec198:
  puVar11 = (undefined1 *)((ulong)puVar11 | 0x746f000000000000);
code_r0x000100bec19c:
  puVar9 = puVar13;
  pcVar17 = (code *)pbVar12;
  if (!(bool)in_ZR) {
    puVar9 = puVar11;
    pcVar17 = UNRECOVERED_JUMPTABLE;
  }
LAB_100bec1b0:
  if ((uVar7 & 0xff) == 0) {
LAB_100bec1f4:
    pcVar18 = (code *)&DAT_e600000000000000;
  }
  else {
    in_ZR = (uVar7 & 0xff) == 1;
    puVar13 = (undefined1 *)0x7265747369676572;
    pbVar12 = (byte *)0xe900000000000073;
switchD_100bec0c4_caseD_bb:
    UNRECOVERED_JUMPTABLE = (code *)&DAT_e800000000000000;
switchD_100bec0c4_caseD_ff:
    puVar11 = (undefined1 *)0x6e73;
code_r0x000100bec1dc:
    puVar11 = (undefined1 *)((ulong)puVar11 | 0x687370610000);
code_r0x000100bec1e4:
    puVar5 = puVar13;
    pcVar18 = (code *)pbVar12;
    if (!(bool)in_ZR) {
      puVar5 = (undefined1 *)((ulong)puVar11 | 0x746f000000000000);
      pcVar18 = UNRECOVERED_JUMPTABLE;
    }
switchD_100bebe90_caseD_e1:
  }
LAB_100bec1f8:
  in_ZR = false;
  if (puVar9 == puVar5) {
    in_ZR = pcVar17 == pcVar18;
  }
code_r0x000100bec200:
  if ((bool)in_ZR) {
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb44();
switchD_100bec0c4_caseD_9d:
    unaff_x21 = puVar9;
code_r0x000100bec20c:
  }
  FUN_100b6f838();
  goto code_r0x000100bec218;
code_r0x000100bec060:
  puVar9 = (undefined1 *)(ulong)((uint)puVar9 & 0xffff | 0x79640000);
switchD_100bebe90_caseD_9f:
  goto LAB_100bec0ac;
switchD_100bebe90_caseD_a1:
  puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffff0000ffff | 0x65760000);
code_r0x000100bec07c:
  puVar9 = (undefined1 *)((ulong)puVar9 & 0xffff0000ffffffff | 0x6c00000000);
code_r0x000100bec080:
  goto LAB_100bec0ac;
LAB_100bec094:
  puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffff | 0x7974697200000000);
code_r0x000100bec09c:
code_r0x000100bec0a0:
code_r0x000100bec0a4:
code_r0x000100bec0a8:
  goto LAB_100bec0ac;
switchD_100bebcb0_caseD_b0:
  FUN_100b6f838();
  goto switchD_100bebcb0_caseD_ad;
switchD_100bebcb0_caseD_59:
  puVar5 = (undefined1 *)(ulong)((uint)puVar5 & 0xffff | 0x6f0000);
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_a:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x6d670000);
switchD_100bebcb0_caseD_1b:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x6e6500000000);
switchD_100bebcb0_caseD_b:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x74000000000000);
switchD_100bebcb0_caseD_28:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_1f:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6572000000000000);
switchD_100bebcb0_caseD_65:
  pcVar18 = (code *)0x7373;
switchD_100bebcb0_caseD_8:
  pcVar18 = (code *)((ulong)pcVar18 & 0xffffffffffff | 0xea00000000000000);
switchD_100bebcb0_caseD_18:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_f:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x72650000);
switchD_100bebcb0_caseD_43:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x616e00000000);
switchD_100bebcb0_caseD_d:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x656d000000000000);
switchD_100bebcb0_caseD_29:
  goto switchD_100bebcb0_caseD_0;
switchD_100bebcb0_caseD_c4:
  puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x6c00000000);
  goto switchD_100bebcb0_caseD_42;
switchD_100beb878_caseD_c8:
  puVar5 = (undefined1 *)((ulong)puVar5 | 0x6e69000000000000);
switchD_100beb878_caseD_24:
  param_2 = 0xe900000000000063;
switchD_100beb878_caseD_53:
  pcVar18 = (code *)(param_2 | 8);
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_15:
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_18:
  puVar5 = (undefined1 *)((ulong)puVar5 | 0x7470000000000000);
switchD_100beb878_caseD_46:
  pcVar18 = (code *)0x6f69;
switchD_100beb878_caseD_c:
  pcVar18 = (code *)((ulong)pcVar18 | 0x6e0000);
switchD_100beb878_caseD_7:
  pcVar18 = (code *)((ulong)pcVar18 & 0xffffffffffff | 0xeb00000000000000);
switchD_100beb878_caseD_3f:
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_21:
  puVar5 = (undefined1 *)((ulong)puVar5 | 0x656800000000);
switchD_100beb878_caseD_68:
  puVar5 = (undefined1 *)((ulong)puVar5 | 0x6974000000000000);
switchD_100beb878_caseD_16:
  pcVar18 = (code *)0x63;
switchD_100beb878_caseD_6a:
  pcVar18 = (code *)((ulong)pcVar18 & 0xffffffffffff | 0xe900000000000000);
switchD_100beb878_caseD_34:
  goto switchD_100beb878_caseD_0;
switchD_100beb878_caseD_eb:
  puVar5 = (undefined1 *)((ulong)puVar5 | 0x656c00000000);
switchD_100beb878_caseD_69:
  puVar5 = (undefined1 *)((ulong)puVar5 | 0x64000000000000);
  goto switchD_100beb878_caseD_23;
switchD_100beb5ac_caseD_14:
  pbVar12 = pbVar12 + 0x8c7;
switchD_100beb5ac_caseD_62:
  puVar13 = &UNK_100beb644;
switchD_100beb5ac_caseD_e:
  pcVar14 = (char *)(ulong)pbVar12[(long)puVar11];
switchD_100beb5ac_caseD_34:
                    /* WARNING: Could not recover jumptable at 0x000100beb640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(puVar13 + (long)pcVar14 * 4))();
  return puVar9;
code_r0x000100bec218:
  FUN_100b6f860();
  puVar9 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
code_r0x000100bec220:
  FUN_100b56e60(puVar9);
  return puVar9;
switchD_100bebcb0_caseD_ad:
  FUN_100b6f860();
  puVar9 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
switchD_100bebcb0_caseD_a5:
  FUN_100b56e60(puVar9);
  return puVar9;
code_r0x000100bec0c0:
  UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (long)puVar11 * 4;
switchD_100bec0c4_switchD:
                    /* WARNING: Could not recover jumptable at 0x000100bec0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return puVar9;
code_r0x000100bec234:
  FUN_100beefb0();
  puVar5 = &DAT_7a69735f79646f62;
  UNRECOVERED_JUMPTABLE =
       (code *)(&UNK_100bec274 + (ulong)(&BYTE_100c9f922)[(ulong)puVar9 & 0xff] * 4);
code_r0x000100bec264:
                    /* WARNING: Could not recover jumptable at 0x000100bec270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(puVar5);
  return puVar5;
switchD_100beb878_caseD_23:
switchD_100beb878_caseD_0:
  in_ZR = puVar13 == puVar5;
switchD_100beb878_caseD_1f:
  uVar7 = (uint)puVar13;
  if ((bool)in_ZR && pcVar18 == (code *)&DAT_eb000000006e6f69) {
    uVar7 = 1;
  }
  else {
    FUN_100beeb44();
  }
  FUN_100b6f838();
  FUN_100b6f860();
  puVar5 = (undefined1 *)(ulong)(uVar7 & 1);
  FUN_100b56e60(puVar5);
  return puVar5;
switchD_100bebcb0_caseD_42:
switchD_100bebcb0_caseD_0:
  if (puVar9 == puVar5 && pcVar17 == pcVar18) {
switchD_100bebcb0_caseD_ea:
    uVar7 = 1;
  }
  else {
    FUN_100beeb44();
    uVar7 = (uint)puVar9;
  }
  FUN_100b6f838();
  FUN_100b6f860();
  puVar9 = (undefined1 *)(ulong)(uVar7 & 1);
switchD_100bebcb0_caseD_e8:
  FUN_100b56e60(puVar9);
  return puVar9;
switchD_100bec0c4_caseD_23:
  puVar5 = (undefined1 *)(ulong)((uint)puVar5 & 0xffff | 0x79640000);
switchD_100bec0c4_caseD_0:
  if (puVar9 == puVar5 && pcVar18 == pcVar17) {
LAB_100bec130:
    puVar9 = (undefined1 *)0x1;
  }
  else {
    FUN_100beeb6c();
  }
  FUN_100b6f860();
  FUN_100b6f838();
  unaff_x21 = puVar9;
code_r0x000100bec13c:
  puVar5 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
  FUN_100b56e60(puVar5);
  return puVar5;
switchD_100beb970_caseD_3f:
switchD_100beb970_caseD_0:
  pcVar18 = (code *)&DAT_e500000000000000;
  puVar11 = (undefined1 *)((ulong)uVar7 & 0xff);
  pbVar12 = &switchD_100beb9e8::switchdataD_100c9f8e2;
  UNRECOVERED_JUMPTABLE =
       (code *)((ulong)(&switchD_100beb9e8::switchdataD_100c9f8e2)[(long)puVar11] * 4 + 0x100beb9ec)
  ;
  bVar3 = (bool)in_ZR;
  puVar9 = puVar13;
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
    puVar5 = (undefined1 *)0x656d;
  case (undefined1 *)0x42:
  case (undefined1 *)0x49:
  case (undefined1 *)0x5a:
  case (undefined1 *)0x60:
  case (undefined1 *)0x93:
  case (undefined1 *)0x9b:
  case (undefined1 *)0x9f:
  case (undefined1 *)0xac:
  case (undefined1 *)0xb7:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x68630000);
switchD_100beb9e8_caseD_14:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x6e6100000000);
switchD_100beb878_caseD_d5:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x7369000000000000);
switchD_100beb878_caseD_d8:
    FUN_100beed74();
    puVar11 = extraout_x8_01;
    pbVar12 = extraout_x9_01;
switchD_100beb9e8_caseD_5d:
    pcVar18 = (code *)((ulong)pbVar12 | (ulong)puVar11);
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
    pcVar18 = (code *)&DAT_e600000000000000;
  case (undefined1 *)0x15:
  case (undefined1 *)0x1d:
  case (undefined1 *)0x58:
  case (undefined1 *)0x5e:
  case (undefined1 *)0x89:
  case (undefined1 *)0x96:
    puVar5 = (undefined1 *)0x6f6d;
switchD_100beb878_caseD_cd:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x75640000);
switchD_100beb9e8_caseD_b:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x656c00000000);
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
    puVar5 = (undefined1 *)0x6874;
  case (undefined1 *)0xde:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x65720000);
switchD_100beb970_caseD_79:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x646100000000);
switchD_100beb970_caseD_18:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x695f000000000000);
switchD_100beb878_caseD_d7:
    pcVar18 = (code *)0x64;
switchD_100beb878_caseD_d4:
    pcVar18 = (code *)((ulong)pcVar18 & 0xffffffffffff | 0xe900000000000000);
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
    puVar2 = &stack0xffffffffffffff70;
switchD_100beb9e8_caseD_12:
    *(undefined1 **)(puVar2 + 0x10) = &DAT_e500000000000000;
    *(undefined1 **)(puVar2 + 0x18) = &DAT_eb000000006e6f69;
    *(undefined1 ***)(puVar2 + 0x20) = &puStack_40;
    *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
    puVar1 = puVar2 + 0x20;
    puVar9 = &DAT_64695f6775626564;
    pcVar17 = (code *)&DAT_e800000000000000;
    puVar11 = (undefined1 *)((ulong)puVar13 & 0xff);
    pbVar12 = &BYTE_100c9f8e8;
    uVar15 = (ulong)(&BYTE_100c9f8e8)[(long)puVar11];
    UNRECOVERED_JUMPTABLE = (code *)(uVar15 * 4 + 0x100bebab8);
    puVar5 = puVar9;
    pcVar14 = (char *)pbVar12;
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
      puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffffffff | 0x6973000000000000);
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
      puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffffffff | 0x6461000000000000);
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
      puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffffffff | 0x6d76000000000000);
code_r0x000100bebac8:
code_r0x000100bebacc:
code_r0x000100bebad0:
code_r0x000100bebad4:
switchD_100beb970_caseD_d1:
code_r0x000100bebb1c:
      puVar11 = (undefined1 *)((ulong)uVar7 & 0xff);
      pcVar14 = "SentryTypedSwizzle";
switchD_100beb970_caseD_d2:
      pbVar12 = (byte *)(pcVar14 + 0x8ee);
code_r0x000100bebb28:
      UNRECOVERED_JUMPTABLE = (code *)0x100bebb38;
switchD_100beb970_caseD_c6:
      uVar15 = (ulong)pbVar12[(long)puVar11];
switchD_100beb970_caseD_fb:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + uVar15 * 4;
switchD_100beb9e8_caseD_c4:
                    /* WARNING: Could not recover jumptable at 0x000100bebb34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return puVar9;
    case (undefined1 *)0x5:
    case (undefined1 *)0xb:
    case (undefined1 *)0x22:
    case (undefined1 *)0x2a:
    case (undefined1 *)0x7f:
      puVar9 = (undefined1 *)0x6f63;
    case (undefined1 *)0x33:
    case (undefined1 *)0x6c:
    case (undefined1 *)0xb6:
      puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffff0000ffff | 0x65640000);
code_r0x000100bebb0c:
      puVar9 = (undefined1 *)((ulong)puVar9 & 0xffff0000ffffffff | 0x665f00000000);
code_r0x000100bebb10:
      puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffffffff | 0x6c69000000000000);
switchD_100beb970_caseD_ce:
      FUN_100beefb0(puVar9);
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
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6d76000000000000);
      pcVar18 = (code *)0xec00000072646461;
      goto switchD_100beb9e8_caseD_cc;
    case (undefined1 *)0x79:
      goto code_r0x000100bebb0c;
    case (undefined1 *)0xb5:
      goto switchD_100beb970_caseD_d2;
    case (undefined1 *)0xb8:
    case (undefined1 *)0xe8:
      pcVar17 = (code *)&DAT_e500000000000000;
      puVar9 = (undefined1 *)0x6c69616d65;
      break;
    case (undefined1 *)0xb9:
    case (undefined1 *)0xbf:
    case (undefined1 *)0xe9:
    case (undefined1 *)0xf2:
      puVar9 = (undefined1 *)0x65726464615f6564;
    case (undefined1 *)0xc2:
      pcVar17 = (code *)0x7373;
code_r0x000100bebc5c:
      pcVar17 = (code *)((ulong)pcVar17 & 0xffffffffffff | 0xea00000000000000);
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
      puVar9 = (undefined1 *)0x6f6567;
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
      puVar9 = (undefined1 *)0x6469616e75626564;
    case (undefined1 *)0xc4:
      puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffffffff | 0x656d000000000000);
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
      puVar9 = (undefined1 *)0x61746164;
code_r0x000100bebc70:
      break;
    case (undefined1 *)0xd0:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)(&BYTE_100c9f8e8)[(long)puVar11] * 4;
code_r0x000100bebc00:
                    /* WARNING: Could not recover jumptable at 0x000100bebc00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return puVar9;
    case (undefined1 *)0xee:
      goto switchD_100beb9e8_caseD_fc;
    case (undefined1 *)0xef:
      pcVar17 = (code *)&DAT_e400000000000000;
      puVar9 = (undefined1 *)0x656d616e;
code_r0x000100bebc80:
      break;
    case (undefined1 *)0xf6:
      break;
    case (undefined1 *)0xfc:
      FUN_100beedd4();
switchD_100beb9e8_caseD_c6:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6461000000000000);
switchD_100beb9e8_caseD_ca:
      puVar11 = (undefined1 *)0x657a;
switchD_100beb9e8_caseD_c7:
      pcVar18 = (code *)(((ulong)puVar11 | 0xea00000000000000) + 0xcea);
switchD_100beb9e8_caseD_bf:
      goto switchD_100beb9e8_caseD_cc;
    case (undefined1 *)0xfd:
      goto code_r0x000100bebe14;
    case (undefined1 *)0xfe:
      puVar5 = (undefined1 *)0x69735f6775626564;
      pcVar18 = (code *)0xea0000000000657a;
switchD_100beb9e8_caseD_cc:
      in_ZR = false;
      if (puVar9 == puVar5) {
        in_ZR = pcVar17 == pcVar18;
      }
switchD_100beb9e8_caseD_c0:
      if ((bool)in_ZR) {
switchD_100beb9e8_caseD_c2:
        puVar9 = (undefined1 *)0x1;
      }
      else {
switchD_100beb9e8_caseD_f5:
        FUN_100beeb44();
      }
      FUN_100b6f838();
      unaff_x21 = puVar9;
switchD_100beb9e8_caseD_c1:
      FUN_100b6f860();
      puVar9 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
switchD_100beb9e8_caseD_fc:
      FUN_100b56e60();
      return puVar9;
    }
    pcVar18 = (code *)&SUB_e200000000000000;
    puVar5 = &SUB_00006469;
    puVar11 = (undefined1 *)((ulong)uVar7 & 0xff);
code_r0x000100bebc9c:
    pbVar12 = &switchD_100bebcb0::switchdataD_100c9f8fc;
    UNRECOVERED_JUMPTABLE =
         (code *)((long)(ulong)(&switchD_100bebcb0::switchdataD_100c9f8fc)[(long)puVar11] * 4 +
                 0x100bebcb4);
    switch(puVar11) {
    case (undefined1 *)0x0:
      goto switchD_100bebcb0_caseD_0;
    default:
      pcVar18 = (code *)&DAT_e500000000000000;
      puVar5 = (undefined1 *)0x6d65;
    case (undefined1 *)0xc:
    case (undefined1 *)0x14:
    case (undefined1 *)0x1c:
    case (undefined1 *)0x23:
    case (undefined1 *)0x64:
    case (undefined1 *)0x6a:
    case (undefined1 *)0x78:
    case (undefined1 *)0x80:
    case (undefined1 *)0x93:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x69610000);
      goto switchD_100bebcb0_caseD_c4;
    case (undefined1 *)0x2:
    case (undefined1 *)0x6e:
      pcVar18 = (code *)&DAT_e800000000000000;
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
      puVar5 = (undefined1 *)0x7375;
      goto switchD_100bebcb0_caseD_f;
    case (undefined1 *)0x3:
    case (undefined1 *)0x3e:
    case (undefined1 *)0x44:
    case (undefined1 *)0x6f:
    case (undefined1 *)0x7c:
      puVar5 = (undefined1 *)0x615f7069;
    case (undefined1 *)0xe:
    case (undefined1 *)0x16:
    case (undefined1 *)0x6b:
      puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x646400000000);
      goto switchD_100bebcb0_caseD_1f;
    case (undefined1 *)0x4:
    case (undefined1 *)0x2a:
    case (undefined1 *)0x31:
    case (undefined1 *)0x4c:
    case (undefined1 *)0x50:
    case (undefined1 *)0x70:
    case (undefined1 *)0x87:
    case (undefined1 *)0x97:
      pcVar18 = (code *)&DAT_e700000000000000;
    case (undefined1 *)0x1a:
    case (undefined1 *)0x21:
    case (undefined1 *)0x56:
    case (undefined1 *)0x5d:
    case (undefined1 *)0x77:
    case (undefined1 *)0x7e:
      puVar5 = (undefined1 *)0x6573;
      goto switchD_100bebcb0_caseD_a;
    case (undefined1 *)0x5:
    case (undefined1 *)0x71:
      pcVar18 = (code *)&DAT_e400000000000000;
      puVar5 = (undefined1 *)0x616e;
    case (undefined1 *)0x2c:
    case (undefined1 *)0x33:
    case (undefined1 *)0x72:
    case (undefined1 *)0x89:
      puVar5 = (undefined1 *)(ulong)((uint)puVar5 & 0xffff | 0x656d0000);
      goto switchD_100bebcb0_caseD_0;
    case (undefined1 *)0x6:
    case (undefined1 *)0x5f:
    case (undefined1 *)0xc8:
      pcVar18 = (code *)0xe300000000000000;
    case (undefined1 *)0x26:
    case (undefined1 *)0x2d:
    case (undefined1 *)0x6c:
    case (undefined1 *)0x83:
    case (undefined1 *)0xfc:
      puVar5 = (undefined1 *)0x6567;
      goto switchD_100bebcb0_caseD_59;
    case (undefined1 *)0x7:
    case (undefined1 *)0x52:
    case (undefined1 *)0x5e:
    case (undefined1 *)0x66:
    case (undefined1 *)0x73:
      pcVar18 = (code *)&DAT_e400000000000000;
      puVar5 = (undefined1 *)0x61746164;
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
      puVar13 = (undefined1 *)((ulong)uVar7 & 0xff);
      pbVar12 = &BYTE_100c9f90c;
      puVar11 = (undefined1 *)(ulong)(&BYTE_100c9f90c)[(long)puVar13];
      UNRECOVERED_JUMPTABLE = (code *)(&UNK_100bebf08 + (long)puVar11 * 4);
      switch(puVar13) {
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
        pcVar17 = (code *)&DAT_e400000000000000;
      case (undefined1 *)0x18:
      case (undefined1 *)0x1f:
      case (undefined1 *)0x30:
      case (undefined1 *)0x36:
      case (undefined1 *)0x69:
      case (undefined1 *)0x71:
      case (undefined1 *)0x75:
      case (undefined1 *)0x82:
      case (undefined1 *)0x8d:
        puVar5 = (undefined1 *)0x616e;
LAB_100bebf34:
        puVar5 = (undefined1 *)(ulong)((uint)puVar5 & 0xffff | 0x656d0000);
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
        pcVar17 = (code *)&DAT_e500000000000000;
      case (undefined1 *)0xb4:
      case (undefined1 *)0xde:
      case (undefined1 *)0xe6:
      case (undefined1 *)0xe8:
        puVar5 = (undefined1 *)0x6176;
switchD_100bebe90_caseD_1e:
        puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffff0000ffff | 0x756c0000);
switchD_100bebe90_caseD_51:
        puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x6500000000);
code_r0x000100bebf20:
        break;
      case (undefined1 *)0x5:
      case (undefined1 *)0xe:
      case (undefined1 *)0x15:
      case (undefined1 *)0x64:
      case (undefined1 *)0x7f:
      case (undefined1 *)0x90:
        pcVar17 = (code *)&DAT_e400000000000000;
      case (undefined1 *)0x19:
      case (undefined1 *)0x20:
      case (undefined1 *)0x47:
      case (undefined1 *)0x4c:
      case (undefined1 *)0x53:
      case (undefined1 *)0x76:
      case (undefined1 *)0x8e:
        puVar5 = (undefined1 *)0x7974;
code_r0x000100bebf4c:
        puVar5 = (undefined1 *)(ulong)((uint)puVar5 & 0xffff | 0x65700000);
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
        *(code **)(puVar2 + -0x20) = pcVar18;
        *(code **)(puVar2 + -0x18) = pcVar17;
        *(undefined1 **)(puVar2 + -0x10) = puVar1;
        *(undefined8 *)(puVar2 + -8) = unaff_x30;
        *(undefined1 **)(puVar2 + -0x40) = puVar9;
        *(ulong *)(puVar2 + -0x38) = CONCAT44(uVar8,uVar7);
        *(undefined1 **)(puVar2 + -0x50) = puVar5;
        *(undefined8 *)(puVar2 + -0x48) = param_4;
      case (undefined1 *)0xda:
      case (undefined1 *)0xee:
      case (undefined1 *)0xf6:
      case (undefined1 *)0xfe:
        FUN_100bc9c68();
        pcVar17 = (code *)CONCAT44(uVar8,uVar7);
        unaff_x21 = puVar9;
code_r0x000100bebfbc:
        FUN_100bc9c68();
        if (unaff_x21 == puVar9 && pcVar17 == (code *)CONCAT44(uVar8,uVar7)) {
          uVar7 = 1;
        }
        else {
          FUN_100beeb44(unaff_x21);
          uVar7 = (uint)unaff_x21;
        }
        FUN_100b6f838();
        FUN_100b6f860();
        return (undefined1 *)(ulong)(uVar7 & 1);
      case (undefined1 *)0x4f:
      case (undefined1 *)0xb8:
code_r0x000100bebf88:
code_r0x000100bebf8c:
        FUN_100b56e60(puVar9);
        return puVar9;
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
        puVar5 = (undefined1 *)0x6576656c;
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
        puVar9 = puVar5;
        pcVar17 = (code *)&DAT_e600000000000000;
        goto LAB_100bec1b0;
      case (undefined1 *)0xf0:
        goto code_r0x000100bec13c;
      case (undefined1 *)0xf1:
        goto LAB_100bec1f8;
      case (undefined1 *)0xf9:
        puVar9 = (undefined1 *)((ulong)puVar9 & 0xffff00000000ffff | 0x65696b6f0000);
        goto switchD_100bec0c4_caseD_bc;
      case (undefined1 *)0xfa:
        puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffffffff | 0x7473000000000000);
        goto LAB_100bec2f8;
      case (undefined1 *)0xfb:
        goto code_r0x000100bec304;
      }
LAB_100bebf60:
      bVar3 = puVar9 == puVar5;
code_r0x000100bebf64:
      in_ZR = false;
      if (bVar3) {
        in_ZR = pcVar18 == pcVar17;
      }
code_r0x000100bebf68:
      if ((bool)in_ZR) {
LAB_100bebf78:
        unaff_x21 = (undefined1 *)0x1;
      }
      else {
        FUN_100beeb6c();
        unaff_x21 = puVar9;
code_r0x000100bebf74:
      }
      FUN_100b6f860();
code_r0x000100bebf80:
      FUN_100b6f838();
      puVar9 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
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
      *(code **)(puVar2 + 0x10) = pcVar18;
      *(code **)(puVar2 + 0x18) = pcVar17;
    case (undefined1 *)0xb1:
    case (undefined1 *)0xb3:
    case (undefined1 *)0xe1:
    case (undefined1 *)0xe3:
      *(undefined1 **)(puVar2 + 0x20) = puVar1;
      *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
switchD_100bebcb0_caseD_b2:
      FUN_100beec18();
switchD_100bebcb0_caseD_a6:
      puVar11 = (undefined1 *)((ulong)puVar9 & 0xff);
switchD_100bebcb0_caseD_db:
      pbVar12 = &switchD_100bebe90::switchdataD_100c9f904;
      UNRECOVERED_JUMPTABLE = (code *)0x100bebe94;
switchD_100bebcb0_caseD_a8:
      UNRECOVERED_JUMPTABLE = UNRECOVERED_JUMPTABLE + (ulong)pbVar12[(long)puVar11] * 4;
switchD_100bebcb0_caseD_a7:
      puVar9 = puVar5;
switchD_100bebcb0_caseD_e2:
                    /* WARNING: Could not recover jumptable at 0x000100bebe90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(puVar9);
      return puVar9;
    case (undefined1 *)0xb0:
      goto switchD_100bebcb0_caseD_b0;
    case (undefined1 *)0xb2:
      goto switchD_100bebcb0_caseD_b2;
    case (undefined1 *)0xbc:
switchD_100bebcb0_caseD_bc:
      pbVar12 = (byte *)0x65646f63;
      goto switchD_100bebcb0_caseD_aa;
    case (undefined1 *)0xc4:
    case (undefined1 *)0xee:
    case (undefined1 *)0xf6:
    case (undefined1 *)0xf8:
      goto switchD_100bebcb0_caseD_c4;
    case (undefined1 *)0xda:
      pcVar17 = (code *)pbVar12;
      puVar9 = puVar11;
      if (!(bool)in_ZR) {
        pcVar17 = UNRECOVERED_JUMPTABLE;
        puVar9 = (undefined1 *)(ulong)(&switchD_100bebcb0::switchdataD_100c9f8fc)[(long)puVar11];
      }
      if ((uVar7 & 0xff) != 0) {
        in_ZR = (uVar7 & 0xff) == 1;
        puVar11 = (undefined1 *)0x5f7972746e756f63;
        goto switchD_100bebcb0_caseD_bc;
      }
      pbVar12 = &DAT_e400000000000000;
      goto LAB_100bebe20;
    case (undefined1 *)0xdb:
      goto switchD_100bebcb0_caseD_db;
    case (undefined1 *)0xe2:
      goto switchD_100bebcb0_caseD_e2;
    case (undefined1 *)0xe8:
      goto switchD_100bebcb0_caseD_e8;
    case (undefined1 *)0xe9:
    case (undefined1 *)0xfd:
      *(code **)(puVar2 + 0x10) = pcVar18;
      *(code **)(puVar2 + 0x18) = pcVar17;
code_r0x000100bec014:
      *(undefined1 **)(puVar2 + 0x20) = puVar1;
      *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
      pcVar17 = (code *)&SUB_e900000000000070;
      unaff_x30 = 0x100bec028;
      FUN_100beec18();
      puVar13 = (undefined1 *)((ulong)puVar9 & 0xff);
      pbVar12 = &BYTE_100c9f914;
      puVar11 = (undefined1 *)(ulong)(&BYTE_100c9f914)[(long)puVar13];
      UNRECOVERED_JUMPTABLE = (code *)((long)puVar11 * 4 + 0x100bec050);
      pcVar18 = (code *)0x70;
      puVar9 = puVar5;
code_r0x000100bec048:
      pcVar18 = (code *)((ulong)pcVar18 & 0xffffffffffff | 0xe900000000000000);
      switch(UNRECOVERED_JUMPTABLE) {
      case (code *)0x100bec050:
switchD_100bebe90_caseD_d3:
        FUN_100beee2c();
      case (code *)0x100bec054:
code_r0x000100bec054:
LAB_100bec0ac:
        puVar13 = (undefined1 *)((ulong)uVar7 & 0xff);
code_r0x000100bec0b0:
        pbVar12 = &switchD_100bec0c4::switchdataD_100c9f91b;
code_r0x000100bec0b8:
        UNRECOVERED_JUMPTABLE = (code *)0x100bec0c8;
code_r0x000100bec0bc:
        puVar11 = (undefined1 *)(ulong)pbVar12[(long)puVar13];
        goto code_r0x000100bec0c0;
      case (code *)0x100bec058:
      case (code *)0x100bec05c:
        puVar9 = (undefined1 *)0x6f62;
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
        puVar9 = (undefined1 *)0x656c;
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
        puVar9 = (undefined1 *)0x6573;
      case (code *)0x100bec090:
code_r0x000100bec090:
        puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffff0000ffff | 0x65760000);
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
        pcVar17 = (code *)&DAT_e400000000000000;
      case (code *)0x100bec0d4:
        puVar5 = (undefined1 *)0x6f62;
      case (code *)0x100bec0d8:
        goto switchD_100bec0c4_caseD_23;
      case (code *)0x100bec0f4:
switchD_100bec0c4_caseD_4f:
        puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x6c00000000);
        break;
      case (code *)0x100bec104:
        puVar5 = (undefined1 *)0x7974697265766573;
        FUN_100beef9c();
        break;
      case (code *)0x100bec130:
        goto LAB_100bec130;
      case (code *)0x100bec15c:
        puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff00000000ffff | 0x73656d610000);
        if (((ulong)puVar9 & 0xff) == 0) goto switchD_100bec0c4_caseD_f1;
        in_ZR = ((uint)puVar9 & 0xff) == 1;
        puVar13 = (undefined1 *)0x7265747369676572;
        pbVar12 = (byte *)0xe900000000000073;
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
        *(code **)(puVar2 + -0x20) = pcVar18;
        *(code **)(puVar2 + -0x18) = pcVar17;
        *(undefined1 **)(puVar2 + -0x10) = puVar2 + 0x20;
        *(undefined8 *)(puVar2 + -8) = unaff_x30;
      case (code *)0x100bec234:
        goto code_r0x000100bec234;
      case (code *)0x100bec284:
switchD_100bec0c4_caseD_bc:
        puVar9 = (undefined1 *)((ulong)puVar9 & 0xffffffffffff | 0x73000000000000);
LAB_100bec2f8:
        puVar13 = (undefined1 *)((ulong)uVar7 & 0xff);
        pbVar12 = &switchD_100bec310::switchdataD_100c9f929;
code_r0x000100bec304:
                    /* WARNING: Could not recover jumptable at 0x000100bec310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)pbVar12[(long)puVar13] * 4 + 0x100bec314))(puVar9);
        return puVar9;
      case (code *)0x100bec2f0:
        puVar9 = (undefined1 *)0x6c7275;
        goto LAB_100bec2f8;
      case (code *)0x100bec340:
        if (puVar9 != (undefined1 *)0x73726564616568 || pcVar18 != pcVar17) {
          FUN_100beeb6c();
          unaff_x21 = puVar9;
          goto code_r0x000100bec3ac;
        }
        uVar7 = 1;
LAB_100bec3b4:
        FUN_100b6f860();
        FUN_100b6f838();
        puVar9 = (undefined1 *)(ulong)(uVar7 & 1);
code_r0x000100bec3c4:
        FUN_100b56e60(puVar9);
        return puVar9;
      case (code *)0x100bec3ac:
code_r0x000100bec3ac:
        uVar7 = (uint)unaff_x21;
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
        puVar5 = (undefined1 *)0xe900000000000064;
        lVar10 = 0x657474616d726f66;
        if (((ulong)puVar9 & 0xff) == 0) {
          puVar13 = (undefined1 *)0xe900000000000064;
          lVar6 = lVar10;
        }
        else {
          bVar3 = ((uint)puVar9 & 0xff) != 1;
          lVar6 = 0x6567617373656d;
          if (bVar3) {
            lVar6 = 0x736d61726170;
          }
          puVar13 = &DAT_e700000000000000;
          if (bVar3) {
            puVar13 = &DAT_e600000000000000;
          }
        }
        uVar7 = uVar7 & 0xff;
        if (uVar7 != 0) {
          lVar10 = 0x6567617373656d;
          if (uVar7 != 1) {
            lVar10 = 0x736d61726170;
          }
          puVar5 = &DAT_e700000000000000;
          if (uVar7 != 1) {
            puVar5 = &DAT_e600000000000000;
          }
        }
        if (lVar6 == lVar10 && puVar13 == puVar5) {
          uVar7 = 1;
        }
        else {
          FUN_100beeb6c();
          uVar7 = (uint)lVar6;
        }
        FUN_100b6f860();
        FUN_100b6f838();
        puVar5 = (undefined1 *)(ulong)(uVar7 & 1);
        FUN_100b56e60(puVar5);
        return puVar5;
      }
      break;
    case (undefined1 *)0xea:
    case (undefined1 *)0xfe:
      goto switchD_100bebcb0_caseD_ea;
    case (undefined1 *)0xec:
switchD_100bebcb0_caseD_ec:
      pcVar17 = (code *)&DAT_e400000000000000;
code_r0x000100bebf58:
      puVar5 = (undefined1 *)0x6e75;
code_r0x000100bebf5c:
      puVar5 = (undefined1 *)(ulong)((uint)puVar5 & 0xffff | 0x74690000);
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
    return puVar13;
  case (undefined1 *)0xc4:
    goto switchD_100beb9e8_caseD_c4;
  case (undefined1 *)0xc6:
  case (undefined1 *)0xc9:
    goto switchD_100beb9e8_caseD_c6;
  case (undefined1 *)0xc7:
  case (undefined1 *)0xf9:
    goto switchD_100beb9e8_caseD_c7;
  case (undefined1 *)0xc8:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffff0000ffffffff | 0x665f00000000);
  case (undefined1 *)0xcb:
  case (undefined1 *)0xcd:
  case (undefined1 *)0xfb:
  case (undefined1 *)0xfd:
    puVar5 = (undefined1 *)((ulong)puVar5 & 0xffffffffffff | 0x6c69000000000000);
    pcVar18 = (code *)0xe900000000000065;
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
  bVar3 = puVar13 == puVar5;
switchD_100beb9e8_caseD_32:
  in_ZR = false;
  if (bVar3) {
    in_ZR = pcVar18 == (code *)&DAT_eb000000006e6f69;
  }
switchD_100beb878_caseD_ce:
  if ((bool)in_ZR) {
switchD_100beb9e8_caseD_17:
    unaff_x21 = (undefined1 *)0x1;
  }
  else {
switchD_100beb9e8_caseD_c:
    FUN_100beeb44();
    unaff_x21 = puVar13;
switchD_100beb9e8_caseD_bb:
  }
switchD_100beb878_caseD_d0:
  FUN_100b6f838();
switchD_100beb9e8_caseD_46:
  FUN_100b6f860();
  puVar13 = (undefined1 *)(ulong)((uint)unaff_x21 & 1);
switchD_100beb9e8_caseD_18:
switchD_100beb9e8_caseD_40:
  FUN_100b56e60();
  return puVar13;
}



/* Address: 0x100beb6dc | FUN_100beb6dc */

void FUN_100beb6dc(ulong param_1,uint param_2)

{
  uint uVar1;
  long lVar3;
  long extraout_x8;
  long extraout_x9;
  long extraout_x10;
  long lVar4;
  long lVar5;
  long lVar2;
  
  FUN_100beec04();
  FUN_100beebf0(0xd000000000000010);
  if ((param_1 & 0xff) == 0) {
    lVar2 = extraout_x8 + 4;
    lVar4 = -0x7ffffffeff2390e0;
  }
  else {
    lVar2 = extraout_x10;
    lVar4 = extraout_x9;
    if (((uint)param_1 & 0xff) != 1) {
      lVar2 = extraout_x8;
      lVar4 = -0x7ffffffeff2390b0;
    }
  }
  if ((param_2 & 0xff) == 0) {
    lVar3 = extraout_x8 + 4;
    lVar5 = -0x7ffffffeff2390e0;
  }
  else {
    lVar3 = extraout_x10;
    lVar5 = extraout_x9;
    if ((param_2 & 0xff) != 1) {
      lVar3 = extraout_x8;
      lVar5 = -0x7ffffffeff2390b0;
    }
  }
  if (lVar2 == lVar3 && lVar4 == lVar5) {
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


