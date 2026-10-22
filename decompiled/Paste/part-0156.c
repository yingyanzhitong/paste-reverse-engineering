/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001e6b98 | FUN_1001e6b98 */

void FUN_1001e6b98(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.open-in",0x16);
  return;
}



/* Address: 0x1001e6ba8 | FUN_1001e6ba8 */

void FUN_1001e6ba8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.open-with",0x18);
  return;
}



/* Address: 0x1001e6bb8 | FUN_1001e6bb8 */

void FUN_1001e6bb8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.paste-to",0x17);
  return;
}



/* Address: 0x1001e6bc8 | FUN_1001e6bc8 */

void FUN_1001e6bc8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.pause-for",0x18);
  return;
}



/* Address: 0x1001e6bd8 | FUN_1001e6bd8 */

void FUN_1001e6bd8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.action.show-in",0x16);
  return;
}



/* Address: 0x1001e6be8 | FUN_1001e6be8 */

void FUN_1001e6be8(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"general.item-count",0x12);
  return;
}



/* Address: 0x1001e6bf8 | FUN_1001e6bf8 */

void FUN_1001e6bf8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.paused-until",0x14);
  return;
}



/* Address: 0x1001e6c08 | FUN_1001e6c08 */

void FUN_1001e6c08(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.selected-format",0x17);
  return;
}



/* Address: 0x1001e6c18 | FUN_1001e6c18 */

void FUN_1001e6c18(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.until",0xd);
  return;
}



/* Address: 0x1001e6c28 | FUN_1001e6c28 */

void FUN_1001e6c28(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"general.version-format",0x16);
  return;
}



/* Address: 0x1001e6c38 | FUN_1001e6c38 */

void FUN_1001e6c38(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"item-type.file-count",0x14);
  return;
}



/* Address: 0x1001e6c48 | FUN_1001e6c48 */

void FUN_1001e6c48(void)

{
  FUN_1001e6cb8();
  return;
}



/* Address: 0x1001e6c58 | FUN_1001e6c58 */

void FUN_1001e6c58(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.comparative-price",0x23);
  return;
}



/* Address: 0x1001e6c68 | FUN_1001e6c68 */

void FUN_1001e6c68(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.error.restore-purchases.recovery",0x32);
  return;
}



/* Address: 0x1001e6c78 | FUN_1001e6c78 */

void FUN_1001e6c78(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.offer.introductory.title",0x2a);
  return;
}



/* Address: 0x1001e6c88 | FUN_1001e6c88 */

void FUN_1001e6c88(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.paywall.offer.renewal.title",0x25);
  return;
}



/* Address: 0x1001e6c98 | FUN_1001e6c98 */

void FUN_1001e6c98(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"licensing.subscription.introductory-offer.free-trial",0x34);
  return;
}



/* Address: 0x1001e6ca8 | FUN_1001e6ca8 */

void FUN_1001e6ca8(void)

{
  FUN_1001e6cb8();
  return;
}



/* Address: 0x1001e6cb8 | FUN_1001e6cb8 */

void FUN_1001e6cb8(undefined8 param_1,char *param_2,void *param_3,char *param_4,void *param_5,
                  undefined *param_6,undefined *param_7,undefined8 param_8,undefined8 param_9)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  void *pvVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  StringInterpolation *pSVar9;
  long extraout_x8_02;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  StringInterpolation SVar14;
  StringInterpolation SVar15;
  StringInterpolation SVar16;
  StringInterpolation SVar17;
  StringInterpolation SVar18;
  StringInterpolation stringInterpolation;
  Array<undefined> aAStack_a0 [8];
  char *pcStack_98;
  void *apvStack_90 [2];
  undefined auStack_80 [8];
  undefined8 local_78;
  StaticString local_70;
  LocalizationValue local_68;
  long lVar3;
  
  pcVar7 = param_4;
  pvVar8 = param_5;
  local_78 = param_1;
  local_70.unknown = param_6;
  local_68.unknown = param_7;
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  LVar2.unknown =
       auStack_80 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  pSVar9 = (StringInterpolation *)(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)LVar2.unknown - (long)pSVar9;
  lVar5 = 0;
  LocalizationValue::StringInterpolation::_typeMetadataAccessor(pSVar9);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pSVar9 = (StringInterpolation *)(lVar11 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  LocalizationValue::StringInterpolation::_init(pSVar9,0,2);
  SVar14.message.bridgeObject = pvVar8;
  SVar14.message.str = pcVar7;
  SVar14.template.bridgeObject = (void *)param_8;
  SVar14.template.str = param_7;
  SVar14._16_8_ = param_6;
  SVar14.interpolationCount = param_9;
  LocalizationValue::StringInterpolation::_appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar14);
  SVar12.bridgeObject = param_3;
  SVar12.str = param_2;
  SVar15.message.bridgeObject = pvVar8;
  SVar15.message.str = pcVar7;
  SVar15.template.bridgeObject = (void *)param_8;
  SVar15.template.str = param_7;
  SVar15._16_8_ = param_6;
  SVar15.interpolationCount = param_9;
  LocalizationValue::StringInterpolation::_appendInterpolation(SVar12,SVar15);
  SVar16.message.bridgeObject = pvVar8;
  SVar16.message.str = pcVar7;
  SVar16.template.bridgeObject = (void *)param_8;
  SVar16.template.str = param_7;
  SVar16._16_8_ = param_6;
  SVar16.interpolationCount = param_9;
  LocalizationValue::StringInterpolation::_appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar16);
  SVar13.bridgeObject = param_5;
  SVar13.str = param_4;
  SVar17.message.bridgeObject = pvVar8;
  SVar17.message.str = pcVar7;
  SVar17.template.bridgeObject = (void *)param_8;
  SVar17.template.str = param_7;
  SVar17._16_8_ = param_6;
  SVar17.interpolationCount = param_9;
  LocalizationValue::StringInterpolation::_appendInterpolation(SVar13,SVar17);
  uVar6 = 0xe000000000000000;
  SVar18.message.bridgeObject = pvVar8;
  SVar18.message.str = pcVar7;
  SVar18.template.bridgeObject = (void *)param_8;
  SVar18.template.str = param_7;
  SVar18._16_8_ = param_6;
  SVar18.interpolationCount = param_9;
  LocalizationValue::StringInterpolation::_appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar18);
  stringInterpolation.message.bridgeObject = (void *)uVar6;
  stringInterpolation.message.str = (char *)pSVar9;
  stringInterpolation.template.bridgeObject = param_6;
  stringInterpolation.template.str = pvVar8;
  stringInterpolation._16_8_ = pcVar7;
  stringInterpolation.interpolationCount = (__int64)param_7;
  LocalizationValue::_init(stringInterpolation);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar10 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  *(undefined8 *)&pSVar9[-1].attributes = 0;
  pSVar9[-1].template.str = (char *)0x0;
  *(undefined2 *)&pSVar9[-1].template.bridgeObject = 0x100;
  Foundation::LocalizedStringResource::_init
            (local_70,local_68,(Locale)0x2,(BundleDescription)(__int8)lVar11);
  return;
}



/* Address: 0x1001e6ed8 | FUN_1001e6ed8 */

void FUN_1001e6ed8(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"notifications.trial.active.title",0x20);
  return;
}



/* Address: 0x1001e6ee8 | FUN_1001e6ee8 */

void FUN_1001e6ee8(undefined8 param_1)

{
  FUN_1001e6ef8(param_1,"pinboard.people-count",0x15);
  return;
}



/* Address: 0x1001e6ef8 | FUN_1001e6ef8 */

void FUN_1001e6ef8(undefined4 param_1,StaticString param_2,LocalizationValue param_3,
                  undefined8 param_4,undefined8 param_5,undefined8 param_6,undefined8 param_7,
                  undefined8 param_8)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  undefined8 uVar6;
  LocalizationValue LVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  StringInterpolation *pSVar11;
  long extraout_x8_02;
  long lVar12;
  long lVar13;
  StringInterpolation SVar14;
  StringInterpolation SVar15;
  StringInterpolation stringInterpolation;
  Array<undefined> aAStack_90 [8];
  char *pcStack_88;
  void *apvStack_80 [2];
  undefined auStack_70 [12];
  undefined4 local_64;
  long lVar3;
  
  LVar7.unknown = param_3.unknown;
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar13 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  LVar2.unknown =
       auStack_70 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  pSVar11 = (StringInterpolation *)(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)LVar2.unknown - (long)pSVar11;
  lVar5 = 0;
  LocalizationValue::StringInterpolation::_typeMetadataAccessor(pSVar11);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pSVar11 = (StringInterpolation *)(lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  LocalizationValue::StringInterpolation::_init(pSVar11,0,1);
  SVar14.message.bridgeObject = (void *)param_4;
  SVar14.message.str = LVar7.unknown;
  SVar14.template.bridgeObject = (void *)param_7;
  SVar14.template.str = (char *)param_6;
  SVar14._16_8_ = param_5;
  SVar14.interpolationCount = param_8;
  LocalizationValue::StringInterpolation::_appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar14);
  puVar8 = &SUB_e200000000000000;
  puVar9 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  puVar10 = 
  PTR___protocol_witness_table_for_Swift_Int32___Foundation__FormatSpecifiable_in_Foundation_100ea7b78
  ;
  local_64 = param_1;
  LocalizationValue::StringInterpolation::_appendInterpolation(&local_64,0x6425);
  uVar6 = 0xe000000000000000;
  SVar15.message.bridgeObject = puVar9;
  SVar15.message.str = puVar8;
  SVar15.template.bridgeObject = (void *)param_7;
  SVar15.template.str = (char *)param_6;
  SVar15._16_8_ = puVar10;
  SVar15.interpolationCount = param_8;
  LocalizationValue::StringInterpolation::_appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar15);
  stringInterpolation.message.bridgeObject = (void *)uVar6;
  stringInterpolation.message.str = (char *)pSVar11;
  stringInterpolation.template.bridgeObject = puVar10;
  stringInterpolation.template.str = puVar9;
  stringInterpolation._16_8_ = puVar8;
  stringInterpolation.interpolationCount = param_6;
  LocalizationValue::_init(stringInterpolation);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar13 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  *(undefined8 *)&pSVar11[-1].attributes = 0;
  pSVar11[-1].template.str = (char *)0x0;
  *(undefined2 *)&pSVar11[-1].template.bridgeObject = 0x100;
  Foundation::LocalizedStringResource::_init
            (param_2,param_3,(Locale)0x2,(BundleDescription)(__int8)lVar12);
  return;
}



/* Address: 0x1001e7114 | FUN_1001e7114 */

void FUN_1001e7114(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.connect.deeplink-instruction",0x29);
  return;
}



/* Address: 0x1001e7124 | FUN_1001e7124 */

void FUN_1001e7124(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.connection-sheet.title",0x23);
  return;
}



/* Address: 0x1001e7134 | FUN_1001e7134 */

void FUN_1001e7134(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.disconnect.confirm.message",0x27);
  return;
}



/* Address: 0x1001e7144 | FUN_1001e7144 */

void FUN_1001e7144(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.disconnect.confirm.title",0x25);
  return;
}



/* Address: 0x1001e7154 | FUN_1001e7154 */

void FUN_1001e7154(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.mcp.tools.last-used",0x1c);
  return;
}



/* Address: 0x1001e7164 | FUN_1001e7164 */

void FUN_1001e7164(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"settings.sync.status.error.icloud-unknown",0x29);
  return;
}



/* Address: 0x1001e7174 | FUN_1001e7174 */

void FUN_1001e7174(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"shortcut-recorder.error.used-in-menu",0x24);
  return;
}



/* Address: 0x1001e7184 | FUN_1001e7184 */

void FUN_1001e7184(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e7194(param_1,param_2,"whats-new.paste-5.migration.warning.subtitle",0x2c);
  return;
}



/* Address: 0x1001e7194 | FUN_1001e7194 */

void FUN_1001e7194(char *param_1,void *param_2,StaticString param_3,undefined *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  BundleDescription BVar1;
  Locale LVar2;
  undefined7 extraout_var;
  LocalizationValue LVar4;
  long lVar5;
  undefined8 uVar6;
  StaticString SVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  StringInterpolation *pSVar8;
  long extraout_x8_02;
  long lVar9;
  long lVar10;
  String SVar11;
  StringInterpolation SVar12;
  StringInterpolation SVar13;
  StringInterpolation SVar14;
  StringInterpolation stringInterpolation;
  Array<undefined> aAStack_90 [8];
  char *pcStack_88;
  void *apvStack_80 [2];
  undefined auStack_70 [8];
  LocalizationValue local_68;
  long lVar3;
  
  SVar7.unknown = param_3.unknown;
  local_68.unknown = param_4;
  LVar2 = Foundation::Locale::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  lVar9 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  LVar2.unknown =
       auStack_70 +
       (-(extraout_x8_00 + 0xfU & 0xfffffffffffffff0) - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar4 = LocalizationValue::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  pSVar8 = (StringInterpolation *)(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)LVar2.unknown - (long)pSVar8;
  lVar5 = 0;
  LocalizationValue::StringInterpolation::_typeMetadataAccessor(pSVar8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pSVar8 = (StringInterpolation *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  LocalizationValue::StringInterpolation::_init(pSVar8,0,1);
  SVar12.message.bridgeObject = param_4;
  SVar12.message.str = SVar7.unknown;
  SVar12.template.bridgeObject = (void *)param_7;
  SVar12.template.str = (char *)param_6;
  SVar12._16_8_ = param_5;
  SVar12.interpolationCount = param_8;
  LocalizationValue::StringInterpolation::_appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar12);
  SVar11.bridgeObject = param_2;
  SVar11.str = param_1;
  SVar13.message.bridgeObject = param_4;
  SVar13.message.str = SVar7.unknown;
  SVar13.template.bridgeObject = (void *)param_7;
  SVar13.template.str = (char *)param_6;
  SVar13._16_8_ = param_5;
  SVar13.interpolationCount = param_8;
  LocalizationValue::StringInterpolation::_appendInterpolation(SVar11,SVar13);
  uVar6 = 0xe000000000000000;
  SVar14.message.bridgeObject = param_4;
  SVar14.message.str = SVar7.unknown;
  SVar14.template.bridgeObject = (void *)param_7;
  SVar14.template.str = (char *)param_6;
  SVar14._16_8_ = param_5;
  SVar14.interpolationCount = param_8;
  LocalizationValue::StringInterpolation::_appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar14);
  stringInterpolation.message.bridgeObject = (void *)uVar6;
  stringInterpolation.message.str = (char *)pSVar8;
  stringInterpolation.template.bridgeObject = (void *)param_5;
  stringInterpolation.template.str = param_4;
  stringInterpolation._16_8_ = SVar7.unknown;
  stringInterpolation.interpolationCount = param_6;
  LocalizationValue::_init(stringInterpolation);
  if (DAT_100fb4f20 != -1) {
    _swift_once(&DAT_100fb4f20,FUN_1001e73e4);
  }
  lVar5 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  (**(code **)(lVar9 + 0x10))(LVar2.unknown,lVar5,lVar3);
  Foundation::Locale::get_current(LVar2);
  *(undefined8 *)&pSVar8[-1].attributes = 0;
  pSVar8[-1].template.str = (char *)0x0;
  *(undefined2 *)&pSVar8[-1].template.bridgeObject = 0x100;
  Foundation::LocalizedStringResource::_init
            (param_3,local_68,(Locale)0x2,(BundleDescription)(__int8)lVar10);
  return;
}



/* Address: 0x1001e739c | FUN_1001e739c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1001e739c(void)

{
  undefined8 *puVar1;
  
  if (DAT_100fb4f18 == -1) {
    DAT_100fb4f48 = DAT_101057740;
    return DAT_101057740;
  }
  puVar1 = &DAT_100fb4f18;
  _swift_once(&DAT_100fb4f18,FUN_1001ba0fc);
  FUN_1001e73ac();
  return puVar1;
}



/* Address: 0x1001e73ac | FUN_1001e73ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001e73ac(void)

{
  DAT_100fb4f48 = DAT_101057740;
  return DAT_101057740;
}



/* Address: 0x1001e73c0 | FUN_1001e73c0 */

void FUN_1001e73c0(void)

{
  _swift_once(&DAT_100fb4f18,FUN_1001ba0fc);
  FUN_1001e73ac();
  return;
}



/* Address: 0x1001e73e4 | FUN_1001e73e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001e73e4(void)

{
  BundleDescription BVar1;
  URL UVar2;
  undefined7 extraout_var;
  long lVar4;
  URL UVar5;
  long extraout_x8;
  long lVar6;
  long lVar3;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  BVar1 = Foundation::LocalizedStringResource::BundleDescription::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,BVar1.value);
  FUN_1000ce204(lVar3,&DAT_100fb4f28);
  lVar4 = lVar3;
  FUN_1000cd990(lVar3,&DAT_100fb4f28);
  if (DAT_100fb4f40 != -1) {
    _swift_once(&DAT_100fb4f40,FUN_1001e739c);
  }
  UVar5.unknown = (undefined *)objc_stub::bundleURL(DAT_100fb4f48);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  (**(code **)(lVar6 + 0x20))
            (lVar4,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             UVar2.unknown);
  (**(code **)(*(long *)(lVar3 + -8) + 0x68))
            (lVar4,*(undefined4 *)
                    PTR___enum_case_for_Foundation_LocalizedStringResource_BundleDescription_atURL_Foundation_LocalizedStringResource_BundleDescription_Type___>__Foundation_URL___>_Foundation_LocalizedStringResource_BundleDescription_100ea7010
             ,lVar3);
  return;
}



/* Address: 0x1001e7514 | FUN_1001e7514 */

void FUN_1001e7514(void)

{
  FUN_1001e7580(FUN_1001eba28,6,FUN_1001e752c);
  return;
}



/* Address: 0x1001e752c | FUN_1001e752c */

void FUN_1001e752c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1001eba28();
  _swift_allocObject();
  FUN_1001ea0fc();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001e7568 | FUN_1001e7568 */

void FUN_1001e7568(void)

{
  FUN_1001e7580(FUN_1001ec904,0xc,FUN_1001e75e4);
  return;
}



/* Address: 0x1001e7580 | FUN_1001e7580 */

undefined8 FUN_1001e7580(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0;
  (*param_1)(0);
  FUN_1000d80e0(&local_28,"PasteShortcut/DI+PasteShortcut.swift",0x24,2,param_2,0x13,param_3,0,uVar1
               );
  return local_28;
}



/* Address: 0x1001e75e4 | FUN_1001e75e4 */

void FUN_1001e75e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1001ec904();
  _swift_allocObject();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001e7618 | FUN_1001e7618 */

void FUN_1001e7618(void)

{
  FUN_1001e7678(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1001e7624 | FUN_1001e7624 */

void FUN_1001e7624(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c33020;
  _swift_getKeyPath(&DAT_100c33020);
  FUN_1000037f0(&DAT_100fb4f50,&DAT_100c33050);
  _swift_allocObject();
  FUN_1000da6e0(puVar1);
  return;
}



/* Address: 0x1001e7678 | FUN_1001e7678 */

undefined * FUN_1001e7678(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  if (capacity == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  this = (_DictionaryStorage *)&DAT_100fb4fa0;
  FUN_1000037f0(&DAT_100fb4fa0,&DAT_100c33250);
  puVar3 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar7 = *(ulong *)(param_1 + 0x20);
  uVar8 = *(ulong *)(param_1 + 0x28);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = uVar7;
  uVar6 = uVar8;
  FUN_1001e9114();
  if ((uVar6 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 0x10);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e7790);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
      if (capacity == (undefined *)0x0) {
        _swift_retain();
        return puVar3;
      }
      uVar7 = puVar5[-2];
      uVar8 = puVar5[-1];
      uVar9 = *puVar5;
      _swift_retain();
      uVar4 = uVar7;
      uVar6 = uVar8;
      FUN_1001e9114();
      puVar5 = puVar5 + 3;
    } while ((uVar6 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e7760);
  (*pcVar2)();
}



/* Address: 0x1001e7790 | FUN_1001e7790 */

void FUN_1001e7790(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb4f58,&DAT_100ebeb30);
  return;
}



/* Address: 0x1001e77a4 | FUN_1001e77a4 */

void FUN_1001e77a4(void)

{
  FUN_1001e77ec(&DAT_100fb4f60,&TargetProtocolConformanceDescriptor_100c33204);
  return;
}



/* Address: 0x1001e77c8 | FUN_1001e77c8 */

void FUN_1001e77c8(void)

{
  FUN_1001e77ec(&DAT_100fb4f68,&TargetProtocolConformanceDescriptor_100c3308c);
  return;
}



/* Address: 0x1001e77ec | FUN_1001e77ec */

void FUN_1001e77ec(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_1001e7790(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1001e782c | FUN_1001e782c */

void FUN_1001e782c(void)

{
  FUN_1001e77ec(&DAT_100fb4f70,&TargetProtocolConformanceDescriptor_100c3318c);
  return;
}



/* Address: 0x1001e7850 | FUN_1001e7850 */

void FUN_1001e7850(void)

{
  FUN_1001e77ec(&DAT_100fb4f78,&TargetProtocolConformanceDescriptor_100c330c0);
  return;
}



/* Address: 0x1001e7874 | FUN_1001e7874 */

undefined * FUN_1001e7874(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb4f88;
    FUN_1000037f0(&DAT_100fb4f88,&DAT_100c33238);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1001e7ca4(param_1,&local_80);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar6 = local_80;
      uVar7 = uStack_78;
      FUN_1001e9100();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e797c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e7980);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1001e7980 | FUN_1001e7980 */

undefined * FUN_1001e7980(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 *puVar8;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb4f98;
    uVar6 = 0;
    FUN_1000037f0();
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      uVar5 = uVar1;
      FUN_1001e9180();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e7a54);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e7a58);
        (*pcVar3)();
      }
      puVar8 = puVar8 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
  }
  return puVar4;
}



/* Address: 0x1001e7a58 | FUN_1001e7a58 */

undefined * FUN_1001e7a58(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb4fa8;
    FUN_1000037f0(&DAT_100fb4fa8,&DAT_100c33258);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_1001e9100();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001e7b64);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001e7b68);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x1001e7b68 | FUN_1001e7b68 */

undefined * FUN_1001e7b68(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *capacity;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  
  capacity = *(undefined **)(param_1 + 0x10);
  if (capacity == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  this = (_DictionaryStorage *)&DAT_100fb4f80;
  FUN_1000037f0(&DAT_100fb4f80,&DAT_100c33230);
  puVar5 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar11 = *(ulong *)(param_1 + 0x20);
  uVar7 = *(ulong *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  uVar10 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = uVar11;
  uVar9 = uVar7;
  FUN_1001e91d8();
  if ((uVar9 & 1) == 0) {
    puVar8 = (undefined8 *)(param_1 + 0x58);
    do {
      uVar9 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar9 + 0x40) = *(ulong *)(puVar5 + uVar9 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar11;
      puVar1[1] = uVar7;
      puVar2 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x10);
      *puVar2 = uVar12;
      puVar2[1] = uVar10;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e7ca4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      if (capacity == (undefined *)0x0) {
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar10);
        return puVar5;
      }
      uVar11 = puVar8[-3];
      uVar7 = puVar8[-2];
      uVar12 = puVar8[-1];
      uVar3 = *puVar8;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar10);
      uVar6 = uVar11;
      uVar9 = uVar7;
      FUN_1001e91d8();
      puVar8 = puVar8 + 4;
      uVar10 = uVar3;
    } while ((uVar9 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e7c68);
  (*pcVar4)();
}



/* Address: 0x1001e7ca4 | FUN_1001e7ca4 */

undefined8 FUN_1001e7ca4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4f90;
  FUN_1000037f0(&DAT_100fb4f90,&DAT_100c33240);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001e7cf4 | FUN_1001e7cf4 */

void FUN_1001e7cf4(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1001e7d00 | FUN_1001e7d00 */

void FUN_1001e7d00(void)

{
  return;
}



/* Address: 0x1001e7d04 | FUN_1001e7d04 */

void FUN_1001e7d04(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fb4fb0,&DAT_100ebebb0);
  return;
}



/* Address: 0x1001e7d18 | FUN_1001e7d18 */

undefined1  [16] FUN_1001e7d18(void)

{
  ID IVar1;
  ID IVar2;
  ID unaff_x20;
  undefined1 auVar3 [16];
  
  IVar1 = objc_stub::modifierFlags(unaff_x20);
  IVar2 = objc_stub::keyCode(unaff_x20);
  auVar3._0_8_ = IVar2 & 0xffffffff;
  auVar3._8_8_ = IVar1 & 0xff5f0000;
  return auVar3;
}



/* Address: 0x1001e7d58 | FUN_1001e7d58 */

uint FUN_1001e7d58(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  puVar3 = &DAT_100fb5020;
  FUN_1000037f0(&DAT_100fb5020,&DAT_100c33278);
  _swift_initStaticObject();
  FUN_1001e7980();
  uVar8 = 0;
  lVar4 = 0;
  uVar5 = 1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
  uVar6 = 0xffffffffffffffff;
  if ((puVar3[0x20] & 0x3f) < 6) {
    uVar6 = ~(-1L << (uVar5 & 0x3f));
  }
  uVar6 = uVar6 & *(ulong *)(puVar3 + 0x40);
  do {
    do {
      while (uVar6 == 0) {
        bVar2 = SCARRY8(lVar4,1);
        lVar4 = lVar4 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001e7e4c);
          (*pcVar1)();
        }
        if ((long)(uVar5 + 0x3f >> 6) <= lVar4) {
          _swift_release();
          return uVar8;
        }
        uVar6 = *(ulong *)((long)(puVar3 + 0x40) + lVar4 * 8);
      }
      uVar7 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar4 << 6;
    } while ((*(ulong *)(*(long *)(puVar3 + 0x30) + uVar7 * 8) & (param_2 ^ 0xffffffffffffffff)) !=
             0);
    uVar7 = *(ulong *)(*(long *)(puVar3 + 0x38) + uVar7 * 8);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001e7e50);
      (*pcVar1)();
    }
    uVar8 = uVar8 | (uint)uVar7;
  } while (uVar7 >> 0x20 == 0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001e7e34);
  (*pcVar1)();
}



/* Address: 0x1001e7e50 | FUN_1001e7e50 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001e7f0c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

String FUN_1001e7e50(long *param_1,ulong param_2)

{
  String *pSVar1;
  long lVar2;
  code *pcVar3;
  _ArrayBuffer<undefined> _Var4;
  _ArrayBuffer<undefined> _Var5;
  _ArrayBuffer<undefined> _Var6;
  _ArrayBuffer<undefined> _Var7;
  long *plVar8;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  undefined4 local_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  plVar8 = param_1;
  if (DAT_100fb5028 != -1) {
    plVar8 = &DAT_100fb5028;
    param_2 = 0;
    _swift_once();
  }
  lVar2 = DAT_100fb5030;
  if ((*(long *)(DAT_100fb5030 + 0x10) == 0) ||
     (plVar8 = param_1, FUN_100071340(), (param_2 & 1) == 0)) {
    _TISCopyCurrentASCIICapableKeyboardLayoutInputSource();
    if ((plVar8 != (long *)0x0) && (_TISGetInputSourceProperty(), plVar8 != (long *)0x0)) {
      _CFDataGetBytePtr();
      local_5c = 0;
      _Var4 = Swift::Array<undefined>::_allocateBufferUninitialized
                        (plVar8,PTR___type_metadata_for_Swift_UInt16_100eade18);
      *(undefined8 *)(_Var4.unknown + 0x10) = 0x100;
      *(undefined8 *)(_Var4.unknown + 0x28) = 0;
      *(undefined8 *)(_Var4.unknown + 0x20) = 0;
      *(undefined8 *)(_Var4.unknown + 0x38) = 0;
      *(undefined8 *)(_Var4.unknown + 0x30) = 0;
      *(undefined8 *)(_Var4.unknown + 0x48) = 0;
      *(undefined8 *)(_Var4.unknown + 0x40) = 0;
      *(undefined8 *)(_Var4.unknown + 0x58) = 0;
      *(undefined8 *)(_Var4.unknown + 0x50) = 0;
      *(undefined8 *)(_Var4.unknown + 0x68) = 0;
      *(undefined8 *)(_Var4.unknown + 0x60) = 0;
      *(undefined8 *)(_Var4.unknown + 0x78) = 0;
      *(undefined8 *)(_Var4.unknown + 0x70) = 0;
      *(undefined8 *)(_Var4.unknown + 0x88) = 0;
      *(undefined8 *)(_Var4.unknown + 0x80) = 0;
      *(undefined8 *)(_Var4.unknown + 0x98) = 0;
      *(undefined8 *)(_Var4.unknown + 0x90) = 0;
      *(undefined8 *)(_Var4.unknown + 0xa8) = 0;
      *(undefined8 *)(_Var4.unknown + 0xa0) = 0;
      *(undefined8 *)(_Var4.unknown + 0xb8) = 0;
      *(undefined8 *)(_Var4.unknown + 0xb0) = 0;
      *(undefined8 *)(_Var4.unknown + 200) = 0;
      *(undefined8 *)(_Var4.unknown + 0xc0) = 0;
      *(undefined8 *)(_Var4.unknown + 0xd8) = 0;
      *(undefined8 *)(_Var4.unknown + 0xd0) = 0;
      *(undefined8 *)(_Var4.unknown + 0xe8) = 0;
      *(undefined8 *)(_Var4.unknown + 0xe0) = 0;
      *(undefined8 *)(_Var4.unknown + 0xf8) = 0;
      *(undefined8 *)(_Var4.unknown + 0xf0) = 0;
      *(undefined8 *)(_Var4.unknown + 0x108) = 0;
      *(undefined8 *)(_Var4.unknown + 0x100) = 0;
      *(undefined8 *)(_Var4.unknown + 0x118) = 0;
      *(undefined8 *)(_Var4.unknown + 0x110) = 0;
      *(undefined8 *)(_Var4.unknown + 0x128) = 0;
      *(undefined8 *)(_Var4.unknown + 0x120) = 0;
      *(undefined8 *)(_Var4.unknown + 0x138) = 0;
      *(undefined8 *)(_Var4.unknown + 0x130) = 0;
      *(undefined8 *)(_Var4.unknown + 0x148) = 0;
      *(undefined8 *)(_Var4.unknown + 0x140) = 0;
      *(undefined8 *)(_Var4.unknown + 0x158) = 0;
      *(undefined8 *)(_Var4.unknown + 0x150) = 0;
      *(undefined8 *)(_Var4.unknown + 0x168) = 0;
      *(undefined8 *)(_Var4.unknown + 0x160) = 0;
      *(undefined8 *)(_Var4.unknown + 0x178) = 0;
      *(undefined8 *)(_Var4.unknown + 0x170) = 0;
      *(undefined8 *)(_Var4.unknown + 0x188) = 0;
      *(undefined8 *)(_Var4.unknown + 0x180) = 0;
      *(undefined8 *)(_Var4.unknown + 0x198) = 0;
      *(undefined8 *)(_Var4.unknown + 400) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1a8) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1a0) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1b8) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1b0) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1c8) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1c0) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1d8) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1d0) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1e8) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1e0) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1f8) = 0;
      *(undefined8 *)(_Var4.unknown + 0x1f0) = 0;
      *(undefined8 *)(_Var4.unknown + 0x208) = 0;
      *(undefined8 *)(_Var4.unknown + 0x200) = 0;
      *(undefined8 *)(_Var4.unknown + 0x218) = 0;
      *(undefined8 *)(_Var4.unknown + 0x210) = 0;
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e8090);
        (*pcVar3)();
      }
      if ((ulong)param_1 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001e8094);
        (*pcVar3)();
      }
      _Var5 = _Var4;
      _swift_bridgeObjectRetain();
      _LMGetKbdType();
      uVar9 = *(undefined8 *)(_Var4.unknown + 0x10);
      _swift_bridgeObjectRelease(_Var4.unknown);
      _Var6 = _Var4;
      _swift_isUniquelyReferenced_nonNull_native();
      _Var7 = _Var4;
      if (((ulong)_Var6.unknown & 1) == 0) {
        _Var7.unknown = (undefined *)0x0;
        FUN_1001e92d4(0,*(undefined8 *)(_Var4.unknown + 0x10),0,_Var4.unknown);
      }
      _UCKeyTranslate(plVar8,param_1,3,0,_Var5.unknown,0,&local_5c,uVar9);
      if ((int)plVar8 == 0) {
        SVar10 = (extension_Foundation)::Swift::String::init
                           ((UnsafePointer<__int16>)(_Var7.unknown + 0x20),0);
        SVar11 = Swift::String::uppercased(SVar10);
        _swift_bridgeObjectRelease(_Var7.unknown);
        _swift_bridgeObjectRelease(SVar10.bridgeObject);
        goto LAB_1001e7ff8;
      }
      _swift_bridgeObjectRelease(_Var7.unknown);
    }
    SVar11 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    pSVar1 = (String *)(*(long *)(lVar2 + 0x38) + (long)plVar8 * 0x10);
    SVar11 = *pSVar1;
    _swift_bridgeObjectRetain(pSVar1->bridgeObject);
  }
LAB_1001e7ff8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return SVar11;
}



/* Address: 0x1001e8098 | FUN_1001e8098 */

String FUN_1001e8098(undefined *param_1,_StringGuts param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  undefined *puVar5;
  long lVar6;
  bool bVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  __int64 _Var10;
  void *pvVar11;
  _StringGuts _Var12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  _Var8.unknown = param_1;
  FUN_1001e7e50();
  SVar14.bridgeObject = param_2.unknown;
  SVar14.str = _Var8.unknown;
  puVar9 = &DAT_100fb5038;
  FUN_1000037f0(&DAT_100fb5038,&DAT_100c33830);
  _swift_allocObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  puVar5 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  *(undefined **)(puVar9 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar9 + 0x40) = puVar5;
  *(undefined8 *)(puVar9 + 0x20) = 0x21a9;
  SVar13 = (extension_Foundation)::Swift::String::_init();
  if (SVar13 == SVar14) {
    _swift_bridgeObjectRelease(param_2.unknown);
    param_2.unknown = SVar13.bridgeObject;
  }
  else {
    bVar7 = Swift::_stringCompareWithSmolCheck
                      (_Var8,param_2,(_StringComparisonResult)(__int8)SVar13.str);
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    if (!bVar7) {
      SVar13.bridgeObject = param_2.unknown;
      SVar13.str = _Var8.unknown;
      _Var12.unknown = param_2.unknown;
      _Var10 = Swift::String::get_count(SVar13);
      if (_Var10 < 2) {
        SVar15.bridgeObject = param_2.unknown;
        SVar15.str = _Var8.unknown;
        SVar14 = Swift::String::lowercased(SVar15);
        _swift_bridgeObjectRelease(param_2.unknown);
        return SVar14;
      }
      _swift_bridgeObjectRelease(param_2.unknown);
      if (DAT_100fb5040 != -1) {
        _Var12.unknown = (undefined *)0x0;
        _swift_once(&DAT_100fb5040);
      }
      lVar6 = DAT_100fb5048;
      if ((*(long *)(DAT_100fb5048 + 0x10) != 0) &&
         (FUN_100071340(), ((ulong)_Var12.unknown & 1) != 0)) {
        puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + (long)param_1 * 0x10);
        pcVar2 = (char *)*puVar1;
        pvVar11 = (void *)puVar1[1];
        _swift_bridgeObjectRetain(pvVar11);
        SVar3.bridgeObject = pvVar11;
        SVar3.str = pcVar2;
        return SVar3;
      }
      return (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
  }
  _swift_bridgeObjectRelease(param_2.unknown);
  SVar4.bridgeObject = (void *)0xe100000000000000;
  SVar4.str = (char *)0xd;
  return SVar4;
}



/* Address: 0x1001e822c | FUN_1001e822c */

void FUN_1001e822c(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  LocalizedStringResource LVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  _DictionaryStorage *this;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long extraout_x8;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  String SVar18;
  undefined8 local_70;
  undefined8 uStack_68;
  
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  LVar5.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar6 = &DAT_100fb5070;
  FUN_1000037f0(&DAT_100fb5070,&DAT_100c332a8);
  _swift_allocObject();
  puVar14 = (ulong *)(puVar6 + 0x20);
  *(undefined8 *)(puVar6 + 0x28) = 0x3146;
  *puVar14 = 0x7a;
  *(undefined1 **)(puVar6 + 0x30) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0x40) = 0x3246;
  *(undefined8 *)(puVar6 + 0x38) = 0x78;
  *(undefined1 **)(puVar6 + 0x48) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0x58) = 0x3346;
  *(undefined8 *)(puVar6 + 0x50) = 99;
  *(undefined1 **)(puVar6 + 0x60) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0x70) = 0x3446;
  *(undefined8 *)(puVar6 + 0x68) = 0x76;
  *(undefined1 **)(puVar6 + 0x78) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0x88) = 0x3546;
  *(undefined8 *)(puVar6 + 0x80) = 0x60;
  *(undefined1 **)(puVar6 + 0x90) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0xa0) = 0x3646;
  *(undefined8 *)(puVar6 + 0x98) = 0x61;
  *(undefined1 **)(puVar6 + 0xa8) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0xb8) = 0x3746;
  *(undefined8 *)(puVar6 + 0xb0) = 0x62;
  *(undefined1 **)(puVar6 + 0xc0) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0xd0) = 0x3846;
  *(undefined8 *)(puVar6 + 200) = 100;
  *(undefined1 **)(puVar6 + 0xd8) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0xe8) = 0x3946;
  *(undefined8 *)(puVar6 + 0xe0) = 0x65;
  *(undefined1 **)(puVar6 + 0xf0) = &SUB_e200000000000000;
  *(undefined8 *)(puVar6 + 0x100) = 0x303146;
  *(undefined8 *)(puVar6 + 0xf8) = 0x6d;
  *(undefined8 *)(puVar6 + 0x108) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x118) = 0x313146;
  *(undefined8 *)(puVar6 + 0x110) = 0x67;
  *(undefined8 *)(puVar6 + 0x120) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x128) = 0x6f;
  *(undefined8 *)(puVar6 + 0x130) = 0x323146;
  *(undefined8 *)(puVar6 + 0x138) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x148) = 0x333146;
  *(undefined8 *)(puVar6 + 0x140) = 0x69;
  *(undefined8 *)(puVar6 + 0x150) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x158) = 0x6b;
  *(undefined8 *)(puVar6 + 0x160) = 0x343146;
  *(undefined8 *)(puVar6 + 0x168) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x178) = 0x353146;
  *(undefined8 *)(puVar6 + 0x170) = 0x71;
  *(undefined8 *)(puVar6 + 0x180) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x188) = 0x6a;
  *(undefined8 *)(puVar6 + 400) = 0x363146;
  *(undefined8 *)(puVar6 + 0x198) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x1a8) = 0x373146;
  *(undefined8 *)(puVar6 + 0x1a0) = 0x40;
  *(undefined8 *)(puVar6 + 0x1b0) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x1b8) = 0x4f;
  *(undefined8 *)(puVar6 + 0x1c0) = 0x383146;
  *(undefined8 *)(puVar6 + 0x1c8) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x1d8) = 0x393146;
  *(undefined8 *)(puVar6 + 0x1d0) = 0x50;
  *(undefined8 *)(puVar6 + 0x1e0) = 0xe300000000000000;
  *(undefined8 *)(puVar6 + 0x1e8) = 0x31;
  FUN_1001e4b54(LVar5.unknown);
  SVar18 = (extension_Foundation)::Swift::String::init(LVar5);
  *(String *)(puVar6 + 0x1f0) = SVar18;
  *(undefined8 *)(puVar6 + 0x200) = 0x35;
  puVar7 = &DAT_100fb5038;
  FUN_1000037f0(&DAT_100fb5038,&DAT_100c33830);
  puVar8 = puVar7;
  _swift_allocObject();
  uStack_68 = 2;
  local_70 = 1;
  *(undefined8 *)(puVar8 + 0x18) = 2;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  puVar3 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar8 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x238b;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x208) = SVar18;
  *(undefined8 *)(puVar6 + 0x218) = 0x33;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x232b;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x220) = SVar18;
  *(undefined8 *)(puVar6 + 0x230) = 0x75;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x2326;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x238) = SVar18;
  *(undefined8 *)(puVar6 + 0x248) = 0x7b;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x2190;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x250) = SVar18;
  *(undefined8 *)(puVar6 + 0x260) = 0x7c;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x2192;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x268) = SVar18;
  *(undefined8 *)(puVar6 + 0x278) = 0x7e;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x2191;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x280) = SVar18;
  *(undefined8 *)(puVar6 + 0x290) = 0x7d;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x2193;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x298) = SVar18;
  *(undefined8 *)(puVar6 + 0x2a8) = 0x72;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x3f;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x2b0) = SVar18;
  *(undefined8 *)(puVar6 + 0x2c0) = 0x74;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x21de;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x2c8) = SVar18;
  *(undefined8 *)(puVar6 + 0x2d8) = 0x79;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x21df;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x2e0) = SVar18;
  *(undefined8 *)(puVar6 + 0x2f0) = 0x30;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x21e5;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x2f8) = SVar18;
  *(undefined8 *)(puVar6 + 0x308) = 0x24;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x21a9;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x310) = SVar18;
  *(undefined8 *)(puVar6 + 0x328) = 0x30;
  *(undefined8 *)(puVar6 + 800) = 0x52;
  *(undefined8 *)(puVar6 + 0x330) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x338) = 0x53;
  *(undefined8 *)(puVar6 + 0x340) = 0x31;
  *(undefined8 *)(puVar6 + 0x348) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x358) = 0x32;
  *(undefined8 *)(puVar6 + 0x350) = 0x54;
  *(undefined8 *)(puVar6 + 0x360) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x368) = 0x55;
  *(undefined8 *)(puVar6 + 0x370) = 0x33;
  *(undefined8 *)(puVar6 + 0x378) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x388) = 0x34;
  *(undefined8 *)(puVar6 + 0x380) = 0x56;
  *(undefined8 *)(puVar6 + 0x390) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x398) = 0x57;
  *(undefined8 *)(puVar6 + 0x3a0) = 0x35;
  *(undefined8 *)(puVar6 + 0x3a8) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x3b8) = 0x36;
  *(undefined8 *)(puVar6 + 0x3b0) = 0x58;
  *(undefined8 *)(puVar6 + 0x3c0) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x3c8) = 0x59;
  *(undefined8 *)(puVar6 + 0x3d0) = 0x37;
  *(undefined8 *)(puVar6 + 0x3d8) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 1000) = 0x38;
  *(undefined8 *)(puVar6 + 0x3e0) = 0x5b;
  *(undefined8 *)(puVar6 + 0x3f0) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x3f8) = 0x5c;
  *(undefined8 *)(puVar6 + 0x400) = 0x39;
  *(undefined8 *)(puVar6 + 0x408) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x418) = 0x2e;
  *(undefined8 *)(puVar6 + 0x410) = 0x41;
  *(undefined8 *)(puVar6 + 0x420) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x428) = 0x43;
  *(undefined8 *)(puVar6 + 0x430) = 0x2a;
  *(undefined8 *)(puVar6 + 0x438) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x448) = 0x2b;
  *(undefined8 *)(puVar6 + 0x440) = 0x45;
  *(undefined8 *)(puVar6 + 0x450) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x458) = 0x47;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 8999;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x460) = SVar18;
  *(undefined8 *)(puVar6 + 0x478) = 0x2f;
  *(undefined8 *)(puVar6 + 0x470) = 0x4b;
  *(undefined8 *)(puVar6 + 0x480) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x488) = 0x4c;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x2305;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x490) = SVar18;
  *(undefined8 *)(puVar6 + 0x4a8) = 0x2d;
  *(undefined8 *)(puVar6 + 0x4a0) = 0x4e;
  *(undefined8 *)(puVar6 + 0x4b0) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x4b8) = 0x51;
  *(undefined8 *)(puVar6 + 0x4c0) = 0x3d;
  *(undefined8 *)(puVar6 + 0x4c8) = 0xe100000000000000;
  *(undefined8 *)(puVar6 + 0x4d0) = 0x77;
  puVar8 = puVar7;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar8 + 0x18) = uStack_68;
  *(undefined8 *)(puVar8 + 0x10) = local_70;
  *(undefined **)(puVar8 + 0x38) = puVar2;
  *(undefined **)(puVar8 + 0x40) = puVar3;
  *(undefined8 *)(puVar8 + 0x20) = 0x2198;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x4d8) = SVar18;
  *(undefined8 *)(puVar6 + 0x4e8) = 0x73;
  _swift_allocObject(puVar7,0x48,7);
  *(undefined8 *)(puVar7 + 0x18) = uStack_68;
  *(undefined8 *)(puVar7 + 0x10) = local_70;
  *(undefined **)(puVar7 + 0x38) = puVar2;
  *(undefined **)(puVar7 + 0x40) = puVar3;
  *(undefined8 *)(puVar7 + 0x20) = 0x2196;
  SVar18 = (extension_Foundation)::Swift::String::_init();
  *(String *)(puVar6 + 0x4f0) = SVar18;
  this = (_DictionaryStorage *)&DAT_100fb5058;
  uVar11 = 0;
  FUN_1000037f0();
  lVar9 = 0x34;
  Swift::_DictionaryStorage::_allocate(this,0x34);
  uVar15 = *puVar14;
  uVar16 = *(undefined8 *)(puVar6 + 0x28);
  uVar17 = *(undefined8 *)(puVar6 + 0x30);
  uVar10 = uVar15;
  FUN_100071340();
  if ((uVar11 & 1) == 0) {
    lVar12 = 0;
    do {
      uVar13 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar9 + 0x40 + uVar13) = *(ulong *)(lVar9 + 0x40 + uVar13) | 1L << (uVar10 & 0x3f);
      *(ulong *)(*(long *)(lVar9 + 0x30) + uVar10 * 8) = uVar15;
      puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar10 * 0x10);
      *puVar1 = uVar16;
      puVar1[1] = uVar17;
      if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e8a98);
        (*pcVar4)();
      }
      *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
      if (lVar12 + 0x18 == 0x4e0) {
        _swift_bridgeObjectRetain();
        _swift_setDeallocating(puVar6);
        puVar7 = &DAT_100fb5060;
        FUN_1000037f0(&DAT_100fb5060,&DAT_100c33298);
        _swift_arrayDestroy(puVar14,0x34,puVar7);
        _swift_deallocClassInstance(puVar6,0x20,7);
        DAT_100fb5030 = lVar9;
        return;
      }
      uVar15 = *(ulong *)(puVar6 + lVar12 + 0x38);
      uVar16 = *(undefined8 *)(puVar6 + lVar12 + 0x40);
      uVar17 = *(undefined8 *)(puVar6 + lVar12 + 0x48);
      _swift_bridgeObjectRetain();
      uVar10 = uVar15;
      FUN_100071340();
      lVar12 = lVar12 + 0x18;
    } while ((uVar11 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e8a2c);
  (*pcVar4)();
}



/* Address: 0x1001e8a98 | FUN_1001e8a98 */

void FUN_1001e8a98(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  char *pcVar13;
  void *pvVar14;
  ulong local_240;
  String local_238;
  ulong local_228;
  String local_220;
  undefined8 local_210;
  String local_208;
  undefined8 local_1f8;
  String local_1f0;
  undefined8 local_1e0;
  String local_1d8;
  undefined8 local_1c8;
  String local_1c0;
  undefined8 local_1b0;
  String local_1a8;
  undefined8 local_198;
  String local_190;
  undefined8 local_180;
  String local_178;
  undefined8 local_168;
  String local_160;
  undefined8 local_150;
  String local_148;
  undefined8 local_138;
  String local_130;
  undefined8 local_120;
  String local_118;
  undefined8 local_108;
  String local_100;
  undefined8 local_f0;
  String local_e8;
  undefined8 local_d8;
  String local_d0;
  undefined8 local_c0;
  String local_b8;
  undefined8 local_a8;
  String local_a0;
  undefined8 local_90;
  String local_88;
  undefined8 local_78;
  String local_70;
  
  local_240 = 0x7a;
  puVar5 = &DAT_100fb5038;
  FUN_1000037f0(&DAT_100fb5038,&DAT_100c33830);
  puVar6 = puVar5;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar3 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar6 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf704;
  local_238 = (extension_Foundation)::Swift::String::_init();
  local_228 = 0x78;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf705;
  local_220 = (extension_Foundation)::Swift::String::_init();
  local_210 = 99;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf706;
  local_208 = (extension_Foundation)::Swift::String::_init();
  local_1f8 = 0x76;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf707;
  local_1f0 = (extension_Foundation)::Swift::String::_init();
  local_1e0 = 0x60;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf708;
  local_1d8 = (extension_Foundation)::Swift::String::_init();
  local_1c8 = 0x61;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf709;
  local_1c0 = (extension_Foundation)::Swift::String::_init();
  local_1b0 = 0x62;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf70a;
  local_1a8 = (extension_Foundation)::Swift::String::_init();
  local_198 = 100;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf70b;
  local_190 = (extension_Foundation)::Swift::String::_init();
  local_180 = 0x65;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf70c;
  local_178 = (extension_Foundation)::Swift::String::_init();
  local_168 = 0x6d;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf70d;
  local_160 = (extension_Foundation)::Swift::String::_init();
  local_150 = 0x67;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf70e;
  local_148 = (extension_Foundation)::Swift::String::_init();
  local_138 = 0x6f;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf70f;
  local_130 = (extension_Foundation)::Swift::String::_init();
  local_120 = 0x69;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf710;
  local_118 = (extension_Foundation)::Swift::String::_init();
  local_108 = 0x6b;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf711;
  local_100 = (extension_Foundation)::Swift::String::_init();
  local_f0 = 0x71;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf712;
  local_e8 = (extension_Foundation)::Swift::String::_init();
  local_d8 = 0x6a;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf713;
  local_d0 = (extension_Foundation)::Swift::String::_init();
  local_c0 = 0x40;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf714;
  local_b8 = (extension_Foundation)::Swift::String::_init();
  local_a8 = 0x4f;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf715;
  local_a0 = (extension_Foundation)::Swift::String::_init();
  local_90 = 0x50;
  puVar6 = puVar5;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = puVar2;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = 0xf716;
  local_88 = (extension_Foundation)::Swift::String::_init();
  local_78 = 0x31;
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined **)(puVar5 + 0x38) = puVar2;
  *(undefined **)(puVar5 + 0x40) = puVar3;
  *(undefined8 *)(puVar5 + 0x20) = 0x20;
  local_70 = (extension_Foundation)::Swift::String::_init();
  this = (_DictionaryStorage *)&DAT_100fb5058;
  uVar9 = 0;
  FUN_1000037f0();
  lVar7 = 0x14;
  Swift::_DictionaryStorage::_allocate(this,0x14);
  uVar12 = local_240;
  pcVar13 = local_238.str;
  pvVar14 = local_238.bridgeObject;
  uVar8 = local_240;
  FUN_100071340();
  if ((uVar9 & 1) == 0) {
    lVar10 = 0;
    do {
      uVar11 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar7 + 0x40 + uVar11) = *(ulong *)(lVar7 + 0x40 + uVar11) | 1L << (uVar8 & 0x3f);
      *(ulong *)(*(long *)(lVar7 + 0x30) + uVar8 * 8) = uVar12;
      puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 0x10);
      *puVar1 = pcVar13;
      puVar1[1] = pvVar14;
      if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e9100);
        (*pcVar4)();
      }
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      if (lVar10 + 0x18 == 0x1e0) {
        _swift_bridgeObjectRetain();
        puVar5 = &DAT_100fb5060;
        FUN_1000037f0(&DAT_100fb5060,&DAT_100c33298);
        _swift_arrayDestroy(&local_240,0x14,puVar5);
        DAT_100fb5048 = lVar7;
        return;
      }
      uVar12 = *(ulong *)((long)&local_228 + lVar10);
      pcVar13 = *(char **)((long)&local_220.str + lVar10);
      pvVar14 = *(void **)((long)&local_220.bridgeObject + lVar10);
      _swift_bridgeObjectRetain();
      uVar8 = uVar12;
      FUN_100071340();
      lVar10 = lVar10 + 0x18;
    } while ((uVar9 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001e90ac);
  (*pcVar4)();
}



/* Address: 0x1001e9100 | FUN_1001e9100 */

void FUN_1001e9100(undefined8 param_1,undefined8 param_2)

{
  FUN_1001e91ec(param_1,param_2,PTR_hash_100eac0e8,FUN_1000715b8);
  return;
}


