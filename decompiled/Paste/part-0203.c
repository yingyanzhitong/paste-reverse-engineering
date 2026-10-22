/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10025455c | FUN_10025455c */

void FUN_10025455c(__int64 param_1,byte param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  Hasher HVar7;
  String SVar8;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  pcVar1 = "verified";
  pcVar4 = &DAT_d000000000000032;
  if (param_2 != 4) {
    pcVar1 = "onBarViewModel.swift";
    pcVar4 = (char *)0xd00000000000002d;
  }
  pcVar3 = "tion.annual.legacy";
  pcVar5 = &DAT_d000000000000032;
  if (param_2 != 3) {
    pcVar3 = pcVar1;
    pcVar5 = pcVar4;
  }
  pcVar1 = (char *)0xd00000000000002b;
  pcVar4 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (param_2 != 1) {
    pcVar1 = (char *)0xd000000000000031;
    pcVar4 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar2 = "e.macos.subscription.annual";
  pcVar6 = (char *)0xd00000000000002c;
  if (param_2 != 0) {
    pcVar2 = pcVar4 + 0x20;
    pcVar6 = pcVar1;
  }
  if (param_2 < 3) {
    pcVar3 = pcVar2;
    pcVar5 = pcVar6;
  }
  SVar8.bridgeObject = (void *)((ulong)pcVar3 | 0x8000000000000000);
  SVar8.str = pcVar5;
  Swift::String::hash((Hasher)auStack_68,SVar8);
  HVar7.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar7);
  return;
}



/* Address: 0x100254644 | FUN_100254644 */

void FUN_100254644(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  String SVar6;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  puVar2 = (undefined1 *)0x8000000100d9f490;
  pcVar3 = (char *)0xd000000000000011;
  if (param_2 != 4) {
    puVar2 = (undefined1 *)0xeb00000000656369;
    pcVar3 = (char *)0x6f684369746c756d;
  }
  HVar5.unknown = (undefined1 *)0xec0000006563696f;
  pcVar4 = (char *)0x6843656c676e6973;
  if (param_2 != 3) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar3;
  }
  pcVar3 = (char *)0x6972466b63616c62;
  if (param_2 != 1) {
    pcVar3 = (char *)0x6e6f4d7265627963;
  }
  pcVar1 = (char *)0x746c7561666564;
  if (param_2 != 0) {
    pcVar1 = pcVar3;
  }
  puVar2 = &DAT_e700000000000000;
  if (param_2 != 0) {
    puVar2 = (undefined1 *)0xeb00000000796164;
  }
  if (param_2 < 3) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100254768 | FUN_100254768 */

void FUN_100254768(void)

{
  undefined1 *unaff_x20;
  
  FUN_100254348(*unaff_x20);
  return;
}



/* Address: 0x100254770 | FUN_100254770 */

void FUN_100254770(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  
  bVar4 = *unaff_x20;
  puVar2 = (undefined1 *)0x8000000100d9f490;
  pcVar5 = (char *)0xd000000000000011;
  if (bVar4 != 4) {
    puVar2 = (undefined1 *)0xeb00000000656369;
    pcVar5 = (char *)0x6f684369746c756d;
  }
  puVar3 = (undefined1 *)0xec0000006563696f;
  pcVar6 = (char *)0x6843656c676e6973;
  if (bVar4 != 3) {
    puVar3 = puVar2;
    pcVar6 = pcVar5;
  }
  pcVar5 = (char *)0x6972466b63616c62;
  if (bVar4 != 1) {
    pcVar5 = (char *)0x6e6f4d7265627963;
  }
  pcVar1 = (char *)0x746c7561666564;
  if (bVar4 != 0) {
    pcVar1 = pcVar5;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xeb00000000796164;
  }
  if (bVar4 < 3) {
    puVar3 = puVar2;
    pcVar6 = pcVar1;
  }
  SVar7.bridgeObject = puVar3;
  SVar7.str = pcVar6;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x100254870 | FUN_100254870 */

void FUN_100254870(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100254644(param_1,*unaff_x20);
  return;
}



/* Address: 0x100254878 | FUN_100254878 */

void FUN_100254878(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100255b58(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1002548a4 | FUN_1002548a4 */

void FUN_1002548a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  puVar2 = (undefined1 *)0x8000000100d9f490;
  uVar5 = 0xd000000000000011;
  if (bVar4 != 4) {
    puVar2 = (undefined1 *)0xeb00000000656369;
    uVar5 = 0x6f684369746c756d;
  }
  puVar3 = (undefined1 *)0xec0000006563696f;
  uVar6 = 0x6843656c676e6973;
  if (bVar4 != 3) {
    puVar3 = puVar2;
    uVar6 = uVar5;
  }
  uVar5 = 0x6972466b63616c62;
  if (bVar4 != 1) {
    uVar5 = 0x6e6f4d7265627963;
  }
  uVar1 = 0x746c7561666564;
  if (bVar4 != 0) {
    uVar1 = uVar5;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xeb00000000796164;
  }
  if (bVar4 < 3) {
    puVar3 = puVar2;
    uVar6 = uVar1;
  }
  *param_1 = uVar6;
  param_1[1] = puVar3;
  return;
}



/* Address: 0x100254988 | FUN_100254988 */

void FUN_100254988(void)

{
  FUN_100255bbc();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x1002549e4 | FUN_1002549e4 */

void FUN_1002549e4(void)

{
  FUN_100255bbc();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x100254a30 | thunk_FUN_100254a34 */

void thunk_FUN_100254a34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8728 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38510;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38510,&DAT_100ec4358);
  DAT_100fb8728 = pTVar1;
  return;
}



/* Address: 0x100254a34 | FUN_100254a34 */

void FUN_100254a34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb8728 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38510;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38510,&DAT_100ec4358);
  DAT_100fb8728 = pTVar1;
  return;
}



/* Address: 0x100254a74 | FUN_100254a74 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002554ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100254a74(undefined8 param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  ulong *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  Storage storage;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  ObservedObject<undefined> OVar16;
  code *pcVar17;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar18;
  long extraout_x8_01;
  long lVar19;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x8_13;
  long extraout_x8_14;
  long extraout_x8_15;
  long lVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  long lVar26;
  undefined8 *puVar27;
  undefined8 *puVar28;
  long lVar29;
  undefined8 *local_150;
  long local_148 [2];
  undefined *local_138;
  undefined8 *local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 local_78;
  undefined1 local_69;
  
  local_80 = CONCAT44(local_80._4_4_,param_4);
  lVar10 = 0;
  local_b8 = param_3;
  local_b0 = param_2;
  local_88 = param_1;
  FUN_1002abb94();
  local_148[1] = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar19 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  local_148[0] = lVar19;
  FUN_1002969bc();
  local_f0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar18 = (undefined8 *)(lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fb87f0;
  local_130 = puVar18;
  FUN_1000037f0(&DAT_100fb87f0,&DAT_100c38540);
  local_100 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)puVar18 - extraout_x8_01;
  puVar11 = &DAT_100fb87f8;
  local_f8 = lVar19;
  FUN_1000037f0(&DAT_100fb87f8,&DAT_100c39670);
  local_90 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_02;
  puVar11 = &DAT_100fb8800;
  local_e8 = lVar19;
  FUN_1000037f0(&DAT_100fb8800,&DAT_100c38550);
  local_138 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar19 - extraout_x8_03;
  lVar10 = 0;
  local_120 = lVar19;
  FUN_1002994c0();
  local_128 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar18 = (undefined8 *)(lVar19 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fb8808;
  local_150 = puVar18;
  FUN_1000037f0(&DAT_100fb8808,&DAT_100c38558);
  local_108 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = (long)puVar18 - extraout_x8_05;
  lVar10 = 0;
  local_118 = lVar19;
  FUN_1002a4eb4();
  local_110 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar28 = (undefined8 *)(lVar19 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fb8810;
  FUN_1000037f0(&DAT_100fb8810,&DAT_100c38560);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar29 = (long)puVar28 - extraout_x8_07;
  puVar12 = &DAT_100fb8818;
  FUN_1000037f0(&DAT_100fb8818,&DAT_100c38568);
  local_c8 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = lVar29 - extraout_x8_08;
  lVar10 = 0;
  FUN_1002a2574();
  local_e0 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  puVar24 = (undefined8 *)(lVar22 - (extraout_x8_09 + 0xfU & 0xfffffffffffffff0));
  puVar12 = &DAT_100fb8820;
  FUN_1000037f0(&DAT_100fb8820,&DAT_100c38570);
  local_a8 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_100fb8828;
  local_98 = (long)puVar24 - extraout_x8_10;
  FUN_1000037f0(&DAT_100fb8828,&DAT_100c38578);
  local_d8 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar25 = ((long)puVar24 - extraout_x8_10) - extraout_x8_11;
  puVar12 = &DAT_100fb8830;
  FUN_1000037f0(&DAT_100fb8830,&DAT_100c38580);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar26 = lVar25 - extraout_x8_12;
  puVar13 = &DAT_100fb8838;
  FUN_1000037f0(&DAT_100fb8838,&DAT_100c39660);
  local_d0 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = lVar26 - extraout_x8_13;
  puVar13 = &DAT_100fb8840;
  FUN_1000037f0(&DAT_100fb8840,&DAT_100c38590);
  local_a0 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar14 = 0;
  local_c0 = lVar20 - extraout_x8_14;
  FUN_10028c73c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(uVar14 - 8) + 0x40));
  lVar9 = local_b0;
  lVar19 = local_e0;
  lVar10 = local_128;
  puVar18 = local_150;
  puVar27 = (undefined8 *)((lVar20 - extraout_x8_14) - (extraout_x8_15 + 0xfU & 0xfffffffffffffff0))
  ;
  uVar3 = (uint)local_80 & 0xff;
  storage.value = (__int8)lVar25;
  if (uVar3 < 3) {
    if ((local_80 & 0xff) == 0) {
      FUN_1000c495c(local_b8,(long)puVar27 + (long)*(int *)(uVar14 + 0x14),FUN_1002abb94);
      uVar15 = 0;
      FUN_10025cdc8();
      puVar11 = &DAT_100fb7f50;
      FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
      _swift_retain(local_b0);
      OVar16 = SwiftUI::ObservedObject::init(puVar11,uVar15,puVar11);
      *puVar27 = OVar16.unknown;
      puVar27[1] = uVar15;
      FUN_1000c495c(puVar27,lVar26,FUN_10028c73c);
      _swift_storeEnumTagMultiPayload(lVar26,puVar12,0);
      FUN_100003a00(&DAT_100fb8858,FUN_10028c73c,&TargetProtocolConformanceDescriptor_100c3ad10);
      FUN_100003a00(&DAT_100fb8878,FUN_1002a2574,&TargetProtocolConformanceDescriptor_100c3bb08);
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
      FUN_100011090(lVar20,lVar25,&DAT_100fb8838,&DAT_100c39660);
      _swift_storeEnumTagMultiPayload(lVar25,local_d8,0);
      FUN_100255d1c();
      FUN_100255dc4();
      uVar14 = local_c0;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
      FUN_100005808(lVar20,&DAT_100fb8838,&DAT_100c39660);
      lVar10 = local_98;
      FUN_100011090(uVar14,local_98,&DAT_100fb8840,&DAT_100c38590);
      _swift_storeEnumTagMultiPayload(lVar10,local_a8,0);
      FUN_100255ca4();
      FUN_100255e6c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
      FUN_100005808(uVar14,&DAT_100fb8840,&DAT_100c38590);
      pcVar17 = FUN_10028c73c;
      puVar28 = puVar27;
    }
    else {
      puVar28 = puVar24;
      if (uVar3 == 1) {
        FUN_1000c495c(local_b8,(long)puVar24 + (long)*(int *)(local_e0 + 0x14),FUN_1002abb94);
        uVar15 = 0;
        FUN_10025cdc8();
        puVar11 = &DAT_100fb7f50;
        FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
        _swift_retain(local_b0);
        OVar16 = SwiftUI::ObservedObject::init(puVar11,uVar15,puVar11);
        *puVar24 = OVar16.unknown;
        puVar24[1] = uVar15;
        *(undefined1 *)((long)puVar24 + (long)*(int *)(lVar19 + 0x18)) = 0;
        pcVar17 = FUN_1002a2574;
        FUN_1000c495c(puVar24,lVar26,FUN_1002a2574);
        _swift_storeEnumTagMultiPayload(lVar26,puVar12,1);
        FUN_100003a00(&DAT_100fb8858,FUN_10028c73c,&TargetProtocolConformanceDescriptor_100c3ad10);
        FUN_100003a00(&DAT_100fb8878,FUN_1002a2574,&TargetProtocolConformanceDescriptor_100c3bb08);
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar26);
        FUN_100011090(lVar20,lVar25,&DAT_100fb8838,&DAT_100c39660);
        _swift_storeEnumTagMultiPayload(lVar25,local_d8,0);
        FUN_100255d1c();
        FUN_100255dc4();
        uVar14 = local_c0;
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
        FUN_100005808(lVar20,&DAT_100fb8838,&DAT_100c39660);
        lVar10 = local_98;
        FUN_100011090(uVar14,local_98,&DAT_100fb8840,&DAT_100c38590);
        _swift_storeEnumTagMultiPayload(lVar10,local_a8,0);
        FUN_100255ca4();
        FUN_100255e6c();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
        FUN_100005808(uVar14,&DAT_100fb8840,&DAT_100c38590);
      }
      else {
        FUN_1000c495c(local_b8,(long)puVar24 + (long)*(int *)(local_e0 + 0x14),FUN_1002abb94);
        uVar15 = 0;
        FUN_10025cdc8();
        puVar12 = &DAT_100fb7f50;
        FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
        _swift_retain(local_b0);
        OVar16 = SwiftUI::ObservedObject::init(puVar12,uVar15,puVar12);
        *puVar24 = OVar16.unknown;
        puVar24[1] = uVar15;
        *(undefined1 *)((long)puVar24 + (long)*(int *)(lVar19 + 0x18)) = 1;
        pcVar17 = FUN_1002a2574;
        FUN_1000c495c(puVar24,lVar29,FUN_1002a2574);
        _swift_storeEnumTagMultiPayload(lVar29,puVar11,0);
        FUN_100003a00(&DAT_100fb8878,FUN_1002a2574,&TargetProtocolConformanceDescriptor_100c3bb08);
        FUN_100003a00(&DAT_100fb8888,FUN_1002a4eb4,&TargetProtocolConformanceDescriptor_100c3bd50);
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar29);
        FUN_100011090(lVar22,lVar25,&DAT_100fb8818,&DAT_100c38568);
        _swift_storeEnumTagMultiPayload(lVar25,local_d8,1);
        FUN_100255d1c();
        FUN_100255dc4();
        uVar14 = local_c0;
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
        FUN_100005808(lVar22,&DAT_100fb8818,&DAT_100c38568);
        lVar10 = local_98;
        FUN_100011090(uVar14,local_98,&DAT_100fb8840,&DAT_100c38590);
        _swift_storeEnumTagMultiPayload(lVar10,local_a8,0);
        FUN_100255ca4();
        FUN_100255e6c();
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
        FUN_100005808(uVar14,&DAT_100fb8840,&DAT_100c38590);
      }
    }
  }
  else if (uVar3 == 3) {
    FUN_1000c495c(local_b8,(long)puVar28 + (long)*(int *)(local_110 + 0x14),FUN_1002abb94);
    uVar15 = 0;
    FUN_10025cdc8();
    puVar12 = &DAT_100fb7f50;
    FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
    _swift_retain(local_b0);
    OVar16 = SwiftUI::ObservedObject::init(puVar12,uVar15,puVar12);
    *puVar28 = OVar16.unknown;
    puVar28[1] = uVar15;
    pcVar17 = FUN_1002a4eb4;
    FUN_1000c495c(puVar28,lVar29,FUN_1002a4eb4);
    _swift_storeEnumTagMultiPayload(lVar29,puVar11,1);
    FUN_100003a00(&DAT_100fb8878,FUN_1002a2574,&TargetProtocolConformanceDescriptor_100c3bb08);
    FUN_100003a00(&DAT_100fb8888,FUN_1002a4eb4,&TargetProtocolConformanceDescriptor_100c3bd50);
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar29);
    FUN_100011090(lVar22,lVar25,&DAT_100fb8818,&DAT_100c38568);
    _swift_storeEnumTagMultiPayload(lVar25,local_d8,1);
    FUN_100255d1c();
    FUN_100255dc4();
    uVar14 = local_c0;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init(storage);
    FUN_100005808(lVar22,&DAT_100fb8818,&DAT_100c38568);
    lVar10 = local_98;
    FUN_100011090(uVar14,local_98,&DAT_100fb8840,&DAT_100c38590);
    _swift_storeEnumTagMultiPayload(lVar10,local_a8,0);
    FUN_100255ca4();
    FUN_100255e6c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
    FUN_100005808(uVar14,&DAT_100fb8840,&DAT_100c38590);
  }
  else {
    if (uVar3 == 4) {
      puVar1 = (ulong *)(local_b0 + _TtC22PasteLicensingAppStore16PaywallViewModel::offer);
      uVar21 = puVar1[4];
      if (uVar21 == 0) {
        FUN_1000c495c(local_b8,(long)puVar27 + (long)*(int *)(uVar14 + 0x14),FUN_1002abb94);
        uVar15 = 0;
        FUN_10025cdc8();
        puVar11 = &DAT_100fb7f50;
        FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
        _swift_retain(lVar9);
        OVar16 = SwiftUI::ObservedObject::init(puVar11,uVar15,puVar11);
        *puVar27 = OVar16.unknown;
        puVar27[1] = uVar15;
        lVar10 = local_120;
        pcVar17 = FUN_10028c73c;
        FUN_1000c495c(puVar27,local_120,FUN_10028c73c);
        _swift_storeEnumTagMultiPayload(lVar10,local_138,1);
        FUN_100003a00(&DAT_100fb8850,FUN_1002994c0,&TargetProtocolConformanceDescriptor_100c3b540);
        FUN_100003a00(&DAT_100fb8858,FUN_10028c73c,&TargetProtocolConformanceDescriptor_100c3ad10);
        lVar19 = local_118;
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
      }
      else {
        uVar23 = puVar1[5];
        uVar4 = puVar1[2];
        uVar6 = puVar1[3];
        uVar5 = *puVar1;
        uVar7 = puVar1[1];
        local_c0 = uVar5 >> 8;
        local_80 = uVar14;
        FUN_1000c495c(local_b8,(long)local_150 + (long)*(int *)(local_128 + 0x14),FUN_1002abb94);
        _swift_retain(lVar9);
        FUN_100255efc(uVar5,uVar7,uVar4,uVar6,uVar21,uVar23);
        uVar15 = 0;
        FUN_10025cdc8();
        puVar11 = &DAT_100fb7f50;
        FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
        OVar16 = SwiftUI::ObservedObject::init(puVar11,uVar15,puVar11);
        *puVar18 = OVar16.unknown;
        puVar18[1] = uVar15;
        puVar2 = (undefined1 *)((long)puVar18 + (long)*(int *)(lVar10 + 0x18));
        *puVar2 = (char)uVar5;
        puVar2[1] = (char)local_c0;
        *(ulong *)(puVar2 + 8) = uVar7;
        *(ulong *)(puVar2 + 0x10) = uVar4;
        *(ulong *)(puVar2 + 0x18) = uVar6;
        *(ulong *)(puVar2 + 0x20) = uVar21;
        *(ulong *)(puVar2 + 0x28) = uVar23;
        local_69 = 0;
        SwiftUI::State::init
                  ((long)puVar18 + (long)*(int *)(lVar10 + 0x1c),OVar16.unknown,
                   PTR___type_metadata_for_Swift_Bool_100eac570);
        local_78 = 0;
        SwiftUI::State::init
                  ((long)puVar18 + (long)*(int *)(lVar10 + 0x20),OVar16.unknown,
                   PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528);
        lVar10 = local_120;
        pcVar17 = FUN_1002994c0;
        FUN_1000c495c(puVar18,local_120,FUN_1002994c0);
        _swift_storeEnumTagMultiPayload(lVar10,local_138,0);
        FUN_100003a00(&DAT_100fb8850,FUN_1002994c0,&TargetProtocolConformanceDescriptor_100c3b540);
        FUN_100003a00(&DAT_100fb8858,FUN_10028c73c,&TargetProtocolConformanceDescriptor_100c3ad10);
        lVar19 = local_118;
        (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
        puVar27 = puVar18;
      }
      FUN_10005241c(puVar27,pcVar17);
      lVar10 = local_f8;
      FUN_100011090(lVar19,local_f8,&DAT_100fb8808,&DAT_100c38558);
      _swift_storeEnumTagMultiPayload(lVar10,local_100,0);
      FUN_100255bfc();
      FUN_100003a00(&DAT_100fb8860,FUN_1002969bc,&TargetProtocolConformanceDescriptor_100c3b3e0);
      lVar9 = local_e8;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
      lVar10 = local_98;
      FUN_100011090(lVar9,local_98,&DAT_100fb87f8,&DAT_100c39670);
      _swift_storeEnumTagMultiPayload(lVar10,local_a8,1);
      FUN_100255ca4();
      FUN_100255e6c();
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
      FUN_100005808(lVar9,&DAT_100fb87f8,&DAT_100c39670);
      FUN_100005808(lVar19,&DAT_100fb8808,&DAT_100c38558);
      return;
    }
    uVar15 = 0;
    FUN_10025cdc8();
    puVar11 = &DAT_100fb7f50;
    FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
    _swift_retain(local_b0);
    OVar16 = SwiftUI::ObservedObject::init(puVar11,uVar15,puVar11);
    puVar28 = local_130;
    *local_130 = OVar16.unknown;
    puVar28[1] = uVar15;
    iVar8 = *(int *)(local_f0 + 0x14);
    FUN_1000c495c(local_b8,local_148[0],FUN_1002abb94);
    SwiftUI::State::init((long)puVar28 + (long)iVar8,OVar16.unknown,local_148[1]);
    lVar10 = local_f8;
    pcVar17 = FUN_1002969bc;
    FUN_1000c495c(puVar28,local_f8,FUN_1002969bc);
    _swift_storeEnumTagMultiPayload(lVar10,local_100,1);
    FUN_100255bfc();
    FUN_100003a00(&DAT_100fb8860,FUN_1002969bc,&TargetProtocolConformanceDescriptor_100c3b3e0);
    lVar19 = local_e8;
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
    lVar10 = local_98;
    FUN_100011090(lVar19,local_98,&DAT_100fb87f8,&DAT_100c39670);
    _swift_storeEnumTagMultiPayload(lVar10,local_a8,1);
    FUN_100255ca4();
    FUN_100255e6c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar10);
    FUN_100005808(lVar19,&DAT_100fb87f8,&DAT_100c39670);
  }
  FUN_10005241c(puVar28,pcVar17);
  return;
}



/* Address: 0x100255b58 | FUN_100255b58 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100255b94 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100255b58(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb81b0,&DAT_100c37eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x100255bbc | FUN_100255bbc */

void FUN_100255bbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb87e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38498;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38498,&DAT_100ec4358);
  DAT_100fb87e8 = pTVar1;
  return;
}



/* Address: 0x100255bfc | FUN_100255bfc */

void FUN_100255bfc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb8848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb8808;
  FUN_100005c24(&DAT_100fb8808,&DAT_100c38558);
  puVar2 = &DAT_100fb8850;
  FUN_100003a00(&DAT_100fb8850,FUN_1002994c0,&TargetProtocolConformanceDescriptor_100c3b540);
  puVar3 = &DAT_100fb8858;
  FUN_100003a00(&DAT_100fb8858,FUN_10028c73c,&TargetProtocolConformanceDescriptor_100c3ad10);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb8848 = puVar4;
  return;
}



/* Address: 0x100255ca4 | FUN_100255ca4 */

void FUN_100255ca4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb8868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb8840;
  FUN_100005c24(&DAT_100fb8840,&DAT_100c38590);
  puVar2 = puVar1;
  FUN_100255d1c();
  puVar3 = puVar2;
  FUN_100255dc4();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb8868 = puVar4;
  return;
}



/* Address: 0x100255d1c | FUN_100255d1c */

void FUN_100255d1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb8870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb8838;
  FUN_100005c24(&DAT_100fb8838,&DAT_100c39660);
  puVar2 = &DAT_100fb8858;
  FUN_100003a00(&DAT_100fb8858,FUN_10028c73c,&TargetProtocolConformanceDescriptor_100c3ad10);
  puVar3 = &DAT_100fb8878;
  FUN_100003a00(&DAT_100fb8878,FUN_1002a2574,&TargetProtocolConformanceDescriptor_100c3bb08);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb8870 = puVar4;
  return;
}



/* Address: 0x100255dc4 | FUN_100255dc4 */

void FUN_100255dc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb8880 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb8818;
  FUN_100005c24(&DAT_100fb8818,&DAT_100c38568);
  puVar2 = &DAT_100fb8878;
  FUN_100003a00(&DAT_100fb8878,FUN_1002a2574,&TargetProtocolConformanceDescriptor_100c3bb08);
  puVar3 = &DAT_100fb8888;
  FUN_100003a00(&DAT_100fb8888,FUN_1002a4eb4,&TargetProtocolConformanceDescriptor_100c3bd50);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb8880 = puVar4;
  return;
}



/* Address: 0x100255e6c | FUN_100255e6c */

void FUN_100255e6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb8890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb87f8;
  FUN_100005c24(&DAT_100fb87f8,&DAT_100c39670);
  puVar2 = puVar1;
  FUN_100255bfc();
  puVar3 = &DAT_100fb8860;
  FUN_100003a00(&DAT_100fb8860,FUN_1002969bc,&TargetProtocolConformanceDescriptor_100c3b3e0);
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fb8890 = puVar4;
  return;
}



/* Address: 0x100255efc | FUN_100255efc */

void FUN_100255efc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  if (param_5 != 0) {
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_5);
    return;
  }
  return;
}



/* Address: 0x100255f2c | FUN_100255f2c */

void FUN_100255f2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  SubscriptionInfo SVar4;
  ulong uVar5;
  Product PVar6;
  long lVar7;
  DateComponents DVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x20;
  long unaff_x22;
  long lVar11;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  puVar2 = &DAT_100fb8658;
  FUN_1000037f0(&DAT_100fb8658,&DAT_100c38220);
  puVar3 = (undefined *)(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x20) = puVar3;
  SVar4 = StoreKit::Product::SubscriptionInfo::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = SVar4.unknown;
  lVar11 = *(long *)(SVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar11;
  uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar5;
  puVar2 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  PVar6.unknown =
       (undefined *)(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x40) = PVar6.unknown;
  lVar7 = 0;
  FUN_1002abb94();
  FUN_100011090(unaff_x20 + *(int *)(lVar7 + 0x18),PVar6.unknown,&DAT_100fb8db8,&DAT_100c38680);
  lVar7 = 0;
  FUN_1002abbf0();
  puVar2 = PVar6.unknown;
  (**(code **)(*(long *)(lVar7 + -8) + 0x30))(PVar6.unknown,1,lVar7);
  if ((int)puVar2 == 1) {
    puVar2 = &DAT_100fb8db8;
    puVar9 = &DAT_100c38680;
    puVar3 = PVar6.unknown;
  }
  else {
    puVar2 = PVar6.unknown;
    _swift_getEnumCaseMultiPayload(PVar6.unknown,lVar7);
    if ((int)puVar2 != 0) {
      FUN_10005241c(PVar6.unknown,FUN_1002abbf0);
      goto LAB_100256078;
    }
    DVar8 = Foundation::DateComponents::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar8.unknown + -8) + 8))(PVar6.unknown,DVar8.unknown);
    StoreKit::Product::_get_subscription(PVar6);
    puVar2 = puVar3;
    (**(code **)(lVar11 + 0x30))(puVar3,1,SVar4.unknown);
    if ((int)puVar2 != 1) {
      (**(code **)(lVar11 + 0x20))(uVar5,puVar3,SVar4.unknown);
      _swift_task_switch(FUN_100256160,0,0);
      return;
    }
    puVar2 = &DAT_100fb8658;
    puVar9 = &DAT_100c38220;
  }
  FUN_100005808(puVar3,puVar2,puVar9);
LAB_100256078:
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001002560b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x100256160 | FUN_100256160 */

void FUN_100256160(SubscriptionInfo param_1,undefined8 param_2,SubscriptionInfo param_3)

{
  long *plVar1;
  long unaff_x22;
  String for;
  
  for = StoreKit::Product::SubscriptionInfo::get_subscriptionGroupID(param_1);
  *(void **)(unaff_x22 + 0x48) = for.bridgeObject;
  plVar1 = (long *)(ulong)*(uint *)(PTR__isEligibleForIntroOffer_100ea7f68 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002561c4;
  StoreKit::Product::SubscriptionInfo::_isEligibleForIntroOffer(for,param_3);
  return;
}



/* Address: 0x1002561c4 | FUN_1002561c4 */

void FUN_1002561c4(undefined1 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x48);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  *(undefined1 *)(lVar4 + 0x58) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x50));
  _swift_bridgeObjectRelease(uVar1);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_10025623c,uVar2,uVar3);
  return;
}



/* Address: 0x10025623c | FUN_10025623c */

void FUN_10025623c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x30) + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x28));
  uVar2 = *(undefined1 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010025629c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Address: 0x1002562a0 | FUN_1002562a0 */

void FUN_1002562a0(void)

{
  FUN_1000c6944(&DAT_100c38718,&DAT_100c38740);
  return;
}



/* Address: 0x1002562b4 | thunk_FUN_10025f09c */

void thunk_FUN_10025f09c(void)

{
  FUN_10025f09c();
  return;
}



/* Address: 0x1002562b8 | FUN_1002562b8 */

undefined8 FUN_1002562b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c38778;
  _swift_getKeyPath(&DAT_100c38778);
  puVar2 = &DAT_100c387a0;
  _swift_getKeyPath(&DAT_100c387a0);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x100256328 | FUN_100256328 */

void FUN_100256328(void)

{
  FUN_1000abcec(&DAT_100c387c0,&DAT_100c387e8);
  return;
}



/* Address: 0x10025633c | FUN_10025633c */

void FUN_10025633c(void)

{
  FUN_1000abcec(&DAT_100c388f0,&DAT_100c38918);
  return;
}



/* Address: 0x100256350 | FUN_100256350 */

void FUN_100256350(void)

{
  FUN_1000abcec(&DAT_100c38938,&DAT_100c38960);
  return;
}



/* Address: 0x100256364 | FUN_100256364 */

void FUN_100256364(void)

{
  FUN_1000c6944(&DAT_100c38858,&DAT_100c38880);
  return;
}



/* Address: 0x100256378 | FUN_100256378 */

undefined1 FUN_100256378(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_31;
  
  puVar1 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar2 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
  Combine::Published::_get_subscript(&local_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_31;
}



/* Address: 0x1002563e8 | FUN_1002563e8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002566b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002563e8(undefined8 param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar11;
  long lVar12;
  code *pcVar13;
  ID self;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_140;
  undefined *local_138;
  long local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  undefined *puStack_f8;
  long local_f0;
  long local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined4 local_cc;
  long local_c8;
  undefined *local_c0 [3];
  long local_a8;
  undefined1 auStack_a0 [48];
  undefined8 local_70 [2];
  
  puVar3 = &DAT_100fb8220;
  local_d8 = param_1;
  local_cc = param_2;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fb8ef8;
  local_c8 = (long)&local_140 - extraout_x8;
  FUN_1000037f0(&DAT_100fb8ef8,&DAT_100c389a0);
  local_e8 = *(long *)(puVar3 + -8);
  puStack_e0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&local_140 - extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100fb8ef0;
  local_f0 = lVar10;
  FUN_1000037f0(&DAT_100fb8ef0,&DAT_100c38998);
  local_100 = *(long *)(puVar3 + -8);
  puStack_f8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar10 - extraout_x8_01;
  puVar3 = &DAT_100fb8618;
  local_108 = lVar10;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  local_110 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12;
  puVar3 = &DAT_100fb8ee8;
  local_120 = lVar10;
  FUN_1000037f0(&DAT_100fb8ee8,&DAT_100c38990);
  local_130 = *(long *)(puVar3 + -8);
  local_128 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_130 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar10 = lVar10 - extraout_x8_03;
  puVar3 = &DAT_100fb8ee0;
  FUN_1000037f0(&DAT_100fb8ee0,&DAT_100c38988);
  local_140 = *(long *)(puVar3 + -8);
  local_138 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar16 = lVar10 - extraout_x8_04;
  puVar3 = &DAT_100fb8ed8;
  FUN_1000037f0(&DAT_100fb8ed8,&DAT_100c38980);
  lVar14 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar16 - extraout_x8_05;
  lVar4 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar12 = lVar15 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::_state;
  lVar11 = lVar12 - extraout_x12_00;
  _swift_storeEnumTagMultiPayload(lVar11,lVar4,2);
  FUN_1000c495c(lVar11,lVar12,FUN_10025cfc4);
  Combine::Published::init(lVar15,lVar4,lVar4);
  FUN_10005241c(lVar11,FUN_10025cfc4);
  (**(code **)(lVar14 + 0x20))(unaff_x20 + lVar8,lVar15,puVar3);
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::_subscriptionsTrialEligibility;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002b2bec();
  puVar3 = &DAT_100fb8990;
  local_c0[0] = puVar5;
  FUN_1000037f0(&DAT_100fb8990,&DAT_100c385b8);
  Combine::Published::init(lVar16,puVar3,puVar3);
  (**(code **)(local_140 + 0x20))(unaff_x20 + lVar8,lVar16,local_138);
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::_isTrialEligible;
  puVar5 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_c0[0] = (undefined *)((ulong)local_c0[0] & 0xffffffffffffff00);
  Combine::Published::init(lVar10,puVar3,PTR___type_metadata_for_Swift_Bool_100eac570);
  puVar7 = local_128;
  pcVar13 = *(code **)(local_130 + 0x20);
  (*pcVar13)(unaff_x20 + lVar8,lVar10,local_128);
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::_isShowingAllPlans;
  local_c0[0] = (undefined *)((ulong)local_c0[0] & 0xffffffffffffff00);
  Combine::Published::init(lVar10,puVar3,puVar5);
  (*pcVar13)(unaff_x20 + lVar8,lVar10,puVar7);
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::_isShowingTrialStarted;
  local_c0[0] = (undefined *)((ulong)local_c0[0] & 0xffffffffffffff00);
  Combine::Published::init(lVar10,puVar3,puVar5);
  (*pcVar13)(unaff_x20 + lVar8,lVar10,puVar7);
  *(undefined **)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions) =
       puVar6;
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::_defaultSubscription;
  lVar11 = 0;
  FUN_1002abb94();
  lVar4 = local_120;
  pcVar13 = *(code **)(*(long *)(lVar11 + -8) + 0x38);
  (*pcVar13)(local_120,1,1,lVar11);
  FUN_100011090(lVar4,local_118,&DAT_100fb8618,&DAT_100c385c0);
  lVar10 = local_108;
  Combine::Published::init(local_108,lVar11,local_110);
  FUN_100005808(lVar4,&DAT_100fb8618,&DAT_100c385c0);
  (**(code **)(local_100 + 0x20))(unaff_x20 + lVar8,lVar10,puStack_f8);
  lVar4 = local_f0;
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::_effectiveVariant;
  local_c0[0] = (undefined *)CONCAT71(local_c0[0]._1_7_,3);
  Combine::Published::init(local_f0,lVar11,&DAT_100ec4358);
  (**(code **)(local_e8 + 0x20))(unaff_x20 + lVar8,lVar4,puStack_e0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::offer);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  (*pcVar13)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription,1,1,
             lVar11);
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::licenseManager;
  puVar3 = &DAT_100c389c0;
  _swift_getKeyPath();
  puVar5 = &DAT_100fb7d08;
  FUN_1000037f0(&DAT_100fb7d08,&DAT_100c375f0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar5);
  *(undefined **)(unaff_x20 + lVar8) = puVar3;
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptionManager;
  puVar3 = &DAT_100c389f8;
  _swift_getKeyPath();
  puVar5 = &DAT_100fb7cf8;
  FUN_1000037f0(&DAT_100fb7cf8,&DAT_100c37550);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar5);
  *(undefined **)(unaff_x20 + lVar8) = puVar3;
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::localNotificationService;
  puVar3 = &DAT_100c38a28;
  _swift_getKeyPath();
  puVar5 = &DAT_100fb8f10;
  FUN_1000037f0(&DAT_100fb8f10,&DAT_100c38a58);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar5);
  *(undefined **)(unaff_x20 + lVar8) = puVar3;
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::offerManager;
  puVar3 = &DAT_100c38a60;
  puVar6 = puVar3;
  _swift_getKeyPath();
  puVar5 = &DAT_100fb83c0;
  FUN_1000037f0(&DAT_100fb83c0,&DAT_100c37ef8);
  puVar7 = puVar5;
  _swift_allocObject();
  FUN_1000da6e0(puVar6,puVar7);
  *(undefined **)(unaff_x20 + lVar8) = puVar6;
  lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::analytics;
  puVar6 = &DAT_100c38a90;
  _swift_getKeyPath();
  puVar7 = &DAT_100fb85d8;
  FUN_1000037f0(&DAT_100fb85d8,&DAT_100c38ac0);
  uVar9 = 7;
  _swift_allocObject();
  FUN_1000da6e0();
  *(undefined **)(unaff_x20 + lVar8) = puVar6;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::_paywallVariant);
  puVar6 = &DAT_100c38ac8;
  _swift_getKeyPath();
  FUN_1002d0bc8();
  uVar2 = local_d8;
  *puVar1 = puVar6;
  puVar1[1] = puVar7;
  puVar1[2] = uVar9;
  *(undefined1 *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::hasAppeared) = 0;
  *(undefined1 *)
   (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::hasRegisteredDismissal) = 0;
  *(undefined1 *)
   (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::isTrialStartedPresentationPending) =
       0;
  *(undefined **)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::cancellables) =
       PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined8 *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::restorePurchasesTask)
       = 0;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::pendingRestoreError);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  FUN_100018280(local_d8,unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::router);
  *(char *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::placement) = (char)local_cc;
  _swift_getKeyPath(&DAT_100c38a60);
  _swift_initStackObject(puVar5,auStack_a0);
  FUN_1000da6e0(puVar3,puVar5);
  FUN_1000da768(local_70);
  _swift_release(puVar3);
  FUN_1000da768(&local_a8);
  self = *(ID *)(local_a8 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
  objc_stub::lock(self);
  lVar8 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest;
  _swift_beginAccess(local_a8 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest,
                     local_c0,0,0);
  lVar4 = local_c8;
  FUN_100011090(local_a8 + lVar8,local_c8,&DAT_100fb8220,&DAT_100c37df0);
  objc_stub::unlock(self);
  _swift_release(local_a8);
  lVar8 = lVar4;
  FUN_100250114();
  _swift_release(local_70[0]);
  FUN_100004594(uVar2);
  FUN_100005808(lVar4,&DAT_100fb8220,&DAT_100c37df0);
  *(bool *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::hasPendingRetentionOffer) =
       ((uint)lVar8 & 0xff) != 2;
  return;
}



/* Address: 0x100256c3c | FUN_100256c3c */

void FUN_100256c3c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  MainActor *pMVar12;
  Published *pPVar13;
  MainActor *pMVar14;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  long lVar16;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  lVar4 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  local_68 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PaywallViewModel.swift",0x2d,1,0x4a,UVar7.unknown,puVar6);
  }
  lVar9 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar9 + -8) + 0x30))(param_1,1,lVar9);
  if ((int)param_1 == 1) {
    _swift_release(pMVar5);
    return;
  }
  lVar9 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (lVar9 != 0) {
    puVar10 = &DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar11 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    Combine::Published::_get_subscript(lVar16 - extraout_x12_01,lVar9,puVar10,puVar11);
    _swift_release(lVar9);
    _swift_release(puVar10);
    _swift_release(puVar11);
    FUN_1000523d8(lVar16 - extraout_x12_01,lVar16,FUN_10025cfc4);
    lVar9 = lVar16;
    _swift_getEnumCaseMultiPayload(lVar16,lVar4);
    if ((int)lVar9 == 5) goto LAB_100256f20;
    if ((int)lVar9 == 0) {
      FUN_10005241c(lVar16,FUN_10025cfc4);
      goto LAB_100256f20;
    }
    FUN_10005241c(lVar16,FUN_10025cfc4);
  }
  pMVar12 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar12 != (MainActor *)0x0) {
    _swift_storeEnumTagMultiPayload(lVar15,lVar4,3);
    pPVar13 = (Published *)&DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar10 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    puVar3 = local_68;
    FUN_1000c495c(lVar15,local_68,FUN_10025cfc4);
    _swift_retain(pMVar12);
    Combine::Published::_set_subscript(pPVar13,puVar3,pMVar12,pPVar13,puVar10);
    FUN_10005241c(lVar15,FUN_10025cfc4);
    pMVar14 = pMVar12 + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
    uVar1 = *(undefined8 *)(pMVar14 + 0x18);
    uVar2 = *(undefined8 *)(pMVar14 + 0x20);
    FUN_100004640(pMVar14,uVar1);
    FUN_1001ad344(uVar1,uVar2,pMVar14);
    _swift_release(pMVar5);
    pMVar5 = pMVar12;
  }
LAB_100256f20:
  _swift_release(pMVar5);
  return;
}



/* Address: 0x100256f44 | FUN_100256f44 */

void FUN_100256f44(byte *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  TaskPriority TVar15;
  MainActor *this;
  MainActor *pMVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  ulong uVar21;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar22;
  MainActor *unaff_x20;
  code *pcVar23;
  long lVar24;
  ulong uVar25;
  long alStack_f0 [2];
  undefined1 auStack_e0 [4];
  undefined4 local_dc;
  undefined1 *local_d8;
  byte *local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined1 *local_b0;
  byte local_89;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  lVar10 = 0;
  FUN_1002abb94();
  local_c0 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = &DAT_100fb81c8;
  local_b8 = extraout_x12;
  local_b0 = auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)(auStack_e0 + -(extraout_x12 + 0xfU & 0xfffffffffffffff0)) - extraout_x8;
  lVar10 = 0;
  local_c8 = lVar20;
  FUN_10025cfc4();
  pcVar23 = FUN_10025cfc4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar10 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar20 - extraout_x12_00;
  FUN_1000c495c(param_1,lVar24,FUN_1002abb94);
  _swift_storeEnumTagMultiPayload(lVar24,lVar10,0);
  _swift_getKeyPath(&DAT_100c38718);
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(lVar24,lVar20,FUN_10025cfc4);
  _swift_retain();
  Combine::Published::_set_subscript((Published *)FUN_10025cfc4,lVar20);
  FUN_10005241c(lVar24,pcVar23);
  bVar8 = *param_1;
  FUN_1000da768(auStack_88);
  puVar12 = auStack_88;
  FUN_100004640();
  local_d8 = puVar12;
  local_d0 = param_1;
  FUN_100252c9c();
  pcVar2 = "verified";
  puVar6 = &DAT_d000000000000032;
  if (bVar8 != 4) {
    pcVar2 = "onBarViewModel.swift";
    puVar6 = (undefined1 *)0xd00000000000002d;
  }
  pcVar4 = "tion.annual.legacy";
  puVar18 = &DAT_d000000000000032;
  if (bVar8 != 3) {
    pcVar4 = pcVar2;
    puVar18 = puVar6;
  }
  puVar6 = (undefined1 *)0xd00000000000002b;
  pcVar2 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (bVar8 != 1) {
    puVar6 = (undefined1 *)0xd000000000000031;
    pcVar2 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar3 = "e.macos.subscription.annual";
  puVar7 = (undefined1 *)0xd00000000000002c;
  if (bVar8 != 0) {
    pcVar3 = pcVar2 + 0x20;
    puVar7 = puVar6;
  }
  if (bVar8 < 3) {
    pcVar4 = pcVar3;
    puVar18 = puVar7;
  }
  puVar11 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar13 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
  Combine::Published::_get_subscript(&local_89);
  _swift_release(puVar11);
  _swift_release(puVar13);
  puVar6 = (undefined1 *)0x8000000100d9f490;
  uVar14 = 0xd000000000000011;
  if (local_89 != 4) {
    puVar6 = (undefined1 *)0xeb00000000656369;
    uVar14 = 0x6f684369746c756d;
  }
  puVar7 = (undefined1 *)0xec0000006563696f;
  uVar9 = 0x6843656c676e6973;
  if (local_89 != 3) {
    puVar7 = puVar6;
    uVar9 = uVar14;
  }
  uVar14 = 0x6972466b63616c62;
  if (local_89 != 1) {
    uVar14 = 0x6e6f4d7265627963;
  }
  uVar5 = 0x746c7561666564;
  if (local_89 != 0) {
    uVar5 = uVar14;
  }
  puVar6 = &DAT_e700000000000000;
  if (local_89 != 0) {
    puVar6 = (undefined1 *)0xeb00000000796164;
  }
  if (local_89 < 3) {
    puVar7 = puVar6;
    uVar9 = uVar5;
  }
  uVar19 = 3;
  if (param_3 != 0) {
    uVar19 = 1;
  }
  uVar1 = 0;
  if (bVar8 != 2) {
    uVar1 = uVar19;
  }
  local_dc = uVar1;
  *(long *)(lVar24 + -0x10) = param_3;
  uVar14 = 0;
  FUN_100191b74(0,puVar12,puVar18,(ulong)pcVar4 | 0x8000000000000000,uVar9,puVar7,uVar1,param_2);
  _swift_bridgeObjectRelease((ulong)pcVar4 | 0x8000000000000000);
  _swift_bridgeObjectRelease(puVar7);
  (**(code **)(lStack_68 + 0x18))(uVar14,puVar12,puVar18,local_70,lStack_68);
  _swift_bridgeObjectRelease(puVar18);
  _swift_bridgeObjectRelease(puVar12);
  FUN_100004594(auStack_88);
  TVar15 = Swift::TaskPriority::typeMetadataAccessor();
  lVar10 = local_c8;
  (**(code **)(*(long *)(TVar15.unknown + -8) + 0x38))(local_c8,1,1,TVar15.unknown);
  puVar6 = local_b0;
  FUN_1000c495c(local_d0,local_b0,FUN_1002abb94);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar11 = PTR_typeMetadataAccessor_100eaec10;
  _swift_bridgeObjectRetain(param_3);
  pMVar16 = unaff_x20;
  _swift_retain();
  pMVar16 = Swift::MainActor::get_shared(this,pMVar16);
  puVar17 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar11,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  uVar21 = (ulong)*(byte *)(local_c0 + 0x50);
  uVar22 = uVar21 + 0x28 & (uVar21 ^ 0xffffffffffffffff);
  uVar25 = local_b8 + uVar22 + 7 & 0xfffffffffffffff8;
  puVar11 = &DAT_100ec4468;
  _swift_allocObject(&DAT_100ec4468,uVar25 + 0x11,uVar21 | 7);
  *(MainActor **)(puVar11 + 0x10) = pMVar16;
  *(undefined8 **)(puVar11 + 0x18) = puVar17;
  *(MainActor **)(puVar11 + 0x20) = unaff_x20;
  FUN_1000523d8(puVar6,puVar11 + uVar22,FUN_1002abb94);
  puVar17 = (undefined8 *)(puVar11 + uVar25);
  *puVar17 = param_2;
  puVar17[1] = param_3;
  *(char *)(puVar17 + 2) = (char)local_dc;
  FUN_10024cc3c(0,0,lVar10,&DAT_100c388e8,puVar11);
  _swift_release();
  return;
}



/* Address: 0x100257484 | FUN_100257484 */

void FUN_100257484(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  DateComponents DVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined1 in_w7;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x208) = in_w7;
  *(undefined8 *)(unaff_x22 + 0x198) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x188) = in_x3;
  *(undefined8 *)(unaff_x22 + 400) = in_x4;
  lVar1 = 0;
  FUN_10025cfc4();
  *(long *)(unaff_x22 + 0x1a8) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar3;
  puVar4 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar3;
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1c8) = DVar5.unknown;
  lVar1 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x1d0) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar3;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0x1e0) = pMVar6;
  puVar7 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x1e8) = puVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1002575a4,UVar8.unknown,puVar7);
  return;
}



/* Address: 0x1002575a4 | FUN_1002575a4 */

void FUN_1002575a4(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  FUN_1000da768(unaff_x22 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar5 = *(long *)(unaff_x22 + 0x90);
  FUN_100004640(unaff_x22 + 0x70,uVar3);
  piVar7 = *(int **)(lVar5 + 0x18);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f0) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100257660;
                    /* WARNING: Could not recover jumptable at 0x00010025765c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (uVar2,uVar4,*(undefined8 *)(unaff_x22 + 400),*(undefined8 *)(unaff_x22 + 0x198),
             *(undefined8 *)(unaff_x22 + 0x1a0),uVar3,lVar5);
  return;
}



/* Address: 0x100257660 | FUN_100257660 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100257660(char param_1)

{
  undefined1 *puVar1;
  int iVar2;
  byte bVar3;
  long lVar4;
  ID self;
  Published *pPVar5;
  Published *pPVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  int *piVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  long *unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  
  lVar18 = *unaff_x22;
  uVar12 = *(undefined8 *)(lVar18 + 0x1e0);
  lVar14 = *unaff_x22;
  *(char *)(lVar18 + 0x209) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar18 + 0x1f0));
  _swift_release(uVar12);
  if (unaff_x20 == 0) {
    FUN_100004594(lVar18 + 0x70);
    self = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
    NSApplication::activateIgnoringOtherApps_(self,1);
    if (param_1 != '\x02') {
      if (param_1 == '\x03') {
        uVar13 = *(undefined8 *)(lVar18 + 0x188);
        _swift_release(*(undefined8 *)(lVar18 + 0x1e0));
        FUN_1000da768(lVar18 + 0xe8);
        uVar12 = *(undefined8 *)(lVar18 + 0x100);
        lVar4 = *(long *)(lVar18 + 0x108);
        FUN_100004640();
        puVar19 = &DAT_100c38810;
        _swift_getKeyPath(&DAT_100c38810);
        puVar20 = &DAT_100c38838;
        _swift_getKeyPath(&DAT_100c38838);
        Combine::Published::_get_subscript(lVar18 + 0x202,uVar13,puVar19,puVar20);
        _swift_release(puVar20);
        _swift_release(puVar19);
        bVar3 = *(byte *)(lVar18 + 0x202);
        puVar10 = (undefined1 *)0x8000000100d9f490;
        uVar13 = 0xd000000000000011;
        if (bVar3 != 4) {
          puVar10 = (undefined1 *)0xeb00000000656369;
          uVar13 = 0x6f684369746c756d;
        }
        puVar1 = (undefined1 *)0xec0000006563696f;
        uVar15 = 0x6843656c676e6973;
        if (bVar3 != 3) {
          puVar1 = puVar10;
          uVar15 = uVar13;
        }
        uVar13 = 0x6972466b63616c62;
        if (bVar3 != 1) {
          uVar13 = 0x6e6f4d7265627963;
        }
        uVar8 = 0x746c7561666564;
        if (bVar3 != 0) {
          uVar8 = uVar13;
        }
        puVar10 = &DAT_e700000000000000;
        if (bVar3 != 0) {
          puVar10 = (undefined1 *)0xeb00000000796164;
        }
        if (bVar3 < 3) {
          puVar1 = puVar10;
          uVar15 = uVar8;
        }
        uVar13 = *(undefined8 *)(lVar18 + 0x1b0);
        pPVar6 = *(Published **)(lVar18 + 0x1b8);
        uVar17 = *(undefined8 *)(lVar18 + 0x1a8);
        uVar16 = *(undefined8 *)(lVar18 + 0x188);
        uVar8 = 0;
        uVar9 = 1;
        FUN_100191c80(0,1,uVar15,puVar1);
        _swift_bridgeObjectRelease(puVar1);
        (**(code **)(lVar4 + 0x18))(uVar8,uVar9,uVar15,uVar12);
        _swift_bridgeObjectRelease(uVar9);
        _swift_bridgeObjectRelease(uVar15);
        FUN_100004594(lVar18 + 0xe8);
        _swift_storeEnumTagMultiPayload(pPVar6,uVar17,3);
        pPVar5 = (Published *)&DAT_100c38718;
        _swift_getKeyPath(&DAT_100c38718);
        puVar19 = &DAT_100c38740;
        _swift_getKeyPath(&DAT_100c38740);
        FUN_1000c495c(pPVar6,uVar13,FUN_10025cfc4);
        _swift_retain(uVar16);
        Combine::Published::_set_subscript(pPVar5,uVar13,uVar16,pPVar5,puVar19);
      }
      else {
        if (param_1 != '\x04') {
          uVar12 = *(undefined8 *)(lVar18 + 0x1e0);
          uVar15 = *(undefined8 *)(lVar18 + 0x1e8);
          FUN_1000da768(lVar18 + 0x110,0);
          uVar13 = *(undefined8 *)(lVar18 + 0x128);
          lVar4 = *(long *)(lVar18 + 0x130);
          FUN_100004640(lVar18 + 0x110,uVar13);
          piVar11 = *(int **)(lVar4 + 0x28);
          iVar2 = *piVar11;
          plVar7 = (long *)(ulong)(uint)piVar11[1];
          _swift_task_alloc();
          *(long **)(lVar18 + 0x1f8) = plVar7;
          *plVar7 = lVar14;
          plVar7[1] = (long)FUN_100257f4c;
                    /* WARNING: Could not recover jumptable at 0x000100257f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar2 + (long)piVar11))(uVar12,uVar15,uVar13,lVar4);
          return;
        }
        uVar12 = *(undefined8 *)(lVar18 + 0x1b0);
        pPVar6 = *(Published **)(lVar18 + 0x1b8);
        uVar13 = *(undefined8 *)(lVar18 + 0x1a8);
        uVar15 = *(undefined8 *)(lVar18 + 0x188);
        _swift_release(*(undefined8 *)(lVar18 + 0x1e0));
        _swift_storeEnumTagMultiPayload(pPVar6,uVar13,3);
        puVar19 = &DAT_100c38718;
        _swift_getKeyPath(&DAT_100c38718);
        puVar20 = &DAT_100c38740;
        _swift_getKeyPath(&DAT_100c38740);
        FUN_1000c495c(pPVar6,uVar12,FUN_10025cfc4);
        _swift_retain(uVar15);
        Combine::Published::_set_subscript(pPVar6,uVar12,uVar15,puVar19,puVar20);
      }
      FUN_10005241c(pPVar6,FUN_10025cfc4);
      goto LAB_100257c50;
    }
    uVar12 = *(undefined8 *)(lVar18 + 0x1b0);
    pPVar5 = *(Published **)(lVar18 + 0x1b8);
    uVar13 = *(undefined8 *)(lVar18 + 0x1a8);
    uVar15 = *(undefined8 *)(lVar18 + 0x188);
    _swift_release(*(undefined8 *)(lVar18 + 0x1e0));
    _swift_storeEnumTagMultiPayload(pPVar5,uVar13,3);
    puVar19 = &DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar20 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    FUN_1000c495c(pPVar5,uVar12,FUN_10025cfc4);
    _swift_retain(uVar15);
    Combine::Published::_set_subscript(pPVar5,uVar12,uVar15,puVar19,puVar20);
    FUN_10005241c(pPVar5,FUN_10025cfc4);
    FUN_1000da768(lVar18 + 0xc0);
    uVar12 = *(undefined8 *)(lVar18 + 0xd8);
    lVar4 = *(long *)(lVar18 + 0xe0);
    FUN_100004640(lVar18 + 0xc0,uVar12);
    puVar19 = &DAT_100c38810;
    _swift_getKeyPath(&DAT_100c38810);
    puVar20 = &DAT_100c38838;
    _swift_getKeyPath(&DAT_100c38838);
    Combine::Published::_get_subscript(lVar18 + 0x201,uVar15,puVar19,puVar20);
    _swift_release(puVar20);
    _swift_release(puVar19);
    bVar3 = *(byte *)(lVar18 + 0x201);
    puVar10 = (undefined1 *)0x8000000100d9f490;
    uVar13 = 0xd000000000000011;
    if (bVar3 != 4) {
      puVar10 = (undefined1 *)0xeb00000000656369;
      uVar13 = 0x6f684369746c756d;
    }
    puVar1 = (undefined1 *)0xec0000006563696f;
    uVar15 = 0x6843656c676e6973;
    if (bVar3 != 3) {
      puVar1 = puVar10;
      uVar15 = uVar13;
    }
    uVar13 = 0x6972466b63616c62;
    if (bVar3 != 1) {
      uVar13 = 0x6e6f4d7265627963;
    }
    uVar8 = 0x746c7561666564;
    if (bVar3 != 0) {
      uVar8 = uVar13;
    }
    puVar10 = &DAT_e700000000000000;
    if (bVar3 != 0) {
      puVar10 = (undefined1 *)0xeb00000000796164;
    }
    if (bVar3 < 3) {
      puVar1 = puVar10;
      uVar15 = uVar8;
    }
    uVar13 = 0;
    puVar10 = puVar1;
    FUN_100191c50(0,uVar15,puVar1);
    _swift_bridgeObjectRelease(puVar1);
    (**(code **)(lVar4 + 0x18))(uVar13,uVar15,puVar10,uVar12,lVar4);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(puVar10);
    lVar4 = lVar18 + 0xc0;
  }
  else {
    uVar12 = *(undefined8 *)(lVar18 + 0x1b0);
    pPVar5 = *(Published **)(lVar18 + 0x1b8);
    uVar15 = *(undefined8 *)(lVar18 + 0x1a8);
    uVar13 = *(undefined8 *)(lVar18 + 0x188);
    _swift_release(*(undefined8 *)(lVar18 + 0x1e0));
    FUN_100004594(lVar18 + 0x70);
    puVar19 = &DAT_100ec4418;
    _swift_allocObject(&DAT_100ec4418,0x18,7);
    _swift_weakInit(puVar19 + 0x10,uVar13);
    _swift_retain(puVar19);
    FUN_10025411c(lVar18 + 0x10);
    _swift_release_n(puVar19,2);
    puVar19 = *(undefined **)(lVar18 + 0x10);
    puVar21 = *(undefined **)(lVar18 + 0x28);
    puVar20 = *(undefined **)(lVar18 + 0x20);
    pPVar5[1].unknown = *(undefined **)(lVar18 + 0x18);
    pPVar5->unknown = puVar19;
    pPVar5[3].unknown = puVar21;
    pPVar5[2].unknown = puVar20;
    puVar20 = *(undefined **)(lVar18 + 0x38);
    puVar19 = *(undefined **)(lVar18 + 0x30);
    puVar22 = *(undefined **)(lVar18 + 0x48);
    puVar21 = *(undefined **)(lVar18 + 0x40);
    puVar23 = *(undefined **)(lVar18 + 0x50);
    puVar25 = *(undefined **)(lVar18 + 0x68);
    puVar24 = *(undefined **)(lVar18 + 0x60);
    pPVar5[9].unknown = *(undefined **)(lVar18 + 0x58);
    pPVar5[8].unknown = puVar23;
    pPVar5[0xb].unknown = puVar25;
    pPVar5[10].unknown = puVar24;
    pPVar5[5].unknown = puVar20;
    pPVar5[4].unknown = puVar19;
    pPVar5[7].unknown = puVar22;
    pPVar5[6].unknown = puVar21;
    _swift_storeEnumTagMultiPayload(pPVar5,uVar15,1);
    puVar19 = &DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar20 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    FUN_1000c495c(pPVar5,uVar12,FUN_10025cfc4);
    _swift_retain(uVar13);
    Combine::Published::_set_subscript(pPVar5,uVar12,uVar13,puVar19,puVar20);
    FUN_10005241c(pPVar5,FUN_10025cfc4);
    FUN_1000da768(lVar18 + 0x98);
    uVar12 = *(undefined8 *)(lVar18 + 0xb0);
    lVar4 = *(long *)(lVar18 + 0xb8);
    FUN_100004640(lVar18 + 0x98,uVar12);
    puVar19 = &DAT_100c38810;
    _swift_getKeyPath(&DAT_100c38810);
    puVar20 = &DAT_100c38838;
    _swift_getKeyPath(&DAT_100c38838);
    Combine::Published::_get_subscript(lVar18 + 0x200,uVar13,puVar19,puVar20);
    _swift_release(puVar20);
    _swift_release(puVar19);
    bVar3 = *(byte *)(lVar18 + 0x200);
    puVar10 = (undefined1 *)0x8000000100d9f490;
    uVar13 = 0xd000000000000011;
    if (bVar3 != 4) {
      puVar10 = (undefined1 *)0xeb00000000656369;
      uVar13 = 0x6f684369746c756d;
    }
    puVar1 = (undefined1 *)0xec0000006563696f;
    uVar15 = 0x6843656c676e6973;
    if (bVar3 != 3) {
      puVar1 = puVar10;
      uVar15 = uVar13;
    }
    uVar13 = 0x6972466b63616c62;
    if (bVar3 != 1) {
      uVar13 = 0x6e6f4d7265627963;
    }
    uVar8 = 0x746c7561666564;
    if (bVar3 != 0) {
      uVar8 = uVar13;
    }
    puVar10 = &DAT_e700000000000000;
    if (bVar3 != 0) {
      puVar10 = (undefined1 *)0xeb00000000796164;
    }
    if (bVar3 < 3) {
      puVar1 = puVar10;
      uVar15 = uVar8;
    }
    uVar13 = 0;
    uVar8 = 0;
    FUN_100191c80(0,0,uVar15,puVar1);
    _swift_bridgeObjectRelease(puVar1);
    (**(code **)(lVar4 + 0x18))(uVar13,uVar8,uVar15,uVar12,lVar4);
    _swift_errorRelease();
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease(uVar15);
    lVar4 = lVar18 + 0x98;
  }
  FUN_100004594(lVar4);
LAB_100257c50:
  uVar12 = *(undefined8 *)(lVar18 + 0x1b8);
  uVar13 = *(undefined8 *)(lVar18 + 0x1c0);
  uVar15 = *(undefined8 *)(lVar18 + 0x1b0);
  _swift_task_dealloc(*(undefined8 *)(lVar18 + 0x1d8));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000100257c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar14 + 8))();
  return;
}



/* Address: 0x100257f4c | FUN_100257f4c */

void FUN_100257f4c(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  Published *pPVar21;
  long lVar22;
  long *unaff_x22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  
  lVar24 = *unaff_x22;
  bVar8 = *(byte *)(lVar24 + 0x209);
  uVar18 = *(undefined8 *)(lVar24 + 0x1e0);
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar24 + 0x1f8));
  _swift_release(uVar18);
  FUN_100004594(lVar24 + 0x110);
  if ((bVar8 & 1) == 0) {
    uVar17 = lVar24 + 0x138;
    pbVar7 = *(byte **)(lVar24 + 400);
    FUN_1000da768(uVar17);
    uVar18 = *(undefined8 *)(lVar24 + 0x150);
    lVar22 = *(long *)(lVar24 + 0x158);
    uVar13 = uVar17;
    FUN_100004640();
    FUN_100252c9c();
    bVar8 = *pbVar7;
    pcVar1 = "verified";
    puVar4 = &DAT_d000000000000032;
    if (bVar8 != 4) {
      pcVar1 = "onBarViewModel.swift";
      puVar4 = (undefined1 *)0xd00000000000002d;
    }
    pcVar3 = "tion.annual.legacy";
    puVar14 = &DAT_d000000000000032;
    if (bVar8 != 3) {
      pcVar3 = pcVar1;
      puVar14 = puVar4;
    }
    puVar4 = (undefined1 *)0xd00000000000002b;
    pcVar1 = "com.wiheads.paste.macos.subscription.annual.intro";
    if (bVar8 != 1) {
      puVar4 = (undefined1 *)0xd000000000000031;
      pcVar1 = "com.wiheads.paste.macos.subscription.annual.family";
    }
    pcVar2 = "e.macos.subscription.annual";
    puVar5 = (undefined1 *)0xd00000000000002c;
    if (bVar8 != 0) {
      pcVar2 = pcVar1 + 0x20;
      puVar5 = puVar4;
    }
    if (bVar8 < 3) {
      pcVar3 = pcVar2;
      puVar14 = puVar5;
    }
    uVar23 = *(undefined8 *)(lVar24 + 0x188);
    puVar11 = &DAT_100c38810;
    _swift_getKeyPath(&DAT_100c38810);
    puVar12 = &DAT_100c38838;
    _swift_getKeyPath(&DAT_100c38838);
    Combine::Published::_get_subscript(lVar24 + 0x203,uVar23,puVar11,puVar12);
    _swift_release(puVar12);
    _swift_release(puVar11);
    bVar8 = *(byte *)(lVar24 + 0x203);
    puVar4 = (undefined1 *)0x8000000100d9f490;
    uVar23 = 0xd000000000000011;
    if (bVar8 != 4) {
      puVar4 = (undefined1 *)0xeb00000000656369;
      uVar23 = 0x6f684369746c756d;
    }
    puVar5 = (undefined1 *)0xec0000006563696f;
    uVar19 = 0x6843656c676e6973;
    if (bVar8 != 3) {
      puVar5 = puVar4;
      uVar19 = uVar23;
    }
    uVar23 = 0x6972466b63616c62;
    if (bVar8 != 1) {
      uVar23 = 0x6e6f4d7265627963;
    }
    uVar20 = 0x746c7561666564;
    if (bVar8 != 0) {
      uVar20 = uVar23;
    }
    puVar4 = &DAT_e700000000000000;
    if (bVar8 != 0) {
      puVar4 = (undefined1 *)0xeb00000000796164;
    }
    if (bVar8 < 3) {
      puVar5 = puVar4;
      uVar19 = uVar20;
    }
    uVar23 = 0;
    FUN_100192204(0,uVar13,puVar14,(ulong)pcVar3 | 0x8000000000000000,0,0,uVar19,puVar5,
                  *(undefined1 *)(lVar24 + 0x208),*(undefined8 *)(lVar24 + 0x198),
                  *(undefined8 *)(lVar24 + 0x1a0));
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease((ulong)pcVar3 | 0x8000000000000000);
    pcVar16 = *(code **)(lVar22 + 0x18);
    goto LAB_100258458;
  }
  uVar17 = lVar24 + 0x160;
  uVar23 = *(undefined8 *)(lVar24 + 0x1c0);
  lVar10 = *(long *)(lVar24 + 400);
  FUN_1000da768(uVar17);
  uVar18 = *(undefined8 *)(lVar24 + 0x178);
  lVar22 = *(long *)(lVar24 + 0x180);
  uVar13 = uVar17;
  FUN_100004640(uVar17,uVar18);
  FUN_100252c9c();
  lVar9 = 0;
  FUN_1002abb94();
  FUN_100011090(lVar10 + *(int *)(lVar9 + 0x18),uVar23,&DAT_100fb8db8,&DAT_100c38680);
  lVar10 = 0;
  FUN_1002abbf0();
  (**(code **)(*(long *)(lVar10 + -8) + 0x30))(uVar23,1,lVar10);
  uVar19 = *(undefined8 *)(lVar24 + 0x1c0);
  if ((int)uVar23 == 1) {
    FUN_100005808(uVar19,&DAT_100fb8db8,&DAT_100c38680);
LAB_1002582d8:
    uVar20 = 0;
    uVar19 = 1;
  }
  else {
    uVar23 = uVar19;
    _swift_getEnumCaseMultiPayload(uVar19,lVar10);
    if ((int)uVar23 != 0) {
      FUN_10005241c(uVar19,FUN_1002abbf0);
      goto LAB_1002582d8;
    }
    lVar10 = *(long *)(lVar24 + 0x1d0);
    uVar23 = *(undefined8 *)(lVar24 + 0x1d8);
    uVar25 = *(undefined8 *)(lVar24 + 0x1c8);
    uVar20 = uVar23;
    (**(code **)(lVar10 + 0x20))(uVar23,uVar19,uVar25);
    FUN_100252f58();
    (**(code **)(lVar10 + 8))(uVar23,uVar25);
  }
  uVar23 = *(undefined8 *)(lVar24 + 0x188);
  puVar11 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar12 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
  Combine::Published::_get_subscript(lVar24 + 0x207,uVar23,puVar11,puVar12);
  _swift_release(puVar12);
  _swift_release(puVar11);
  bVar8 = *(byte *)(lVar24 + 0x207);
  puVar4 = (undefined1 *)0x8000000100d9f490;
  uVar23 = 0xd000000000000011;
  if (bVar8 != 4) {
    puVar4 = (undefined1 *)0xeb00000000656369;
    uVar23 = 0x6f684369746c756d;
  }
  puVar5 = (undefined1 *)0xec0000006563696f;
  uVar25 = 0x6843656c676e6973;
  if (bVar8 != 3) {
    puVar5 = puVar4;
    uVar25 = uVar23;
  }
  uVar23 = 0x6972466b63616c62;
  if (bVar8 != 1) {
    uVar23 = 0x6e6f4d7265627963;
  }
  uVar6 = 0x746c7561666564;
  if (bVar8 != 0) {
    uVar6 = uVar23;
  }
  puVar4 = &DAT_e700000000000000;
  if (bVar8 != 0) {
    puVar4 = (undefined1 *)0xeb00000000796164;
  }
  if (bVar8 < 3) {
    puVar5 = puVar4;
    uVar25 = uVar6;
  }
  uVar23 = 0;
  uVar13 = uVar13 & 0xffffffff;
  puVar14 = (undefined1 *)0x0;
  FUN_100191dd8(0,uVar13,0,uVar20,uVar19,uVar25,puVar5,*(undefined1 *)(lVar24 + 0x208),
                *(undefined8 *)(lVar24 + 0x198),*(undefined8 *)(lVar24 + 0x1a0));
  _swift_bridgeObjectRelease(puVar5);
  pcVar16 = *(code **)(lVar22 + 0x18);
LAB_100258458:
  (*pcVar16)(uVar23,uVar13,puVar14,uVar18,lVar22);
  _swift_bridgeObjectRelease(uVar13);
  _swift_bridgeObjectRelease(puVar14);
  FUN_100004594(uVar17);
  bVar8 = *(byte *)(lVar24 + 0x209);
  uVar18 = *(undefined8 *)(lVar24 + 0x1b0);
  pPVar21 = *(Published **)(lVar24 + 0x1b8);
  uVar23 = *(undefined8 *)(lVar24 + 0x188);
  _swift_storeEnumTagMultiPayload(pPVar21,*(undefined8 *)(lVar24 + 0x1a8),5);
  puVar11 = &DAT_100c38718;
  _swift_getKeyPath(&DAT_100c38718);
  puVar12 = &DAT_100c38740;
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(pPVar21,uVar18,FUN_10025cfc4);
  _swift_retain(uVar23);
  Combine::Published::_set_subscript(pPVar21,uVar18,uVar23,puVar11,puVar12);
  FUN_10005241c(pPVar21,FUN_10025cfc4);
  if ((bVar8 & 1) == 0) {
    uVar18 = *(undefined8 *)(lVar24 + 0x1b0);
    pPVar21 = *(Published **)(lVar24 + 0x1b8);
    lVar22 = *(long *)(lVar24 + 0x188);
    _swift_storeEnumTagMultiPayload(pPVar21,*(undefined8 *)(lVar24 + 0x1a8),3);
    puVar11 = &DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar12 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    FUN_1000c495c(pPVar21,uVar18,FUN_10025cfc4);
    _swift_retain(lVar22);
    Combine::Published::_set_subscript(pPVar21,uVar18,lVar22,puVar11,puVar12);
    FUN_10005241c(pPVar21,FUN_10025cfc4);
    lVar22 = lVar22 + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
    uVar18 = *(undefined8 *)(lVar22 + 0x18);
    uVar23 = *(undefined8 *)(lVar22 + 0x20);
    FUN_100004640(lVar22,uVar18);
    FUN_1001ad344(uVar18,uVar23,lVar22);
  }
  else {
    uVar18 = *(undefined8 *)(lVar24 + 0x188);
    puVar11 = &DAT_100c388f0;
    _swift_getKeyPath(&DAT_100c388f0);
    puVar12 = &DAT_100c38918;
    _swift_getKeyPath(&DAT_100c38918);
    Combine::Published::_get_subscript(lVar24 + 0x204,uVar18,puVar11,puVar12);
    _swift_release(puVar12);
    _swift_release(puVar11);
    pPVar21 = *(Published **)(lVar24 + 0x188);
    if (*(char *)(lVar24 + 0x204) == '\x01') {
      *(undefined1 *)
       ((long)&pPVar21->unknown +
       _TtC22PasteLicensingAppStore16PaywallViewModel::isTrialStartedPresentationPending) = 1;
      puVar11 = &DAT_100c388f0;
      _swift_getKeyPath(&DAT_100c388f0);
      puVar12 = &DAT_100c38918;
      _swift_getKeyPath(&DAT_100c38918);
      *(undefined1 *)(lVar24 + 0x206) = 0;
      _swift_retain(pPVar21);
      lVar22 = lVar24 + 0x206;
    }
    else {
      puVar11 = &DAT_100c38938;
      _swift_getKeyPath(&DAT_100c38938);
      puVar12 = &DAT_100c38960;
      _swift_getKeyPath(&DAT_100c38960);
      *(undefined1 *)(lVar24 + 0x205) = 1;
      _swift_retain(pPVar21);
      lVar22 = lVar24 + 0x205;
    }
    Combine::Published::_set_subscript(pPVar21,lVar22,pPVar21,puVar11,puVar12);
  }
  uVar18 = *(undefined8 *)(lVar24 + 0x1b8);
  uVar23 = *(undefined8 *)(lVar24 + 0x1c0);
  uVar19 = *(undefined8 *)(lVar24 + 0x1b0);
  _swift_task_dealloc(*(undefined8 *)(lVar24 + 0x1d8));
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x0001002586c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar15 + 8))();
  return;
}



/* Address: 0x100258708 | FUN_100258708 */

void FUN_100258708(void)

{
  undefined *puVar1;
  long lVar2;
  TaskPriority TVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar7;
  long extraout_x12;
  MainActor *unaff_x20;
  code *pcVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  puVar1 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_80 + -extraout_x8;
  lVar2 = 0;
  FUN_10025cfc4();
  pcVar8 = FUN_10025cfc4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar2 - extraout_x12;
  _swift_storeEnumTagMultiPayload(lVar10);
  puVar1 = &DAT_100c38718;
  _swift_getKeyPath(&DAT_100c38718);
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(lVar10,lVar2,FUN_10025cfc4);
  _swift_retain();
  Combine::Published::_set_subscript((Published *)FUN_10025cfc4,lVar2);
  FUN_10005241c(lVar10,pcVar8);
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar6 = local_60;
  FUN_100192894(0);
  (**(code **)(lStack_58 + 0x18))();
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(uVar6);
  FUN_100004594(auStack_78);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(puVar9,1,1,TVar3.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = unaff_x20;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100ec4440;
  _swift_allocObject(&DAT_100ec4440,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar4;
  *(undefined8 **)(puVar1 + 0x18) = puVar5;
  *(MainActor **)(puVar1 + 0x20) = unaff_x20;
  uVar6 = 0;
  FUN_10024cc3c(0,0,puVar9,&DAT_100c388d0,puVar1);
  uVar7 = *(undefined8 *)
           (unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::restorePurchasesTask);
  *(undefined8 *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::restorePurchasesTask)
       = uVar6;
  _swift_release(uVar7);
  return;
}



/* Address: 0x100258954 | FUN_100258954 */

void FUN_100258954(void)

{
  undefined *puVar1;
  StoreKitError SVar2;
  undefined7 extraout_var;
  ulong uVar3;
  LocalizedStringResource LVar4;
  ulong uVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  undefined8 in_x3;
  long lVar9;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = in_x3;
  SVar2 = StoreKit::StoreKitError::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x178) = CONCAT71(extraout_var,SVar2.value);
  lVar9 = *(long *)(CONCAT71(extraout_var,SVar2.value) + -8);
  *(long *)(unaff_x22 + 0x180) = lVar9;
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar3;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(LVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  lVar9 = 0;
  FUN_10025cfc4();
  *(long *)(unaff_x22 + 0x198) = lVar9;
  uVar3 = *(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar3;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  *(MainActor **)(unaff_x22 + 0x1b0) = pMVar6;
  puVar7 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x1b8) = puVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100258a60,UVar8.unknown,puVar7);
  return;
}



/* Address: 0x100258a60 | FUN_100258a60 */

void FUN_100258a60(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x1c0) =
       *(undefined8 *)
        (*(long *)(unaff_x22 + 0x170) +
        _TtC22PasteLicensingAppStore16PaywallViewModel::licenseManager);
  FUN_1000da768(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar5 = *(long *)(unaff_x22 + 0xf0);
  FUN_100004640(unaff_x22 + 0xd0,uVar3);
  piVar7 = *(int **)(lVar5 + 0x30);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100258b08;
                    /* WARNING: Could not recover jumptable at 0x000100258b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))(uVar2,uVar4,uVar3,lVar5);
  return;
}



/* Address: 0x100258b08 | FUN_100258b08 */

void FUN_100258b08(void)

{
  String *pSVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  Task TVar5;
  Published *pPVar6;
  Published *pPVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *unaff_x22;
  long lVar14;
  long lVar15;
  long lVar16;
  LocalizedStringResource LVar17;
  char *pcVar18;
  void *pvVar19;
  char *pcVar20;
  void *pvVar21;
  char *pcVar22;
  void *pvVar23;
  char *pcVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  
  lVar15 = *unaff_x22;
  uVar11 = *(undefined8 *)(lVar15 + 0x1b0);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar15 + 0x1c8));
  _swift_release(uVar11);
  TVar5.unknown = (undefined *)(lVar15 + 0xd0);
  FUN_100004594();
  if (unaff_x20 == 0) {
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar5);
    if (bVar4) goto LAB_100258f5c;
    FUN_1000da768(lVar15 + 0xf8);
    uVar12 = *(ulong *)(lVar15 + 0x110);
    uVar11 = *(undefined8 *)(lVar15 + 0x118);
    lVar14 = lVar15 + 0xf8;
    FUN_100004640(lVar14,uVar12);
    FUN_1001a15c4(uVar12,uVar11,lVar14);
    FUN_100004594(lVar15 + 0xf8);
    FUN_1000da768(lVar15 + 0x120);
    lVar2 = *(long *)(lVar15 + 0x140);
    FUN_100004640(lVar15 + 0x120,*(undefined8 *)(lVar15 + 0x138));
    uVar10 = (ulong)((uint)uVar12 & 1);
    FUN_1001929c0(0,uVar10);
    (**(code **)(lVar2 + 0x18))();
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(lVar14);
    FUN_100004594(lVar15 + 0x120);
    uVar11 = *(undefined8 *)(lVar15 + 0x1a0);
    pPVar7 = *(Published **)(lVar15 + 0x1a8);
    uVar13 = *(undefined8 *)(lVar15 + 0x198);
    if ((uVar12 & 1) != 0) {
      lVar14 = *(long *)(lVar15 + 0x170);
      _swift_storeEnumTagMultiPayload(pPVar7,uVar13,3);
      puVar8 = &DAT_100c38718;
      _swift_getKeyPath(&DAT_100c38718);
      puVar9 = &DAT_100c38740;
      _swift_getKeyPath(&DAT_100c38740);
      FUN_1000c495c(pPVar7,uVar11,FUN_10025cfc4);
      _swift_retain(lVar14);
      Combine::Published::_set_subscript(pPVar7,uVar11,lVar14,puVar8,puVar9);
      FUN_10005241c(pPVar7,FUN_10025cfc4);
      lVar14 = lVar14 + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
      uVar11 = *(undefined8 *)(lVar14 + 0x18);
      uVar13 = *(undefined8 *)(lVar14 + 0x20);
      FUN_100004640(lVar14,uVar11);
      FUN_1001ad344(uVar11,uVar13,lVar14);
      goto LAB_100258f5c;
    }
    LVar17.unknown = *(undefined **)(lVar15 + 400);
    lVar14 = *(long *)(lVar15 + 0x170);
    puVar8 = &DAT_100ec4418;
    _swift_allocObject(&DAT_100ec4418,0x18,7);
    _swift_weakInit(puVar8 + 0x10,lVar14);
    _swift_retain(puVar8);
    FUN_1001c9fd4(LVar17.unknown);
    SVar25 = (extension_Foundation)::Swift::String::init(LVar17);
    FUN_1001ca154(LVar17.unknown);
    SVar26 = (extension_Foundation)::Swift::String::init(LVar17);
    FUN_1001c2288(LVar17.unknown);
    SVar27 = (extension_Foundation)::Swift::String::init(LVar17);
    _swift_release(puVar8);
    pSVar1 = (String *)
             (lVar14 + _TtC22PasteLicensingAppStore16PaywallViewModel::pendingRestoreError);
    pcVar20 = pSVar1->str;
    pvVar19 = pSVar1[1].bridgeObject;
    pcVar18 = pSVar1[1].str;
    *(void **)(lVar15 + 0x78) = pSVar1->bridgeObject;
    *(char **)(lVar15 + 0x70) = pcVar20;
    *(void **)(lVar15 + 0x88) = pvVar19;
    *(char **)(lVar15 + 0x80) = pcVar18;
    pvVar21 = pSVar1[4].bridgeObject;
    pcVar20 = pSVar1[4].str;
    pvVar19 = pSVar1[5].bridgeObject;
    pcVar18 = pSVar1[5].str;
    pcVar24 = pSVar1[2].str;
    pvVar23 = pSVar1[3].bridgeObject;
    pcVar22 = pSVar1[3].str;
    *(void **)(lVar15 + 0x98) = pSVar1[2].bridgeObject;
    *(char **)(lVar15 + 0x90) = pcVar24;
    *(void **)(lVar15 + 0xa8) = pvVar23;
    *(char **)(lVar15 + 0xa0) = pcVar22;
    *(void **)(lVar15 + 0xb8) = pvVar21;
    *(char **)(lVar15 + 0xb0) = pcVar20;
    *(void **)(lVar15 + 200) = pvVar19;
    *(char **)(lVar15 + 0xc0) = pcVar18;
    *pSVar1 = SVar25;
    pSVar1[1] = SVar26;
    pSVar1[2] = SVar27;
    pSVar1[3].str = (char *)thunk_FUN_10025f82c;
    pSVar1[3].bridgeObject = puVar8;
    pSVar1[4].bridgeObject = (void *)0x0;
    pSVar1[4].str = (char *)0x0;
    pSVar1[5].bridgeObject = (void *)0x0;
    pSVar1[5].str = (char *)0x0;
    FUN_100005808(lVar15 + 0x70,&DAT_100fb8ed0,&DAT_100c388c0);
    _swift_storeEnumTagMultiPayload(pPVar7,uVar13,3);
    puVar8 = &DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar9 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    FUN_1000c495c(pPVar7,uVar11,FUN_10025cfc4);
    _swift_retain(lVar14);
    Combine::Published::_set_subscript(pPVar7,uVar11,lVar14,puVar8,puVar9);
  }
  else {
    uVar12 = *(ulong *)(lVar15 + 0x188);
    uVar11 = *(undefined8 *)(lVar15 + 0x178);
    *(long *)(lVar15 + 0x160) = unaff_x20;
    _swift_errorRetain();
    puVar8 = &DAT_100fb8200;
    FUN_1000037f0(&DAT_100fb8200,&DAT_100c38350);
    _swift_dynamicCast(uVar12,lVar15 + 0x160,puVar8,uVar11,0);
    if ((uVar12 & 1) != 0) {
      uVar11 = *(undefined8 *)(lVar15 + 0x188);
      (**(code **)(*(long *)(lVar15 + 0x180) + 0x58))(uVar11,*(undefined8 *)(lVar15 + 0x178));
      if ((int)uVar11 ==
          *(int *)
           PTR___enum_case_for_StoreKit_StoreKitError_userCancelled_StoreKit_StoreKitError_Type___>_StoreKit_StoreKitError_100ea7cd8
         ) {
        uVar11 = *(undefined8 *)(lVar15 + 0x1a0);
        pPVar7 = *(Published **)(lVar15 + 0x1a8);
        uVar13 = *(undefined8 *)(lVar15 + 0x170);
        _swift_storeEnumTagMultiPayload(pPVar7,*(undefined8 *)(lVar15 + 0x198),3);
        puVar8 = &DAT_100c38718;
        _swift_getKeyPath(&DAT_100c38718);
        puVar9 = &DAT_100c38740;
        _swift_getKeyPath(&DAT_100c38740);
        FUN_1000c495c(pPVar7,uVar11,FUN_10025cfc4);
        _swift_retain(uVar13);
        Combine::Published::_set_subscript(pPVar7,uVar11,uVar13,puVar8,puVar9);
        _swift_errorRelease();
        FUN_10005241c(pPVar7,FUN_10025cfc4);
        _swift_errorRelease(*(undefined8 *)(lVar15 + 0x160));
        goto LAB_100258f5c;
      }
      (**(code **)(*(long *)(lVar15 + 0x180) + 8))
                (*(undefined8 *)(lVar15 + 0x188),*(undefined8 *)(lVar15 + 0x178));
    }
    uVar11 = *(undefined8 *)(lVar15 + 0x1a0);
    pPVar7 = *(Published **)(lVar15 + 0x1a8);
    uVar13 = *(undefined8 *)(lVar15 + 0x198);
    LVar17.unknown = *(undefined **)(lVar15 + 400);
    lVar14 = *(long *)(lVar15 + 0x170);
    _swift_errorRelease(*(undefined8 *)(lVar15 + 0x160));
    puVar8 = &DAT_100ec4418;
    _swift_allocObject(&DAT_100ec4418,0x18,7);
    _swift_weakInit(puVar8 + 0x10,lVar14);
    _swift_retain(puVar8);
    FUN_1001ca454(LVar17.unknown);
    SVar25 = (extension_Foundation)::Swift::String::init(LVar17);
    _swift_getErrorValue();
    SVar26 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    thunk_FUN_1001e6c68(LVar17.unknown,SVar26.str);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    SVar26 = (extension_Foundation)::Swift::String::init(LVar17);
    FUN_1001c2288(LVar17.unknown);
    SVar27 = (extension_Foundation)::Swift::String::init(LVar17);
    _swift_release(puVar8);
    pSVar1 = (String *)
             (lVar14 + _TtC22PasteLicensingAppStore16PaywallViewModel::pendingRestoreError);
    pcVar20 = pSVar1->str;
    pvVar19 = pSVar1[1].bridgeObject;
    pcVar18 = pSVar1[1].str;
    *(void **)(lVar15 + 0x18) = pSVar1->bridgeObject;
    *(char **)(lVar15 + 0x10) = pcVar20;
    *(void **)(lVar15 + 0x28) = pvVar19;
    *(char **)(lVar15 + 0x20) = pcVar18;
    pvVar21 = pSVar1[4].bridgeObject;
    pcVar20 = pSVar1[4].str;
    pvVar19 = pSVar1[5].bridgeObject;
    pcVar18 = pSVar1[5].str;
    pcVar24 = pSVar1[2].str;
    pvVar23 = pSVar1[3].bridgeObject;
    pcVar22 = pSVar1[3].str;
    *(void **)(lVar15 + 0x38) = pSVar1[2].bridgeObject;
    *(char **)(lVar15 + 0x30) = pcVar24;
    *(void **)(lVar15 + 0x48) = pvVar23;
    *(char **)(lVar15 + 0x40) = pcVar22;
    *(void **)(lVar15 + 0x58) = pvVar21;
    *(char **)(lVar15 + 0x50) = pcVar20;
    *(void **)(lVar15 + 0x68) = pvVar19;
    *(char **)(lVar15 + 0x60) = pcVar18;
    *pSVar1 = SVar25;
    pSVar1[1] = SVar26;
    pSVar1[2] = SVar27;
    pSVar1[3].str = (char *)FUN_10025f82c;
    pSVar1[3].bridgeObject = puVar8;
    pSVar1[4].bridgeObject = (void *)0x0;
    pSVar1[4].str = (char *)0x0;
    pSVar1[5].bridgeObject = (void *)0x0;
    pSVar1[5].str = (char *)0x0;
    FUN_100005808(lVar15 + 0x10,&DAT_100fb8ed0,&DAT_100c388c0);
    _swift_storeEnumTagMultiPayload(pPVar7,uVar13,3);
    pPVar6 = (Published *)&DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar8 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    FUN_1000c495c(pPVar7,uVar11,FUN_10025cfc4);
    _swift_retain(lVar14);
    Combine::Published::_set_subscript(pPVar6,uVar11,lVar14,pPVar6,puVar8);
    _swift_errorRelease();
  }
  FUN_10005241c(pPVar7,FUN_10025cfc4);
LAB_100258f5c:
  uVar11 = *(undefined8 *)(lVar15 + 0x1a0);
  uVar13 = *(undefined8 *)(lVar15 + 0x188);
  uVar3 = *(undefined8 *)(lVar15 + 400);
  _swift_task_dealloc(*(undefined8 *)(lVar15 + 0x1a8));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x000100258fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))();
  return;
}



/* Address: 0x100259104 | FUN_100259104 */

void FUN_100259104(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar4;
  Published *pPVar5;
  
  lVar1 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pPVar5 = (Published *)(puVar4 + -extraout_x12);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_storeEnumTagMultiPayload(pPVar5,lVar1,3);
    puVar2 = &DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar3 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    FUN_1000c495c(pPVar5,puVar4,FUN_10025cfc4);
    Combine::Published::_set_subscript(pPVar5,puVar4,param_1,puVar2,puVar3);
    FUN_10005241c(pPVar5,FUN_10025cfc4);
  }
  return;
}



/* Address: 0x100259200 | FUN_100259200 */

void FUN_100259200(void)

{
  undefined8 *puVar1;
  long lVar2;
  Task TVar3;
  long extraout_x8;
  long extraout_x12;
  long lVar4;
  Published *unaff_x20;
  long lVar5;
  undefined *puVar6;
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
  
  lVar2 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar4 - extraout_x12;
  puVar6 = *(undefined **)
            ((long)&unaff_x20->unknown +
            _TtC22PasteLicensingAppStore16PaywallViewModel::restorePurchasesTask);
  if (puVar6 != (undefined *)0x0) {
    TVar3.unknown = puVar6;
    _swift_retain();
    Swift::Task::cancel(TVar3);
    _swift_release(puVar6);
  }
  puVar1 = (undefined8 *)
           ((long)&unaff_x20->unknown +
           _TtC22PasteLicensingAppStore16PaywallViewModel::pendingRestoreError);
  uStack_78 = puVar1[5];
  local_80 = puVar1[4];
  uStack_68 = puVar1[7];
  uStack_70 = puVar1[6];
  uStack_58 = puVar1[9];
  local_60 = puVar1[8];
  uStack_48 = puVar1[0xb];
  uStack_50 = puVar1[10];
  uStack_98 = puVar1[1];
  local_a0 = *puVar1;
  uStack_88 = puVar1[3];
  uStack_90 = puVar1[2];
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  FUN_100005808(&local_a0,&DAT_100fb8ed0,&DAT_100c388c0);
  _swift_storeEnumTagMultiPayload(lVar5,lVar2,3);
  _swift_getKeyPath(&DAT_100c38718);
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(lVar5,lVar4,FUN_10025cfc4);
  _swift_retain();
  Combine::Published::_set_subscript(unaff_x20,lVar4);
  FUN_10005241c(lVar5,FUN_10025cfc4);
  return;
}



/* Address: 0x100259380 | FUN_100259380 */

void FUN_100259380(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = in_x3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar2;
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x28) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x30) = puVar3;
  _swift_task_switch(FUN_100259410,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100259410 | FUN_100259410 */

void FUN_100259410(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100259478;
  FUN_10024f984();
  return;
}



/* Address: 0x100259478 | FUN_100259478 */

void FUN_100259478(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  _swift_release(uVar1);
  _swift_task_switch(FUN_100040f90,*(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
  return;
}



/* Address: 0x1002594c4 | FUN_1002594c4 */

void FUN_1002594c4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  Date DVar5;
  LocalizedStringResource LVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = in_x3;
  lVar2 = 0;
  FUN_10025cfc4();
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x58) = DVar5.unknown;
  lVar2 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  lVar2 = 0;
  FUN_100408dd0();
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar4;
  LVar6 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(LVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  lVar2 = 0;
  FUN_100408ee8();
  uVar4 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  *(MainActor **)(unaff_x22 + 0x90) = pMVar7;
  puVar8 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x98) = puVar8;
  UVar9 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100259614,UVar9.unknown,puVar8);
  return;
}



/* Address: 0x100259614 | FUN_100259614 */

void FUN_100259614(void)

{
  int iVar1;
  undefined8 uVar2;
  LocalizedStringResource localized;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Date DVar8;
  Calendar CVar9;
  long *plVar10;
  int *piVar11;
  long unaff_x22;
  undefined8 uVar12;
  String SVar13;
  String SVar14;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  localized.unknown = *(undefined **)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x60);
  CVar9.unknown = *(undefined **)(unaff_x22 + 0x68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1001ce954(localized.unknown);
  SVar13 = (extension_Foundation)::Swift::String::init(localized);
  FUN_1001ce7d4(localized.unknown);
  SVar14 = (extension_Foundation)::Swift::String::init(localized);
  FUN_1000037f0(&DAT_100fb8f18,&DAT_100c38af8);
  DVar8 = Foundation::Date::init();
  Foundation::Date::addingTimeInterval(1036800.0,DVar8);
  (**(code **)(lVar4 + 8))(CVar9.unknown,uVar12);
  Foundation::Calendar::get_current(CVar9);
  _swift_storeEnumTagMultiPayload(uVar7,uVar3,1);
  FUN_10025f688();
  FUN_100407258(uVar6,0xd000000000000012,0x8000000100d9f510,SVar13.str,SVar13.bridgeObject,0,
                0xe000000000000000,SVar14.str,SVar14.bridgeObject,0,0x201);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar4 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar3);
  piVar11 = *(int **)(lVar4 + 8);
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1002597cc;
                    /* WARNING: Could not recover jumptable at 0x0001002597c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))
            (uVar2,uVar5,*(undefined8 *)(unaff_x22 + 0x88),uVar3,lVar4);
  return;
}



/* Address: 0x1002597cc | FUN_1002597cc */

void FUN_1002597cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Published *pPVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  
  lVar13 = *unaff_x22;
  lVar12 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0xa0));
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(param_2);
  }
  else {
    _swift_errorRelease();
  }
  uVar1 = *(undefined8 *)(lVar13 + 0x88);
  uVar2 = *(undefined8 *)(lVar13 + 0x78);
  uVar4 = *(undefined8 *)(lVar13 + 0x80);
  uVar11 = *(undefined8 *)(lVar13 + 0x68);
  uVar3 = *(undefined8 *)(lVar13 + 0x48);
  uVar5 = *(undefined8 *)(lVar13 + 0x50);
  lVar10 = *(long *)(lVar13 + 0x38);
  uVar6 = *(undefined8 *)(lVar13 + 0x40);
  _swift_release(*(undefined8 *)(lVar13 + 0x90));
  FUN_100004594(lVar13 + 0x10);
  _swift_storeEnumTagMultiPayload(uVar5,uVar6,3);
  pPVar8 = (Published *)&DAT_100c38718;
  _swift_getKeyPath(&DAT_100c38718);
  puVar9 = &DAT_100c38740;
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(uVar5,uVar3,FUN_10025cfc4);
  _swift_retain(lVar10);
  Combine::Published::_set_subscript(pPVar8,uVar3,lVar10,pPVar8,puVar9);
  FUN_10005241c(uVar5,FUN_10025cfc4);
  lVar10 = lVar10 + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
  uVar6 = *(undefined8 *)(lVar10 + 0x18);
  uVar7 = *(undefined8 *)(lVar10 + 0x20);
  FUN_100004640(lVar10,uVar6);
  FUN_1001ad344(uVar6,uVar7,lVar10);
  FUN_10005241c(uVar1,FUN_100408ee8);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100259940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 8))();
  return;
}



/* Address: 0x100259944 | FUN_100259944 */

undefined * FUN_100259944(void)

{
  ulong uVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  MainActor *pMVar9;
  undefined8 *puVar10;
  UnownedSerialExecutor UVar11;
  UnownedSerialExecutor UVar12;
  undefined7 extraout_var;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  long extraout_x12;
  long lVar15;
  long unaff_x20;
  ulong uVar16;
  code *pcVar17;
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  uint local_dc;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  ulong uStack_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  
  local_78 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_88 = *(long *)(local_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  puVar7 = &DAT_100fb86d8;
  local_e8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fb86d8,&DAT_100c38238);
  local_c0 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar7 = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar14 = lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12;
  lVar8 = 0;
  local_80 = lVar14;
  FUN_1002abb94();
  local_b0 = *(long *)(lVar8 + -8);
  local_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  local_70 = lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(unaff_x20 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions);
  uVar16 = *(ulong *)(lVar8 + 0x10);
  _swift_bridgeObjectRetain(lVar8);
  local_b8 = uVar16;
  if (uVar16 == 0) {
    local_d8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar16 = 0;
    local_d8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_d0 = lVar8;
    local_a0 = lVar15;
    do {
      if (*(ulong *)(lVar8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100259e64);
        (*pcVar17)();
      }
      uStack_90 = (ulong)*(byte *)(local_b0 + 0x50) + 0x20 &
                  ((ulong)*(byte *)(local_b0 + 0x50) ^ 0xffffffffffffffff);
      local_98 = *(long *)(local_b0 + 0x48);
      FUN_1000c495c(lVar8 + uStack_90 + local_98 * uVar16,local_70,FUN_1002abb94);
      pMVar9 = Swift::MainActor::typeMetadataAccessor();
      pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
      puVar10 = &DAT_100fb7f60;
      FUN_100003a00(&DAT_100fb7f60,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar11 = Swift::Actor::get_unownedExecutor();
      UVar12 = UVar11;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar12.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteLicensingAppStore/PaywallViewModel.swift",0x2d,1,0x111,UVar11.unknown,
                   puVar10);
      }
      puVar7 = local_78;
      lVar4 = local_80;
      lVar8 = local_88;
      iVar2 = *(int *)(local_a8 + 0x14);
      (**(code **)(local_88 + 0x38))(local_80,1,1,local_78);
      lVar15 = local_a0;
      lVar14 = (long)*(int *)(local_c0 + 0x30);
      FUN_100011090(local_70 + iVar2,local_a0,&DAT_100fb86e0,&DAT_100c38670);
      FUN_100011090(lVar4,lVar15 + lVar14,&DAT_100fb86e0,&DAT_100c38670);
      pcVar17 = *(code **)(lVar8 + 0x30);
      lVar8 = lVar15;
      (*pcVar17)(lVar15,1,puVar7);
      if ((int)lVar8 == 1) {
        FUN_100005808(local_80,&DAT_100fb86e0,&DAT_100c38670);
        lVar14 = lVar15 + lVar14;
        (*pcVar17)(lVar14,1,local_78);
        lVar8 = local_d0;
        if ((int)lVar14 != 1) {
LAB_100259af8:
          lVar8 = local_d0;
          FUN_100005808(lVar15,&DAT_100fb86d8,&DAT_100c38238);
          _swift_release(pMVar9);
          goto LAB_100259b18;
        }
        FUN_100005808(lVar15,&DAT_100fb86e0,&DAT_100c38670);
        _swift_release(pMVar9);
LAB_100259d9c:
        puVar7 = local_d8;
        puVar13 = local_d8;
        _swift_isUniquelyReferenced_nonNull_native();
        local_68 = puVar7;
        if (((ulong)puVar13 & 1) == 0) {
          FUN_1002b1050(0,*(long *)(puVar7 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar1) {
          FUN_1002b1050(1 < *(ulong *)(local_68 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(local_68 + 0x10) = uVar1 + 1;
        local_d8 = local_68;
        FUN_1000523d8(local_70,local_68 + uVar1 * local_98 + uStack_90,FUN_1002abb94);
      }
      else {
        FUN_100011090(lVar15,local_c8,&DAT_100fb86e0,&DAT_100c38670);
        lVar8 = lVar15 + lVar14;
        (*pcVar17)(lVar8,1,local_78);
        puVar7 = local_78;
        lVar5 = local_88;
        lVar4 = local_c8;
        puVar3 = local_e8;
        if ((int)lVar8 == 1) {
          FUN_100005808(local_80,&DAT_100fb86e0,&DAT_100c38670);
          (**(code **)(local_88 + 8))(local_c8,local_78);
          goto LAB_100259af8;
        }
        (**(code **)(local_88 + 0x20))(local_e8,lVar15 + lVar14,local_78);
        puVar10 = &DAT_100fb86e8;
        FUN_100003a00(&DAT_100fb86e8,PTR_typeMetadataAccessor_100ea6de0,
                      PTR_Foundation__Foundation__DateComponents_>Swift__Equatable_100ea6df0);
        bVar6 = Swift::Equatable::___infix(lVar4,puVar3,puVar7,puVar10);
        lVar14 = local_80;
        local_dc = (uint)CONCAT71(extraout_var,bVar6);
        pcVar17 = *(code **)(lVar5 + 8);
        (*pcVar17)(puVar3,puVar7);
        lVar8 = local_a0;
        FUN_100005808(lVar14,&DAT_100fb86e0,&DAT_100c38670);
        (*pcVar17)(lVar4,puVar7);
        FUN_100005808(lVar8,&DAT_100fb86e0,&DAT_100c38670);
        _swift_release(pMVar9);
        lVar8 = local_d0;
        if ((local_dc & 1) != 0) goto LAB_100259d9c;
LAB_100259b18:
        FUN_10005241c(local_70,FUN_1002abb94);
      }
      uVar16 = uVar16 + 1;
    } while (local_b8 != uVar16);
  }
  _swift_bridgeObjectRelease(lVar8);
  return local_d8;
}



/* Address: 0x100259e64 | FUN_100259e64 */

void FUN_100259e64(void)

{
  undefined *puVar1;
  long lVar2;
  TaskPriority TVar3;
  MainActor *this;
  MainActor *pMVar4;
  undefined8 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  MainActor *unaff_x20;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  
  puVar1 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar2 = 0;
  FUN_10025cfc4();
  pcVar6 = FUN_10025cfc4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar2 - extraout_x12;
  _swift_storeEnumTagMultiPayload(lVar8);
  _swift_getKeyPath(&DAT_100c38718);
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(lVar8,lVar2,FUN_10025cfc4);
  _swift_retain();
  Combine::Published::_set_subscript((Published *)FUN_10025cfc4,lVar2);
  FUN_10005241c(lVar8,pcVar6);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(puVar7,1,1,TVar3.unknown);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = unaff_x20;
  _swift_retain();
  pMVar4 = Swift::MainActor::get_shared(this,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar1 = &DAT_100ec43f0;
  _swift_allocObject(&DAT_100ec43f0,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar4;
  *(undefined8 **)(puVar1 + 0x18) = puVar5;
  *(MainActor **)(puVar1 + 0x20) = unaff_x20;
  FUN_10024cc3c(0,0,puVar7,&DAT_100c38768,puVar1);
  _swift_release();
  return;
}



/* Address: 0x10025a038 | FUN_10025a038 */

void FUN_10025a038(void)

{
  LocalizedStringResource LVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  SubscriptionInfo SVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c8) = in_x3;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(LVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar2;
  lVar3 = 0;
  FUN_10025cfc4();
  *(long *)(unaff_x22 + 0x1d8) = lVar3;
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar2;
  puVar5 = &DAT_100fb8e70;
  FUN_1000037f0(&DAT_100fb8e70,&DAT_100c38770);
  *(undefined **)(unaff_x22 + 0x1f0) = puVar5;
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  puVar5 = &DAT_100fb8658;
  FUN_1000037f0(&DAT_100fb8658,&DAT_100c38220);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  SVar6 = StoreKit::Product::SubscriptionInfo::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x208) = SVar6.unknown;
  lVar3 = *(long *)(SVar6.unknown + -8);
  *(long *)(unaff_x22 + 0x210) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar2;
  puVar5 = &DAT_100fb8618;
  FUN_1000037f0(&DAT_100fb8618,&DAT_100c385c0);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x228) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x238) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar2;
  puVar5 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar2;
  lVar3 = 0;
  FUN_1002abb94();
  *(long *)(unaff_x22 + 600) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x260) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x268) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x278) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x280) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x288) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x290) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar2;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x2a0) = pMVar7;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  *(MainActor **)(unaff_x22 + 0x2a8) = pMVar7;
  puVar8 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x2b0) = puVar8;
  UVar9 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x2b8) = UVar9.unknown;
  *(undefined8 **)(unaff_x22 + 0x2c0) = puVar8;
  _swift_task_switch(FUN_10025a2ac,UVar9.unknown,puVar8);
  return;
}



/* Address: 0x10025a2ac | FUN_10025a2ac */

void FUN_10025a2ac(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x2a8);
  *(undefined8 *)(unaff_x22 + 0x2c8) =
       *(undefined8 *)
        (*(long *)(unaff_x22 + 0x1c8) +
        _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptionManager);
  FUN_1000da768(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar3 = *(long *)(unaff_x22 + 0x120);
  FUN_100004640(unaff_x22 + 0x100,uVar2);
  puVar4 = &DAT_100fb8650;
  FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
  *(undefined **)(unaff_x22 + 0x2d0) = puVar4;
  _swift_initStaticObject();
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_retain(uVar8);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2d8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10025a398;
                    /* WARNING: Could not recover jumptable at 0x00010025a394. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar8,uVar7,puVar4,uVar2,lVar3);
  return;
}



/* Address: 0x10025a398 | FUN_10025a398 */

void FUN_10025a398(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  LocalizedStringResource localized;
  undefined8 *puVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  DateComponents DVar10;
  undefined *puVar11;
  Published *pPVar12;
  long *plVar13;
  uint uVar14;
  ulong *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined *unaff_x20;
  long lVar26;
  long lVar27;
  MainActor *pMVar28;
  undefined8 uVar29;
  Product PVar30;
  ulong *puVar31;
  ulong uVar32;
  undefined1 uVar33;
  undefined8 uVar34;
  long *unaff_x22;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined1 *puVar37;
  long lVar38;
  undefined8 uVar39;
  MainActor *this;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  long lVar44;
  undefined8 uVar45;
  ulong uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  String SVar49;
  String SVar50;
  
  lVar38 = *unaff_x22;
  lVar26 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar38 + 0x2d8));
  uVar4 = *(undefined8 *)(lVar38 + 0x2a8);
  if (unaff_x20 == (undefined *)0x0) {
    lVar27 = *(long *)(lVar38 + 0x1c8);
    _swift_release(uVar4);
    lVar8 = _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions;
    uVar4 = *(undefined8 *)(lVar27 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions);
    *(undefined8 *)(lVar27 + _TtC22PasteLicensingAppStore16PaywallViewModel::subscriptions) =
         param_1;
    _swift_bridgeObjectRelease(uVar4);
    FUN_100004594(lVar38 + 0x100);
    lVar24 = *(long *)(lVar27 + lVar8);
    uVar17 = *(ulong *)(lVar24 + 0x10);
    if (uVar17 == 0) {
      uVar4 = *(undefined8 *)(lVar38 + 0x2a8);
    }
    else {
      lVar44 = *(long *)(lVar38 + 0x260);
      uVar14 = *(uint *)(lVar44 + 0x50);
      *(uint *)(lVar38 + 0x368) = uVar14;
      uVar18 = (ulong)uVar14 & 0xff;
      _swift_bridgeObjectRetain(lVar24);
      uVar46 = 0;
      do {
        if (*(ulong *)(lVar24 + 0x10) <= uVar46) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10025ad70);
          (*pcVar3)();
        }
        uVar4 = *(undefined8 *)(lVar38 + 0x2b0);
        this = *(MainActor **)(lVar38 + 0x2a0);
        pMVar28 = *(MainActor **)(lVar38 + 0x288);
        uVar42 = *(undefined8 *)(lVar38 + 0x280);
        lVar19 = *(long *)(lVar44 + 0x48);
        *(long *)(lVar38 + 0x2e0) = lVar19;
        FUN_1000c495c(lVar24 + (uVar18 + 0x20 & (uVar18 ^ 0xffffffffffffffff)) + lVar19 * uVar46,
                      pMVar28,FUN_1002abb94);
        FUN_1000523d8(pMVar28,uVar42,FUN_1002abb94);
        pMVar28 = Swift::MainActor::get_shared(this,pMVar28);
        UVar5 = Swift::Actor::get_unownedExecutor();
        UVar6 = UVar5;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar6.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteLicensingAppStore/PaywallViewModel.swift",0x2d,1,0x121,UVar5.unknown,
                     uVar4);
        }
        cVar2 = **(char **)(lVar38 + 0x280);
        _swift_release(pMVar28);
        if (cVar2 == '\x01') {
          uVar4 = *(undefined8 *)(lVar38 + 0x298);
          uVar36 = *(undefined8 *)(lVar38 + 0x290);
          uVar42 = *(undefined8 *)(lVar38 + 0x280);
          _swift_bridgeObjectRelease(lVar24);
          FUN_1000523d8(uVar42,uVar36,FUN_1002abb94);
          FUN_1000523d8(uVar36,uVar4,FUN_1002abb94);
          lVar8 = *(long *)(lVar27 + lVar8);
          *(long *)(lVar38 + 0x2e8) = lVar8;
          lVar24 = *(long *)(lVar8 + 0x10);
          *(long *)(lVar38 + 0x2f0) = lVar24;
          if (lVar24 == 0) goto LAB_10025abb8;
          *(undefined8 *)(lVar38 + 0x2f8) = 0;
          lVar24 = *(long *)(lVar8 + 0x10);
          _swift_bridgeObjectRetain();
          if (lVar24 == 0) goto LAB_10025abac;
          uVar17 = 0;
          goto LAB_10025a884;
        }
        uVar46 = uVar46 + 1;
        FUN_10005241c(*(undefined8 *)(lVar38 + 0x280),FUN_1002abb94);
      } while (uVar17 != uVar46);
      uVar4 = *(undefined8 *)(lVar38 + 0x2a8);
      _swift_bridgeObjectRelease(lVar24);
    }
    _swift_release(uVar4);
    FUN_10025f4d8();
    unaff_x20 = &DAT_100ec4248;
    param_4 = 0;
    _swift_allocError(&DAT_100ec4248,uVar4,0);
    _swift_willThrow();
  }
  else {
    _swift_release(uVar4);
    _swift_release(uVar4);
    FUN_100004594(lVar38 + 0x100);
  }
  uVar4 = *(undefined8 *)(lVar38 + 0x1e0);
  puVar1 = *(undefined8 **)(lVar38 + 0x1e8);
  localized.unknown = *(undefined **)(lVar38 + 0x1d0);
  uVar42 = *(undefined8 *)(lVar38 + 0x1d8);
  uVar40 = *(undefined8 *)(lVar38 + 0x1c8);
  puVar9 = &DAT_100ec4418;
  puVar11 = puVar9;
  _swift_allocObject(&DAT_100ec4418,0x18,7);
  _swift_weakInit(puVar11 + 0x10,uVar40);
  uVar16 = 7;
  _swift_allocObject(&DAT_100ec4418,0x18);
  uVar36 = uVar40;
  _swift_weakInit(puVar9 + 0x10);
  _swift_retain(puVar11);
  _swift_retain(puVar9);
  puVar7 = unaff_x20;
  FUN_100253ef8();
  FUN_1001c3608(localized.unknown);
  SVar49 = (extension_Foundation)::Swift::String::init(localized);
  _swift_retain(puVar11);
  FUN_1001c0788(localized.unknown);
  SVar50 = (extension_Foundation)::Swift::String::init(localized);
  _swift_release_n(puVar11,2);
  _swift_release(puVar9);
  *puVar1 = puVar7;
  puVar1[1] = uVar36;
  puVar1[2] = uVar16;
  puVar1[3] = param_4;
  *(String *)(puVar1 + 4) = SVar49;
  puVar1[6] = FUN_10025f4c8;
  puVar1[7] = puVar11;
  *(String *)(puVar1 + 8) = SVar50;
  puVar1[10] = FUN_10025f4d0;
  puVar1[0xb] = puVar9;
  _swift_storeEnumTagMultiPayload(puVar1,uVar42,1);
  pPVar12 = (Published *)&DAT_100c38718;
  _swift_getKeyPath(&DAT_100c38718);
  puVar9 = &DAT_100c38740;
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(puVar1,uVar4,FUN_10025cfc4);
  _swift_retain(uVar40);
  Combine::Published::_set_subscript(pPVar12,uVar4,uVar40,pPVar12,puVar9);
  _swift_errorRelease(unaff_x20);
  FUN_10005241c(puVar1,FUN_10025cfc4);
  uVar45 = *(undefined8 *)(lVar38 + 0x290);
  uVar47 = *(undefined8 *)(lVar38 + 0x288);
  uVar48 = *(undefined8 *)(lVar38 + 0x280);
  uVar29 = *(undefined8 *)(lVar38 + 0x278);
  uVar25 = *(undefined8 *)(lVar38 + 0x270);
  uVar34 = *(undefined8 *)(lVar38 + 0x268);
  uVar35 = *(undefined8 *)(lVar38 + 0x250);
  uVar41 = *(undefined8 *)(lVar38 + 0x248);
  uVar43 = *(undefined8 *)(lVar38 + 0x240);
  uVar21 = *(undefined8 *)(lVar38 + 0x238);
  uVar40 = *(undefined8 *)(lVar38 + 0x230);
  uVar22 = *(undefined8 *)(lVar38 + 0x228);
  uVar20 = *(undefined8 *)(lVar38 + 0x220);
  uVar23 = *(undefined8 *)(lVar38 + 0x218);
  uVar4 = *(undefined8 *)(lVar38 + 0x1f8);
  uVar36 = *(undefined8 *)(lVar38 + 0x200);
  uVar42 = *(undefined8 *)(lVar38 + 0x1e0);
  uVar16 = *(undefined8 *)(lVar38 + 0x1e8);
  uVar39 = *(undefined8 *)(lVar38 + 0x1d0);
  _swift_task_dealloc(*(undefined8 *)(lVar38 + 0x298));
  _swift_task_dealloc(uVar45);
  _swift_task_dealloc(uVar47);
  _swift_task_dealloc(uVar48);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar41);
  _swift_task_dealloc(uVar43);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar42);
  _swift_task_dealloc(uVar39);
                    /* WARNING: Could not recover jumptable at 0x00010025a800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar26 + 8))();
  return;
LAB_10025a884:
  puVar11 = &DAT_100c38680;
  puVar9 = &DAT_100fb8db8;
  uVar42 = *(undefined8 *)(lVar38 + 0x278);
  puVar37 = *(undefined1 **)(lVar38 + 0x270);
  lVar24 = *(long *)(lVar38 + 600);
  uVar4 = *(undefined8 *)(lVar38 + 0x250);
  FUN_1000c495c(lVar8 + ((ulong)*(byte *)(lVar38 + 0x368) + 0x20 &
                        ((ulong)*(byte *)(lVar38 + 0x368) ^ 0xffffffffffffffff)) +
                *(long *)(lVar38 + 0x2e0) * uVar17,uVar42,FUN_1002abb94);
  FUN_1000523d8(uVar42,puVar37,FUN_1002abb94);
  *(undefined1 *)(lVar38 + 0x370) = *puVar37;
  FUN_100011090(puVar37 + *(int *)(lVar24 + 0x18),uVar4,&DAT_100fb8db8,&DAT_100c38680);
  lVar8 = 0;
  FUN_1002abbf0();
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(uVar4,1,lVar8);
  if ((int)uVar4 == 1) {
    uVar4 = *(undefined8 *)(lVar38 + 0x250);
    _swift_retain(*(undefined8 *)(lVar38 + 0x2a8));
    _swift_release();
LAB_10025a9f4:
    FUN_100005808(uVar4,puVar9,puVar11);
  }
  else {
    PVar30.unknown = *(undefined **)(lVar38 + 0x250);
    puVar9 = PVar30.unknown;
    _swift_getEnumCaseMultiPayload(PVar30.unknown,lVar8);
    uVar4 = *(undefined8 *)(lVar38 + 0x2a8);
    if ((int)puVar9 == 0) {
      lVar8 = *(long *)(lVar38 + 0x210);
      uVar36 = *(undefined8 *)(lVar38 + 0x208);
      uVar42 = *(undefined8 *)(lVar38 + 0x200);
      DVar10 = Foundation::DateComponents::typeMetadataAccessor();
      pcVar3 = *(code **)(*(long *)(DVar10.unknown + -8) + 8);
      _swift_retain(uVar4);
      (*pcVar3)(PVar30.unknown,DVar10.unknown);
      StoreKit::Product::_get_subscription(PVar30);
      (**(code **)(lVar8 + 0x30))(uVar42,1,uVar36);
      if ((int)uVar42 != 1) {
        (**(code **)(*(long *)(lVar38 + 0x210) + 0x20))
                  (*(undefined8 *)(lVar38 + 0x218),*(undefined8 *)(lVar38 + 0x200),
                   *(undefined8 *)(lVar38 + 0x208));
        _swift_task_switch(FUN_10025b8b8,0,0);
        return;
      }
      uVar4 = *(undefined8 *)(lVar38 + 0x200);
      _swift_release(*(undefined8 *)(lVar38 + 0x2a8));
      puVar9 = &DAT_100fb8658;
      puVar11 = &DAT_100c38220;
      goto LAB_10025a9f4;
    }
    _swift_retain(uVar4);
    _swift_release();
    FUN_10005241c(PVar30.unknown,FUN_1002abbf0);
  }
  puVar31 = *(ulong **)(lVar38 + 0x1c8);
  uVar17 = (ulong)*(byte *)(lVar38 + 0x370);
  puVar9 = &DAT_100c38778;
  _swift_getKeyPath(&DAT_100c38778);
  puVar11 = &DAT_100c387a0;
  _swift_getKeyPath(&DAT_100c387a0);
  pcVar3 = (code *)(lVar38 + 0x178);
  Combine::Published::_modify_subscript();
  uVar46 = *puVar31;
  puVar15 = puVar31;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar14 = (uint)uVar46;
  uVar32 = *puVar31;
  *(ulong *)(lVar38 + 0x1b0) = uVar32;
  *puVar31 = 0x8000000000000000;
  FUN_1002b0ec0();
  uVar18 = (ulong)~(uint)puVar15 & 1;
  if (SCARRY8(*(long *)(uVar32 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10025ad74);
    (*pcVar3)();
  }
  if (*(long *)(uVar32 + 0x18) < (long)(*(long *)(uVar32 + 0x10) + uVar18)) {
    uVar17 = (ulong)*(byte *)(lVar38 + 0x370);
    FUN_10025e860();
    FUN_1002b0ec0();
    if (((uint)puVar15 & 1) != (uVar14 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
      return;
    }
    uVar46 = *(ulong *)(lVar38 + 0x1b0);
joined_r0x00010025aae8:
    if (((ulong)puVar15 & 1) == 0) goto LAB_10025aaec;
LAB_10025aad0:
    *(undefined1 *)(*(long *)(uVar46 + 0x38) + uVar17) = 0;
  }
  else {
    if ((uVar46 & 1) == 0) {
      FUN_10025e3f8();
      uVar46 = *(ulong *)(lVar38 + 0x1b0);
      goto joined_r0x00010025aae8;
    }
    uVar46 = *(ulong *)(lVar38 + 0x1b0);
    if (((ulong)puVar15 & 1) != 0) goto LAB_10025aad0;
LAB_10025aaec:
    uVar33 = *(undefined1 *)(lVar38 + 0x370);
    lVar8 = uVar46 + (uVar17 >> 6) * 8;
    *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar17 & 0x3f);
    *(undefined1 *)(*(long *)(uVar46 + 0x30) + uVar17) = uVar33;
    *(undefined1 *)(*(long *)(uVar46 + 0x38) + uVar17) = 0;
    if (SCARRY8(*(long *)(uVar46 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10025ad78);
      (*pcVar3)();
    }
    *(long *)(uVar46 + 0x10) = *(long *)(uVar46 + 0x10) + 1;
  }
  lVar8 = *(long *)(lVar38 + 0x2f8);
  lVar24 = *(long *)(lVar38 + 0x2f0);
  uVar4 = *(undefined8 *)(lVar38 + 0x270);
  uVar17 = *puVar31;
  *puVar31 = uVar46;
  _swift_bridgeObjectRelease(uVar17);
  (*pcVar3)(lVar38 + 0x178,0);
  _swift_release(puVar11);
  _swift_release(puVar9);
  FUN_10005241c(uVar4,FUN_1002abb94);
  if (lVar8 + 1 == lVar24) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar38 + 0x2e8));
LAB_10025abb8:
    uVar4 = *(undefined8 *)(lVar38 + 0x1c8);
    puVar9 = &DAT_100c38778;
    _swift_getKeyPath();
    puVar11 = &DAT_100c387a0;
    _swift_getKeyPath(&DAT_100c387a0);
    puVar7 = puVar9;
    Combine::Published::_get_subscript(lVar38 + 0x1b8,uVar4,puVar9,puVar11);
    _swift_release(puVar11);
    _swift_release(puVar9);
    lVar8 = *(long *)(lVar38 + 0x1b8);
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar33 = 0;
    }
    else {
      uVar17 = (ulong)**(byte **)(lVar38 + 0x298);
      _swift_bridgeObjectRetain(lVar8);
      FUN_1002b0ec0();
      if (((ulong)puVar7 & 1) == 0) {
        uVar33 = 0;
      }
      else {
        uVar33 = *(undefined1 *)(*(long *)(lVar8 + 0x38) + uVar17);
      }
      _swift_bridgeObjectRelease(lVar8);
    }
    uVar4 = *(undefined8 *)(lVar38 + 0x1c8);
    _swift_bridgeObjectRelease(lVar8);
    pPVar12 = (Published *)&DAT_100c387c0;
    _swift_getKeyPath(&DAT_100c387c0);
    puVar9 = &DAT_100c387e8;
    _swift_getKeyPath(&DAT_100c387e8);
    *(undefined1 *)(lVar38 + 0x36c) = uVar33;
    _swift_retain(uVar4);
    Combine::Published::_set_subscript(pPVar12,lVar38 + 0x36c,uVar4,pPVar12,puVar9);
    FUN_1000da768(lVar38 + 0x1c0);
    *(undefined8 *)(lVar38 + 0x300) = *(undefined8 *)(lVar38 + 0x1c0);
    plVar13 = (long *)0x110;
    _swift_task_alloc();
    *(long **)(lVar38 + 0x308) = plVar13;
    *plVar13 = lVar26;
    plVar13[1] = (long)FUN_10025ad78;
    FUN_100250444(lVar38 + 0xd0);
    return;
  }
  uVar17 = *(long *)(lVar38 + 0x2f8) + 1;
  *(ulong *)(lVar38 + 0x2f8) = uVar17;
  lVar8 = *(long *)(lVar38 + 0x2e8);
  if (*(ulong *)(lVar8 + 0x10) <= uVar17) {
LAB_10025abac:
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10025abb0);
    (*pcVar3)();
  }
  goto LAB_10025a884;
}



/* Address: 0x10025ad78 | FUN_10025ad78 */

void FUN_10025ad78(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x300);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x308));
  *(undefined8 *)(lVar1 + 0x318) = *(undefined8 *)(lVar1 + 0xd8);
  *(undefined8 *)(lVar1 + 0x310) = *(undefined8 *)(lVar1 + 0xd0);
  *(undefined8 *)(lVar1 + 0x328) = *(undefined8 *)(lVar1 + 0xe8);
  *(undefined8 *)(lVar1 + 800) = *(undefined8 *)(lVar1 + 0xe0);
  *(undefined8 *)(lVar1 + 0x338) = *(undefined8 *)(lVar1 + 0xf8);
  *(undefined8 *)(lVar1 + 0x330) = *(undefined8 *)(lVar1 + 0xf0);
  _swift_release(uVar2);
  _swift_task_switch(FUN_10025addc,*(undefined8 *)(lVar1 + 0x2b8),*(undefined8 *)(lVar1 + 0x2c0));
  return;
}



/* Address: 0x10025addc | FUN_10025addc */

void FUN_10025addc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  char cVar6;
  byte bVar7;
  char cVar8;
  byte bVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  char *pcVar22;
  undefined8 uVar23;
  long lVar24;
  Published *pPVar42;
  Published *pPVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  long unaff_x22;
  undefined8 uVar29;
  undefined8 uVar30;
  char *pcVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  code *pcVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  
  pcVar35 = *(code **)(*(long *)(unaff_x22 + 0x260) + 0x38);
  *(code **)(unaff_x22 + 0x340) = pcVar35;
  (*pcVar35)(*(undefined8 *)(unaff_x22 + 0x248),1,1,*(undefined8 *)(unaff_x22 + 600));
  if (*(long *)(unaff_x22 + 0xf0) == 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
LAB_10025b0a8:
    uVar20 = *(undefined8 *)(unaff_x22 + 0x338);
    lVar24 = *(long *)(unaff_x22 + 0x330);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x328);
    uVar26 = *(undefined8 *)(unaff_x22 + 800);
    uVar34 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x310);
  }
  else {
    cVar6 = *(char *)(unaff_x22 + 0xd1);
    if (cVar6 != '\x01') {
      lVar21 = *(long *)(unaff_x22 + 0x2d0);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x2b0);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x2a8);
      FUN_1000da768(unaff_x22 + 0x150);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x168);
      lVar24 = *(long *)(unaff_x22 + 0x170);
      FUN_100004640(unaff_x22 + 0x150,uVar20);
      _swift_allocObject(lVar21,0x21,7);
      *(long *)(unaff_x22 + 0x358) = lVar21;
      *(undefined8 *)(lVar21 + 0x18) = 2;
      *(undefined8 *)(lVar21 + 0x10) = 1;
      *(char *)(lVar21 + 0x20) = cVar6;
      piVar14 = *(int **)(lVar24 + 0x10);
      iVar5 = *piVar14;
      plVar10 = (long *)(ulong)(uint)piVar14[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x360) = plVar10;
      *plVar10 = unaff_x22;
      plVar10[1] = (long)FUN_10025bee4;
                    /* WARNING: Could not recover jumptable at 0x00010025b02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar5 + (long)piVar14))(uVar26,uVar23,lVar21,uVar20,lVar24);
      return;
    }
    uVar23 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar20 = *(undefined8 *)(unaff_x22 + 600);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x248);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
    FUN_100005808(uVar26,&DAT_100fb8618,&DAT_100c385c0);
    FUN_1000c495c(uVar23,uVar26,FUN_1002abb94);
    (*pcVar35)(uVar26,0,1,uVar20);
    lVar39 = *(long *)(unaff_x22 + 0x260);
    uVar20 = *(undefined8 *)(unaff_x22 + 600);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x248);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x238);
    lVar21 = *(long *)(unaff_x22 + 0x1f0);
    lVar24 = *(long *)(unaff_x22 + 0x1f8);
    (**(code **)(unaff_x22 + 0x340))(uVar26,1,1,uVar20);
    lVar36 = (long)*(int *)(lVar21 + 0x30);
    FUN_100011090(uVar23,lVar24,&DAT_100fb8618,&DAT_100c385c0);
    FUN_100011090(uVar26,lVar24 + lVar36,&DAT_100fb8618,&DAT_100c385c0);
    pcVar35 = *(code **)(lVar39 + 0x30);
    lVar21 = lVar24;
    (*pcVar35)(lVar24,1,uVar20);
    uVar20 = *(undefined8 *)(unaff_x22 + 600);
    if ((int)lVar21 == 1) {
      FUN_100005808(*(undefined8 *)(unaff_x22 + 0x238),&DAT_100fb8618,&DAT_100c385c0);
      lVar24 = lVar24 + lVar36;
      (*pcVar35)(lVar24,1,uVar20);
      if ((int)lVar24 != 1) {
LAB_10025b090:
        FUN_100005808(*(undefined8 *)(unaff_x22 + 0x1f8),&DAT_100fb8e70,&DAT_100c38770);
        goto LAB_10025b0a8;
      }
      lVar24 = *(long *)(unaff_x22 + 0x1f8);
      FUN_100005808(unaff_x22 + 0xd0,&DAT_100fb85c0,&DAT_100c388a0);
      puVar11 = &DAT_100fb8618;
      puVar12 = &DAT_100c385c0;
    }
    else {
      FUN_100011090(*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x230),
                    &DAT_100fb8618,&DAT_100c385c0);
      lVar21 = lVar24 + lVar36;
      (*pcVar35)(lVar21,1,uVar20);
      if ((int)lVar21 == 1) {
        uVar20 = *(undefined8 *)(unaff_x22 + 0x230);
        FUN_100005808(*(undefined8 *)(unaff_x22 + 0x238),&DAT_100fb8618,&DAT_100c385c0);
        FUN_10005241c(uVar20,FUN_1002abb94);
        goto LAB_10025b090;
      }
      pcVar22 = *(char **)(unaff_x22 + 0x268);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x238);
      pcVar31 = *(char **)(unaff_x22 + 0x230);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1f8);
      FUN_1000523d8(lVar24 + lVar36,pcVar22,FUN_1002abb94);
      cVar6 = *pcVar31;
      cVar8 = *pcVar22;
      FUN_10005241c(pcVar22,FUN_1002abb94);
      FUN_100005808(uVar20,&DAT_100fb8618,&DAT_100c385c0);
      FUN_10005241c(pcVar31,FUN_1002abb94);
      FUN_100005808(uVar23,&DAT_100fb8618,&DAT_100c385c0);
      if (cVar6 != cVar8) goto LAB_10025b0a8;
      puVar11 = &DAT_100fb85c0;
      puVar12 = &DAT_100c388a0;
      lVar24 = unaff_x22 + 0xd0;
    }
    FUN_100005808(lVar24,puVar11,puVar12);
    uVar38 = 0;
    uVar34 = 0;
    uVar26 = 0;
    uVar23 = 0;
    lVar24 = 0;
    uVar20 = 0;
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar36 = *(long *)(unaff_x22 + 0x1c8);
  puVar1 = (undefined8 *)(lVar36 + _TtC22PasteLicensingAppStore16PaywallViewModel::offer);
  uVar17 = *puVar1;
  uVar29 = puVar1[1];
  uVar15 = puVar1[2];
  uVar32 = puVar1[3];
  uVar27 = puVar1[4];
  uVar37 = puVar1[5];
  *puVar1 = uVar38;
  puVar1[1] = uVar34;
  puVar1[2] = uVar26;
  puVar1[3] = uVar23;
  puVar1[4] = lVar24;
  puVar1[5] = uVar20;
  FUN_100255efc(uVar38,uVar34,uVar26,uVar23,lVar24,uVar20);
  FUN_10025f528(uVar17,uVar29,uVar15,uVar32,uVar27,uVar37);
  lVar21 = _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription;
  _swift_beginAccess(lVar36 + _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription,
                     unaff_x22 + 0x198,0x21,0);
  FUN_10025f558(uVar19,lVar36 + lVar21);
  _swift_endAccess(unaff_x22 + 0x198);
  if (lVar24 == 0) {
    lVar21 = *(long *)(unaff_x22 + 0x1c8);
    FUN_100255efc(uVar38,uVar34,uVar26,uVar23,0,uVar20);
    uVar27 = uVar38;
    FUN_10025f528(uVar38,uVar34,uVar26,uVar23,0,uVar20);
    puVar2 = (undefined8 *)
             (lVar21 + _TtC22PasteLicensingAppStore16PaywallViewModel::_paywallVariant);
    uVar17 = *puVar2;
    uVar15 = puVar2[1];
    uVar32 = puVar2[2];
    FUN_10025f5b8();
    uVar29 = uVar27;
    FUN_10025f5f8();
    _swift_retain(uVar17);
    _swift_retain(uVar15);
    _swift_retain(uVar32);
    FUN_1002d0c78(unaff_x22 + 0x36f,uVar17,uVar15,uVar32,&DAT_100ec4358,uVar27,uVar29);
    _swift_release(uVar17);
    _swift_release(uVar15);
    _swift_release(uVar32);
                    /* WARNING: Load size is inaccurate */
    pPVar42._0_1_ = *(Published **)(unaff_x22 + 0x36f);
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x10) = uVar38;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar34;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar23;
    *(long *)(unaff_x22 + 0x30) = lVar24;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x48) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0;
    *(undefined8 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    FUN_100255efc(uVar38,uVar34,uVar26,uVar23,lVar24,uVar20);
    FUN_100005808(unaff_x22 + 0x10,&DAT_100fb8eb0,&DAT_100c38808);
    pPVar42._0_1_ = (Published *)0x4;
  }
  pcVar35 = *(code **)(unaff_x22 + 0x340);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar37 = *(undefined8 *)(unaff_x22 + 600);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1e0);
  pPVar25 = *(Published **)(unaff_x22 + 0x1e8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d8);
  lVar36 = *(long *)(unaff_x22 + 0x1c8);
  puVar11 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar12 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
                    /* WARNING: Store size is inaccurate */
  *(Published **)(unaff_x22 + 0x36d) = pPVar42._0_1_;
  _swift_retain(lVar36);
  Combine::Published::_set_subscript(pPVar42._0_1_,unaff_x22 + 0x36d,lVar36,puVar11,puVar12);
  FUN_1000c495c(uVar27,uVar32,FUN_1002abb94);
  (*pcVar35)(uVar32,0,1,uVar37);
  _swift_getKeyPath(&DAT_100c38858);
  _swift_getKeyPath(&DAT_100c38880);
  FUN_100011090(uVar32,uVar29,&DAT_100fb8618,&DAT_100c385c0);
  _swift_retain(lVar36);
  Combine::Published::_set_subscript();
  FUN_100005808(uVar32,&DAT_100fb8618,&DAT_100c385c0);
  _swift_storeEnumTagMultiPayload(pPVar25,uVar15,3);
  puVar11 = &DAT_100c38718;
  _swift_getKeyPath(&DAT_100c38718);
  puVar12 = &DAT_100c38740;
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(pPVar25,uVar17,FUN_10025cfc4);
  _swift_retain(lVar36);
  Combine::Published::_set_subscript(pPVar25,uVar17,lVar36,puVar11,puVar12);
  FUN_10005241c(pPVar25,FUN_10025cfc4);
  FUN_1000da768(unaff_x22 + 0x128);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar21 = *(long *)(unaff_x22 + 0x148);
  FUN_100004640();
  bVar9 = *(byte *)(lVar36 + _TtC22PasteLicensingAppStore16PaywallViewModel::placement);
  puVar11 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar12 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
  Combine::Published::_get_subscript(unaff_x22 + 0x36e,lVar36,puVar11,puVar12);
  _swift_release(puVar12);
  _swift_release(puVar11);
  bVar7 = *(byte *)(unaff_x22 + 0x36e);
  puVar3 = (undefined1 *)0x8000000100d9f490;
  uVar15 = 0xd000000000000011;
  if (bVar7 != 4) {
    puVar3 = (undefined1 *)0xeb00000000656369;
    uVar15 = 0x6f684369746c756d;
  }
  puVar4 = (undefined1 *)0xec0000006563696f;
  uVar27 = 0x6843656c676e6973;
  if (bVar7 != 3) {
    puVar4 = puVar3;
    uVar27 = uVar15;
  }
  uVar15 = 0x6972466b63616c62;
  if (bVar7 != 1) {
    uVar15 = 0x6e6f4d7265627963;
  }
  uVar29 = 0x746c7561666564;
  if (bVar7 != 0) {
    uVar29 = uVar15;
  }
  puVar3 = &DAT_e700000000000000;
  if (bVar7 != 0) {
    puVar3 = (undefined1 *)0xeb00000000796164;
  }
  if (bVar7 < 3) {
    puVar4 = puVar3;
    uVar27 = uVar29;
  }
  uVar15 = *puVar1;
  uVar32 = puVar1[1];
  uVar29 = puVar1[2];
  uVar37 = puVar1[3];
  lVar36 = puVar1[4];
  uVar19 = puVar1[5];
  if (lVar36 == 0) {
    FUN_100255efc();
    FUN_10025f528(uVar15,uVar32,uVar29,uVar37,0,uVar19);
    uVar15 = 3;
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x70) = uVar15;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar37;
    *(long *)(unaff_x22 + 0x90) = lVar36;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    FUN_100255efc();
    FUN_100005808(unaff_x22 + 0x70,&DAT_100fb8eb0,&DAT_100c38808);
    uVar15 = 1;
  }
  uVar29 = *puVar1;
  uVar37 = puVar1[1];
  uVar32 = puVar1[2];
  uVar19 = puVar1[3];
  lVar36 = puVar1[4];
  uVar28 = puVar1[5];
  if (lVar36 == 0) {
    uVar30 = 0;
    uVar33 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar32);
    uVar30 = uVar37;
    uVar33 = uVar32;
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x248);
  FUN_100255efc(uVar29,uVar37,uVar32,uVar19,lVar36,uVar28);
  FUN_10025f528(uVar29,uVar37,uVar32,uVar19,lVar36,uVar28);
  uVar29 = 0;
  uVar13 = (ulong)bVar9;
  FUN_100191980(0,uVar13,uVar27,puVar4,uVar15,uVar30,uVar33);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(uVar33);
  (**(code **)(lVar21 + 0x18))(uVar29,uVar13,uVar27,uVar17);
  _swift_bridgeObjectRelease(uVar13);
  _swift_bridgeObjectRelease(uVar27);
  FUN_10025f528(uVar38,uVar34,uVar26,uVar23,lVar24,uVar20);
  FUN_100005808(uVar16,&DAT_100fb8618,&DAT_100c385c0);
  FUN_10005241c(uVar18,FUN_1002abb94);
  FUN_100004594(unaff_x22 + 0x128);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x288);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x280);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x298));
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar41);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar34);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010025b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10025b8b8 | FUN_10025b8b8 */

void FUN_10025b8b8(SubscriptionInfo param_1,undefined8 param_2,SubscriptionInfo param_3)

{
  long *plVar1;
  long unaff_x22;
  String for;
  
  for = StoreKit::Product::SubscriptionInfo::get_subscriptionGroupID(param_1);
  *(void **)(unaff_x22 + 0x348) = for.bridgeObject;
  plVar1 = (long *)(ulong)*(uint *)(PTR__isEligibleForIntroOffer_100ea7f68 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x350) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10025b91c;
  StoreKit::Product::SubscriptionInfo::_isEligibleForIntroOffer(for,param_3);
  return;
}



/* Address: 0x10025b91c | FUN_10025b91c */

void FUN_10025b91c(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar1 + 0x348);
  uVar2 = *(undefined8 *)(lVar1 + 0x2b0);
  uVar4 = *(undefined8 *)(lVar1 + 0x2a8);
  *(undefined1 *)(lVar1 + 0x371) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x350));
  _swift_bridgeObjectRelease(uVar3);
  FUN_1000da368(uVar4,uVar2);
  _swift_task_switch(FUN_10025b99c,uVar4,uVar2);
  return;
}



/* Address: 0x10025b99c | FUN_10025b99c */

void FUN_10025b99c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  DateComponents DVar4;
  Published *pPVar5;
  long *plVar6;
  uint uVar7;
  ulong *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  Product PVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long unaff_x22;
  byte bVar21;
  undefined1 uVar22;
  code *pcVar23;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
  lVar17 = *(long *)(unaff_x22 + 0x210);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
  (**(code **)(lVar17 + 8))(uVar13,uVar11);
  bVar21 = *(byte *)(unaff_x22 + 0x371);
  do {
    puVar15 = *(ulong **)(unaff_x22 + 0x1c8);
    uVar18 = (ulong)*(byte *)(unaff_x22 + 0x370);
    puVar1 = &DAT_100c38778;
    _swift_getKeyPath(&DAT_100c38778);
    puVar2 = &DAT_100c387a0;
    _swift_getKeyPath(&DAT_100c387a0);
    pcVar23 = (code *)(unaff_x22 + 0x178);
    Combine::Published::_modify_subscript();
    uVar3 = *puVar15;
    puVar8 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar7 = (uint)uVar3;
    uVar16 = *puVar15;
    *(ulong *)(unaff_x22 + 0x1b0) = uVar16;
    *puVar15 = 0x8000000000000000;
    FUN_1002b0ec0();
    uVar10 = (ulong)~(uint)puVar8 & 1;
    if (SCARRY8(*(long *)(uVar16 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x10025bedc);
      (*pcVar23)();
    }
    if (*(long *)(uVar16 + 0x18) < (long)(*(long *)(uVar16 + 0x10) + uVar10)) {
      uVar18 = (ulong)*(byte *)(unaff_x22 + 0x370);
      FUN_10025e860();
      FUN_1002b0ec0();
      if (((uint)puVar8 & 1) != (uVar7 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
        return;
      }
      uVar3 = *(ulong *)(unaff_x22 + 0x1b0);
joined_r0x00010025bba4:
      if (((ulong)puVar8 & 1) == 0) goto LAB_10025bba8;
LAB_10025bafc:
      *(byte *)(*(long *)(uVar3 + 0x38) + uVar18) = bVar21 & 1;
    }
    else {
      if ((uVar3 & 1) == 0) {
        FUN_10025e3f8();
        uVar3 = *(ulong *)(unaff_x22 + 0x1b0);
        goto joined_r0x00010025bba4;
      }
      uVar3 = *(ulong *)(unaff_x22 + 0x1b0);
      if (((ulong)puVar8 & 1) != 0) goto LAB_10025bafc;
LAB_10025bba8:
      uVar22 = *(undefined1 *)(unaff_x22 + 0x370);
      lVar17 = uVar3 + (uVar18 >> 6) * 8;
      *(ulong *)(lVar17 + 0x40) = *(ulong *)(lVar17 + 0x40) | 1L << (uVar18 & 0x3f);
      *(undefined1 *)(*(long *)(uVar3 + 0x30) + uVar18) = uVar22;
      *(byte *)(*(long *)(uVar3 + 0x38) + uVar18) = bVar21 & 1;
      if (SCARRY8(*(long *)(uVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x10025bee4);
        (*pcVar23)();
      }
      *(long *)(uVar3 + 0x10) = *(long *)(uVar3 + 0x10) + 1;
    }
    lVar17 = *(long *)(unaff_x22 + 0x2f8);
    lVar20 = *(long *)(unaff_x22 + 0x2f0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar18 = *puVar15;
    *puVar15 = uVar3;
    _swift_bridgeObjectRelease(uVar18);
    (*pcVar23)(unaff_x22 + 0x178,0);
    _swift_release(puVar2);
    _swift_release(puVar1);
    FUN_10005241c(uVar11,FUN_1002abb94);
    if (lVar17 + 1 == lVar20) {
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x2e8));
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
      puVar1 = &DAT_100c38778;
      _swift_getKeyPath();
      puVar2 = &DAT_100c387a0;
      _swift_getKeyPath(&DAT_100c387a0);
      puVar9 = puVar1;
      Combine::Published::_get_subscript(unaff_x22 + 0x1b8,uVar11,puVar1,puVar2);
      _swift_release(puVar2);
      _swift_release(puVar1);
      lVar17 = *(long *)(unaff_x22 + 0x1b8);
      if (*(long *)(lVar17 + 0x10) == 0) {
        uVar22 = 0;
      }
      else {
        uVar18 = (ulong)**(byte **)(unaff_x22 + 0x298);
        _swift_bridgeObjectRetain(lVar17);
        FUN_1002b0ec0();
        if (((ulong)puVar9 & 1) == 0) {
          uVar22 = 0;
        }
        else {
          uVar22 = *(undefined1 *)(*(long *)(lVar17 + 0x38) + uVar18);
        }
        _swift_bridgeObjectRelease(lVar17);
      }
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
      _swift_bridgeObjectRelease(lVar17);
      pPVar5 = (Published *)&DAT_100c387c0;
      _swift_getKeyPath(&DAT_100c387c0);
      puVar1 = &DAT_100c387e8;
      _swift_getKeyPath(&DAT_100c387e8);
      *(undefined1 *)(unaff_x22 + 0x36c) = uVar22;
      _swift_retain(uVar11);
      Combine::Published::_set_subscript(pPVar5,unaff_x22 + 0x36c,uVar11,pPVar5,puVar1);
      FUN_1000da768(unaff_x22 + 0x1c0);
      *(undefined8 *)(unaff_x22 + 0x300) = *(undefined8 *)(unaff_x22 + 0x1c0);
      plVar6 = (long *)0x110;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x308) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_10025ad78;
      FUN_100250444(plVar6,unaff_x22 + 0xd0);
      return;
    }
    uVar18 = *(long *)(unaff_x22 + 0x2f8) + 1;
    *(ulong *)(unaff_x22 + 0x2f8) = uVar18;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x2e8) + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x10025bee0);
      (*pcVar23)();
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x278);
    puVar12 = *(undefined1 **)(unaff_x22 + 0x270);
    lVar17 = *(long *)(unaff_x22 + 600);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x250);
    FUN_1000c495c(*(long *)(unaff_x22 + 0x2e8) +
                  ((ulong)*(byte *)(unaff_x22 + 0x368) + 0x20 &
                  ((ulong)*(byte *)(unaff_x22 + 0x368) ^ 0xffffffffffffffff)) +
                  *(long *)(unaff_x22 + 0x2e0) * uVar18,uVar13,FUN_1002abb94);
    FUN_1000523d8(uVar13,puVar12,FUN_1002abb94);
    *(undefined1 *)(unaff_x22 + 0x370) = *puVar12;
    puVar1 = &DAT_100fb8db8;
    puVar2 = &DAT_100c38680;
    FUN_100011090(puVar12 + *(int *)(lVar17 + 0x18),uVar11,&DAT_100fb8db8,&DAT_100c38680);
    lVar17 = 0;
    FUN_1002abbf0();
    (**(code **)(*(long *)(lVar17 + -8) + 0x30))(uVar11,1,lVar17);
    if ((int)uVar11 == 1) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x250);
      _swift_retain(*(undefined8 *)(unaff_x22 + 0x2a8));
      _swift_release();
LAB_10025bd18:
      FUN_100005808(uVar11,puVar1,puVar2);
    }
    else {
      PVar14.unknown = *(undefined **)(unaff_x22 + 0x250);
      puVar1 = PVar14.unknown;
      _swift_getEnumCaseMultiPayload(PVar14.unknown,lVar17);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x2a8);
      if ((int)puVar1 == 0) {
        lVar17 = *(long *)(unaff_x22 + 0x210);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x208);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x200);
        DVar4 = Foundation::DateComponents::typeMetadataAccessor();
        pcVar23 = *(code **)(*(long *)(DVar4.unknown + -8) + 8);
        _swift_retain(uVar11);
        (*pcVar23)(PVar14.unknown,DVar4.unknown);
        StoreKit::Product::_get_subscription(PVar14);
        (**(code **)(lVar17 + 0x30))(uVar13,1,uVar19);
        if ((int)uVar13 != 1) {
          (**(code **)(*(long *)(unaff_x22 + 0x210) + 0x20))
                    (*(undefined8 *)(unaff_x22 + 0x218),*(undefined8 *)(unaff_x22 + 0x200),
                     *(undefined8 *)(unaff_x22 + 0x208));
          _swift_task_switch(FUN_10025b8b8,0,0);
          return;
        }
        uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
        puVar1 = &DAT_100fb8658;
        puVar2 = &DAT_100c38220;
        goto LAB_10025bd18;
      }
      _swift_retain(uVar11);
      _swift_release();
      FUN_10005241c(PVar14.unknown,FUN_1002abbf0);
    }
    bVar21 = 0;
  } while( true );
}



/* Address: 0x10025bee4 | FUN_10025bee4 */

void FUN_10025bee4(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long unaff_x20;
  long lVar21;
  Published *pPVar42;
  Published *pPVar22;
  undefined8 uVar23;
  char *pcVar24;
  undefined8 uVar25;
  long *unaff_x22;
  undefined8 uVar26;
  char *pcVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  code *pcVar37;
  long lVar38;
  long lVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  
  lVar33 = *unaff_x22;
  lVar13 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar33 + 0x360));
  uVar26 = *(undefined8 *)(lVar33 + 0x358);
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar33 + 0x2a8));
    _swift_release(uVar26);
    bVar3 = *(long *)(param_1 + 0x10) == 0;
    if (bVar3) {
      FUN_100005808(*(undefined8 *)(lVar33 + 0x248),&DAT_100fb8618,&DAT_100c385c0);
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      uVar26 = *(undefined8 *)(lVar33 + 0x248);
      FUN_1000c495c(param_1 + ((ulong)*(byte *)(lVar33 + 0x368) + 0x20 &
                              ((ulong)*(byte *)(lVar33 + 0x368) ^ 0xffffffffffffffff)),
                    *(undefined8 *)(lVar33 + 0x240),FUN_1002abb94);
      _swift_bridgeObjectRelease(param_1);
      FUN_100005808(uVar26,&DAT_100fb8618,&DAT_100c385c0);
    }
    (**(code **)(lVar33 + 0x340))
              (*(undefined8 *)(lVar33 + 0x240),bVar3,1,*(undefined8 *)(lVar33 + 600));
    FUN_100004594(lVar33 + 0x150);
  }
  else {
    pcVar37 = *(code **)(lVar33 + 0x340);
    uVar19 = *(undefined8 *)(lVar33 + 0x2a8);
    uVar23 = *(undefined8 *)(lVar33 + 600);
    uVar30 = *(undefined8 *)(lVar33 + 0x248);
    uVar35 = *(undefined8 *)(lVar33 + 0x240);
    _swift_errorRelease();
    _swift_release(uVar19);
    _swift_release(uVar26);
    FUN_100005808(uVar30,&DAT_100fb8618,&DAT_100c385c0);
    FUN_100004594(lVar33 + 0x150);
    (*pcVar37)(uVar35,1,1,uVar23);
  }
  FUN_10025f638(*(undefined8 *)(lVar33 + 0x240),*(undefined8 *)(lVar33 + 0x248));
  lVar39 = *(long *)(lVar33 + 0x260);
  uVar23 = *(undefined8 *)(lVar33 + 600);
  uVar26 = *(undefined8 *)(lVar33 + 0x248);
  uVar19 = *(undefined8 *)(lVar33 + 0x238);
  lVar28 = *(long *)(lVar33 + 0x1f0);
  lVar21 = *(long *)(lVar33 + 0x1f8);
  (**(code **)(lVar33 + 0x340))(uVar19,1,1,uVar23);
  lVar38 = (long)*(int *)(lVar28 + 0x30);
  FUN_100011090(uVar26,lVar21,&DAT_100fb8618,&DAT_100c385c0);
  FUN_100011090(uVar19,lVar21 + lVar38,&DAT_100fb8618,&DAT_100c385c0);
  pcVar37 = *(code **)(lVar39 + 0x30);
  lVar28 = lVar21;
  (*pcVar37)(lVar21,1,uVar23);
  uVar26 = *(undefined8 *)(lVar33 + 600);
  if ((int)lVar28 == 1) {
    FUN_100005808(*(undefined8 *)(lVar33 + 0x238),&DAT_100fb8618,&DAT_100c385c0);
    lVar21 = lVar21 + lVar38;
    (*pcVar37)(lVar21,1,uVar26);
    if ((int)lVar21 == 1) {
      lVar21 = *(long *)(lVar33 + 0x1f8);
      FUN_100005808(lVar33 + 0xd0,&DAT_100fb85c0,&DAT_100c388a0);
      puVar10 = &DAT_100fb8618;
      puVar11 = &DAT_100c385c0;
LAB_10025c254:
      FUN_100005808(lVar21,puVar10,puVar11);
      uVar35 = 0;
      uVar30 = 0;
      uVar23 = 0;
      uVar26 = 0;
      lVar21 = 0;
      uVar19 = 0;
      goto LAB_10025c270;
    }
LAB_10025c18c:
    FUN_100005808(*(undefined8 *)(lVar33 + 0x1f8),&DAT_100fb8e70,&DAT_100c38770);
  }
  else {
    FUN_100011090(*(undefined8 *)(lVar33 + 0x1f8),*(undefined8 *)(lVar33 + 0x230),&DAT_100fb8618,
                  &DAT_100c385c0);
    lVar28 = lVar21 + lVar38;
    (*pcVar37)(lVar28,1,uVar26);
    if ((int)lVar28 == 1) {
      uVar26 = *(undefined8 *)(lVar33 + 0x230);
      FUN_100005808(*(undefined8 *)(lVar33 + 0x238),&DAT_100fb8618,&DAT_100c385c0);
      FUN_10005241c(uVar26,FUN_1002abb94);
      goto LAB_10025c18c;
    }
    pcVar27 = *(char **)(lVar33 + 0x268);
    uVar26 = *(undefined8 *)(lVar33 + 0x238);
    pcVar24 = *(char **)(lVar33 + 0x230);
    uVar19 = *(undefined8 *)(lVar33 + 0x1f8);
    FUN_1000523d8(lVar21 + lVar38,pcVar27,FUN_1002abb94);
    cVar6 = *pcVar24;
    cVar7 = *pcVar27;
    FUN_10005241c(pcVar27,FUN_1002abb94);
    FUN_100005808(uVar26,&DAT_100fb8618,&DAT_100c385c0);
    FUN_10005241c(pcVar24,FUN_1002abb94);
    FUN_100005808(uVar19,&DAT_100fb8618,&DAT_100c385c0);
    if (cVar6 == cVar7) {
      puVar10 = &DAT_100fb85c0;
      puVar11 = &DAT_100c388a0;
      lVar21 = lVar33 + 0xd0;
      goto LAB_10025c254;
    }
  }
  uVar19 = *(undefined8 *)(lVar33 + 0x338);
  lVar21 = *(long *)(lVar33 + 0x330);
  uVar26 = *(undefined8 *)(lVar33 + 0x328);
  uVar23 = *(undefined8 *)(lVar33 + 800);
  uVar30 = *(undefined8 *)(lVar33 + 0x318);
  uVar35 = *(undefined8 *)(lVar33 + 0x310);
LAB_10025c270:
  uVar18 = *(undefined8 *)(lVar33 + 0x248);
  lVar38 = *(long *)(lVar33 + 0x1c8);
  puVar1 = (undefined8 *)(lVar38 + _TtC22PasteLicensingAppStore16PaywallViewModel::offer);
  uVar16 = *puVar1;
  uVar25 = puVar1[1];
  uVar14 = puVar1[2];
  uVar31 = puVar1[3];
  uVar20 = puVar1[4];
  uVar36 = puVar1[5];
  *puVar1 = uVar35;
  puVar1[1] = uVar30;
  puVar1[2] = uVar23;
  puVar1[3] = uVar26;
  puVar1[4] = lVar21;
  puVar1[5] = uVar19;
  FUN_100255efc(uVar35,uVar30,uVar23,uVar26,lVar21,uVar19);
  FUN_10025f528(uVar16,uVar25,uVar14,uVar31,uVar20,uVar36);
  lVar28 = _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription;
  _swift_beginAccess(lVar38 + _TtC22PasteLicensingAppStore16PaywallViewModel::promoSubscription,
                     lVar33 + 0x198,0x21,0);
  FUN_10025f558(uVar18,lVar38 + lVar28);
  _swift_endAccess(lVar33 + 0x198);
  if (lVar21 == 0) {
    lVar28 = *(long *)(lVar33 + 0x1c8);
    FUN_100255efc(uVar35,uVar30,uVar23,uVar26,0,uVar19);
    uVar20 = uVar35;
    FUN_10025f528(uVar35,uVar30,uVar23,uVar26,0,uVar19);
    puVar2 = (undefined8 *)
             (lVar28 + _TtC22PasteLicensingAppStore16PaywallViewModel::_paywallVariant);
    uVar16 = *puVar2;
    uVar14 = puVar2[1];
    uVar31 = puVar2[2];
    FUN_10025f5b8();
    uVar25 = uVar20;
    FUN_10025f5f8();
    _swift_retain(uVar16);
    _swift_retain(uVar14);
    _swift_retain(uVar31);
    FUN_1002d0c78(lVar33 + 0x36f,uVar16,uVar14,uVar31,&DAT_100ec4358,uVar20,uVar25);
    _swift_release(uVar16);
    _swift_release(uVar14);
    _swift_release(uVar31);
                    /* WARNING: Load size is inaccurate */
    pPVar42._0_1_ = *(Published **)(lVar33 + 0x36f);
  }
  else {
    *(undefined8 *)(lVar33 + 0x10) = uVar35;
    *(undefined8 *)(lVar33 + 0x18) = uVar30;
    *(undefined8 *)(lVar33 + 0x20) = uVar23;
    *(undefined8 *)(lVar33 + 0x28) = uVar26;
    *(long *)(lVar33 + 0x30) = lVar21;
    *(undefined8 *)(lVar33 + 0x38) = uVar19;
    *(undefined8 *)(lVar33 + 0x48) = 0;
    *(undefined8 *)(lVar33 + 0x40) = 0;
    *(undefined8 *)(lVar33 + 0x58) = 0;
    *(undefined8 *)(lVar33 + 0x50) = 0;
    *(undefined8 *)(lVar33 + 0x68) = 0;
    *(undefined8 *)(lVar33 + 0x60) = 0;
    FUN_100255efc(uVar35,uVar30,uVar23,uVar26,lVar21,uVar19);
    FUN_100005808(lVar33 + 0x10,&DAT_100fb8eb0,&DAT_100c38808);
    pPVar42._0_1_ = (Published *)0x4;
  }
  pcVar37 = *(code **)(lVar33 + 0x340);
  uVar25 = *(undefined8 *)(lVar33 + 0x298);
  uVar36 = *(undefined8 *)(lVar33 + 600);
  uVar31 = *(undefined8 *)(lVar33 + 0x228);
  uVar20 = *(undefined8 *)(lVar33 + 0x220);
  uVar16 = *(undefined8 *)(lVar33 + 0x1e0);
  pPVar22 = *(Published **)(lVar33 + 0x1e8);
  uVar14 = *(undefined8 *)(lVar33 + 0x1d8);
  lVar38 = *(long *)(lVar33 + 0x1c8);
  puVar10 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar11 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
                    /* WARNING: Store size is inaccurate */
  *(Published **)(lVar33 + 0x36d) = pPVar42._0_1_;
  _swift_retain(lVar38);
  Combine::Published::_set_subscript(pPVar42._0_1_,lVar33 + 0x36d,lVar38,puVar10,puVar11);
  FUN_1000c495c(uVar25,uVar31,FUN_1002abb94);
  (*pcVar37)(uVar31,0,1,uVar36);
  _swift_getKeyPath(&DAT_100c38858);
  _swift_getKeyPath(&DAT_100c38880);
  FUN_100011090(uVar31,uVar20,&DAT_100fb8618,&DAT_100c385c0);
  _swift_retain(lVar38);
  Combine::Published::_set_subscript();
  FUN_100005808(uVar31,&DAT_100fb8618,&DAT_100c385c0);
  _swift_storeEnumTagMultiPayload(pPVar22,uVar14,3);
  puVar10 = &DAT_100c38718;
  _swift_getKeyPath(&DAT_100c38718);
  puVar11 = &DAT_100c38740;
  _swift_getKeyPath(&DAT_100c38740);
  FUN_1000c495c(pPVar22,uVar16,FUN_10025cfc4);
  _swift_retain(lVar38);
  Combine::Published::_set_subscript(pPVar22,uVar16,lVar38,puVar10,puVar11);
  FUN_10005241c(pPVar22,FUN_10025cfc4);
  FUN_1000da768(lVar33 + 0x128);
  uVar16 = *(undefined8 *)(lVar33 + 0x140);
  lVar28 = *(long *)(lVar33 + 0x148);
  FUN_100004640();
  bVar9 = *(byte *)(lVar38 + _TtC22PasteLicensingAppStore16PaywallViewModel::placement);
  puVar10 = &DAT_100c38810;
  _swift_getKeyPath(&DAT_100c38810);
  puVar11 = &DAT_100c38838;
  _swift_getKeyPath(&DAT_100c38838);
  Combine::Published::_get_subscript(lVar33 + 0x36e,lVar38,puVar10,puVar11);
  _swift_release(puVar11);
  _swift_release(puVar10);
  bVar8 = *(byte *)(lVar33 + 0x36e);
  puVar4 = (undefined1 *)0x8000000100d9f490;
  uVar14 = 0xd000000000000011;
  if (bVar8 != 4) {
    puVar4 = (undefined1 *)0xeb00000000656369;
    uVar14 = 0x6f684369746c756d;
  }
  puVar5 = (undefined1 *)0xec0000006563696f;
  uVar20 = 0x6843656c676e6973;
  if (bVar8 != 3) {
    puVar5 = puVar4;
    uVar20 = uVar14;
  }
  uVar14 = 0x6972466b63616c62;
  if (bVar8 != 1) {
    uVar14 = 0x6e6f4d7265627963;
  }
  uVar25 = 0x746c7561666564;
  if (bVar8 != 0) {
    uVar25 = uVar14;
  }
  puVar4 = &DAT_e700000000000000;
  if (bVar8 != 0) {
    puVar4 = (undefined1 *)0xeb00000000796164;
  }
  if (bVar8 < 3) {
    puVar5 = puVar4;
    uVar20 = uVar25;
  }
  uVar14 = *puVar1;
  uVar31 = puVar1[1];
  uVar25 = puVar1[2];
  uVar36 = puVar1[3];
  lVar38 = puVar1[4];
  uVar18 = puVar1[5];
  if (lVar38 == 0) {
    FUN_100255efc();
    FUN_10025f528(uVar14,uVar31,uVar25,uVar36,0,uVar18);
    uVar14 = 3;
  }
  else {
    *(undefined8 *)(lVar33 + 0x70) = uVar14;
    *(undefined8 *)(lVar33 + 0x78) = uVar31;
    *(undefined8 *)(lVar33 + 0x80) = uVar25;
    *(undefined8 *)(lVar33 + 0x88) = uVar36;
    *(long *)(lVar33 + 0x90) = lVar38;
    *(undefined8 *)(lVar33 + 0x98) = uVar18;
    *(undefined8 *)(lVar33 + 0xa8) = 0;
    *(undefined8 *)(lVar33 + 0xa0) = 0;
    *(undefined8 *)(lVar33 + 0xb8) = 0;
    *(undefined8 *)(lVar33 + 0xb0) = 0;
    *(undefined8 *)(lVar33 + 200) = 0;
    *(undefined8 *)(lVar33 + 0xc0) = 0;
    FUN_100255efc();
    FUN_100005808(lVar33 + 0x70,&DAT_100fb8eb0,&DAT_100c38808);
    uVar14 = 1;
  }
  uVar25 = *puVar1;
  uVar36 = puVar1[1];
  uVar31 = puVar1[2];
  uVar18 = puVar1[3];
  lVar38 = puVar1[4];
  uVar29 = puVar1[5];
  if (lVar38 == 0) {
    uVar32 = 0;
    uVar34 = 0;
  }
  else {
    _swift_bridgeObjectRetain(uVar31);
    uVar32 = uVar36;
    uVar34 = uVar31;
  }
  uVar17 = *(undefined8 *)(lVar33 + 0x298);
  uVar15 = *(undefined8 *)(lVar33 + 0x248);
  FUN_100255efc(uVar25,uVar36,uVar31,uVar18,lVar38,uVar29);
  FUN_10025f528(uVar25,uVar36,uVar31,uVar18,lVar38,uVar29);
  uVar25 = 0;
  uVar12 = (ulong)bVar9;
  FUN_100191980(0,uVar12,uVar20,puVar5,uVar14,uVar32,uVar34);
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRelease(uVar34);
  (**(code **)(lVar28 + 0x18))(uVar25,uVar12,uVar20,uVar16);
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar20);
  FUN_10025f528(uVar35,uVar30,uVar23,uVar26,lVar21,uVar19);
  FUN_100005808(uVar15,&DAT_100fb8618,&DAT_100c385c0);
  FUN_10005241c(uVar17,FUN_1002abb94);
  FUN_100004594(lVar33 + 0x128);
  uVar17 = *(undefined8 *)(lVar33 + 0x290);
  uVar40 = *(undefined8 *)(lVar33 + 0x288);
  uVar41 = *(undefined8 *)(lVar33 + 0x280);
  uVar36 = *(undefined8 *)(lVar33 + 0x278);
  uVar29 = *(undefined8 *)(lVar33 + 0x270);
  uVar31 = *(undefined8 *)(lVar33 + 0x268);
  uVar18 = *(undefined8 *)(lVar33 + 0x250);
  uVar32 = *(undefined8 *)(lVar33 + 0x248);
  uVar15 = *(undefined8 *)(lVar33 + 0x240);
  uVar14 = *(undefined8 *)(lVar33 + 0x238);
  uVar35 = *(undefined8 *)(lVar33 + 0x230);
  uVar20 = *(undefined8 *)(lVar33 + 0x228);
  uVar16 = *(undefined8 *)(lVar33 + 0x220);
  uVar25 = *(undefined8 *)(lVar33 + 0x218);
  uVar26 = *(undefined8 *)(lVar33 + 0x1f8);
  uVar23 = *(undefined8 *)(lVar33 + 0x200);
  uVar19 = *(undefined8 *)(lVar33 + 0x1e0);
  uVar30 = *(undefined8 *)(lVar33 + 0x1e8);
  uVar34 = *(undefined8 *)(lVar33 + 0x1d0);
  _swift_task_dealloc(*(undefined8 *)(lVar33 + 0x298));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar40);
  _swift_task_dealloc(uVar41);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar35);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar34);
                    /* WARNING: Could not recover jumptable at 0x00010025c9b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 8))();
  return;
}



/* Address: 0x10025c9bc | FUN_10025c9bc */

void FUN_10025c9bc(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100259e64();
    _swift_release(param_1);
    return;
  }
  return;
}



/* Address: 0x10025c9f8 | FUN_10025c9f8 */

void FUN_10025c9f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x12;
  Published *pPVar6;
  long lVar7;
  
  lVar3 = 0;
  FUN_10025cfc4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pPVar6 = (Published *)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)pPVar6 - extraout_x12;
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_storeEnumTagMultiPayload(lVar7,lVar3,3);
    puVar4 = &DAT_100c38718;
    _swift_getKeyPath(&DAT_100c38718);
    puVar5 = &DAT_100c38740;
    _swift_getKeyPath(&DAT_100c38740);
    FUN_1000c495c(lVar7,pPVar6,FUN_10025cfc4);
    _swift_retain(param_1);
    Combine::Published::_set_subscript(pPVar6,pPVar6,param_1,puVar4,puVar5);
    FUN_10005241c(lVar7,FUN_10025cfc4);
    lVar3 = param_1 + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
    uVar1 = *(undefined8 *)(lVar3 + 0x18);
    uVar2 = *(undefined8 *)(lVar3 + 0x20);
    FUN_100004640(lVar3,uVar1);
    FUN_1001ad344(uVar1,uVar2,lVar3);
    _swift_release(param_1);
  }
  return;
}


