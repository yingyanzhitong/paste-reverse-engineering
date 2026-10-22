/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001e61f8 | FUN_1001e61f8 */

void FUN_1001e61f8(void)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  String stringLiteral;
  long lVar3;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  LVar2.unknown =
       &stack0xffffffffffffffc0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = LVar2.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  stringLiteral.bridgeObject = (void *)0x8000000100d9d450;
  stringLiteral.str = (char *)0xd000000000000029;
  LocalizationValue::_init(stringLiteral);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar6 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  Foundation::LocalizedStringResource::_init
            (LVar4,(Locale)0x617a696c61636f4c,(BundleDescription)0x62);
  return;
}



/* Address: 0x1001e6378 | FUN_1001e6378 */

void FUN_1001e6378(void)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  String stringLiteral;
  long lVar3;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  LVar2.unknown =
       &stack0xffffffffffffffc0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = LVar2.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  stringLiteral.bridgeObject = (void *)0x8000000100d9d480;
  stringLiteral.str = (char *)0xd000000000000022;
  LocalizationValue::_init(stringLiteral);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar6 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  Foundation::LocalizedStringResource::_init
            (LVar4,(Locale)0x617a696c61636f4c,(BundleDescription)0x62);
  return;
}



/* Address: 0x1001e64f8 | FUN_1001e64f8 */

void FUN_1001e64f8(void)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  String stringLiteral;
  long lVar3;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  LVar2.unknown =
       &stack0xffffffffffffffc0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = LVar2.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  stringLiteral.bridgeObject = (void *)0x8000000100d9d4b0;
  stringLiteral.str = (char *)0xd00000000000001f;
  LocalizationValue::_init(stringLiteral);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar6 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  Foundation::LocalizedStringResource::_init
            (LVar4,(Locale)0x617a696c61636f4c,(BundleDescription)0x62);
  return;
}



/* Address: 0x1001e6678 | FUN_1001e6678 */

void FUN_1001e6678(void)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  String stringLiteral;
  long lVar3;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  LVar2.unknown =
       &stack0xffffffffffffffc0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = LVar2.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  stringLiteral.bridgeObject = (void *)0x8000000100d9d4d0;
  stringLiteral.str = (char *)0xd000000000000023;
  LocalizationValue::_init(stringLiteral);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar6 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  Foundation::LocalizedStringResource::_init
            (LVar4,(Locale)0x617a696c61636f4c,(BundleDescription)0x62);
  return;
}



/* Address: 0x1001e67f8 | FUN_1001e67f8 */

void FUN_1001e67f8(void)

{
  FUN_1001e681c(0x656e2d7374616877,0xef656c7469742e77);
  return;
}



/* Address: 0x1001e681c | FUN_1001e681c */

void FUN_1001e681c(char *param_1,void *param_2)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  String stringLiteral;
  long lVar3;
  
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  LVar2.unknown =
       &stack0xffffffffffffffb0 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = LVar2.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  stringLiteral.bridgeObject = param_2;
  stringLiteral.str = param_1;
  LocalizationValue::_init(stringLiteral);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar6 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  Foundation::LocalizedStringResource::_init
            (LVar4,(Locale)0x617a696c61636f4c,(BundleDescription)0x62);
  return;
}



/* Address: 0x1001e699c | thunk_FUN_1001e6ab8 */

void thunk_FUN_1001e6ab8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"accessibility-access.paste-to-other-apps.title",0x2e);
  return;
}



/* Address: 0x1001e69a0 | thunk_FUN_1001e6ac8 */

void thunk_FUN_1001e6ac8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.delete-pinboard.title",0x1b);
  return;
}



/* Address: 0x1001e69a4 | thunk_FUN_1001e6ad8 */

void thunk_FUN_1001e6ad8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.delete-shared-pinboard.title",0x22);
  return;
}



/* Address: 0x1001e69a8 | thunk_FUN_1001e6ae8 */

void thunk_FUN_1001e6ae8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-from-shared-list.text",0x1f);
  return;
}



/* Address: 0x1001e69ac | thunk_FUN_1001e6af8 */

void thunk_FUN_1001e6af8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-from-shared-list.title",0x20);
  return;
}



/* Address: 0x1001e69b0 | thunk_FUN_1001e6b08 */

void thunk_FUN_1001e6b08(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-to-shared-list.editor.text",0x24);
  return;
}



/* Address: 0x1001e69b4 | thunk_FUN_1001e6b18 */

void thunk_FUN_1001e6b18(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-to-shared-list.editor.title",0x25);
  return;
}



/* Address: 0x1001e69b8 | thunk_FUN_1001e6b28 */

void thunk_FUN_1001e6b28(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-to-shared-list.viewer.title",0x25);
  return;
}



/* Address: 0x1001e69bc | thunk_FUN_1001e6b38 */

void thunk_FUN_1001e6b38(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.character-count",0x16);
  return;
}



/* Address: 0x1001e69c0 | thunk_FUN_1001e6b48 */

void thunk_FUN_1001e6b48(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.character-label",0x16);
  return;
}



/* Address: 0x1001e69c4 | thunk_FUN_1001e6b58 */

void thunk_FUN_1001e6b58(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.line-count",0x11);
  return;
}



/* Address: 0x1001e69c8 | thunk_FUN_1001e6b68 */

void thunk_FUN_1001e6b68(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.line-label",0x11);
  return;
}



/* Address: 0x1001e69cc | thunk_FUN_1001e6b78 */

void thunk_FUN_1001e6b78(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.word-count",0x11);
  return;
}



/* Address: 0x1001e69d0 | thunk_FUN_1001e6b88 */

void thunk_FUN_1001e6b88(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.word-label",0x11);
  return;
}



/* Address: 0x1001e69d4 | thunk_FUN_1001e6b98 */

void thunk_FUN_1001e6b98(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.open-in",0x16);
  return;
}



/* Address: 0x1001e69d8 | thunk_FUN_1001e6ba8 */

void thunk_FUN_1001e6ba8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.open-with",0x18);
  return;
}



/* Address: 0x1001e69dc | thunk_FUN_1001e6bb8 */

void thunk_FUN_1001e6bb8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.paste-to",0x17);
  return;
}



/* Address: 0x1001e69e0 | thunk_FUN_1001e6bc8 */

void thunk_FUN_1001e6bc8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.pause-for",0x18);
  return;
}



/* Address: 0x1001e69e4 | thunk_FUN_1001e6bd8 */

void thunk_FUN_1001e6bd8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.show-in",0x16);
  return;
}



/* Address: 0x1001e69e8 | thunk_FUN_1001e6be8 */

void thunk_FUN_1001e6be8(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"general.item-count",0x12);
  return;
}



/* Address: 0x1001e69ec | thunk_FUN_1001e6bf8 */

void thunk_FUN_1001e6bf8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.paused-until",0x14);
  return;
}



/* Address: 0x1001e69f0 | thunk_FUN_1001e6c08 */

void thunk_FUN_1001e6c08(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.selected-format",0x17);
  return;
}



/* Address: 0x1001e69f4 | thunk_FUN_1001e6c18 */

void thunk_FUN_1001e6c18(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.until",0xd);
  return;
}



/* Address: 0x1001e69f8 | thunk_FUN_1001e6c28 */

void thunk_FUN_1001e6c28(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.version-format",0x16);
  return;
}



/* Address: 0x1001e69fc | thunk_FUN_1001e6c38 */

void thunk_FUN_1001e6c38(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"item-type.file-count",0x14);
  return;
}



/* Address: 0x1001e6a00 | thunk_FUN_1001e6c48 */

void thunk_FUN_1001e6c48(void)

{
  FUN_1001e6cb8();
  return;
}



/* Address: 0x1001e6a04 | thunk_FUN_1001e6c58 */

void thunk_FUN_1001e6c58(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.comparative-price",0x23);
  return;
}



/* Address: 0x1001e6a08 | thunk_FUN_1001e6c68 */

void thunk_FUN_1001e6c68(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.error.restore-purchases.recovery",0x32);
  return;
}



/* Address: 0x1001e6a0c | thunk_FUN_1001e6c78 */

void thunk_FUN_1001e6c78(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.offer.introductory.title",0x2a);
  return;
}



/* Address: 0x1001e6a10 | thunk_FUN_1001e6c88 */

void thunk_FUN_1001e6c88(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.offer.renewal.title",0x25);
  return;
}



/* Address: 0x1001e6a14 | thunk_FUN_1001e6c98 */

void thunk_FUN_1001e6c98(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.subscription.introductory-offer.free-trial",0x34);
  return;
}



/* Address: 0x1001e6a18 | thunk_FUN_1001e6ca8 */

void thunk_FUN_1001e6ca8(void)

{
  FUN_1001e6cb8();
  return;
}



/* Address: 0x1001e6a1c | thunk_FUN_1001e6ed8 */

void thunk_FUN_1001e6ed8(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"notifications.trial.active.title",0x20);
  return;
}



/* Address: 0x1001e6a20 | thunk_FUN_1001e6ee8 */

void thunk_FUN_1001e6ee8(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"pinboard.people-count",0x15);
  return;
}



/* Address: 0x1001e6a24 | thunk_FUN_1001e7114 */

void thunk_FUN_1001e7114(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.connect.deeplink-instruction",0x29);
  return;
}



/* Address: 0x1001e6a28 | thunk_FUN_1001e7124 */

void thunk_FUN_1001e7124(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.connection-sheet.title",0x23);
  return;
}



/* Address: 0x1001e6a2c | thunk_FUN_1001e7134 */

void thunk_FUN_1001e7134(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.disconnect.confirm.message",0x27);
  return;
}



/* Address: 0x1001e6a30 | thunk_FUN_1001e7144 */

void thunk_FUN_1001e7144(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.disconnect.confirm.title",0x25);
  return;
}



/* Address: 0x1001e6a34 | thunk_FUN_1001e7154 */

void thunk_FUN_1001e7154(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.tools.last-used",0x1c);
  return;
}



/* Address: 0x1001e6a38 | thunk_FUN_1001e7164 */

void thunk_FUN_1001e7164(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.sync.status.error.icloud-unknown",0x29);
  return;
}



/* Address: 0x1001e6a3c | thunk_FUN_1001e7174 */

void thunk_FUN_1001e7174(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"shortcut-recorder.error.used-in-menu",0x24);
  return;
}



/* Address: 0x1001e6a40 | thunk_FUN_1001e7184 */

void thunk_FUN_1001e7184(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"whats-new.paste-5.migration.warning.subtitle",0x2c);
  return;
}



/* Address: 0x1001e6a44 | FUN_1001e6a44 */

undefined1  [16] FUN_1001e6a44(void)

{
  return ZEXT816(0x100ebea98);
}



/* Address: 0x1001e6a54 | FUN_1001e6a54 */

undefined1  [16] FUN_1001e6a54(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  String SVar2;
  undefined1 auVar3 [16];
  String SVar4;
  
  if ((param_1 & 1) == 0) {
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    pcVar1 = param_3;
    _swift_bridgeObjectRetain(param_3);
    SVar2.bridgeObject = (void *)0xe300000000000000;
    SVar2.str = (char *)0x2e2e2e;
    SVar4.bridgeObject = param_4;
    SVar4.str = pcVar1;
    Swift::String::append(SVar2,SVar4);
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  return auVar3;
}



/* Address: 0x1001e6ab8 | FUN_1001e6ab8 */

void FUN_1001e6ab8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"accessibility-access.paste-to-other-apps.title",0x2e);
  return;
}



/* Address: 0x1001e6ac8 | FUN_1001e6ac8 */

void FUN_1001e6ac8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.delete-pinboard.title",0x1b);
  return;
}



/* Address: 0x1001e6ad8 | FUN_1001e6ad8 */

void FUN_1001e6ad8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.delete-shared-pinboard.title",0x22);
  return;
}



/* Address: 0x1001e6ae8 | FUN_1001e6ae8 */

void FUN_1001e6ae8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-from-shared-list.text",0x1f);
  return;
}



/* Address: 0x1001e6af8 | FUN_1001e6af8 */

void FUN_1001e6af8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-from-shared-list.title",0x20);
  return;
}



/* Address: 0x1001e6b08 | FUN_1001e6b08 */

void FUN_1001e6b08(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-to-shared-list.editor.text",0x24);
  return;
}



/* Address: 0x1001e6b18 | FUN_1001e6b18 */

void FUN_1001e6b18(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-to-shared-list.editor.title",0x25);
  return;
}



/* Address: 0x1001e6b28 | FUN_1001e6b28 */

void FUN_1001e6b28(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"alert.pin-to-shared-list.viewer.title",0x25);
  return;
}



/* Address: 0x1001e6b38 | FUN_1001e6b38 */

void FUN_1001e6b38(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.character-count",0x16);
  return;
}



/* Address: 0x1001e6b48 | FUN_1001e6b48 */

void FUN_1001e6b48(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.character-label",0x16);
  return;
}



/* Address: 0x1001e6b58 | FUN_1001e6b58 */

void FUN_1001e6b58(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.line-count",0x11);
  return;
}



/* Address: 0x1001e6b68 | FUN_1001e6b68 */

void FUN_1001e6b68(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.line-label",0x11);
  return;
}



/* Address: 0x1001e6b78 | FUN_1001e6b78 */

void FUN_1001e6b78(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.word-count",0x11);
  return;
}



/* Address: 0x1001e6b88 | FUN_1001e6b88 */

void FUN_1001e6b88(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"editor.word-label",0x11);
  return;
}


