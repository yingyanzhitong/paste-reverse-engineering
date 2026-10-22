/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007b6014 | FUN_1007b6014 */

void FUN_1007b6014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x20;
  
  FUN_1007b8ba0(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  *(undefined8 *)(unaff_x20 + 0x40) = param_3;
  *(undefined1 *)(unaff_x20 + 0x48) = param_4;
  return;
}



/* Address: 0x1007b6068 | FUN_1007b6068 */

void FUN_1007b6068(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1007b6070 | FUN_1007b6070 */

void FUN_1007b6070(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  return;
}



/* Address: 0x1007b6098 | FUN_1007b6098 */

void FUN_1007b6098(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x1007b60a0 | FUN_1007b60a0 */

void FUN_1007b60a0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  return;
}



/* Address: 0x1007b60c8 | FUN_1007b60c8 */

void FUN_1007b60c8(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Address: 0x1007b60d0 | FUN_1007b60d0 */

void FUN_1007b60d0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  return;
}



/* Address: 0x1007b60f8 | FUN_1007b60f8 */

undefined1  [16] FUN_1007b60f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1007b6108 | FUN_1007b6108 */

void FUN_1007b6108(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x70) = param_1;
  return;
}



/* Address: 0x1007b6110 | FUN_1007b6110 */

undefined8 FUN_1007b6110(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x78);
}



/* Address: 0x1007b6118 | FUN_1007b6118 */

void FUN_1007b6118(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  return;
}



/* Address: 0x1007b6120 | FUN_1007b6120 */

undefined8 FUN_1007b6120(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x80);
}



/* Address: 0x1007b6128 | FUN_1007b6128 */

void FUN_1007b6128(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x80) = param_1;
  return;
}



/* Address: 0x1007b6130 | FUN_1007b6130 */

undefined8 FUN_1007b6130(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x88);
}



/* Address: 0x1007b6138 | FUN_1007b6138 */

void FUN_1007b6138(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x88) = param_1;
  return;
}



/* Address: 0x1007b6140 | FUN_1007b6140 */

undefined1  [16] FUN_1007b6140(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char *pcVar5;
  undefined8 uVar6;
  void *pvVar7;
  void *pvVar8;
  undefined *puVar9;
  void *unaff_x20;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
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
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x8f,param_2);
  local_98 = local_88;
  uStack_90 = uStack_80;
  SVar17.bridgeObject = (void *)0xed00003a65727573;
  SVar17.str = (char *)0x736572706b636162;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar17,SVar24);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  pvVar8 = *(void **)(param_1 + 0x20);
  pcVar5 = (char *)0x0;
  FUN_1007b8a94(0,uVar2,*(undefined8 *)(param_1 + 0x18));
  pvVar7 = unaff_x20;
  pcVar10 = pcVar5;
  (**(code **)(*(long *)(pcVar5 + -8) + 0x20))(&local_88);
  FUN_1007abc28();
  SVar13.bridgeObject = pvVar7;
  SVar13.str = pcVar5;
  SVar25.bridgeObject = pvVar8;
  SVar25.str = pcVar10;
  Swift::String::append(SVar13,SVar25);
  _swift_bridgeObjectRelease(pvVar7);
  SVar14.bridgeObject = (void *)0x8000000100db1800;
  SVar14.str = (char *)0xd000000000000015;
  SVar26.bridgeObject = pvVar8;
  SVar26.str = pcVar10;
  Swift::String::append(SVar14,SVar26);
  bVar4 = (*(byte *)((long)unaff_x20 + 0x28) & 1) == 0;
  pcVar11 = (char *)0x65757274;
  pcVar12 = (char *)0x65736c6166;
  pcVar5 = pcVar11;
  if (bVar4) {
    pcVar5 = pcVar12;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4) {
    puVar1 = &DAT_e500000000000000;
  }
  SVar15.bridgeObject = puVar1;
  SVar15.str = pcVar5;
  SVar27.bridgeObject = pvVar8;
  SVar27.str = pcVar10;
  Swift::String::append(SVar15,SVar27);
  _swift_bridgeObjectRelease(puVar1);
  SVar16.bridgeObject = &DAT_e800000000000000;
  SVar16.str = (char *)0x3a72656666756220;
  SVar28.bridgeObject = pvVar8;
  SVar28.str = pcVar10;
  Swift::String::append(SVar16,SVar28);
  pcVar10 = *(char **)((long)unaff_x20 + 0x50);
  uVar6 = 0;
  FUN_1007abb04(0,uVar2);
  puVar9 = &DAT_100ef5140;
  FUN_1006035b0(local_a8,FUN_1006035a4,0,pcVar10,&DAT_100ef5140,uVar6,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  SVar17 = Swift::CustomStringConvertible::get_description();
  SVar29.bridgeObject = puVar9;
  SVar29.str = pcVar10;
  Swift::String::append(SVar17,SVar29);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar18.bridgeObject = (void *)0x8000000100db1820;
  SVar18.str = (char *)0xd000000000000016;
  SVar30.bridgeObject = puVar9;
  SVar30.str = pcVar10;
  Swift::String::append(SVar18,SVar30);
  bVar4 = *(long *)((long)unaff_x20 + 0x58) != 0;
  pcVar5 = pcVar11;
  if (bVar4) {
    pcVar5 = pcVar12;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4) {
    puVar1 = &DAT_e500000000000000;
  }
  SVar19.bridgeObject = puVar1;
  SVar19.str = pcVar5;
  SVar31.bridgeObject = puVar9;
  SVar31.str = pcVar10;
  Swift::String::append(SVar19,SVar31);
  _swift_bridgeObjectRelease(puVar1);
  SVar20.bridgeObject = (void *)0x8000000100db1840;
  SVar20.str = (char *)0xd000000000000017;
  SVar32.bridgeObject = puVar9;
  SVar32.str = pcVar10;
  Swift::String::append(SVar20,SVar32);
  local_a8[0] = *(undefined8 *)(*(long *)((long)unaff_x20 + 0x60) + 0x18);
  SVar17 = Swift::CustomStringConvertible::get_description();
  SVar33.bridgeObject = puVar9;
  SVar33.str = pcVar10;
  Swift::String::append(SVar17,SVar33);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar21.bridgeObject = (void *)0x8000000100db1860;
  SVar21.str = (char *)0xd000000000000014;
  SVar34.bridgeObject = puVar9;
  SVar34.str = pcVar10;
  Swift::String::append(SVar21,SVar34);
  local_a8[0] = *(undefined8 *)(*(long *)((long)unaff_x20 + 0x68) + 0x18);
  SVar17 = Swift::CustomStringConvertible::get_description();
  SVar35.bridgeObject = puVar9;
  SVar35.str = pcVar10;
  Swift::String::append(SVar17,SVar35);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar22.bridgeObject = (void *)0x8000000100db1880;
  SVar22.str = (char *)0xd000000000000016;
  SVar36.bridgeObject = puVar9;
  SVar36.str = pcVar10;
  Swift::String::append(SVar22,SVar36);
  bVar4 = (*(byte *)((long)unaff_x20 + 0x70) & 1) == 0;
  if (bVar4) {
    pcVar11 = pcVar12;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4) {
    puVar1 = &DAT_e500000000000000;
  }
  SVar23.bridgeObject = puVar1;
  SVar23.str = pcVar11;
  SVar37.bridgeObject = puVar9;
  SVar37.str = pcVar10;
  Swift::String::append(SVar23,SVar37);
  _swift_bridgeObjectRelease(puVar1);
  auVar3._8_8_ = uStack_90;
  auVar3._0_8_ = local_98;
  return auVar3;
}



/* Address: 0x1007b6440 | FUN_1007b6440 */

void FUN_1007b6440(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Address: 0x1007b6448 | FUN_1007b6448 */

void FUN_1007b6448(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x34);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007b648c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1007b6490 | FUN_1007b6490 */

void FUN_1007b6490(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  long lVar4;
  long lVar3;
  
  iVar1 = *(int *)(param_2 + 0x34);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar2.value);
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 8))(unaff_x20 + iVar1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001007b64f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x20))(unaff_x20 + iVar1,param_1,lVar3);
  return;
}



/* Address: 0x1007b64f4 | FUN_1007b64f4 */

undefined8 FUN_1007b64f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x38));
  uVar2 = *puVar1;
  FUN_1007b8bdc(uVar2,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  return uVar2;
}



/* Address: 0x1007b654c | FUN_1007b654c */

void FUN_1007b654c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_5 + 0x38));
  FUN_1007b8ba0(*puVar1,puVar1[1],puVar1[2],*(undefined1 *)(puVar1 + 3));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  *(undefined1 *)(puVar1 + 3) = param_4;
  return;
}



/* Address: 0x1007b65a8 | FUN_1007b65a8 */

undefined8 FUN_1007b65a8(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x3c));
}



/* Address: 0x1007b65b4 | FUN_1007b65b4 */

void FUN_1007b65b4(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x3c)) = param_1;
  return;
}



/* Address: 0x1007b65c0 | FUN_1007b65c0 */

undefined1  [16] FUN_1007b65c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x3c);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1007b65d4 | FUN_1007b65d4 */

undefined1  [16] FUN_1007b65d4(long param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  undefined *puVar8;
  char *unaff_x20;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  long lVar4;
  
  pcVar10 = *(char **)(param_1 + 0x18);
  _Var7.unknown = pcVar10;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar3.value);
  lVar12 = *(long *)(lVar4 + -8);
  puVar11 = auStack_80 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = 0;
  local_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2b,_Var7);
  _swift_bridgeObjectRelease(local_68);
  local_70 = 0xd000000000000014;
  local_68 = 0x8000000100db18a0;
  pcVar9 = (char *)0x65757274;
  if (*unaff_x20 == '\0') {
    pcVar9 = (char *)0x65736c6166;
  }
  puVar6 = &DAT_e400000000000000;
  if (*unaff_x20 == '\0') {
    puVar6 = &DAT_e500000000000000;
  }
  SVar14.bridgeObject = puVar6;
  SVar14.str = pcVar9;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar14,SVar17);
  _swift_bridgeObjectRelease(puVar6);
  SVar13.bridgeObject = &DAT_e800000000000000;
  SVar13.str = (char *)0x3a72656666756220;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar13,SVar18);
  pcVar9 = *(char **)(unaff_x20 + 8);
  uVar5 = 0;
  FUN_1007abb04(0,*(undefined8 *)(param_1 + 0x10));
  puVar8 = &DAT_100ef5140;
  FUN_1006035b0(auStack_80,FUN_1006035a4,0,pcVar9,&DAT_100ef5140,uVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  SVar14 = Swift::CustomStringConvertible::get_description();
  SVar19.bridgeObject = puVar8;
  SVar19.str = pcVar9;
  Swift::String::append(SVar14,SVar19);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  SVar15.bridgeObject = (void *)0xe90000000000003a;
  SVar15.str = (char *)0x6572756c69616620;
  SVar20.bridgeObject = puVar8;
  SVar20.str = pcVar9;
  Swift::String::append(SVar15,SVar20);
  (**(code **)(lVar12 + 0x10))(puVar11,unaff_x20 + *(int *)(param_1 + 0x34),lVar4);
  puVar6 = puVar11;
  (**(code **)(*(long *)(pcVar10 + -8) + 0x30))(puVar11,1);
  (**(code **)(lVar12 + 8))(puVar11,lVar4);
  bVar2 = (int)puVar6 != 1;
  pcVar9 = (char *)0x65757274;
  if (bVar2) {
    pcVar9 = (char *)0x65736c6166;
  }
  puVar11 = &DAT_e400000000000000;
  if (bVar2) {
    puVar11 = &DAT_e500000000000000;
  }
  SVar16.bridgeObject = puVar11;
  SVar16.str = pcVar9;
  SVar21.bridgeObject = puVar8;
  SVar21.str = pcVar10;
  Swift::String::append(SVar16,SVar21);
  _swift_bridgeObjectRelease(puVar11);
  auVar1._8_8_ = local_68;
  auVar1._0_8_ = local_70;
  return auVar1;
}



/* Address: 0x1007b67f8 | FUN_1007b67f8 */

uint FUN_1007b67f8(uint param_1)

{
  return param_1 >> 8 & 1;
}



/* Address: 0x1007b6800 | FUN_1007b6800 */

uint FUN_1007b6800(uint param_1)

{
  return param_1 >> 0x10 & 1;
}



/* Address: 0x1007b6808 | FUN_1007b6808 */

undefined1  [16] FUN_1007b6808(ulong param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  Swift::_StringGuts::grow(0x28,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  bVar4 = (param_1 & 1) == 0;
  pcVar2 = (char *)0x65757274;
  if (bVar4) {
    pcVar2 = (char *)0x65736c6166;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4) {
    puVar1 = &DAT_e500000000000000;
  }
  SVar5.bridgeObject = puVar1;
  SVar5.str = pcVar2;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar5,SVar8);
  _swift_bridgeObjectRelease(puVar1);
  SVar6.bridgeObject = (void *)0x8000000100db18c0;
  SVar6.str = (char *)0xd000000000000010;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar6,SVar9);
  bVar4 = (param_1 & 0x10000) != 0;
  pcVar2 = (char *)0x65736c6166;
  if (bVar4) {
    pcVar2 = (char *)0x65757274;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4) {
    puVar1 = &DAT_e400000000000000;
  }
  SVar7.bridgeObject = puVar1;
  SVar7.str = pcVar2;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar7,SVar10);
  _swift_bridgeObjectRelease(puVar1);
  auVar3._8_8_ = 0x8000000100db18a0;
  auVar3._0_8_ = 0xd000000000000014;
  return auVar3;
}



/* Address: 0x1007b6900 | FUN_1007b6900 */

undefined1  [16] FUN_1007b6900(undefined *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char *pcVar3;
  _StringGuts _Var4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  byte *unaff_x20;
  String SVar9;
  String SVar10;
  undefined1 auVar11 [16];
  String SVar12;
  String SVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  pbVar1 = unaff_x20;
  _Var4.unknown = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((int)pbVar1 == 0) {
    pvVar5 = *(void **)(param_1 + 0x10);
    pcVar2 = *(char **)(param_1 + 0x18);
    pvVar6 = *(void **)(param_1 + 0x20);
    pcVar3 = (char *)0x0;
    FUN_1007b8bf4();
    FUN_1007b6140();
    SVar9.bridgeObject = pvVar5;
    SVar9.str = pcVar3;
    SVar12.bridgeObject = pvVar6;
    SVar12.str = pcVar2;
    Swift::String::append(SVar9,SVar12);
    _swift_bridgeObjectRelease(pvVar5);
    local_c0 = 0x696c656e6e616863;
    uStack_b8 = 0xeb0000000020676e;
  }
  else {
    if ((int)pbVar1 == 1) {
      Swift::_StringGuts::grow(0x11,_Var4);
      _swift_bridgeObjectRelease(0xe000000000000000);
      local_c0 = 0x6946656372756f73;
      uStack_b8 = 0xef2064656873696e;
                    /* WARNING: Load size is inaccurate */
      _Var4.unknown = param_1[0x10];
      param_3 = *(char **)(param_1 + 0x18);
      param_4 = *(void **)(param_1 + 0x20);
      pcVar2 = (char *)0x0;
      FUN_1007b8aac();
      FUN_1007b65d4();
    }
    else {
      local_c0 = 0x64656873696e6966;
      uStack_b8 = 0xe900000000000020;
      uVar7 = 0x10000;
      if (unaff_x20[2] == 0) {
        uVar7 = 0;
      }
      uVar8 = 0x100;
      if (unaff_x20[1] == 0) {
        uVar8 = 0;
      }
      pcVar2 = (char *)(ulong)(uVar8 | *unaff_x20 | uVar7);
      FUN_1007b6808();
    }
    SVar10.bridgeObject = _Var4.unknown;
    SVar10.str = pcVar2;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar10,SVar13);
    _swift_bridgeObjectRelease(_Var4.unknown);
  }
  auVar11._8_8_ = uStack_b8;
  auVar11._0_8_ = local_c0;
  return auVar11;
}



/* Address: 0x1007b6a84 | FUN_1007b6a84 */

void FUN_1007b6a84(void)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007b6abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x28))();
  return;
}



/* Address: 0x1007b6ac0 | _os_unfair_lock_unlock */

void _os_unfair_lock_unlock(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_100ea8820)();
  return;
}



/* Address: 0x1007b6ac4 | FUN_1007b6ac4 */

void FUN_1007b6ac4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100fe57d0;
  FUN_1000f7830(&DAT_100fe57d0,&DAT_100c786f8);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1007b6cfc(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1007b6b60 | FUN_1007b6b60 */

void FUN_1007b6b60(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100fe57c8;
  FUN_1000f7830(&DAT_100fe57c8,&DAT_100c786f0);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1007b6e08(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1007b6bfc | FUN_1007b6bfc */

void FUN_1007b6bfc(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *param_4;
  lVar4 = param_4[2] + param_2;
  lVar9 = 0;
  if (lVar7 <= lVar4) {
    lVar9 = lVar7;
  }
  lVar8 = param_4[2] + param_3;
  lVar1 = 0;
  if (lVar7 <= lVar8) {
    lVar1 = lVar7;
  }
  lVar3 = param_3 - param_2;
  if (!SBORROW8(param_3,param_2)) {
    lVar6 = 0;
    lVar4 = lVar4 - lVar9;
    uVar5 = 1;
    if (lVar3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar8 = lVar8 - lVar1;
      lVar9 = 0;
      if (lVar8 <= lVar4) {
        lVar3 = lVar7 - lVar4;
        if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b6c7c);
          (*pcVar2)();
        }
        uVar5 = 0;
        lVar6 = param_5;
        lVar9 = lVar8;
      }
    }
    *param_1 = param_5 + lVar4 * 8;
    param_1[1] = lVar3;
    param_1[2] = lVar6;
    param_1[3] = lVar9;
    *(undefined1 *)(param_1 + 4) = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b6c78);
  (*pcVar2)();
}



/* Address: 0x1007b6c7c | FUN_1007b6c7c */

void FUN_1007b6c7c(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *param_4;
  lVar4 = param_4[2] + param_2;
  lVar9 = 0;
  if (lVar7 <= lVar4) {
    lVar9 = lVar7;
  }
  lVar8 = param_4[2] + param_3;
  lVar1 = 0;
  if (lVar7 <= lVar8) {
    lVar1 = lVar7;
  }
  lVar3 = param_3 - param_2;
  if (!SBORROW8(param_3,param_2)) {
    lVar6 = 0;
    lVar4 = lVar4 - lVar9;
    uVar5 = 1;
    if (lVar3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar8 = lVar8 - lVar1;
      lVar9 = 0;
      if (lVar8 <= lVar4) {
        lVar3 = lVar7 - lVar4;
        if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b6cfc);
          (*pcVar2)();
        }
        uVar5 = 0;
        lVar6 = param_5;
        lVar9 = lVar8;
      }
    }
    *param_1 = param_5 + lVar4 * 0x20;
    param_1[1] = lVar3;
    param_1[2] = lVar6;
    param_1[3] = lVar9;
    *(undefined1 *)(param_1 + 4) = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b6cf8);
  (*pcVar2)();
}



/* Address: 0x1007b6cfc | FUN_1007b6cfc */

void FUN_1007b6cfc(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = param_3[2];
  lVar1 = *param_3 - lVar6;
  if (SBORROW8(*param_3,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6dfc);
    (*pcVar4)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar7 = lVar8 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6e00);
      (*pcVar4)();
    }
  }
  else {
    lVar7 = 0;
    lVar2 = lVar8;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6e04);
      (*pcVar4)();
    }
    puVar5 = &DAT_100fe57c0;
    FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
    _swift_arrayInitWithCopy(param_2 + lVar6 * 0x20,param_4 + lVar6 * 0x20,lVar2,puVar5);
  }
  if (lVar1 < lVar8 && lVar7 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6e08);
      (*pcVar4)();
    }
    puVar5 = &DAT_100fe57c0;
    FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
    _swift_arrayInitWithCopy(param_2,lVar3,lVar7,puVar5);
  }
  return;
}



/* Address: 0x1007b6e08 | FUN_1007b6e08 */

void FUN_1007b6e08(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6ed0);
    (*pcVar4)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar2 = lVar1;
    pvVar3 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6ed4);
      (*pcVar4)();
    }
  }
  else {
    lVar6 = 0;
    lVar2 = lVar7;
    pvVar3 = (void *)0x0;
  }
  if (0 < lVar2) {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6ed8);
      (*pcVar4)();
    }
    _memcpy((void *)((long)param_2 + lVar5 * 8),(void *)((long)param_4 + lVar5 * 8),lVar2 << 3);
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b6edc);
      (*pcVar4)();
    }
    _memcpy(param_2,pvVar3,lVar6 << 3);
    return;
  }
  return;
}



/* Address: 0x1007b6edc | FUN_1007b6edc */

void FUN_1007b6edc(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *unaff_x20;
  plVar6 = (long *)(lVar5 + 0x10);
  lVar7 = *plVar6;
  if (lVar7 < param_2) {
    puVar2 = &DAT_100fe57c0;
    FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
    FUN_1006841c8(param_2,param_3 & 1,lVar5,puVar2);
    if ((param_1 & 1) == 0) {
      puVar2 = &DAT_100fe57d0;
      FUN_1000f7830(&DAT_100fe57d0,&DAT_100c786f8);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -9;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      lVar7 = *(long *)(lVar5 + 0x18);
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 5;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1007b7548(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
      }
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x18);
      puVar2 = &DAT_100fe57d0;
      FUN_1000f7830(&DAT_100fe57d0,&DAT_100c786f8);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -9;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 5;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1007b7338(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
  }
  else {
    puVar2 = &DAT_100fe57d0;
    FUN_1000f7830(&DAT_100fe57d0,&DAT_100c786f8);
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x18);
    *(long *)(puVar2 + 0x10) = lVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x18) = uVar8;
    if (0 < lVar4) {
      FUN_1007b6cfc(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
    }
  }
  _swift_release(lVar5);
  *unaff_x20 = (long)puVar2;
  return;
}



/* Address: 0x1007b70a0 | FUN_1007b70a0 */

void FUN_1007b70a0(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *unaff_x20;
  plVar6 = (long *)(lVar5 + 0x10);
  lVar7 = *plVar6;
  if (lVar7 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar5,PTR___type_metadata_for_Swift_UInt64_100eade90);
    if ((param_1 & 1) == 0) {
      puVar2 = &DAT_100fe57c8;
      FUN_1000f7830(&DAT_100fe57c8,&DAT_100c786f0);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -0x21;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      lVar7 = *(long *)(lVar5 + 0x18);
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 3;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1007b7650(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
      }
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x18);
      puVar2 = &DAT_100fe57c8;
      FUN_1000f7830(&DAT_100fe57c8,&DAT_100c786f0);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -0x21;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 3;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1007b7440(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
  }
  else {
    puVar2 = &DAT_100fe57c8;
    FUN_1000f7830(&DAT_100fe57c8,&DAT_100c786f0);
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x18);
    *(long *)(puVar2 + 0x10) = lVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x18) = uVar8;
    if (0 < lVar4) {
      FUN_1007b6e08(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
    }
  }
  _swift_release(lVar5);
  *unaff_x20 = (long)puVar2;
  return;
}



/* Address: 0x1007b7248 | FUN_1007b7248 */

void FUN_1007b7248(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  lVar4 = param_1[2] + lVar5;
  if (SCARRY8(param_1[2],lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b72d4);
    (*pcVar2)();
  }
  if (lVar5 < 0) {
    if ((lVar4 < 0) && (bVar3 = SCARRY8(lVar4,*param_1), lVar4 = lVar4 + *param_1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b72dc);
      (*pcVar2)();
    }
  }
  else {
    lVar5 = *param_1;
    bVar3 = SBORROW8(lVar4,lVar5);
    if ((lVar5 <= lVar4) && (lVar4 = lVar4 - lVar5, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7280);
      (*pcVar2)();
    }
  }
  puVar1 = (undefined8 *)(param_2 + lVar4 * 0x20);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  *(char *)(puVar1 + 3) = (char)param_6;
  if (!SCARRY8(param_1[1],1)) {
    param_1[1] = param_1[1] + 1;
    FUN_1007b8e0c(param_4,param_5,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b72d8);
  (*pcVar2)();
}



/* Address: 0x1007b72dc | FUN_1007b72dc */

void FUN_1007b72dc(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  lVar3 = param_1[2] + lVar4;
  if (SCARRY8(param_1[2],lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b7330);
    (*pcVar1)();
  }
  if (lVar4 < 0) {
    if ((lVar3 < 0) && (bVar2 = SCARRY8(lVar3,*param_1), lVar3 = lVar3 + *param_1, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b7338);
      (*pcVar1)();
    }
  }
  else {
    lVar4 = *param_1;
    bVar2 = SBORROW8(lVar3,lVar4);
    if ((lVar4 <= lVar3) && (lVar3 = lVar3 - lVar4, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b7304);
      (*pcVar1)();
    }
  }
  *(undefined8 *)(param_2 + lVar3 * 8) = param_3;
  if (!SCARRY8(param_1[1],1)) {
    param_1[1] = param_1[1] + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b7334);
  (*pcVar1)();
}



/* Address: 0x1007b7338 | FUN_1007b7338 */

void FUN_1007b7338(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_3[2];
  lVar1 = *param_3 - lVar3;
  if (SBORROW8(*param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7434);
    (*pcVar2)();
  }
  lVar4 = param_3[1];
  if (lVar1 < lVar4) {
    lVar6 = lVar4 - lVar1;
    pvVar5 = param_4;
    lVar7 = lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7438);
      (*pcVar2)();
    }
  }
  else {
    lVar6 = 0;
    pvVar5 = (void *)0x0;
    lVar7 = lVar4;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b743c);
      (*pcVar2)();
    }
    param_4 = (void *)((long)param_4 + lVar3 * 0x20);
    if (param_2 != param_4 || (void *)((long)param_4 + lVar7 * 0x20) <= param_2) {
      _memmove(param_2,param_4,lVar7 * 0x20);
    }
  }
  if (lVar1 < lVar4 && lVar6 != 0) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7440);
      (*pcVar2)();
    }
    param_2 = (void *)((long)param_2 + lVar7 * 0x20);
    if ((param_2 != pvVar5) || ((void *)((long)pvVar5 + lVar6 * 0x20) <= param_2)) {
      _memmove(param_2,pvVar5,lVar6 * 0x20);
      return;
    }
  }
  return;
}



/* Address: 0x1007b7440 | FUN_1007b7440 */

void FUN_1007b7440(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_3[2];
  lVar1 = *param_3 - lVar3;
  if (SBORROW8(*param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b753c);
    (*pcVar2)();
  }
  lVar4 = param_3[1];
  if (lVar1 < lVar4) {
    lVar6 = lVar4 - lVar1;
    pvVar5 = param_4;
    lVar7 = lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7540);
      (*pcVar2)();
    }
  }
  else {
    lVar6 = 0;
    pvVar5 = (void *)0x0;
    lVar7 = lVar4;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7544);
      (*pcVar2)();
    }
    param_4 = (void *)((long)param_4 + lVar3 * 8);
    if (param_2 != param_4 || (void *)((long)param_4 + lVar7 * 8) <= param_2) {
      _memmove(param_2,param_4,lVar7 << 3);
    }
  }
  if (lVar1 < lVar4 && lVar6 != 0) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7548);
      (*pcVar2)();
    }
    param_2 = (void *)((long)param_2 + lVar7 * 8);
    if ((param_2 != pvVar5) || ((void *)((long)pvVar5 + lVar6 * 8) <= param_2)) {
      _memmove(param_2,pvVar5,lVar6 << 3);
      return;
    }
  }
  return;
}



/* Address: 0x1007b7548 | FUN_1007b7548 */

void FUN_1007b7548(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b7644);
    (*pcVar3)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar6 = lVar8 - lVar1;
    lVar7 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b7648);
      (*pcVar3)();
    }
  }
  else {
    lVar6 = 0;
    lVar7 = lVar8;
    lVar2 = 0;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b764c);
      (*pcVar3)();
    }
    puVar4 = &DAT_100fe57c0;
    FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
    _swift_arrayInitWithCopy(param_2,param_4 + lVar5 * 0x20,lVar7,puVar4);
    lVar7 = lVar7 << 5;
  }
  if (lVar1 < lVar8 && lVar6 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b7650);
      (*pcVar3)();
    }
    puVar4 = &DAT_100fe57c0;
    FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
    _swift_arrayInitWithCopy(param_2 + lVar7,lVar2,lVar6,puVar4);
  }
  return;
}



/* Address: 0x1007b7650 | FUN_1007b7650 */

void FUN_1007b7650(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  void *pvVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_3[2];
  lVar1 = *param_3 - lVar4;
  if (SBORROW8(*param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b7728);
    (*pcVar3)();
  }
  lVar6 = param_3[1];
  if (lVar1 < lVar6) {
    lVar5 = lVar6 - lVar1;
    lVar7 = lVar1;
    pvVar2 = param_4;
    if (SBORROW8(lVar6,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b772c);
      (*pcVar3)();
    }
  }
  else {
    lVar5 = 0;
    lVar7 = lVar6;
    pvVar2 = (void *)0x0;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b7730);
      (*pcVar3)();
    }
    _memcpy(param_2,(void *)((long)param_4 + lVar4 * 8),lVar7 << 3);
  }
  if (lVar1 < lVar6 && lVar5 != 0) {
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b7734);
      (*pcVar3)();
    }
    _memcpy((void *)((long)param_2 + lVar7 * 8),pvVar2,lVar5 << 3);
    return;
  }
  return;
}



/* Address: 0x1007b7734 | FUN_1007b7734 */

undefined * FUN_1007b7734(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b784c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fe57d8;
    FUN_1000f7830(&DAT_100fe57d8,&DAT_100c78700);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f01d78);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1007b784c | FUN_1007b784c */

undefined * FUN_1007b784c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b794c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fe57b8;
    FUN_1000f7830(&DAT_100fe57b8,&DAT_100c786d8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1007b794c | FUN_1007b794c */

undefined * FUN_1007b794c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b7a94);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_1007c0680(0,&DAT_100fe57e8,PTR_typeMetadataAccessor_100ead690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe57e0;
    FUN_1000f7830(&DAT_100fe57e0,&DAT_100c78708);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1007b7a94 | FUN_1007b7a94 */

void FUN_1007b7a94(long param_1)

{
  FUN_1007b794c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1007b7aa8 | FUN_1007b7aa8 */

void FUN_1007b7aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  long local_88;
  undefined8 local_80;
  long local_78;
  long local_70;
  char local_68;
  
  FUN_1007b6c7c(&local_88);
  lVar1 = 0;
  if (local_68 != '\x01' && local_70 != 0) {
    lVar1 = local_78;
  }
  if (local_88 != 0) {
    puVar2 = &DAT_100fe57c0;
    FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
    _swift_arrayDestroy(local_88,local_80,puVar2);
  }
  if (lVar1 != 0 && (local_68 != '\x01' && local_70 != 0)) {
    puVar2 = &DAT_100fe57c0;
    FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
    _swift_arrayDestroy(lVar1,local_70,puVar2);
  }
  FUN_1007b815c(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x1007b7b8c | FUN_1007b7b8c */

void FUN_1007b7b8c(long param_1,long param_2,long *param_3,void *param_4)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b810c);
    (*pcVar5)();
  }
  if (lVar4 < 1) {
    return;
  }
  lVar9 = param_3[1];
  lVar11 = param_3[2];
  lVar8 = *param_3;
  lVar14 = 0;
  if (lVar8 <= lVar11 + param_1) {
    lVar14 = lVar8;
  }
  lVar13 = 0;
  if (lVar8 <= lVar11 + param_2) {
    lVar13 = lVar8;
  }
  lVar12 = lVar9 - param_2;
  if (SBORROW8(lVar9,param_2)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8110);
    (*pcVar5)();
  }
  lVar14 = (lVar11 + param_1) - lVar14;
  lVar13 = (lVar11 + param_2) - lVar13;
  if (lVar12 <= param_1) {
    lVar15 = lVar11 + lVar9;
    if (SCARRY8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8118);
      (*pcVar5)();
    }
    if (lVar9 < 0) {
      if ((lVar15 < 0) && (bVar6 = SCARRY8(lVar15,lVar8), lVar15 = lVar15 + lVar8, bVar6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8140);
        (*pcVar5)();
      }
    }
    else {
      bVar6 = SBORROW8(lVar15,lVar8);
      if ((lVar8 <= lVar15) && (lVar15 = lVar15 - lVar8, bVar6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b7ca8);
        (*pcVar5)();
      }
    }
    if (SBORROW8(lVar9,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b811c);
      (*pcVar5)();
    }
    lVar11 = (lVar9 - lVar4) + lVar11;
    lVar9 = 0;
    if (lVar8 <= lVar11) {
      lVar9 = lVar8;
    }
    if (lVar12 != 0) {
      lVar11 = lVar11 - lVar9;
      lVar9 = lVar11;
      if (lVar11 < 1) {
        lVar9 = lVar8;
      }
      lVar3 = lVar15;
      if (lVar15 < 1) {
        lVar3 = lVar8;
      }
      pvVar7 = param_4;
      if (lVar13 < lVar3) {
        if (lVar9 < lVar14) {
          lVar11 = lVar8 - lVar14;
          if (SBORROW8(lVar8,lVar14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b812c);
            (*pcVar5)();
          }
          if (0 < lVar11) {
            pvVar1 = (void *)((long)param_4 + lVar14 * 8);
            pvVar2 = (void *)((long)param_4 + lVar13 * 8);
            if ((lVar14 != lVar13) || ((void *)((long)pvVar2 + lVar11 * 8) <= pvVar1)) {
              _memmove(pvVar1,pvVar2,lVar11 * 8);
            }
            lVar14 = lVar13 + lVar11;
            if (SCARRY8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8144);
              (*pcVar5)();
            }
            lVar9 = *param_3;
            lVar13 = lVar14;
            if ((lVar9 <= lVar14) && (lVar13 = lVar14 - lVar9, SBORROW8(lVar14,lVar9))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8154);
              (*pcVar5)();
            }
          }
          lVar14 = lVar12 - lVar11;
          if (SBORROW8(lVar12,lVar11)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b813c);
            (*pcVar5)();
          }
          if ((0 < lVar14) && (((0 < lVar13 || ((lVar13 + lVar14) * 8 < 1)) || (lVar13 != 0)))) {
            sVar10 = lVar14 * 8;
            param_4 = (void *)((long)param_4 + lVar13 * 8);
            goto LAB_1007b80d4;
          }
        }
        else if (0 < lVar12) {
          pvVar7 = (void *)((long)param_4 + lVar14 * 8);
          param_4 = (void *)((long)param_4 + lVar13 * 8);
          if (((lVar14 < lVar13) || ((void *)((long)param_4 + lVar12 * 8) <= pvVar7)) ||
             (lVar14 != lVar13)) {
            sVar10 = lVar12 * 8;
            goto LAB_1007b80d4;
          }
        }
      }
      else {
        lVar12 = lVar8 - lVar13;
        if (lVar9 < lVar14) {
          if (SBORROW8(lVar8,lVar13)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8130);
            (*pcVar5)();
          }
          if (0 < lVar12) {
            pvVar1 = (void *)((long)param_4 + lVar14 * 8);
            pvVar2 = (void *)((long)param_4 + lVar13 * 8);
            if ((lVar14 != lVar13) || ((void *)((long)pvVar2 + lVar12 * 8) <= pvVar1)) {
              _memmove(pvVar1,pvVar2,lVar12 * 8);
            }
            lVar9 = lVar14 + lVar12;
            if (SCARRY8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8148);
              (*pcVar5)();
            }
            lVar8 = *param_3;
            lVar14 = lVar9;
            if ((lVar8 <= lVar9) && (lVar14 = lVar9 - lVar8, SBORROW8(lVar9,lVar8))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8158);
              (*pcVar5)();
            }
          }
          if (lVar14 != 0) {
            _memmove((void *)((long)param_4 + lVar14 * 8),param_4,lVar4 * 8);
          }
          lVar9 = *param_3;
          lVar14 = lVar4;
          if ((lVar9 <= lVar4) && (lVar14 = lVar4 - lVar9, SBORROW8(lVar4,lVar9))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8150);
            (*pcVar5)();
          }
          if ((0 < lVar11) && (((0 < lVar14 || ((lVar14 + lVar11) * 8 < 1)) || (lVar14 != 0)))) {
            sVar10 = lVar11 * 8;
            param_4 = (void *)((long)param_4 + lVar14 * 8);
LAB_1007b80d4:
            _memmove(pvVar7,param_4,sVar10);
          }
        }
        else {
          if (SBORROW8(lVar8,lVar13)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8134);
            (*pcVar5)();
          }
          if (0 < lVar12) {
            pvVar7 = (void *)((long)param_4 + lVar14 * 8);
            pvVar1 = (void *)((long)param_4 + lVar13 * 8);
            if ((lVar14 != lVar13) || ((void *)((long)pvVar1 + lVar12 * 8) <= pvVar7)) {
              _memmove(pvVar7,pvVar1,lVar12 * 8);
            }
            lVar11 = lVar14 + lVar12;
            if (SCARRY8(lVar14,lVar12)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b814c);
              (*pcVar5)();
            }
            lVar9 = *param_3;
            lVar14 = lVar11;
            if ((lVar9 <= lVar11) && (lVar14 = lVar11 - lVar9, SBORROW8(lVar11,lVar9))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b815c);
              (*pcVar5)();
            }
          }
          if ((0 < lVar15) &&
             (((pvVar7 = (void *)((long)param_4 + lVar14 * 8), lVar14 < 0 || (lVar15 <= lVar14)) ||
              (lVar14 != 0)))) {
            sVar10 = lVar15 << 3;
            goto LAB_1007b80d4;
          }
        }
      }
    }
    lVar11 = param_3[1] - lVar4;
    if (SBORROW8(param_3[1],lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8120);
      (*pcVar5)();
    }
    goto LAB_1007b80f0;
  }
  lVar9 = lVar11 + lVar4;
  if (SCARRY8(lVar11,lVar4)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8114);
    (*pcVar5)();
  }
  lVar12 = lVar9;
  if ((lVar8 <= lVar9) && (lVar12 = lVar9 - lVar8, SBORROW8(lVar9,lVar8))) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8124);
    (*pcVar5)();
  }
  if (param_1 == 0) goto LAB_1007b8008;
  lVar9 = lVar13;
  if (lVar13 < 1) {
    lVar9 = lVar8;
  }
  lVar15 = lVar14;
  if (lVar14 < 1) {
    lVar15 = lVar8;
  }
  if (lVar11 < lVar15) {
    if (lVar9 < lVar12) {
      if ((0 < lVar13) &&
         (((lVar11 = lVar8 - lVar4, 0 < lVar11 || ((lVar13 + lVar11) * 8 < 1)) || (lVar8 != lVar4)))
         ) {
        _memmove(param_4,(void *)((long)param_4 + lVar11 * 8),lVar13 * 8);
      }
      bVar6 = SBORROW8(param_1,lVar13);
      param_1 = param_1 - lVar13;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b7c88);
        (*pcVar5)();
      }
      goto LAB_1007b7fc4;
    }
    if (0 < param_1) {
      pvVar7 = (void *)((long)param_4 + lVar12 * 8);
      param_4 = (void *)((long)param_4 + lVar11 * 8);
      if (((lVar11 <= lVar12) && (pvVar7 < (void *)((long)param_4 + param_1 * 8))) &&
         (lVar12 == lVar11)) goto LAB_1007b8008;
LAB_1007b8000:
      _memmove(pvVar7,param_4,param_1 << 3);
    }
  }
  else {
    if (lVar9 < lVar12) {
      if (0 < lVar14) {
        _memmove((void *)((long)param_4 + lVar4 * 8),param_4,lVar14 * 8);
      }
      lVar11 = *param_3;
      if (((0 < lVar11 - lVar4) || (lVar11 * 8 < 1)) || (lVar11 != lVar4)) {
        _memmove(param_4,(void *)((long)param_4 + (lVar11 - lVar4) * 8),lVar4 * 8);
      }
      bVar6 = SBORROW8(param_1,lVar13);
      param_1 = param_1 - lVar13;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b7e2c);
        (*pcVar5)();
      }
    }
    else {
      if (SBORROW8(0,lVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8128);
        (*pcVar5)();
      }
      if (0 < lVar14) {
        pvVar7 = (void *)((long)param_4 + lVar14 * -8 + lVar13 * 8);
        if (((pvVar7 < param_4) || ((void *)((long)param_4 + lVar14 * 8) <= pvVar7)) ||
           (lVar13 * 8 + lVar14 * -8 != 0)) {
          _memmove(pvVar7,param_4,lVar14 * 8);
        }
      }
      bVar6 = SBORROW8(param_1,lVar14);
      param_1 = param_1 - lVar14;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b8138);
        (*pcVar5)();
      }
    }
LAB_1007b7fc4:
    if (0 < param_1) {
      lVar11 = param_3[2];
      pvVar7 = (void *)((long)param_4 + lVar12 * 8);
      param_4 = (void *)((long)param_4 + lVar11 * 8);
      if (((lVar12 < lVar11) || ((void *)((long)param_4 + param_1 * 8) <= pvVar7)) ||
         (lVar12 != lVar11)) goto LAB_1007b8000;
    }
  }
LAB_1007b8008:
  param_3[2] = lVar12;
  lVar11 = param_3[1] - lVar4;
  if (SBORROW8(param_3[1],lVar4)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1007b801c);
    (*pcVar5)();
  }
LAB_1007b80f0:
  param_3[1] = lVar11;
  return;
}



/* Address: 0x1007b815c | FUN_1007b815c */

void FUN_1007b815c(long param_1,long param_2,long *param_3,void *param_4)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  void *pvVar7;
  size_t sVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar3 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8714);
    (*pcVar4)();
  }
  if (lVar3 < 1) {
    return;
  }
  lVar11 = param_3[1];
  lVar10 = param_3[2];
  lVar9 = *param_3;
  lVar15 = 0;
  if (lVar9 <= lVar10 + param_1) {
    lVar15 = lVar9;
  }
  lVar14 = 0;
  if (lVar9 <= lVar10 + param_2) {
    lVar14 = lVar9;
  }
  lVar12 = lVar11 - param_2;
  if (SBORROW8(lVar11,param_2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8718);
    (*pcVar4)();
  }
  lVar15 = (lVar10 + param_1) - lVar15;
  lVar14 = (lVar10 + param_2) - lVar14;
  if (lVar12 <= param_1) {
    lVar13 = lVar10 + lVar11;
    if (SCARRY8(lVar10,lVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8720);
      (*pcVar4)();
    }
    if (lVar11 < 0) {
      if ((lVar13 < 0) && (bVar5 = SCARRY8(lVar13,lVar9), lVar13 = lVar13 + lVar9, bVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b874c);
        (*pcVar4)();
      }
    }
    else {
      bVar5 = SBORROW8(lVar13,lVar9);
      if ((lVar9 <= lVar13) && (lVar13 = lVar13 - lVar9, bVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b827c);
        (*pcVar4)();
      }
    }
    if (SBORROW8(lVar11,lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8724);
      (*pcVar4)();
    }
    lVar10 = (lVar11 - lVar3) + lVar10;
    lVar11 = 0;
    if (lVar9 <= lVar10) {
      lVar11 = lVar9;
    }
    if (lVar12 != 0) {
      lVar10 = lVar10 - lVar11;
      lVar11 = lVar10;
      if (lVar10 < 1) {
        lVar11 = lVar9;
      }
      lVar2 = lVar13;
      if (lVar13 < 1) {
        lVar2 = lVar9;
      }
      pvVar6 = param_4;
      if (lVar14 < lVar2) {
        if (lVar11 < lVar15) {
          lVar10 = lVar9 - lVar15;
          if (SBORROW8(lVar9,lVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8738);
            (*pcVar4)();
          }
          if (0 < lVar10) {
            pvVar7 = (void *)((long)param_4 + lVar15 * 0x20);
            pvVar1 = (void *)((long)param_4 + lVar14 * 0x20);
            if ((lVar15 * 0x20 + lVar14 * -0x20 != 0) ||
               ((void *)((long)pvVar1 + lVar10 * 0x20) <= pvVar7)) {
              _memmove(pvVar7,pvVar1,lVar10 * 0x20);
            }
            lVar15 = lVar14 + lVar10;
            if (SCARRY8(lVar14,lVar10)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8750);
              (*pcVar4)();
            }
            lVar11 = *param_3;
            lVar14 = lVar15;
            if ((lVar11 <= lVar15) && (lVar14 = lVar15 - lVar11, SBORROW8(lVar15,lVar11))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8760);
              (*pcVar4)();
            }
          }
          if (SBORROW8(lVar12,lVar10)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8748);
            (*pcVar4)();
          }
          if (0 < lVar12 - lVar10) {
            lVar15 = lVar14 * 0x20;
            sVar8 = (lVar12 - lVar10) * 0x20;
            if (((0 < lVar14) ||
                (lVar15 + sVar8 == 0 || (long)(lVar15 + sVar8) < 0 != SCARRY8(lVar15,sVar8))) ||
               (lVar14 != 0)) {
              param_4 = (void *)((long)param_4 + lVar15);
LAB_1007b862c:
              _memmove(pvVar6,param_4,sVar8);
            }
          }
        }
        else if (0 < lVar12) {
          lVar15 = lVar15 * 0x20;
          pvVar6 = (void *)((long)param_4 + lVar15);
          param_4 = (void *)((long)param_4 + lVar14 * 0x20);
          sVar8 = lVar12 * 0x20;
          if (((lVar15 < lVar14 * 0x20) || ((void *)((long)param_4 + sVar8) <= pvVar6)) ||
             (lVar15 + lVar14 * -0x20 != 0)) goto LAB_1007b862c;
        }
      }
      else {
        lVar12 = lVar9 - lVar14;
        if (lVar11 < lVar15) {
          if (SBORROW8(lVar9,lVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b873c);
            (*pcVar4)();
          }
          if (0 < lVar12) {
            pvVar7 = (void *)((long)param_4 + lVar15 * 0x20);
            pvVar1 = (void *)((long)param_4 + lVar14 * 0x20);
            if ((lVar15 * 0x20 + lVar14 * -0x20 != 0) ||
               ((void *)((long)pvVar1 + lVar12 * 0x20) <= pvVar7)) {
              _memmove(pvVar7,pvVar1,lVar12 * 0x20);
            }
            lVar11 = lVar15 + lVar12;
            if (SCARRY8(lVar15,lVar12)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8754);
              (*pcVar4)();
            }
            lVar9 = *param_3;
            lVar15 = lVar11;
            if ((lVar9 <= lVar11) && (lVar15 = lVar11 - lVar9, SBORROW8(lVar11,lVar9))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8764);
              (*pcVar4)();
            }
          }
          if ((lVar15 != 0) || (lVar3 * 0x20 < 1)) {
            _memmove((void *)((long)param_4 + lVar15 * 0x20),param_4,lVar3 * 0x20);
          }
          lVar11 = *param_3;
          lVar15 = lVar3;
          if ((lVar11 <= lVar3) && (lVar15 = lVar3 - lVar11, SBORROW8(lVar3,lVar11))) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b875c);
            (*pcVar4)();
          }
          if (0 < lVar10) {
            lVar11 = lVar15 * 0x20;
            sVar8 = lVar10 * 0x20;
            if (((0 < lVar15) ||
                (lVar11 + sVar8 == 0 || (long)(lVar11 + sVar8) < 0 != SCARRY8(lVar11,sVar8))) ||
               (lVar15 != 0)) {
              param_4 = (void *)((long)param_4 + lVar11);
              goto LAB_1007b862c;
            }
          }
        }
        else {
          if (SBORROW8(lVar9,lVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8740);
            (*pcVar4)();
          }
          if (0 < lVar12) {
            pvVar6 = (void *)((long)param_4 + lVar15 * 0x20);
            pvVar7 = (void *)((long)param_4 + lVar14 * 0x20);
            if ((lVar15 * 0x20 + lVar14 * -0x20 != 0) ||
               ((void *)((long)pvVar7 + lVar12 * 0x20) <= pvVar6)) {
              _memmove(pvVar6,pvVar7,lVar12 * 0x20);
            }
            lVar10 = lVar15 + lVar12;
            if (SCARRY8(lVar15,lVar12)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8758);
              (*pcVar4)();
            }
            lVar11 = *param_3;
            lVar15 = lVar10;
            if ((lVar11 <= lVar10) && (lVar15 = lVar10 - lVar11, SBORROW8(lVar10,lVar11))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8768);
              (*pcVar4)();
            }
          }
          if (0 < lVar13) {
            sVar8 = lVar13 * 0x20;
            if (((lVar15 < 0) || ((long)sVar8 <= lVar15 * 0x20)) || (lVar15 != 0)) {
              pvVar6 = (void *)((long)param_4 + lVar15 * 0x20);
              goto LAB_1007b862c;
            }
          }
        }
      }
    }
    lVar10 = param_3[1] - lVar3;
    if (SBORROW8(param_3[1],lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b864c);
      (*pcVar4)();
    }
    goto LAB_1007b86f4;
  }
  lVar11 = lVar10 + lVar3;
  if (SCARRY8(lVar10,lVar3)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b871c);
    (*pcVar4)();
  }
  lVar12 = lVar11;
  if ((lVar9 <= lVar11) && (lVar12 = lVar11 - lVar9, SBORROW8(lVar11,lVar9))) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b872c);
    (*pcVar4)();
  }
  if (param_1 != 0) {
    lVar11 = lVar14;
    if (lVar14 < 1) {
      lVar11 = lVar9;
    }
    lVar13 = lVar15;
    if (lVar15 < 1) {
      lVar13 = lVar9;
    }
    if (lVar10 < lVar13) {
      if (lVar11 < lVar12) {
        if (0 < lVar14) {
          lVar10 = (lVar9 - lVar3) * 0x20;
          if (((0 < lVar9 - lVar3) || (lVar14 * 0x20 + lVar10 < 1)) || (lVar9 != lVar3)) {
            _memmove(param_4,(void *)((long)param_4 + lVar10),lVar14 * 0x20);
          }
        }
        lVar15 = lVar14;
        if (SBORROW8(param_1,lVar14)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b825c);
          (*pcVar4)();
        }
LAB_1007b8540:
        lVar15 = param_1 - lVar15;
        if (lVar15 < 1) goto LAB_1007b86e4;
        lVar10 = param_3[2];
        goto LAB_1007b86b4;
      }
      if (param_1 < 1) goto LAB_1007b86e4;
      lVar11 = lVar12 * 0x20;
      pvVar6 = (void *)((long)param_4 + lVar11);
      pvVar7 = (void *)((long)param_4 + lVar10 * 0x20);
      sVar8 = param_1 * 0x20;
      if ((lVar10 * 0x20 <= lVar11) && (pvVar6 < (void *)((long)pvVar7 + sVar8))) {
        lVar11 = lVar11 + lVar10 * -0x20;
        goto joined_r0x0001007b84d4;
      }
    }
    else {
      if (lVar12 <= lVar11) {
        if (SBORROW8(0,lVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8730);
          (*pcVar4)();
        }
        if (0 < lVar15) {
          if ((lVar14 - lVar15 != 0) || (lVar15 * 0x20 < 1)) {
            _memmove((void *)((long)param_4 + (lVar14 - lVar15) * 0x20),param_4,lVar15 * 0x20);
          }
        }
        if (SBORROW8(param_1,lVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8744);
          (*pcVar4)();
        }
        goto LAB_1007b8540;
      }
      if (0 < lVar15) {
        _memmove((void *)((long)param_4 + lVar3 * 0x20),param_4,lVar15 * 0x20);
        lVar9 = *param_3;
      }
      if (((0 < lVar9 - lVar3) || (lVar9 * 0x20 < 1)) || (lVar9 != lVar3)) {
        _memmove(param_4,(void *)((long)param_4 + (lVar9 - lVar3) * 0x20),lVar3 * 0x20);
      }
      lVar15 = param_1 - lVar14;
      if (SBORROW8(param_1,lVar14)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8734);
        (*pcVar4)();
      }
      if (lVar15 < 1) goto LAB_1007b86e4;
      lVar10 = param_3[2];
LAB_1007b86b4:
      pvVar7 = (void *)((long)param_4 + lVar10 * 0x20);
      lVar11 = lVar12 * 0x20;
      pvVar6 = (void *)((long)param_4 + lVar11);
      sVar8 = lVar15 * 0x20;
      if ((lVar10 * 0x20 <= lVar11) && (pvVar6 < (void *)((long)pvVar7 + sVar8))) {
        lVar11 = lVar11 + lVar10 * -0x20;
joined_r0x0001007b84d4:
        if (lVar11 == 0) goto LAB_1007b86e4;
      }
    }
    _memmove(pvVar6,pvVar7,sVar8);
  }
LAB_1007b86e4:
  param_3[2] = lVar12;
  lVar10 = param_3[1] - lVar3;
  if (SBORROW8(param_3[1],lVar3)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1007b8728);
    (*pcVar4)();
  }
LAB_1007b86f4:
  param_3[1] = lVar10;
  return;
}



/* Address: 0x1007b8768 | FUN_1007b8768 */

void FUN_1007b8768(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = param_1[1];
  if (0 < lVar6) {
    lVar5 = param_1[2];
    lVar2 = *param_1 - lVar5;
    if (SBORROW8(*param_1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b8864);
      (*pcVar3)();
    }
    if (lVar2 < lVar6) {
      lVar8 = lVar6 - lVar2;
      lVar7 = param_2;
      lVar9 = lVar2;
      if (SBORROW8(lVar6,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b8868);
        (*pcVar3)();
      }
    }
    else {
      lVar8 = 0;
      lVar7 = 0;
      lVar9 = lVar6;
    }
    lVar1 = 0;
    if (lVar2 < lVar6 && lVar8 != 0) {
      lVar1 = lVar7;
    }
    if (param_2 != 0) {
      puVar4 = &DAT_100fe57c0;
      FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
      _swift_arrayDestroy(param_2 + lVar5 * 0x20,lVar9,puVar4);
    }
    if (lVar1 != 0 && (lVar2 < lVar6 && lVar8 != 0)) {
      puVar4 = &DAT_100fe57c0;
      FUN_1000f7830(&DAT_100fe57c0,&DAT_100c786e8);
      _swift_arrayDestroy(lVar1,lVar8,puVar4);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Address: 0x1007b8868 | FUN_1007b8868 */

undefined8 FUN_1007b8868(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20) + lVar5;
  if (SCARRY8(*(long *)(lVar4 + 0x20),lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b88cc);
    (*pcVar1)();
  }
  if (lVar5 < 0) {
    if ((lVar3 < 0) &&
       (bVar2 = SCARRY8(lVar3,*(long *)(lVar4 + 0x10)), lVar3 = lVar3 + *(long *)(lVar4 + 0x10),
       bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b88d0);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = *(long *)(lVar4 + 0x10);
    bVar2 = SBORROW8(lVar3,lVar5);
    if ((lVar5 <= lVar3) && (lVar3 = lVar3 - lVar5, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007b8894);
      (*pcVar1)();
    }
  }
  if ((lVar3 != 0) && (lVar3 != unaff_x20[1])) {
    unaff_x20[1] = 0;
    unaff_x20[2] = lVar3;
    return 1;
  }
  return 0;
}



/* Address: 0x1007b88d0 | FUN_1007b88d0 */

void FUN_1007b88d0(long param_1)

{
  size_t sVar1;
  void *unaff_x20;
  
  sVar1 = *(size_t *)(*(long *)(param_1 + -8) + 0x40);
  _memcpy(&stack0xffffffffffffffe0 + -(sVar1 + 0xf & 0xfffffffffffffff0),unaff_x20,sVar1);
  Swift::UnsafeMutablePointer::deinitialize
            (1,(UnsafeMutablePointer)
               (&stack0xffffffffffffffe0 + -(sVar1 + 0xf & 0xfffffffffffffff0)));
  return;
}



/* Address: 0x1007b8928 | FUN_1007b8928 */

void FUN_1007b8928(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8934 | FUN_1007b8934 */

void FUN_1007b8934(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Mutex MVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  undefined8 uVar6;
  long lVar7;
  size_t sVar8;
  undefined4 *puVar9;
  undefined4 auStack_90 [2];
  undefined1 auStack_88 [40];
  
  lVar5 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar5 + 0x50);
  uVar2 = *(undefined8 *)(lVar5 + 0x58);
  uVar6 = *(undefined8 *)(lVar5 + 0x60);
  lVar5 = 0;
  FUN_1007b8cc4(0,uVar1,uVar2,uVar6);
  lVar7 = (long)auStack_90 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  MVar3 = Synchronization::Mutex::typeMetadataAccessor();
  sVar8 = *(size_t *)(*(long *)(MVar3.unknown + -8) + 0x40);
  puVar9 = (undefined4 *)(lVar7 - (sVar8 + 0xf & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_1007b8a94(0,uVar1,uVar2,uVar6);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(auStack_88,param_1,lVar4);
  FUN_1007abe88(lVar7,param_1,uVar1,uVar2,uVar6);
  *puVar9 = 0;
  FUN_1006331c4(lVar7,(long)puVar9 + (long)*(int *)(MVar3.unknown + 0x1c),lVar5);
  _memcpy((void *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68)),puVar9,sVar8);
  return;
}



/* Address: 0x1007b8a5c | FUN_1007b8a5c */

void FUN_1007b8a5c(undefined8 param_1)

{
  _swift_allocObject();
  FUN_1007b8934(param_1);
  return;
}



/* Address: 0x1007b8a94 | FUN_1007b8a94 */

void FUN_1007b8a94(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8aa0 | FUN_1007b8aa0 */

void FUN_1007b8aa0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8aac | FUN_1007b8aac */

void FUN_1007b8aac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007b8ab8 | FUN_1007b8ab8 */

void FUN_1007b8ab8(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  void *pvVar5;
  void *pvVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b8b90);
    (*pcVar3)();
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + 0x20 + param_1 * 0x18;
  puVar4 = &DAT_100fe57e0;
  FUN_1000f7830(&DAT_100fe57e0,&DAT_100c78708);
  _swift_arrayDestroy(lVar8,lVar1,puVar4);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b8b94);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    lVar1 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b8b98);
      (*pcVar3)();
    }
    pvVar5 = (void *)(lVar8 + param_3 * 0x18);
    pvVar6 = (void *)(lVar7 + 0x20 + param_2 * 0x18);
    if ((pvVar5 != pvVar6) || ((void *)((long)pvVar6 + lVar1 * 0x18) <= pvVar5)) {
      _memmove(pvVar5,pvVar6,lVar1 * 0x18);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b8b9c);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007b8ba0);
  (*pcVar3)();
}



/* Address: 0x1007b8ba0 | FUN_1007b8ba0 */

void FUN_1007b8ba0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x01') {
    _swift_bridgeObjectRelease();
    return;
  }
  _swift_release(param_3);
  return;
}



/* Address: 0x1007b8bb8 | FUN_1007b8bb8 */

void FUN_1007b8bb8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}


