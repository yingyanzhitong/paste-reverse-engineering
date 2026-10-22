/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001da354 | FUN_1001da354 */

void FUN_1001da354(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9bf30;
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



/* Address: 0x1001da4d4 | FUN_1001da4d4 */

void FUN_1001da4d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9bf60;
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



/* Address: 0x1001da654 | FUN_1001da654 */

void FUN_1001da654(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9bf90;
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



/* Address: 0x1001da7d4 | FUN_1001da7d4 */

void FUN_1001da7d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9bfc0;
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



/* Address: 0x1001da954 | FUN_1001da954 */

void FUN_1001da954(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9bff0;
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



/* Address: 0x1001daad4 | FUN_1001daad4 */

void FUN_1001daad4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c010;
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



/* Address: 0x1001dac54 | FUN_1001dac54 */

void FUN_1001dac54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c030;
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



/* Address: 0x1001dadd4 | FUN_1001dadd4 */

void FUN_1001dadd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c050;
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



/* Address: 0x1001daf54 | FUN_1001daf54 */

void FUN_1001daf54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c070;
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



/* Address: 0x1001db0d4 | FUN_1001db0d4 */

void FUN_1001db0d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c090;
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



/* Address: 0x1001db254 | FUN_1001db254 */

void FUN_1001db254(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c0b0;
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



/* Address: 0x1001db3d4 | FUN_1001db3d4 */

void FUN_1001db3d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c0d0;
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



/* Address: 0x1001db554 | FUN_1001db554 */

void FUN_1001db554(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c0f0;
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



/* Address: 0x1001db6d4 | FUN_1001db6d4 */

void FUN_1001db6d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c110;
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



/* Address: 0x1001db854 | FUN_1001db854 */

void FUN_1001db854(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c130;
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



/* Address: 0x1001db9d4 | FUN_1001db9d4 */

void FUN_1001db9d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c150;
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



/* Address: 0x1001dbb54 | FUN_1001dbb54 */

void FUN_1001dbb54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c170;
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



/* Address: 0x1001dbcd4 | FUN_1001dbcd4 */

void FUN_1001dbcd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c1a0;
  stringLiteral.str = (char *)0xd00000000000003b;
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



/* Address: 0x1001dbe54 | FUN_1001dbe54 */

void FUN_1001dbe54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c1e0;
  stringLiteral.str = (char *)0xd000000000000040;
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



/* Address: 0x1001dbfd4 | FUN_1001dbfd4 */

void FUN_1001dbfd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c230;
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



/* Address: 0x1001dc154 | FUN_1001dc154 */

void FUN_1001dc154(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c250;
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



/* Address: 0x1001dc2d4 | FUN_1001dc2d4 */

void FUN_1001dc2d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c270;
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



/* Address: 0x1001dc454 | FUN_1001dc454 */

void FUN_1001dc454(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c290;
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



/* Address: 0x1001dc5d4 | FUN_1001dc5d4 */

void FUN_1001dc5d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c2b0;
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



/* Address: 0x1001dc754 | FUN_1001dc754 */

void FUN_1001dc754(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c2d0;
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



/* Address: 0x1001dc8d4 | FUN_1001dc8d4 */

void FUN_1001dc8d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c2f0;
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



/* Address: 0x1001dca54 | FUN_1001dca54 */

void FUN_1001dca54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c310;
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



/* Address: 0x1001dcbd4 | FUN_1001dcbd4 */

void FUN_1001dcbd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c340;
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



/* Address: 0x1001dcd54 | FUN_1001dcd54 */

void FUN_1001dcd54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c360;
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



/* Address: 0x1001dced4 | FUN_1001dced4 */

void FUN_1001dced4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c380;
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



/* Address: 0x1001dd054 | FUN_1001dd054 */

void FUN_1001dd054(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c3b0;
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



/* Address: 0x1001dd1d4 | FUN_1001dd1d4 */

void FUN_1001dd1d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c3f0;
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



/* Address: 0x1001dd354 | FUN_1001dd354 */

void FUN_1001dd354(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c420;
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



/* Address: 0x1001dd4d4 | FUN_1001dd4d4 */

void FUN_1001dd4d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c450;
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



/* Address: 0x1001dd654 | FUN_1001dd654 */

void FUN_1001dd654(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c480;
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



/* Address: 0x1001dd7d4 | FUN_1001dd7d4 */

void FUN_1001dd7d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c4b0;
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



/* Address: 0x1001dd954 | FUN_1001dd954 */

void FUN_1001dd954(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c4e0;
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



/* Address: 0x1001ddad4 | FUN_1001ddad4 */

void FUN_1001ddad4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c510;
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



/* Address: 0x1001ddc54 | FUN_1001ddc54 */

void FUN_1001ddc54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c540;
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



/* Address: 0x1001dddd4 | FUN_1001dddd4 */

void FUN_1001dddd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c570;
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



/* Address: 0x1001ddf54 | FUN_1001ddf54 */

void FUN_1001ddf54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c5b0;
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



/* Address: 0x1001de0d4 | FUN_1001de0d4 */

void FUN_1001de0d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c5e0;
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



/* Address: 0x1001de254 | FUN_1001de254 */

void FUN_1001de254(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c600;
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



/* Address: 0x1001de3d4 | FUN_1001de3d4 */

void FUN_1001de3d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c630;
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



/* Address: 0x1001de554 | FUN_1001de554 */

void FUN_1001de554(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c660;
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



/* Address: 0x1001de6d4 | FUN_1001de6d4 */

void FUN_1001de6d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c680;
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



/* Address: 0x1001de854 | FUN_1001de854 */

void FUN_1001de854(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c6a0;
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



/* Address: 0x1001de9d4 | FUN_1001de9d4 */

void FUN_1001de9d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c6c0;
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



/* Address: 0x1001deb54 | FUN_1001deb54 */

void FUN_1001deb54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c6e0;
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



/* Address: 0x1001decd4 | FUN_1001decd4 */

void FUN_1001decd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c700;
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



/* Address: 0x1001dee54 | FUN_1001dee54 */

void FUN_1001dee54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c720;
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



/* Address: 0x1001defd4 | FUN_1001defd4 */

void FUN_1001defd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c740;
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



/* Address: 0x1001df154 | FUN_1001df154 */

void FUN_1001df154(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c760;
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



/* Address: 0x1001df2d4 | FUN_1001df2d4 */

void FUN_1001df2d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c780;
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



/* Address: 0x1001df454 | FUN_1001df454 */

void FUN_1001df454(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c7a0;
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



/* Address: 0x1001df5d4 | FUN_1001df5d4 */

void FUN_1001df5d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c7c0;
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



/* Address: 0x1001df754 | FUN_1001df754 */

void FUN_1001df754(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c7e0;
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



/* Address: 0x1001df8d4 | FUN_1001df8d4 */

void FUN_1001df8d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c800;
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



/* Address: 0x1001dfa54 | FUN_1001dfa54 */

void FUN_1001dfa54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c820;
  stringLiteral.str = (char *)0xd000000000000031;
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



/* Address: 0x1001dfbd4 | FUN_1001dfbd4 */

void FUN_1001dfbd4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c860;
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



/* Address: 0x1001dfd54 | FUN_1001dfd54 */

void FUN_1001dfd54(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c890;
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



/* Address: 0x1001dfed4 | FUN_1001dfed4 */

void FUN_1001dfed4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c8c0;
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



/* Address: 0x1001e0054 | FUN_1001e0054 */

void FUN_1001e0054(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c8f0;
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



/* Address: 0x1001e01d4 | FUN_1001e01d4 */

void FUN_1001e01d4(void)

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
  stringLiteral.bridgeObject = (void *)0x8000000100d9c920;
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


