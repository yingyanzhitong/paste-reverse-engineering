/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100309af8 | FUN_100309af8 */

void FUN_100309af8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100309b00 | FUN_100309b00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100309b00(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100309b24 | FUN_100309b24 */

void FUN_100309b24(void)

{
  FUN_100309924();
  return;
}



/* Address: 0x100309b2c | FUN_100309b2c */

void FUN_100309b2c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100309b3c | FUN_100309b3c */

void FUN_100309b3c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fbde58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002fbbd0(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3f9cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3f9cc,uVar1);
  DAT_100fbde58 = pTVar2;
  return;
}



/* Address: 0x100309b80 | thunk_FUN_100309ae4 */

void thunk_FUN_100309ae4(void)

{
  FUN_100309ae4();
  return;
}



/* Address: 0x100309b84 | thunk_FUN_100309ae4 */

void thunk_FUN_100309ae4(void)

{
  FUN_100309ae4();
  return;
}



/* Address: 0x100309b88 | thunk_FUN_100309af8 */

void thunk_FUN_100309af8(void)

{
  FUN_100309af8();
  return;
}



/* Address: 0x100309b8c | thunk_FUN_100309af8 */

void thunk_FUN_100309af8(void)

{
  FUN_100309af8();
  return;
}



/* Address: 0x100309b90 | thunk_FUN_100309ac8 */

void thunk_FUN_100309ac8(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  long unaff_x20;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    **(undefined1 **)(unaff_x20 + 0x10) = 0;
    *param_4 = 1;
  }
  return;
}



/* Address: 0x100309b94 | thunk_FUN_100309ab8 */

void thunk_FUN_100309ab8(void)

{
  FUN_100309ab8();
  return;
}



/* Address: 0x100309b98 | thunk_FUN_100309b2c */

void thunk_FUN_100309b2c(void)

{
  FUN_100309b2c();
  return;
}



/* Address: 0x100309b9c | thunk_FUN_100309b2c */

void thunk_FUN_100309b2c(void)

{
  FUN_100309b2c();
  return;
}



/* Address: 0x100309ba0 | FUN_100309ba0 */

double FUN_100309ba0(double param_1)

{
  return param_1 / 1000.0;
}



/* Address: 0x100309bb4 | FUN_100309bb4 */

double FUN_100309bb4(double param_1)

{
  return param_1 * 60.0;
}



/* Address: 0x100309bc4 | FUN_100309bc4 */

double FUN_100309bc4(double param_1)

{
  return param_1 * 3600.0;
}



/* Address: 0x100309bd8 | FUN_100309bd8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100309bd8(undefined8 param_1,ID param_2)

{
  ID IVar1;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  objc_stub::size(param_2);
  IVar1 = objc_stub::initWithCGImage_size_(unaff_x20,param_1);
  return IVar1;
}



/* Address: 0x100309c3c | thunk_FUN_100309e0c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String thunk_FUN_100309e0c(undefined *param_1,undefined8 param_2,undefined8 param_3,Calendar param_4
                          )

{
  undefined *puVar1;
  Component CVar2;
  Date DVar3;
  long lVar4;
  undefined7 extraout_var;
  Set<Component> SVar5;
  undefined1 *puVar6;
  DateComponents DVar7;
  NSDateComponents *pNVar8;
  ID IVar9;
  Date DVar10;
  NSDate *pNVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long extraout_x12;
  code *pcVar14;
  Date to;
  long lVar15;
  Date DVar16;
  long lVar17;
  long lVar18;
  Date DVar19;
  ulong uVar20;
  undefined *puVar21;
  String SVar22;
  undefined1 auStack_a0 [8];
  ID IStack_98;
  long lStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  Date DStack_68;
  
  DStack_68.unknown = param_1;
  puStack_70 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  lVar15 = *(long *)(puStack_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_78 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  lStack_80 = *(long *)(puStack_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lStack_80 + 0x40));
  DVar16.unknown = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  to.unknown = DVar16.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar19.unknown = to.unknown + -extraout_x12;
  lVar4 = 0;
  FUN_10030a6c4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar21 = DVar19.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_10030a900(param_2,puVar21);
  DVar10.unknown = puVar21;
  _swift_getEnumCaseMultiPayload(puVar21,lVar4);
  if ((int)DVar10.unknown == 0) {
    DVar10.unknown = DVar19.unknown;
    (**(code **)(lVar17 + 0x20))(DVar19.unknown,puVar21,DVar3.unknown);
    if (DAT_100fbe878 != -1) {
      DVar10.unknown = (undefined *)&DAT_100fbe878;
      _swift_once(&DAT_100fbe878,FUN_100309c40);
    }
    IVar9 = DAT_100fbe880;
    DVar10.unknown = Foundation::Date::_bridgeToObjectiveC(DVar10);
    pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    objc_stub::localizedStringForDate_relativeToDate_(IVar9,DVar10.unknown,pNVar11);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar14 = *(code **)(lVar17 + 8);
    goto LAB_10030a300;
  }
  if ((int)DVar10.unknown != 1) {
    if (DAT_100fbe850 != -1) {
      DVar10.unknown = (undefined *)&DAT_100fbe850;
      _swift_once(&DAT_100fbe850,FUN_100309cd0);
    }
    IVar9 = DAT_100fbe858;
    pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    objc_stub::stringFromDate_(IVar9,pNVar11);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    return SVar22;
  }
  DVar10.unknown = to.unknown;
  lStack_90 = lVar17;
  puStack_88 = DVar3.unknown;
  (**(code **)(lVar17 + 0x20))(to.unknown,puVar21,DVar3.unknown);
  if (DAT_100fbe860 != -1) {
    DVar10.unknown = (undefined *)&DAT_100fbe860;
    _swift_once(&DAT_100fbe860,FUN_100309c7c);
  }
  IStack_98 = DAT_100fbe868;
  Foundation::Calendar::get_current((Calendar)DVar10.unknown);
  puVar21 = &DAT_100fbe870;
  FUN_1000037f0(&DAT_100fbe870,&DAT_100c44940);
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,CVar2.value);
  lVar18 = *(long *)(lVar4 + -8);
  lVar17 = *(long *)(lVar18 + 0x48);
  uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar20 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar21,uVar20 + lVar17 * 6,uVar13 | 7);
  *(undefined8 *)(puVar21 + 0x18) = 0xc;
  *(undefined8 *)(puVar21 + 0x10) = 6;
  puVar1 = puVar21 + uVar20;
  pcVar14 = *(code **)(lVar18 + 0x68);
  (*pcVar14)(puVar1,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Component_year_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7638
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_month_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7640
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 2,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 3,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_hour_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7630
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 4,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_minute_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7648
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 5,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_second_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7650
             ,lVar4);
  SVar5.unknown = puVar21;
  FUN_1002fcc90();
  _swift_setDeallocating(puVar21);
  _swift_arrayDestroy(puVar1,6,lVar4);
  _swift_deallocClassInstance(puVar21,0x20,7);
  Foundation::Calendar::dateComponents(SVar5,DStack_68,to,param_4);
  _swift_bridgeObjectRelease(SVar5.unknown);
  puVar21 = puStack_70;
  (**(code **)(lVar15 + 8))(puVar6);
  uVar12 = (uint)puVar21;
  FUN_100309d18();
  IVar9 = IStack_98;
  if ((uVar12 & 0xff) == 1) {
LAB_10030a270:
    (**(code **)(lStack_80 + 8))(DVar16.unknown,puStack_78);
    if (DAT_100fbe878 != -1) {
      DVar16.unknown = (undefined *)&DAT_100fbe878;
      _swift_once(&DAT_100fbe878,FUN_100309c40);
    }
    IVar9 = DAT_100fbe880;
    DVar10.unknown = Foundation::Date::_bridgeToObjectiveC(DVar16);
    pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    objc_stub::localizedStringForDate_relativeToDate_(IVar9,DVar10.unknown,pNVar11);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  else {
    DVar7.unknown = (undefined *)objc_stub::setAllowedUnits_(IStack_98,puVar6);
    pNVar8 = Foundation::DateComponents::_bridgeToObjectiveC(DVar7);
    IVar9 = objc_stub::stringFromDateComponents_(IVar9,pNVar8);
    if (IVar9 == 0) goto LAB_10030a270;
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    (**(code **)(lStack_80 + 8))(DVar16.unknown,puStack_78);
  }
  pcVar14 = *(code **)(lStack_90 + 8);
  DVar19.unknown = to.unknown;
  DVar3.unknown = puStack_88;
LAB_10030a300:
  (*pcVar14)(DVar19.unknown,DVar3.unknown);
  return SVar22;
}



/* Address: 0x100309c40 | FUN_100309c40 */

void FUN_100309c40(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSRelativeDateTimeFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setDateTimeStyle_(self_00,1);
  DAT_100fbe880 = self_00;
  return;
}



/* Address: 0x100309c7c | FUN_100309c7c */

void FUN_100309c7c(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSDateComponentsFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setIncludesApproximationPhrase_(self_00,0);
  objc_stub::setMaximumUnitCount_(self_00,1);
  objc_stub::setUnitsStyle_(self_00,1);
  DAT_100fbe868 = self_00;
  return;
}



/* Address: 0x100309cd0 | FUN_100309cd0 */

void FUN_100309cd0(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setDateStyle_(self_00,2);
  objc_stub::setTimeStyle_(self_00,1);
  DAT_100fbe858 = self_00;
  return;
}



/* Address: 0x100309d18 | FUN_100309d18 */

undefined1  [16] FUN_100309d18(DateComponents param_1,uint param_2)

{
  undefined8 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  
  Foundation::DateComponents::_get_year(param_1);
  bVar2 = (param_2 & 0xff) == 1;
  if ((!bVar2 && param_1.unknown != (undefined *)0x0) && (bVar2 || -1 < (long)param_1.unknown)) {
    return ZEXT816(4);
  }
  Foundation::DateComponents::_get_month(param_1);
  if (((param_2 & 0xff) != 1) && (0 < (long)param_1.unknown)) {
    return ZEXT816(8);
  }
  Foundation::DateComponents::_get_day(param_1);
  if (((param_2 & 0xff) != 1) && (0 < (long)param_1.unknown)) {
    return ZEXT816(0x10);
  }
  Foundation::DateComponents::_get_hour(param_1);
  if (((param_2 & 0xff) != 1) && (0 < (long)param_1.unknown)) {
    return ZEXT816(0x20);
  }
  Foundation::DateComponents::_get_minute(param_1);
  if (((param_2 & 0xff) != 1) && (0 < (long)param_1.unknown)) {
    return ZEXT816(0x40);
  }
  Foundation::DateComponents::_get_second(param_1);
  bVar2 = (param_2 & 0xff) == 1;
  uVar1 = 0;
  if (!bVar2 && (long)param_1.unknown >= 1) {
    uVar1 = 0x80;
  }
  auVar3[8] = bVar2 || (long)param_1.unknown < 1;
  auVar3._0_8_ = uVar1;
  auVar3._9_7_ = 0;
  return auVar3;
}



/* Address: 0x100309e0c | FUN_100309e0c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100309e0c(undefined *param_1,undefined8 param_2,undefined8 param_3,Calendar param_4)

{
  undefined *puVar1;
  Component CVar2;
  Date DVar3;
  long lVar4;
  undefined7 extraout_var;
  Set<Component> SVar5;
  undefined1 *puVar6;
  DateComponents DVar7;
  NSDateComponents *pNVar8;
  ID IVar9;
  Date DVar10;
  NSDate *pNVar11;
  uint uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar13;
  long extraout_x12;
  code *pcVar14;
  Date to;
  long lVar15;
  Date DVar16;
  long lVar17;
  long lVar18;
  Date DVar19;
  ulong uVar20;
  undefined *puVar21;
  String SVar22;
  undefined1 auStack_a0 [8];
  ID local_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  undefined *puStack_78;
  undefined *local_70;
  Date local_68;
  
  local_68.unknown = param_1;
  local_70 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  lVar15 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_78 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_80 = *(long *)(puStack_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  DVar16.unknown = puVar6 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  to.unknown = DVar16.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar19.unknown = to.unknown + -extraout_x12;
  lVar4 = 0;
  FUN_10030a6c4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar21 = DVar19.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  FUN_10030a900(param_2,puVar21);
  DVar10.unknown = puVar21;
  _swift_getEnumCaseMultiPayload(puVar21,lVar4);
  if ((int)DVar10.unknown == 0) {
    DVar10.unknown = DVar19.unknown;
    (**(code **)(lVar17 + 0x20))(DVar19.unknown,puVar21,DVar3.unknown);
    if (DAT_100fbe878 != -1) {
      DVar10.unknown = (undefined *)&DAT_100fbe878;
      _swift_once(&DAT_100fbe878,FUN_100309c40);
    }
    IVar9 = DAT_100fbe880;
    DVar10.unknown = Foundation::Date::_bridgeToObjectiveC(DVar10);
    pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    objc_stub::localizedStringForDate_relativeToDate_(IVar9,DVar10.unknown,pNVar11);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar14 = *(code **)(lVar17 + 8);
    goto LAB_10030a300;
  }
  if ((int)DVar10.unknown != 1) {
    if (DAT_100fbe850 != -1) {
      DVar10.unknown = (undefined *)&DAT_100fbe850;
      _swift_once(&DAT_100fbe850,FUN_100309cd0);
    }
    IVar9 = DAT_100fbe858;
    pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    objc_stub::stringFromDate_(IVar9,pNVar11);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    return SVar22;
  }
  DVar10.unknown = to.unknown;
  local_90 = lVar17;
  puStack_88 = DVar3.unknown;
  (**(code **)(lVar17 + 0x20))(to.unknown,puVar21,DVar3.unknown);
  if (DAT_100fbe860 != -1) {
    DVar10.unknown = (undefined *)&DAT_100fbe860;
    _swift_once(&DAT_100fbe860,FUN_100309c7c);
  }
  local_98 = DAT_100fbe868;
  Foundation::Calendar::get_current((Calendar)DVar10.unknown);
  puVar21 = &DAT_100fbe870;
  FUN_1000037f0(&DAT_100fbe870,&DAT_100c44940);
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,CVar2.value);
  lVar18 = *(long *)(lVar4 + -8);
  lVar17 = *(long *)(lVar18 + 0x48);
  uVar13 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar20 = uVar13 + 0x20 & (uVar13 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar21,uVar20 + lVar17 * 6,uVar13 | 7);
  *(undefined8 *)(puVar21 + 0x18) = 0xc;
  *(undefined8 *)(puVar21 + 0x10) = 6;
  puVar1 = puVar21 + uVar20;
  pcVar14 = *(code **)(lVar18 + 0x68);
  (*pcVar14)(puVar1,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Component_year_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7638
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_month_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7640
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 2,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 3,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_hour_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7630
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 4,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_minute_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7648
             ,lVar4);
  (*pcVar14)(puVar1 + lVar17 * 5,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_second_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7650
             ,lVar4);
  SVar5.unknown = puVar21;
  FUN_1002fcc90();
  _swift_setDeallocating(puVar21);
  _swift_arrayDestroy(puVar1,6,lVar4);
  _swift_deallocClassInstance(puVar21,0x20,7);
  Foundation::Calendar::dateComponents(SVar5,local_68,to,param_4);
  _swift_bridgeObjectRelease(SVar5.unknown);
  puVar21 = local_70;
  (**(code **)(lVar15 + 8))(puVar6);
  uVar12 = (uint)puVar21;
  FUN_100309d18();
  IVar9 = local_98;
  if ((uVar12 & 0xff) == 1) {
LAB_10030a270:
    (**(code **)(local_80 + 8))(DVar16.unknown,puStack_78);
    if (DAT_100fbe878 != -1) {
      DVar16.unknown = (undefined *)&DAT_100fbe878;
      _swift_once(&DAT_100fbe878,FUN_100309c40);
    }
    IVar9 = DAT_100fbe880;
    DVar10.unknown = Foundation::Date::_bridgeToObjectiveC(DVar16);
    pNVar11 = Foundation::Date::_bridgeToObjectiveC(DVar10);
    objc_stub::localizedStringForDate_relativeToDate_(IVar9,DVar10.unknown,pNVar11);
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  else {
    DVar7.unknown = (undefined *)objc_stub::setAllowedUnits_(local_98,puVar6);
    pNVar8 = Foundation::DateComponents::_bridgeToObjectiveC(DVar7);
    IVar9 = objc_stub::stringFromDateComponents_(IVar9,pNVar8);
    if (IVar9 == 0) goto LAB_10030a270;
    SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    (**(code **)(local_80 + 8))(DVar16.unknown,puStack_78);
  }
  pcVar14 = *(code **)(local_90 + 8);
  DVar19.unknown = to.unknown;
  DVar3.unknown = puStack_88;
LAB_10030a300:
  (*pcVar14)(DVar19.unknown,DVar3.unknown);
  return SVar22;
}



/* Address: 0x10030a38c | FUN_10030a38c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10030a38c(void)

{
  return ZEXT816(0x100fbe750);
}



/* Address: 0x10030a3ac | FUN_10030a3ac */

long * FUN_10030a3ac(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 1) {
      DVar2 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
      uVar4 = 1;
    }
    else {
      if ((int)plVar3 != 0) {
        plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar6 + 0x40));
        return plVar3;
      }
      DVar2 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
      uVar4 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10030a49c | FUN_10030a49c */

void FUN_10030a49c(undefined8 param_1)

{
  undefined8 uVar1;
  Date DVar2;
  
  uVar1 = param_1;
  _swift_getEnumCaseMultiPayload();
  if ((uint)uVar1 < 2) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010030a4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1,DVar2.unknown);
    return;
  }
  return;
}



/* Address: 0x10030a4e8 | FUN_10030a4e8 */

void * FUN_10030a4e8(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 1) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
    uVar3 = 1;
  }
  else {
    if ((int)pvVar2 != 0) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x10030a5b0 | FUN_10030a5b0 */

void * FUN_10030a5b0(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10030a688(param_1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 == 1) {
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
      uVar3 = 1;
    }
    else {
      if ((int)pvVar2 != 0) {
        pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return pvVar2;
      }
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
      uVar3 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}



/* Address: 0x10030a688 | FUN_10030a688 */

undefined8 FUN_10030a688(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10030a6c4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10030a6c4 | FUN_10030a6c4 */

void FUN_10030a6c4(undefined8 param_1)

{
  if (DAT_100fbe818 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100cabde8);
  return;
}



/* Address: 0x10030a6fc | FUN_10030a6fc */

void * FUN_10030a6fc(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 1) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
    uVar3 = 1;
  }
  else {
    if ((int)pvVar2 != 0) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    DVar1 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x10030a7c4 | FUN_10030a7c4 */

void * FUN_10030a7c4(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10030a688(param_1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 == 1) {
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
      uVar3 = 1;
    }
    else {
      if ((int)pvVar2 != 0) {
        pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return pvVar2;
      }
      DVar1 = Foundation::Date::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
      uVar3 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}



/* Address: 0x10030a89c | FUN_10030a89c */

undefined1  [16] FUN_10030a89c(undefined8 param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  long lStack_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(DVar1.unknown + -8) + 0x40;
    lStack_28 = local_30;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
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



/* Address: 0x10030a900 | FUN_10030a900 */

undefined8 FUN_10030a900(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10030a6c4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10030a944 | FUN_10030a944 */

void FUN_10030a944(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10030a950 | FUN_10030a950 */

undefined1  [16] FUN_10030a950(void)

{
  return ZEXT816(0x100eca1c0);
}



/* Address: 0x10030a960 | FUN_10030a960 */

undefined1  [16] FUN_10030a960(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  char *pcVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 (*unaff_x20) [16];
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  auVar5 = *unaff_x20;
  pcVar3 = *(char **)unaff_x20[1];
  pvVar4 = *(void **)(unaff_x20[1] + 8);
  _swift_bridgeObjectRetain();
  SVar6.bridgeObject = &SUB_e200000000000000;
  SVar6.str = (char *)0x203a;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar6,SVar8);
  pcVar1 = (char *)0x6f73616572206f6e;
  if (pvVar4 != (void *)0x0) {
    pcVar1 = pcVar3;
  }
  pvVar2 = (void *)0xe90000000000006e;
  if (pvVar4 != (void *)0x0) {
    pvVar2 = pvVar4;
  }
  _swift_bridgeObjectRetain(pvVar4);
  SVar7.bridgeObject = pvVar2;
  SVar7.str = pcVar1;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(pvVar2);
  return auVar5;
}



/* Address: 0x10030a9f0 | FUN_10030a9f0 */

/* WARNING: Removing unreachable block (ram,0x00010030aa18) */

void FUN_10030a9f0(void)

{
  FUN_1002ff5a8(FUN_10030b4c0,0);
  return;
}



/* Address: 0x10030aa3c | FUN_10030aa3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10030aa3c(undefined8 param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  UUID UVar11;
  char *pcVar12;
  char *pcVar13;
  long extraout_x8;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  _ArrayBuffer _Var18;
  long unaff_x21;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined *local_150;
  ulong local_148;
  ulong local_140;
  undefined *local_138;
  undefined *local_130;
  _ArrayBuffer local_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long local_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  long local_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  undefined *local_c0;
  undefined8 local_b8;
  char *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined8 local_78;
  long lStack_70;
  
  local_c0 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_d0 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  local_e0 = (long)&local_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b8 = param_1;
  FUN_100357e58(auStack_90);
  lVar14 = lStack_70;
  uVar5 = local_78;
  FUN_100004640(auStack_90,local_78);
  (**(code **)(*(long *)(lVar14 + 8) + 0x28))();
  local_f0 = uVar5;
  FUN_100004594(auStack_90);
  puVar6 = &DAT_100fbe6d0;
  FUN_1000037f0(&DAT_100fbe6d0,&DAT_100c407e0);
  local_e8 = puVar6;
  _swift_allocObject();
  puVar7 = puVar6;
  _malloc_size();
  lVar14 = 0;
  puVar9 = puVar7 + -0x19;
  if (0x1f < (long)puVar7) {
    puVar9 = puVar7 + -0x20;
  }
  *(undefined8 *)(puVar6 + 0x10) = 400;
  *(long *)(puVar6 + 0x18) = ((long)puVar9 >> 3) << 1;
  lVar22 = 2;
  lVar21 = 1;
  do {
    *(long *)(puVar6 + lVar14 + 0x28) = lVar22;
    *(long *)(puVar6 + lVar14 + 0x20) = lVar21;
    *(long *)(puVar6 + lVar14 + 0x38) = lVar22 + 2;
    *(long *)(puVar6 + lVar14 + 0x30) = lVar21 + 2;
    *(long *)(puVar6 + lVar14 + 0x48) = lVar22 + 4;
    *(long *)(puVar6 + lVar14 + 0x40) = lVar21 + 4;
    *(long *)(puVar6 + lVar14 + 0x58) = lVar22 + 6;
    *(long *)(puVar6 + lVar14 + 0x50) = lVar21 + 6;
    lVar21 = lVar21 + 8;
    lVar22 = lVar22 + 8;
    lVar14 = lVar14 + 0x40;
  } while (lVar14 != 0xc40);
  *(undefined8 *)(puVar6 + 0xc60) = 0x189;
  *(undefined8 *)(puVar6 + 0xc68) = 0x18a;
  *(undefined8 *)(puVar6 + 0xc70) = 0x18b;
  *(undefined8 *)(puVar6 + 0xc78) = 0x18c;
  *(undefined8 *)(puVar6 + 0xc80) = 0x18d;
  *(undefined8 *)(puVar6 + 0xc88) = 0x18e;
  *(undefined8 *)(puVar6 + 0xc90) = 399;
  *(undefined8 *)(puVar6 + 0xc98) = 400;
  local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar15 = *(ulong *)(puVar6 + 0x10);
  if (uVar15 != 0) {
    uVar19 = 0;
    do {
      pcVar13 = local_a0;
      if (*(ulong *)(puVar6 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10030b208);
        (*pcVar16)();
      }
      FUN_100357cf0(auStack_90);
      lVar14 = lStack_70;
      uVar5 = local_78;
      puVar8 = auStack_90;
      FUN_100004640(puVar8,local_78);
      FUN_10030b25c(uVar5,lVar14,puVar8);
      if (unaff_x21 != 0) {
        _swift_release(puVar6);
        FUN_100004594(auStack_90);
        _swift_bridgeObjectRelease(pcVar13);
        return;
      }
      FUN_100004594(auStack_90);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar17 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x10);
      uVar20 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x18);
      if (uVar20 >> 1 <= uVar17) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar20,uVar17 + 1,1);
      }
      uVar19 = uVar19 + 1;
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar17,uVar5);
    } while (uVar15 != uVar19);
  }
  pcVar13 = local_a0;
  _swift_release(puVar6);
  FUN_100357cf0(auStack_90);
  lVar14 = lStack_70;
  uVar5 = local_78;
  FUN_100004640(auStack_90,local_78);
  lVar14 = *(long *)(lVar14 + 0x10);
  pcVar16 = *(code **)(lVar14 + 0x28);
  puVar6 = &DAT_100fbe920;
  local_a0 = pcVar13;
  FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
  puVar9 = puVar6;
  FUN_10030b508();
  local_138 = puVar9;
  local_130 = puVar6;
  (*pcVar16)(&local_a0,local_f0,puVar6,puVar9,uVar5,lVar14);
  _swift_bridgeObjectRelease(pcVar13);
  FUN_100004594(auStack_90);
  pcVar13 = (char *)0x7;
  puVar7 = local_e8;
  _swift_allocObject(local_e8,0x38);
  puVar10 = puVar7;
  _malloc_size();
  uVar15 = 0;
  puVar6 = puVar10 + -0x19;
  if (0x1f < (long)puVar10) {
    puVar6 = puVar10 + -0x20;
  }
  *(undefined8 *)(puVar7 + 0x10) = 3;
  *(long *)(puVar7 + 0x18) = ((long)puVar6 >> 3) << 1;
  lStack_f8 = 2;
  local_100 = 1;
  *(undefined8 *)(puVar7 + 0x28) = 2;
  *(undefined8 *)(puVar7 + 0x20) = 1;
  *(undefined8 *)(puVar7 + 0x30) = 3;
  _Var18.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    if (*(ulong *)(puVar7 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10030b200);
      (*pcVar16)();
    }
    FUN_100357e58(auStack_90);
    lVar21 = lStack_70;
    uVar5 = local_78;
    FUN_100004640(auStack_90,local_78);
    lVar14 = local_e0;
    UVar11 = Foundation::UUID::init();
    SVar23 = Foundation::UUID::get_uuidString(UVar11);
    pcVar12 = SVar23.str;
    (**(code **)(local_d0 + 8))(lVar14,local_c0);
    local_a0 = (char *)0x6472616f626e6950;
    local_98 = (undefined *)0xe900000000000020;
    SVar24 = Swift::CustomStringConvertible::get_description();
    SVar25.bridgeObject = puVar9;
    SVar25.str = pcVar13;
    Swift::String::append(SVar24,SVar25);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    puVar6 = local_98;
    pcVar13 = local_a0;
    local_a0 = (char *)0x0;
    _swift_stdlib_random(&local_a0,8);
    puVar9 = puVar6;
    (**(code **)(*(long *)(lVar21 + 0x10) + 8))
              (pcVar12,SVar23.bridgeObject,pcVar13,puVar6,(&DAT_100fbe958)[(ulong)local_a0 >> 0x3d],
               uVar5);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    _swift_bridgeObjectRelease(puVar6);
    FUN_100004594(auStack_90);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar19 = *(ulong *)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10);
    uVar17 = *(ulong *)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x18);
    if (uVar17 >> 1 <= uVar19) {
      pcVar13 = &DAT_00000001;
      Swift::Array<undefined>::__createNewBuffer(1 < uVar17,uVar19 + 1);
    }
    uVar15 = uVar15 + 1;
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar19,pcVar12);
  } while (uVar15 != 3);
  _swift_release(puVar7);
  if ((ulong)_Var18.unknown >> 0x3e == 0) {
    uVar15 = *(ulong *)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var18.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var18.unknown) {
      _Var1.unknown = _Var18.unknown;
    }
    uVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar15 != 0) {
    uVar19 = 0;
    local_c0 = _Var18.unknown & 0xc000000000000001;
    local_148 = (ulong)_Var18.unknown & 0xffffffffffffff8;
    local_150 = _Var18.unknown + 0x20;
    lStack_d8 = 4;
    local_e0 = 4;
    lStack_c8 = 2;
    local_d0 = 2;
    lStack_108 = 6;
    local_110 = 6;
    lStack_118 = 8;
    local_120 = 8;
    local_128.unknown = _Var18.unknown;
    local_140 = uVar15;
    do {
      if (local_c0 == (undefined *)0x0) {
        if (*(ulong *)(local_148 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x10030b25c);
          (*pcVar16)();
        }
        uVar15 = *(ulong *)(local_150 + uVar19 * 8);
      }
      else {
        uVar15 = uVar19;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar19,local_128);
      }
      bVar4 = SCARRY8(uVar19,1);
      uVar19 = uVar19 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x10030b20c);
        (*pcVar16)();
      }
      puVar9 = local_e8;
      _swift_allocObject(local_e8,0x1f60,7);
      puVar7 = puVar9;
      _malloc_size();
      puVar6 = puVar7 + -0x19;
      if (0x1f < (long)puVar7) {
        puVar6 = puVar7 + -0x20;
      }
      *(undefined8 *)(puVar9 + 0x10) = 1000;
      *(long *)(puVar9 + 0x18) = ((long)puVar6 >> 3) << 1;
      lVar14 = -0x1f00;
      lVar21 = local_100;
      lVar22 = lStack_f8;
      do {
        *(long *)(puVar9 + lVar14 + 0x1f28) = lVar22;
        *(long *)(puVar9 + lVar14 + 0x1f20) = lVar21;
        *(long *)(puVar9 + lVar14 + 0x1f38) = lVar22 + lStack_c8;
        *(long *)(puVar9 + lVar14 + 0x1f30) = lVar21 + local_d0;
        *(long *)(puVar9 + lVar14 + 0x1f48) = lVar22 + lStack_d8;
        *(long *)(puVar9 + lVar14 + 8000) = lVar21 + local_e0;
        *(long *)(puVar9 + lVar14 + 0x1f58) = lVar22 + lStack_108;
        *(long *)(puVar9 + lVar14 + 0x1f50) = lVar21 + local_110;
        lVar21 = lVar21 + local_120;
        lVar22 = lVar22 + lStack_118;
        lVar14 = lVar14 + 0x40;
      } while (lVar14 != 0);
      *(undefined8 *)(puVar9 + 0x1f20) = 0x3e1;
      *(undefined8 *)(puVar9 + 0x1f28) = 0x3e2;
      *(undefined8 *)(puVar9 + 0x1f30) = 0x3e3;
      *(undefined8 *)(puVar9 + 0x1f38) = 0x3e4;
      *(undefined8 *)(puVar9 + 8000) = 0x3e5;
      *(undefined8 *)(puVar9 + 0x1f48) = 0x3e6;
      *(undefined8 *)(puVar9 + 0x1f50) = 999;
      *(undefined8 *)(puVar9 + 0x1f58) = 1000;
      local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar17 = *(ulong *)(puVar9 + 0x10);
      if (uVar17 != 0) {
        uVar20 = 0;
        do {
          pcVar13 = local_a0;
          if (*(ulong *)(puVar9 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x10030b204);
            (*pcVar16)();
          }
          FUN_100357cf0(auStack_90);
          lVar14 = lStack_70;
          uVar5 = local_78;
          puVar8 = auStack_90;
          FUN_100004640(puVar8,local_78);
          FUN_10030b25c(uVar5,lVar14,puVar8);
          if (unaff_x21 != 0) {
            _swift_release(puVar9);
            _swift_bridgeObjectRelease(local_128.unknown);
            FUN_100004594(auStack_90);
            _swift_bridgeObjectRelease(pcVar13);
            return;
          }
          FUN_100004594(auStack_90);
          Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
          uVar2 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x10);
          uVar3 = *(ulong *)(((ulong)local_a0 & 0xffffffffffffff8) + 0x18);
          if (uVar3 >> 1 <= uVar2) {
            Swift::Array<undefined>::__createNewBuffer(1 < uVar3,uVar2 + 1,1);
          }
          uVar20 = uVar20 + 1;
          Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar2,uVar5);
        } while (uVar17 != uVar20);
      }
      pcVar13 = local_a0;
      _swift_release(puVar9);
      FUN_100357cf0(auStack_90);
      lVar14 = lStack_70;
      uVar5 = local_78;
      FUN_100004640(auStack_90,local_78);
      local_a0 = pcVar13;
      (**(code **)(*(long *)(lVar14 + 0x10) + 0x28))(&local_a0,uVar15,local_130,local_138,uVar5);
      _swift_bridgeObjectRelease(pcVar13);
      FUN_100004594(auStack_90);
      _Var18.unknown = local_128.unknown;
    } while (uVar19 != local_140);
  }
  _swift_bridgeObjectRelease(_Var18.unknown);
  return;
}



/* Address: 0x10030b25c | FUN_10030b25c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_10030b25c(undefined8 param_1,long param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  UUID UVar2;
  UUID UVar3;
  char *pcVar4;
  undefined *puVar5;
  ID IVar6;
  UTType UVar7;
  UTType UVar8;
  void *self;
  void *pvVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_a0 [8];
  void *local_98;
  undefined *local_90;
  long local_88;
  
  local_88 = param_2;
  local_90 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar12 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  UVar3 = Foundation::UUID::init();
  SVar13 = Foundation::UUID::get_uuidString(UVar3);
  pvVar9 = SVar13.bridgeObject;
  pcVar4 = SVar13.str;
  (**(code **)(lVar11 + 8))
            ((long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
             (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar13,SVar14);
  local_98 = (void *)0x2d6d657469;
  puVar5 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  IVar6 = 0;
  FUN_100381740();
  _objc_allocWithZone();
  UVar7.unknown = (undefined *)objc_stub::init(IVar6);
  UVar8 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar7);
  SVar13 = UniformTypeIdentifiers::UTType::get_identifier(UVar8);
  pvVar10 = SVar13.bridgeObject;
  (**(code **)(lVar12 + 8))(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),local_90);
  FUN_10037c4a8(pcVar4,pvVar9,SVar13.str,pvVar10);
  _swift_bridgeObjectRelease(pvVar10);
  *(undefined **)(puVar5 + 0x20) = UVar7.unknown;
  self = local_98;
  (**(code **)(*(long *)(local_88 + 0x10) + 8))(local_98,&DAT_e500000000000000,puVar5,param_1);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(&DAT_e500000000000000);
    _swift_release(puVar5);
    IVar6 = objc_stub::managedObjectContext((ID)self);
    if (IVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10030b4c0);
      (*pcVar1)();
    }
    FUN_10030b558(pcVar4,pvVar9,IVar6);
    _swift_bridgeObjectRelease(pvVar9);
    objc_stub::setSourceApplication_((ID)self,pcVar4);
  }
  else {
    _swift_bridgeObjectRelease(pvVar9);
    _swift_bridgeObjectRelease(&DAT_e500000000000000);
    _swift_release(puVar5);
    self = pvVar10;
  }
  return self;
}



/* Address: 0x10030b4c0 | FUN_10030b4c0 */

void FUN_10030b4c0(undefined1 *param_1)

{
  long unaff_x21;
  
  FUN_10030aa3c();
  if (unaff_x21 == 0) {
    *param_1 = 0;
  }
  return;
}



/* Address: 0x10030b4e8 | FUN_10030b4e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10030b4e8(void)

{
  return ZEXT816(0x100fbe8c8);
}



/* Address: 0x10030b508 | FUN_10030b508 */

void FUN_10030b508(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbe928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbe920;
  FUN_100005c24(&DAT_100fbe920,&DAT_100c408d0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fbe928 = puVar2;
  return;
}



/* Address: 0x10030b558 | FUN_10030b558 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10030b558(char *param_1,void *param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 *self;
  ID IVar3;
  NSString *pNVar4;
  Data DVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong extraout_x1;
  NSData *pNVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  SVar9.bridgeObject = param_2;
  SVar9.str = param_1;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar9,SVar11);
  lVar6 = 0x2e7070612e6d6f63;
  puVar7 = &DAT_e800000000000000;
  FUN_10030b7b4(0);
  SVar10.bridgeObject = param_2;
  SVar10.str = param_1;
  uVar2 = Swift::String::get_hashValue(SVar10);
  self = (undefined1 *)
         objc_stub::colorWithRed_green_blue_alpha_
                   ((ID)&_OBJC_CLASS___NSColor,(double)(uVar2 >> 0x10 & 0xff) / 255.0,
                    (double)(uVar2 >> 8 & 0xff) / 255.0,(double)(uVar2 & 0xff) / 255.0,
                    0x3ff0000000000000);
  FUN_1000f4310(0x4040000000000000,0x4040000000000000,0,self,0);
  IVar3 = 0;
  FUN_100311d0c();
  _objc_allocWithZone();
  IVar3 = objc_stub::initWithContext_(IVar3,param_3);
  objc_stub::setSize_((ID)self,0x4060000000000000,0x4060000000000000);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::FUN_100c0aca0(IVar3,pNVar4);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setName_(IVar3,pNVar4);
  DVar5.unknown = self;
  uVar2 = extraout_x1;
  FUN_1003c89c8();
  pNVar8 = (NSData *)0x0;
  if (uVar2 >> 0x3c < 0xf) {
    pNVar8 = Foundation::Data::_bridgeToObjectiveC(DVar5);
    FUN_10003bf18(DVar5.unknown,uVar2);
  }
  objc_stub::setRawIcon_(IVar3,pNVar8);
  FUN_100311f7c(0x2e7070612e6d6f63,&DAT_e800000000000000);
  _swift_bridgeObjectRelease();
  if ((lVar6 == 0) && (FUN_1003c8664(), puVar7 = self, self == (undefined1 *)0x0)) {
    puVar7 = (undefined1 *)objc_stub::FUN_100c03140((ID)&_OBJC_CLASS___NSColor);
  }
  FUN_100308c8c();
  if ((long)puVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10030b7b4);
    (*pcVar1)();
  }
  objc_stub::setRawColor_(IVar3,puVar7);
  return IVar3;
}



/* Address: 0x10030b7b4 | FUN_10030b7b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10030b7b4(void)

{
  undefined *puVar1;
  
  if (DAT_100fbe960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSImage;
  _swift_getObjCClassMetadata();
  DAT_100fbe960 = puVar1;
  return;
}



/* Address: 0x10030b7f8 | FUN_10030b7f8 */

void FUN_10030b7f8(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_10030b810,0,0);
  return;
}



/* Address: 0x10030b810 | FUN_10030b810 */

void FUN_10030b810(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10030b860;
  FUN_10030b89c(0,0);
  return;
}



/* Address: 0x10030b860 | FUN_10030b860 */

void FUN_10030b860(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010030b898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10030b89c | FUN_10030b89c */

void FUN_10030b89c(undefined8 param_1,ulong param_2)

{
  DispatchWorkItemFlags DVar1;
  ulong uVar2;
  DispatchQoS DVar3;
  UUID UVar4;
  long *plVar5;
  long lVar6;
  long unaff_x22;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x50) = DVar1.unknown;
  lVar6 = *(long *)(DVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x68) = DVar3.unknown;
  lVar6 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x70) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x80) = UVar4.unknown;
  lVar6 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x88) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  FUN_1000da768(unaff_x22 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x40);
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10030b984;
  FUN_10030bbfc(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10030b984 | FUN_10030b984 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030b984(undefined8 param_1,long param_2,char *param_3,void *param_4)

{
  long lVar1;
  DispatchWorkItemFlags qos;
  undefined8 uVar2;
  long lVar3;
  UUID UVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  DispatchQoS aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long *unaff_x22;
  long lVar13;
  String SVar14;
  String SVar15;
  
  lVar13 = *unaff_x22;
  lVar9 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0xa0));
  uVar11 = *(undefined8 *)(lVar13 + 0x98);
  if (unaff_x20 == 0) {
    _swift_release(uVar11);
    if (param_2 != 0) goto LAB_10030ba5c;
  }
  else {
    _swift_errorRelease();
    _swift_release(uVar11);
  }
  lVar1 = *(long *)(lVar13 + 0x88);
  uVar11 = *(undefined8 *)(lVar13 + 0x90);
  uVar12 = *(undefined8 *)(lVar13 + 0x80);
  UVar4 = Foundation::UUID::init();
  SVar14 = Foundation::UUID::get_uuidString(UVar4);
  (**(code **)(lVar1 + 8))(uVar11,uVar12);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar14,SVar15);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  param_1 = 0x6c5f6c7566657375;
  param_2 = -0x12ffffa08c949197;
LAB_10030ba5c:
  uVar10 = *(undefined8 *)(lVar13 + 0x90);
  lVar1 = *(long *)(lVar13 + 0x70);
  qos.unknown = *(undefined **)(lVar13 + 0x78);
  uVar11 = *(undefined8 *)(lVar13 + 0x60);
  uVar2 = *(undefined8 *)(lVar13 + 0x68);
  uVar12 = *(undefined8 *)(lVar13 + 0x50);
  lVar3 = *(long *)(lVar13 + 0x58);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fbea08,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  puVar6 = &DAT_100eca258;
  _swift_allocObject(&DAT_100eca258,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = param_1;
  *(long *)(puVar6 + 0x18) = param_2;
  *(code **)(lVar13 + 0x30) = FUN_10030cdfc;
  *(undefined **)(lVar13 + 0x38) = puVar6;
  *(undefined8 *)(lVar13 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(lVar13 + 0x18) = 0x42000000;
  *(code **)(lVar13 + 0x20) = FUN_100030410;
  *(undefined **)(lVar13 + 0x28) = &DAT_100eca270;
  aBlock.unknown = __Block_copy((undefined8 *)(lVar13 + 0x10));
  DVar7 = Dispatch::DispatchQoS::get_unspecified(aBlock);
  *(undefined8 *)(lVar13 + 0x48) = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10030ce20();
  puVar6 = &DAT_100fbea18;
  FUN_1000037f0(&DAT_100fbea18,&DAT_100c43ca0);
  puVar8 = &DAT_100fbea20;
  FUN_1001a7bdc(&DAT_100fbea20,&DAT_100fbea18,&DAT_100c43ca0);
  Swift::SetAlgebra::_init(uVar11,(undefined8 *)(lVar13 + 0x48),puVar6,puVar8,uVar12,DVar7.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock.unknown);
  (**(code **)(lVar3 + 8))(uVar11,uVar12);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar2);
  _swift_release(*(undefined8 *)(lVar13 + 0x38));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(qos.unknown);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010030bbf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))();
  return;
}



/* Address: 0x10030bbfc | FUN_10030bbfc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10030bbfc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  CKQuery *this;
  NSPredicate *pNVar3;
  undefined *puVar4;
  undefined *puVar5;
  CKQuery *matching;
  ID IVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  String recordType;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  this = (CKQuery *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb30,&PTR__OBJC_CLASS___CKQuery_100f8db28);
  bVar2 = false;
  FUN_10032b0c8();
  recordType = Swift::__typeName(bVar2);
  pNVar3 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar4 = &DAT_100fbeb40;
  FUN_1000037f0("%K BEGINSWITH %@",&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar5 = puVar4;
  FUN_10030d9e0();
  *(undefined8 *)(puVar4 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar4 + 0x28) = 0xea00000000007265;
  *(undefined **)(puVar4 + 0x60) = puVar1;
  *(undefined **)(puVar4 + 0x68) = puVar5;
  *(undefined **)(puVar4 + 0x40) = puVar5;
  *(undefined8 *)(puVar4 + 0x48) = 0x6c5f6c7566657375;
  *(undefined8 *)(puVar4 + 0x50) = 0xec000000736b6e69;
  pNVar3 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar3);
  matching = (extension_CloudKit)::__C::CKQuery::__allocating_init(this,recordType,pNVar3);
  *(CKQuery **)(unaff_x22 + 0x20) = matching;
  IVar6 = objc_stub::privateCloudDatabase
                    (*(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::container));
  *(ID *)(unaff_x22 + 0x28) = IVar6;
  plVar7 = (long *)(ulong)*(uint *)(PTR__records_100ea9530 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10030bdb0;
  (extension_CloudKit)::__C::CKDatabase::_records(matching,0);
  return;
}



/* Address: 0x10030bdb0 | FUN_10030bdb0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030bdb0(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x38) = param_1;
  *(long *)(lVar4 + 0x40) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x30));
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  if (unaff_x20 == 0) {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_10030be50;
  }
  else {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_10030bf88;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10030be50 | FUN_10030be50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10030be50(void)

{
  char cVar1;
  ID self;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  String SVar4;
  
  lVar3 = *(long *)(unaff_x22 + 0x38);
  if (*(long *)(lVar3 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar3);
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    cVar1 = *(char *)(lVar3 + 0x30);
    if (cVar1 != '\x01') {
      self = *(ID *)(lVar3 + 0x20);
      FUN_10030da34(uVar2,cVar1);
      objc_stub::recordName(self);
      SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FUN_10030da20(uVar2,cVar1);
      _swift_bridgeObjectRelease(lVar3);
      goto LAB_10030bf60;
    }
    _swift_errorRetain(uVar2);
    FUN_10030da20(uVar2,1);
    _swift_bridgeObjectRelease(lVar3);
  }
  SVar4 = (String)ZEXT816(0);
LAB_10030bf60:
                    /* WARNING: Could not recover jumptable at 0x00010030bf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(SVar4.str,SVar4.bridgeObject);
  return;
}



/* Address: 0x10030bf88 | FUN_10030bf88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030bf88(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010030bfc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10030bfc4 | FUN_10030bfc4 */

/* WARNING: Removing unreachable block (ram,0x00010030bff0) */

void FUN_10030bfc4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_1;
  uStack_28 = param_2;
  FUN_1002ff5a8(FUN_10030ce64,auStack_40);
  return;
}



/* Address: 0x10030c008 | FUN_10030c008 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030c008(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  LocalizedStringResource LVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long unaff_x21;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  String SVar16;
  undefined1 *local_d0;
  undefined8 local_c8;
  long local_c0;
  LocalizedStringResource local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  local_b0 = param_3;
  uStack_a8 = param_4;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  puVar8 = (undefined *)((long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  local_b8.unknown = puVar8;
  FUN_10030ce7c();
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12;
  local_a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  FUN_100357e58(auStack_88);
  lVar5 = lStack_68;
  uVar6 = local_70;
  FUN_100004640(auStack_88,local_70);
  (**(code **)(*(long *)(lVar5 + 8) + 0x18))();
  FUN_100004594(auStack_88);
  FUN_100357e58(auStack_88);
  lVar5 = lStack_68;
  uVar7 = local_70;
  FUN_100004640(auStack_88,local_70);
  (**(code **)(*(long *)(lVar5 + 8) + 0x28))();
  local_98 = uVar7;
  FUN_100004594(auStack_88);
  local_90 = param_2;
  FUN_100357e7c(auStack_88);
  lVar5 = lStack_68;
  uVar7 = local_70;
  FUN_100004640(auStack_88,local_70);
  (**(code **)(*(long *)(lVar5 + 0x10) + 0x18))();
  puVar8 = auStack_88;
  FUN_100004594();
  FUN_1000386a0();
  if ((ulong)puVar8 >> 0x3e == 0) {
    lVar5 = *(long *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
    _swift_bridgeObjectRelease();
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      _Var1.unknown = puVar8;
    }
    lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    _swift_bridgeObjectRelease(puVar8);
  }
  if (lVar5 == 0) {
    local_d0 = param_1;
    local_c8 = uVar6;
    if (DAT_100fbea28 != -1) {
      _swift_once(&DAT_100fbea28,FUN_10030ceb4);
    }
    lVar5 = DAT_100fbea30;
    uVar14 = *(ulong *)(DAT_100fbea30 + 0x10);
    if (uVar14 != 0) {
      uVar13 = 0;
      do {
        if (*(ulong *)(lVar5 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10030c4a8);
          (*pcVar3)();
        }
        FUN_10030d000(lVar5 + ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar15 + 0x48) * uVar13,lVar12 - extraout_x12_01);
        FUN_10030d044(lVar12 - extraout_x12_01,lVar12);
        FUN_100357cf0(auStack_88);
        lVar2 = lStack_68;
        uVar6 = local_70;
        puVar9 = auStack_88;
        FUN_100004640(puVar9,local_70);
        FUN_10030c4c4(lVar12,uVar7,local_98,uVar6,lVar2,puVar9);
        if (unaff_x21 != 0) {
          FUN_10030d088(lVar12);
          _swift_release(local_c8);
          goto LAB_10030c48c;
        }
        uVar13 = uVar13 + 1;
        FUN_10030d088(lVar12);
        FUN_100004594(auStack_88);
      } while (uVar14 != uVar13);
    }
    FUN_100357e58(auStack_88);
    lVar5 = lStack_68;
    uVar6 = local_70;
    FUN_100004640(auStack_88,local_70);
    LVar4.unknown = local_b8.unknown;
    FUN_1001c6c24(local_b8.unknown);
    SVar16 = (extension_Foundation)::Swift::String::init(LVar4);
    uVar10 = local_b0;
    (**(code **)(*(long *)(lVar5 + 0x10) + 8))
              (local_b0,uStack_a8,SVar16.str,SVar16.bridgeObject,0,uVar6);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    puVar9 = auStack_88;
    FUN_100004594();
    FUN_10030d82c();
    lVar5 = local_c0;
    uVar14 = *(ulong *)(puVar9 + 0x10);
    if (uVar14 != 0) {
      uVar13 = 0;
      do {
        lVar12 = local_a0;
        if (*(ulong *)(puVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10030c4ac);
          (*pcVar3)();
        }
        FUN_10030d000(puVar9 + *(long *)(lVar15 + 0x48) * uVar13 +
                               ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)),local_a0);
        FUN_10030d044(lVar12,lVar5);
        FUN_100357cf0(auStack_88);
        lVar12 = lStack_68;
        uVar6 = local_70;
        puVar11 = auStack_88;
        FUN_100004640(puVar11,local_70);
        FUN_10030c4c4(lVar5,uVar7,uVar10,uVar6,lVar12,puVar11);
        if (unaff_x21 != 0) {
          FUN_10030d088(lVar5);
          _swift_bridgeObjectRelease(puVar9);
          _swift_release(local_c8);
LAB_10030c48c:
          FUN_100004594(auStack_88);
          return;
        }
        uVar13 = uVar13 + 1;
        FUN_10030d088(lVar5);
        FUN_100004594(auStack_88);
      } while (uVar14 != uVar13);
    }
    _swift_release(local_c8);
    _swift_bridgeObjectRelease(puVar9);
    param_1 = local_d0;
  }
  else {
    _swift_release(uVar6);
  }
  *param_1 = 0;
  return;
}



/* Address: 0x10030c4c4 | FUN_10030c4c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030c4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  URL UVar4;
  UTType UVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  ID IVar10;
  UTType UVar11;
  UTType UVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  URL UVar13;
  long unaff_x21;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  code *pcVar20;
  String SVar21;
  String SVar22;
  long alStack_140 [2];
  undefined *local_130 [3];
  long local_118;
  uint local_10c;
  undefined *local_108;
  long local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uVar9;
  
  puVar3 = &DAT_100fbe6e0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_c8 = param_4;
  local_c0 = param_5;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_f0 = (long)alStack_140 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar14 = ((long)alStack_140 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar5 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar19 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar17 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar6 = 0;
  FUN_10030ce7c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  puVar18 = (undefined8 *)(lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_10030d000(param_1,puVar18);
  puVar7 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar6);
  local_e8 = *puVar18;
  uStack_e0 = puVar18[1];
  alStack_140[1] = puVar18[2];
  if ((int)puVar7 != 1) {
    uVar15 = puVar18[3];
    IVar10 = 0;
    FUN_100381740();
    _objc_allocWithZone();
    UVar11.unknown = (undefined *)objc_stub::init(IVar10);
    UVar12 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar11);
    SVar21 = UniformTypeIdentifiers::UTType::get_identifier(UVar12);
    (**(code **)(lVar19 + 8))(lVar17,UVar5.unknown);
    FUN_10037c4a8(alStack_140[1],uVar15,SVar21.str,SVar21.bridgeObject);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    uVar15 = uStack_e0;
    FUN_10030d57c(local_e8,uStack_e0,local_d8,UVar11.unknown,local_d0,local_c8,local_c0);
    _swift_bridgeObjectRelease(uVar15);
    return;
  }
  local_118 = puVar18[3];
  puVar3 = &DAT_100fbeac0;
  FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
  local_f8 = *(undefined8 *)((long)puVar18 + (long)*(int *)(puVar3 + 0x50));
  local_130[1] = UVar5.unknown;
  UVar13.unknown = (undefined *)((undefined8 *)((long)puVar18 + (long)*(int *)(puVar3 + 0x50)))[1];
  local_130[0] = UVar13.unknown;
  (**(code **)(lVar16 + 0x20))(lVar14,(long)puVar18 + (long)*(int *)(puVar3 + 0x40),UVar4.unknown);
  puVar3 = &DAT_100c40988;
  _swift_getKeyPath();
  puVar8 = &DAT_100fbeac8;
  FUN_1000037f0(&DAT_100fbeac8,&DAT_100c409b0);
  _swift_initStackObject();
  FUN_1000da6e0(puVar3,puVar8);
  FUN_1000da768(&local_b0);
  lVar6 = lStack_a8;
  uVar15 = local_b0;
  uVar9 = local_b0;
  _swift_getObjectType();
  uVar2 = (uint)uVar9;
  (**(code **)(lVar6 + 8))();
  local_10c = uVar2;
  _swift_unknownObjectRelease(uVar15);
  local_108 = puVar3;
  FUN_1000da768(&local_b0);
  lVar6 = lStack_a8;
  uVar15 = local_b0;
  uVar9 = local_b0;
  _swift_getObjectType(local_b0);
  (**(code **)(lVar6 + 0x10))(0,uVar9,lVar6);
  _swift_unknownObjectRelease(uVar15);
  _swift_bridgeObjectRetain_n(UVar13.unknown,2);
  SVar21 = Foundation::URL::get_absoluteString(UVar13);
  IVar10 = 0;
  FUN_100381740();
  _objc_allocWithZone();
  UVar5.unknown = (undefined *)objc_stub::init(IVar10);
  local_100 = lVar16;
  UVar11 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar5);
  SVar22 = UniformTypeIdentifiers::UTType::get_identifier(UVar11);
  puVar8 = local_130[1];
  pcVar20 = *(code **)(lVar19 + 8);
  local_130[2] = UVar4.unknown;
  (*pcVar20)(lVar17,local_130[1]);
  FUN_10037c4a8(SVar21.str,SVar21.bridgeObject,SVar22.str,SVar22.bridgeObject);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar21 = Foundation::URL::get_absoluteString((URL)UVar5.unknown);
  UVar11 = UniformTypeIdentifiers::UTType::get_url((UTType)SVar21.str);
  SVar22 = UniformTypeIdentifiers::UTType::get_identifier(UVar11);
  puVar3 = local_130[0];
  (*pcVar20)(lVar17,puVar8);
  uVar15 = local_f8;
  FUN_10037c4a8(SVar21.str,SVar21.bridgeObject,SVar22.str,SVar22.bridgeObject);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  FUN_10037c4a8(uVar15,puVar3,0x752e63696c627570,0xef656d616e2d6c72);
  _swift_bridgeObjectRelease(puVar3);
  uVar15 = uStack_e0;
  FUN_10030d57c(local_e8,uStack_e0,local_d8,UVar5.unknown,local_d0,local_c8,local_c0);
  if (unaff_x21 != 0) {
    _swift_errorRelease(unaff_x21);
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease_n(puVar3,2);
    _swift_bridgeObjectRelease(local_118);
    puVar8 = local_130[2];
    goto LAB_10030cad0;
  }
  _swift_bridgeObjectRelease(uVar15);
  puVar8 = local_130[2];
  (**(code **)(local_100 + 0x10))(local_f0,lVar14,local_130[2]);
  lVar6 = local_118;
  if (local_118 == 0) {
LAB_10030ca40:
    _swift_bridgeObjectRelease(puVar3);
    lVar16 = 0;
    lVar17 = -0x1000000000000000;
  }
  else {
    FUN_10000ec2c(0,&DAT_100fbe960,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    lVar16 = DAT_100fbe6d8;
    _swift_bridgeObjectRetain_n(lVar6,2);
    if (lVar16 != -1) {
      _swift_once(&DAT_100fbe6d8,FUN_100308a24);
    }
    lVar16 = alStack_140[1];
    lVar17 = lVar6;
    FUN_1000f41f4(alStack_140[1],lVar6,DAT_101057970);
    if (lVar16 == 0) {
      _swift_bridgeObjectRelease_n(lVar6,2);
      goto LAB_10030ca40;
    }
    FUN_1003c89c8();
    _swift_bridgeObjectRelease_n(lVar6,2);
    _swift_bridgeObjectRelease(puVar3);
  }
  lVar19 = 0;
  FUN_1003187b8();
  lVar6 = local_f0;
  puVar7 = (undefined8 *)(local_f0 + *(int *)(lVar19 + 0x14));
  *puVar7 = local_f8;
  puVar7[1] = puVar3;
  puVar7 = (undefined8 *)(local_f0 + *(int *)(lVar19 + 0x18));
  puVar7[1] = 0xf000000000000000;
  *puVar7 = 0;
  plVar1 = (long *)(local_f0 + *(int *)(lVar19 + 0x1c));
  *plVar1 = lVar16;
  plVar1[1] = lVar17;
  lVar16 = 0;
  FUN_100317b10();
  _swift_storeEnumTagMultiPayload(lVar6,lVar16,1);
  (**(code **)(*(long *)(lVar16 + -8) + 0x38))(lVar6,0,1,lVar16);
  FUN_10031ed94(lVar6);
LAB_10030cad0:
  puVar3 = local_108;
  FUN_1000da768(&local_b0);
  uVar15 = local_b0;
  _swift_getObjectType(local_b0);
  (**(code **)(lStack_a8 + 0x10))(local_10c & 1,uVar15,lStack_a8);
  _swift_unknownObjectRelease(local_b0);
  _swift_release(puVar3);
  (**(code **)(local_100 + 8))(lVar14,puVar8);
  return;
}



/* Address: 0x10030cb6c | FUN_10030cb6c */

void FUN_10030cb6c(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fbe478;
  FUN_1000037f0(&DAT_100fbe478,&DAT_100c40940);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *unaff_x20;
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  puVar1 = &DAT_100eca230;
  _swift_allocObject(&DAT_100eca230,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  _swift_retain(uVar3);
  FUN_100364f4c(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100c40950,puVar1);
  _swift_release();
  return;
}



/* Address: 0x10030cc3c | FUN_10030cc3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10030cc3c(void)

{
  bool bVar1;
  undefined8 uVar2;
  void *pvVar3;
  ID unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  String local_40;
  
  objc_stub::identifier(unaff_x20);
  local_40 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar3 = local_40.bridgeObject;
  uVar2 = 0;
  local_50 = 0x696472616f626e6f;
  uStack_48 = 0xea0000000000676e;
  FUN_10030cce0(0);
  bVar1 = (extension_Foundation)::Swift::StringProtocol::_contains
                    (&local_50,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208,uVar2,uVar2);
  _swift_bridgeObjectRelease(pvVar3);
  return bVar1;
}



/* Address: 0x10030cce0 | FUN_10030cce0 */

void FUN_10030cce0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc1a20 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fc1a20 = puVar1;
  return;
}



/* Address: 0x10030cd20 | FUN_10030cd20 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10030cd20(void)

{
  return ZEXT816(0x100fbe9a8);
}



/* Address: 0x10030cd40 | FUN_10030cd40 */

void FUN_10030cd40(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10030cd6c | FUN_10030cd6c */

void FUN_10030cd6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10030b7f8(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10030cdd8 | FUN_10030cdd8 */

void FUN_10030cdd8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}


