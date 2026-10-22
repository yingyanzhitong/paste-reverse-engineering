/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100701c18 | FUN_100701c18 */

void FUN_100701c18(void)

{
  FUN_100003a00(&DAT_100fdedb8,FUN_100701be0,&TargetProtocolConformanceDescriptor_100c73c50);
  return;
}



/* Address: 0x100701c44 | FUN_100701c44 */

void FUN_100701c44(void)

{
  FUN_100003a00(&DAT_100fdedc0,FUN_100701be0,&TargetProtocolConformanceDescriptor_100c73c10);
  return;
}



/* Address: 0x100701c70 | FUN_100701c70 */

/* WARNING: Removing unreachable block (ram,0x000100701ebc) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100701eb4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100701c70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  Identifier IVar3;
  undefined *puVar4;
  TimeZone TVar5;
  long lVar7;
  Date DVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar9;
  code *pcVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  TimeZone TVar15;
  long lVar16;
  Calendar *this;
  Calendar CStack_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar6;
  
  puVar4 = &DAT_100fded20;
  local_98 = param_1;
  local_88 = param_2;
  uStack_80 = param_3;
  FUN_1000f7830(&DAT_100fded20,&DAT_100c73d00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)&CStack_b0 - extraout_x8;
  TVar5 = Foundation::TimeZone::typeMetadataAccessor();
  lVar16 = *(long *)(TVar5.unknown + -8);
  local_90 = TVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  TVar15.unknown = (undefined *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  IVar3 = Foundation::Calendar::Identifier::typeMetadataAccessor();
  lVar6 = CONCAT71((int7)((ulong)TVar5.unknown >> 8),IVar3.value);
  lVar13 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar9 = (long)TVar15.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_100701be0();
  local_a0 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  this = (Calendar *)(lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fdbf88;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)this - extraout_x8_03;
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  local_a8 = lVar7 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_70 = local_88;
  uStack_68 = uStack_80;
  (**(code **)(lVar13 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___enum_case_for_Foundation_Calendar_Identifier_gregorian_Foundation_Calendar_Identifier_Type___>_Foundation_Calendar_Identifier_100ea75b8
             ,lVar6);
  Foundation::Calendar::_init();
  puVar4 = local_90;
  (**(code **)(lVar13 + 8))(lVar9,lVar6);
  Foundation::TimeZone::_init(0);
  lVar6 = lVar11;
  (**(code **)(lVar16 + 0x30))(lVar11,1,puVar4);
  if ((int)lVar6 == 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100701f80);
    (*pcVar10)();
  }
  (**(code **)(lVar16 + 0x20))(TVar15.unknown,lVar11,puVar4);
  Foundation::Calendar::set_timeZone(this,TVar15);
  puVar4 = &DAT_100fdf648;
  FUN_100003a00(&DAT_100fdf648,FUN_100701be0,&TargetProtocolConformanceDescriptor_100c73ca0);
  Foundation::Date::_init(lVar7,puVar4,this,local_a0,puVar4);
  uVar2 = local_98;
  pcVar10 = *(code **)(lVar14 + 0x38);
  (*pcVar10)(lVar7,0,1,DVar8.unknown);
  lVar9 = lVar7;
  (**(code **)(lVar14 + 0x30))(lVar7,1,DVar8.unknown);
  lVar6 = local_a8;
  bVar1 = (int)lVar9 == 0;
  if (bVar1) {
    pcVar12 = *(code **)(lVar14 + 0x20);
    (*pcVar12)(local_a8,lVar7,DVar8.unknown);
    (*pcVar12)(uVar2,lVar6,DVar8.unknown);
  }
  else {
    FUN_1000fb4c4(lVar7,&DAT_100fdbf88,&DAT_100c6f990);
  }
  (*pcVar10)(uVar2,!bVar1,1,DVar8.unknown);
  return;
}



/* Address: 0x100701f80 | FUN_100701f80 */

undefined1  [16] FUN_100701f80(void)

{
  code *pcVar1;
  Identifier IVar2;
  undefined *puVar3;
  TimeZone TVar4;
  undefined7 extraout_var;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined1 *puVar8;
  TimeZone TVar9;
  Calendar *this;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 local_70 [16];
  long lVar5;
  
  puVar3 = &DAT_100fded20;
  FUN_1000f7830(&DAT_100fded20,&DAT_100c73d00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = local_70 + -extraout_x8;
  TVar4 = Foundation::TimeZone::typeMetadataAccessor();
  lVar11 = *(long *)(TVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  TVar9.unknown = puVar8 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  IVar2 = Foundation::Calendar::Identifier::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,IVar2.value);
  lVar12 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar10 = (long)TVar9.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_100701be0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  this = (Calendar *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar12 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Identifier_gregorian_Foundation_Calendar_Identifier_Type___>_Foundation_Calendar_Identifier_100ea75b8
             ,lVar5);
  Foundation::Calendar::_init();
  (**(code **)(lVar12 + 8))(lVar10,lVar5);
  Foundation::TimeZone::_init(0);
  puVar7 = puVar8;
  (**(code **)(lVar11 + 0x30))(puVar8,1,TVar4.unknown);
  if ((int)puVar7 != 1) {
    (**(code **)(lVar11 + 0x20))(TVar9.unknown,puVar8,TVar4.unknown);
    Foundation::Calendar::set_timeZone(this,TVar9);
    puVar3 = &DAT_100fdeda0;
    FUN_100003a00(&DAT_100fdeda0,FUN_100701be0,&TargetProtocolConformanceDescriptor_100c73b90);
    Foundation::Date::_formatted(local_70,this,lVar6,puVar3);
    FUN_100701b78(this);
    return local_70;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10070216c);
  (*pcVar1)();
}



/* Address: 0x10070216c | FUN_10070216c */

void FUN_10070216c(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x7261646e656c6163 && param_3 == &DAT_e800000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x7261646e656c6163,(_StringGuts)0xe800000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1007021f0 | FUN_1007021f0 */

String FUN_1007021f0(void)

{
  String SVar1;
  
  FUN_100704bbc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100702218 | FUN_100702218 */

String FUN_100702218(void)

{
  String SVar1;
  
  FUN_100704bbc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100702240 | FUN_100702240 */

void FUN_100702240(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  DateComponents DVar1;
  DateComponents DVar2;
  Date DVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  puVar7 = &DAT_100fdbf88;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar7 = &DAT_100fdedd0;
  FUN_1000f7830(&DAT_100fdedd0,&DAT_100c73cf8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar5 - extraout_x8_00;
  DVar1 = Foundation::DateComponents::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar7 = (undefined *)(lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_100702474(lVar9,param_2,param_3);
  lVar8 = lVar9;
  (**(code **)(lVar6 + 0x30))(lVar9,1,DVar1.unknown);
  if ((int)lVar8 == 1) {
    FUN_1000fb4c4(lVar9,&DAT_100fdedd0,&DAT_100c73cf8);
    FUN_1007045ac();
    _swift_allocError(&DAT_100efb5f0,lVar9,0,0);
    _swift_willThrow();
  }
  else {
    DVar2.unknown = puVar7;
    (**(code **)(lVar6 + 0x20))(puVar7,lVar9,DVar1.unknown);
    Foundation::DateComponents::_get_date(DVar2);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar3.unknown + -8);
    puVar4 = puVar5;
    (**(code **)(lVar8 + 0x30))(puVar5,1,DVar3.unknown);
    if ((int)puVar4 == 1) {
      FUN_1000fb4c4(puVar5,&DAT_100fdbf88,&DAT_100c6f990);
      FUN_1007045ac();
      _swift_allocError(&DAT_100efb5f0,puVar5,0,0);
      _swift_willThrow();
      (**(code **)(lVar6 + 8))(puVar7,DVar1.unknown);
    }
    else {
      (**(code **)(lVar6 + 8))(puVar7,DVar1.unknown);
      (**(code **)(lVar8 + 0x20))(param_1,puVar5,DVar3.unknown);
    }
  }
  return;
}



/* Address: 0x100702474 | FUN_100702474 */

/* WARNING: Removing unreachable block (ram,0x0001007025cc) */

void FUN_100702474(undefined8 param_1,undefined *param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  UnsafeBufferPointer<__int8> UVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  String SVar8;
  undefined *local_78;
  ulong uStack_70;
  undefined *local_60;
  char *pcStack_58;
  _StringObject local_50;
  ulong uStack_48;
  
  puVar3 = param_2;
  if ((param_3 & 0x2000000000000000) != 0) {
    puVar3 = (undefined *)(param_3 >> 0x38 & 0xf);
  }
  uVar5 = (uint)((ulong)param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar1 = 7;
  if (uVar5 == 0) {
    uVar1 = 0xb;
  }
  pcVar2 = (char *)0x28;
  uVar5 = 0;
  FUN_10051c750(0x28,0xe100000000000000,param_2,param_3);
  pcStack_58 = (char *)(uVar1 | (long)puVar3 << 0x10);
  if ((uVar5 & 0xff) != 1) {
    pcStack_58 = pcVar2;
  }
  SVar8.bridgeObject = param_2;
  SVar8.str = pcStack_58;
  local_60 = (undefined *)Swift::String::get_subscript((Range<Index>)0xf,SVar8);
  local_50.unknown = param_2;
  uStack_48 = param_3;
  if ((param_3 >> 0x3c & 1) != 0) {
    FUN_1007045ec();
  }
  uVar1 = uStack_48;
  uVar6 = (ulong)local_60 >> 0x10;
  uVar7 = (ulong)pcStack_58 >> 0x10;
  if ((uStack_48 >> 0x3d & 1) != 0) {
    uStack_70 = uStack_48 & 0xffffffffffffff;
    local_78 = local_50.unknown;
    FUN_1007025d8(param_1,(long)&local_78 + uVar6,uVar7 - uVar6,0x3930);
    _swift_bridgeObjectRelease(uVar1);
    return;
  }
  if (((ulong)local_50.unknown >> 0x3c & 1) == 0) {
    UVar4 = Swift::_StringObject::get_sharedUTF8(local_50);
    if (UVar4.unknown == (undefined *)0x0) {
      puVar3 = (undefined *)0x0;
      goto LAB_100702524;
    }
  }
  else {
    UVar4.unknown = (undefined *)((uStack_48 & 0xfffffffffffffff) + 0x20);
  }
  puVar3 = UVar4.unknown + uVar6;
LAB_100702524:
  FUN_1007025d8(param_1,puVar3,uVar7 - uVar6,0x3930);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1007025d8 | FUN_1007025d8 */

void FUN_1007025d8(undefined8 param_1,byte *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  Component CVar8;
  undefined7 extraout_var;
  byte **ppbVar10;
  DateComponents DVar11;
  byte **ppbVar12;
  undefined *puVar13;
  undefined8 uVar14;
  Calendar CVar15;
  ulong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  long extraout_x8_01;
  code *pcVar21;
  uint uVar22;
  uint uVar23;
  byte *pbVar24;
  undefined *puVar25;
  byte bVar26;
  byte *pbVar27;
  long lVar28;
  byte *pbVar29;
  undefined *puVar30;
  byte *pbVar31;
  byte *pbVar32;
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  long lStack_1c0;
  undefined1 auStack_1b8 [8];
  ulong uStack_1b0;
  undefined1 auStack_1a8 [8];
  long lStack_1a0;
  undefined1 auStack_198 [8];
  undefined8 uStack_190;
  undefined1 auStack_188 [8];
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  code *local_120;
  uint local_114;
  byte **local_110;
  code *local_108;
  undefined *local_100;
  undefined *local_f8;
  ulong local_f0;
  byte *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ulong local_c8;
  byte **local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  byte *local_78;
  byte *pbStack_70;
  long lVar9;
  
  puVar30 = &DAT_100fded20;
  FUN_1000f7830(&DAT_100fded20,&DAT_100c73d00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar30 = &DAT_100fdede0;
  local_b0 = (long)&local_120 - extraout_x8;
  FUN_1000f7830(&DAT_100fdede0,&DAT_100c73d08);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar30 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = ((long)&local_120 - extraout_x8) - extraout_x8_00;
  local_a8 = lVar20;
  CVar8 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,CVar8.value);
  lVar28 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar28 + 0x40));
  puVar30 = (undefined *)(lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  pbVar32 = param_2 + param_3;
  pbVar2 = (byte *)0x0;
  if (param_2 != (byte *)0x0) {
    pbVar2 = pbVar32;
  }
  local_78 = param_2;
  pbStack_70 = pbVar2;
  if (5 < param_3) {
    if ((param_2[3] == 0x2c) && (param_2 != (byte *)0x0)) {
      if (param_2 != pbVar32) {
        param_2 = param_2 + 1;
      }
      pbVar31 = pbVar32;
      local_78 = param_2;
      if (param_2 != pbVar32) {
        local_78 = param_2 + 1;
        pbVar31 = local_78;
      }
      if (local_78 != pbVar32) {
        pbVar31 = local_78 + 1;
        local_78 = pbVar31;
      }
      if (pbVar31 != pbVar32) {
        pbVar31 = pbVar31 + 1;
        local_78 = pbVar31;
      }
      if (pbVar31 != pbVar32) {
        local_78 = pbVar31 + 1;
      }
    }
    ppbVar10 = &local_78;
    local_b8 = lVar9;
    FUN_10070327c(ppbVar10,param_4,param_5);
    if (((uint)param_4 & 0xff) == 1) goto LAB_100702794;
    ppbVar12 = &local_78;
    uVar14 = param_5;
    local_c0 = ppbVar10;
    FUN_1007033f8();
    lVar9 = local_b8;
    pbVar31 = local_78;
    if (((uint)uVar14 & 0xff) != 1) {
      do {
        if (pbVar31 == (byte *)0x0) goto LAB_1007027d0;
        if (pbVar31 == pbVar2) {
          uVar17 = 0;
          bVar5 = true;
          pbVar24 = pbVar32;
          goto joined_r0x00010070287c;
        }
        pbVar24 = pbVar31 + 1;
        bVar3 = *pbVar31;
        pbVar31 = pbVar24;
      } while (bVar3 == 0x20);
      bVar5 = (byte)(bVar3 - 0x3a) < 0xf6;
      uVar17 = 0;
      if (!bVar5) {
        uVar17 = (uint)bVar3;
      }
joined_r0x00010070287c:
      if (pbVar31 == pbVar2) {
        uVar22 = 0;
        bVar6 = true;
        if (pbVar24 == pbVar2) goto LAB_100702864;
LAB_1007028a4:
        pbVar32 = pbVar24 + 1;
        bVar7 = (*pbVar24 - 0x3a & 0xff) < 0xf6;
        uVar23 = 0;
        if (!bVar7) {
          uVar23 = (uint)*pbVar24;
        }
      }
      else {
        pbVar24 = pbVar31 + 1;
        bVar6 = (*pbVar31 - 0x3a & 0xff) < 0xf6;
        uVar22 = 0;
        if (!bVar6) {
          uVar22 = (uint)*pbVar31;
        }
        if (pbVar24 != pbVar2) goto LAB_1007028a4;
LAB_100702864:
        bVar7 = true;
        pbVar32 = pbVar24;
        uVar23 = 0;
      }
      if (((pbVar32 != pbVar2) && (local_78 = pbVar32 + 1, !(bool)(bVar5 | bVar6 | bVar7))) &&
         (0xf5 < (*pbVar32 - 0x3a & 0xff))) {
        uVar17 = uVar17 - 0x30;
        if ((uVar17 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100702db8);
          (*pcVar21)();
        }
        uVar22 = uVar22 - 0x30;
        if ((uVar22 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100702dbc);
          (*pcVar21)();
        }
        uVar23 = uVar23 - 0x30;
        if ((uVar23 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100702dc0);
          (*pcVar21)();
        }
        pbVar31 = local_78;
        if (pbVar2 == local_78) {
          bVar5 = true;
          uVar19 = 0;
        }
        else {
          uVar18 = ~((int)pbVar32 - (int)pbVar2);
          uVar16 = (ulong)uVar18 & 3;
          pbVar24 = local_78;
          if ((uVar18 & 3) != 0) {
            do {
              pbVar24 = pbVar31 + 1;
              bVar3 = *pbVar31;
              if (bVar3 != 0x20) goto LAB_1007029cc;
              uVar16 = uVar16 - 1;
              pbVar31 = pbVar24;
            } while (uVar16 != 0);
          }
          if ((byte *)0x2 < pbVar2 + (~(ulong)pbVar32 - 1)) {
            pbVar31 = pbVar24 + 2;
            do {
              uVar18 = (uint)pbVar31[-2];
              if (pbVar31[-2] != 0x20) {
                pbVar31 = pbVar31 + -1;
                goto LAB_1007029d0;
              }
              uVar18 = (uint)pbVar31[-1];
              if (pbVar31[-1] != 0x20) goto LAB_1007029d0;
              bVar3 = *pbVar31;
              if (bVar3 != 0x20) goto LAB_1007029cc;
              uVar18 = (uint)pbVar31[1];
              if (pbVar31[1] != 0x20) {
                pbVar31 = pbVar31 + 2;
                goto LAB_1007029d0;
              }
              pbVar24 = pbVar31 + 2;
              pbVar31 = pbVar31 + 4;
            } while (pbVar24 != pbVar2);
          }
          bVar5 = true;
          pbVar31 = pbVar2;
          uVar19 = 0;
        }
        goto LAB_1007029e4;
      }
    }
    goto LAB_1007027d0;
  }
  DVar11 = Foundation::DateComponents::typeMetadataAccessor();
  pcVar21 = *(code **)(*(long *)(DVar11.unknown + -8) + 0x38);
  goto LAB_1007027e8;
LAB_1007029cc:
  uVar18 = (uint)bVar3;
  pbVar31 = pbVar31 + 1;
LAB_1007029d0:
  bVar5 = (uVar18 - 0x3a & 0xff) < 0xf6;
  uVar19 = 0;
  if (!bVar5) {
    uVar19 = uVar18;
  }
LAB_1007029e4:
  if (pbVar31 != pbVar2) {
    local_78 = pbVar31 + 1;
    bVar3 = *pbVar31;
    if ((byte)(bVar3 - 0x3a) < 0xf6) {
      bVar5 = true;
    }
    if (!bVar5) {
      local_c8 = CONCAT44(local_c8._4_4_,(uint)*pbVar32);
      local_f0 = (ulong)(uVar19 - 0x30);
      local_110 = ppbVar12;
      local_e8 = local_78;
      local_e0 = (undefined *)(ulong)uVar22;
      local_d8 = (undefined *)(ulong)uVar17;
      local_d0 = (undefined *)(ulong)uVar23;
      if ((uVar19 - 0x30 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100702dc4);
        (*pcVar21)();
      }
      local_114 = *(uint *)
                   PTR___enum_case_for_Foundation_Calendar_Component_hour_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7630
      ;
      CVar15.unknown = (undefined *)(ulong)local_114;
      local_108 = *(code **)(lVar28 + 0x68);
      lVar20 = local_b8;
      (*local_108)(puVar30);
      uVar17 = (uint)lVar20;
      CVar8.value = (__int8)puVar30;
      puVar25 = puVar30;
      Foundation::Calendar::_maximumRange(CVar8,CVar15);
      pcVar21 = *(code **)(lVar28 + 8);
      local_100 = puVar25;
      local_f8 = CVar15.unknown;
      (*pcVar21)(puVar30,lVar9);
      lVar9 = local_b8;
      if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100703248);
        (*pcVar21)();
      }
      pbVar32 = (byte *)((local_f0 & 0xff) * 10 + (ulong)(byte)(bVar3 - 0x30));
      if ((((long)local_100 <= (long)pbVar32 && (long)pbVar32 < (long)local_f8) &&
          (local_e8 != pbVar2)) && (local_78 = pbVar31 + 2, pbVar31[1] == 0x3a)) {
        uVar16 = ((ulong)local_d8 & 0xff) * 1000 + ((ulong)local_e0 & 0xff) * 100 +
                 ((ulong)local_d0 & 0xff) * 10 + (ulong)(byte)((char)local_c8 - 0x30);
        pbVar31 = pbVar31 + 3;
        pbVar24 = local_78;
        do {
          pbVar29 = pbVar31;
          if (pbVar24 == pbVar2) {
            uVar17 = 0;
            bVar5 = true;
            pbVar27 = pbVar24;
            goto LAB_100702b60;
          }
          pbVar27 = pbVar24 + 1;
          bVar3 = *pbVar24;
          pbVar31 = pbVar29 + 1;
          pbVar24 = pbVar27;
          local_78 = pbVar29;
        } while (bVar3 == 0x20);
        bVar5 = (byte)(bVar3 - 0x3a) < 0xf6;
        uVar17 = 0;
        if (!bVar5) {
          uVar17 = (uint)bVar3;
        }
LAB_100702b60:
        local_120 = pcVar21;
        if (pbVar27 != pbVar2) {
          pbVar31 = pbVar27 + 1;
          bVar3 = *pbVar27;
          if ((byte)(bVar3 - 0x3a) < 0xf6) {
            bVar5 = true;
          }
          local_78 = pbVar31;
          if (!bVar5) {
            local_c8 = (ulong)(uVar17 - 0x30);
            local_f0 = uVar16;
            local_e8 = pbVar32;
            if ((uVar17 - 0x30 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x100703228);
              (*pcVar21)();
            }
            CVar15.unknown =
                 (undefined *)
                 (ulong)*(uint *)
                         PTR___enum_case_for_Foundation_Calendar_Component_minute_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7648
            ;
            local_e0 = (undefined *)
                       CONCAT44(local_e0._4_4_,
                                *(uint *)
                                 PTR___enum_case_for_Foundation_Calendar_Component_minute_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7648
                               );
            lVar20 = local_b8;
            (*local_108)(puVar30);
            uVar17 = (uint)lVar20;
            puVar25 = puVar30;
            Foundation::Calendar::_maximumRange(CVar8,CVar15);
            local_d8 = CVar15.unknown;
            local_d0 = puVar25;
            (*local_120)(puVar30,lVar9);
            lVar9 = local_b8;
            if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x100703254);
              (*pcVar21)();
            }
            uVar16 = (local_c8 & 0xff) * 10 + (ulong)(byte)(bVar3 - 0x30);
            if ((((long)local_d0 <= (long)uVar16) && ((long)uVar16 < (long)local_d8)) &&
               ((pbVar31 != pbVar2 && (local_78 = pbVar27 + 2, pbVar27[1] == 0x3a)))) {
              pbVar32 = pbVar27 + 3;
              pbVar31 = local_78;
              do {
                pbVar24 = pbVar32;
                if (pbVar31 == pbVar2) {
                  uVar17 = 0;
                  bVar5 = true;
                  pbVar29 = pbVar31;
                  goto LAB_100702c88;
                }
                pbVar29 = pbVar31 + 1;
                bVar3 = *pbVar31;
                pbVar32 = pbVar24 + 1;
                pbVar31 = pbVar29;
                local_78 = pbVar24;
              } while (bVar3 == 0x20);
              bVar5 = (byte)(bVar3 - 0x3a) < 0xf6;
              uVar17 = 0;
              if (!bVar5) {
                uVar17 = (uint)bVar3;
              }
LAB_100702c88:
              local_c8 = uVar16;
              if (pbVar29 != pbVar2) {
                pbVar32 = pbVar29 + 1;
                bVar3 = *pbVar29;
                if ((byte)(bVar3 - 0x3a) < 0xf6) {
                  bVar5 = true;
                }
                local_78 = pbVar32;
                if (!bVar5) {
                  local_d0 = (undefined *)(ulong)(uVar17 - 0x30);
                  if ((uVar17 - 0x30 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)SoftwareBreakpoint(1,0x100703244);
                    (*pcVar21)();
                  }
                  CVar15.unknown =
                       (undefined *)
                       (ulong)*(uint *)
                               PTR___enum_case_for_Foundation_Calendar_Component_second_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7650
                  ;
                  lVar20 = local_b8;
                  (*local_108)(puVar30);
                  uVar17 = (uint)lVar20;
                  puVar25 = puVar30;
                  Foundation::Calendar::_maximumRange(CVar8,CVar15);
                  local_f8 = CVar15.unknown;
                  local_d8 = puVar25;
                  (*local_120)(puVar30,lVar9);
                  if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)SoftwareBreakpoint(1,0x100703274);
                    (*pcVar21)();
                  }
                  lVar9 = ((ulong)local_d0 & 0xff) * 10 + (ulong)(byte)(bVar3 - 0x30);
                  if (((long)local_d8 <= lVar9) && (lVar9 < (long)local_f8)) {
                    pbVar31 = pbVar29 + 1;
                    do {
                      pbVar29 = pbVar32;
                      pbVar24 = pbVar31;
                      if (pbVar29 == pbVar2) goto LAB_100702794;
                      local_78 = pbVar24 + 1;
                      pbVar32 = pbVar29 + 1;
                      bVar3 = *pbVar29;
                      pbVar31 = local_78;
                    } while (bVar3 == 0x20);
                    if ((bVar3 == 0x2d) || (bVar3 == 0x2b)) {
                      do {
                        pbVar31 = pbVar32;
                        if (pbVar31 == pbVar2) {
                          uVar17 = 0;
                          bVar5 = true;
                          pbVar24 = local_78;
                          goto LAB_100702e18;
                        }
                        pbVar24 = local_78 + 1;
                        bVar26 = *pbVar31;
                        local_78 = pbVar24;
                        pbVar32 = pbVar31 + 1;
                      } while (bVar26 == 0x20);
                      bVar5 = (byte)(bVar26 - 0x3a) < 0xf6;
                      uVar17 = 0;
                      if (!bVar5) {
                        uVar17 = (uint)bVar26;
                      }
                      local_78 = pbVar31 + 1;
LAB_100702e18:
                      if (local_78 == pbVar2) {
LAB_100702e40:
                        local_d8 = (undefined *)0x0;
                        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
                      }
                      else {
                        pbVar24 = local_78 + 1;
                        bVar26 = *local_78;
                        if ((byte)(bVar26 - 0x3a) < 0xf6) {
                          bVar5 = true;
                        }
                        if (bVar5) goto LAB_100702e40;
                        local_d0 = (undefined *)(ulong)(uVar17 - 0x30);
                        local_78 = pbVar24;
                        if ((uVar17 - 0x30 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
                          pcVar21 = (code *)SoftwareBreakpoint(1,0x10070324c);
                          (*pcVar21)();
                        }
                        CVar15.unknown = (undefined *)(ulong)local_114;
                        lVar20 = local_b8;
                        (*local_108)(puVar30);
                        uVar17 = (uint)lVar20;
                        puVar25 = puVar30;
                        Foundation::Calendar::_maximumRange(CVar8,CVar15);
                        local_f8 = CVar15.unknown;
                        local_d8 = puVar25;
                        (*local_120)(puVar30,local_b8);
                        if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
                          pcVar21 = (code *)SoftwareBreakpoint(1,0x100703278);
                          (*pcVar21)();
                        }
                        lVar20 = ((ulong)local_d0 & 0xff) * 10 + (ulong)(byte)(bVar26 - 0x30);
                        bVar5 = lVar20 < (long)local_d8;
                        local_d0 = (undefined *)
                                   CONCAT44(local_d0._4_4_,(uint)(bVar5 || (long)local_f8 <= lVar20)
                                           );
                        local_d8 = (undefined *)0x0;
                        if (!bVar5 && lVar20 < (long)local_f8) {
                          local_d8 = (undefined *)(lVar20 * 0x3c);
                        }
                      }
                      lVar20 = local_b8;
                      uVar16 = (long)pbVar2 - (long)pbVar24;
                      if (uVar16 == 0) {
LAB_100702f28:
                        bVar5 = true;
                        pbVar32 = pbVar24;
                        uVar22 = 0;
                        local_78 = pbVar2;
                      }
                      else {
                        pbVar32 = pbVar24;
                        for (uVar1 = uVar16 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
                          uVar17 = (uint)*pbVar32;
                          if (*pbVar32 != 0x20) {
                            pbVar32 = pbVar32 + 1;
                            goto LAB_100703024;
                          }
                          pbVar32 = pbVar32 + 1;
                        }
                        pbVar24 = pbVar2;
                        if (uVar16 < 4) goto LAB_100702f28;
                        pbVar32 = pbVar32 + 2;
                        while( true ) {
                          uVar17 = (uint)pbVar32[-2];
                          if (pbVar32[-2] != 0x20) {
                            pbVar32 = pbVar32 + -1;
                            goto LAB_100703024;
                          }
                          uVar17 = (uint)pbVar32[-1];
                          if (pbVar32[-1] != 0x20) goto LAB_100703024;
                          uVar17 = (uint)*pbVar32;
                          if (*pbVar32 != 0x20) break;
                          uVar17 = (uint)pbVar32[1];
                          if (pbVar32[1] != 0x20) {
                            pbVar32 = pbVar32 + 2;
                            goto LAB_100703024;
                          }
                          pbVar31 = pbVar32 + 2;
                          pbVar32 = pbVar32 + 4;
                          if (pbVar31 == pbVar2) goto LAB_100702f28;
                        }
                        pbVar32 = pbVar32 + 1;
LAB_100703024:
                        bVar5 = (uVar17 - 0x3a & 0xff) < 0xf6;
                        uVar22 = 0;
                        local_78 = pbVar32;
                        if (!bVar5) {
                          uVar22 = uVar17;
                        }
                      }
                      if (pbVar32 != pbVar2) {
                        bVar26 = *pbVar32;
                        if ((byte)(bVar26 - 0x3a) < 0xf6) {
                          bVar5 = true;
                        }
                        if (!bVar5) {
                          if ((uVar22 - 0x30 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
                            pcVar21 = (code *)SoftwareBreakpoint(1,0x100703250);
                            (*pcVar21)();
                          }
                          CVar15.unknown = local_e0 & 0xffffffff;
                          lVar28 = local_b8;
                          (*local_108)(puVar30);
                          uVar17 = (uint)lVar28;
                          puVar25 = puVar30;
                          Foundation::Calendar::_maximumRange(CVar8,CVar15);
                          local_f8 = CVar15.unknown;
                          local_e0 = puVar25;
                          (*local_120)(puVar30,lVar20);
                          if ((uVar17 & 0xff) == 1) {
                    /* WARNING: Does not return */
                            pcVar21 = (code *)SoftwareBreakpoint(1,0x10070327c);
                            (*pcVar21)();
                          }
                          lVar20 = (ulong)(uVar22 - 0x30 & 0xff) * 10 + (ulong)(byte)(bVar26 - 0x30)
                          ;
                          uVar17 = (uint)local_d0;
                          if (lVar20 < (long)local_e0) {
                            uVar17 = 1;
                          }
                          if (((uVar17 & 1) == 0) && (lVar20 < (long)local_f8)) {
                            puVar25 = (undefined *)-(long)(local_d8 + lVar20);
                            if (bVar3 == 0x2b) {
                              puVar25 = local_d8 + lVar20;
                            }
                            goto LAB_1007030fc;
                          }
                        }
                      }
                    }
                    else {
                      if (pbVar32 == pbVar2) {
                        bVar26 = 0;
                        bVar5 = true;
                      }
                      else {
                        local_78 = pbVar24 + 2;
                        bVar4 = *pbVar32;
                        uVar17 = bVar4 - 0x41;
                        bVar5 = bVar4 - 0x7b < 0xffffffe6;
                        bVar26 = 0;
                        if (!bVar5) {
                          bVar26 = bVar4;
                        }
                        if (uVar17 < 0x1a) {
                          bVar26 = bVar4;
                        }
                        bVar5 = 0x19 < uVar17 && bVar5;
                        pbVar32 = pbVar29 + 2;
                      }
                      if (pbVar32 != pbVar2) {
                        bVar4 = *pbVar32;
                        if ((bVar4 & 0xffffffdf) - 0x5b < 0xffffffe6) {
                          bVar5 = true;
                        }
                        if (!bVar5) {
                          puVar13 = &DAT_100fdcbb8;
                          FUN_1000f7830(&DAT_100fdcbb8,&DAT_100c73d10);
                          uVar16 = 0;
                          _swift_initStackObject();
                          *(undefined8 *)(puVar13 + 0x18) = 6;
                          *(undefined8 *)(puVar13 + 0x10) = 3;
                          puVar13[0x20] = bVar3;
                          puVar13[0x21] = bVar26;
                          puVar13[0x22] = bVar4;
                          if (DAT_100fdede8 != -1) {
                            uVar16 = 0;
                            _swift_once(&DAT_100fdede8);
                          }
                          lVar20 = DAT_101058140;
                          if ((*(long *)(DAT_101058140 + 0x10) == 0) ||
                             (puVar25 = puVar13, FUN_1006a3358(), (uVar16 & 1) == 0)) {
                            _swift_setDeallocating(puVar13);
                            goto LAB_100702794;
                          }
                          puVar25 = *(undefined **)(*(long *)(lVar20 + 0x38) + (long)puVar25 * 8);
                          _swift_setDeallocating(puVar13);
LAB_1007030fc:
                          CVar15 = Foundation::Calendar::typeMetadataAccessor();
                          lVar20 = local_a8;
                          lVar28 = *(long *)(CVar15.unknown + -8);
                          (**(code **)(lVar28 + 0x10))(local_a8,param_5,CVar15.unknown);
                          (**(code **)(lVar28 + 0x38))(lVar20,0,1,CVar15.unknown);
                          if (SUB168(SEXT816((long)puVar25) * SEXT816(0x3c),8) !=
                              (long)puVar25 * 0x3c >> 0x3f) {
                    /* WARNING: Does not return */
                            pcVar21 = (code *)SoftwareBreakpoint(1,0x100703258);
                            (*pcVar21)();
                          }
                          Foundation::TimeZone::_init((long)puVar25 * 0x3c);
                          puVar30[-8] = 1;
                          *(undefined8 *)(puVar30 + -0x10) = 0;
                          puVar30[-0x18] = 1;
                          *(undefined8 *)(puVar30 + -0x20) = 0;
                          puVar30[-0x28] = 1;
                          *(undefined8 *)(puVar30 + -0x30) = 0;
                          puVar30[-0x38] = 1;
                          *(undefined8 *)(puVar30 + -0x40) = 0;
                          puVar30[-0x48] = 1;
                          *(undefined8 *)(puVar30 + -0x50) = 0;
                          puVar30[-0x58] = 1;
                          *(undefined8 *)(puVar30 + -0x60) = 0;
                          puVar30[-0x68] = 1;
                          *(undefined8 *)(puVar30 + -0x70) = 0;
                          puVar30[-0x78] = 0;
                          *(long *)(puVar30 + -0x80) = lVar9;
                          puVar30[-0x88] = 0;
                          *(ulong *)(puVar30 + -0x90) = local_c8;
                          puVar30[-0x98] = 0;
                          *(byte **)(puVar30 + -0xa0) = local_e8;
                          puVar30[-0xa8] = 0;
                          *(byte ***)(puVar30 + -0xb0) = local_c0;
                          Foundation::DateComponents::_init();
                          DVar11 = Foundation::DateComponents::typeMetadataAccessor();
                          pcVar21 = *(code **)(*(long *)(DVar11.unknown + -8) + 0x38);
                          uVar14 = 0;
                          goto LAB_1007027ec;
                        }
                      }
                    }
                  }
                }
              }
LAB_100702794:
              DVar11 = Foundation::DateComponents::typeMetadataAccessor();
              pcVar21 = *(code **)(*(long *)(DVar11.unknown + -8) + 0x38);
              goto LAB_1007027e8;
            }
          }
        }
      }
    }
  }
LAB_1007027d0:
  DVar11 = Foundation::DateComponents::typeMetadataAccessor();
  pcVar21 = *(code **)(*(long *)(DVar11.unknown + -8) + 0x38);
LAB_1007027e8:
  uVar14 = 1;
LAB_1007027ec:
  (*pcVar21)(param_1,uVar14,1,DVar11.unknown);
  return;
}



/* Address: 0x10070327c | FUN_10070327c */

undefined1  [16] FUN_10070327c(long *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  Component CVar7;
  undefined7 extraout_var;
  ulong uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  Calendar CVar12;
  uint uVar13;
  long extraout_x8;
  byte *pbVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  long lVar8;
  
  CVar7 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,CVar7.value);
  lVar16 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  uVar13 = (uint)lVar8;
  puVar15 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar14 = (byte *)*param_1;
  if (((pbVar14 != (byte *)0x0) && (pbVar14 != (byte *)param_1[1])) &&
     (*param_1 = (long)(pbVar14 + 1), pbVar14 + 1 != (byte *)param_1[1])) {
    bVar1 = *pbVar14;
    uVar4 = param_2 >> 8 & 0xff;
    *param_1 = (long)(pbVar14 + 2);
    if ((param_2 & 0xff) <= (uint)bVar1 && (bVar1 < uVar4 || bVar1 == uVar4)) {
      bVar2 = pbVar14[1];
      uVar3 = bVar1 - 0x30;
      bVar6 = (uVar3 & 0xffffff00) != 0;
      if ((uint)bVar2 < (param_2 & 0xff) || uVar4 <= bVar2 && bVar2 != uVar4) {
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1007033ec);
          (*pcVar5)();
        }
        uVar17 = (ulong)uVar3 & 0xff;
      }
      else {
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1007033f0);
          (*pcVar5)();
        }
        uVar4 = bVar2 - 0x30;
        if ((uVar4 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1007033f4);
          (*pcVar5)();
        }
        uVar17 = ((ulong)uVar3 & 0xff) * 10 + (ulong)(byte)uVar4;
      }
      CVar12.unknown =
           (undefined *)
           (ulong)*(uint *)
                   PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
      ;
      (**(code **)(lVar16 + 0x68))(puVar15);
      puVar10 = puVar15;
      Foundation::Calendar::_maximumRange((Component)(__int8)puVar15,CVar12);
      (**(code **)(lVar16 + 8))(puVar15,lVar8);
      if ((uVar13 & 0xff) == 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1007033f8);
        (*pcVar5)();
      }
      uVar11 = (ulong)((long)uVar17 < (long)puVar10 || (long)CVar12.unknown <= (long)uVar17);
      uVar9 = 0;
      if ((long)uVar17 >= (long)puVar10 && (long)CVar12.unknown > (long)uVar17) {
        uVar9 = uVar17;
      }
      goto LAB_10070331c;
    }
  }
  uVar11 = 1;
  uVar9 = 0;
LAB_10070331c:
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = uVar9;
  return auVar18;
}



/* Address: 0x1007033f8 | FUN_1007033f8 */

undefined1  [16] FUN_1007033f8(long *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  Component CVar8;
  undefined7 extraout_var;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  Calendar CVar13;
  ulong uVar14;
  uint uVar15;
  long extraout_x8;
  byte *pbVar16;
  long lVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  long lVar22;
  byte bVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_80 [48];
  long lVar9;
  
  CVar8 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,CVar8.value);
  lVar22 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  uVar15 = (uint)lVar9;
  puVar21 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pbVar1 = (byte *)*param_1;
  do {
    pbVar16 = pbVar1;
    if (pbVar16 == (byte *)0x0) goto LAB_100703634;
    pbVar20 = (byte *)param_1[1];
    if (pbVar16 == pbVar20) {
      uVar19 = 0;
      bVar6 = true;
      pbVar20 = pbVar16;
      pbVar18 = pbVar16;
      goto LAB_1007034a8;
    }
    pbVar1 = pbVar16 + 1;
    *param_1 = (long)pbVar1;
    bVar3 = *pbVar16;
  } while (bVar3 == 0x20);
  uVar19 = (uint)bVar3;
  bVar5 = uVar19 - 0x7b < 0xffffffe6;
  uVar2 = 0;
  if (!bVar5) {
    uVar2 = uVar19;
  }
  bVar6 = 0x19 < bVar3 - 0x41;
  if (bVar6) {
    uVar19 = uVar2;
  }
  bVar6 = bVar6 && bVar5;
  pbVar18 = pbVar1;
  if (pbVar1 == pbVar20) {
LAB_1007034a8:
    bVar23 = 0;
    bVar7 = true;
    if (pbVar18 != pbVar20) {
LAB_100703508:
      *param_1 = (long)(pbVar18 + 1);
      uVar14 = 1;
      lVar17 = 0;
      if ((bVar6 || bVar7) || (bVar3 = *pbVar18, (bVar3 & 0xffffffdf) - 0x5b < 0xffffffe6))
      goto LAB_100703638;
      if (0x19 < (uVar19 & 0xffffffdf) - 0x41) {
        lVar17 = 0;
        goto LAB_100703638;
      }
      if (DAT_100fdedf8 != -1) {
        _swift_once(&DAT_100fdedf8,FUN_100703ab8);
      }
      lVar17 = DAT_101058148;
      puVar10 = &DAT_100fdcbb8;
      FUN_1000f7830(&DAT_100fdcbb8,&DAT_100c73d10);
      uVar14 = 0;
      _swift_initStackObject();
      *(undefined8 *)(puVar10 + 0x18) = 6;
      *(undefined8 *)(puVar10 + 0x10) = 3;
      puVar10[0x20] = (char)uVar19;
      puVar10[0x21] = bVar23;
      puVar10[0x22] = bVar3;
      if ((*(long *)(lVar17 + 0x10) != 0) && (puVar11 = puVar10, FUN_1006a3358(), (uVar14 & 1) != 0)
         ) {
        lVar24 = *(long *)(*(long *)(lVar17 + 0x38) + (long)puVar11 * 8);
        _swift_setDeallocating(puVar10);
        CVar13.unknown =
             (undefined *)
             (ulong)*(uint *)
                     PTR___enum_case_for_Foundation_Calendar_Component_month_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7640
        ;
        (**(code **)(lVar22 + 0x68))(puVar21);
        puVar12 = puVar21;
        Foundation::Calendar::_maximumRange((Component)(__int8)puVar21,CVar13);
        (**(code **)(lVar22 + 8))(puVar21,lVar9);
        if ((uVar15 & 0xff) == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100703674);
          (*pcVar4)();
        }
        uVar14 = (ulong)(lVar24 < (long)puVar12 || (long)CVar13.unknown <= lVar24);
        lVar17 = 0;
        if (lVar24 >= (long)puVar12 && (long)CVar13.unknown > lVar24) {
          lVar17 = lVar24;
        }
        goto LAB_100703638;
      }
      _swift_setDeallocating();
    }
  }
  else {
    pbVar18 = pbVar16 + 2;
    *param_1 = (long)pbVar18;
    bVar23 = *pbVar1;
    bVar5 = bVar23 - 0x7b < 0xffffffe6;
    bVar3 = 0;
    if (!bVar5) {
      bVar3 = bVar23;
    }
    bVar7 = 0x19 < bVar23 - 0x41;
    if (bVar7) {
      bVar23 = bVar3;
    }
    bVar7 = bVar7 && bVar5;
    if (pbVar18 != pbVar20) goto LAB_100703508;
  }
LAB_100703634:
  uVar14 = 1;
  lVar17 = 0;
LAB_100703638:
  auVar25._8_8_ = uVar14;
  auVar25._0_8_ = lVar17;
  return auVar25;
}



/* Address: 0x100703674 | FUN_100703674 */

void FUN_100703674(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  
  local_78 = param_1;
  local_68 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  lVar6 = *(long *)(local_68 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fdee08;
  FUN_1000f7830(&DAT_100fdee08,&DAT_100c73d28);
  local_70 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_100701be0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar4 = ((long)puVar5 - extraout_x8_00) - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100704bbc();
  Swift::Decoder::_container();
  uVar1 = local_78;
  if (unaff_x21 == 0) {
    FUN_100003a00(&DAT_100fdee18,PTR_typeMetadataAccessor_100ea7690,
                  PTR_Foundation__Foundation__Calendar_>Swift__Decodable_100ea76b0);
    puVar2 = local_68;
    Swift::KeyedDecodingContainer::_decode(puVar5,local_68);
    (**(code **)(local_70 + 8))((long)puVar5 - extraout_x8_00,puVar3);
    (**(code **)(lVar6 + 0x20))(lVar4,puVar5,puVar2);
    FUN_100704bfc(lVar4,uVar1);
  }
  FUN_100004594(param_2);
  return;
}



/* Address: 0x100703844 | FUN_100703844 */

void FUN_100703844(undefined8 *param_1)

{
  FUN_100702240(*param_1,param_1[1]);
  return;
}



/* Address: 0x100703860 | FUN_100703860 */

void FUN_100703860(void)

{
  FUN_100703674();
  return;
}



/* Address: 0x100703874 | FUN_100703874 */

void FUN_100703874(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fdee20;
  FUN_1000f7830(&DAT_100fdee20,&DAT_100c73d30);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100704bbc();
  Swift::Encoder::_container();
  Foundation::Calendar::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fdee28,PTR_typeMetadataAccessor_100ea7690,
                PTR_Foundation__Foundation__Calendar_>Swift__Encodable_100ea76a0);
  Swift::KeyedEncodingContainer::_encode();
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100703988 | FUN_100703988 */

void FUN_100703988(void)

{
  Hasher into;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  Foundation::Calendar::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fdee30,PTR_typeMetadataAccessor_100ea7690,
                PTR_Foundation__Foundation__Calendar_>Swift__Hashable_100ea76a8);
  into.unknown = auStack_68;
  Swift::Hashable::hash(into);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1007039f4 | FUN_1007039f4 */

void FUN_1007039f4(Hasher param_1)

{
  Foundation::Calendar::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fdee30,PTR_typeMetadataAccessor_100ea7690,
                PTR_Foundation__Foundation__Calendar_>Swift__Hashable_100ea76a8);
  Swift::Hashable::hash(param_1);
  return;
}



/* Address: 0x100703a4c | FUN_100703a4c */

void FUN_100703a4c(__int64 param_1)

{
  Hasher into;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  Foundation::Calendar::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fdee30,PTR_typeMetadataAccessor_100ea7690,
                PTR_Foundation__Foundation__Calendar_>Swift__Hashable_100ea76a8);
  into.unknown = auStack_68;
  Swift::Hashable::hash(into);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100703ab4 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Calendar::==_infix */

bool Foundation::Calendar::___infix(Calendar param_1,Calendar param_2,Calendar param_3)

{
  bool bVar1;
  
  bVar1 = ___infix(param_1,param_2,param_3);
  return bVar1;
}



/* Address: 0x100703ab8 | FUN_100703ab8 */

void FUN_100703ab8(void)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  _DictionaryStorage *this;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong local_110 [24];
  
  uVar2 = 3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(uVar2 + 0x22) = 0x6e;
  *(undefined2 *)(uVar2 + 0x20) = 0x614a;
  local_110[1] = 1;
  lVar3 = 3;
  local_110[0] = uVar2;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar3 + 0x22) = 0x62;
  *(undefined2 *)(lVar3 + 0x20) = 0x6546;
  local_110[3] = 2;
  lVar4 = 3;
  local_110[2] = lVar3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar4 + 0x22) = 0x72;
  *(undefined2 *)(lVar4 + 0x20) = 0x614d;
  local_110[5] = 3;
  lVar3 = 3;
  local_110[4] = lVar4;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar3 + 0x22) = 0x72;
  *(undefined2 *)(lVar3 + 0x20) = 0x7041;
  local_110[7] = 4;
  lVar4 = 3;
  local_110[6] = lVar3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar4 + 0x22) = 0x79;
  *(undefined2 *)(lVar4 + 0x20) = 0x614d;
  local_110[9] = 5;
  lVar3 = 3;
  local_110[8] = lVar4;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar3 + 0x22) = 0x6e;
  *(undefined2 *)(lVar3 + 0x20) = 0x754a;
  local_110[0xb] = 6;
  lVar4 = 3;
  local_110[10] = lVar3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar4 + 0x22) = 0x6c;
  *(undefined2 *)(lVar4 + 0x20) = 0x754a;
  local_110[0xd] = 7;
  lVar3 = 3;
  local_110[0xc] = lVar4;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar3 + 0x22) = 0x67;
  *(undefined2 *)(lVar3 + 0x20) = 0x7541;
  local_110[0xf] = 8;
  lVar4 = 3;
  local_110[0xe] = lVar3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar4 + 0x22) = 0x70;
  *(undefined2 *)(lVar4 + 0x20) = 0x6553;
  local_110[0x11] = 9;
  lVar3 = 3;
  local_110[0x10] = lVar4;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar3 + 0x22) = 0x74;
  *(undefined2 *)(lVar3 + 0x20) = 0x634f;
  local_110[0x13] = 10;
  lVar4 = 3;
  local_110[0x12] = lVar3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar4 + 0x22) = 0x76;
  *(undefined2 *)(lVar4 + 0x20) = 0x6f4e;
  local_110[0x15] = 0xb;
  lVar3 = 3;
  local_110[0x14] = lVar4;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(lVar3 + 0x22) = 99;
  *(undefined2 *)(lVar3 + 0x20) = 0x6544;
  local_110[0x17] = 0xc;
  this = (_DictionaryStorage *)&DAT_100fdedf0;
  uVar7 = 0;
  local_110[0x16] = lVar3;
  FUN_1000f7830();
  lVar3 = 0xc;
  Swift::_DictionaryStorage::_allocate(this,0xc);
  uVar5 = uVar2;
  FUN_1006a3358();
  if ((uVar7 & 1) == 0) {
    uVar9 = 1;
    lVar4 = 0;
    do {
      uVar8 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar3 + 0x40 + uVar8) = *(ulong *)(lVar3 + 0x40 + uVar8) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(lVar3 + 0x30) + uVar5 * 8) = uVar2;
      *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar5 * 8) = uVar9;
      if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100703d8c);
        (*pcVar1)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      if (lVar4 + 0x10 == 0xc0) {
        _swift_bridgeObjectRetain();
        puVar6 = &DAT_100fdee00;
        FUN_1000f7830(&DAT_100fdee00,&DAT_100c73d20);
        _swift_arrayDestroy(local_110,0xc,puVar6);
        DAT_101058148 = lVar3;
        return;
      }
      uVar2 = *(ulong *)((long)local_110 + lVar4 + 0x10);
      uVar9 = *(undefined8 *)((long)local_110 + lVar4 + 0x18);
      _swift_bridgeObjectRetain();
      uVar5 = uVar2;
      FUN_1006a3358();
      lVar4 = lVar4 + 0x10;
    } while ((uVar7 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100703d3c);
  (*pcVar1)();
}



/* Address: 0x100703d8c | FUN_100703d8c */

void FUN_100703d8c(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  _DictionaryStorage *this;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar3 = 3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(uVar3 + 0x22) = 0x43;
  *(undefined2 *)(uVar3 + 0x20) = 0x5455;
  uVar4 = 3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(uVar4 + 0x22) = 0x54;
  *(undefined2 *)(uVar4 + 0x20) = 0x4d47;
  uVar5 = 3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(uVar5 + 0x22) = 0x54;
  *(undefined2 *)(uVar5 + 0x20) = 0x4445;
  uVar6 = 3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(uVar6 + 0x22) = 0x54;
  *(undefined2 *)(uVar6 + 0x20) = 0x4443;
  uVar7 = 3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(uVar7 + 0x22) = 0x54;
  *(undefined2 *)(uVar7 + 0x20) = 0x444d;
  uVar8 = 3;
  FUN_1006c9d18(3,0);
  *(undefined1 *)(uVar8 + 0x22) = 0x54;
  *(undefined2 *)(uVar8 + 0x20) = 0x4450;
  this = (_DictionaryStorage *)&DAT_100fdedf0;
  uVar12 = 0;
  FUN_1000f7830();
  lVar9 = 6;
  Swift::_DictionaryStorage::_allocate(this,6);
  uVar10 = uVar3;
  FUN_1006a3358();
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10070406c);
    (*pcVar2)();
  }
  lVar1 = lVar9 + 0x40;
  uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar11) = *(ulong *)(lVar1 + uVar11) | 1L << (uVar10 & 0x3f);
  *(ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) = uVar3;
  *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 8) = 0;
  if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100704070);
    (*pcVar2)();
  }
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  uVar10 = uVar4;
  FUN_1006a3358();
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100704074);
    (*pcVar2)();
  }
  uVar3 = uVar10 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = *(ulong *)(lVar1 + uVar3) | 1L << (uVar10 & 0x3f);
  *(ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) = uVar4;
  *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 8) = 0;
  if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100704078);
    (*pcVar2)();
  }
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  uVar10 = uVar5;
  FUN_1006a3358();
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10070407c);
    (*pcVar2)();
  }
  uVar3 = uVar10 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = *(ulong *)(lVar1 + uVar3) | 1L << (uVar10 & 0x3f);
  *(ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) = uVar5;
  *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 8) = 0xffffffffffffff10;
  if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100704080);
    (*pcVar2)();
  }
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  uVar10 = uVar6;
  FUN_1006a3358();
  if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100704084);
    (*pcVar2)();
  }
  uVar3 = uVar10 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar3) = *(ulong *)(lVar1 + uVar3) | 1L << (uVar10 & 0x3f);
  *(ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) = uVar6;
  *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 8) = 0xfffffffffffffed4;
  if (!SCARRY8(*(long *)(lVar9 + 0x10),1)) {
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    uVar10 = uVar7;
    FUN_1006a3358();
    if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10070408c);
      (*pcVar2)();
    }
    uVar3 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar3) = *(ulong *)(lVar1 + uVar3) | 1L << (uVar10 & 0x3f);
    *(ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) = uVar7;
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 8) = 0xfffffffffffffe98;
    if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100704090);
      (*pcVar2)();
    }
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
    uVar10 = uVar8;
    FUN_1006a3358();
    if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100704094);
      (*pcVar2)();
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar12) = *(ulong *)(lVar1 + uVar12) | 1L << (uVar10 & 0x3f);
    *(ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) = uVar8;
    *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 8) = 0xfffffffffffffe5c;
    if (!SCARRY8(*(long *)(lVar9 + 0x10),1)) {
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      DAT_101058140 = lVar9;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100704098);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100704088);
  (*pcVar2)();
}



/* Address: 0x100704098 | FUN_100704098 */

undefined1  [16] FUN_100704098(Date param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  String SVar3;
  undefined1 auVar4 [16];
  void *pvVar5;
  Component CVar6;
  DateComponents DVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  DateComponents DVar10;
  uint uVar11;
  Calendar CVar12;
  long extraout_x8;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  code *pcVar17;
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
  String SVar38;
  String SVar39;
  long local_90;
  undefined *local_88;
  char *local_80;
  void *pvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar9;
  
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  local_90 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  puVar8 = &DAT_100fdee38;
  FUN_1000f7830(&DAT_100fdee38,&DAT_100c73d38);
  CVar6 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,CVar6.value);
  lVar16 = *(long *)(lVar9 + -8);
  lVar15 = *(long *)(lVar16 + 0x48);
  uVar13 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar14 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar8,uVar14 + lVar15 * 7,uVar13 | 7);
  *(undefined8 *)(puVar8 + 0x18) = 0xe;
  *(undefined8 *)(puVar8 + 0x10) = 7;
  puVar1 = puVar8 + uVar14;
  pcVar17 = *(code **)(lVar16 + 0x68);
  (*pcVar17)(puVar1,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Component_weekday_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7658
             ,lVar9);
  (*pcVar17)(puVar1 + lVar15,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
             ,lVar9);
  (*pcVar17)(puVar1 + lVar15 * 2,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_month_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7640
             ,lVar9);
  (*pcVar17)(puVar1 + lVar15 * 3,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_year_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7638
             ,lVar9);
  (*pcVar17)(puVar1 + lVar15 * 4,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_hour_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7630
             ,lVar9);
  (*pcVar17)(puVar1 + lVar15 * 5,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_minute_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7648
             ,lVar9);
  (*pcVar17)(puVar1 + lVar15 * 6,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_second_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7650
             ,lVar9);
  DVar10.unknown = puVar8;
  FUN_100704d64();
  _swift_setDeallocating(puVar8);
  _swift_arrayDestroy(puVar1,7,lVar9);
  CVar12.unknown = (undefined *)0x7;
  _swift_deallocClassInstance(puVar8,0x20);
  Foundation::Calendar::dateComponents((Set<Component>)DVar10.unknown,param_1,CVar12);
  _swift_bridgeObjectRelease();
  Foundation::DateComponents::_get_weekday(DVar10);
  if (((uint)param_1.unknown & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100704530);
    (*pcVar17)();
  }
  if (SBORROW8((long)DVar10.unknown,1)) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100704510);
    (*pcVar17)();
  }
  if ((undefined *)0x6 < DVar10.unknown + -1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100704514);
    (*pcVar17)();
  }
  lVar9 = (long)(DVar10.unknown + -1) * 0x10;
  local_70 = *(undefined8 *)(&DAT_100fdee68 + lVar9);
  uStack_68 = *(undefined8 *)(&DAT_100fdee70 + lVar9);
  _swift_bridgeObjectRetain();
  SVar25.bridgeObject = CVar12.unknown;
  SVar25.str = param_1.unknown;
  Swift::String::reserveCapacity(0x1e,SVar25);
  SVar20.bridgeObject = &SUB_e200000000000000;
  SVar20.str = (char *)0x202c;
  uVar11 = 0;
  DVar10.unknown = (undefined *)0x202c;
  SVar26.bridgeObject = param_4;
  SVar26.str = CVar12.unknown;
  Swift::String::append(SVar20,SVar26);
  Foundation::DateComponents::_get_day(DVar10);
  if ((uVar11 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100704534);
    (*pcVar17)();
  }
  if ((undefined *)0x63 < DVar10.unknown) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100704518);
    (*pcVar17)();
  }
  uVar2 = *(undefined8 *)(&DAT_100fdef08 + (long)DVar10.unknown * 0x10);
  SVar20 = *(String *)(&DAT_100fdef00 + (long)DVar10.unknown * 0x10);
  _swift_bridgeObjectRetain(uVar2);
  SVar27.bridgeObject = param_4;
  SVar27.str = CVar12.unknown;
  Swift::String::append(SVar20,SVar27);
  _swift_bridgeObjectRelease(uVar2);
  SVar18.bridgeObject = (void *)0xe100000000000000;
  SVar18.str = (char *)0x20;
  uVar11 = 0;
  DVar10.unknown = (undefined *)0x20;
  SVar28.bridgeObject = param_4;
  SVar28.str = CVar12.unknown;
  Swift::String::append(SVar18,SVar28);
  Foundation::DateComponents::_get_month(DVar10);
  if ((uVar11 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100704538);
    (*pcVar17)();
  }
  if (SBORROW8((long)DVar10.unknown,1)) {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x10070451c);
    (*pcVar17)();
  }
  if (DVar10.unknown + -1 < (undefined *)0xc) {
    lVar9 = (long)(DVar10.unknown + -1) * 0x10;
    uVar2 = *(undefined8 *)(&DAT_100fdf570 + lVar9);
    SVar20 = *(String *)(&DAT_100fdf568 + lVar9);
    _swift_bridgeObjectRetain(uVar2);
    SVar29.bridgeObject = param_4;
    SVar29.str = CVar12.unknown;
    Swift::String::append(SVar20,SVar29);
    _swift_bridgeObjectRelease(uVar2);
    SVar19.bridgeObject = (void *)0xe100000000000000;
    SVar19.str = (char *)0x20;
    uVar11 = 0;
    DVar10.unknown = (undefined *)0x20;
    SVar30.bridgeObject = param_4;
    SVar30.str = CVar12.unknown;
    Swift::String::append(SVar19,SVar30);
    local_80 = (char *)0x0;
    pvStack_78 = (void *)0xe000000000000000;
    Foundation::DateComponents::_get_year(DVar10);
    if ((uVar11 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x10070453c);
      (*pcVar17)();
    }
    local_88 = DVar10.unknown;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar31.bridgeObject = param_4;
    SVar31.str = CVar12.unknown;
    Swift::String::append(SVar20,SVar31);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    pvVar5 = pvStack_78;
    SVar3.bridgeObject = pvStack_78;
    SVar3.str = local_80;
    SVar32.bridgeObject = param_4;
    SVar32.str = CVar12.unknown;
    Swift::String::append(SVar3,SVar32);
    _swift_bridgeObjectRelease(pvVar5);
    SVar21.bridgeObject = (void *)0xe100000000000000;
    SVar21.str = (char *)0x20;
    uVar11 = 0;
    DVar10.unknown = (undefined *)0x20;
    SVar33.bridgeObject = param_4;
    SVar33.str = CVar12.unknown;
    Swift::String::append(SVar21,SVar33);
    Foundation::DateComponents::_get_hour(DVar10);
    if ((uVar11 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100704540);
      (*pcVar17)();
    }
    if ((undefined *)0x63 < DVar10.unknown) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100704524);
      (*pcVar17)();
    }
    uVar2 = *(undefined8 *)(&DAT_100fdef08 + (long)DVar10.unknown * 0x10);
    SVar20 = *(String *)(&DAT_100fdef00 + (long)DVar10.unknown * 0x10);
    _swift_bridgeObjectRetain(uVar2);
    SVar34.bridgeObject = param_4;
    SVar34.str = CVar12.unknown;
    Swift::String::append(SVar20,SVar34);
    _swift_bridgeObjectRelease(uVar2);
    SVar22.bridgeObject = (void *)0xe100000000000000;
    SVar22.str = &DAT_0000003a;
    uVar11 = 0;
    DVar10.unknown = &DAT_0000003a;
    SVar35.bridgeObject = param_4;
    SVar35.str = CVar12.unknown;
    Swift::String::append(SVar22,SVar35);
    Foundation::DateComponents::_get_minute(DVar10);
    if ((uVar11 & 0xff) != 1) {
      if ((undefined *)0x63 < DVar10.unknown) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100704528);
        (*pcVar17)();
      }
      uVar2 = *(undefined8 *)(&DAT_100fdef08 + (long)DVar10.unknown * 0x10);
      SVar20 = *(String *)(&DAT_100fdef00 + (long)DVar10.unknown * 0x10);
      _swift_bridgeObjectRetain(uVar2);
      SVar36.bridgeObject = param_4;
      SVar36.str = CVar12.unknown;
      Swift::String::append(SVar20,SVar36);
      _swift_bridgeObjectRelease(uVar2);
      SVar23.bridgeObject = (void *)0xe100000000000000;
      SVar23.str = &DAT_0000003a;
      uVar11 = 0;
      DVar10.unknown = &DAT_0000003a;
      SVar37.bridgeObject = param_4;
      SVar37.str = CVar12.unknown;
      Swift::String::append(SVar23,SVar37);
      Foundation::DateComponents::_get_second(DVar10);
      if ((uVar11 & 0xff) != 1) {
        if (DVar10.unknown < (undefined *)0x64) {
          uVar2 = *(undefined8 *)(&DAT_100fdef08 + (long)DVar10.unknown * 0x10);
          SVar20 = *(String *)(&DAT_100fdef00 + (long)DVar10.unknown * 0x10);
          _swift_bridgeObjectRetain(uVar2);
          SVar38.bridgeObject = param_4;
          SVar38.str = CVar12.unknown;
          Swift::String::append(SVar20,SVar38);
          _swift_bridgeObjectRelease(uVar2);
          SVar24.bridgeObject = &DAT_e400000000000000;
          SVar24.str = (char *)0x544d4720;
          SVar39.bridgeObject = param_4;
          SVar39.str = CVar12.unknown;
          Swift::String::append(SVar24,SVar39);
          (**(code **)(local_90 + 8))
                    ((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar7.unknown);
          auVar4._8_8_ = uStack_68;
          auVar4._0_8_ = local_70;
          return auVar4;
        }
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10070452c);
        (*pcVar17)();
      }
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x100704548);
      (*pcVar17)();
    }
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x100704544);
    (*pcVar17)();
  }
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x100704520);
  (*pcVar17)();
}



/* Address: 0x100704548 | FUN_100704548 */

void FUN_100704548(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100704098();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10070456c | FUN_10070456c */

void FUN_10070456c(Locale param_1)

{
  (extension_Foundation)::Foundation::FormatStyle::locale(param_1);
  return;
}



/* Address: 0x100704580 | FUN_100704580 */

void FUN_100704580(void)

{
  FUN_100003a00(&DAT_100fdedc8,FUN_100701be0,&TargetProtocolConformanceDescriptor_100c73be8);
  return;
}



/* Address: 0x1007045ac | FUN_1007045ac */

void FUN_1007045ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdedd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73ea4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73ea4,&DAT_100efb5f0);
  DAT_100fdedd8 = pTVar1;
  return;
}



/* Address: 0x1007045ec | FUN_1007045ec */

void FUN_1007045ec(void)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = unaff_x20[2];
  uVar1 = unaff_x20[3];
  uVar8 = *unaff_x20;
  uVar3 = 0xf;
  FUN_1007046d0(0xf,uVar8,uVar4,uVar1);
  uVar9 = unaff_x20[1];
  FUN_1007046d0(uVar8,uVar9,uVar4,uVar1);
  uVar7 = uVar1;
  FUN_1006c9b84();
  uVar5 = 0xf;
  FUN_1007048e0(0xf,uVar3,uVar4,uVar7);
  uVar6 = uVar5;
  FUN_1007048e0();
  _swift_bridgeObjectRelease(uVar1);
  if ((uVar8 & 2) != 0) {
    uVar5 = uVar5 | 3;
  }
  if ((uVar9 & 2) != 0) {
    uVar6 = uVar6 | 3;
  }
  if (uVar5 >> 0xe <= uVar6 >> 0xe) {
    *unaff_x20 = uVar5;
    unaff_x20[1] = uVar6;
    unaff_x20[2] = uVar4;
    unaff_x20[3] = uVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007046d0);
  (*pcVar2)();
}



/* Address: 0x1007046d0 | FUN_1007046d0 */

long FUN_1007046d0(Index param_1,ulong param_2,UnicodeScalarView param_3,ulong param_4)

{
  undefined *puVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  UnsafeBufferPointer<__int8> UVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  UnsafeMutablePointer local_78;
  undefined *local_70;
  ulong uStack_68;
  
  FUN_100704abc(param_1.cmsgPointer.unknown,param_3.unknown,param_4);
  FUN_100704abc(param_2,param_3.unknown,param_4);
  param_2 = param_2 >> 0xe;
  if ((ulong)param_1.cmsgPointer.unknown >> 0xe < param_2) {
    lVar9 = 0;
    do {
      lVar8 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007048dc);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        uVar10 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
        if ((param_4 >> 0x3d & 1) == 0) {
          UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            UVar5 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
          }
          bVar2 = UVar5.unknown[uVar10];
        }
        else {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          bVar2 = *(byte *)((long)&local_70 + uVar10);
        }
        uVar6 = (uint)LZCOUNT((uint)bVar2 << 0x18 ^ 0xffffffff);
        if (-1 < (char)bVar2) {
          uVar6 = 1;
        }
        param_1.cmsgPointer.unknown = (UnsafeMutablePointer)((uVar10 + uVar6) * 0x10000 | 5);
      }
      else {
        param_1 = Swift::String::UnicodeScalarView::_foreignIndex(param_1,param_3);
      }
      lVar9 = lVar9 + 1;
    } while ((ulong)param_1.cmsgPointer.unknown >> 0xe < param_2);
  }
  else if (param_2 < (ulong)param_1.cmsgPointer.unknown >> 0xe) {
    lVar8 = 0;
    do {
      while( true ) {
        bVar4 = SBORROW8(lVar8,1);
        lVar8 = lVar8 + -1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007048e0);
          (*pcVar3)();
        }
        if ((param_4 >> 0x3c & 1) != 0) break;
        uVar10 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
        if ((param_4 >> 0x3d & 1) == 0) {
          UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            local_78 = param_1.cmsgPointer.unknown;
            UVar5 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
            param_1.cmsgPointer.unknown =
                 (UnsafeMutablePointer)(UnsafeMutablePointer)local_78.unknown;
          }
          if ((byte)UVar5.unknown[uVar10 - 1] == 0xffffffbf ||
              SCARRY4((uint)(byte)UVar5.unknown[uVar10 - 1],0x41)) {
            lVar9 = -2;
            do {
              lVar7 = lVar9;
              lVar9 = lVar7 + -1;
            } while ((char)UVar5.unknown[lVar7 + uVar10] < -0x40);
          }
          else {
LAB_10070487c:
            lVar7 = -1;
          }
        }
        else {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          if (-0x41 < *(char *)((long)&local_78.unknown + uVar10 + 7)) goto LAB_10070487c;
          lVar9 = -2;
          do {
            lVar7 = lVar9;
            lVar9 = lVar7 + -1;
          } while (*(char *)((long)&local_70 + lVar7 + uVar10) < -0x40);
        }
        puVar1 = (undefined *)((long)param_1.cmsgPointer.unknown + lVar7 * 0x10000);
        param_1.cmsgPointer.unknown = (UnsafeMutablePointer)((ulong)puVar1 & 0xffffffffffff0000 | 5)
        ;
        if (((ulong)puVar1 & 0xffffffffffff0000) >> 0xe <= param_2) {
          return lVar8;
        }
      }
      param_1 = Swift::String::UnicodeScalarView::_foreignIndex(param_1,param_3);
    } while (param_2 < (ulong)param_1.cmsgPointer.unknown >> 0xe);
  }
  else {
    lVar8 = 0;
  }
  return lVar8;
}



/* Address: 0x1007048e0 | FUN_1007048e0 */

void FUN_1007048e0(Index param_1,long param_2,UnicodeScalarView param_3,ulong param_4)

{
  byte bVar1;
  long lVar2;
  code *pcVar3;
  UnsafeBufferPointer<__int8> UVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  char cStack_71;
  undefined *local_70;
  ulong uStack_68;
  
  FUN_100704abc(param_1.cmsgPointer.unknown,param_3.unknown,param_4);
  if (param_2 < 0) {
    lVar7 = 0;
    do {
      if ((ulong)param_1.cmsgPointer.unknown < (undefined *)0x10000) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100704abc);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        uVar9 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
        if ((param_4 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
          }
          if ((byte)UVar4.unknown[uVar9 - 1] == 0xffffffbf ||
              SCARRY4((uint)(byte)UVar4.unknown[uVar9 - 1],0x41)) {
            lVar2 = -2;
            do {
              lVar6 = lVar2;
              lVar2 = lVar6 + -1;
            } while ((char)UVar4.unknown[lVar6 + uVar9] < -0x40);
          }
          else {
LAB_100704a74:
            lVar6 = -1;
          }
        }
        else {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          if (-0x41 < (&cStack_71)[uVar9]) goto LAB_100704a74;
          lVar2 = -2;
          do {
            lVar6 = lVar2;
            lVar2 = lVar6 + -1;
          } while (*(char *)((long)&local_70 + lVar6 + uVar9) < -0x40);
        }
        param_1.cmsgPointer.unknown = (UnsafeMutablePointer)((lVar6 + uVar9) * 0x10000 | 5);
      }
      else {
        param_1 = Swift::String::UnicodeScalarView::_foreignIndex(param_1,param_3);
      }
      lVar7 = lVar7 + -1;
    } while (param_2 < lVar7);
  }
  else if (param_2 != 0) {
    uVar9 = (ulong)param_3.unknown & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar9 = param_4 >> 0x38 & 0xf;
    }
    do {
      while( true ) {
        uVar8 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
        if (uVar9 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100704ab8);
          (*pcVar3)();
        }
        if ((param_4 >> 0x3c & 1) != 0) break;
        if ((param_4 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
          }
          bVar1 = UVar4.unknown[uVar8];
        }
        else {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          bVar1 = *(byte *)((long)&local_70 + uVar8);
        }
        uVar5 = (uint)LZCOUNT((uint)bVar1 << 0x18 ^ 0xffffffff);
        if (-1 < (char)bVar1) {
          uVar5 = 1;
        }
        param_1.cmsgPointer.unknown = (UnsafeMutablePointer)((uVar8 + uVar5) * 0x10000 | 5);
        param_2 = param_2 + -1;
        if (param_2 == 0) {
          return;
        }
      }
      param_1 = Swift::String::UnicodeScalarView::_foreignIndex(param_1,param_3);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



/* Address: 0x100704abc | FUN_100704abc */

void FUN_100704abc(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if (((param_1 & 1) == 0) || ((param_1 & 0xc) == 4L << (ulong)uVar3)) {
    FUN_100704b50();
    if ((param_1 & 1) == 0) {
      FUN_10004857c();
    }
  }
  else {
    uVar1 = param_2 & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if (uVar1 < param_1 >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100704b0c);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x100704b50 | FUN_100704b50 */

void FUN_100704b50(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_2 >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if ((param_1 & 0xc) == 4L << uVar3) {
    FUN_1000740a8();
  }
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0x10 <= uVar1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100704bbc);
  (*pcVar2)();
}



/* Address: 0x100704bbc | FUN_100704bbc */

void FUN_100704bbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdee10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73e54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73e54,&DAT_100efb5d0);
  DAT_100fdee10 = pTVar1;
  return;
}



/* Address: 0x100704bfc | FUN_100704bfc */

undefined8 FUN_100704bfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100701be0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100704c40 | FUN_100704c40 */

undefined * FUN_100704c40(long param_1,undefined8 param_2,undefined8 param_3,Hasher param_4)

{
  byte bVar1;
  code *pcVar2;
  _SetStorage *this;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *capacity;
  __int64 seed;
  undefined *puVar10;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fdf640;
    FUN_1000f7830(&DAT_100fdf640,&DAT_100c73d48);
    puVar3 = capacity;
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar10 = (undefined *)0x0;
    seed = *(__int64 *)(puVar3 + 0x28);
    do {
      bVar1 = puVar10[param_1 + 0x20];
      uVar4 = Swift::Hasher::_hash(seed,(ulong)bVar1,1,param_4);
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar4 >> 6;
      uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
      uVar8 = 1L << (uVar4 & 0x3f);
      lVar5 = *(long *)(puVar3 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if (*(byte *)(lVar5 + uVar4) == bVar1) goto LAB_100704cc4;
          uVar4 = uVar4 + 1 & ~uVar9;
          uVar6 = uVar4 >> 6;
          uVar7 = *(ulong *)(puVar3 + uVar6 * 8 + 0x38);
          uVar8 = 1L << (uVar4 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(puVar3 + uVar6 * 8 + 0x38) = uVar8 | uVar7;
      *(byte *)(lVar5 + uVar4) = bVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100704d64);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_100704cc4:
      puVar10 = puVar10 + 1;
    } while (puVar10 != capacity);
  }
  return puVar3;
}



/* Address: 0x100704d64 | FUN_100704d64 */

undefined * FUN_100704d64(long param_1)

{
  long lVar1;
  Component CVar2;
  bool bVar3;
  undefined7 extraout_var;
  _SetStorage *this;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  __int64 seed;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  long lVar4;
  
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,CVar2.value);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = ((long)puVar11 - extraout_x12) - extraout_x12_00;
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fdf628;
    FUN_1000f7830(&DAT_100fdf628,&DAT_100c73d40);
    puVar5 = puVar14;
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar15 = (undefined *)0x0;
    local_70 = puVar5 + 0x38;
    local_90 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar17 = *(long *)(lVar12 + 0x48);
    pcVar16 = *(code **)(lVar12 + 0x10);
    local_98 = puVar14;
    do {
      lVar1 = local_88;
      (*pcVar16)(local_88,local_90 + lVar17 * (long)puVar15,lVar4);
      local_78 = *(code **)(lVar12 + 0x20);
      (*local_78)(local_68,lVar1,lVar4);
      seed = *(__int64 *)(puVar5 + 0x28);
      FUN_100003a00(&DAT_100fdf630,PTR_typeMetadataAccessor_100ea7668,
                    PTR_Foundation__Foundation__Calendar__Component_>Swift__Hashable_100ea7678);
      uVar6 = Swift::Hashable::_rawHashValue(seed);
      uVar10 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(local_70 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        local_80 = puVar15;
        do {
          (*pcVar16)(puVar11,*(long *)(puVar5 + 0x30) + uVar6 * lVar17,lVar4);
          puVar14 = &DAT_100fdf638;
          FUN_100003a00(&DAT_100fdf638,PTR_typeMetadataAccessor_100ea7668,
                        PTR_Foundation__Foundation__Calendar__Component_>Swift__Equatable_100ea7680)
          ;
          bVar3 = Swift::Equatable::___infix(puVar11,local_68,lVar4,puVar14);
          pcVar13 = *(code **)(lVar12 + 8);
          (*pcVar13)(puVar11,lVar4);
          if (bVar3) {
            (*pcVar13)(local_68,lVar4);
            puVar14 = local_98;
            puVar15 = local_80;
            goto LAB_100704e70;
          }
          uVar6 = uVar6 + 1 & ~uVar10;
          uVar7 = uVar6 >> 6;
          uVar8 = *(ulong *)(local_70 + uVar7 * 8);
          uVar9 = 1L << (uVar6 & 0x3f);
          puVar14 = local_98;
          puVar15 = local_80;
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(local_70 + uVar7 * 8) = uVar9 | uVar8;
      (*local_78)(*(long *)(puVar5 + 0x30) + uVar6 * lVar17,local_68,lVar4);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10070500c);
        (*pcVar16)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
LAB_100704e70:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar14);
  }
  return puVar5;
}



/* Address: 0x10070500c | FUN_10070500c */

undefined1  [16] FUN_10070500c(void)

{
  return ZEXT816(0x100efb5d0);
}



/* Address: 0x10070501c | FUN_10070501c */

undefined1  [16] FUN_10070501c(void)

{
  return ZEXT816(0x100efb5f0);
}



/* Address: 0x10070502c | FUN_10070502c */

void FUN_10070502c(undefined8 param_1,undefined8 param_2)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100705064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(CVar1.unknown + -8))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x100705068 | FUN_100705068 */

void FUN_100705068(undefined8 param_1)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100705098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 8))(param_1,CVar1.unknown);
  return;
}



/* Address: 0x10070509c | FUN_10070509c */

undefined8 FUN_10070509c(undefined8 param_1,undefined8 param_2)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x10))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1007050e0 | FUN_1007050e0 */

undefined8 FUN_1007050e0(undefined8 param_1,undefined8 param_2)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x18))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x100705124 | FUN_100705124 */

undefined8 FUN_100705124(undefined8 param_1,undefined8 param_2)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x20))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x100705168 | FUN_100705168 */

undefined8 FUN_100705168(undefined8 param_1,undefined8 param_2)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x28))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1007051ac | FUN_1007051ac */

void FUN_1007051ac(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1007051b8 | FUN_1007051b8 */

void FUN_1007051b8(undefined8 param_1,undefined8 param_2)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007051f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x30))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1007051f4 | FUN_1007051f4 */

void FUN_1007051f4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100705200 | FUN_100705200 */

void FUN_100705200(undefined8 param_1,undefined8 param_2)

{
  Calendar CVar1;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010070523c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,CVar1.unknown);
  return;
}



/* Address: 0x100705240 | FUN_100705240 */

undefined1  [16] FUN_100705240(long param_1,ulong param_2)

{
  Calendar CVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_28;
  
  CVar1 = Foundation::Calendar::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(CVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
    CVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = CVar1.unknown;
  return auVar3;
}



/* Address: 0x1007052a8 | thunk_FUN_1007052ac */

void thunk_FUN_1007052ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdf6e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73e2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73e2c,&DAT_100efb5d0);
  DAT_100fdf6e0 = pTVar1;
  return;
}



/* Address: 0x1007052ac | FUN_1007052ac */

void FUN_1007052ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdf6e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73e2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73e2c,&DAT_100efb5d0);
  DAT_100fdf6e0 = pTVar1;
  return;
}



/* Address: 0x1007052ec | thunk_FUN_1007052f0 */

void thunk_FUN_1007052f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdf6e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73dc4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73dc4,&DAT_100efb5d0);
  DAT_100fdf6e8 = pTVar1;
  return;
}



/* Address: 0x1007052f0 | FUN_1007052f0 */

void FUN_1007052f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdf6e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73dc4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73dc4,&DAT_100efb5d0);
  DAT_100fdf6e8 = pTVar1;
  return;
}



/* Address: 0x100705330 | thunk_FUN_100705334 */

void thunk_FUN_100705334(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdf6f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73d9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73d9c,&DAT_100efb5d0);
  DAT_100fdf6f0 = pTVar1;
  return;
}



/* Address: 0x100705334 | FUN_100705334 */

void FUN_100705334(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdf6f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73d9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73d9c,&DAT_100efb5d0);
  DAT_100fdf6f0 = pTVar1;
  return;
}



/* Address: 0x100705374 | thunk_FUN_100701bb4 */

void thunk_FUN_100701bb4(void)

{
  FUN_100701bb4();
  return;
}



/* Address: 0x100705378 | thunk_FUN_100701c18 */

void thunk_FUN_100701c18(void)

{
  FUN_100701c18();
  return;
}



/* Address: 0x10070537c | thunk_FUN_100701c44 */

void thunk_FUN_100701c44(void)

{
  FUN_100701c44();
  return;
}



/* Address: 0x100705380 | FUN_100705380 */

String FUN_100705380(undefined8 param_1,undefined8 param_2,long param_3,void *param_4,
                    undefined8 param_5)

{
  code *pcVar1;
  __int64 _Var2;
  char *count;
  void *pvVar4;
  long extraout_x8;
  long lVar5;
  long lVar6;
  String SVar7;
  String repeating;
  String SVar8;
  String local_60;
  void *pvVar3;
  
  lVar6 = *(long *)((long)param_4 + -8);
  pvVar4 = param_4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar5,param_1,pvVar4);
  pvVar4 = param_4;
  SVar7 = Swift::String::_init(lVar5,param_2,0,param_4,param_5);
  _Var2 = Swift::String::get_count(SVar7);
  count = (char *)(param_3 - _Var2);
  if (!SBORROW8(param_3,_Var2)) {
    repeating.bridgeObject = (void *)0xe100000000000000;
    repeating.str = &DAT_00000030;
    local_60 = Swift::String::init(repeating,(__int64)count);
    pvVar3 = local_60.bridgeObject;
    _swift_bridgeObjectRetain(pvVar3);
    SVar8.bridgeObject = pvVar4;
    SVar8.str = count;
    Swift::String::append(SVar7,SVar8);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    _swift_bridgeObjectRelease(pvVar3);
    SVar7 = local_60;
    (**(code **)(lVar6 + 8))(param_1,param_4);
    return SVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100705494);
  (*pcVar1)();
}



/* Address: 0x100705494 | FUN_100705494 */

void FUN_100705494(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  (**(code **)(lVar2 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  lVar1 = 0;
  FUN_100705568(0,param_4,param_5);
  param_1[3] = lVar1;
  param_1[4] = &PTR_PTR_100efb7a8;
  FUN_10000cbb0();
  (**(code **)(lVar2 + 0x20))
            ((long)param_1 + (long)*(int *)(lVar1 + 0x24),
             &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  *param_1 = param_2;
  param_1[1] = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x100705568 | FUN_100705568 */

void FUN_100705568(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100705574 | FUN_100705574 */

void FUN_100705574(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1007055f0 | FUN_1007055f0 */

long * FUN_1007055f0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(uint *)(lVar2 + 0x50) & 0xff;
  if (((uint)uVar4 < 8 && (*(uint *)(lVar2 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar4 - 0x11 | uVar4) - *(long *)(lVar2 + 0x40)) {
    lVar1 = param_2[1];
    lVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar6;
    pcVar5 = *(code **)(lVar2 + 0x10);
    _swift_retain(lVar1);
    (*pcVar5)((long)param_1 + uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff),
              (long)param_2 + uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff),lVar3);
  }
  else {
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)((uint)uVar4 & 0xf8 ^ 0x1f8) & uVar4 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007056b0 | FUN_1007056b0 */

void FUN_1007056b0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001007056f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1 + uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff));
  return;
}


