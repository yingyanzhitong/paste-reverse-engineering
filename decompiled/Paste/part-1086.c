/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b890dc | FUN_100b890dc */

void FUN_100b890dc(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100b890e8 | FUN_100b890e8 */

ulong FUN_100b890e8(ulong param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  UUID UVar2;
  ulong uVar3;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  if (*(int *)(*(long *)(UVar2.unknown + -8) + 0x54) == (int)param_2) {
    FUN_1000c9ff0(param_1,param_2,UVar2.unknown);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x18) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  iVar1 = (int)uVar3 + -1;
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return (ulong)(iVar1 + 1);
}



/* Address: 0x100b89170 | FUN_100b89170 */

void FUN_100b89170(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100b8917c | FUN_100b8917c */

void FUN_100b8917c(long param_1,ulong param_2,int param_3,long param_4)

{
  UUID UVar1;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (*(int *)(*(long *)(UVar1.unknown + -8) + 0x54) == param_3) {
    FUN_1000c9ffc(param_1,param_2,param_2,UVar1.unknown);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x18) + 8) = param_2 & 0xffffffff;
  return;
}



/* Address: 0x100b891f4 | FUN_100b891f4 */

void FUN_100b891f4(undefined8 param_1)

{
  if (DAT_101045978 != 0) {
    FUN_10063ee28();
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ccdffc);
  return;
}



/* Address: 0x100b89228 | FUN_100b89228 */

undefined1  [16] FUN_100b89228(long param_1,ulong param_2)

{
  UUID UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_50;
  undefined *puStack_48;
  byte *local_40;
  undefined *puStack_38;
  byte *local_30;
  byte *pbStack_28;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_50 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_48 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_40 = &BYTE_100c9a9f8;
    local_30 = &BYTE_100c9aa10;
    pbStack_28 = &BYTE_100c9aa28;
    puStack_38 = puStack_48;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x100b892bc | FUN_100b892bc */

undefined4 FUN_100b892bc(long param_1,long param_2)

{
  bool bVar1;
  
  if (param_1 != 0x636174536c6c6163 || param_2 != -0x15ffffffffff8c95) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x636174536c6c6163,(_StringGuts)0xea0000000000736b,
                       (_StringComparisonResult)(__int8)param_1);
    if (!bVar1) {
      if (param_1 == -0x2fffffffffffffee && param_2 == -0x7ffffffeff234b60) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0xd000000000000012,(_StringGuts)0x8000000100dcb4a0,
                         (_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(param_2);
      if (bVar1) {
        return 1;
      }
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100b89390 | FUN_100b89390 */

undefined1  [16] FUN_100b89390(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0x8000000100dcb4a0;
  uVar1 = 0xd000000000000012;
  if ((param_1 & 1) == 0) {
    uVar2 = 0xea0000000000736b;
    uVar1 = 0x636174536c6c6163;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100b893d0 | FUN_100b893d0 */

/* WARNING: Removing unreachable block (ram,0x000100b894e0) */
/* WARNING: Removing unreachable block (ram,0x000100b89478) */

undefined1  [16] FUN_100b893d0(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  uint uVar4;
  long unaff_x21;
  undefined1 auVar5 [16];
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  
  puVar3 = &DAT_1010459c0;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar1);
  uVar4 = (uint)param_1;
  FUN_100b8a000();
  FUN_100b8a7ac(&DAT_100f37cf0);
  if (unaff_x21 == 0) {
    FUN_100b6730c(&DAT_1010459d0);
    local_59 = 0;
    FUN_100b8a040();
    FUN_100b8a7d4(&local_58);
    local_5a = 1;
    _swift_bridgeObjectRetain(local_58);
    bVar2 = Swift::KeyedDecodingContainer::_decode(&local_5a,puVar3);
    uVar4 = (uint)bVar2;
    FUN_100b8a794();
    FUN_100b8a7a4();
    FUN_100b7c97c();
  }
  else {
    FUN_100b8a7a4();
    local_58 = uVar1;
  }
  auVar5._8_4_ = uVar4 & 1;
  auVar5._0_8_ = local_58;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Address: 0x100b894fc | FUN_100b894fc */

undefined4 FUN_100b894fc(long param_1,long param_2)

{
  bool bVar1;
  
  if (param_1 != -0x2ffffffffffffff0 || param_2 != -0x7ffffffeff234b20) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0xd000000000000010,(_StringGuts)0x8000000100dcb4e0,
                       (_StringComparisonResult)(__int8)param_1);
    if (!bVar1) {
      if (param_1 == -0x2fffffffffffffed && param_2 == -0x7ffffffeff234b00) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0xd000000000000013,(_StringGuts)0x8000000100dcb500,
                         (_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(param_2);
      if (bVar1) {
        return 1;
      }
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100b895cc | FUN_100b895cc */

bool FUN_100b895cc(uint param_1,uint param_2)

{
  return ((param_2 ^ param_1) & 1) == 0;
}



/* Address: 0x100b895dc | FUN_100b895dc */

void FUN_100b895dc(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine((ulong)param_2.unknown & 1,param_2);
  return;
}



/* Address: 0x100b89600 | FUN_100b89600 */

void FUN_100b89600(ulong param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)(param_1 & 1);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100b8963c | FUN_100b8963c */

undefined1  [16] FUN_100b8963c(ulong param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd000000000000013;
  pcVar1 = "threadAttributed";
  if ((param_1 & 1) == 0) {
    uVar2 = 0xd000000000000010;
    pcVar1 = "offsetIntoBinaryTextSegment";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x100b89674 | FUN_100b89674 */

/* WARNING: Removing unreachable block (ram,0x000100b8970c) */

undefined1  [16] FUN_100b89674(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long unaff_x21;
  undefined1 auVar3 [16];
  long local_60;
  undefined1 local_51;
  
  puVar1 = &DAT_101045a48;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar2 = *(undefined1 **)(param_1 + 0x18);
  FUN_100004640(param_1,puVar2);
  FUN_100b8a4e8();
  FUN_100b8a7ac(&DAT_100f37e00);
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar2 = &local_51;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    FUN_100b6730c(&DAT_101045a00);
    FUN_100b8a128();
    FUN_100b8a7d4(&local_60);
    FUN_100b8a794();
    FUN_100b8a7a4();
    param_1 = local_60;
  }
  else {
    FUN_100b8a7a4();
  }
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = puVar2;
  return auVar3;
}



/* Address: 0x100b89788 | FUN_100b89788 */

undefined4 FUN_100b89788(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x55557972616e6962 || param_2 != (undefined1 *)0xea00000000004449) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x55557972616e6962,(_StringGuts)0xea00000000004449,expecting);
    if (!bVar1) {
      if ((param_1 == -0x2fffffffffffffe5 && param_2 == (undefined1 *)0x8000000100dcb4c0) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd00000000000001b,(_StringGuts)0x8000000100dcb4c0,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if ((param_1 == 0x614e7972616e6962 && param_2 == (undefined1 *)0xea0000000000656d) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x614e7972616e6962,(_StringGuts)0xea0000000000656d,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if ((param_1 == 0x73736572646461 && param_2 == &DAT_e700000000000000) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x73736572646461,(_StringGuts)0xe700000000000000,expecting
                            ), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if ((param_1 != 0x656d617246627573 || param_2 != (undefined1 *)0xe900000000000073) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d617246627573,(_StringGuts)0xe900000000000073,
                             expecting), !bVar1)) {
        if (param_1 == 0x6f43656c706d6173 && param_2 == (undefined1 *)0xeb00000000746e75) {
          _swift_bridgeObjectRelease(param_2);
          return 5;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6f43656c706d6173,(_StringGuts)0xeb00000000746e75,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 5;
        }
        return 6;
      }
      _swift_bridgeObjectRelease(param_2);
      return 4;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100b89990 | FUN_100b89990 */

/* WARNING: Removing unreachable block (ram,0x000100b89d48) */

String FUN_100b89990(ulong param_1,undefined8 param_2,undefined **param_3,undefined **param_4)

{
  int iVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  __uint64 _Var5;
  undefined4 uVar6;
  undefined **ppuVar7;
  code *pcVar8;
  long lVar9;
  code *extraout_x8;
  long extraout_x8_00;
  code *extraout_x8_01;
  byte *extraout_x9;
  long extraout_x9_00;
  byte *extraout_x9_01;
  byte *pbVar10;
  undefined **unaff_x19;
  bool bVar11;
  undefined **unaff_x20;
  long unaff_x21;
  UUID unaff_x22;
  uint unaff_w23;
  undefined **unaff_x24;
  long unaff_x25;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined1 *unaff_x29;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  ppuVar7 = (undefined **)0xea00000000004449;
  KVar2.unknown = (undefined *)0x55557972616e6962;
  pcVar8 = (code *)(param_1 & 0xff);
  pbVar10 = &switchD_100b899c4::switchdataD_100c9a9b0;
  switch(pcVar8) {
  case (code *)0x0:
    goto switchD_100b899c4_caseD_0;
  default:
    pcVar8 = (code *)0x100dcb000;
  case (code *)0xa0:
  case (code *)0xae:
  case (code *)0xc8:
  case (code *)0xd6:
    pcVar8 = pcVar8 + 0x4c0;
switchD_100b899c4_caseD_96:
    SVar12.bridgeObject = (void *)((ulong)pcVar8 | 0x8000000000000000);
    SVar12.str = (char *)0xd00000000000001b;
    return SVar12;
  case (code *)0x2:
  case (code *)0x9:
  case (code *)0x13:
    ppuVar7 = (undefined **)0x656d;
  case (code *)0xd:
  case (code *)0x17:
    ppuVar7 = (undefined **)((ulong)ppuVar7 & 0xffffffffffff | 0xea00000000000000);
  case (code *)0xb:
  case (code *)0x15:
  case (code *)0x48:
  case (code *)0x50:
  case (code *)0x80:
    KVar2.unknown = (undefined *)0x614e7972616e6962;
switchD_100b899c4_caseD_f:
    SVar14.bridgeObject = ppuVar7;
    SVar14.str = KVar2.unknown;
    return SVar14;
  case (code *)0x3:
    SVar15.bridgeObject = &DAT_e700000000000000;
    SVar15.str = (char *)0x73736572646461;
    return SVar15;
  case (code *)0x4:
  case (code *)0x58:
  case (code *)0x70:
  case (code *)0x88:
    ppuVar7 = (undefined **)0x73;
  case (code *)0x60:
  case (code *)0x68:
    ppuVar7 = (undefined **)((ulong)ppuVar7 & 0xffffffffffff | 0xe900000000000000);
  case (code *)0x6:
  case (code *)0x10:
  case (code *)0x78:
    KVar2.unknown = (undefined *)0x7573;
  case (code *)0xa:
  case (code *)0x14:
    KVar2.unknown = (undefined *)((ulong)KVar2.unknown & 0xffff00000000ffff | 0x617246620000);
switchD_100b899c4_caseD_8:
    SVar13.str = (char *)((ulong)KVar2.unknown & 0xffffffffffff | 0x656d000000000000);
    SVar13.bridgeObject = ppuVar7;
    return SVar13;
  case (code *)0x5:
  case (code *)0xe:
  case (code *)0x18:
    ppuVar7 = (undefined **)0xeb00000000746e75;
    KVar2.unknown = (undefined *)0x706d6173;
  case (code *)0x8a:
    KVar2.unknown = (undefined *)((ulong)KVar2.unknown & 0xffff0000ffffffff | 0x656c00000000);
  case (code *)0x5a:
  case (code *)0x72:
    KVar2.unknown = (undefined *)((ulong)KVar2.unknown & 0xffffffffffff | 0x6f43000000000000);
switchD_100b899c4_caseD_0:
    SVar16.bridgeObject = ppuVar7;
    SVar16.str = KVar2.unknown;
    return SVar16;
  case (code *)0x8:
  case (code *)0x12:
    goto switchD_100b899c4_caseD_8;
  case (code *)0xf:
  case (code *)0x19:
    goto switchD_100b899c4_caseD_f;
  case (code *)0x20:
  case (code *)0x2c:
  case (code *)0x36:
  case (code *)0xf0:
  case (code *)0xfc:
    goto switchD_100b899c4_caseD_20;
  case (code *)0x21:
  case (code *)0x33:
  case (code *)0x34:
  case (code *)0x37:
  case (code *)0x42:
  case (code *)0xe7:
  case (code *)0xf1:
    goto switchD_100b899c4_caseD_21;
  case (code *)0x22:
  case (code *)0x38:
  case (code *)0xe4:
  case (code *)0xf2:
    goto switchD_100b899c4_caseD_22;
  case (code *)0x23:
  case (code *)0x2d:
  case (code *)0x39:
  case (code *)0xbc:
  case (code *)0xf3:
  case (code *)0xfd:
    goto switchD_100b899c4_caseD_23;
  case (code *)0x24:
  case (code *)0x32:
  case (code *)0x3a:
  case (code *)0x3f:
  case (code *)0xf4:
    goto switchD_100b899c4_caseD_24;
  case (code *)0x25:
  case (code *)0x3b:
  case (code *)0xe8:
  case (code *)0xf5:
    goto switchD_100b899c4_caseD_25;
  case (code *)0x26:
  case (code *)0x3c:
  case (code *)0xf6:
    goto switchD_100b899c4_caseD_26;
  case (code *)0x27:
  case (code *)0x3d:
  case (code *)0xf7:
    goto switchD_100b899c4_caseD_27;
  case (code *)0x28:
  case (code *)0xe0:
  case (code *)0xf8:
    goto switchD_100b899c4_caseD_28;
  case (code *)0x29:
  case (code *)0x2e:
  case (code *)0x40:
  case (code *)0xf9:
  case (code *)0xfe:
    goto switchD_100b899c4_caseD_29;
  case (code *)0x2a:
  case (code *)0x2b:
  case (code *)0xfa:
  case (code *)0xfb:
    goto switchD_100b899c4_caseD_2a;
  case (code *)0x2f:
  case (code *)0xff:
    goto switchD_100b899c4_caseD_2f;
  case (code *)0x30:
    goto switchD_100b899c4_caseD_30;
  case (code *)0x31:
    goto switchD_100b899c4_caseD_31;
  case (code *)0x3e:
    goto switchD_100b899c4_caseD_3e;
  case (code *)0x41:
    goto switchD_100b899c4_caseD_41;
  case (code *)0x5c:
  case (code *)0x74:
  case (code *)0x5d:
  case (code *)0x5e:
  case (code *)0x75:
  case (code *)0x76:
  case (code *)0xab:
  case (code *)0xd3:
    FUN_100b8a000();
    SVar19 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
    return SVar19;
  case (code *)0x5f:
  case (code *)0x77:
    goto switchD_100b899c4_caseD_5f;
  case (code *)0x90:
    goto switchD_100b899c4_caseD_90;
  case (code *)0x91:
  case (code *)0xa5:
  case (code *)0xb9:
  case (code *)0xcd:
    goto switchD_100b899c4_caseD_91;
  case (code *)0x92:
  case (code *)0xa6:
  case (code *)0xba:
  case (code *)0xce:
    break;
  case (code *)0x94:
    goto switchD_100b899c4_caseD_94;
  case (code *)0x95:
  case (code *)0xbd:
    goto switchD_100b899c4_caseD_95;
  case (code *)0x96:
  case (code *)0x9e:
  case (code *)0xbe:
  case (code *)0xc6:
    goto switchD_100b899c4_caseD_96;
  case (code *)0xa4:
    goto switchD_100b899c4_caseD_a4;
  case (code *)0xa8:
    goto switchD_100b899c4_caseD_a8;
  case (code *)0xa9:
    FUN_100b892bc();
    *pcVar8 = SUB81(KVar2.unknown,0);
    SVar18.bridgeObject = ppuVar7;
    SVar18.str = KVar2.unknown;
    return SVar18;
  case (code *)0xaa:
  case (code *)0xd2:
    goto switchD_100b899c4_caseD_aa;
  case (code *)0xb4:
    goto switchD_100b899c4_caseD_b4;
  case (code *)0xb5:
  case (code *)0xdd:
    goto switchD_100b899c4_caseD_b5;
  case (code *)0xb6:
  case (code *)0xde:
    goto switchD_100b899c4_caseD_b6;
  case (code *)0xb8:
    goto switchD_100b899c4_caseD_b8;
  case (code *)0xcc:
    goto switchD_100b899c4_caseD_cc;
  case (code *)0xd0:
    goto switchD_100b899c4_caseD_d0;
  case (code *)0xd1:
    FUN_100b89390();
    SVar19.bridgeObject = ppuVar7;
    SVar19.str = KVar2.unknown;
    return SVar19;
  case (code *)0xdc:
    goto switchD_100b899c4_caseD_dc;
  case (code *)0xe1:
    goto switchD_100b899c4_caseD_e1;
  case (code *)0xe2:
    goto switchD_100b899c4_caseD_e2;
  case (code *)0xe3:
    goto switchD_100b899c4_caseD_e3;
  case (code *)0xe5:
    goto switchD_100b899c4_caseD_e5;
  case (code *)0xe6:
    goto switchD_100b899c4_caseD_e6;
  case (code *)0xe9:
    goto switchD_100b899c4_caseD_e9;
  }
  unaff_x29 = &stack0x00000050;
  unaff_x25 = unaff_x21;
switchD_100b899c4_caseD_b4:
  *(code **)(unaff_x29 + -0x80) = pcVar8;
  unaff_x22 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(unaff_x22.unknown + -8);
  *(long *)(unaff_x29 + -0x68) = lVar9;
  FUN_100b6f9e0(*(undefined8 *)(lVar9 + 0x40));
  pcVar8 = extraout_x8;
  pbVar10 = extraout_x9;
  unaff_x19 = (undefined **)KVar2.unknown;
switchD_100b899c4_caseD_95:
  unaff_x26 = (undefined **)(pbVar10 + -(long)pcVar8);
  puVar3 = &DAT_1010459e8;
  FUN_100b6730c();
  *(undefined **)(unaff_x29 + -0x78) = puVar3;
  unaff_x27 = *(undefined ***)(puVar3 + -8);
  FUN_100b6f9e0(unaff_x27[8]);
  unaff_x28 = (undefined **)(extraout_x9_00 - extraout_x8_00);
  KVar2.unknown = (undefined *)0x0;
  FUN_100b891f4();
  *(undefined **)(unaff_x29 + -0x70) = KVar2.unknown;
switchD_100b899c4_caseD_28:
  pcVar8 = *(code **)((long)KVar2.unknown + -8);
switchD_100b899c4_caseD_b6:
  FUN_100b6f9e0(*(undefined8 *)(pcVar8 + 0x40));
  pcVar8 = extraout_x8_01;
  pbVar10 = extraout_x9_01;
switchD_100b899c4_caseD_3e:
  KVar2.unknown = (undefined *)unaff_x19;
  *(long *)(unaff_x29 + -0x60) = (long)pbVar10 - (long)pcVar8;
  unaff_x24 = *(undefined ***)((long)KVar2.unknown + 0x18);
switchD_100b899c4_caseD_e6:
  FUN_100004640(KVar2.unknown,unaff_x24);
switchD_100b899c4_caseD_26:
  FUN_100b8a0e8();
  KVar2.unknown = &DAT_100f37c60;
switchD_100b899c4_caseD_20:
  ppuVar7 = (undefined **)KVar2.unknown;
switchD_100b899c4_caseD_31:
  unaff_x21 = unaff_x25;
  KVar2 = Swift::Decoder::_container();
switchD_100b899c4_caseD_27:
  if (unaff_x21 == 0) {
    *(undefined ***)(unaff_x29 + -0x88) = unaff_x27;
    unaff_x29[-0x41] = 0;
    KVar2.unknown = &DAT_1010459f8;
    unaff_x25 = 0;
switchD_100b899c4_caseD_29:
    ppuVar7 = (undefined **)PTR_typeMetadataAccessor_100ea7500;
switchD_100b899c4_caseD_2f:
    param_3 = &PTR___convertNSErrorToError_100ea7000;
switchD_100b899c4_caseD_e2:
    param_3 = (undefined **)param_3[0xa5];
switchD_100b899c4_caseD_21:
    FUN_100003a00(KVar2.unknown,ppuVar7,param_3);
switchD_100b899c4_caseD_e5:
    ppuVar7 = (undefined **)(unaff_x29 + -0x41);
switchD_100b899c4_caseD_e3:
    KVar2.unknown = unaff_x22.unknown;
    unaff_x22.unknown = KVar2.unknown;
    unaff_x27 = *(undefined ***)(unaff_x29 + -0x78);
switchD_100b899c4_caseD_30:
    param_3 = unaff_x27;
    unaff_x27 = param_3;
switchD_100b899c4_caseD_2a:
    param_4 = (undefined **)unaff_x22.unknown;
    unaff_x22.unknown = (undefined *)param_4;
switchD_100b899c4_caseD_41:
switchD_100b899c4_caseD_22:
    unaff_x21 = unaff_x25;
switchD_100b899c4_caseD_e1:
    Swift::KeyedDecodingContainer::_decode(KVar2.unknown,ppuVar7,param_3,param_4);
    unaff_x24 = (undefined **)unaff_x22.unknown;
switchD_100b899c4_caseD_24:
    if (unaff_x21 != 0) {
switchD_100b899c4_caseD_e9:
      FUN_100b8a780();
switchD_100b899c4_caseD_23:
      unaff_x22.unknown = (undefined *)unaff_x24;
      bVar11 = false;
      goto LAB_100b89bec;
    }
    KVar2.unknown = *(undefined **)(unaff_x29 + -0x60);
    pcVar8 = *(code **)(*(long *)(unaff_x29 + -0x68) + 0x20);
    unaff_x21 = 0;
    unaff_x22.unknown = KVar2.unknown;
switchD_100b899c4_caseD_25:
    ppuVar7 = unaff_x26;
    (*pcVar8)(KVar2.unknown,ppuVar7,unaff_x24);
    unaff_x29[-0x42] = 1;
    KVar2.unknown = unaff_x29 + -0x42;
switchD_100b899c4_caseD_5f:
    FUN_100b8a7c4(KVar2.unknown);
    KVar2.unknown = (undefined *)Swift::KeyedDecodingContainer::_decode();
    pcVar8 = *(code **)(unaff_x29 + -0x88);
    if (unaff_x21 != 0) {
switchD_100b899c4_caseD_dc:
      KVar2.unknown = (undefined *)unaff_x28;
      ppuVar7 = unaff_x27;
      unaff_x22.unknown = (undefined *)unaff_x24;
      (**(code **)(pcVar8 + 8))(KVar2.unknown,ppuVar7);
      bVar11 = true;
      goto LAB_100b89bec;
    }
    unaff_x26 = *(undefined ***)(unaff_x29 + -0x70);
    pcVar8 = (code *)(long)*(int *)((long)unaff_x26 + 0x14);
    unaff_x21 = 0;
switchD_100b899c4_caseD_b8:
    *(undefined **)((long)unaff_x22.unknown + (long)pcVar8) = KVar2.unknown;
    unaff_x29[-0x43] = 2;
    puVar4 = unaff_x29 + -0x43;
    FUN_100b8a7c4();
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    unaff_w23 = (uint)(unaff_x21 == 0);
    if (unaff_x21 == 0) {
      iVar1 = *(int *)(unaff_x26 + 3);
      *(undefined1 **)((long)unaff_x22.unknown + (long)iVar1) = puVar4;
      *(undefined ***)((byte *)((long)unaff_x22.unknown + (long)iVar1) + 8) = ppuVar7;
      unaff_x29[-0x44] = 3;
      unaff_x21 = 0;
switchD_100b899c4_caseD_94:
      FUN_100b8a7c4(unaff_x29 + -0x44);
      _Var5 = Swift::KeyedDecodingContainer::_decode();
      if (unaff_x21 == 0) {
        *(__uint64 *)((long)unaff_x22.unknown + (long)*(int *)((long)unaff_x26 + 0x1c)) = _Var5;
        KVar2.unknown = &DAT_101045a00;
        FUN_100b6730c(&DAT_101045a00);
        unaff_x29[-0x45] = 4;
        unaff_x25 = 0;
        unaff_x20 = (undefined **)KVar2.unknown;
switchD_100b899c4_caseD_a4:
        FUN_100b8a128();
        puVar4 = unaff_x29 + -0x45;
        Swift::KeyedDecodingContainer::_decodeIfPresent
                  (unaff_x29 + -0x58,unaff_x20,puVar4,unaff_x27,unaff_x20,KVar2.unknown);
        uVar6 = SUB84(puVar4,0);
        if (unaff_x25 == 0) {
          *(undefined8 *)((long)unaff_x22.unknown + (long)*(int *)(unaff_x26 + 4)) =
               *(undefined8 *)(unaff_x29 + -0x58);
          unaff_x29[-0x46] = 5;
          puVar4 = unaff_x29 + -0x46;
          FUN_100b8a7c4();
          Swift::KeyedDecodingContainer::_decodeIfPresent();
          *(undefined4 *)(unaff_x29 + -0x8c) = uVar6;
          FUN_100b8a780();
          pbVar10 = (byte *)((long)unaff_x22.unknown + (long)*(int *)((long)unaff_x26 + 0x24));
          *(undefined1 **)pbVar10 = puVar4;
          pbVar10[8] = (byte)*(undefined4 *)(unaff_x29 + -0x8c) & 1;
          ppuVar7 = *(undefined ***)(unaff_x29 + -0x80);
          FUN_100b8a1a8(unaff_x22.unknown,ppuVar7);
switchD_100b899c4_caseD_aa:
          KVar2.unknown = unaff_x22.unknown;
          FUN_100b8a7a4();
          FUN_100b8a1ec(KVar2.unknown);
          goto LAB_100b89c40;
        }
      }
    }
switchD_100b899c4_caseD_90:
    FUN_100b8a780();
    unaff_x20 = (undefined **)0x0;
switchD_100b899c4_caseD_91:
    FUN_100b8a7a4();
switchD_100b899c4_caseD_b5:
    ppuVar7 = unaff_x24;
  }
  else {
    bVar11 = false;
LAB_100b89bec:
    FUN_100b8a7a4();
    if (!bVar11) goto LAB_100b89c40;
    unaff_w23 = 0;
    unaff_x24 = (undefined **)unaff_x22.unknown;
switchD_100b899c4_caseD_d0:
    unaff_x20 = (undefined **)0x0;
    unaff_x26 = *(undefined ***)(unaff_x29 + -0x70);
    ppuVar7 = unaff_x24;
  }
  unaff_x19 = *(undefined ***)(unaff_x29 + -0x60);
  KVar2.unknown = (undefined *)unaff_x19;
  (**(code **)(*(long *)(unaff_x29 + -0x68) + 8))(unaff_x19,ppuVar7);
  if (unaff_w23 == 0) {
    if ((int)unaff_x20 == 0) goto LAB_100b89c40;
  }
  else {
switchD_100b899c4_caseD_a8:
    KVar2.unknown = *(undefined **)((long)unaff_x19 + (long)*(int *)(unaff_x26 + 3) + 8);
    _swift_bridgeObjectRelease(KVar2.unknown);
    if (((ulong)unaff_x20 & 1) == 0) goto LAB_100b89c40;
  }
  KVar2.unknown = *(undefined **)((long)unaff_x19 + (long)*(int *)(unaff_x26 + 4));
switchD_100b899c4_caseD_cc:
  _swift_bridgeObjectRelease(KVar2.unknown);
LAB_100b89c40:
  SVar17.bridgeObject = ppuVar7;
  SVar17.str = KVar2.unknown;
  return SVar17;
}



/* Address: 0x100b89a54 | FUN_100b89a54 */

/* WARNING: Removing unreachable block (ram,0x000100b89d0c) */
/* WARNING: Removing unreachable block (ram,0x000100b89bd8) */
/* WARNING: Removing unreachable block (ram,0x000100b89d48) */
/* WARNING: Removing unreachable block (ram,0x000100b89d14) */
/* WARNING: Removing unreachable block (ram,0x000100b89b94) */
/* WARNING: Removing unreachable block (ram,0x000100b89c18) */
/* WARNING: Removing unreachable block (ram,0x000100b89c2c) */
/* WARNING: Removing unreachable block (ram,0x000100b89bf4) */
/* WARNING: Removing unreachable block (ram,0x000100b89c30) */
/* WARNING: Removing unreachable block (ram,0x000100b89c34) */

void FUN_100b89a54(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  UUID UVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  __int64 _Var6;
  undefined1 *puVar7;
  __uint64 _Var8;
  undefined *puVar9;
  byte bVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x9;
  long extraout_x9_00;
  long unaff_x21;
  long lVar13;
  undefined8 local_68;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = extraout_x9 - extraout_x8;
  puVar3 = &DAT_1010459e8;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar4 = 0;
  FUN_100b891f4();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = extraout_x9_00 - extraout_x8_00;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100b8a0e8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &DAT_1010459f8;
    FUN_100003a00(&DAT_1010459f8,PTR_typeMetadataAccessor_100ea7500,
                  PTR_Foundation__Foundation__UUID_>Swift__Decodable_100ea7528);
    Swift::KeyedDecodingContainer::_decode
              (lVar13,UVar2.unknown,&local_51,puVar3,UVar2.unknown,puVar5);
    (**(code **)(lVar11 + 0x20))(lVar12,lVar13,UVar2.unknown);
    local_52 = 1;
    FUN_100b8a7c4(&local_52);
    _Var6 = Swift::KeyedDecodingContainer::_decode();
    *(__int64 *)(lVar12 + *(int *)(lVar4 + 0x14)) = _Var6;
    local_53 = 2;
    puVar7 = &local_53;
    FUN_100b8a7c4();
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar4 + 0x18));
    *puVar1 = puVar7;
    puVar1[1] = lVar13;
    local_54 = 3;
    FUN_100b8a7c4(&local_54);
    _Var8 = Swift::KeyedDecodingContainer::_decode();
    *(__uint64 *)(lVar12 + *(int *)(lVar4 + 0x1c)) = _Var8;
    puVar5 = &DAT_101045a00;
    FUN_100b6730c(&DAT_101045a00);
    local_55 = 4;
    puVar9 = puVar5;
    FUN_100b8a128();
    puVar7 = &local_55;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_68,puVar5,puVar7,puVar3,puVar5,puVar9);
    bVar10 = (byte)puVar7;
    *(undefined8 *)(lVar12 + *(int *)(lVar4 + 0x20)) = local_68;
    local_56 = 5;
    puVar7 = &local_56;
    FUN_100b8a7c4();
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    FUN_100b8a780();
    puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar4 + 0x24));
    *puVar1 = puVar7;
    *(byte *)(puVar1 + 1) = bVar10 & 1;
    FUN_100b8a1a8(lVar12,param_1);
    FUN_100b8a7a4();
    FUN_100b8a1ec(lVar12);
  }
  else {
    FUN_100b8a7a4();
  }
  return;
}



/* Address: 0x100b89d90 | FUN_100b89d90 */

void FUN_100b89d90(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b89390(*unaff_x20);
  return;
}



/* Address: 0x100b89d98 | FUN_100b89d98 */

void FUN_100b89d98(undefined1 *param_1,undefined1 param_2)

{
  FUN_100b892bc();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b89dbc | FUN_100b89dbc */

String FUN_100b89dbc(void)

{
  String SVar1;
  
  FUN_100b8a000();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b89de4 | FUN_100b89de4 */

String FUN_100b89de4(void)

{
  String SVar1;
  
  FUN_100b8a000();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b89e0c | FUN_100b89e0c */

void FUN_100b89e0c(undefined8 *param_1,undefined8 param_2,byte param_3)

{
  long unaff_x21;
  
  FUN_100b893d0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(byte *)(param_1 + 1) = param_3 & 1;
  }
  return;
}



/* Address: 0x100b89e3c | FUN_100b89e3c */

void FUN_100b89e3c(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100b895cc(*param_1,*param_2);
  return;
}



/* Address: 0x100b89e48 | FUN_100b89e48 */

void FUN_100b89e48(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b89600(*unaff_x20);
  return;
}



/* Address: 0x100b89e60 | FUN_100b89e60 */

void FUN_100b89e60(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100b895dc(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b89e68 | thunk_FUN_100b89e6c */

void thunk_FUN_100b89e6c(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  byte *unaff_x20;
  
  HVar1.unknown = (undefined *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100b89e6c | FUN_100b89e6c */

void FUN_100b89e6c(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  byte *unaff_x20;
  
  HVar1.unknown = (undefined *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  FUN_100b8a7ec();
  return;
}



/* Address: 0x100b89ea4 | FUN_100b89ea4 */

void FUN_100b89ea4(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b8963c(*unaff_x20);
  return;
}



/* Address: 0x100b89eac | FUN_100b89eac */

void FUN_100b89eac(undefined1 *param_1,undefined1 param_2)

{
  FUN_100b894fc();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b89ed0 | FUN_100b89ed0 */

void FUN_100b89ed0(undefined1 *param_1,undefined1 param_2)

{
  FUN_1000f35d8();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b89ef4 | FUN_100b89ef4 */

String FUN_100b89ef4(void)

{
  String SVar1;
  
  FUN_100b8a4e8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b89f1c | FUN_100b89f1c */

String FUN_100b89f1c(void)

{
  String SVar1;
  
  FUN_100b8a4e8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b89f44 | FUN_100b89f44 */

void FUN_100b89f44(undefined1 *param_1,undefined1 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_100b89674();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(undefined8 *)(param_1 + 8) = param_3;
  }
  return;
}



/* Address: 0x100b89f70 | FUN_100b89f70 */

void FUN_100b89f70(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b89990(*unaff_x20);
  return;
}



/* Address: 0x100b89f78 | FUN_100b89f78 */

void FUN_100b89f78(undefined1 *param_1,undefined1 param_2)

{
  FUN_100b89788();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b89f9c | FUN_100b89f9c */

String FUN_100b89f9c(void)

{
  String SVar1;
  
  FUN_100b8a0e8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b89fc4 | FUN_100b89fc4 */

String FUN_100b89fc4(void)

{
  String SVar1;
  
  FUN_100b8a0e8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b89fec | FUN_100b89fec */

void FUN_100b89fec(void)

{
  FUN_100b89a54();
  return;
}



/* Address: 0x100b8a000 | FUN_100b8a000 */

void FUN_100b8a000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010459c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ac9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ac9c,&DAT_100f37cf0);
  DAT_1010459c8 = pTVar1;
  return;
}



/* Address: 0x100b8a040 | FUN_100b8a040 */

void FUN_100b8a040(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_1010459d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_1010459d0;
  FUN_100b6734c();
  puVar2 = puVar1;
  FUN_100b8a0a8();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_1010459d8 = puVar3;
  return;
}



/* Address: 0x100b8a0a8 | FUN_100b8a0a8 */

void FUN_100b8a0a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010459e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ac74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ac74,&DAT_100f37d68);
  DAT_1010459e0 = pTVar1;
  return;
}



/* Address: 0x100b8a0e8 | FUN_100b8a0e8 */

void FUN_100b8a0e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_1010459f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ac24;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ac24,&DAT_100f37c60);
  DAT_1010459f0 = pTVar1;
  return;
}



/* Address: 0x100b8a128 | FUN_100b8a128 */

void FUN_100b8a128(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_101045a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101045a00;
  FUN_100b6734c(&DAT_101045a00);
  puVar2 = &DAT_101045a10;
  FUN_100003a00(&DAT_101045a10,FUN_100b891f4,&DAT_100c9aa40);
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538,puVar1,&local_28);
  DAT_101045a08 = puVar3;
  return;
}



/* Address: 0x100b8a1a8 | FUN_100b8a1a8 */

undefined8 FUN_100b8a1a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100b891f4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100b8a1ec | FUN_100b8a1ec */

undefined8 FUN_100b8a1ec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100b891f4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100b8a228 | FUN_100b8a228 */

void FUN_100b8a228(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 5) {
    uVar2 = 4;
  }
  if (param_3 + 5 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfa < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfb) {
                    /* WARNING: Could not recover jumptable at 0x000100b8a270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100b8a274 + (ulong)(&BYTE_100c9a9bb)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x05';
                    /* WARNING: Could not recover jumptable at 0x000100b8a2a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100b8a2a8 + (ulong)(&BYTE_100c9a9b6)[uVar1] * 4))();
  return;
}



/* Address: 0x100b8a2e4 | FUN_100b8a2e4 */

undefined1  [16] FUN_100b8a2e4(void)

{
  return ZEXT816(0x100f37c60);
}



/* Address: 0x100b8a2f4 | FUN_100b8a2f4 */

undefined1  [16] FUN_100b8a2f4(void)

{
  return ZEXT816(0x100f37cf0);
}



/* Address: 0x100b8a304 | FUN_100b8a304 */

int FUN_100b8a304(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100b8a344 | FUN_100b8a344 */

void FUN_100b8a344(void)

{
  FUN_10063ee28(&DAT_100f37d68);
  return;
}



/* Address: 0x100b8a350 | thunk_FUN_100b8a354 */

void thunk_FUN_100b8a354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ab44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ab44,&DAT_100f37cf0);
  DAT_101045a18 = pTVar1;
  return;
}



/* Address: 0x100b8a354 | FUN_100b8a354 */

void FUN_100b8a354(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ab44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ab44,&DAT_100f37cf0);
  DAT_101045a18 = pTVar1;
  return;
}



/* Address: 0x100b8a394 | thunk_FUN_100b8a398 */

void thunk_FUN_100b8a398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9abfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9abfc,&DAT_100f37c60);
  DAT_101045a20 = pTVar1;
  return;
}



/* Address: 0x100b8a398 | FUN_100b8a398 */

void FUN_100b8a398(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9abfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9abfc,&DAT_100f37c60);
  DAT_101045a20 = pTVar1;
  return;
}



/* Address: 0x100b8a3d8 | thunk_FUN_100b8a3dc */

void thunk_FUN_100b8a3dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ab94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ab94,&DAT_100f37c60);
  DAT_101045a28 = pTVar1;
  return;
}



/* Address: 0x100b8a3dc | FUN_100b8a3dc */

void FUN_100b8a3dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ab94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ab94,&DAT_100f37c60);
  DAT_101045a28 = pTVar1;
  return;
}



/* Address: 0x100b8a41c | thunk_FUN_100b8a420 */

void thunk_FUN_100b8a420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ab6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ab6c,&DAT_100f37c60);
  DAT_101045a30 = pTVar1;
  return;
}



/* Address: 0x100b8a420 | FUN_100b8a420 */

void FUN_100b8a420(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ab6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ab6c,&DAT_100f37c60);
  DAT_101045a30 = pTVar1;
  return;
}



/* Address: 0x100b8a460 | thunk_FUN_100b8a464 */

void thunk_FUN_100b8a464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9aadc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9aadc,&DAT_100f37cf0);
  DAT_101045a38 = pTVar1;
  return;
}



/* Address: 0x100b8a464 | FUN_100b8a464 */

void FUN_100b8a464(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9aadc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9aadc,&DAT_100f37cf0);
  DAT_101045a38 = pTVar1;
  return;
}



/* Address: 0x100b8a4a4 | thunk_FUN_100b8a4a8 */

void thunk_FUN_100b8a4a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9aab4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9aab4,&DAT_100f37cf0);
  DAT_101045a40 = pTVar1;
  return;
}



/* Address: 0x100b8a4a8 | FUN_100b8a4a8 */

void FUN_100b8a4a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9aab4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9aab4,&DAT_100f37cf0);
  DAT_101045a40 = pTVar1;
  return;
}



/* Address: 0x100b8a4e8 | FUN_100b8a4e8 */

void FUN_100b8a4e8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045a50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ada4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ada4,&DAT_100f37e00);
  DAT_101045a50 = pTVar1;
  return;
}


