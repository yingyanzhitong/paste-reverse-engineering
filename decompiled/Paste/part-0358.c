/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10045b670 | FUN_10045b670 */

undefined8
FUN_10045b670(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar2 = (undefined8 *)&DAT_100fc7de8;
  FUN_1000037f0(&DAT_100fc7de8,&DAT_100c4c868);
  _swift_initStackObject();
  puVar2[3] = 4;
  puVar2[2] = 2;
  puVar3 = puVar2;
  FUN_100194a58();
  uVar1 = puVar3[1];
  puVar2[4] = *puVar3;
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar2[9] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar2[10] = &PTR_PTR_100ebcc60;
  puVar2[5] = uVar1;
  puVar2[6] = param_1;
  puVar2[7] = param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain();
  FUN_100194a0c();
  uVar1 = param_2[1];
  puVar2[0xb] = *param_2;
  puVar2[0xc] = uVar1;
  puVar2[0x10] = puVar4;
  puVar2[0x11] = &PTR_PTR_100ebcc60;
  puVar2[0xd] = param_3;
  puVar2[0xe] = param_4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(param_4);
  FUN_100459df0(puVar2);
  _swift_setDeallocating(puVar2);
  puVar4 = &DAT_100fc7d08;
  FUN_1000037f0(&DAT_100fc7d08,&DAT_100c4c6d0);
  _swift_arrayDestroy(puVar2 + 4,2,puVar4);
  return 0x6c6f6f745f70636d;
}



/* Address: 0x10045b798 | thunk_FUN_10045b79c */

void thunk_FUN_10045b79c(void)

{
  FUN_10045b79c();
  return;
}



/* Address: 0x10045b79c | FUN_10045b79c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010045b7cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

String FUN_10045b79c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  _ArrayBuffer<undefined> _Var3;
  undefined8 uVar4;
  _ArrayBuffer<undefined> _Var5;
  undefined8 uVar6;
  void *pvVar7;
  String SVar8;
  String SVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  String local_70;
  
  _Var3 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(_Var3.unknown + 0x10) = 0x20;
  *(undefined8 *)(_Var3.unknown + 0x38) = 0;
  *(undefined8 *)(_Var3.unknown + 0x30) = 0;
  *(undefined8 *)(_Var3.unknown + 0x28) = 0;
  *(undefined8 *)(_Var3.unknown + 0x20) = 0;
  uVar4 = *(undefined8 *)PTR__kSecRandomDefault_100eaa508;
  uVar6 = 0x20;
  _SecRandomCopyBytes(uVar4,0x20);
  if ((int)uVar4 == 0) {
    _Var5 = _Var3;
    _swift_bridgeObjectRetain();
    FUN_10046bd78();
    _swift_bridgeObjectRelease(_Var3.unknown);
    local_70 = Foundation::Data::base64EncodedString
                         ((NSDataBase64EncodingOptions)0x0,(Data)_Var5.unknown);
    pvVar7 = local_70.bridgeObject;
    local_80 = 0x2b;
    uStack_78 = 0xe100000000000000;
    local_90 = 0x2d;
    uStack_88 = 0xe100000000000000;
    FUN_10045b990();
    puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
    SVar8 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                      (&local_80,&local_90,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                       PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(pvVar7);
    local_80 = 0x2f;
    uStack_78 = 0xe100000000000000;
    local_90 = 0x5f;
    uStack_88 = 0xe100000000000000;
    local_70 = SVar8;
    SVar9 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                      (&local_80,&local_90,0,0,0,1,puVar1,puVar1);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    local_80 = 0x3d;
    uStack_78 = 0xe100000000000000;
    local_90 = 0;
    uStack_88 = 0xe000000000000000;
    local_70 = SVar9;
    SVar8 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                      (&local_80,&local_90,0,0,0,1,puVar1,puVar1);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    FUN_10003bf2c(_Var5.unknown,uVar6);
    _swift_bridgeObjectRelease(_Var3.unknown);
    return SVar8;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10045b980);
  (*pcVar2)();
}



/* Address: 0x10045b980 | FUN_10045b980 */

undefined1  [16] FUN_10045b980(void)

{
  return ZEXT816(0x100ed69d0);
}



/* Address: 0x10045b990 | FUN_10045b990 */

void FUN_10045b990(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fc7df0 = puVar1;
  return;
}



/* Address: 0x10045b9d0 | FUN_10045b9d0 */

undefined1  [16] FUN_10045b9d0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_10045ba0c();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x14));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10045ba0c | FUN_10045ba0c */

void FUN_10045ba0c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc7f50,&TargetStructDescriptor_100cb1080);
  return;
}



/* Address: 0x10045ba20 | FUN_10045ba20 */

undefined1 FUN_10045ba20(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10045ba0c();
  return *(undefined1 *)(unaff_x20 + *(int *)(lVar1 + 0x18));
}



/* Address: 0x10045ba40 | FUN_10045ba40 */

void FUN_10045ba40(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_10045ba0c();
  iVar1 = *(int *)(lVar2 + 0x1c);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010045ba88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x10045ba8c | FUN_10045ba8c */

void FUN_10045ba8c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10045ba0c();
  FUN_100011090(unaff_x20 + *(int *)(lVar1 + 0x20),param_1,&DAT_100fc7df8,&DAT_100c4c890);
  return;
}



/* Address: 0x10045bad0 | FUN_10045bad0 */

void FUN_10045bad0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10045ba0c();
  FUN_1001a7c4c(param_1,unaff_x20 + *(int *)(lVar1 + 0x20),&DAT_100fc7df8,&DAT_100c4c890);
  return;
}



/* Address: 0x10045bb14 | FUN_10045bb14 */

undefined1  [16] FUN_10045bb14(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_10045ba0c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x20);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x10045bb3c | FUN_10045bb3c */

undefined1  [16] FUN_10045bb3c(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_10045ba0c();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x24));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x10045bb78 | FUN_10045bb78 */

void FUN_10045bb78(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10045ba0c();
  FUN_100011090(unaff_x20 + *(int *)(lVar1 + 0x28),param_1,&DAT_100fc7e00,&DAT_100c4c898);
  return;
}



/* Address: 0x10045bbbc | FUN_10045bbbc */

void FUN_10045bbbc(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10045ba0c();
  FUN_1001a7c4c(param_1,unaff_x20 + *(int *)(lVar1 + 0x28),&DAT_100fc7e00,&DAT_100c4c898);
  return;
}



/* Address: 0x10045bc00 | FUN_10045bc00 */

undefined1  [16] FUN_10045bc00(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_10045ba0c();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x28);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x10045bc28 | FUN_10045bc28 */

void FUN_10045bc28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  Date DVar5;
  long lVar6;
  UUID UVar7;
  long lVar8;
  
  lVar4 = 0;
  FUN_10045ba0c();
  iVar2 = *(int *)(lVar4 + 0x20);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar5.unknown + -8);
  (**(code **)(lVar8 + 0x38))(param_1 + iVar2,1,1,DVar5.unknown);
  iVar3 = *(int *)(lVar4 + 0x28);
  lVar6 = 0;
  FUN_10045bd80();
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(param_1 + iVar3,1,1,lVar6);
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar7.unknown + -8) + 0x20))(param_1,param_2,UVar7.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x14));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined1 *)(param_1 + *(int *)(lVar4 + 0x18)) = param_5;
  (**(code **)(lVar8 + 0x20))(param_1 + *(int *)(lVar4 + 0x1c),param_6,DVar5.unknown);
  FUN_1001a7c4c(param_7,param_1 + iVar2,&DAT_100fc7df8,&DAT_100c4c890);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x24));
  *puVar1 = param_8;
  puVar1[1] = param_9;
  FUN_1001a7c4c(param_10,param_1 + iVar3,&DAT_100fc7e00,&DAT_100c4c898);
  return;
}



/* Address: 0x10045bd80 | FUN_10045bd80 */

void FUN_10045bd80(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc8008,&TargetStructDescriptor_100cb10c4);
  return;
}



/* Address: 0x10045bd94 | FUN_10045bd94 */

undefined1  [16] FUN_10045bd94(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar3 = *unaff_x20;
  puVar6 = (undefined1 *)0xe900000000000068;
  puVar5 = (undefined1 *)0x7361486e656b6f74;
  if (bVar3 != 5) {
    puVar6 = &DAT_e500000000000000;
    puVar5 = (undefined1 *)0x687475616f;
  }
  puVar1 = (undefined1 *)0xe900000000000074;
  puVar2 = (undefined1 *)0x4164657461657263;
  if (bVar3 != 3) {
    puVar1 = (undefined1 *)0xea00000000007441;
    puVar2 = (undefined1 *)0x646573557473616c;
  }
  if (bVar3 < 5) {
    puVar6 = puVar1;
    puVar5 = puVar2;
  }
  uVar4 = 0x656d616e;
  if (bVar3 != 1) {
    uVar4 = 0x646e696b;
  }
  puVar1 = &SUB_00006469;
  if (bVar3 != 0) {
    puVar1 = (undefined1 *)(ulong)uVar4;
  }
  puVar2 = &SUB_e200000000000000;
  if (bVar3 != 0) {
    puVar2 = &DAT_e400000000000000;
  }
  if (bVar3 < 3) {
    puVar6 = puVar2;
    puVar5 = puVar1;
  }
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Address: 0x10045be58 | FUN_10045be58 */

void FUN_10045be58(undefined1 *param_1,undefined1 param_2)

{
  FUN_10045dc18();
  *param_1 = param_2;
  return;
}



/* Address: 0x10045be7c | FUN_10045be7c */

void FUN_10045be7c(undefined1 *param_1)

{
  *param_1 = 7;
  return;
}



/* Address: 0x10045be88 | FUN_10045be88 */

String FUN_10045be88(void)

{
  String SVar1;
  
  FUN_10045dad8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10045beb0 | FUN_10045beb0 */

String FUN_10045beb0(void)

{
  String SVar1;
  
  FUN_10045dad8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10045bed8 | thunk_FUN_10045d51c */

undefined8 thunk_FUN_10045d51c(UUID param_1,UUID param_2,UUID param_3)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  Date DVar8;
  long lVar9;
  ulong uVar10;
  Date DVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long alStack_a0 [4];
  undefined8 *puStack_80;
  undefined8 *puStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lVar6 = 0;
  FUN_10045bd80();
  lStack_68 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lStack_68 + 0x40));
  puVar13 = (undefined8 *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100fc7e00;
  puStack_80 = puVar13;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)puVar13 - extraout_x8_00);
  puVar7 = &DAT_100fc8158;
  puStack_78 = puVar13;
  FUN_1000037f0(&DAT_100fc8158,&DAT_100c4cdb8);
  puStack_70 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar13 - extraout_x8_01;
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar16 - extraout_x8_03;
  puVar7 = &DAT_100fc8160;
  FUN_1000037f0(&DAT_100fc8160,&DAT_100c4cdc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar15 - extraout_x8_04;
  bVar5 = Foundation::UUID::___infix(param_1,param_2,param_3);
  if (!bVar5) {
    return 0;
  }
  lVar9 = 0;
  alStack_a0[3] = lVar6;
  FUN_10045ba0c();
                    /* WARNING: Load size is inaccurate */
  _Var1.unknown = param_1.unknown[*(int *)(lVar9 + 0x14)];
  _Var2.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar9 + 0x14)) + 8);
                    /* WARNING: Load size is inaccurate */
  DVar11.unknown = param_2.unknown[*(int *)(lVar9 + 0x14)];
  if (((_Var1.unknown != DVar11.unknown) ||
      (_Var2.unknown != *(undefined **)((long)(param_2.unknown + *(int *)(lVar9 + 0x14)) + 8))) &&
     (bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var2,(_StringComparisonResult)(__int8)DVar11.unknown), !bVar5)) {
    return 0;
  }
  if (param_1.unknown[*(int *)(lVar9 + 0x18)] != param_2.unknown[*(int *)(lVar9 + 0x18)]) {
    return 0;
  }
  bVar5 = Foundation::Date::___infix
                    ((Date)(param_1.unknown + *(int *)(lVar9 + 0x1c)),
                     (Date)(param_2.unknown + *(int *)(lVar9 + 0x1c)),DVar11);
  if (!bVar5) {
    return 0;
  }
  iVar3 = *(int *)(lVar9 + 0x20);
  lVar6 = (long)*(int *)(puVar7 + 0x30);
  alStack_a0[2] = lVar18;
  FUN_100011090(param_1.unknown + iVar3,lVar19,&DAT_100fc7df8,&DAT_100c4c890);
  FUN_100011090(param_2.unknown + iVar3,lVar19 + lVar6,&DAT_100fc7df8,&DAT_100c4c890);
  pcVar17 = *(code **)(lVar14 + 0x30);
  lVar18 = lVar19;
  (*pcVar17)(lVar19,1,DVar8.unknown);
  if ((int)lVar18 == 1) {
    lVar6 = lVar19 + lVar6;
    (*pcVar17)(lVar6,1,DVar8.unknown);
    lVar14 = alStack_a0[2];
    if ((int)lVar6 == 1) {
      FUN_100005808(lVar19,&DAT_100fc7df8,&DAT_100c4c890);
      lVar19 = lVar14;
LAB_10045d8b4:
                    /* WARNING: Load size is inaccurate */
      _Var1.unknown = param_1.unknown[*(int *)(lVar9 + 0x24)];
      _Var2.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar9 + 0x24)) + 8);
      puVar7 = *(undefined **)(param_2.unknown + *(int *)(lVar9 + 0x24));
      if (((_Var1.unknown != puVar7) ||
          (_Var2.unknown != *(undefined **)((long)(param_2.unknown + *(int *)(lVar9 + 0x24)) + 8)))
         && (bVar5 = Swift::_stringCompareWithSmolCheck
                               (_Var1,_Var2,(_StringComparisonResult)(__int8)puVar7), !bVar5)) {
        return 0;
      }
      iVar3 = *(int *)(lVar9 + 0x28);
      lVar6 = (long)*(int *)(puStack_70 + 0x30);
      FUN_100011090(param_1.unknown + iVar3,lVar19,&DAT_100fc7e00,&DAT_100c4c898);
      FUN_100011090(param_2.unknown + iVar3,lVar19 + lVar6,&DAT_100fc7e00,&DAT_100c4c898);
      lVar14 = alStack_a0[3];
      pcVar17 = *(code **)(lStack_68 + 0x30);
      lVar15 = lVar19;
      (*pcVar17)(lVar19,1,alStack_a0[3]);
      puVar13 = puStack_78;
      if ((int)lVar15 == 1) {
        lVar6 = lVar19 + lVar6;
        (*pcVar17)(lVar6,1,lVar14);
        if ((int)lVar6 == 1) {
          FUN_100005808(lVar19,&DAT_100fc7e00,&DAT_100c4c898);
          return 1;
        }
      }
      else {
        FUN_100011090(lVar19,puStack_78,&DAT_100fc7e00,&DAT_100c4c898);
        lVar15 = lVar19 + lVar6;
        (*pcVar17)(lVar15,1,lVar14);
        puVar4 = puStack_80;
        if ((int)lVar15 != 1) {
          FUN_10045fa0c(lVar19 + lVar6,puStack_80);
          DVar8.unknown = (undefined *)*puVar4;
          if ((((undefined *)*puVar13 == DVar8.unknown) &&
              ((undefined *)puVar13[1] == (undefined *)puVar4[1])) ||
             (bVar5 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar13,(undefined *)puVar13[1],
                                 (_StringComparisonResult)(__int8)DVar8.unknown), bVar5)) {
            uVar10 = puVar13[2];
            FUN_1004827e8(uVar10,puVar4[2]);
            if ((uVar10 & 1) != 0) {
              bVar5 = Foundation::Date::___infix
                                ((undefined *)((long)puVar13 + (long)*(int *)(lVar14 + 0x18)),
                                 (undefined *)((long)puVar4 + (long)*(int *)(lVar14 + 0x18)),DVar8);
              FUN_10005241c(puVar4,FUN_10045bd80);
              FUN_10005241c(puVar13,FUN_10045bd80);
              FUN_100005808(lVar19,&DAT_100fc7e00,&DAT_100c4c898);
              if (!bVar5) {
                return 0;
              }
              return 1;
            }
          }
          FUN_10005241c(puVar4,FUN_10045bd80);
          FUN_10005241c(puVar13,FUN_10045bd80);
          puVar7 = &DAT_100fc7e00;
          puVar12 = &DAT_100c4c898;
          goto LAB_10045dab0;
        }
        FUN_10005241c(puVar13,FUN_10045bd80);
      }
      puVar7 = &DAT_100fc8158;
      puVar12 = &DAT_100c4cdb8;
      goto LAB_10045dab0;
    }
  }
  else {
    FUN_100011090(lVar19,lVar15,&DAT_100fc7df8,&DAT_100c4c890);
    lVar18 = lVar19 + lVar6;
    alStack_a0[1] = lVar6;
    (*pcVar17)(lVar18,1,DVar8.unknown);
    lVar6 = alStack_a0[2];
    if ((int)lVar18 != 1) {
      (**(code **)(lVar14 + 0x20))(lVar16,lVar19 + alStack_a0[1],DVar8.unknown);
      puVar13 = &DAT_100fc8168;
      FUN_100003a00(&DAT_100fc8168,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar5 = Swift::Equatable::___infix(lVar15,lVar16,DVar8.unknown,puVar13);
      pcVar17 = *(code **)(lVar14 + 8);
      (*pcVar17)(lVar16,DVar8.unknown);
      (*pcVar17)(lVar15,DVar8.unknown);
      FUN_100005808(lVar19,&DAT_100fc7df8,&DAT_100c4c890);
      lVar19 = lVar6;
      if (!bVar5) {
        return 0;
      }
      goto LAB_10045d8b4;
    }
    (**(code **)(lVar14 + 8))(lVar15,DVar8.unknown);
  }
  puVar7 = &DAT_100fc8160;
  puVar12 = &DAT_100c4cdc0;
LAB_10045dab0:
  FUN_100005808(lVar19,puVar7,puVar12);
  return 0;
}



/* Address: 0x10045bedc | FUN_10045bedc */

void FUN_10045bedc(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100fc7e08;
  FUN_1000037f0(&DAT_100fc7e08,&DAT_100c4c8a0);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10045dad8();
  Swift::Encoder::_container();
  local_51 = 0;
  Foundation::UUID::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fc7e18,PTR_typeMetadataAccessor_100ea7500,
                PTR_Foundation__Foundation__UUID_>Swift__Encodable_100ea7510);
  Swift::KeyedEncodingContainer::_encode();
  if (unaff_x21 == 0) {
    lVar4 = 0;
    FUN_10045ba0c();
    puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x14));
    uVar8 = *puVar1;
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(uVar8,puVar1[1],&local_52,puVar3);
    iVar2 = *(int *)(lVar4 + 0x18);
    local_53 = 2;
    FUN_10045db18();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar2,&local_53,puVar3,&DAT_100ed6a60,uVar8);
    iVar2 = *(int *)(lVar4 + 0x1c);
    local_54 = 3;
    DVar5 = Foundation::Date::typeMetadataAccessor();
    puVar6 = &DAT_100fc7e28;
    FUN_100003a00(&DAT_100fc7e28,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar2,&local_54,puVar3,DVar5.unknown,puVar6);
    local_55 = 4;
    lVar7 = unaff_x20 + *(int *)(lVar4 + 0x20);
    Swift::KeyedEncodingContainer::_encodeIfPresent(lVar7,&local_55,puVar3,DVar5.unknown,puVar6);
    iVar2 = *(int *)(lVar4 + 0x24);
    local_56 = 5;
    FUN_10045db58();
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + iVar2,&local_56,puVar3,&DAT_100ed7860,lVar7);
    iVar2 = *(int *)(lVar4 + 0x28);
    local_57 = 6;
    uVar8 = 0;
    FUN_10045bd80(0);
    puVar6 = &DAT_100fc7e38;
    FUN_100003a00(&DAT_100fc7e38,FUN_10045bd80,&TargetProtocolConformanceDescriptor_100c4cad8);
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20 + iVar2,&local_57,puVar3,uVar8,puVar6)
    ;
  }
  (**(code **)(lVar9 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10045c1a4 | FUN_10045c1a4 */

/* WARNING: Removing unreachable block (ram,0x00010045c7bc) */
/* WARNING: Removing unreachable block (ram,0x00010045c7d8) */
/* WARNING: Removing unreachable block (ram,0x00010045c700) */
/* WARNING: Removing unreachable block (ram,0x00010045c60c) */
/* WARNING: Removing unreachable block (ram,0x00010045c4f8) */
/* WARNING: Removing unreachable block (ram,0x00010045c564) */
/* WARNING: Removing unreachable block (ram,0x00010045c574) */
/* WARNING: Removing unreachable block (ram,0x00010045c594) */
/* WARNING: Removing unreachable block (ram,0x00010045c684) */
/* WARNING: Removing unreachable block (ram,0x00010045c77c) */
/* WARNING: Removing unreachable block (ram,0x00010045c790) */
/* WARNING: Removing unreachable block (ram,0x00010045c7dc) */
/* WARNING: Removing unreachable block (ram,0x00010045c80c) */
/* WARNING: Removing unreachable block (ram,0x00010045c440) */

void FUN_10045c1a4(void *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Date DVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar11;
  long lVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  String SVar15;
  String SStack_f0;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  undefined1 local_51;
  
  puVar4 = &DAT_100fc7e00;
  SStack_f0.bridgeObject = param_1;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc7df8;
  local_e0 = (long)&SStack_f0 - extraout_x8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&SStack_f0 - extraout_x8) - extraout_x8_00;
  local_d8 = lVar10;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar10 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar10;
  local_a8 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d0 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  lVar10 = lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc7e40;
  local_c0 = lVar10;
  FUN_1000037f0(&DAT_100fc7e40,&DAT_100c4c8a8);
  local_b8 = *(long *)(puVar4 + -8);
  local_b0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_03;
  lVar6 = 0;
  FUN_10045ba0c();
  lVar7 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar13 = lVar10 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)*(int *)(lVar7 + 0x20);
  (**(code **)(lVar14 + 0x38))(lVar13 + lVar11,1,1,DVar5.unknown);
  lVar12 = (long)*(int *)(lVar6 + 0x28);
  lVar8 = 0;
  FUN_10045bd80();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar13 + lVar12,1,1,lVar8);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10045dad8();
  local_a0 = lVar10;
  Swift::Decoder::_container();
  lVar7 = local_c8;
  if (unaff_x21 == 0) {
    local_70 = 0;
    puVar4 = &DAT_100fc7e48;
    FUN_100003a00(&DAT_100fc7e48,PTR_typeMetadataAccessor_100ea7500,
                  PTR_Foundation__Foundation__UUID_>Swift__Decodable_100ea7528);
    puVar3 = local_a8;
    puVar2 = local_b0;
    lVar10 = local_c0;
    Swift::KeyedDecodingContainer::_decode(local_c0,local_a8,&local_70,local_b0,local_a8,puVar4);
    (**(code **)(local_d0 + 0x20))(lVar13,lVar10,puVar3);
    local_70 = 1;
    SVar15 = Swift::KeyedDecodingContainer::_decode(&local_70,puVar2);
    pcVar9 = SVar15.str;
    *(String *)(lVar13 + *(int *)(lVar6 + 0x14)) = SVar15;
    local_51 = 2;
    FUN_10045db98();
    Swift::KeyedDecodingContainer::_decode
              (&local_70,&DAT_100ed6a60,&local_51,puVar2,&DAT_100ed6a60,pcVar9);
    *(undefined1 *)(lVar13 + *(int *)(lVar6 + 0x18)) = local_70;
    local_70 = 3;
    puVar4 = &DAT_100fc7e58;
    FUN_100003a00(&DAT_100fc7e58,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    Swift::KeyedDecodingContainer::_decode(lVar7,DVar5.unknown,&local_70,local_b0,DVar5.unknown);
    local_c0 = lVar14;
    (**(code **)(lVar14 + 0x20))(lVar13 + *(int *)(lVar6 + 0x1c),lVar7,DVar5.unknown);
    lVar7 = local_d8;
    local_70 = 4;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_d8,DVar5.unknown,&local_70,local_b0,DVar5.unknown,puVar4);
    FUN_1001a7c4c(lVar7,lVar13 + lVar11,&DAT_100fc7df8,&DAT_100c4c890);
    local_51 = 5;
    FUN_10045dbd8();
    Swift::KeyedDecodingContainer::_decode
              (&local_70,&DAT_100ed7860,&local_51,local_b0,&DAT_100ed7860,lVar7);
    puVar1 = (undefined8 *)(lVar13 + *(int *)(lVar6 + 0x24));
    *puVar1 = CONCAT71(uStack_6f,local_70);
    puVar1[1] = uStack_68;
    local_70 = 6;
    puVar4 = &DAT_100fc7e68;
    FUN_100003a00(&DAT_100fc7e68,FUN_10045bd80,&TargetProtocolConformanceDescriptor_100c4cab0);
    Swift::KeyedDecodingContainer::_decodeIfPresent(local_e0,lVar8,&local_70,local_b0,lVar8,puVar4);
    (**(code **)(local_b8 + 8))(local_a0,local_b0);
    FUN_1001a7c4c(local_e0,lVar13 + lVar12,&DAT_100fc7e00,&DAT_100c4c898);
    FUN_1000c495c(lVar13,SStack_f0.bridgeObject,FUN_10045ba0c);
    FUN_100004594(param_2);
    FUN_10005241c(lVar13,FUN_10045ba0c);
  }
  else {
    FUN_100004594(param_2);
    FUN_100005808(lVar13 + lVar11,&DAT_100fc7df8,&DAT_100c4c890);
    FUN_100005808(lVar13 + lVar12,&DAT_100fc7e00,&DAT_100c4c898);
  }
  return;
}



/* Address: 0x10045c880 | FUN_10045c880 */

void FUN_10045c880(void)

{
  FUN_10045c1a4();
  return;
}



/* Address: 0x10045c894 | FUN_10045c894 */

void FUN_10045c894(void)

{
  FUN_10045bedc();
  return;
}



/* Address: 0x10045c8a8 | thunk_FUN_10045de64 */

void thunk_FUN_10045de64(void)

{
  FUN_10045de64();
  return;
}



/* Address: 0x10045c8ac | thunk_FUN_10045e118 */

void thunk_FUN_10045e118(void)

{
  FUN_10045e118();
  return;
}



/* Address: 0x10045c8b0 | FUN_10045c8b0 */

void FUN_10045c8b0(void)

{
  FUN_1000037f0(&DAT_100fc7ea0,&DAT_100c4c8b0);
  _swift_initStaticObject();
  return;
}



/* Address: 0x10045c8dc | FUN_10045c8dc */

undefined1  [16] FUN_10045c8dc(byte param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  uVar1 = 0x66727573646e6977;
  if (param_1 != 5) {
    uVar1 = 0x6d6f74737563;
  }
  puVar2 = &DAT_e800000000000000;
  if (param_1 != 5) {
    puVar2 = &DAT_e600000000000000;
  }
  uVar4 = 0x726f73727563;
  if (param_1 != 3) {
    uVar4 = 0x65646f637376;
  }
  if (param_1 < 5) {
    puVar2 = &DAT_e600000000000000;
    uVar1 = uVar4;
  }
  puVar6 = (undefined1 *)0xea00000000006564;
  uVar4 = 0x6f43656475616c63;
  if (param_1 != 1) {
    puVar6 = &DAT_e500000000000000;
    uVar4 = 0x7865646f63;
  }
  puVar3 = (undefined1 *)0xed0000706f746b73;
  uVar5 = 0x6544656475616c63;
  if (param_1 != 0) {
    puVar3 = puVar6;
    uVar5 = uVar4;
  }
  if (param_1 < 3) {
    puVar2 = puVar3;
    uVar1 = uVar5;
  }
  auVar7._8_8_ = puVar2;
  auVar7._0_8_ = uVar1;
  return auVar7;
}



/* Address: 0x10045c9b4 | FUN_10045c9b4 */

void FUN_10045c9b4(void)

{
  undefined1 *unaff_x20;
  
  FUN_10045cac0(0,*unaff_x20);
  return;
}



/* Address: 0x10045c9c0 | FUN_10045c9c0 */

void FUN_10045c9c0(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  String SVar8;
  
  bVar4 = *unaff_x20;
  pcVar1 = (char *)0x66727573646e6977;
  if (bVar4 != 5) {
    pcVar1 = (char *)0x6d6f74737563;
  }
  puVar2 = &DAT_e800000000000000;
  if (bVar4 != 5) {
    puVar2 = &DAT_e600000000000000;
  }
  pcVar5 = (char *)0x726f73727563;
  if (bVar4 != 3) {
    pcVar5 = (char *)0x65646f637376;
  }
  if (bVar4 < 5) {
    puVar2 = &DAT_e600000000000000;
    pcVar1 = pcVar5;
  }
  puVar7 = (undefined1 *)0xea00000000006564;
  pcVar5 = (char *)0x6f43656475616c63;
  if (bVar4 != 1) {
    puVar7 = &DAT_e500000000000000;
    pcVar5 = (char *)0x7865646f63;
  }
  puVar3 = (undefined1 *)0xed0000706f746b73;
  pcVar6 = (char *)0x6544656475616c63;
  if (bVar4 != 0) {
    puVar3 = puVar7;
    pcVar6 = pcVar5;
  }
  if (bVar4 < 3) {
    puVar2 = puVar3;
    pcVar1 = pcVar6;
  }
  SVar8.bridgeObject = puVar2;
  SVar8.str = pcVar1;
  Swift::String::hash(param_1,SVar8);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10045cab8 | FUN_10045cab8 */

void FUN_10045cab8(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10045cac0(param_1,*unaff_x20);
  return;
}



/* Address: 0x10045cac0 | FUN_10045cac0 */

void FUN_10045cac0(__int64 param_1,byte param_2)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  undefined1 *puVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x66727573646e6977;
  if (param_2 != 5) {
    pcVar1 = (char *)0x6d6f74737563;
  }
  HVar5.unknown = &DAT_e800000000000000;
  if (param_2 != 5) {
    HVar5.unknown = &DAT_e600000000000000;
  }
  pcVar3 = (char *)0x726f73727563;
  if (param_2 != 3) {
    pcVar3 = (char *)0x65646f637376;
  }
  if (param_2 < 5) {
    HVar5.unknown = &DAT_e600000000000000;
    pcVar1 = pcVar3;
  }
  puVar6 = (undefined1 *)0xea00000000006564;
  pcVar3 = (char *)0x6f43656475616c63;
  if (param_2 != 1) {
    puVar6 = &DAT_e500000000000000;
    pcVar3 = (char *)0x7865646f63;
  }
  puVar2 = (undefined1 *)0xed0000706f746b73;
  pcVar4 = (char *)0x6544656475616c63;
  if (param_2 != 0) {
    puVar2 = puVar6;
    pcVar4 = pcVar3;
  }
  if (param_2 < 3) {
    HVar5.unknown = puVar2;
    pcVar1 = pcVar4;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10045cbdc | FUN_10045cbdc */

void FUN_10045cbdc(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10045e118(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10045cc08 | FUN_10045cc08 */

void FUN_10045cc08(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  uVar1 = 0x66727573646e6977;
  if (bVar4 != 5) {
    uVar1 = 0x6d6f74737563;
  }
  puVar2 = &DAT_e800000000000000;
  if (bVar4 != 5) {
    puVar2 = &DAT_e600000000000000;
  }
  uVar5 = 0x726f73727563;
  if (bVar4 != 3) {
    uVar5 = 0x65646f637376;
  }
  if (bVar4 < 5) {
    puVar2 = &DAT_e600000000000000;
    uVar1 = uVar5;
  }
  puVar7 = (undefined1 *)0xea00000000006564;
  uVar5 = 0x6f43656475616c63;
  if (bVar4 != 1) {
    puVar7 = &DAT_e500000000000000;
    uVar5 = 0x7865646f63;
  }
  puVar3 = (undefined1 *)0xed0000706f746b73;
  uVar6 = 0x6544656475616c63;
  if (bVar4 != 0) {
    puVar3 = puVar7;
    uVar6 = uVar5;
  }
  if (bVar4 < 3) {
    puVar2 = puVar3;
    uVar1 = uVar6;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x10045cce4 | FUN_10045cce4 */

void FUN_10045cce4(void)

{
  FUN_10045f9cc();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10045cd40 | FUN_10045cd40 */

void FUN_10045cd40(void)

{
  FUN_10045f9cc();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x10045cd8c | FUN_10045cd8c */

void FUN_10045cd8c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7ea0;
  FUN_1000037f0(&DAT_100fc7ea0,&DAT_100c4c8b0);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x10045cdcc | FUN_10045cdcc */

void FUN_10045cdcc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10045cdd4 | FUN_10045cdd4 */

void FUN_10045cdd4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_10045bd80();
  iVar1 = *(int *)(lVar2 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010045ce1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x10045ce20 | FUN_10045ce20 */

void FUN_10045ce20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  lVar2 = 0;
  FUN_10045bd80();
  iVar1 = *(int *)(lVar2 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010045ce74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,param_5,DVar3.unknown);
  return;
}



/* Address: 0x10045ce78 | FUN_10045ce78 */

undefined1  [16] FUN_10045ce78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0xec00000073495255;
  uVar2 = 0x7463657269646572;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xea00000000007441;
    uVar2 = 0x6465766f72707061;
  }
  uVar1 = 0xeb00000000444974;
  uVar3 = 0x6e65696c43726364;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x10045cee8 | FUN_10045cee8 */

void FUN_10045cee8(undefined1 *param_1,undefined1 param_2)

{
  FUN_10045f8a8();
  *param_1 = param_2;
  return;
}



/* Address: 0x10045cf0c | FUN_10045cf0c */

String FUN_10045cf0c(void)

{
  String SVar1;
  
  FUN_10045e17c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10045cf34 | FUN_10045cf34 */

String FUN_10045cf34(void)

{
  String SVar1;
  
  FUN_10045e17c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10045cf5c | thunk_FUN_10045d43c */

void thunk_FUN_10045d43c(void)

{
  FUN_10045d43c();
  return;
}



/* Address: 0x10045cf60 | FUN_10045cf60 */

void FUN_10045cf60(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  Date DVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fc7ea8;
  FUN_1000037f0(&DAT_100fc7ea8,&DAT_100c4c8b8);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10045e17c();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    puVar3 = &DAT_100fc7eb8;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    puVar4 = &DAT_100fc7ec0;
    FUN_10045e1bc(&DAT_100fc7ec0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encode(unaff_x20 + 2,&local_52,puVar2,puVar3,puVar4);
    lVar5 = 0;
    FUN_10045bd80();
    iVar1 = *(int *)(lVar5 + 0x18);
    local_53 = 2;
    DVar6 = Foundation::Date::typeMetadataAccessor();
    puVar3 = &DAT_100fc7e28;
    FUN_100003a00(&DAT_100fc7e28,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encode
              ((long)unaff_x20 + (long)iVar1,&local_53,puVar2,DVar6.unknown,puVar3);
  }
  (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x10045d118 | FUN_10045d118 */

/* WARNING: Removing unreachable block (ram,0x00010045d3a0) */
/* WARNING: Removing unreachable block (ram,0x00010045d320) */
/* WARNING: Removing unreachable block (ram,0x00010045d3a4) */
/* WARNING: Removing unreachable block (ram,0x00010045d3b8) */
/* WARNING: Removing unreachable block (ram,0x00010045d274) */

void FUN_10045d118(undefined8 param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  String *pSVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  String SVar9;
  String local_a0;
  char *local_90 [3];
  char *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  local_90[0] = (char *)param_1;
  local_90[1] = (char *)Foundation::Date::typeMetadataAccessor();
  local_a0.bridgeObject = *(void **)(local_90[1] + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_a0.bridgeObject + 0x40));
  lVar7 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fc7ec8;
  FUN_1000037f0(&DAT_100fc7ec8,&DAT_100c4c8c8);
  lVar8 = *(long *)(puVar3 + -8);
  local_90[2] = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_10045bd80();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  pSVar6 = (String *)((lVar7 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10045e17c();
  Swift::Decoder::_container();
  pcVar2 = local_90[2];
  pcVar1 = local_90[1];
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar9 = Swift::KeyedDecodingContainer::_decode(&local_51,local_90[2]);
    *pSVar6 = SVar9;
    puVar3 = &DAT_100fc7eb8;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    local_52 = 1;
    puVar5 = &DAT_100fc7ed0;
    FUN_10045e1bc(&DAT_100fc7ed0,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_68,puVar3,&local_52,pcVar2,puVar3,puVar5);
    local_a0.str = local_68;
    pSVar6[1].str = local_68;
    local_53 = 2;
    puVar3 = &DAT_100fc7e58;
    FUN_100003a00(&DAT_100fc7e58,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    Swift::KeyedDecodingContainer::_decode(lVar7,pcVar1,&local_53,pcVar2,pcVar1,puVar3);
    (**(code **)(lVar8 + 8))(lVar7 - extraout_x8_00,pcVar2);
    (**(code **)((long)local_a0.bridgeObject + 0x20))
              ((long)&pSVar6->str + (long)*(int *)(lVar4 + 0x18),lVar7,pcVar1);
    FUN_1000c495c(pSVar6,local_90[0],FUN_10045bd80);
    FUN_100004594(param_2);
    FUN_10005241c(pSVar6,FUN_10045bd80);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10045d414 | FUN_10045d414 */

void FUN_10045d414(void)

{
  FUN_10045d118();
  return;
}



/* Address: 0x10045d428 | FUN_10045d428 */

void FUN_10045d428(void)

{
  FUN_10045cf60();
  return;
}



/* Address: 0x10045d43c | FUN_10045d43c */

bool FUN_10045d43c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  DVar2.unknown = (undefined *)*param_2;
  if (((undefined *)*param_1 == DVar2.unknown && (undefined *)param_1[1] == (undefined *)param_2[1])
     || (bVar1 = Swift::_stringCompareWithSmolCheck
                           ((undefined *)*param_1,(undefined *)param_1[1],
                            (_StringComparisonResult)(__int8)DVar2.unknown), bVar1)) {
    lVar3 = param_1[2];
    lVar4 = param_2[2];
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 == *(long *)(lVar4 + 0x10)) {
      if (lVar5 != 0 && lVar3 != lVar4) {
        puVar6 = (undefined8 *)(lVar4 + 0x28);
        puVar7 = (undefined8 *)(lVar3 + 0x28);
        do {
          DVar2.unknown = (undefined *)puVar6[-1];
          if (((undefined *)puVar7[-1] != DVar2.unknown ||
               (undefined *)*puVar7 != (undefined *)*puVar6) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)puVar7[-1],(undefined *)*puVar7,
                                 (_StringComparisonResult)(__int8)DVar2.unknown), !bVar1)) {
            return false;
          }
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      lVar5 = 0;
      FUN_10045bd80();
      bVar1 = Foundation::Date::___infix
                        ((undefined *)((long)param_1 + (long)*(int *)(lVar5 + 0x18)),
                         (undefined *)((long)param_2 + (long)*(int *)(lVar5 + 0x18)),DVar2);
      return bVar1;
    }
  }
  return false;
}



/* Address: 0x10045d51c | FUN_10045d51c */

undefined8 FUN_10045d51c(UUID param_1,UUID param_2,UUID param_3)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  int iVar3;
  undefined8 *puVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  Date DVar8;
  long lVar9;
  ulong uVar10;
  Date DVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  long alStack_a0 [4];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined *local_70;
  long local_68;
  
  lVar6 = 0;
  FUN_10045bd80();
  local_68 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_68 + 0x40));
  puVar13 = (undefined8 *)((long)alStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar7 = &DAT_100fc7e00;
  local_80 = puVar13;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)puVar13 - extraout_x8_00);
  puVar7 = &DAT_100fc8158;
  local_78 = puVar13;
  FUN_1000037f0(&DAT_100fc8158,&DAT_100c4cdb8);
  local_70 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar18 = (long)puVar13 - extraout_x8_01;
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar16 = lVar18 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar16 - extraout_x8_03;
  puVar7 = &DAT_100fc8160;
  FUN_1000037f0(&DAT_100fc8160,&DAT_100c4cdc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar15 - extraout_x8_04;
  bVar5 = Foundation::UUID::___infix(param_1,param_2,param_3);
  if (!bVar5) {
    return 0;
  }
  lVar9 = 0;
  alStack_a0[3] = lVar6;
  FUN_10045ba0c();
                    /* WARNING: Load size is inaccurate */
  _Var1.unknown = param_1.unknown[*(int *)(lVar9 + 0x14)];
  _Var2.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar9 + 0x14)) + 8);
                    /* WARNING: Load size is inaccurate */
  DVar11.unknown = param_2.unknown[*(int *)(lVar9 + 0x14)];
  if (((_Var1.unknown != DVar11.unknown) ||
      (_Var2.unknown != *(undefined **)((long)(param_2.unknown + *(int *)(lVar9 + 0x14)) + 8))) &&
     (bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var2,(_StringComparisonResult)(__int8)DVar11.unknown), !bVar5)) {
    return 0;
  }
  if (param_1.unknown[*(int *)(lVar9 + 0x18)] != param_2.unknown[*(int *)(lVar9 + 0x18)]) {
    return 0;
  }
  bVar5 = Foundation::Date::___infix
                    ((Date)(param_1.unknown + *(int *)(lVar9 + 0x1c)),
                     (Date)(param_2.unknown + *(int *)(lVar9 + 0x1c)),DVar11);
  if (!bVar5) {
    return 0;
  }
  iVar3 = *(int *)(lVar9 + 0x20);
  lVar6 = (long)*(int *)(puVar7 + 0x30);
  alStack_a0[2] = lVar18;
  FUN_100011090(param_1.unknown + iVar3,lVar19,&DAT_100fc7df8,&DAT_100c4c890);
  FUN_100011090(param_2.unknown + iVar3,lVar19 + lVar6,&DAT_100fc7df8,&DAT_100c4c890);
  pcVar17 = *(code **)(lVar14 + 0x30);
  lVar18 = lVar19;
  (*pcVar17)(lVar19,1,DVar8.unknown);
  if ((int)lVar18 == 1) {
    lVar6 = lVar19 + lVar6;
    (*pcVar17)(lVar6,1,DVar8.unknown);
    lVar14 = alStack_a0[2];
    if ((int)lVar6 == 1) {
      FUN_100005808(lVar19,&DAT_100fc7df8,&DAT_100c4c890);
      lVar19 = lVar14;
LAB_10045d8b4:
                    /* WARNING: Load size is inaccurate */
      _Var1.unknown = param_1.unknown[*(int *)(lVar9 + 0x24)];
      _Var2.unknown = *(undefined **)((long)(param_1.unknown + *(int *)(lVar9 + 0x24)) + 8);
      puVar7 = *(undefined **)(param_2.unknown + *(int *)(lVar9 + 0x24));
      if (((_Var1.unknown != puVar7) ||
          (_Var2.unknown != *(undefined **)((long)(param_2.unknown + *(int *)(lVar9 + 0x24)) + 8)))
         && (bVar5 = Swift::_stringCompareWithSmolCheck
                               (_Var1,_Var2,(_StringComparisonResult)(__int8)puVar7), !bVar5)) {
        return 0;
      }
      iVar3 = *(int *)(lVar9 + 0x28);
      lVar6 = (long)*(int *)(local_70 + 0x30);
      FUN_100011090(param_1.unknown + iVar3,lVar19,&DAT_100fc7e00,&DAT_100c4c898);
      FUN_100011090(param_2.unknown + iVar3,lVar19 + lVar6,&DAT_100fc7e00,&DAT_100c4c898);
      lVar14 = alStack_a0[3];
      pcVar17 = *(code **)(local_68 + 0x30);
      lVar15 = lVar19;
      (*pcVar17)(lVar19,1,alStack_a0[3]);
      puVar13 = local_78;
      if ((int)lVar15 == 1) {
        lVar6 = lVar19 + lVar6;
        (*pcVar17)(lVar6,1,lVar14);
        if ((int)lVar6 == 1) {
          FUN_100005808(lVar19,&DAT_100fc7e00,&DAT_100c4c898);
          return 1;
        }
      }
      else {
        FUN_100011090(lVar19,local_78,&DAT_100fc7e00,&DAT_100c4c898);
        lVar15 = lVar19 + lVar6;
        (*pcVar17)(lVar15,1,lVar14);
        puVar4 = local_80;
        if ((int)lVar15 != 1) {
          FUN_10045fa0c(lVar19 + lVar6,local_80);
          DVar8.unknown = (undefined *)*puVar4;
          if ((((undefined *)*puVar13 == DVar8.unknown) &&
              ((undefined *)puVar13[1] == (undefined *)puVar4[1])) ||
             (bVar5 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar13,(undefined *)puVar13[1],
                                 (_StringComparisonResult)(__int8)DVar8.unknown), bVar5)) {
            uVar10 = puVar13[2];
            FUN_1004827e8(uVar10,puVar4[2]);
            if ((uVar10 & 1) != 0) {
              bVar5 = Foundation::Date::___infix
                                ((undefined *)((long)puVar13 + (long)*(int *)(lVar14 + 0x18)),
                                 (undefined *)((long)puVar4 + (long)*(int *)(lVar14 + 0x18)),DVar8);
              FUN_10005241c(puVar4,FUN_10045bd80);
              FUN_10005241c(puVar13,FUN_10045bd80);
              FUN_100005808(lVar19,&DAT_100fc7e00,&DAT_100c4c898);
              if (!bVar5) {
                return 0;
              }
              return 1;
            }
          }
          FUN_10005241c(puVar4,FUN_10045bd80);
          FUN_10005241c(puVar13,FUN_10045bd80);
          puVar7 = &DAT_100fc7e00;
          puVar12 = &DAT_100c4c898;
          goto LAB_10045dab0;
        }
        FUN_10005241c(puVar13,FUN_10045bd80);
      }
      puVar7 = &DAT_100fc8158;
      puVar12 = &DAT_100c4cdb8;
      goto LAB_10045dab0;
    }
  }
  else {
    FUN_100011090(lVar19,lVar15,&DAT_100fc7df8,&DAT_100c4c890);
    lVar18 = lVar19 + lVar6;
    alStack_a0[1] = lVar6;
    (*pcVar17)(lVar18,1,DVar8.unknown);
    lVar6 = alStack_a0[2];
    if ((int)lVar18 != 1) {
      (**(code **)(lVar14 + 0x20))(lVar16,lVar19 + alStack_a0[1],DVar8.unknown);
      puVar13 = &DAT_100fc8168;
      FUN_100003a00(&DAT_100fc8168,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar5 = Swift::Equatable::___infix(lVar15,lVar16,DVar8.unknown,puVar13);
      pcVar17 = *(code **)(lVar14 + 8);
      (*pcVar17)(lVar16,DVar8.unknown);
      (*pcVar17)(lVar15,DVar8.unknown);
      FUN_100005808(lVar19,&DAT_100fc7df8,&DAT_100c4c890);
      lVar19 = lVar6;
      if (!bVar5) {
        return 0;
      }
      goto LAB_10045d8b4;
    }
    (**(code **)(lVar14 + 8))(lVar15,DVar8.unknown);
  }
  puVar7 = &DAT_100fc8160;
  puVar12 = &DAT_100c4cdc0;
LAB_10045dab0:
  FUN_100005808(lVar19,puVar7,puVar12);
  return 0;
}



/* Address: 0x10045dad8 | FUN_10045dad8 */

void FUN_10045dad8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7e10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cd60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cd60,&DAT_100ed6b80);
  DAT_100fc7e10 = pTVar1;
  return;
}



/* Address: 0x10045db18 | FUN_10045db18 */

void FUN_10045db18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7e20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ca48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ca48,&DAT_100ed6a60);
  DAT_100fc7e20 = pTVar1;
  return;
}



/* Address: 0x10045db58 | FUN_10045db58 */

void FUN_10045db58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7e30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e0a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e0a8,&DAT_100ed7860);
  DAT_100fc7e30 = pTVar1;
  return;
}



/* Address: 0x10045db98 | FUN_10045db98 */

void FUN_10045db98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7e50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ca20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ca20,&DAT_100ed6a60);
  DAT_100fc7e50 = pTVar1;
  return;
}



/* Address: 0x10045dbd8 | FUN_10045dbd8 */

void FUN_10045dbd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7e60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e080;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e080,&DAT_100ed7860);
  DAT_100fc7e60 = pTVar1;
  return;
}



/* Address: 0x10045dc18 | FUN_10045dc18 */

undefined4 FUN_10045dc18(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x656d616e) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x646e696b) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x646e696b,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0x4164657461657263) &&
          (param_2 == (undefined1 *)0xe900000000000074)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4164657461657263,(_StringGuts)0xe900000000000074,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0x646573557473616c) &&
          (param_2 == (undefined1 *)0xea00000000007441)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x646573557473616c,(_StringGuts)0xea00000000007441,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != (undefined1 *)0x7361486e656b6f74) ||
          (param_2 != (undefined1 *)0xe900000000000068)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7361486e656b6f74,(_StringGuts)0xe900000000000068,
                             expecting), !bVar1)) {
        if ((param_1 == (undefined1 *)0x687475616f) && (param_2 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
          return 6;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x687475616f,(_StringGuts)0xe500000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 6;
        }
        return 7;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x10045de64 | FUN_10045de64 */

undefined4 FUN_10045de64(char *param_1,void *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  String SVar5;
  undefined8 local_60;
  undefined1 *puStack_58;
  String local_50;
  void *pvVar4;
  
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1;
  SVar5 = Swift::String::lowercased(SVar5);
  pvVar4 = SVar5.bridgeObject;
  pcVar3 = SVar5.str;
  local_60 = 0x6320656475616c63;
  puStack_58 = (undefined1 *)0xeb0000000065646f;
  local_50 = SVar5;
  FUN_10045b990();
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
  if (bVar1) {
    _swift_bridgeObjectRelease(pvVar4);
    uVar2 = 1;
  }
  else {
    local_60 = 0x656475616c63;
    puStack_58 = &DAT_e600000000000000;
    local_50 = SVar5;
    bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                      (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                       PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
    if (bVar1) {
      _swift_bridgeObjectRelease(pvVar4);
      uVar2 = 0;
    }
    else {
      local_60 = 0x726f73727563;
      puStack_58 = &DAT_e600000000000000;
      local_50 = SVar5;
      bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
      if (bVar1) {
        _swift_bridgeObjectRelease(pvVar4);
        uVar2 = 3;
      }
      else {
        local_60 = 0x7865646f63;
        puStack_58 = &DAT_e500000000000000;
        local_50 = SVar5;
        bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                          (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                           PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
        if (bVar1) {
          _swift_bridgeObjectRelease(pvVar4);
          uVar2 = 2;
        }
        else {
          local_60 = 0x66727573646e6977;
          puStack_58 = &DAT_e800000000000000;
          local_50 = SVar5;
          bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                            (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                             PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
          if (bVar1) {
            _swift_bridgeObjectRelease(pvVar4);
            uVar2 = 5;
          }
          else {
            local_60 = 0x65646f63207376;
            puStack_58 = &DAT_e700000000000000;
            local_50 = SVar5;
            bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                              (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                               PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
            if (!bVar1) {
              local_60 = 0x65646f637376;
              puStack_58 = &DAT_e600000000000000;
              local_50 = SVar5;
              bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                                (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                                 PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
              if (!bVar1) {
                local_60 = 0xd000000000000012;
                puStack_58 = (undefined1 *)0x8000000100da6bd0;
                local_50 = SVar5;
                bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                                  (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                                   PTR___type_metadata_for_Swift_String_100eac208,pcVar3,pcVar3);
                _swift_bridgeObjectRelease(pvVar4);
                if (bVar1) {
                  return 4;
                }
                return 6;
              }
            }
            _swift_bridgeObjectRelease(pvVar4);
            uVar2 = 4;
          }
        }
      }
    }
  }
  return uVar2;
}



/* Address: 0x10045e118 | FUN_10045e118 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010045e154 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10045e118(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fc8150,&DAT_100c4cdb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x10045e17c | FUN_10045e17c */

void FUN_10045e17c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7eb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4cd10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4cd10,&DAT_100ed6af0);
  DAT_100fc7eb0 = pTVar1;
  return;
}


