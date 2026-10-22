/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001bda88 | FUN_1001bda88 */

void FUN_1001bda88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98a40;
  stringLiteral.str = (char *)0xd000000000000025;
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



/* Address: 0x1001bdc08 | FUN_1001bdc08 */

void FUN_1001bdc08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98a70;
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



/* Address: 0x1001bdd88 | FUN_1001bdd88 */

void FUN_1001bdd88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98a90;
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



/* Address: 0x1001bdf08 | FUN_1001bdf08 */

void FUN_1001bdf08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98ab0;
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



/* Address: 0x1001be088 | FUN_1001be088 */

void FUN_1001be088(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98ad0;
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



/* Address: 0x1001be208 | FUN_1001be208 */

void FUN_1001be208(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98af0;
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



/* Address: 0x1001be388 | FUN_1001be388 */

void FUN_1001be388(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98b10;
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



/* Address: 0x1001be508 | FUN_1001be508 */

void FUN_1001be508(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98b30;
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



/* Address: 0x1001be688 | FUN_1001be688 */

void FUN_1001be688(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98b50;
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



/* Address: 0x1001be808 | FUN_1001be808 */

void FUN_1001be808(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98b70;
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



/* Address: 0x1001be988 | FUN_1001be988 */

void FUN_1001be988(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98b90;
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



/* Address: 0x1001beb08 | FUN_1001beb08 */

void FUN_1001beb08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98bc0;
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



/* Address: 0x1001bec88 | FUN_1001bec88 */

void FUN_1001bec88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98bf0;
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



/* Address: 0x1001bee08 | FUN_1001bee08 */

void FUN_1001bee08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98c20;
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



/* Address: 0x1001bef88 | FUN_1001bef88 */

void FUN_1001bef88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98c50;
  stringLiteral.str = (char *)0xd000000000000024;
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



/* Address: 0x1001bf108 | FUN_1001bf108 */

void FUN_1001bf108(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98c80;
  stringLiteral.str = (char *)0xd00000000000001e;
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



/* Address: 0x1001bf288 | FUN_1001bf288 */

void FUN_1001bf288(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98ca0;
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



/* Address: 0x1001bf408 | FUN_1001bf408 */

void FUN_1001bf408(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98cc0;
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



/* Address: 0x1001bf588 | FUN_1001bf588 */

void FUN_1001bf588(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98ce0;
  stringLiteral.str = (char *)0xd000000000000024;
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



/* Address: 0x1001bf708 | FUN_1001bf708 */

void FUN_1001bf708(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98d10;
  stringLiteral.str = (char *)0xd000000000000020;
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



/* Address: 0x1001bf888 | FUN_1001bf888 */

void FUN_1001bf888(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98d40;
  stringLiteral.str = (char *)0xd000000000000024;
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



/* Address: 0x1001bfa08 | FUN_1001bfa08 */

void FUN_1001bfa08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98d70;
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



/* Address: 0x1001bfb88 | FUN_1001bfb88 */

void FUN_1001bfb88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98d90;
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



/* Address: 0x1001bfd08 | FUN_1001bfd08 */

void FUN_1001bfd08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98db0;
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



/* Address: 0x1001bfe88 | FUN_1001bfe88 */

void FUN_1001bfe88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98dd0;
  stringLiteral.str = (char *)0xd000000000000025;
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



/* Address: 0x1001c0008 | FUN_1001c0008 */

void FUN_1001c0008(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98e00;
  stringLiteral.str = (char *)0xd000000000000024;
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



/* Address: 0x1001c0188 | FUN_1001c0188 */

void FUN_1001c0188(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98e30;
  stringLiteral.str = (char *)0xd00000000000001e;
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



/* Address: 0x1001c0308 | FUN_1001c0308 */

void FUN_1001c0308(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98e50;
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



/* Address: 0x1001c0488 | FUN_1001c0488 */

void FUN_1001c0488(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98e70;
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



/* Address: 0x1001c0608 | FUN_1001c0608 */

void FUN_1001c0608(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98e90;
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



/* Address: 0x1001c0788 | FUN_1001c0788 */

void FUN_1001c0788(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98eb0;
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



/* Address: 0x1001c0908 | FUN_1001c0908 */

void FUN_1001c0908(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98ed0;
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



/* Address: 0x1001c0a88 | FUN_1001c0a88 */

void FUN_1001c0a88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98ef0;
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



/* Address: 0x1001c0c08 | FUN_1001c0c08 */

void FUN_1001c0c08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98f10;
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



/* Address: 0x1001c0d88 | FUN_1001c0d88 */

void FUN_1001c0d88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98f30;
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



/* Address: 0x1001c0f08 | FUN_1001c0f08 */

void FUN_1001c0f08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98f60;
  stringLiteral.str = (char *)0xd00000000000001e;
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



/* Address: 0x1001c1088 | FUN_1001c1088 */

void FUN_1001c1088(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98f80;
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



/* Address: 0x1001c1208 | FUN_1001c1208 */

void FUN_1001c1208(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98fa0;
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



/* Address: 0x1001c1388 | FUN_1001c1388 */

void FUN_1001c1388(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98fc0;
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



/* Address: 0x1001c1508 | FUN_1001c1508 */

void FUN_1001c1508(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d98fe0;
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



/* Address: 0x1001c1688 | FUN_1001c1688 */

void FUN_1001c1688(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99000;
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



/* Address: 0x1001c1808 | FUN_1001c1808 */

void FUN_1001c1808(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99020;
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



/* Address: 0x1001c1988 | FUN_1001c1988 */

void FUN_1001c1988(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99040;
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



/* Address: 0x1001c1b08 | FUN_1001c1b08 */

void FUN_1001c1b08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99060;
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



/* Address: 0x1001c1c88 | FUN_1001c1c88 */

void FUN_1001c1c88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99080;
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



/* Address: 0x1001c1e08 | FUN_1001c1e08 */

void FUN_1001c1e08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d990a0;
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



/* Address: 0x1001c1f88 | FUN_1001c1f88 */

void FUN_1001c1f88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d990c0;
  stringLiteral.str = (char *)0xd000000000000025;
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



/* Address: 0x1001c2108 | FUN_1001c2108 */

void FUN_1001c2108(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d990f0;
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



/* Address: 0x1001c2288 | FUN_1001c2288 */

void FUN_1001c2288(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99120;
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



/* Address: 0x1001c2408 | FUN_1001c2408 */

void FUN_1001c2408(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99140;
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



/* Address: 0x1001c2588 | FUN_1001c2588 */

void FUN_1001c2588(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99160;
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



/* Address: 0x1001c2708 | FUN_1001c2708 */

void FUN_1001c2708(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99190;
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



/* Address: 0x1001c2888 | FUN_1001c2888 */

void FUN_1001c2888(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d991b0;
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



/* Address: 0x1001c2a08 | FUN_1001c2a08 */

void FUN_1001c2a08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d991d0;
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



/* Address: 0x1001c2b88 | FUN_1001c2b88 */

void FUN_1001c2b88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d991f0;
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



/* Address: 0x1001c2d08 | FUN_1001c2d08 */

void FUN_1001c2d08(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99210;
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



/* Address: 0x1001c2e88 | FUN_1001c2e88 */

void FUN_1001c2e88(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99230;
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



/* Address: 0x1001c3008 | FUN_1001c3008 */

void FUN_1001c3008(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99250;
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



/* Address: 0x1001c3188 | FUN_1001c3188 */

void FUN_1001c3188(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99270;
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



/* Address: 0x1001c3308 | FUN_1001c3308 */

void FUN_1001c3308(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99290;
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



/* Address: 0x1001c3488 | FUN_1001c3488 */

void FUN_1001c3488(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d992b0;
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



/* Address: 0x1001c3608 | FUN_1001c3608 */

void FUN_1001c3608(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d992d0;
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



/* Address: 0x1001c3788 | FUN_1001c3788 */

void FUN_1001c3788(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d992f0;
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



/* Address: 0x1001c3908 | FUN_1001c3908 */

void FUN_1001c3908(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d99310;
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


