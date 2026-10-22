/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001ce354 | FUN_1001ce354 */

void FUN_1001ce354(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a600;
  stringLiteral.str = (char *)0xd000000000000036;
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



/* Address: 0x1001ce4d4 | FUN_1001ce4d4 */

void FUN_1001ce4d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a640;
  stringLiteral.str = (char *)0xd000000000000028;
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



/* Address: 0x1001ce654 | FUN_1001ce654 */

void FUN_1001ce654(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a670;
  stringLiteral.str = (char *)0xd000000000000028;
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



/* Address: 0x1001ce7d4 | FUN_1001ce7d4 */

void FUN_1001ce7d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a6a0;
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



/* Address: 0x1001ce954 | FUN_1001ce954 */

void FUN_1001ce954(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a6d0;
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



/* Address: 0x1001cead4 | FUN_1001cead4 */

void FUN_1001cead4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a700;
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



/* Address: 0x1001cec54 | FUN_1001cec54 */

void FUN_1001cec54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a730;
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



/* Address: 0x1001cedd4 | FUN_1001cedd4 */

void FUN_1001cedd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a750;
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



/* Address: 0x1001cef54 | FUN_1001cef54 */

void FUN_1001cef54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a780;
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



/* Address: 0x1001cf0d4 | FUN_1001cf0d4 */

void FUN_1001cf0d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a7b0;
  stringLiteral.str = (char *)0xd000000000000027;
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



/* Address: 0x1001cf254 | FUN_1001cf254 */

void FUN_1001cf254(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a7e0;
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



/* Address: 0x1001cf3d4 | FUN_1001cf3d4 */

void FUN_1001cf3d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a810;
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



/* Address: 0x1001cf554 | FUN_1001cf554 */

void FUN_1001cf554(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a840;
  stringLiteral.str = &DAT_d000000000000032;
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



/* Address: 0x1001cf6d4 | FUN_1001cf6d4 */

void FUN_1001cf6d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a880;
  stringLiteral.str = (char *)0xd000000000000028;
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



/* Address: 0x1001cf854 | FUN_1001cf854 */

void FUN_1001cf854(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a8b0;
  stringLiteral.str = (char *)0xd000000000000026;
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



/* Address: 0x1001cf9d4 | FUN_1001cf9d4 */

void FUN_1001cf9d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a8e0;
  stringLiteral.str = (char *)0xd000000000000036;
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



/* Address: 0x1001cfb54 | FUN_1001cfb54 */

void FUN_1001cfb54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a920;
  stringLiteral.str = (char *)0xd000000000000033;
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



/* Address: 0x1001cfcd4 | FUN_1001cfcd4 */

void FUN_1001cfcd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a960;
  stringLiteral.str = (char *)0xd00000000000002d;
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



/* Address: 0x1001cfe54 | FUN_1001cfe54 */

void FUN_1001cfe54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a990;
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



/* Address: 0x1001cffd4 | FUN_1001cffd4 */

void FUN_1001cffd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9a9d0;
  stringLiteral.str = (char *)0xd00000000000002d;
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



/* Address: 0x1001d0154 | FUN_1001d0154 */

void FUN_1001d0154(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aa00;
  stringLiteral.str = (char *)0xd000000000000027;
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



/* Address: 0x1001d02d4 | FUN_1001d02d4 */

void FUN_1001d02d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aa30;
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



/* Address: 0x1001d0454 | FUN_1001d0454 */

void FUN_1001d0454(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aa60;
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



/* Address: 0x1001d05d4 | FUN_1001d05d4 */

void FUN_1001d05d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aa90;
  stringLiteral.str = (char *)0xd000000000000028;
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



/* Address: 0x1001d0754 | FUN_1001d0754 */

void FUN_1001d0754(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aac0;
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



/* Address: 0x1001d08d4 | FUN_1001d08d4 */

void FUN_1001d08d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aaf0;
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



/* Address: 0x1001d0a54 | FUN_1001d0a54 */

void FUN_1001d0a54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ab10;
  stringLiteral.str = (char *)0xd000000000000026;
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



/* Address: 0x1001d0bd4 | FUN_1001d0bd4 */

void FUN_1001d0bd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ab40;
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



/* Address: 0x1001d0d54 | FUN_1001d0d54 */

void FUN_1001d0d54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ab70;
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



/* Address: 0x1001d0ed4 | FUN_1001d0ed4 */

void FUN_1001d0ed4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aba0;
  stringLiteral.str = (char *)0xd000000000000027;
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



/* Address: 0x1001d1054 | FUN_1001d1054 */

void FUN_1001d1054(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9abd0;
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



/* Address: 0x1001d11d4 | FUN_1001d11d4 */

void FUN_1001d11d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ac00;
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



/* Address: 0x1001d1354 | FUN_1001d1354 */

void FUN_1001d1354(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ac40;
  stringLiteral.str = (char *)0xd00000000000002d;
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



/* Address: 0x1001d14d4 | FUN_1001d14d4 */

void FUN_1001d14d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ac70;
  stringLiteral.str = (char *)0xd000000000000027;
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



/* Address: 0x1001d1654 | FUN_1001d1654 */

void FUN_1001d1654(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aca0;
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



/* Address: 0x1001d17d4 | FUN_1001d17d4 */

void FUN_1001d17d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9acd0;
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



/* Address: 0x1001d1954 | FUN_1001d1954 */

void FUN_1001d1954(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ad00;
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



/* Address: 0x1001d1ad4 | FUN_1001d1ad4 */

void FUN_1001d1ad4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ad20;
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



/* Address: 0x1001d1c54 | FUN_1001d1c54 */

void FUN_1001d1c54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ad50;
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



/* Address: 0x1001d1dd4 | FUN_1001d1dd4 */

void FUN_1001d1dd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ad80;
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



/* Address: 0x1001d1f54 | FUN_1001d1f54 */

void FUN_1001d1f54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9adb0;
  stringLiteral.str = (char *)0xd00000000000002d;
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



/* Address: 0x1001d20d4 | FUN_1001d20d4 */

void FUN_1001d20d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ade0;
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



/* Address: 0x1001d2254 | FUN_1001d2254 */

void FUN_1001d2254(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ae10;
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



/* Address: 0x1001d23d4 | FUN_1001d23d4 */

void FUN_1001d23d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ae40;
  stringLiteral.str = (char *)0xd000000000000026;
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



/* Address: 0x1001d2554 | FUN_1001d2554 */

void FUN_1001d2554(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9ae70;
  stringLiteral.str = (char *)0xd000000000000027;
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



/* Address: 0x1001d26d4 | FUN_1001d26d4 */

void FUN_1001d26d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aea0;
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



/* Address: 0x1001d2854 | FUN_1001d2854 */

void FUN_1001d2854(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9aed0;
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



/* Address: 0x1001d29d4 | FUN_1001d29d4 */

void FUN_1001d29d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9af00;
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



/* Address: 0x1001d2b54 | FUN_1001d2b54 */

void FUN_1001d2b54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9af20;
  stringLiteral.str = (char *)0xd000000000000028;
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



/* Address: 0x1001d2cd4 | FUN_1001d2cd4 */

void FUN_1001d2cd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9af50;
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



/* Address: 0x1001d2e54 | FUN_1001d2e54 */

void FUN_1001d2e54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9af80;
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



/* Address: 0x1001d2fd4 | FUN_1001d2fd4 */

void FUN_1001d2fd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9afb0;
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



/* Address: 0x1001d3154 | FUN_1001d3154 */

void FUN_1001d3154(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9afe0;
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



/* Address: 0x1001d32d4 | FUN_1001d32d4 */

void FUN_1001d32d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b000;
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



/* Address: 0x1001d3454 | FUN_1001d3454 */

void FUN_1001d3454(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b030;
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



/* Address: 0x1001d35d4 | FUN_1001d35d4 */

void FUN_1001d35d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b050;
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



/* Address: 0x1001d3754 | FUN_1001d3754 */

void FUN_1001d3754(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b080;
  stringLiteral.str = (char *)0xd000000000000026;
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



/* Address: 0x1001d38d4 | FUN_1001d38d4 */

void FUN_1001d38d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b0b0;
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



/* Address: 0x1001d3a54 | FUN_1001d3a54 */

void FUN_1001d3a54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b0e0;
  stringLiteral.str = (char *)0xd000000000000026;
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



/* Address: 0x1001d3bd4 | FUN_1001d3bd4 */

void FUN_1001d3bd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b110;
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



/* Address: 0x1001d3d54 | FUN_1001d3d54 */

void FUN_1001d3d54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b140;
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



/* Address: 0x1001d3ed4 | FUN_1001d3ed4 */

void FUN_1001d3ed4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b160;
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



/* Address: 0x1001d4054 | FUN_1001d4054 */

void FUN_1001d4054(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b190;
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



/* Address: 0x1001d41d4 | FUN_1001d41d4 */

void FUN_1001d41d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9b1b0;
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


