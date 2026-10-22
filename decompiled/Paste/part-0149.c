/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001c3a88 | FUN_1001c3a88 */

void FUN_1001c3a88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99330;
  stringLiteral.str = (char *)0xd00000000000001c;
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



/* Address: 0x1001c3c08 | FUN_1001c3c08 */

void FUN_1001c3c08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99350;
  stringLiteral.str = (char *)0xd000000000000015;
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



/* Address: 0x1001c3d88 | FUN_1001c3d88 */

void FUN_1001c3d88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99370;
  stringLiteral.str = (char *)0xd000000000000019;
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



/* Address: 0x1001c3f08 | FUN_1001c3f08 */

void FUN_1001c3f08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99390;
  stringLiteral.str = (char *)0xd000000000000014;
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



/* Address: 0x1001c4088 | FUN_1001c4088 */

void FUN_1001c4088(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d993b0;
  stringLiteral.str = (char *)0xd00000000000001d;
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



/* Address: 0x1001c4208 | FUN_1001c4208 */

void FUN_1001c4208(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d993d0;
  stringLiteral.str = (char *)0xd000000000000014;
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



/* Address: 0x1001c4388 | FUN_1001c4388 */

void FUN_1001c4388(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xef726573776f7262);
  return;
}



/* Address: 0x1001c43ac | FUN_1001c43ac */

void FUN_1001c43ac(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d993f0;
  stringLiteral.str = (char *)0xd000000000000011;
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



/* Address: 0x1001c452c | FUN_1001c452c */

void FUN_1001c452c(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99410;
  stringLiteral.str = (char *)0xd000000000000019;
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



/* Address: 0x1001c46ac | FUN_1001c46ac */

void FUN_1001c46ac(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99430;
  stringLiteral.str = (char *)0xd000000000000017;
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



/* Address: 0x1001c482c | FUN_1001c482c */

void FUN_1001c482c(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xee00646569706f63);
  return;
}



/* Address: 0x1001c4850 | FUN_1001c4850 */

void FUN_1001c4850(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99450;
  stringLiteral.str = (char *)0xd000000000000013;
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



/* Address: 0x1001c49d0 | FUN_1001c49d0 */

void FUN_1001c49d0(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99470;
  stringLiteral.str = (char *)0xd000000000000018;
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



/* Address: 0x1001c4b50 | FUN_1001c4b50 */

void FUN_1001c4b50(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99490;
  stringLiteral.str = (char *)0xd00000000000001b;
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



/* Address: 0x1001c4cd0 | FUN_1001c4cd0 */

void FUN_1001c4cd0(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xef64656c62616e65);
  return;
}



/* Address: 0x1001c4cf4 | FUN_1001c4cf4 */

void FUN_1001c4cf4(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xed0000726f727265);
  return;
}



/* Address: 0x1001c4d18 | FUN_1001c4d18 */

void FUN_1001c4d18(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d994b0;
  stringLiteral.str = (char *)0xd000000000000017;
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



/* Address: 0x1001c4e98 | FUN_1001c4e98 */

void FUN_1001c4e98(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d994d0;
  stringLiteral.str = (char *)0xd000000000000013;
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



/* Address: 0x1001c5018 | FUN_1001c5018 */

void FUN_1001c5018(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d994f0;
  stringLiteral.str = (char *)0xd000000000000017;
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



/* Address: 0x1001c5198 | FUN_1001c5198 */

void FUN_1001c5198(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xec000000706c6568);
  return;
}



/* Address: 0x1001c51b8 | FUN_1001c51b8 */

void FUN_1001c51b8(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99510;
  stringLiteral.str = (char *)0xd000000000000013;
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



/* Address: 0x1001c5338 | FUN_1001c5338 */

void FUN_1001c5338(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99530;
  stringLiteral.str = (char *)0xd00000000000001a;
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



/* Address: 0x1001c54b8 | FUN_1001c54b8 */

void FUN_1001c54b8(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xec0000007373656c);
  return;
}



/* Address: 0x1001c54d8 | FUN_1001c54d8 */

void FUN_1001c54d8(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xec00000065726f6d);
  return;
}



/* Address: 0x1001c54f8 | FUN_1001c54f8 */

void FUN_1001c54f8(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xec000000656d616e);
  return;
}



/* Address: 0x1001c5518 | FUN_1001c5518 */

void FUN_1001c5518(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99550;
  stringLiteral.str = (char *)0xd000000000000015;
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



/* Address: 0x1001c5698 | FUN_1001c5698 */

void FUN_1001c5698(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xec000000656e6f6e);
  return;
}



/* Address: 0x1001c56b8 | FUN_1001c56b8 */

void FUN_1001c56b8(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99570;
  stringLiteral.str = (char *)0xd000000000000018;
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



/* Address: 0x1001c5838 | FUN_1001c5838 */

void FUN_1001c5838(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99590;
  stringLiteral.str = (char *)0xd000000000000014;
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



/* Address: 0x1001c59b8 | FUN_1001c59b8 */

void FUN_1001c59b8(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d995b0;
  stringLiteral.str = (char *)0xd000000000000015;
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



/* Address: 0x1001c5b38 | FUN_1001c5b38 */

void FUN_1001c5b38(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xee00646573756170);
  return;
}



/* Address: 0x1001c5b5c | FUN_1001c5b5c */

void FUN_1001c5b5c(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xee006f742d6e6970);
  return;
}



/* Address: 0x1001c5b80 | FUN_1001c5b80 */

void FUN_1001c5b80(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d995d0;
  stringLiteral.str = (char *)0xd000000000000011;
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



/* Address: 0x1001c5d00 | FUN_1001c5d00 */

void FUN_1001c5d00(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d995f0;
  stringLiteral.str = (char *)0xd000000000000016;
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



/* Address: 0x1001c5e80 | FUN_1001c5e80 */

void FUN_1001c5e80(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99610;
  stringLiteral.str = (char *)0xd00000000000001c;
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



/* Address: 0x1001c6000 | FUN_1001c6000 */

void FUN_1001c6000(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99630;
  stringLiteral.str = (char *)0xd000000000000017;
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



/* Address: 0x1001c6180 | FUN_1001c6180 */

void FUN_1001c6180(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99650;
  stringLiteral.str = (char *)0xd000000000000012;
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



/* Address: 0x1001c6300 | FUN_1001c6300 */

void FUN_1001c6300(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xee00686372616573);
  return;
}



/* Address: 0x1001c6324 | FUN_1001c6324 */

void FUN_1001c6324(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99670;
  stringLiteral.str = (char *)0xd000000000000014;
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



/* Address: 0x1001c64a4 | FUN_1001c64a4 */

void FUN_1001c64a4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99690;
  stringLiteral.str = (char *)0xd000000000000010;
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



/* Address: 0x1001c6624 | FUN_1001c6624 */

void FUN_1001c6624(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d996b0;
  stringLiteral.str = (char *)0xd000000000000014;
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



/* Address: 0x1001c67a4 | FUN_1001c67a4 */

void FUN_1001c67a4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d996d0;
  stringLiteral.str = (char *)0xd00000000000001a;
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



/* Address: 0x1001c6924 | FUN_1001c6924 */

void FUN_1001c6924(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d996f0;
  stringLiteral.str = (char *)0xd000000000000011;
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



/* Address: 0x1001c6aa4 | FUN_1001c6aa4 */

void FUN_1001c6aa4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99710;
  stringLiteral.str = (char *)0xd000000000000010;
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



/* Address: 0x1001c6c24 | FUN_1001c6c24 */

void FUN_1001c6c24(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99730;
  stringLiteral.str = (char *)0xd000000000000014;
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



/* Address: 0x1001c6da4 | FUN_1001c6da4 */

void FUN_1001c6da4(void)

{
  FUN_1001e681c(0x2e6c6172656e6567,0xec00000077656976);
  return;
}



/* Address: 0x1001c6dc4 | FUN_1001c6dc4 */

void FUN_1001c6dc4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99750;
  stringLiteral.str = (char *)0xd00000000000001a;
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



/* Address: 0x1001c6f44 | FUN_1001c6f44 */

void FUN_1001c6f44(void)

{
  FUN_1001e681c(0x7079742d6d657469,0xef726f6c6f632e65);
  return;
}



/* Address: 0x1001c6f68 | FUN_1001c6f68 */

void FUN_1001c6f68(void)

{
  FUN_1001e681c(0x7079742d6d657469,0xef6567616d692e65);
  return;
}



/* Address: 0x1001c6f8c | FUN_1001c6f8c */

void FUN_1001c6f8c(void)

{
  FUN_1001e681c(0x7079742d6d657469,0xee006b6e696c2e65);
  return;
}



/* Address: 0x1001c6fb0 | FUN_1001c6fb0 */

void FUN_1001c6fb0(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99770;
  stringLiteral.str = (char *)0xd000000000000018;
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



/* Address: 0x1001c7130 | FUN_1001c7130 */

void FUN_1001c7130(void)

{
  FUN_1001e681c(0x7079742d6d657469,0xee00747865742e65);
  return;
}



/* Address: 0x1001c7154 | FUN_1001c7154 */

void FUN_1001c7154(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99790;
  stringLiteral.str = (char *)0xd000000000000011;
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



/* Address: 0x1001c72d4 | FUN_1001c72d4 */

void FUN_1001c72d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d997b0;
  stringLiteral.str = (char *)0xd000000000000021;
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



/* Address: 0x1001c7454 | FUN_1001c7454 */

void FUN_1001c7454(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d997e0;
  stringLiteral.str = (char *)0xd000000000000030;
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



/* Address: 0x1001c75d4 | FUN_1001c75d4 */

void FUN_1001c75d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99820;
  stringLiteral.str = (char *)0xd00000000000002f;
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



/* Address: 0x1001c7754 | FUN_1001c7754 */

void FUN_1001c7754(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99850;
  stringLiteral.str = (char *)0xd00000000000002b;
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



/* Address: 0x1001c78d4 | FUN_1001c78d4 */

void FUN_1001c78d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99880;
  stringLiteral.str = (char *)0xd00000000000002e;
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



/* Address: 0x1001c7a54 | FUN_1001c7a54 */

void FUN_1001c7a54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d998b0;
  stringLiteral.str = (char *)0xd000000000000021;
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



/* Address: 0x1001c7bd4 | FUN_1001c7bd4 */

void FUN_1001c7bd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d998e0;
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



/* Address: 0x1001c7d54 | FUN_1001c7d54 */

void FUN_1001c7d54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99910;
  stringLiteral.str = (char *)0xd00000000000002c;
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



/* Address: 0x1001c7ed4 | FUN_1001c7ed4 */

void FUN_1001c7ed4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99940;
  stringLiteral.str = (char *)0xd00000000000002e;
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



/* Address: 0x1001c8054 | FUN_1001c8054 */

void FUN_1001c8054(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99970;
  stringLiteral.str = (char *)0xd000000000000034;
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



/* Address: 0x1001c81d4 | FUN_1001c81d4 */

void FUN_1001c81d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d999b0;
  stringLiteral.str = (char *)0xd00000000000002a;
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


