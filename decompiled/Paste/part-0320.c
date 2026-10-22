/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100400dbc | FUN_100400dbc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100400dbc(void)

{
  return ZEXT816(0x100fc4898);
}



/* Address: 0x100400ddc | FUN_100400ddc */

void FUN_100400ddc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  undefined1 auStack_90 [8];
  char *local_88;
  void *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_68 = 0x8000000100da5bd0;
  FUN_10020d7cc();
  local_70 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d0154(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar9.bridgeObject;
  pcStack_78 = SVar9.str;
  FUN_1001cffd4(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_88 = SVar9.str;
  FUN_1001cfe54(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001acb08();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0xd000000000000011;
  param_1[1] = local_68;
  param_1[2] = local_70;
  param_1[3] = uVar2;
  param_1[4] = pcStack_78;
  param_1[5] = local_80;
  param_1[6] = local_88;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x100400f5c | FUN_100400f5c */

void FUN_100400f5c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020d750();
  local_68 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d1054(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_78 = SVar9.bridgeObject;
  local_70 = SVar9.str;
  FUN_1001d0ed4(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar9.str;
  FUN_1001d0d54(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001acc58();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0x6f4c74416e65706f;
  param_1[1] = 0xeb000000006e6967;
  param_1[2] = local_68;
  param_1[3] = uVar2;
  param_1[4] = local_70;
  param_1[5] = local_78;
  param_1[6] = local_80;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x1004010d4 | FUN_1004010d4 */

void FUN_1004010d4(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  LocalizedStringResource LVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  URL UVar8;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar9;
  String SVar10;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020da8c();
  local_68 = *(undefined8 *)LVar4.unknown;
  uVar2 = *(undefined8 *)((long)LVar4.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d1dd4(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_78 = SVar9.bridgeObject;
  local_70 = SVar9.str;
  FUN_1001d1c54(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar9.str;
  FUN_1001d1ad4(localized.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(localized);
  pcVar5 = SVar10.str;
  FUN_1001acda8();
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  iVar3 = *(int *)(lVar7 + 0x18);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)puVar1 + (long)iVar3,pcVar5,UVar8.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar10;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0x6361426e496e7572;
  param_1[1] = 0xef646e756f72676b;
  param_1[2] = local_68;
  param_1[3] = uVar2;
  param_1[4] = local_70;
  param_1[5] = local_78;
  param_1[6] = local_80;
  param_1[7] = SVar9.bridgeObject;
  return;
}



/* Address: 0x100401250 | FUN_100401250 */

void FUN_100401250(void)

{
  FUN_1004012dc(FUN_1004126f4,&PTR_PTR_100ed2e78,6,FUN_100401270);
  return;
}



/* Address: 0x100401270 | FUN_100401270 */

void FUN_100401270(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004126f4();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0xff;
  *(undefined **)(lVar1 + 0x28) = PTR___swiftEmptyArrayStorage_100eae0d8;
  *param_1 = lVar1;
  return;
}



/* Address: 0x1004012bc | FUN_1004012bc */

void FUN_1004012bc(void)

{
  FUN_1004012dc(FUN_100410834,&PTR_PTR_100ed2d78,0xc,FUN_100401344);
  return;
}



/* Address: 0x1004012dc | FUN_1004012dc */

void FUN_1004012dc(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_1000d80e0(param_1,"PasteNotifications/DI+PasteNotifications.swift",0x2e,2,param_4,0x13,param_5
                ,0,uVar1);
  return;
}



/* Address: 0x100401344 | FUN_100401344 */

void FUN_100401344(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = 0;
  FUN_100410834();
  _swift_allocObject();
  puVar2 = &DAT_100c46ef0;
  _swift_getKeyPath();
  puVar3 = &DAT_100fc4920;
  FUN_1000037f0(&DAT_100fc4920,&DAT_100c46f18);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined **)(lVar1 + 0x10) = puVar2;
  *(undefined **)(lVar1 + 0x18) = puVar3;
  *param_1 = lVar1;
  return;
}



/* Address: 0x1004013d0 | FUN_1004013d0 */

void FUN_1004013d0(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = 0;
  FUN_10040edb8();
  lVar2 = lVar1;
  _swift_allocObject();
  puVar3 = &DAT_100c46ef0;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc4920;
  FUN_1000037f0(&DAT_100fc4920,&DAT_100c46f18);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(lVar2 + 0x10) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_PTR_100ed2a48;
  *param_1 = lVar2;
  return;
}



/* Address: 0x100401464 | FUN_100401464 */

void FUN_100401464(void)

{
  FUN_10040148c(FUN_10040baac,&PTR_PTR_100ed2748);
  return;
}



/* Address: 0x100401478 | FUN_100401478 */

void FUN_100401478(void)

{
  FUN_10040148c(FUN_100412e80,&PTR_PTR_100ed2f50);
  return;
}



/* Address: 0x10040148c | FUN_10040148c */

void FUN_10040148c(long *param_1,code *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = 0;
  (*param_2)();
  lVar2 = lVar1;
  _swift_allocObject();
  puVar3 = &DAT_100c46ef0;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc4920;
  FUN_1000037f0(&DAT_100fc4920,&DAT_100c46f18);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(lVar2 + 0x10) = puVar3;
  puVar3 = &DAT_100c46f20;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc4928;
  FUN_1000037f0(&DAT_100fc4928,&DAT_100c46f48);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(lVar2 + 0x18) = puVar3;
  puVar3 = &DAT_100c46f50;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc4930;
  FUN_1000037f0(&DAT_100fc4930,&DAT_100c46f78);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(lVar2 + 0x20) = puVar3;
  param_1[3] = lVar1;
  param_1[4] = param_3;
  *param_1 = lVar2;
  return;
}



/* Address: 0x1004015b0 | FUN_1004015b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1004015b0(void)

{
  ID IVar1;
  
  IVar1 = UNUserNotificationCenter::currentNotificationCenter
                    ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
  return IVar1;
}



/* Address: 0x1004015d4 | FUN_1004015d4 */

undefined8 FUN_1004015d4(void)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  uVar1 = 0;
  FUN_100404040(0);
  FUN_1000d80e0(&local_18,"PasteNotifications/DI+PasteNotifications.swift",0x2e,2,0x24,0x13,
                thunk_FUN_100401628,0,uVar1);
  return local_18;
}



/* Address: 0x100401628 | FUN_100401628 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100401628(ID *param_1)

{
  ID self;
  class_t *pcVar1;
  class_t *pcVar2;
  ID IVar3;
  objc_super local_40;
  
  self = UNUserNotificationCenter::currentNotificationCenter
                   ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
  pcVar1 = (class_t *)0x0;
  FUN_100404040();
  pcVar2 = pcVar1;
  _objc_allocWithZone();
  *(undefined **)
   ((long)&pcVar2->isa + _TtC18PasteNotifications35UserNotificationCenterDelegateProxy::delegates) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  local_40.receiver = (ID)pcVar2;
  local_40.super_class = pcVar1;
  IVar3 = _objc_msgSendSuper2(&local_40,"init");
  UNUserNotificationCenter::setDelegate_(self,IVar3);
  *param_1 = IVar3;
  return 0;
}



/* Address: 0x1004016d8 | FUN_1004016d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1004016d8(ID *param_1)

{
  ID IVar1;
  
  IVar1 = UNUserNotificationCenter::currentNotificationCenter
                    ((ID)&_OBJC_CLASS___UNUserNotificationCenter);
  *param_1 = IVar1;
  return;
}



/* Address: 0x100401710 | FUN_100401710 */

void FUN_100401710(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100404040(0);
  FUN_1000d80e0(param_1,"PasteNotifications/DI+PasteNotifications.swift",0x2e,2,0x24,0x13,
                thunk_FUN_100401628,0,uVar1);
  return;
}



/* Address: 0x100401760 | FUN_100401760 */

void FUN_100401760(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc4938,&DAT_100ed1600);
  return;
}



/* Address: 0x100401774 | FUN_100401774 */

void FUN_100401774(void)

{
  FUN_100003a00(&DAT_100fc49a0,FUN_100401760,&TargetProtocolConformanceDescriptor_100c46fe4);
  return;
}



/* Address: 0x1004017a0 | FUN_1004017a0 */

void FUN_1004017a0(void)

{
  FUN_100003a00(&DAT_100fc49a8,FUN_100401760,&TargetProtocolConformanceDescriptor_100c46fb4);
  return;
}



/* Address: 0x1004017cc | FUN_1004017cc */

void FUN_1004017cc(void)

{
  FUN_100003a00(&DAT_100fc49b0,FUN_100401760,&TargetProtocolConformanceDescriptor_100c470d4);
  return;
}



/* Address: 0x1004017f8 | FUN_1004017f8 */

void FUN_1004017f8(void)

{
  FUN_100003a00(&DAT_100fc49b8,FUN_100401760,&TargetProtocolConformanceDescriptor_100c4700c);
  return;
}



/* Address: 0x100401824 | thunk_FUN_1000032cc */

void thunk_FUN_1000032cc(void)

{
  FUN_1000032cc();
  return;
}



/* Address: 0x100401828 | thunk_FUN_100401628 */

void thunk_FUN_100401628(void)

{
  FUN_100401628();
  return;
}



/* Address: 0x10040182c | FUN_10040182c */

void FUN_10040182c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fc49c0,&DAT_100ed1628);
  return;
}



/* Address: 0x100401840 | FUN_100401840 */

void FUN_100401840(void)

{
  FUN_100003a00(&DAT_100fc49c8,FUN_10040182c,&TargetProtocolConformanceDescriptor_100c4719c);
  return;
}



/* Address: 0x10040186c | FUN_10040186c */

void FUN_10040186c(void)

{
  FUN_100003a00(&DAT_100fc49d0,FUN_10040182c,&TargetProtocolConformanceDescriptor_100c4716c);
  return;
}



/* Address: 0x100401898 | FUN_100401898 */

void FUN_100401898(void)

{
  FUN_100003a00(&DAT_100fc49d8,FUN_10040182c,&TargetProtocolConformanceDescriptor_100c4728c);
  return;
}



/* Address: 0x1004018c4 | FUN_1004018c4 */

void FUN_1004018c4(void)

{
  FUN_100003a00(&DAT_100fc49e0,FUN_10040182c,&TargetProtocolConformanceDescriptor_100c471c4);
  return;
}



/* Address: 0x1004018f0 | thunk_FUN_100003004 */

void thunk_FUN_100003004(void)

{
  FUN_100003004();
  return;
}



/* Address: 0x1004018f4 | thunk_FUN_100003038 */

void thunk_FUN_100003038(void)

{
  FUN_100003038();
  return;
}



/* Address: 0x1004018f8 | thunk_FUN_1000030b4 */

void thunk_FUN_1000030b4(void)

{
  FUN_1000030b4();
  return;
}



/* Address: 0x1004018fc | thunk_FUN_10000308c */

void thunk_FUN_10000308c(void)

{
  FUN_10000308c();
  return;
}



/* Address: 0x100401900 | thunk_FUN_1000030c8 */

void thunk_FUN_1000030c8(void)

{
  FUN_1000030c8();
  return;
}



/* Address: 0x100401904 | thunk_FUN_100003068 */

void thunk_FUN_100003068(void)

{
  FUN_100003068();
  return;
}



/* Address: 0x100401908 | thunk_FUN_1000030f0 */

void thunk_FUN_1000030f0(void)

{
  FUN_1000030f0();
  return;
}



/* Address: 0x10040190c | thunk_FUN_100003118 */

void thunk_FUN_100003118(void)

{
  FUN_100003118();
  return;
}



/* Address: 0x100401910 | thunk_FUN_100002ff0 */

void thunk_FUN_100002ff0(void)

{
  FUN_100002ff0();
  return;
}



/* Address: 0x100401914 | thunk_FUN_1000032cc */

void thunk_FUN_1000032cc(void)

{
  thunk_FUN_1000032cc();
  return;
}



/* Address: 0x100401918 | thunk_FUN_100401628 */

void thunk_FUN_100401628(void)

{
  thunk_FUN_100401628();
  return;
}



/* Address: 0x10040191c | thunk_FUN_100003100 */

void thunk_FUN_100003100(void)

{
  FUN_100003100();
  return;
}



/* Address: 0x100401920 | thunk_FUN_1000030a0 */

void thunk_FUN_1000030a0(void)

{
  FUN_1000030a0();
  return;
}



/* Address: 0x100401924 | FUN_100401924 */

void FUN_100401924(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + *(int *)(param_1 + 0x20)))();
  return;
}



/* Address: 0x10040194c | FUN_10040194c */

void FUN_10040194c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c47350;
    local_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x18);
  }
  return;
}



/* Address: 0x1004019d0 | FUN_1004019d0 */

long * FUN_1004019d0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x20 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    lVar2 = puVar4[3];
    uVar6 = puVar4[2];
    puVar3[3] = puVar4[3];
    puVar3[2] = uVar6;
    _swift_bridgeObjectRetain();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Address: 0x100401ab0 | FUN_100401ab0 */

void FUN_100401ab0(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar2 + 8))();
  uVar1 = param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar1 + 8));
  _swift_release(*(undefined8 *)(uVar1 + 0x18));
  return;
}



/* Address: 0x100401b00 | FUN_100401b00 */

long FUN_100401b00(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  uVar3 = puVar1[3];
  uVar5 = puVar1[2];
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x100401b8c | FUN_100401b8c */

long FUN_100401b8c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x18))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  uVar1 = puVar4[1];
  puVar4[1] = puVar5[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = puVar4[3];
  uVar1 = puVar5[3];
  uVar6 = puVar5[2];
  puVar4[3] = puVar5[3];
  puVar4[2] = uVar6;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100401c2c | FUN_100401c2c */

long FUN_100401c2c(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  uVar4 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar4;
  uVar4 = puVar1[2];
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar4;
  return param_1;
}



/* Address: 0x100401c98 | FUN_100401c98 */

long FUN_100401c98(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x28))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar4 = *puVar2;
  uVar1 = puVar4[1];
  puVar4[1] = puVar2[1];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = puVar4[3];
  uVar5 = puVar2[2];
  puVar4[3] = puVar2[3];
  puVar4[2] = uVar5;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100401d24 | FUN_100401d24 */

uint * FUN_100401d24(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x20;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100401dbc;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100401dbc:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_100401dbc;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100401df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8U) + 0x10);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100401e28 | FUN_100401e28 */

void FUN_100401e28(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x20;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar11 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_100401ecc;
  }
  else {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar11 = 0;
    if (1 < uVar3) {
      uVar11 = uVar10;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_100401ecc:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *param_1 = param_2 + ~uVar2;
      }
      if (uVar11 < 2) {
        if (uVar11 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar11 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
  if (uVar11 < 2) {
    if (uVar11 != 0) {
      *(undefined1 *)((long)param_1 + sVar1) = 0;
    }
  }
  else if (uVar11 == 2) {
    *(undefined2 *)((long)param_1 + sVar1) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar1) = 0;
  }
  if (param_2 != 0) {
    if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100401f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x38))();
      return;
    }
    uVar6 = (long)param_1 + lVar9 + 7 & 0xfffffffffffffff8;
    puVar7 = (ulong *)(uVar6 + 0x10);
    if ((int)param_2 < 0) {
      *puVar7 = (ulong)(param_2 & 0x7fffffff);
      *(undefined8 *)(uVar6 + 0x18) = 0;
    }
    else {
      *puVar7 = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x100401fa0 | FUN_100401fa0 */

void FUN_100401fa0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100401fac | FUN_100401fac */

void FUN_100401fac(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x100401fb4 | FUN_100401fb4 */

void FUN_100401fb4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100401fc0 | FUN_100401fc0 */

int FUN_100401fc0(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (1 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2;
  }
  return iVar1;
}



/* Address: 0x100402010 | FUN_100402010 */

void FUN_100402010(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *(ulong *)(param_1 + 2) = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = param_2 + 0x80000001;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x100402064 | FUN_100402064 */

void FUN_100402064(ulong *param_1,uint param_2)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
  }
  else if (param_2 != 0) {
    param_1[1] = (ulong)(param_2 - 1);
    return;
  }
  return;
}



/* Address: 0x100402084 | FUN_100402084 */

void FUN_100402084(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100402090 | FUN_100402090 */

void FUN_100402090(code *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc4c08;
  FUN_100003a00(&DAT_100fc4c08,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteNotifications/UserNotificationCenterDelegateProxy+DidReceiveStream.swift",0x4d,
               1,0x3f,UVar4.unknown,puVar3);
  }
  (*param_1)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100402144 | FUN_100402144 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100402144(void)

{
  void *pvVar1;
  undefined *puVar2;
  undefined8 in_x3;
  void *in_x4;
  
  pvVar1 = __Block_copy(in_x4);
  puVar2 = &DAT_100ed18e8;
  _swift_allocObject(&DAT_100ed18e8,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100402270(in_x3,FUN_100155a18,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1004021f4 | FUN_1004021f4 */

void FUN_1004021f4(ulong *param_1)

{
  FUN_1004028a4(*(undefined8 *)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x50));
  return;
}



/* Address: 0x100402210 | FUN_100402210 */

void FUN_100402210(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + DAT_100fc4b50 + 8));
  _swift_release(*(undefined8 *)(param_1 + DAT_100fc4b58 + 8));
  _swift_release(*(undefined8 *)(param_1 + DAT_100fc4b60 + 8));
  return;
}


