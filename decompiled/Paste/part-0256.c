/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003187b8 | FUN_1003187b8 */

void FUN_1003187b8(undefined8 param_1)

{
  if (DAT_100fbf7e0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cac198);
  return;
}



/* Address: 0x1003187f0 | FUN_1003187f0 */

undefined1  [16] FUN_1003187f0(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1003187b8();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x18));
  auVar2 = *pauVar1;
  FUN_10011da54(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100318830 | FUN_100318830 */

undefined1  [16] FUN_100318830(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  
  lVar3 = 0;
  FUN_1003187b8();
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(lVar3 + 0x1c));
  auVar2 = *pauVar1;
  FUN_10011da54(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100318870 | FUN_100318870 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100318870(void)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  undefined *self;
  NSData *pNVar4;
  ulong uVar5;
  long unaff_x20;
  Data DVar6;
  
  lVar2 = 0;
  FUN_1003187b8();
  IVar3 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x18));
  uVar5 = puVar1[1];
  if (uVar5 >> 0x3c < 0xf) {
    DVar6.unknown = (undefined *)*puVar1;
    self = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    FUN_1001037b4(DVar6.unknown,uVar5);
    pNVar4 = Foundation::Data::_bridgeToObjectiveC(DVar6);
    IVar3 = objc_stub::initWithData_((ID)self,pNVar4);
    FUN_10003bf18(DVar6.unknown,uVar5);
  }
  return IVar3;
}



/* Address: 0x100318910 | FUN_100318910 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100318910(void)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  undefined *self;
  NSData *pNVar4;
  ulong uVar5;
  long unaff_x20;
  Data DVar6;
  
  lVar2 = 0;
  FUN_1003187b8();
  IVar3 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x1c));
  uVar5 = puVar1[1];
  if (uVar5 >> 0x3c < 0xf) {
    DVar6.unknown = (undefined *)*puVar1;
    self = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    FUN_1001037b4(DVar6.unknown,uVar5);
    pNVar4 = Foundation::Data::_bridgeToObjectiveC(DVar6);
    IVar3 = objc_stub::initWithData_((ID)self,pNVar4);
    FUN_10003bf18(DVar6.unknown,uVar5);
  }
  return IVar3;
}



/* Address: 0x1003189b0 | FUN_1003189b0 */

String FUN_1003189b0(undefined8 param_1,undefined *param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  URL UVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  URL UVar6;
  ulong uVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar13;
  char *pcVar14;
  undefined1 *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  CharacterSet in;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined8 auStack_c0 [4];
  long local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined1 *puStack_78;
  String local_70;
  URL UVar12;
  
  local_98 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_a0 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  in.unknown = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar2.unknown + -8);
  UVar12 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar17 = (long)in.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_get_host(UVar12);
  if (param_2 == (undefined *)0x0) {
    SVar18 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    local_70.bridgeObject = param_2;
    local_70.str = UVar12.unknown;
    local_80 = (char *)0x2e777777;
    puStack_78 = &DAT_e400000000000000;
    local_90 = 0;
    uStack_88 = 0xe000000000000000;
    FUN_10030cce0();
    *(undefined **)(lVar17 + -0x10) = UVar12.unknown;
    *(undefined **)(lVar17 + -8) = UVar12.unknown;
    *(undefined **)(lVar17 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined **)(lVar17 + -0x18) = UVar12.unknown;
    param_3 = (char *)0x0;
    param_4 = (void *)0x0;
    SVar18 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_80,&local_90,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease();
    UVar12.unknown = param_2;
  }
  SVar19 = Foundation::URL::get_path(UVar12);
  UVar12.unknown = SVar19.bridgeObject;
  local_70 = SVar18;
  _swift_bridgeObjectRetain(SVar18.bridgeObject);
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  puVar4 = UVar12.unknown;
  Swift::String::append(SVar19,SVar21);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  _swift_bridgeObjectRelease();
  SVar18 = local_70;
  pcVar8 = local_70.str;
  puVar5 = local_70.bridgeObject;
  Foundation::URL::_get_scheme(UVar12);
  puVar13 = (undefined1 *)0x0;
  if (puVar4 != (undefined1 *)0x0) {
    uVar3 = 0;
    puVar13 = &DAT_e400000000000000;
    pcVar14 = UVar12.unknown;
    puVar15 = puVar4;
    FUN_100318d70();
    if ((uVar3 & 1) == 0) {
      SVar19.bridgeObject = (void *)0xe300000000000000;
      SVar19.str = (char *)0x2f2f3a;
      SVar22.bridgeObject = puVar15;
      SVar22.str = pcVar14;
      local_80 = UVar12.unknown;
      puStack_78 = puVar4;
      Swift::String::append(SVar19,SVar22);
      SVar23.bridgeObject = puVar15;
      SVar23.str = pcVar14;
      puVar13 = puVar5;
      Swift::String::append(SVar18,SVar23);
      _swift_bridgeObjectRelease();
      local_70.bridgeObject = puStack_78;
      local_70.str = local_80;
      UVar12.unknown = puVar5;
      puVar5 = puStack_78;
      pcVar8 = local_80;
    }
    else {
      _swift_bridgeObjectRelease();
      UVar12.unknown = puVar4;
    }
  }
  Foundation::URL::_get_query(UVar12);
  if (puVar13 != (undefined1 *)0x0) {
    UVar6.unknown = UVar12.unknown;
    FUN_1001ab8f8();
    (**(code **)(lVar16 + 0x10))(lVar17,UVar6.unknown,UVar2.unknown);
    uVar7 = 1;
    Foundation::URL::_host(true,UVar6);
    (**(code **)(lVar16 + 8))(lVar17,UVar2.unknown);
    uVar3 = 0;
    if (UVar6.unknown != (undefined *)0x0) {
      uVar3 = uVar7;
    }
    puVar9 = (undefined *)0xe000000000000000;
    if (UVar6.unknown != (undefined *)0x0) {
      puVar9 = UVar6.unknown;
    }
    FUN_100318d70(uVar3,puVar9);
    _swift_bridgeObjectRelease(puVar9);
    if ((uVar3 & 1) == 0) {
      local_80 = (char *)0x3f;
      puStack_78 = (undefined1 *)0xe100000000000000;
      SVar20.bridgeObject = puVar13;
      SVar20.str = UVar12.unknown;
      SVar24.bridgeObject = puVar5;
      SVar24.str = pcVar8;
      Swift::String::append(SVar20,SVar24);
      _swift_bridgeObjectRelease(puVar13);
      puVar13 = puStack_78;
      SVar18.bridgeObject = puStack_78;
      SVar18.str = local_80;
      SVar25.bridgeObject = puVar5;
      SVar25.str = pcVar8;
      Swift::String::append(SVar18,SVar25);
    }
    _swift_bridgeObjectRelease(puVar13);
  }
  pcVar8 = &DAT_100fbf768;
  FUN_1000037f0(&DAT_100fbf768,&DAT_100c40ef8);
  _swift_initStaticObject();
  puVar9 = &DAT_100fbf770;
  local_80 = pcVar8;
  FUN_100003a00(&DAT_100fbf770,PTR_typeMetadataAccessor_100ea6b68,
                PTR_Foundation__Foundation__CharacterSet_>Swift__SetAlgebra_100ea6b78);
  puVar10 = &DAT_100fbf778;
  FUN_1000037f0(&DAT_100fbf778,&DAT_100c40f00);
  puVar11 = puVar10;
  FUN_100318d20();
  puVar1 = local_98;
  Swift::SetAlgebra::_init(in.unknown,&local_80,puVar10,puVar11,local_98,puVar9);
  FUN_10030cce0();
  SVar18 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  (**(code **)(local_a0 + 8))(in.unknown,puVar1);
  _swift_bridgeObjectRelease(local_70.bridgeObject);
  return SVar18;
}



/* Address: 0x100318d20 | FUN_100318d20 */

void FUN_100318d20(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbf780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbf778;
  FUN_100005c24(&DAT_100fbf778,&DAT_100c40f00);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fbf780 = puVar2;
  return;
}



/* Address: 0x100318d70 | FUN_100318d70 */

undefined8 FUN_100318d70(undefined8 param_1,undefined *param_2,undefined8 param_3,Iterator param_4)

{
  bool bVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined *puVar5;
  undefined8 uVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  
  _Var7.unknown = param_2;
  _swift_bridgeObjectRetain(param_2);
  _Var2.unknown = param_4.unknown;
  _swift_bridgeObjectRetain();
  Swift::String::Iterator::_next((Iterator)_Var2.unknown);
  do {
    if (_Var7.unknown == (undefined *)0x0) {
      puVar5 = (undefined *)0x0;
      _swift_bridgeObjectRelease();
      Swift::String::Iterator::_next(param_4);
      _swift_bridgeObjectRelease(param_2);
      if (puVar5 == (undefined *)0x0) {
LAB_100318e98:
        uVar6 = 1;
      }
      else {
LAB_100318eac:
        _swift_bridgeObjectRelease(puVar5);
        uVar6 = 0;
      }
      return uVar6;
    }
    _Var4.unknown = _Var2.unknown;
    _Var3.unknown = _Var7.unknown;
    Swift::String::Iterator::_next((Iterator)_Var2.unknown);
    if (_Var3.unknown == (undefined *)0x0) {
      _swift_bridgeObjectRelease(_Var7.unknown);
      _swift_bridgeObjectRelease(param_4.unknown);
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100318e98;
    }
    if ((_Var2.unknown == _Var4.unknown) && (_Var7.unknown == _Var3.unknown)) {
      _Var8.unknown = _Var3.unknown;
      _swift_bridgeObjectRelease(_Var7.unknown);
      _swift_bridgeObjectRelease();
    }
    else {
      _Var8.unknown = _Var7.unknown;
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var7,(_StringComparisonResult)(__int8)_Var4.unknown);
      _swift_bridgeObjectRelease(_Var7.unknown);
      _swift_bridgeObjectRelease();
      if (!bVar1) {
        _swift_bridgeObjectRelease(param_4.unknown);
        puVar5 = param_2;
        goto LAB_100318eac;
      }
    }
    Swift::String::Iterator::_next((Iterator)_Var3.unknown);
    _Var2.unknown = _Var3.unknown;
    _Var7.unknown = _Var8.unknown;
  } while( true );
}



/* Address: 0x100318ec8 | FUN_100318ec8 */

long * FUN_100318ec8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  URL UVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    UVar5 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))(param_1,param_2,UVar5.unknown);
    iVar3 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    uVar8 = puVar2[1];
    _swift_bridgeObjectRetain();
    if (uVar8 >> 0x3c < 0xf) {
      uVar7 = *puVar2;
      FUN_1001037b4(uVar7,uVar8);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
    }
    else {
      uVar7 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar7;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar8 = puVar2[1];
    if (uVar8 >> 0x3c < 0xf) {
      uVar7 = *puVar2;
      FUN_1001037b4(uVar7,uVar8);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
    }
    else {
      uVar7 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar7;
    }
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar8 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar6 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100318fd8 | FUN_100318fd8 */

void FUN_100318fd8(long param_1,long param_2)

{
  undefined8 *puVar1;
  URL UVar2;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1,UVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x14) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x18));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    FUN_10003bf2c(*puVar1);
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x1c));
  if (0xe < (ulong)puVar1[1] >> 0x3c) {
    return;
  }
  FUN_10003bf2c(*puVar1);
  return;
}



/* Address: 0x10031906c | FUN_10031906c */

long FUN_10031906c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  URL UVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_1 + iVar3);
  puVar2 = (undefined8 *)(param_2 + iVar3);
  uVar6 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (uVar6 >> 0x3c < 0xf) {
    uVar5 = *puVar2;
    FUN_1001037b4(uVar5,uVar6);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
  }
  else {
    uVar5 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar5;
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar6 = puVar2[1];
  if (uVar6 >> 0x3c < 0xf) {
    uVar5 = *puVar2;
    FUN_1001037b4(uVar5,uVar6);
    *puVar1 = uVar5;
    puVar1[1] = uVar6;
  }
  else {
    uVar5 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar5;
  }
  return param_1;
}



/* Address: 0x100319150 | FUN_100319150 */

long FUN_100319150(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  URL UVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x18))(param_1,param_2,UVar4.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar7 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (uVar7 >> 0x3c < 0xf) {
      uVar6 = *puVar2;
      FUN_1001037b4(uVar6,uVar7);
      uVar5 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      FUN_10003bf2c(uVar5,uVar3);
      goto LAB_10031923c;
    }
    FUN_10031275c(puVar1);
  }
  else if (uVar7 >> 0x3c < 0xf) {
    uVar5 = *puVar2;
    FUN_1001037b4(uVar5,uVar7);
    *puVar1 = uVar5;
    puVar1[1] = uVar7;
    goto LAB_10031923c;
  }
  uVar5 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
LAB_10031923c:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar7 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (uVar7 >> 0x3c < 0xf) {
      uVar6 = *puVar2;
      FUN_1001037b4(uVar6,uVar7);
      uVar5 = *puVar1;
      uVar3 = puVar1[1];
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      FUN_10003bf2c(uVar5,uVar3);
      return param_1;
    }
    FUN_10031275c(puVar1);
  }
  else if (uVar7 >> 0x3c < 0xf) {
    uVar5 = *puVar2;
    FUN_1001037b4(uVar5,uVar7);
    *puVar1 = uVar5;
    puVar1[1] = uVar7;
    return param_1;
  }
  uVar5 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  return param_1;
}



/* Address: 0x1003192d4 | FUN_1003192d4 */

long FUN_1003192d4(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  URL UVar4;
  undefined8 uVar5;
  
  UVar4 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x20))(param_1,param_2,UVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x18);
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  puVar2 = (undefined8 *)(param_2 + iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  return param_1;
}



/* Address: 0x100319344 | FUN_100319344 */

long FUN_100319344(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  URL UVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x28))(param_1,param_2,UVar3.unknown);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar6 = puVar2[1];
    if (uVar6 >> 0x3c < 0xf) {
      uVar5 = *puVar1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      FUN_10003bf2c(uVar5);
      goto LAB_1003193f0;
    }
    FUN_10031275c(puVar1);
  }
  uVar5 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
LAB_1003193f0:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar6 = puVar2[1];
    if (uVar6 >> 0x3c < 0xf) {
      uVar5 = *puVar1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar6;
      FUN_10003bf2c(uVar5);
      return param_1;
    }
    FUN_10031275c(puVar1);
  }
  uVar5 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar5;
  return param_1;
}



/* Address: 0x100319458 | FUN_100319458 */

void FUN_100319458(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100319464 | FUN_100319464 */

ulong FUN_100319464(ulong param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  URL UVar2;
  ulong uVar3;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  if ((int)param_2 == *(int *)(*(long *)(UVar2.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001003194b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(UVar2.unknown + -8) + 0x30))(param_1,param_2,UVar2.unknown);
    return param_1;
  }
  uVar3 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x14) + 8);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar1 = (int)uVar3 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (ulong)(uVar1 + 1);
}



/* Address: 0x1003194f0 | FUN_1003194f0 */

void FUN_1003194f0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1003194fc | FUN_1003194fc */

void FUN_1003194fc(long param_1,ulong param_2,int param_3,long param_4)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(UVar1.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100319554. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(UVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,UVar1.unknown);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x14) + 8) = param_2 & 0xffffffff;
  return;
}



/* Address: 0x100319578 | FUN_100319578 */

undefined1  [16] FUN_100319578(long param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_40 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_38 = &DAT_100c40f28;
    local_30 = &DAT_100c40f40;
    puStack_28 = &DAT_100c40f40;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
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



/* Address: 0x1003195f4 | FUN_1003195f4 */

bool FUN_1003195f4(long param_1,Data param_2,__int64 param_3)

{
  char *pcVar1;
  code *pcVar2;
  bool bVar3;
  Iterator IVar4;
  long extraout_x8;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_60 [14];
  char local_52;
  char local_51;
  
  IVar4 = Foundation::Data::Iterator::typeMetadataAccessor();
  lVar7 = *(long *)(IVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  FUN_1001037b4(param_2.unknown,param_3);
  Foundation::Data::Iterator::init(param_2,param_3);
  FUN_100003a00(&DAT_100fbf840,PTR_typeMetadataAccessor_100ea72c8,
                PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8);
  uVar6 = 0;
  do {
    Swift::IteratorProtocol::_next();
    if (local_51 == '\x01') {
      (**(code **)(lVar7 + 8))
                (auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar4.unknown);
      if (*(ulong *)(param_1 + 0x10) == uVar6) {
        return true;
      }
      if (uVar6 < *(ulong *)(param_1 + 0x10)) {
        return false;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100319778);
      (*pcVar2)();
    }
    uVar5 = *(ulong *)(param_1 + 0x10);
    bVar3 = uVar6 == uVar5;
    if (bVar3) break;
    if (uVar5 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100319774);
      (*pcVar2)();
    }
    pcVar1 = (char *)(param_1 + 0x20 + uVar6);
    uVar6 = uVar6 + 1;
  } while (local_52 == *pcVar1);
  (**(code **)(lVar7 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar4.unknown);
  return bVar3;
}



/* Address: 0x100319778 | FUN_100319778 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100319778(undefined8 param_1,_ArrayBuffer param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined *puVar4;
  URL UVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  __int64 _Var9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  long extraout_x12;
  CharacterSet in;
  code *pcVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SStack_170;
  code *local_160;
  long local_158;
  undefined8 local_150;
  ulong *local_148;
  undefined8 local_140;
  long local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  ulong local_c8;
  long lStack_c0;
  undefined8 local_b0;
  void *pvStack_a8;
  
  local_150 = param_3;
  local_120 = param_4;
  local_148 = (ulong *)Foundation::CharacterSet::typeMetadataAccessor();
  lVar13 = *(long *)((long)local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  in.unknown = (undefined *)((long)&SStack_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)in.unknown - extraout_x8_00;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar5.unknown + -8);
  lVar17 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar16 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  local_158 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12;
  lVar6 = 0;
  local_130 = lVar11;
  FUN_1003187b8();
  local_128 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  lVar11 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    if (*(long *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10) == 0) goto LAB_100319c8c;
LAB_1003198e0:
    local_140 = param_1;
    local_138 = lVar6;
    if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100319d24);
        (*pcVar12)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(0,param_2);
    }
    FUN_10037ce0c(lVar16);
    lVar6 = lVar16;
    (**(code **)(lVar15 + 0x30))(lVar16,1,UVar5.unknown);
    if ((int)lVar6 != 1) {
      pcVar12 = *(code **)(lVar15 + 0x20);
      (*pcVar12)(local_130,lVar16,UVar5.unknown);
      local_160 = pcVar12;
      if (((ulong)param_2.unknown & 0xc000000000000001) != 0) {
        Swift::_ArrayBuffer::__getElementSlowPath(0,param_2);
      }
      lVar6 = local_138;
      _swift_bridgeObjectRelease(param_2.unknown);
      uVar7 = 0x752e63696c627570;
      lVar16 = -0x109a929e91d2938e;
      FUN_10037e4b8();
      if (lVar16 == 0) {
        SVar18.bridgeObject = (void *)0x0;
        SVar18.str = (char *)uVar7;
      }
      else {
        local_c8 = uVar7;
        lStack_c0 = lVar16;
        Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)0x0);
        FUN_10030cce0();
        SVar18 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
        (**(code **)(lVar13 + 8))(in.unknown,local_148);
        _swift_bridgeObjectRelease(lVar16);
      }
      lVar13 = local_130;
      pcVar12 = *(code **)(lVar15 + 0x10);
      (*pcVar12)(lVar11,local_130,UVar5.unknown);
      *(String *)(lVar11 + *(int *)(lVar6 + 0x14)) = SVar18;
      puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar6 + 0x18));
      puVar2[1] = 0xf000000000000000;
      *puVar2 = 0;
      puVar2 = (undefined8 *)(lVar11 + *(int *)(lVar6 + 0x1c));
      puVar2[1] = 0xf000000000000000;
      *puVar2 = 0;
      puVar4 = &DAT_100c40f58;
      _swift_getKeyPath(&DAT_100c40f58);
      FUN_1000037f0(&DAT_100fbeac8,&DAT_100c409b0);
      _swift_initStackObject();
      FUN_1000da6e0(puVar4);
      FUN_1000da768(&local_c8);
      _swift_release(puVar4);
      lVar16 = lStack_c0;
      uVar7 = local_c8;
      uVar14 = local_c8;
      _swift_getObjectType();
      (**(code **)(lVar16 + 8))();
      _swift_unknownObjectRelease(uVar7);
      if ((uVar14 & 1) == 0) {
        (**(code **)(lVar15 + 8))(lVar13,UVar5.unknown);
        _swift_release(local_120);
      }
      else {
        puVar4 = &DAT_100c40f80;
        _swift_getKeyPath(&DAT_100c40f80);
        FUN_1000037f0(&DAT_100fbf820,&DAT_100c40fa8);
        _swift_initStackObject();
        FUN_1000da6e0(puVar4);
        FUN_1000da768(&local_c8);
        _swift_release(puVar4);
        SStack_170.bridgeObject = pvStack_a8;
        puVar8 = &local_c8;
        FUN_100004640(puVar8,local_b0);
        lVar6 = local_158;
        local_148 = puVar8;
        (*pcVar12)(local_158,lVar13,UVar5.unknown);
        uVar7 = (ulong)*(byte *)(lVar15 + 0x50);
        uVar14 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
        puVar4 = &DAT_100eca710;
        _swift_allocObject(&DAT_100eca710,uVar14 + lVar17,uVar7 | 7);
        uVar10 = local_120;
        *(undefined8 *)(puVar4 + 0x10) = local_150;
        *(undefined8 *)(puVar4 + 0x18) = local_120;
        (*local_160)(puVar4 + uVar14,lVar6,UVar5.unknown);
        pvVar3 = SStack_170.bridgeObject;
        pcVar12 = *(code **)((long)SStack_170.bridgeObject + 8);
        _swift_retain(uVar10);
        (*pcVar12)(lVar13,FUN_100319f60,puVar4,local_b0,pvVar3);
        _swift_release(uVar10);
        lVar6 = local_138;
        _swift_release(puVar4);
        (**(code **)(lVar15 + 8))(lVar13,UVar5.unknown);
        FUN_100004594(&local_c8);
      }
      lVar13 = local_128;
      param_1 = local_140;
      FUN_100319e98(lVar11,local_140);
      uVar10 = 0;
      goto LAB_100319cdc;
    }
    _swift_release(local_120);
    _swift_bridgeObjectRelease(param_2.unknown);
    param_1 = local_140;
    lVar6 = local_138;
  }
  else {
    _Var1.unknown = param_2.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (_Var9 != 0) goto LAB_1003198e0;
LAB_100319c8c:
    _swift_bridgeObjectRelease(param_2.unknown);
    _swift_release(local_120);
    (**(code **)(lVar15 + 0x38))(lVar16,1,1,UVar5.unknown);
  }
  FUN_100005808(lVar16,&DAT_100fc1a40,&DAT_100c40660);
  uVar10 = 1;
  lVar13 = local_128;
LAB_100319cdc:
  (**(code **)(lVar13 + 0x38))(param_1,uVar10,1,lVar6);
  return;
}



/* Address: 0x100319d24 | FUN_100319d24 */

void FUN_100319d24(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  URL UVar3;
  long extraout_x8;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long alStack_b0 [6];
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar4 = (long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lStack_78 = param_1[1];
  if (lStack_78 != 1) {
    uVar5 = *param_1;
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(lVar4,param_4,UVar3.unknown);
    uVar7 = param_1[3];
    uVar6 = param_1[2];
    uVar9 = param_1[5];
    uVar8 = param_1[4];
    puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar2 + 0x14));
    local_80 = uVar5;
    local_70 = uVar6;
    uStack_68 = uVar7;
    uStack_60 = uVar8;
    uStack_58 = uVar9;
    puVar1[1] = lStack_78;
    *puVar1 = uVar5;
    puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar2 + 0x18));
    puVar1[1] = uVar7;
    *puVar1 = uVar6;
    puVar1 = (undefined8 *)(lVar4 + *(int *)(lVar2 + 0x1c));
    puVar1[1] = uVar9;
    *puVar1 = uVar8;
    FUN_100011090(param_1,alStack_b0,&DAT_100fbf828,&DAT_100c40fb0);
    FUN_100011090(&local_80,alStack_b0,&DAT_100fbf830,&DAT_100c40fb8);
    FUN_100011090(&local_70,alStack_b0,&DAT_100fbf838,&DAT_100c43280);
    FUN_100011090(&uStack_60,alStack_b0,&DAT_100fbf838,&DAT_100c43280);
    (*param_2)(lVar4);
    FUN_100005808(param_1,&DAT_100fbf828,&DAT_100c40fb0);
    FUN_100319fa0(lVar4);
  }
  return;
}



/* Address: 0x100319e94 | thunk_FUN_10030d7c0 */

void thunk_FUN_10030d7c0(void)

{
  FUN_10030d7c0();
  return;
}



/* Address: 0x100319e98 | FUN_100319e98 */

undefined8 FUN_100319e98(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003187b8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100319edc | FUN_100319edc */

void FUN_100319edc(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &DAT_100eca690;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100eca6a0;
  return;
}



/* Address: 0x100319ef4 | FUN_100319ef4 */

void FUN_100319ef4(void)

{
  URL UVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x100319f60 | FUN_100319f60 */

void FUN_100319f60(undefined8 param_1)

{
  URL UVar1;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_100319d24(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) + 0x20 &
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100319fa0 | FUN_100319fa0 */

undefined8 FUN_100319fa0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003187b8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100319fdc | FUN_100319fdc */

undefined8 FUN_100319fdc(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Address: 0x100319fe4 | FUN_100319fe4 */

void FUN_100319fe4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  AttributedString AVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_10031a030();
  iVar1 = *(int *)(lVar2 + 0x14);
  AVar3 = Foundation::AttributedString::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010031a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(AVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,AVar3.unknown);
  return;
}



/* Address: 0x10031a030 | FUN_10031a030 */

void FUN_10031a030(undefined8 param_1)

{
  if (DAT_100fbf8a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cac1c0);
  return;
}



/* Address: 0x10031a068 | FUN_10031a068 */

long * FUN_10031a068(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  AttributedString AVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    iVar2 = *(int *)(param_3 + 0x14);
    AVar3 = Foundation::AttributedString::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar3.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,AVar3.unknown);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10031a0ec | FUN_10031a0ec */

void FUN_10031a0ec(long param_1,long param_2)

{
  int iVar1;
  AttributedString AVar2;
  
  iVar1 = *(int *)(param_2 + 0x14);
  AVar2 = Foundation::AttributedString::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010031a120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(AVar2.unknown + -8) + 8))(param_1 + iVar1,AVar2.unknown);
  return;
}



/* Address: 0x10031a124 | FUN_10031a124 */

undefined8 * FUN_10031a124(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  AttributedString AVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  AVar2 = Foundation::AttributedString::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x10))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,AVar2.unknown);
  return param_1;
}



/* Address: 0x10031a17c | FUN_10031a17c */

undefined8 * FUN_10031a17c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  AttributedString AVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  AVar2 = Foundation::AttributedString::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,AVar2.unknown);
  return param_1;
}



/* Address: 0x10031a1d4 | FUN_10031a1d4 */

undefined8 * FUN_10031a1d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  AttributedString AVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  AVar2 = Foundation::AttributedString::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,AVar2.unknown);
  return param_1;
}



/* Address: 0x10031a22c | FUN_10031a22c */

undefined8 * FUN_10031a22c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  AttributedString AVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  AVar2 = Foundation::AttributedString::typeMetadataAccessor();
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,AVar2.unknown);
  return param_1;
}



/* Address: 0x10031a284 | FUN_10031a284 */

void FUN_10031a284(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10031a290 | FUN_10031a290 */

void FUN_10031a290(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  AttributedString AVar2;
  
  iVar1 = *(int *)(param_3 + 0x14);
  AVar2 = Foundation::AttributedString::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010031a2d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x30))(param_1 + iVar1,param_2,AVar2.unknown);
  return;
}



/* Address: 0x10031a2d8 | FUN_10031a2d8 */

void FUN_10031a2d8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10031a2e4 | FUN_10031a2e4 */

void FUN_10031a2e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  AttributedString AVar2;
  
  iVar1 = *(int *)(param_4 + 0x14);
  AVar2 = Foundation::AttributedString::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010031a32c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(AVar2.unknown + -8) + 0x38))(param_1 + iVar1,param_2,param_2,AVar2.unknown)
  ;
  return;
}



/* Address: 0x10031a330 | FUN_10031a330 */

undefined1  [16] FUN_10031a330(long param_1,ulong param_2)

{
  AttributedString AVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_30;
  long local_28;
  
  local_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  AVar1 = Foundation::AttributedString::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(AVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
    AVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = AVar1.unknown;
  return auVar3;
}



/* Address: 0x10031a3a8 | FUN_10031a3a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10031a3a8(ID param_1,_ArrayBuffer param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  UTType UVar6;
  UTType UVar7;
  UTType UVar8;
  undefined *puVar9;
  NSAttributedString *self;
  undefined *puVar10;
  void *aBlock;
  undefined *puVar11;
  ID IVar12;
  NSAttributedString *pNVar13;
  NSString *pNVar14;
  long extraout_x8;
  ulong uVar15;
  ID *pIVar16;
  ID IVar17;
  ulong uVar18;
  ID local_a0 [2];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar3 = 0;
  FUN_10031a030();
  IVar17 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(IVar17 + 0x40));
  pIVar16 = (ID *)((long)local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_2.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(param_2.unknown);
  }
  else {
    local_a0[1] = IVar17;
    if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a7d8);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(param_2.unknown + 0x20);
    }
    else {
      uVar5 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,param_2);
    }
    _swift_bridgeObjectRelease(param_2.unknown);
    UVar6.unknown = &DAT_100fbf8d8;
    FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
    UVar7 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
    uVar15 = (ulong)*(byte *)(*(long *)(UVar7.unknown + -8) + 0x50);
    uVar18 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
    _swift_allocObject(UVar6.unknown,uVar18 + *(long *)(*(long *)(UVar7.unknown + -8) + 0x48) * 3,
                       uVar15 | 7);
    *(undefined8 *)(UVar6.unknown + 0x18) = 6;
    *(undefined8 *)(UVar6.unknown + 0x10) = 3;
    UVar8 = UniformTypeIdentifiers::UTType::get_flatRTFD(UVar6);
    UVar8 = UniformTypeIdentifiers::UTType::get_rtfd(UVar8);
    UniformTypeIdentifiers::UTType::get_rtf(UVar8);
    UVar8.unknown = UVar6.unknown;
    FUN_10037ebdc(UVar6.unknown,uVar5);
    _swift_setDeallocating(UVar6.unknown);
    _swift_arrayDestroy(UVar6.unknown + uVar18,3,UVar7.unknown);
    lVar4 = 0x20;
    _swift_deallocClassInstance(UVar6.unknown,0x20,7);
    if (UVar8.unknown != (undefined *)0x0) {
      puVar9 = &_OBJC_CLASS___NSMutableAttributedString;
      local_a0[0] = param_1;
      _objc_allocWithZone();
      self = (NSAttributedString *)objc_stub::initWithAttributedString_((ID)puVar9,UVar8.unknown);
      IVar17 = objc_stub::length((ID)UVar8.unknown);
      puVar9 = &DAT_100eca738;
      _swift_allocObject(&DAT_100eca738,0x18,7);
      *(NSAttributedString **)(puVar9 + 0x10) = self;
      puVar10 = &DAT_100eca760;
      _swift_allocObject(&DAT_100eca760,0x20,7);
      *(code **)(puVar10 + 0x10) = FUN_100309b24;
      *(undefined **)(puVar10 + 0x18) = puVar9;
      local_70 = FUN_100215f00;
      local_90 = PTR___NSConcreteStackBlock_100ea82a0;
      local_88 = 0x42000000;
      local_80 = FUN_100309738;
      puStack_78 = &DAT_100eca778;
      local_68 = puVar10;
      aBlock = __Block_copy(&local_90);
      puVar11 = local_68;
      _swift_retain(puVar10);
      _swift_release(puVar11);
      objc_stub::enumerateAttributesInRange_options_usingBlock_((ID)self,0,IVar17,0,aBlock);
      __Block_release(aBlock);
      puVar11 = puVar10;
      _swift_isEscapingClosureAtFileLocation(puVar10,"",0x9e,0x25,0x45,1);
      _swift_release(puVar9);
      _swift_release(puVar10);
      param_1 = local_a0[0];
      if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10031a7dc);
        (*pcVar2)();
      }
LAB_10031a648:
      IVar17 = local_a0[1];
      IVar12 = objc_stub::length((ID)self);
      if ((long)IVar12 < 0x1f5) {
        IVar12 = objc_stub::length((ID)self);
        Foundation::AttributedString::init(self);
      }
      else {
        pNVar13 = (NSAttributedString *)objc_stub::FUN_100bfe260((ID)self,0,500);
        IVar12 = objc_stub::length((ID)self);
        Foundation::AttributedString::init(pNVar13);
      }
      *pIVar16 = IVar12;
      FUN_10031a7dc(pIVar16,param_1);
      (**(code **)(IVar17 + 0x38))(param_1,0,1,lVar3);
      return;
    }
    FUN_10037c9a8();
    IVar17 = local_a0[1];
    if (lVar4 != 0) {
      puVar9 = &_OBJC_CLASS___NSAttributedString;
      _objc_allocWithZone();
      pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar4);
      self = (NSAttributedString *)objc_stub::initWithString_((ID)puVar9,pNVar14);
      IVar17 = local_a0[1];
      if (self != (NSAttributedString *)0x0) goto LAB_10031a648;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010031a7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(IVar17 + 0x38))(param_1,1,1,lVar3);
  return;
}



/* Address: 0x10031a7dc | FUN_10031a7dc */

undefined8 FUN_10031a7dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10031a030();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10031a820 | FUN_10031a820 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10031a820(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10031a844 | FUN_10031a844 */

void FUN_10031a844(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10031a854 | FUN_10031a854 */

void FUN_10031a854(long param_1,long param_2)

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



/* Address: 0x10031a868 | FUN_10031a868 */

void FUN_10031a868(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10031a870 | FUN_10031a870 */

uint FUN_10031a870(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      if ((param_2 & 0xff000000000000) == 0) goto LAB_10031a8d4;
      lVar2 = 0;
    }
    else {
      lVar2 = (long)(int)param_1;
      if (lVar2 == param_1 >> 0x20) goto LAB_10031a8d4;
    }
LAB_10031a8ac:
    __Foundation_Data__Representation_subscript_getter____Swift_Int___>_Swift_UInt8(lVar2);
    uVar1 = (uint)lVar2;
    iVar4 = 0;
  }
  else {
    if (uVar3 == 2) {
      lVar2 = *(long *)(param_1 + 0x10);
      if (lVar2 != *(long *)(param_1 + 0x18)) goto LAB_10031a8ac;
    }
LAB_10031a8d4:
    uVar1 = 0;
    iVar4 = 1;
  }
  return uVar1 & 0xff | iVar4 << 8;
}



/* Address: 0x10031a8e8 | FUN_10031a8e8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010031aa74) */
/* WARNING: Removing unreachable block (ram,0x00010031ab10) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010031ab08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10031a8e8(_ArrayBuffer param_1)

{
  __DataStorage *p_Var1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  PropertyListEncoder *pPVar6;
  Data DVar7;
  JSONEncoder *pJVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  long lVar12;
  __DataStorage *p_Var13;
  NSData *pNVar14;
  _ArrayBuffer _Var15;
  __DataStorage *p_Var16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 uVar19;
  ID unaff_x20;
  Data DVar20;
  long lVar21;
  __int64 _Var22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  __DataStorage local_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_1000da768(&local_98);
  _swift_beginAccess(local_98 + 0x10,auStack_88,0,0);
  uVar26 = *(undefined8 *)(local_98 + 0x18);
  uVar24 = *(undefined8 *)(local_98 + 0x10);
  uStack_b8 = *(undefined8 *)(local_98 + 0x28);
  uVar27 = *(undefined8 *)(local_98 + 0x20);
  uStack_a8 = *(undefined8 *)(local_98 + 0x38);
  uVar25 = *(undefined8 *)(local_98 + 0x30);
  uVar19 = *(undefined8 *)(local_98 + 0x40);
  local_d0 = uVar24;
  uStack_c8 = uVar26;
  local_c0 = uVar27;
  local_b0 = uVar25;
  local_a0 = uVar19;
  _swift_retain(uVar24);
  _swift_retain(uVar26);
  _swift_retain(uVar27);
  _swift_retain(uVar25);
  _swift_retain(uVar19);
  FUN_1000037f0(&DAT_100fbe4a0,&DAT_100c444c0);
  FUN_1002ca7e0(local_e8);
  _swift_release(uVar19);
  _swift_release(uVar25);
  _swift_release(uVar27);
  _swift_release(uVar26);
  _swift_release(uVar24);
  _swift_release(local_98);
  local_98 = param_1.unknown;
  if (local_e8[0] == (__DataStorage)0x1) {
    pPVar6 = Foundation::PropertyListEncoder::typeMetadataAccessor();
    _swift_allocObject(pPVar6,*(undefined4 *)(pPVar6 + 0x30),*(undefined2 *)(pPVar6 + 0x34));
    pPVar6 = Foundation::PropertyListEncoder::init(pPVar6);
    Foundation::PropertyListEncoder::set_outputFormat(pPVar6,(NSPropertyListFormat)0xc8);
    puVar9 = &DAT_100fc1b90;
    FUN_1000037f0(&DAT_100fc1b90,&DAT_100c43c60);
    FUN_10031bb70(&DAT_100fbf920,&DAT_100fbf928,&TargetProtocolConformanceDescriptor_100c43a60,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    DVar7 = Foundation::PropertyListEncoder::_encode();
    _Var15.unknown = puVar9;
    _swift_release(pPVar6);
    uVar17 = 0x801;
  }
  else {
    pJVar8 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar8,*(undefined4 *)(pJVar8 + 0x30),*(undefined2 *)(pJVar8 + 0x34));
    pJVar8 = Foundation::JSONEncoder::init(pJVar8);
    puVar9 = &DAT_100fc1b90;
    FUN_1000037f0(&DAT_100fc1b90,&DAT_100c43c60);
    puVar10 = &DAT_100fbf920;
    FUN_10031bb70(&DAT_100fbf920,&DAT_100fbf928,&TargetProtocolConformanceDescriptor_100c43a60,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    DVar7 = Foundation::JSONEncoder::_encode(pJVar8,puVar10,puVar9,puVar10);
    _Var15.unknown = puVar9;
    _swift_release(pJVar8);
    uVar17 = 0x205;
  }
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    _Var22 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    _Var22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (_Var22 != 0) {
    uVar23 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10031aec0);
          (*pcVar5)();
        }
        uVar11 = *(ulong *)(param_1.unknown + uVar23 * 8 + 0x20);
      }
      else {
        uVar11 = uVar23;
        _Var15.unknown = param_1.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar23,param_1);
      }
      lVar12 = uVar23 + 1;
      if (SCARRY8(uVar23,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10031aebc);
        (*pcVar5)();
      }
      FUN_10037d5c4();
      if ((ulong)_Var15.unknown >> 0x3c < 0xf) {
        FUN_10011da54(uVar11,_Var15.unknown);
        _swift_bridgeObjectRelease(param_1.unknown);
        FUN_10003bf18(uVar11,_Var15.unknown);
        FUN_10003bf18(uVar11,_Var15.unknown);
        FUN_10003bf18(0,0xf000000000000000);
        pNVar14 = Foundation::Data::_bridgeToObjectiveC(DVar7);
        goto LAB_10031ae60;
      }
      FUN_10003bf18(uVar11);
      uVar23 = uVar23 + 1;
    } while (lVar12 != _Var22);
  }
  _swift_bridgeObjectRelease();
  uVar4 = (uint)((ulong)puVar9 >> 0x20);
  uVar18 = uVar4 >> 0x1e;
  if (uVar18 < 2) {
    if (uVar4 >> 0x1e != 0) {
      lVar21 = (long)(int)DVar7.unknown;
      lVar12 = ((long)DVar7.unknown >> 0x20) - lVar21;
      if ((long)DVar7.unknown >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10031aedc);
        (*pcVar5)();
      }
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)puVar9 & 0x3fffffffffffffff),
                 (__DataStorage *)param_1.unknown);
      if ((__DataStorage *)param_1.unknown == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)((ulong)puVar9 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        p_Var13 = (__DataStorage *)0x0;
        p_Var16 = (__DataStorage *)0x0;
      }
      else {
        p_Var13 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)puVar9 & 0x3fffffffffffffff),
                             (__DataStorage *)param_1.unknown);
        if (SBORROW8(lVar21,(long)p_Var13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10031aee8);
          (*pcVar5)();
        }
        p_Var1 = (__DataStorage *)(param_1.unknown + (lVar21 - (long)p_Var13));
        lVar21 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)((ulong)puVar9 & 0x3fffffffffffffff),p_Var13);
        if (lVar12 <= lVar21) {
          lVar21 = lVar12;
        }
        p_Var13 = (__DataStorage *)0x0;
        if (p_Var1 != (__DataStorage *)0x0) {
          p_Var13 = p_Var1;
        }
        p_Var16 = (__DataStorage *)0x0;
        if (p_Var1 != (__DataStorage *)0x0) {
          p_Var16 = p_Var1 + lVar21;
        }
      }
      FUN_10030f5c8(&local_98,p_Var13,p_Var16,DVar7.unknown,puVar9,uVar17);
      goto LAB_10031ae18;
    }
    local_e8[0] = SUB81(DVar7.unknown,0);
    local_e8[1] = SUB81((ulong)DVar7.unknown >> 8,0);
    local_e8[2] = SUB81((ulong)DVar7.unknown >> 0x10,0);
    local_e8[3] = SUB81((ulong)DVar7.unknown >> 0x18,0);
    local_e8[4] = SUB81((ulong)DVar7.unknown >> 0x20,0);
    local_e8[5] = SUB81((ulong)DVar7.unknown >> 0x28,0);
    local_e8[6] = SUB81((ulong)DVar7.unknown >> 0x30,0);
    local_e8[7] = SUB81((ulong)DVar7.unknown >> 0x38,0);
    local_e8[8] = SUB81(puVar9,0);
    local_e8[9] = SUB81((ulong)puVar9 >> 8,0);
    local_e8[10] = SUB81((ulong)puVar9 >> 0x10,0);
    local_e8[0xb] = SUB81((ulong)puVar9 >> 0x18,0);
    local_e8[0xc] = SUB81((ulong)puVar9 >> 0x20,0);
    local_e8[0xd] = SUB81((ulong)puVar9 >> 0x28,0);
    param_1.unknown = local_e8;
    p_Var13 = local_e8 + ((ulong)puVar9 >> 0x30 & 0xff);
  }
  else if (uVar18 == 2) {
    lVar12 = *(long *)(DVar7.unknown + 0x10);
    lVar21 = *(long *)(DVar7.unknown + 0x18);
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)puVar9 & 0x3fffffffffffffff),
               (__DataStorage *)param_1.unknown);
    p_Var13 = (__DataStorage *)0x0;
    if ((__DataStorage *)param_1.unknown != (__DataStorage *)0x0) {
      p_Var13 = (__DataStorage *)
                Foundation::__DataStorage::get__offset
                          ((__DataStorage *)((ulong)puVar9 & 0x3fffffffffffffff),
                           (__DataStorage *)param_1.unknown);
      if (SBORROW8(lVar12,(long)p_Var13)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10031aee4);
        (*pcVar5)();
      }
      param_1.unknown = param_1.unknown + (lVar12 - (long)p_Var13);
    }
    lVar3 = lVar21 - lVar12;
    if (SBORROW8(lVar21,lVar12)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10031aee0);
      (*pcVar5)();
    }
    lVar12 = Foundation::__DataStorage::get__length
                       ((__DataStorage *)((ulong)puVar9 & 0x3fffffffffffffff),p_Var13);
    if (lVar3 <= lVar12) {
      lVar12 = lVar3;
    }
    p_Var13 = (__DataStorage *)0x0;
    if ((__DataStorage *)param_1.unknown != (__DataStorage *)0x0) {
      p_Var13 = (__DataStorage *)(param_1.unknown + lVar12);
    }
  }
  else {
    local_e8[8] = (__DataStorage)0x0;
    local_e8[9] = (__DataStorage)0x0;
    local_e8[10] = (__DataStorage)0x0;
    local_e8[0xb] = (__DataStorage)0x0;
    local_e8[0xc] = (__DataStorage)0x0;
    local_e8[0xd] = (__DataStorage)0x0;
    local_e8[0] = (__DataStorage)0x0;
    local_e8[1] = (__DataStorage)0x0;
    local_e8[2] = (__DataStorage)0x0;
    local_e8[3] = (__DataStorage)0x0;
    local_e8[4] = (__DataStorage)0x0;
    local_e8[5] = (__DataStorage)0x0;
    local_e8[6] = (__DataStorage)0x0;
    local_e8[7] = (__DataStorage)0x0;
    param_1.unknown = local_e8;
    p_Var13 = local_e8;
  }
  FUN_10030f5c8(&local_98,param_1.unknown,p_Var13,DVar7.unknown,puVar9,uVar17);
LAB_10031ae18:
  DVar20.unknown = local_98;
  if (0xe < (ulong)local_90 >> 0x3c) {
    FUN_1001037b4(DVar7.unknown,puVar9);
    local_90 = puVar9;
    DVar20.unknown = DVar7.unknown;
  }
  pNVar14 = Foundation::Data::_bridgeToObjectiveC(DVar20);
  FUN_10003bf2c(DVar20.unknown,local_90);
LAB_10031ae60:
  objc_stub::setRawPasteboardItems_(unaff_x20,pNVar14);
  FUN_10003bf2c(DVar7.unknown,puVar9);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10031aeec | FUN_10031aeec */

void FUN_10031aeec(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  PropertyListDecoder *pPVar4;
  Data DVar5;
  JSONDecoder *pJVar6;
  ulong uVar7;
  long unaff_x21;
  undefined *local_48;
  
  puVar1 = &DAT_100fbf960;
  FUN_1000037f0(&DAT_100fbf960,&DAT_100c41058);
  puVar2 = puVar1;
  _swift_initStaticObject();
  FUN_1003195f4();
  uVar7 = param_2;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = puVar1;
    _swift_initStaticObject(puVar1,&DAT_100fbf970);
    FUN_1003195f4();
    if (((ulong)puVar2 & 1) == 0) {
      uVar3 = param_2;
      FUN_10031a870(param_2,param_3);
      if ((((uint)uVar3 & 0xff00) == 0x100) || (((uint)uVar3 & 0xff) != 0x5b)) {
        uVar3 = param_2;
        FUN_10031a870(param_2,param_3);
        if ((((uint)uVar3 & 0xff00) == 0x100) || (((uint)uVar3 & 0xff) != 0x7b)) {
          uVar3 = 0x205;
          FUN_10030f6e8(0x205,param_2,param_3);
          if (uVar7 >> 0x3c < 0xf) goto LAB_10031b000;
        }
      }
    }
LAB_10031aff4:
    FUN_1001037b4(param_2,param_3);
    uVar7 = param_3;
    uVar3 = param_2;
  }
  else {
    uVar3 = 0x801;
    FUN_10030f6e8(0x801,param_2,param_3);
    if (0xe < uVar7 >> 0x3c) goto LAB_10031aff4;
  }
LAB_10031b000:
  _swift_initStaticObject(puVar1,&DAT_100fbf9a0);
  FUN_1003195f4();
  if (((ulong)puVar1 & 1) != 0) {
    pPVar4 = Foundation::PropertyListDecoder::typeMetadataAccessor();
    _swift_allocObject(pPVar4,*(undefined4 *)(pPVar4 + 0x30),*(undefined2 *)(pPVar4 + 0x34));
    pPVar4 = Foundation::PropertyListDecoder::init(pPVar4);
    DVar5.unknown = &DAT_100fc1b90;
    FUN_1000037f0(&DAT_100fc1b90,&DAT_100c43c60);
    FUN_10031bb70(&DAT_100fbf9c8,&DAT_100fbf9d0,&TargetProtocolConformanceDescriptor_100c43a38,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Foundation::PropertyListDecoder::_decode(pPVar4,DVar5);
    if (unaff_x21 == 0) {
      FUN_10003bf2c(uVar3,uVar7);
      _swift_release(pPVar4);
      goto LAB_10031b1a0;
    }
    _swift_errorRelease();
    _swift_release(pPVar4);
    unaff_x21 = 0;
  }
  pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
  _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
  pJVar6 = Foundation::JSONDecoder::init(pJVar6);
  DVar5.unknown = &DAT_100fc1b90;
  FUN_1000037f0(&DAT_100fc1b90,&DAT_100c43c60);
  FUN_10031bb70(&DAT_100fbf9c8,&DAT_100fbf9d0,&TargetProtocolConformanceDescriptor_100c43a38,
                PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
  Foundation::JSONDecoder::_decode(pJVar6,DVar5);
  if (unaff_x21 == 0) {
    _swift_release(pJVar6);
    FUN_10003bf2c(uVar3,uVar7);
  }
  else {
    _swift_errorRelease(unaff_x21);
    _swift_release(pJVar6);
    FUN_10003bf2c(uVar3,uVar7);
    local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
LAB_10031b1a0:
  *param_1 = local_48;
  return;
}



/* Address: 0x10031b1bc | FUN_10031b1bc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10031b1bc(undefined8 *param_1,ID param_2)

{
  Data DVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  
  DVar1.unknown = (undefined *)objc_stub::FUN_100c08760(param_2);
  uVar2 = extraout_x1;
  DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
  *param_1 = DVar1.unknown;
  param_1[1] = uVar2;
  return 0;
}



/* Address: 0x10031b218 | FUN_10031b218 */

/* WARNING: Removing unreachable block (ram,0x00010031b254) */

undefined8 FUN_10031b218(void)

{
  code *pcVar1;
  undefined8 local_90 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  
  pcVar1 = FUN_10031bc34;
  FUN_1002ffc68(&local_60,FUN_10031bc34,local_90);
  __objc_autoreleasePoolPush();
  FUN_10031aeec(local_90,local_60,uStack_58);
  __objc_autoreleasePoolPop(pcVar1);
  FUN_10003bf2c(local_60,uStack_58);
  return local_90[0];
}



/* Address: 0x10031b440 | _TtC9PasteCore14ItemDataEntity::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore14ItemDataEntity::initWithEntity_insertIntoManagedObjectContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithEntity:insertIntoManagedObjectContext:",param_3,
                              param_4);
  return IVar2;
}



/* Address: 0x10031b494 | _TtC9PasteCore14ItemDataEntity::.cxx_construct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore14ItemDataEntity::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0x617461446d657449;
  FUN_1000d4624(0x617461446d657449,0xee00797469746e45);
  *(undefined8 *)(param_1 + lVar1) = uVar2;
  lVar1 = telemetry;
  puVar3 = &DAT_100c41000;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(param_1 + lVar1) = puVar3;
  lVar1 = itemSerializationFormat;
  puVar3 = &DAT_100c41030;
  _swift_getKeyPath();
  puVar4 = &DAT_100fbf5f8;
  FUN_1000037f0(&DAT_100fbf5f8,&DAT_100c40d00);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(param_1 + lVar1) = puVar3;
  return;
}



/* Address: 0x10031b59c | _TtC9PasteCore14ItemDataEntity::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore14ItemDataEntity::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + logger));
  _swift_release(*(undefined8 *)(param_1 + telemetry));
  _swift_release(*(undefined8 *)(param_1 + itemSerializationFormat));
  return;
}



/* Address: 0x10031b5e4 | FUN_10031b5e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10031b5e4(void)

{
  return ZEXT816(0x100f97ce0);
}



/* Address: 0x10031b604 | FUN_10031b604 */

void FUN_10031b604(undefined8 param_1,__DataStorage *param_2,undefined8 param_3,long param_4,
                  ulong param_5)

{
  long lVar1;
  size_t sVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  __DataStorage *p_Var7;
  __DataStorage *p_Var8;
  size_t sVar9;
  uint uVar10;
  long lVar11;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)(param_5 >> 0x20);
  uVar10 = uVar3 >> 0x1e;
  if (1 < uVar3 >> 0x1e) {
    if (uVar10 != 2) {
      if (param_2 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b80c);
        (*pcVar4)();
      }
      bVar5 = true;
      goto LAB_10031b7b8;
    }
    lVar11 = *(long *)(param_4 + 0x10);
    lVar1 = *(long *)(param_4 + 0x18);
    p_Var7 = param_2;
    Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_2);
    p_Var8 = (__DataStorage *)0x0;
    if (p_Var7 != (__DataStorage *)0x0) {
      p_Var8 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var7);
      if (SBORROW8(lVar11,(long)p_Var8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b800);
        (*pcVar4)();
      }
      p_Var7 = p_Var7 + (lVar11 - (long)p_Var8);
    }
    sVar2 = lVar1 - lVar11;
    if (SBORROW8(lVar1,lVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b7f8);
      (*pcVar4)();
    }
    sVar9 = Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var8);
    if (p_Var7 == (__DataStorage *)0x0) {
      if (param_2 != (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b830);
        (*pcVar4)();
      }
LAB_10031b820:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b824);
      (*pcVar4)();
    }
    if ((long)sVar2 <= (long)sVar9) {
      sVar9 = sVar2;
    }
    if (param_2 == (__DataStorage *)0x0) goto LAB_10031b820;
LAB_10031b784:
    if (param_2 == p_Var7) {
      bVar5 = true;
    }
    else {
      iVar6 = _memcmp(param_2,p_Var7,sVar9);
      bVar5 = iVar6 == 0;
    }
LAB_10031b7b8:
    *(bool *)param_1 = bVar5;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  if (uVar10 == 0) {
    local_66 = (undefined1)param_4;
    local_65 = (undefined1)((ulong)param_4 >> 8);
    local_64 = (undefined1)((ulong)param_4 >> 0x10);
    local_63 = (undefined1)((ulong)param_4 >> 0x18);
    local_62 = (undefined1)((ulong)param_4 >> 0x20);
    local_61 = (undefined1)((ulong)param_4 >> 0x28);
    local_60 = (undefined1)((ulong)param_4 >> 0x30);
    local_5f = (undefined1)((ulong)param_4 >> 0x38);
    local_5e = (undefined1)param_5;
    local_5d = (undefined1)(param_5 >> 8);
    local_5c = (undefined1)(param_5 >> 0x10);
    local_5b = (undefined1)(param_5 >> 0x18);
    local_5a = (undefined1)(param_5 >> 0x20);
    local_59 = (undefined1)(param_5 >> 0x28);
    if (param_2 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b808);
      (*pcVar4)();
    }
    iVar6 = _memcmp(param_2,&local_66,param_5 >> 0x30 & 0xff);
    bVar5 = iVar6 == 0;
    goto LAB_10031b7b8;
  }
  lVar11 = (long)(int)param_4;
  sVar2 = (param_4 >> 0x20) - lVar11;
  if (param_4 >> 0x20 < lVar11) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b7f4);
    (*pcVar4)();
  }
  p_Var7 = param_2;
  Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_2);
  if (p_Var7 == (__DataStorage *)0x0) {
    Foundation::__DataStorage::get__length
              ((__DataStorage *)(param_5 & 0x3fffffffffffffff),(__DataStorage *)0x0);
  }
  else {
    p_Var8 = (__DataStorage *)
             Foundation::__DataStorage::get__offset
                       ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var7);
    if (SBORROW8(lVar11,(long)p_Var8)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b7fc);
      (*pcVar4)();
    }
    p_Var7 = p_Var7 + (lVar11 - (long)p_Var8);
    sVar9 = Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var8);
    if (p_Var7 != (__DataStorage *)0x0) {
      if ((long)sVar2 <= (long)sVar9) {
        sVar9 = sVar2;
      }
      if (param_2 == (__DataStorage *)0x0) goto LAB_10031b818;
      goto LAB_10031b784;
    }
  }
  if (param_2 != (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b82c);
    (*pcVar4)();
  }
LAB_10031b818:
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b81c);
  (*pcVar4)();
}



/* Address: 0x10031b830 | FUN_10031b830 */

void FUN_10031b830(__DataStorage *param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  __DataStorage *p_Var7;
  undefined1 *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined1 local_71;
  undefined1 local_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_4 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  iVar5 = (int)param_1;
  if (param_2 >> 0x3e == 3) {
    uVar11 = 0;
    if ((((param_1 != (__DataStorage *)0x0) || (param_2 != 0xc000000000000000)) ||
        (param_4 >> 0x3e < 3)) || ((uVar11 = 0, param_3 != 0 || (param_4 != 0xc000000000000000))))
    goto joined_r0x00010031b9d4;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar9 == 0) {
        uVar11 = param_2 >> 0x30 & 0xff;
      }
      else {
        iVar10 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar10,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10031bb54);
          (*pcVar4)();
        }
        uVar11 = (ulong)(iVar10 - iVar5);
      }
joined_r0x00010031b9d4:
      if (1 < uVar3 >> 0x1e) goto LAB_10031b8b4;
LAB_10031b8e8:
      if (uVar12 == 0) {
        uVar13 = param_4 >> 0x30 & 0xff;
        goto LAB_10031b8f0;
      }
      iVar10 = (int)((ulong)param_3 >> 0x20);
      if (SBORROW4(iVar10,(int)param_3)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10031bb4c);
        (*pcVar4)();
      }
      if (uVar11 != (long)(iVar10 - (int)param_3)) goto LAB_10031b9b8;
    }
    else {
      if (uVar9 == 2) {
        uVar11 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10031bb50);
          (*pcVar4)();
        }
        goto joined_r0x00010031b9d4;
      }
      uVar11 = 0;
      if (uVar12 < 2) goto LAB_10031b8e8;
LAB_10031b8b4:
      if (uVar12 != 2) {
        local_71 = uVar11 == 0;
        goto LAB_10031bb14;
      }
      uVar13 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
      if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10031b8cc);
        (*pcVar4)();
      }
LAB_10031b8f0:
      if (uVar11 != uVar13) {
LAB_10031b9b8:
        local_71 = 0;
        goto LAB_10031bb14;
      }
    }
    if (0 < (long)uVar11) {
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          local_70[0] = SUB81(param_1,0);
          local_70[1] = (undefined1)((ulong)param_1 >> 8);
          local_70[2] = (undefined1)((ulong)param_1 >> 0x10);
          local_70[3] = (undefined1)((ulong)param_1 >> 0x18);
          local_70[4] = (undefined1)((ulong)param_1 >> 0x20);
          local_70[5] = (undefined1)((ulong)param_1 >> 0x28);
          local_70[6] = (undefined1)((ulong)param_1 >> 0x30);
          local_70[7] = (undefined1)((ulong)param_1 >> 0x38);
          local_70[8] = (undefined1)param_2;
          local_70[9] = (undefined1)(param_2 >> 8);
          local_70[10] = (undefined1)(param_2 >> 0x10);
          local_70[0xb] = (undefined1)(param_2 >> 0x18);
          local_70[0xc] = (undefined1)(param_2 >> 0x20);
          local_70[0xd] = (undefined1)(param_2 >> 0x28);
          puVar8 = local_70 + (param_2 >> 0x30 & 0xff);
LAB_10031bac4:
          FUN_10031b604(&local_71,local_70,puVar8);
          goto LAB_10031bb14;
        }
        lVar14 = (long)iVar5;
        lVar6 = ((long)param_1 >> 0x20) - lVar14;
        if ((long)param_1 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10031bb58);
          (*pcVar4)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
        if (param_1 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          param_1 = (__DataStorage *)0x0;
        }
        else {
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
          if (SBORROW8(lVar14,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10031bb64);
            (*pcVar4)();
          }
          param_1 = param_1 + (lVar14 - (long)p_Var7);
          lVar14 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
          if (param_1 != (__DataStorage *)0x0) {
            if (lVar6 <= lVar14) {
              lVar14 = lVar6;
            }
            p_Var7 = param_1 + lVar14;
            goto LAB_10031bb08;
          }
        }
        p_Var7 = (__DataStorage *)0x0;
      }
      else {
        if (uVar9 != 2) {
          local_70[8] = 0;
          local_70[9] = 0;
          local_70[10] = 0;
          local_70[0xb] = 0;
          local_70[0xc] = 0;
          local_70[0xd] = 0;
          local_70[0] = 0;
          local_70[1] = 0;
          local_70[2] = 0;
          local_70[3] = 0;
          local_70[4] = 0;
          local_70[5] = 0;
          local_70[6] = 0;
          local_70[7] = 0;
          puVar8 = local_70;
          goto LAB_10031bac4;
        }
        lVar6 = *(long *)(param_1 + 0x10);
        lVar14 = *(long *)(param_1 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
        p_Var7 = (__DataStorage *)0x0;
        if (param_1 != (__DataStorage *)0x0) {
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
          if (SBORROW8(lVar6,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10031bb60);
            (*pcVar4)();
          }
          param_1 = param_1 + (lVar6 - (long)p_Var7);
        }
        lVar1 = lVar14 - lVar6;
        if (SBORROW8(lVar14,lVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10031bb5c);
          (*pcVar4)();
        }
        lVar6 = Foundation::__DataStorage::get__length
                          ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
        if (param_1 == (__DataStorage *)0x0) {
          p_Var7 = (__DataStorage *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          p_Var7 = param_1 + lVar6;
        }
      }
LAB_10031bb08:
      FUN_10031b604(local_70,param_1,p_Var7,param_3,param_4);
      local_71 = local_70[0];
      goto LAB_10031bb14;
    }
  }
  local_71 = 1;
LAB_10031bb14:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_71);
}



/* Address: 0x10031bb68 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10031bb6c | thunk_FUN_100316b18 */

void thunk_FUN_100316b18(void)

{
  FUN_100316b18();
  return;
}



/* Address: 0x10031bb70 | FUN_10031bb70 */

void FUN_10031bb70(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fc1b90;
    FUN_100005c24(&DAT_100fc1b90,&DAT_100c43c60);
    FUN_10031bbf4(param_2,param_3);
    local_48 = param_2;
    _swift_getWitnessTable(param_4,puVar1,&local_48);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x10031bbf4 | FUN_10031bbf4 */

void FUN_10031bbf4(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100381740(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10031bc34 | FUN_10031bc34 */

void FUN_10031bc34(void)

{
  long unaff_x20;
  
  FUN_10031b1bc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


